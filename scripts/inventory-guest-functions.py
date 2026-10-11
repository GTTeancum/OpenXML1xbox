"""Inventory every committed guest entry without guessing subsystem ownership.

Direct edges to established registry symbols are review hints, not identities.
No game image, disassembly directory or local generated tree is read.
"""
import argparse
import csv
import io
import json
import re
from collections import Counter, defaultdict
from pathlib import Path
from recomp_source import FUNCTION, TOKENS, address_of

ROOT = Path(__file__).resolve().parents[1]


def direct_calls(body, names):
    code = TOKENS.sub(lambda m: ' ' if m[0].startswith(('//', '/*', '"', "'")) else m[0], body)
    symbols = set(re.findall(r'\b([A-Za-z_]\w*)\s*\(', code))
    # Generated guest calls pass the callee as a macro argument, not fn().
    symbols.update(re.findall(r'\bRECOMP_ABI_CALL\s*\(\s*0x[0-9A-Fa-f]+[uUlL]*\s*,\s*([A-Za-z_]\w*)\s*\)', code))
    return {names[name] for name in symbols if name in names}


def inventory(source, registry):
    known = {int(e['address'], 16): e for e in registry['functions']}
    names = {e['name']: address for address, e in known.items()}
    entries = {}
    for path in sorted(source.rglob('*.c')):
        for match in FUNCTION.finditer(path.read_text()):
            address = address_of(match)
            if address is None:
                continue
            if address in entries:
                raise ValueError(f'Duplicate guest entry {address:08X}')
            names[match['name']] = address
            entries[address] = (path.relative_to(source).as_posix(), match['name'], match[0])
    incoming = defaultdict(set)
    outgoing = {}
    for address, (_, _, body) in entries.items():
        # Drop comments/literals before finding calls; quoted diagnostic names
        # and declaration names must never become call graph evidence.
        body = body[body.index('{') + 1:]
        calls = direct_calls(body, names)
        outgoing[address] = calls
        for target in calls:
            incoming[target].add(address)
    columns = ['address', 'symbol', 'source', 'status', 'confirmed_module',
               'direct_callees', 'direct_callers', 'known_callees', 'known_callers', 'related_modules']
    stream = io.StringIO(newline='')
    writer = csv.DictWriter(stream, fieldnames=columns, lineterminator='\n')
    writer.writeheader()
    counts = Counter()
    related = 0
    for address, (path, symbol, body) in sorted(entries.items()):
        status = 'registered' if address in known else ('unresolved_entry_stub' if path == 'recomp_stubs_unresolved.c' else 'unidentified')
        counts[status] += 1
        callees = outgoing[address] & known.keys()
        callers = incoming[address] & known.keys()
        modules = sorted({known[a]['module'] for a in callees | callers})
        if status != 'registered' and modules:
            related += 1
        writer.writerow(dict(address=f'0x{address:08X}', symbol=symbol, source=path,
            status=status, confirmed_module=known[address]['module'] if address in known else '',
            direct_callees=';'.join(f'0x{a:08X}' for a in sorted(outgoing[address])),
            direct_callers=';'.join(f'0x{a:08X}' for a in sorted(incoming[address])),
            known_callees=';'.join(f'0x{a:08X}' for a in sorted(callees)),
            known_callers=';'.join(f'0x{a:08X}' for a in sorted(callers)),
            related_modules=';'.join(modules)))
    return stream.getvalue(), dict(total=len(entries), statuses=dict(counts),
        unregistered_with_direct_known_relationships=related,
        relationship_limit='Direct static calls only; indirect/vtable calls omitted. Related modules are navigation hints, not ownership or naming evidence.')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--source', type=Path, default=ROOT/'src/recomp/game')
    parser.add_argument('--check', action='store_true')
    args = parser.parse_args()
    output, summary = inventory(args.source, json.loads((ROOT/'config/symbols/xml1.json').read_text()))
    paths = {ROOT/'config/symbols/xml1-function-map.csv': output,
             ROOT/'config/symbols/xml1-function-map-summary.json': json.dumps(summary, indent=2)+'\n'}
    for path, content in paths.items():
        if args.check:
            if not path.exists() or path.read_text() != content:
                raise ValueError(f'Stale function inventory: {path}')
        else:
            path.write_text(content)
    print(json.dumps(summary))


if __name__ == '__main__':
    main()
