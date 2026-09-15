"""Fit XML1's animated volume IGB to the copied XML2 Options anchors.

Writes only the two IGB resources at their PKGB-declared paths. Source trees
must differ from the output tree; the original animation and filenames remain.
"""
import argparse
import hashlib
import json
import sys
from pathlib import Path

from xml1_packages import read_pkgb


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--writer-root', type=Path, required=True)
    parser.add_argument('--layout', type=Path, required=True)
    parser.add_argument('--bar', type=Path, required=True)
    parser.add_argument('--package', type=Path, required=True)
    parser.add_argument('--output-assets', type=Path, required=True)
    args = parser.parse_args()
    resources = {dict(r.attributes)['filename'] for r in
                 read_pkgb(args.package.read_bytes()) if r.kind == 'model'}
    layout_resource = 'ui/menus/x2m_options'
    bar_resource = 'ui/models/model_bar_sound'
    if not {layout_resource, bar_resource} <= resources:
        raise ValueError('Both original IGB paths must be declared by the PKGB')
    sources = [args.layout, args.bar]
    targets = [args.output_assets / (layout_resource + '.IGB'),
               args.output_assets / (bar_resource + '.igb')]
    for source, target in zip(sources, targets):
        if source.name.lower() != target.name.lower():
            raise ValueError('Preserve original resource filenames')
        if source.resolve() == target.resolve():
            raise ValueError('Preserve source files; use a separate output tree')
    originals = [p.read_bytes() for p in sources]
    sys.path.insert(0, str(args.writer_root.resolve()))
    from igb_format.igb_reader import IGBReader
    from igb_format.igb_writer import from_reader

    def read(path):
        reader = IGBReader(str(path))
        reader.read()
        return from_reader(reader)

    def put(obj, slot, value):
        if slot not in {k for k, _, _ in obj.raw_fields}:
            raise ValueError(f'Missing IGB field {slot}')
        obj.raw_bytes = None
        obj.raw_fields = [(k, value if k == slot else old, kind)
                          for k, old, kind in obj.raw_fields]

    layout = read(args.layout)
    found = set()
    for obj in layout.objects:
        if not hasattr(obj, 'raw_fields') or layout.meta_objects[obj.type_index].name != b'igTransform':
            continue
        fields = {k: v for k, v, _ in obj.raw_fields}
        name = fields.get(2)
        if name not in ('fx_vol', 'music_vol'):
            continue
        if name in found:
            raise ValueError(f'Duplicate slider anchor: {name}')
        found.add(name)
        matrix = list(fields[8])
        matrix[0], matrix[10], matrix[12] = 1.68, .48, 31
        matrix[14] = 266.5 if name == 'fx_vol' else 237.5
        put(obj, 8, tuple(matrix))
    if found != {'fx_vol', 'music_vol'}:
        raise ValueError('Missing original volume anchors')

    bar = read(args.bar)
    colors = materials = 0
    blue = (.02, .45, 1., 1.)
    for obj in bar.objects:
        if not hasattr(obj, 'raw_fields'):
            continue
        kind = bar.meta_objects[obj.type_index].name
        fields = {k: v for k, v, _ in obj.raw_fields}
        if kind == b'igColorAttr' and fields.get(4) == (1., 1., 1., 1.):
            put(obj, 4, blue)
            colors += 1
        if kind == b'igMaterialAttr' and fields.get(5) == (1., 1., 1., 1.):
            for slot in (5, 6, 7):
                put(obj, slot, blue)
            materials += 1
    if (colors, materials) != (1, 1):
        raise ValueError('Unexpected volume-bar materials; inspect the source')

    for writer, target in zip((layout, bar), targets):
        target.parent.mkdir(parents=True, exist_ok=True)
        temporary = target.with_suffix(target.suffix + '.tmp')
        writer.write(str(temporary))
        read(temporary)
        temporary.replace(target)
    if [p.read_bytes() for p in sources] != originals:
        raise RuntimeError('Source IGB changed during authoring')
    report = [{'resource': str(target.relative_to(args.output_assets)),
               'source_sha256': hashlib.sha256(original).hexdigest(),
               'output_sha256': hashlib.sha256(target.read_bytes()).hexdigest()}
              for original, target in zip(originals, targets)]
    print(json.dumps(report, indent=2))


if __name__ == '__main__':
    main()
