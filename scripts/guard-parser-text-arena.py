"""Grow native parser literal storage without moving published attributes."""
from pathlib import Path
import argparse
from recomp_source import RecompSources, find_function

ROOT=Path(__file__).resolve().parents[1]
METHODS={0x199db0,0x199dd0,0x199e40,0x19a060}

def transform(source, address):
    # Upgrade the earlier append-only guard without accumulating hook copies.
    source=source.replace('loc_0019A116: ;\n    xml1_parser_text_reserve(ebp);\n', 'loc_0019A116: ;\n')
    changes={
        'loc_0019A116: ;\n': '    { uint32_t literal=xml1_parser_text_find(ebp);\n      if(literal) { edi=literal; goto loc_0019A10D; } }\n    xml1_parser_text_reserve(ebp);\n',
        '    MEM32(0x5B76B0) = eax;\n    POP32(esp, ebx);\n': '    xml1_parser_text_publish(MEM32(0x5B76B4));\n',
        'loc_00199E40: ;\n': '    xml1_parser_text_reset();\n',
        'loc_00199DB0: ;\n': '    xml1_parser_text_reset();\n',
    }
    owners=(0x19a060,0x19a060,0x199e40,0x199db0)
    for owner,(anchor,code) in zip(owners,changes.items()):
        if owner != address: continue
        if source.count(anchor)!=1: raise ValueError('Parser lifetime boundary changed: '+anchor)
        if anchor+code not in source: source=source.replace(anchor,anchor+code,1)
    return source

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--apply',action='store_true')
    p.add_argument('--candidate-dir',type=Path)
    p.add_argument('--fixture-output',type=Path)
    p.add_argument('--generated-dir',type=Path,default=ROOT/'src/recomp/gen')
    a=p.parse_args();index=RecompSources(a.generated_dir)
    pending={};methods={}
    for address in sorted(METHODS):
        path=index.path(address)
        source=pending.get(path,index.canonical_read(path))
        match=find_function(source,address)
        body=transform(match[0],address)
        source=source[:match.start()]+body+source[match.end():]
        include='#include "engine/resources/parser_text_arena_guest.h"\n'
        # This helper uses the generated register aliases and guest declarations.
        # Reposition older insertions as well as installing fresh ones.
        source=source.replace(include,'')
        declarations='#include "recomp_funcs.h"\n'
        if source.count(declarations)!=1:raise ValueError('Missing parser guest declarations')
        source=source.replace(declarations,declarations+include,1)
        pending[path]=source;methods[address]=body
    for path,source in pending.items():
        source=index.restore_names(source)
        if a.apply and path.read_text()!=source:path.write_text(source)
        if a.candidate_dir:
            destination=a.candidate_dir/path.relative_to(a.generated_dir)
            destination.parent.mkdir(parents=True,exist_ok=True)
            destination.write_text(source)
    if a.fixture_output:
        if set(methods)!=METHODS:raise ValueError('Missing parser methods')
        a.fixture_output.parent.mkdir(parents=True,exist_ok=True)
        a.fixture_output.write_text('\n'.join(methods.values()))
    print('Validated parser text append/reset/destruction boundaries')

if __name__=='__main__':main()
