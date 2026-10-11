"""Build an imported hero's native XML1 selection portrait and its PKGB.

The Details/HUD head and the roster carousel are separate resource paths.
Transfer the imported selection portrait's image into the stock carousel geometry;
preserve the source artwork and normal model/package naming convention.
"""
import argparse
import sys
from pathlib import Path
from xml1_packages import Resource, read_pkgb, write_pkgb


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--assets', required=True, type=Path)
    p.add_argument('--skin', required=True)
    p.add_argument('--source-portrait', required=True, type=Path,
                   help='Original ui/models/characters/<skin>.igb selection artwork; not a HUD head')
    p.add_argument('--writer-root', required=True, type=Path)
    p.add_argument('--output', required=True, type=Path)
    a = p.parse_args()
    if [part.lower() for part in a.source_portrait.parts[-4:-1]] != ['ui', 'models', 'characters']:
        raise ValueError('Source must be a ui/models/characters selection portrait, not a HUD model texture')
    if not a.skin.isascii() or not a.skin.isdigit() or not 4 <= len(a.skin) <= 5:
        raise ValueError('Expected a physical four/five-digit skin identifier')
    if a.output.exists():
        raise ValueError('Output must be a new overlay directory')
    resource = f'ui/models/characters/{a.skin}'
    model = resource + '.igb'
    if (a.assets/model).exists():
        raise ValueError('Refusing to replace an existing selection portrait')
    package = 'packages/generated/maps/package/menus/characters_heads.pkgb'
    resources = read_pkgb((a.assets/package).read_bytes())
    if any(dict(r.attributes).get('filename', '').lower() == resource.lower() for r in resources):
        raise ValueError('Selection portrait is already declared in the package')
    sys.path.insert(0, str(a.writer_root.resolve()))
    from roster_menu_assets import selection_portrait
    image = selection_portrait(a.assets/'ui/models/characters/0501.igb',
                               a.source_portrait, a.skin)
    resources.append(Resource('model', (('filename', resource),)))
    packed = write_pkgb(resources)
    if read_pkgb(packed) != resources:
        raise ValueError('Authored package did not round trip')
    for name, data in ((model, image), (package, packed)):
        target = a.output/name
        target.parent.mkdir(parents=True, exist_ok=True)
        target.write_bytes(data)
    print(f'Authored {model} and matching {package}')


if __name__ == '__main__':
    main()
