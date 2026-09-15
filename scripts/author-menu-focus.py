"""Reuse the native Options focus models in the copied Advanced Options menu.

Only menu contents are authored. Models keep their PKGB resource paths.
"""
import argparse
import xml.etree.ElementTree as ET
from pathlib import Path
from xml1_packages import read_pkgb


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--reference', type=Path, required=True)
    parser.add_argument('--menu', type=Path, required=True)
    parser.add_argument('--package', type=Path, required=True)
    parser.add_argument('--assets', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    if args.output.resolve() == args.reference.resolve():
        raise ValueError('Preserve the reference menu')
    package = read_pkgb(args.package.read_bytes())
    menu_resource = 'ui/menus/' + args.menu.stem.lower()
    declarations = {(row.kind, dict(row.attributes).get('filename', '').lower())
                    for row in package}
    if ('xml', menu_resource) not in declarations:
        raise ValueError(f'Menu must retain its PKGB association: {menu_resource}')
    tree = ET.parse(args.menu)
    menu = tree.getroot()
    expected = ('ui', 'menus', args.menu.name.lower())
    if tuple(part.lower() for part in args.output.parts[-3:]) != expected:
        raise ValueError('Preserve the menu filename and ui/menus directory')
    by_name = {item.get('name'): item for item in menu.findall('item')}
    brand = by_name['label_controls']
    brand.set('text', 'X-Men Legends 1 XboxRecomp')
    brand.set('style', 'STYLE_SMALL')
    brand.set('enabled', 'false')
    brand.attrib.pop('hide', None)
    reference = {item.get('name'): item for item in ET.parse(args.reference).getroot().findall('item')}
    resources = {dict(row.attributes)['filename'].lower()
                 for row in package if row.kind == 'model'}
    names = ('label_effects_volume', 'label_music_volume', 'label_combat_music',
             'label_view_angle', 'label_view_cycle', 'label_view_follow',
             'label_subtitles', 'label_accept', 'label_view_shake', 'label_vibration')
    for name in names:
        item = by_name[name]
        source = reference[name] if name != 'label_view_shake' else reference['label_view_angle']
        model = source.attrib['focusmodel']
        anchor = source.attrib['focusitemname'] if name != 'label_view_shake' else 'view_shake_focus'
        if model.lower() not in resources or not (args.assets / (model + '.igb')).is_file():
            raise ValueError(f'Focus model must exist at its PKGB path: {model}')
        if anchor not in by_name:
            by_name[anchor] = ET.SubElement(menu, 'item', name=anchor,
                                           type='MENU_ITEM_MODEL', enabled='false')
        by_name[anchor].attrib.pop('hide', None)
        item.set('focusmodel', model)
        item.set('focusitemname', anchor)
    ET.indent(menu, space='  ')
    args.output.parent.mkdir(parents=True, exist_ok=True)
    tree.write(args.output, encoding='unicode')
    print(f'Restored {len(names)} native focus associations in {args.output}')


if __name__ == '__main__':
    main()
