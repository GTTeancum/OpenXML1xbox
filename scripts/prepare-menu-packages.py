"""Rebuild the authored Options PKGB declarations with original associations.

This writes manifests only. Audit the complete asset tree before staging.
"""
import argparse
import hashlib
import json
from pathlib import Path
from xml1_packages import Resource, read_pkgb, write_pkgb


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--original-assets', type=Path, required=True)
    p.add_argument('--output-assets', type=Path, required=True)
    a = p.parse_args()
    recipe = json.loads(Path(__file__).with_name('menu-package-declarations.json').read_text(encoding='utf-8'))
    outputs = []
    for name, spec in recipe.items():
        relative = Path('packages/generated/maps/package/menus') / (name + '.pkgb')
        source, target = a.original_assets / relative, a.output_assets / relative
        data = source.read_bytes()
        if hashlib.sha256(data).hexdigest() != spec['original_sha256']:
            raise ValueError(f'Original package differs from audited source: {name}')
        if target.exists() or target.resolve() == source.resolve():
            raise ValueError('Use new outputs; preserve original and existing packages')
        original = read_pkgb(data)
        rows = [Resource(r['kind'], (('filename', r['filename']),)) for r in spec['declarations']]
        for group in (original, rows):
            if {dict(r.attributes)['filename'] for r in group if r.kind == 'xml'} != {f'ui/menus/{name}'}:
                raise ValueError(f'Menu association changed: {name}')
            for row in group:
                resource = Path(dict(row.attributes)['filename'])
                if row.kind not in ('model', 'xml') or resource.is_absolute() or '..' in resource.parts:
                    raise ValueError('Invalid package resource declaration')
        # Original models support the preserved French/German menus as well.
        if not set(original).issubset(set(rows)):
            raise ValueError(f'Original localized dependency was removed: {name}')
        encoded = write_pkgb(rows)
        if read_pkgb(encoded) != rows or hashlib.sha256(encoded).hexdigest() != spec['output_sha256']:
            raise ValueError(f'Package differs from verified authored declarations: {name}')
        outputs.append((target, encoded))
    for target, data in outputs:
        target.parent.mkdir(parents=True, exist_ok=True)
        target.write_bytes(data)
    print('Rebuilt both menu PKGBs; complete asset-tree audit is required before staging.')


if __name__ == '__main__':
    main()
