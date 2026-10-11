"""Relocate every native talent-source consumer together; retain byte IDs."""
from pathlib import Path
import argparse
import re
from recomp_source import RecompSources, find_function

ROOT=Path(__file__).resolve().parents[1]
MARK='/* XML1 EXPANDED TALENT SOURCES */'
COUNTS={0xB41B0:2,0xB4870:2,0xB4A50:2,0xB4B30:2,0xB53A0:2}

def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--apply',action='store_true')
    parser.add_argument('--fixture-output',type=Path)
    parser.add_argument('--generated-dir',type=Path,default=ROOT/'src/recomp/gen')
    args=parser.parse_args()
    index=RecompSources(args.generated_dir)
    pending={}; bodies={}
    for address,count in COUNTS.items():
        path=index.path(address)
        source=pending.get(path, index.canonical_read(path))
        match=find_function(source,address)
        if not match:raise ValueError('Missing native talent source method')
        body=match[0]
        if MARK not in body:
            if body.count('0x4D7310')!=count:raise ValueError('Source references changed')
            body=body.replace('0x4D7310','xml1_talent_source_table()')
            body=body.replace('{\n','{\n    '+MARK+'\n',1)
            if address==0xB41B0:
                old='loc_000B41EB: ;\n    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;\n    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */\n    if (CMP_EQ(_fa, _fb)) goto loc_000B423B; /* je: equal / zero */'
                if body.count(old)!=1:raise ValueError('Source capacity gate changed')
                body=body.replace(old,'loc_000B41EB: ;\n    if (eax >= XML1_TALENT_SOURCE_CAPACITY) goto loc_000B423B;',1)
                body=body.replace('loc_000B41B0: ;','loc_000B41B0: ;\n    if (!xml1_talent_source_path_valid(MEM32(esp+4))) {\n        SET_LO8(eax,0xff);esp+=4;return;\n    }',1)
            source=source[:match.start()]+body+source[match.end():]
        bodies[address]=body
        pending[path]=source
    if args.fixture_output:
        args.fixture_output.parent.mkdir(parents=True,exist_ok=True)
        args.fixture_output.write_text(bodies[0xB41B0]+'\n')
    if args.apply:
        for path,source in pending.items():
            if '#include "engine/progression/talent_source_table.h"' not in source:
                source='#include "engine/progression/talent_source_table.h"\n'+source
            path.write_text(index.restore_names(source))
    print('Validated all five native talent source readers/writer')

if __name__=='__main__':main()
