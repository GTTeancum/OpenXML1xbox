"""Adapt the verified XML2 Options definition for intermediate XML1 authoring.

Retains the original resource path. Output still needs subsequent menu authoring.
"""
import argparse
import hashlib
import json
import struct
import xml.etree.ElementTree as ET
from pathlib import Path


def decode(data):
    def words(offset, count):
        if offset < 0 or offset + 4 * count > len(data):
            raise ValueError('Truncated binary XML')
        return struct.unpack_from('<' + 'I' * count, data, offset)
    def string(offset):
        if offset >= len(data):
            raise ValueError('Invalid string offset')
        return data[offset:data.index(b'\0', offset)].decode('cp1252')
    if words(0, 2) != (0x11b1, 1):
        raise ValueError('Unexpected binary XML header')
    visited = set()
    def node(offset):
        if offset in visited:
            raise ValueError('Repeated binary XML node')
        visited.add(offset)
        name, sibling, child, count = words(offset, 4)
        result = ET.Element(string(name))
        for i in range(count):
            key, value = words(offset + 16 + i * 8, 2)
            result.set(string(key), string(value))
        while child != 0xffffffff:
            result.append(node(child))
            child = words(child + 4, 1)[0]
        return result
    return node(8)


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--source', type=Path, required=True)
    p.add_argument('--output-assets', type=Path, required=True)
    p.add_argument('--menu', choices=('options', 'advanced'), default='options')
    a = p.parse_args()
    recipe = json.loads(Path(__file__).with_name(f'menu-{a.menu}-seed-changes.json').read_text(encoding='utf-8'))
    data = a.source.read_bytes()
    if hashlib.sha256(data).hexdigest() != recipe['source_sha256']:
        raise ValueError('Source differs from audited XML2 Options definition')
    name = 'options' if a.menu == 'options' else 'options_controller_xbox'
    output = a.output_assets / f'ui/menus/{name}.eng'
    if output.exists() or output.resolve() == a.source.resolve():
        raise ValueError('Use a new output; preserve both source and previous output')
    tree = decode(data)
    for op in recipe['operations']:
        item = tree
        for index in op['path']:
            item = item[index]
        if 'tag' in op and (item.tag != op['tag'] or item.get('name') != op['name']):
            raise ValueError('Menu recipe target mismatch')
        for key in op.get('remove', []):
            del item.attrib[key]
        item.attrib.update(op.get('set', {}))
        if 'replace_children' in op:
            for child in list(item):
                item.remove(child)
            item.extend(ET.fromstring(x) for x in op['replace_children'])
        item.extend(ET.fromstring(x) for x in op.get('append', []))
        if 'children' in op:
            old = list(item)
            for child in old:
                item.remove(child)
            item.extend(old[x] if isinstance(x, int) else ET.fromstring(x) for x in op['children'])
    ET.indent(tree, space='  ')
    output.parent.mkdir(parents=True, exist_ok=True)
    ET.ElementTree(tree).write(output, encoding='utf-8')
    print(f'Authored intermediate Options contents: {output}')


if __name__ == '__main__':
    main()
