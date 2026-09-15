"""Size native menu text anchors without changing their PKGB resource paths."""
import argparse
import hashlib
import json
import sys
from pathlib import Path
from xml1_packages import read_pkgb


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--writer-root', type=Path, required=True)
    parser.add_argument('--input', type=Path, required=True)
    parser.add_argument('--package', type=Path, required=True)
    parser.add_argument('--output-assets', type=Path, required=True)
    args = parser.parse_args()
    resource = 'ui/menus/' + args.input.stem
    declared = {dict(r.attributes)['filename'].lower()
                for r in read_pkgb(args.package.read_bytes()) if r.kind == 'model'}
    if resource.lower() not in declared:
        raise ValueError('Input must be a PKGB-declared menu resource')
    output = args.output_assets / 'ui' / 'menus' / args.input.name
    if output.resolve() == args.input.resolve():
        raise ValueError('Preserve the source IGB; use a separate output tree')
    original = args.input.read_bytes()
    sys.path.insert(0, str(args.writer_root.resolve()))
    from igb_format.igb_reader import IGBReader
    from igb_format.igb_writer import from_reader
    reader = IGBReader(str(args.input)); reader.read()
    writer = from_reader(reader)
    footer = {f'desctext{i}' for i in range(1, 6)}
    values = {'combat_music', 'view_angle', 'view_cycle', 'view_follow',
              'view_shake', 'subtitles', 'vibration'}
    changes = {}
    for obj in writer.objects:
        if not hasattr(obj, 'raw_fields') or writer.meta_objects[obj.type_index].name != b'igTransform':
            continue
        fields = {k: v for k, v, _ in obj.raw_fields}
        name = fields.get(2)
        if name not in footer | values:
            continue
        matrix = list(fields[8]); before = matrix[:]
        # Absolute scales make repeat authoring stable, avoiding compounded shrink.
        scale = .5 if name in footer else .65
        for index in (0, 5, 10):
            matrix[index] = scale
        if name == 'desctext2':
            matrix[12] = 370.
        obj.raw_bytes = None
        obj.raw_fields = [(k, tuple(matrix) if k == 8 else v, t)
                          for k, v, t in obj.raw_fields]
        changes[name] = {'before': before, 'after': matrix}
    if not footer <= changes.keys():
        raise ValueError('Expected native footer anchors are absent')
    output.parent.mkdir(parents=True, exist_ok=True)
    writer.write(str(output))
    check = IGBReader(str(output)); check.read()
    if args.input.read_bytes() != original:
        raise RuntimeError('Source IGB changed')
    output.with_suffix('.type-scale.json').write_text(json.dumps({
        'resource': resource, 'package': str(args.package),
        'input_sha256': hashlib.sha256(original).hexdigest(),
        'output_sha256': hashlib.sha256(output.read_bytes()).hexdigest(),
        'transforms': changes}, indent=2))
    print(output)


if __name__ == '__main__':
    main()
