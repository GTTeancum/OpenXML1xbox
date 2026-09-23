"""Check imported manifests against XML1 without overwriting any assets.

Paths are case-insensitive, as on the Windows/Xbox game targets. Different
bytes at an existing path are conflicts, never an instruction to rename or
replace the original resource. Explicit support files are checked too.
"""
import argparse
import hashlib
import json
from pathlib import Path


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def audit(base, fixtures):
    base = base.resolve()
    existing = {p.relative_to(base).as_posix().lower(): p
                for p in base.rglob('*') if p.is_file()}
    imported, rows = {}, []
    for fixture in fixtures:
        manifest = json.loads((fixture / 'manifest.json').read_text())
        assets = (fixture / 'assets').resolve()
        for relative, expected in manifest['copied'].items():
            source = (assets / relative).resolve()
            if not source.is_relative_to(assets) or not source.is_file():
                raise ValueError(f'Unsafe or missing fixture asset: {relative}')
            actual = digest(source)
            if actual != expected:
                raise ValueError(f'Fixture changed since staging: {source}')
            key = relative.replace('\\', '/').lower()
            row = dict(fixture=str(fixture), path=relative, sha256=actual,
                       status='new', conflicts=[])
            if key in existing:
                original = digest(existing[key])
                if original != actual:
                    row['conflicts'].append(dict(source='xml1', path=str(existing[key]), sha256=original))
                else:
                    row['status'] = 'identical'
            if key in imported and imported[key]['sha256'] != actual:
                row['conflicts'].append(dict(source='other_import', **imported[key]))
            if row['conflicts']:
                row['status'] = 'conflict'
            imported[key] = dict(path=str(source), sha256=actual)
            rows.append(row)
    return dict(base=str(base), files=rows,
                conflicts=sum(r['status'] == 'conflict' for r in rows),
                limitation='No files applied. Same-path conflicts require deliberate integration; never implicit overwrite or aliasing.')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--base', required=True, type=Path)
    parser.add_argument('--fixture', required=True, action='append', type=Path)
    parser.add_argument('--out', required=True, type=Path)
    args = parser.parse_args()
    if not args.base.is_dir():
        raise ValueError('Base asset directory does not exist')
    result = audit(args.base, args.fixture)
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(result, indent=2)+'\n')
    print(f"Checked {len(result['files'])} imported files; {result['conflicts']} conflicts")
    for row in result['files']:
        if row['conflicts']:
            print(row['path'])
    return 1 if result['conflicts'] else 0


if __name__ == '__main__':
    raise SystemExit(main())
