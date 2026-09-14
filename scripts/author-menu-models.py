"""Author XML1 Model properties in a copied XML2 menu IGB.

The menu definition supplies bindings; the PKGB must declare each visible model.
Uses the locally installed igb-blender low-level writer, without Blender or UI.
No geometry merging, resource aliases or runtime renderer changes are involved.
"""
import argparse
import copy
import hashlib
import json
import struct
import sys
import xml.etree.ElementTree as ET
from pathlib import Path

from xml1_packages import read_pkgb


def field(obj, slot):
    return next(value for key, value, _ in obj.raw_fields if key == slot)


def set_field(obj, slot, value):
    if not any(key == slot for key, _, _ in obj.raw_fields):
        raise ValueError(f'Missing serialized field {slot}')
    obj.raw_bytes = None
    obj.raw_fields = [(key, value if key == slot else old, kind)
                      for key, old, kind in obj.raw_fields]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--writer-root', type=Path, required=True)
    parser.add_argument('--input', type=Path, required=True)
    parser.add_argument('--menu', type=Path, required=True)
    parser.add_argument('--package', type=Path, required=True)
    parser.add_argument('--assets', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    if args.input.resolve() == args.output.resolve():
        raise ValueError('Author a separate output; preserve the source IGB')
    temp = args.output.with_suffix(args.output.suffix + '.tmp')
    if temp.resolve() in (args.input.resolve(), args.menu.resolve(), args.package.resolve()):
        raise ValueError('Temporary output would overwrite an input')
    sys.path.insert(0, str(args.writer_root.resolve()))
    from igb_format.igb_reader import IGBReader
    from igb_format.igb_writer import from_reader

    original = args.input.read_bytes()
    resources = read_pkgb(args.package.read_bytes())
    models = {dict(row.attributes)['filename'].lower() for row in resources
              if row.kind == 'model'}
    menu = ET.parse(args.menu).getroot()
    layout = 'ui/menus/' + menu.attrib['igb']
    if layout.lower() not in models:
        raise ValueError(f'Menu IGB is not declared by PKGB: {layout}')
    if args.input.stem.lower() != menu.attrib['igb'].lower():
        raise ValueError('Input IGB name does not match the menu resource')
    if args.output.name != args.input.name:
        raise ValueError('Keep the copied IGB filename unchanged')
    bindings = {}
    skipped = []
    for item in menu.iter('item'):
        model = item.get('model')
        if not model:
            continue
        if item.get('hide', '').lower() == 'true':
            skipped.append(item.get('name'))
            continue
        if model.lower() not in models:
            raise ValueError(f'Model is not declared by PKGB: {model}')
        if not (args.assets / (model + '.igb')).is_file():
            raise FileNotFoundError(f'Declared model is absent: {model}')
        if not model.lower().startswith('ui/models/') or '/' in model[10:]:
            raise ValueError(f'XML1 Model property requires ui/models basename: {model}')
        name = item.attrib['name']
        if name in bindings:
            raise ValueError(f'Duplicate model anchor: {name}')
        bindings[name] = model.rsplit('/', 1)[1]

    reader = IGBReader(str(args.input)); reader.read()
    writer = from_reader(reader)
    # Work only on the original anchor objects; appended properties aren't nodes.
    anchors = {}
    for obj in writer.objects:
        if hasattr(obj, 'raw_fields') and writer.meta_objects[obj.type_index].name == b'igHashedUserInfo':
            name = field(obj, 2)
            if name in anchors:
                raise ValueError(f'Ambiguous native anchor: {name}')
            anchors[name] = obj

    def clone(index):
        result = len(writer.objects)
        writer.objects.append(copy.deepcopy(writer.objects[index]))
        writer.ref_info.append(copy.deepcopy(writer.ref_info[index]))
        writer.index_map.append(writer.index_map[index])
        return result

    for name, model in bindings.items():
        if name not in anchors:
            raise ValueError(f'Menu anchor missing from IGB: {name}')
        props = writer.objects[field(anchors[name], 8)]
        memory = field(props, 4)
        block = writer.objects[memory]
        refs = [value for value, in struct.iter_unpack('<i', block.data)]
        existing = [index for index in refs if field(writer.objects[field(writer.objects[index], 2)], 2) == 'Model']
        if existing:
            if len(existing) != 1:
                raise ValueError(f'Duplicate native Model properties: {name}')
            value = field(writer.objects[existing[0]], 3)
            set_field(writer.objects[value], 2, model)
            continue
        if not refs:
            raise ValueError(f'Anchor lacks an ItemName property template: {name}')
        prop_index = clone(refs[0]); prop = writer.objects[prop_index]
        key = clone(field(prop, 2)); value = clone(field(prop, 3))
        set_field(writer.objects[key], 2, 'Model')
        set_field(writer.objects[value], 2, model)
        set_field(prop, 2, key); set_field(prop, 3, value)
        block.data += struct.pack('<i', prop_index); block.raw_data = None
        set_field(props, 2, len(refs) + 1); set_field(props, 3, len(refs) + 1)
        # Shared directory entries must not be resized for other memory blocks.
        entry = copy.deepcopy(writer.entries[writer.index_map[memory]])
        entry.raw_bytes = None
        for pos, descriptor in enumerate(writer.meta_objects[entry.type_index].fields):
            if descriptor.slot == 7:
                entry.field_values[pos] = len(block.data)
        writer.index_map[memory] = len(writer.entries)
        writer.entries.append(entry)
        writer.ref_info[memory]['mem_size'] = len(block.data)

    args.output.parent.mkdir(parents=True, exist_ok=True)
    writer.write(str(temp))
    check = IGBReader(str(temp)); check.read()
    if args.input.read_bytes() != original:
        raise RuntimeError('Source changed during authoring')
    temp.replace(args.output)
    report = {'input_sha256': hashlib.sha256(original).hexdigest(),
              'output_sha256': hashlib.sha256(args.output.read_bytes()).hexdigest(),
              'package_sha256': hashlib.sha256(args.package.read_bytes()).hexdigest(),
              'package': str(args.package), 'layout_resource': layout,
              'model_resources': {name: 'ui/models/' + model
                                  for name, model in bindings.items()},
              'bindings': bindings, 'hidden_items_skipped': skipped}
    args.output.with_suffix('.authoring.json').write_text(json.dumps(report, indent=2)+'\n', encoding='utf-8')
    print(f'Authored {len(bindings)} native Model properties: {args.output}')


if __name__ == '__main__':
    main()
