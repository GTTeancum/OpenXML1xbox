"""Expand native talent registry arrays together; scope shared templates by owner."""
from pathlib import Path
from recomp_source import RecompSources
import argparse,re
from talent_registry_layout import verify_retail,layout
ROOT=Path(__file__).resolve().parents[1]
MARK='/* XML1 EXPANDED TALENT REGISTRY */'
old=verify_retail();new=layout(254,255)

def pairs(a,b):
    return {a[k]:b[k] for k in a if k!='size'}

name=pairs(old['name'],new['name'])
ids=pairs(old['ids'],new['ids'])
meta=pairs(old['meta'],new['meta'])
queue={0x25c:4*255,0x260:4*255+4,0x264:4*255+8}
capacity={0x96:254,0x95:253}
manager={old['pool']:new['pool'],old['name_values']:new['name_values'],
         old['id_values']:new['id_values'],0x50bc:new['pool']+new['meta']['used'],
         0x5f0c:new['id_map']+12+new['ids']['used']}
for field in old['meta']:
    if field!='size':manager[old['pool']+old['meta'][field]]=new['pool']+new['meta'][field]
for delta in (0,4,8,12):manager[old['id_map']+delta]=new['id_map']+delta
for delta in (0,4,8,12,0x1f0):manager[old['cache']+delta]=new['cache']+delta

SCOPES={}
def group(addresses,*maps):
    combined={}
    for mapping in maps:
        for k,v in mapping.items():
            if k in combined and combined[k]!=v:raise ValueError('Ambiguous offset')
            combined[k]=v
    for address in addresses:SCOPES[address]=combined

group([0xb3640,0xb3db0,0xb4090,0xb4ff0],name,capacity)
group([0xb36b0,0xb5040,0xea9e0,0xeaa50,0xeb9d0],ids,capacity)
group([0xb3aa0,0xb3cf0],queue,capacity)
group([0xb39e0,0xb3a30,0xb3d40,0xb3fa0,0xb4000,0xb4770,0xb4f60,0xb55d0],meta,capacity)
group([0xb3e90,0xb4d30,0xb5080,0xb5620],manager,meta,capacity)
group([0xb49e0,0xb4a50,0xb4b30,0xb4c40,0xb4cd0,0xb4d90,0xb4df0,0xb4e60,
       0xb4ea0,0xb5170,0xb5200,0xb53a0],manager)
group([0xb58a0],manager,ids)
group([0xeb320,0xeb690,0xeb700,0xebb40,0xebe20,0xec200,0xec270],
      {old['id_values']:new['id_values']},ids)
ALLOCATIONS={0xb5980,0xb59d0,0xb5e00,0xb5f40}

