"""Connect native package declarations to the shared imported-talent lifecycle."""
from pathlib import Path
import argparse
import re
from recomp_source import RecompSources, find_function

ROOT = Path(__file__).resolve().parents[1]
HOOKS = {
    'package-load': {0x121B90: [
        ('loc_00121CFA: ;', 'loc_00121CFA: ;\n    if (xml1_talent_package_load(esi, eax)) goto loc_00121D22;'),
    ]},
    'talent-registry': {
        0xB4870: [
            ('loc_000B4895: ;\n    PUSH32(esp, 0x3D4010);',
             'loc_000B4895: ;\n    PUSH32(esp, xml1_talent_package_path());'),
            ('loc_000B48D4: ;\n    PUSH32(esp, 4);',
             'loc_000B48D4: ;\n    PUSH32(esp, xml1_talent_package_owner());'),
            ('loc_000B497D: ;',
             'loc_000B497D: ;\n    xml1_talent_package_registered(esi, eax, esp + 0x20);'),
        ],
        0xB49E0: [('loc_000B49E0: ;',
                    'loc_000B49E0: ;\n    xml1_talent_package_release_all();')],
    },
    'package-release': {0x14A4D0: [
        ('loc_0014A4E8: ;',
         'loc_0014A4E8: ;\n    xml1_talent_package_release(MEM32(esi + eax * 4));'),
    ]},
}

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--apply', action='store_true')
    args = parser.parse_args()
    pending = {}
    index = RecompSources(ROOT / 'src/recomp/gen')
    methods = {address: replacements for group in HOOKS.values() for address, replacements in group.items()}
    for path, addresses in index.grouped(methods).items():
        source = path.read_text()
        for address in addresses:
            replacements = methods[address]
            match = find_function(source, address)
            if not match:
                raise ValueError(f'Missing method {address:08X}')
            body = match[0]
            body = body.replace("xml1_talent_package_registered(esi, eax);", "xml1_talent_package_registered(esi, eax, esp + 0x20);")
            for old, new in replacements:
                if new in body:
                    if body.count(new) != 1:
                        raise ValueError('Duplicate talent package hook')
                    continue
                if body.count(old) != 1:
                    raise ValueError(f'Changed package hook {address:08X}: {old}')
                body = body.replace(old, new, 1)
            source = source[:match.start()] + body + source[match.end():]
        if '#include "engine/progression/talent_package_guest.h"' not in source:
            source = '#include "engine/progression/talent_package_guest.h"\n' + source
        pending[path] = source
    if args.apply:
        for path, source in pending.items():
            path.write_text(source)
    print('Validated native talent package load/register/release hooks')

if __name__ == '__main__':
    main()
