"""Validate maintained symbol evidence and compatibility with manual dispatch."""
import argparse
import hashlib
import json
from pathlib import Path
import re

ROOT = Path(__file__).resolve().parents[1]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--xbe', type=Path)
    parser.add_argument('--export-manual', type=Path)
    parser.add_argument('--generated', type=Path,
                        help='Verify registered generated entries exist in this tree')
    args = parser.parse_args()
    registry = json.loads((ROOT / 'config/symbols/xml1.json').read_text())
    assert registry['schema_version'] == 1
    addresses, names, manual = set(), set(), {}
    for entry in registry['functions']:
        address, name = entry['address'], entry['name']
        assert re.fullmatch(r'0x[0-9A-F]{8}', address), address
        assert re.fullmatch(r'[A-Za-z_]\w*', name), name
        assert address not in addresses and name not in names, (address, name)
        addresses.add(address); names.add(name)
        assert entry['module'] and entry['confidence'] and entry['abi']
        assert entry.get('placement','module_file') in ('module_file','retain_unit')
        if entry.get('placement')=='retain_unit':assert entry.get('placement_reason')
        assert entry['evidence'], name
        for evidence in entry['evidence']:
            assert (ROOT / evidence['path']).is_file(), evidence
            assert evidence['detail']
        if entry['kind'] == 'manual_override':
            manual[address] = name
    existing = json.loads((ROOT / 'config/manual-functions.json').read_text())
    assert manual == existing, 'Registry and manual dispatch disagree'
    # The review inventory is evidence bookkeeping, never a second naming map.
    # Only the symbol registry authorizes emitted names.
    for review_file in ('xml1-reference-review.json', 'xml1-test-reference-review.json'):
        review_path = ROOT / 'config/symbols' / review_file
        if not review_path.exists():
            continue
        review = json.loads(review_path.read_text())
        assert review['schema_version'] == 1
        registered = {e['address']: e['name'] for e in registry['functions']}
        reviewed = set()
        for entry in review['entries']:
            address = entry['address']
            assert re.fullmatch(r'0x[0-9A-F]{8}', address), address
            assert address not in reviewed, ('Duplicate review entry', address)
            reviewed.add(address)
            assert entry['status'] in ('registered', 'review_existing_evidence', 'deferred', 'excluded')
            assert entry['evidence_paths'], address
            for path in entry['evidence_paths']:
                assert (ROOT / path).is_file(), path
            if entry['status'] == 'registered':
                assert registered.get(address) == entry['name'], ('Stale review name', address)
            else:
                assert not entry.get('name'), ('Unregistered review name', address)
                assert address not in registered, ('Review status needs updating', address)
            if entry['status'] in ('deferred', 'excluded'):
                assert entry.get('review_reason'), ('Missing deferral reason', address)
    if args.xbe:
        assert hashlib.sha256(args.xbe.read_bytes()).hexdigest() == registry['executable']['sha256'], 'Wrong executable revision'
    if args.generated:
        from recomp_source import RecompSources
        generated = RecompSources(args.generated)
        for entry in registry['functions']:
            if entry['kind'] == 'generated':
                generated.path(int(entry['address'], 16))
    if args.export_manual:
        args.export_manual.parent.mkdir(parents=True, exist_ok=True)
        args.export_manual.write_text(json.dumps(manual, indent=2) + '\n')
    print(f'Validated {len(addresses)} symbol records and {len(manual)} manual mappings')


if __name__ == '__main__':
    main()