def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--apply',action='store_true')
    parser.add_argument('--fixture-output',type=Path)
    parser.add_argument('--generated-dir',type=Path,default=ROOT/'src/recomp/gen')
    args=parser.parse_args()
    header=(ROOT/'src/engine/progression/talent_registry_layout.h').read_text()
    declared={k:int(v,16) for k,v in re.findall(r'#define (XML1_TALENT_\w+) 0x([0-9A-F]+)u',header)}
    expected={'NAME_VALUES':new['name_values'],'NAME_BITMAP':new['name']['bitmap'],
              'NAME_USED':new['name']['used'],'META_POOL':new['pool'],
              'META_CONSTRUCTED':new['meta']['constructed'],'META_BITMAP':new['meta']['bitmap'],
              'META_USED':new['meta']['used'],'META_GENERATIONS':new['meta']['generations'],
              'META_MASK':new['meta']['mask'],'ID_MAP':new['id_map'],
              'ID_BITMAP':new['ids']['bitmap'],'ID_USED':new['ids']['used'],
              'ID_VALUES':new['id_values'],'REGISTRY_SIZE':new['size']}
    if declared!={'XML1_TALENT_'+k:v for k,v in expected.items()}:
        raise ValueError('C registry layout disagrees with derived layout')
    pending={};found=set();fixture={}
    fixture_methods={0xb3e90,0xb39e0,0xb3a30,0xb3d40,0xb3fa0,0xb4770,0xb4830,0xb55d0,0xb4f60,0xb4000}
    fixture_methods|={0xb3640,0xb36b0,0xb4090,0xb3aa0,0xb3ce0,0xb3db0,0xb3cf0,
                      0xb4ff0,0xb5040,0xea9e0,0x14a7a0}
    index=RecompSources(args.generated_dir)
    for path in index.paths():
        source=index.canonical_read(path);changed=False
        def replace(match):
            nonlocal changed
            address=int(match[1],16);body=match[0]
            if address not in SCOPES and address not in ALLOCATIONS:return body
            found.add(address)
            if MARK in body:
                # Existing generated registries used the retail three-source
                # cache. Grow the owning allocation when that cache expands.
                if address in ALLOCATIONS:
                    before=body
                    body=body.replace('0xA698',f'0x{new["size"]:X}')
                    changed |= before!=body
                # Upgrade candidates generated before the manager-relative
                # handle mask was included, without nesting existing guards.
                if address==0xb3e90 and 'MEM32(ecx + 0x5318)' in body:
                    body=body.replace('MEM32(ecx + 0x5318)',
                        f"MEM32(ecx + (_talent_expanded ? 0x{new['pool']+new['meta']['mask']:X}u : 0x5318u))")
                    changed=True
                return body
            mapping=SCOPES.get(address,{0x6360:new['size']})
            count=0
            def constant(m):
                nonlocal count
                value=int(m[0],16)
                if value not in mapping:return m[0]
                count+=1
                if address in ALLOCATIONS:return f'0x{mapping[value]:X}'
                return f'(_talent_expanded ? 0x{mapping[value]:X}u : {m[0]}u)'
            # Comments are evidence of the retail instruction, not executable offsets.
            parts=re.split(r'(/\*.*?\*/)',body,flags=re.S)
            body=''.join(part if part.startswith('/*') else re.sub(r'0x[0-9A-F]+\b',constant,part)
                         for part in parts)
            if not count:raise ValueError(f'No audited offsets in {address:08X}')
            prefix=MARK+'\n'
            if address==0xb58a0:
                prefix+='    xml1_talent_registry_begin(g_ecx);\n    const int _talent_expanded=1;\n'
                end='    eax = esi;\n    POP32(esp, esi);'
                if body.count(end)!=1:raise ValueError('Registry constructor epilogue changed')
                body=body.replace(end,'    xml1_talent_registry_end();\n'+end)
            elif address not in ALLOCATIONS:
                prefix+='    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);\n'
            # Retail bitmap initialization writes five words. The expanded pool
            # needs eight; clear the complete arrays before native queue setup.
            if address in (0xb4090,0xb3fa0,0xeaa50):
                kind={0xb4090:1,0xb3fa0:2,0xeaa50:3}[address]
                prefix+=f'    if (_talent_expanded) xml1_talent_registry_clear_bits(g_ecx,{kind});\n'
            body=body.replace('{\n','{\n    '+prefix,1);changed=True
            return body
        source=re.sub(r'void sub_([0-9A-F]{8})\(void\)\n\{.*?\n\}',replace,source,flags=re.S)
        marker='loc_000B5728: ;\n'
        call='    if (_talent_expanded) eax=xml1_talent_registry_id_predecessor(edi);\n'
        if marker in source and marker+call not in source:
            if source.count(marker)!=1:raise ValueError('Talent ID allocation seam changed')
            source=source.replace(marker,marker+call,1);changed=True
        for match in re.finditer(r'void sub_([0-9A-F]{8})\(void\)\n\{.*?\n\}',source,re.S):
            address=int(match[1],16)
            if address in fixture_methods:fixture[address]=match[0]
        if changed:
            if '#include "engine/progression/talent_registry_guest.h"' not in source:
                source='#include "engine/progression/talent_registry_guest.h"\n'+source
            pending[path]=source
    if found!=set(SCOPES)|ALLOCATIONS:raise ValueError('Missing registry methods')
    if args.apply:
        for path,source in pending.items():path.write_text(index.restore_names(source))
    if args.fixture_output:
        if set(fixture)!=fixture_methods:raise ValueError('Missing native pool fixture method')
        args.fixture_output.parent.mkdir(parents=True,exist_ok=True)
        args.fixture_output.write_text(''.join(f'void sub_{a:08X}(void);\n' for a in sorted(fixture))+
                                       '\n'.join(fixture[a] for a in sorted(fixture)))
    print(f'Validated {len(found)} registry methods; allocation {old["size"]} -> {new["size"]} bytes')

if __name__=='__main__':main()
