"""Expand the native parsed talent cache to the existing byte source-ID domain.

The definition registry and filename table already support imported sources.
This cache must retain every pinned source, not overwrite the fourth file.
Native XML constructors, reference counts, tree operations and release stay native.
Shared queue templates retain their retail layout for non-talent owners.
"""
from pathlib import Path
from recomp_source import RecompSources
import argparse,re
from talent_registry_layout import source_cache,layout
ROOT=Path(__file__).resolve().parents[1]
MARK='/* XML1 EXPANDED TALENT SOURCE CACHE */'
old=source_cache(3);new=source_cache(255)
assert old['values']==0x118 and old['constructed']==0x1f0 and old['size']==0x1f4
pool={old['pool'][k]:new['pool'][k] for k in old['pool'] if k!='size'}
values={old[k]:new[k] for k in ('values','refcount','constructed')}
queue={0x10:0x400,0x14:0x404,0x18:0x408}
SCOPES={}
for a in (0xb3e20,0xb4120,0xb47e0,0xb5360):SCOPES[a]=pool
for a in (0xb3ef0,0xb4b30,0xb4c40,0xb5290,0xb53a0):SCOPES[a]=values
for a in (0xb3ac0,0xb40e0):SCOPES[a]=queue
CAPACITY={0xb3e20,0xb4120,0xb47e0,0xb40e0}
FIXTURE={0xb3ac0,0xb3e20,0xb3e80,0xb40e0,0xb4120,0xb47e0,0xb5360,0x14a7a0}

def main():
 ap=argparse.ArgumentParser(description=__doc__);ap.add_argument('--apply',action='store_true');ap.add_argument('--fixture-output',type=Path);ap.add_argument('--generated-dir',type=Path,default=ROOT/'src/recomp/gen');args=ap.parse_args()
 found=set();fixtures={};pending={}
 index=RecompSources(args.generated_dir)
 for path in index.paths():
  source=index.canonical_read(path);changed=False
  def method(m):
   nonlocal changed
   a=int(m[1],16);body=m[0]
   if a==0xb58a0:
    # The owning constructor zeroes the whole expanded allocation; move its
    # explicit first constructed-bitmap word as well. Other words start zero.
    body=body.replace('0xA694u',f'0x{layout(254)["cache"]+new["constructed"]:X}u')
    changed |= body!=m[0]
   if a not in SCOPES:return body
   found.add(a)
   if MARK in body:return body
   mapping=SCOPES[a]
   def constants(part):
    def cv(t):
     v=int(t[0],16)
     return f'(_talent_cache_expanded ? 0x{mapping[v]:X}u : {t[0]}u)' if v in mapping else t[0]
    part=re.sub(r'0x[0-9A-F]+\b',cv,part)
    if a in CAPACITY:
     part=re.sub(r'(?<![\w])3(?![\w])','(_talent_cache_expanded ? 255 : 3)',part)
     if a in (0xb4120,0xb40e0):part=part.replace('eax = 2;','eax = (_talent_cache_expanded ? 254 : 2);')
    return part
   parts=re.split(r'(/\*.*?\*/)',body,flags=re.S)
   body=''.join(p if p.startswith('/*') else constants(p) for p in parts)
   body=body.replace('{\n','{\n    '+MARK+'\n    const int _talent_cache_expanded=xml1_talent_registry_contains(g_ecx);\n',1)
   if a==0xb47e0:
    # Reset all bitmap words, including entries 32..254 on repeated init.
    body=body.replace('loc_000B47E0: ;','loc_000B47E0: ;\n    if (_talent_cache_expanded) memset((void*)XBOX_PTR(ecx+0x4FC4u),0,32);')
   changed=True;return body
  source=re.sub(r'void sub_([0-9A-F]{8})\(void\)\n\{.*?\n\}',method,source,flags=re.S)
  for m in re.finditer(r'void sub_([0-9A-F]{8})\(void\)\n\{.*?\n\}',source,re.S):
   if int(m[1],16) in FIXTURE:fixtures[int(m[1],16)]=m[0]
  if changed:
   if '#include "engine/progression/talent_registry_guest.h"' not in source:source='#include "engine/progression/talent_registry_guest.h"\n'+source
   pending[path]=source
 assert found==set(SCOPES),found^set(SCOPES)
 if args.apply:
  for p,s in pending.items():p.write_text(index.restore_names(s))
 if args.fixture_output:
  assert set(fixtures)==FIXTURE
  args.fixture_output.parent.mkdir(parents=True,exist_ok=True)
  args.fixture_output.write_text('\n'.join(f'void sub_{a:08X}(void);' for a in sorted(fixtures))+'\n'+'\n'.join(fixtures[a] for a in sorted(fixtures)))
 print(f'Validated {len(found)} cache methods; native source slots 3 -> 255; {len(pending)} files need changes')
if __name__=='__main__':main()
