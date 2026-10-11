"""Emit known function names into a separate generated tree for verification.

Unknown functions remain in their original chunks. This never rewrites the input
tree. Addresses/entry labels and guest ABI stay intact; compatibility macros let
existing handwritten callers continue using address-based identifiers.
"""
import argparse
import json
from pathlib import Path
import re
import shutil
from recomp_source import RecompSources, FUNCTION, find_function, address_of, rename_identifiers

ROOT = Path(__file__).resolve().parents[1]
def emit(source, output, registry):
    source, output = source.resolve(), output.resolve()
    if output.exists() or output.is_relative_to(source) or source.is_relative_to(output):
        raise ValueError('Output must be a new directory outside the input tree')
    entries = [e for e in registry['functions'] if e['kind'] == 'generated']
    names = {f'sub_{int(e["address"],16):08X}': e['name'] for e in entries}
    if len(names) != len(entries) or len(set(names.values())) != len(entries):
        raise ValueError('Duplicate registry identity')
    for entry in entries:
        if not re.fullmatch(r'[a-z][a-z0-9_/]*', entry['module']) or '..' in entry['module']:
            raise ValueError('Invalid module path')
        if not re.fullmatch(r'[A-Za-z_]\w*', entry['name']):
            raise ValueError('Invalid C symbol')
        if entry.get('placement','module_file') not in ('module_file','retain_unit'):
            raise ValueError('Invalid function placement')
        if entry.get('placement')=='retain_unit' and not entry.get('placement_reason'):
            raise ValueError('Retained unit requires documented ownership evidence')
    original = RecompSources(source)
    pending = {}
    for entry in entries:
        address = int(entry['address'], 16)
        path = original.path(address)
        text = pending.get(path, path.read_text())
        match = find_function(text, address)
        if match['name'] != f'sub_{address:08X}':
            raise ValueError('Expected fresh unnamed generation input')
        # Naming does not imply safe separation: header-defined static state
        # can bind several guest routines to their original translation unit.
        if entry.get('placement')=='retain_unit':
            continue
        body = match[0]
        # The generated chunks use per-function local macros; only common
        # includes and the compilation-mode define belong in the new unit.
        includes = list(dict.fromkeys(re.findall(r'^#include [^\n]+', text, re.M)))
        unit = '#define RECOMP_GENERATED_CODE\n' + '\n'.join(includes) + '\n\n'
        unit += f'/* {entry["name"]}; original guest entry {entry["address"]}.\n'
        for evidence in entry['evidence']:
            unit += ' * Evidence: ' + evidence['path'] + '\n'
        unit += ' * Calling convention, guest registers and instruction labels are preserved. */\n'
        start = match.start()
        doc_start = text.rfind('/**', 0, start)
        if doc_start >= 0 and re.fullmatch(r'/\*\*.*?\*/\s*', text[doc_start:start], re.S):
            unit += text[doc_start:start]
            start = doc_start
        unit += body + '\n'
        destination = output / 'known' / entry['module'] / (entry['name'] + '.c')
        destination.parent.mkdir(parents=True, exist_ok=True)
        destination.write_text(rename_identifiers(unit, names))
        pending[path] = text[:start] + text[match.end():]
    for path in source.rglob('*'):
        if not path.is_file():
            continue
        target = output / path.relative_to(source)
        target.parent.mkdir(parents=True, exist_ok=True)
        if path.suffix in ('.c', '.h', '.inc'):
            target.write_text(rename_identifiers(pending.get(path, path.read_text()), names))
        else:
            shutil.copy2(path, target)
    header = output / 'recomp_funcs.h'
    text = header.read_text()
    marker = '#include "recomp_types.h"'
    if text.count(marker) != 1:
        raise ValueError('Unexpected generated declaration header')
    aliases = '\n/* Legacy guest identifiers for handwritten callers. */\n'
    aliases += '\n'.join(f'#define {old} {new}' for old,new in names.items()) + '\n'
    header.write_text(text.replace(marker, marker + aliases, 1))
    result = RecompSources(output)
    if set(result.functions) != set(original.functions):
        raise ValueError('Guest function coverage changed')
    inverse = {new: old for old,new in names.items()}
    current_bodies = {}
    for path in sorted(set(result.functions.values())):
        for match in FUNCTION.finditer(path.read_text()):
            address = address_of(match)
            if address is not None:
                current_bodies[address] = match[0]
    # Check every body, including untouched unknown functions and cross-calls.
    for path in sorted(set(original.functions.values())):
        for match in FUNCTION.finditer(path.read_text()):
            address = address_of(match)
            if address is None:
                continue
            current = current_bodies[address]
            if rename_identifiers(current, inverse) != match[0]:
                raise ValueError(f'Body changed beyond identifier spelling: {address:08X}')
    report = {'named': len(entries), 'guest_entries': len(result.functions),
              'retained_unit_names': [e['name'] for e in entries if e.get('placement')=='retain_unit'],
              'unknown_chunks_retained': True, 'body_equivalence': True}
    (output / 'naming-report.json').write_text(json.dumps(report, indent=2) + '\n')
    return report


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--source', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    registry = json.loads((ROOT / 'config/symbols/xml1.json').read_text())
    print(json.dumps(emit(args.source, args.output, registry)))


if __name__ == '__main__':
    main()
