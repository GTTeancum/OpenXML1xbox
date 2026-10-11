"""Build the native stash menu using XML1's equipment menu and package paths."""
import argparse
from pathlib import Path
import subprocess
import tempfile
import xml.etree.ElementTree as ET

from xml1_packages import Resource, read_pkgb, write_pkgb


def build(assets, output, compiler):
    assets, output, compiler = assets.resolve(), output.resolve(), compiler.resolve()
    if output.exists() or output == assets:
        raise ValueError('Use a new private overlay directory')
    if not compiler.is_file():
        raise ValueError('XMLB compiler is missing')
    source = assets / 'packages/generated/maps/package/menus/equip_shop.pkgb'
    resources = read_pkgb(source.read_bytes())
    # Keep every stock model, texture and shared XML declaration. Only the new
    # menu document has a new path; no artwork aliases or renamed models.
    replaced = 0
    package = []
    for resource in resources:
        attrs = []
        for key, value in resource.attributes:
            if resource.kind == 'xml' and key == 'filename' and value == 'ui/menus/equip_shop':
                value = 'ui/menus/stash'
                replaced += 1
            attrs.append((key, value))
        package.append(Resource(resource.kind, tuple(attrs)))
    if replaced != 1:
        raise ValueError('Expected exactly one equipment menu declaration')
    blob = write_pkgb(package)
    if read_pkgb(blob) != package:
        raise ValueError('Package round trip changed declarations')

    documents = {}
    for language in ('eng', 'fre', 'ger'):
        root = ET.fromstring((assets / f'ui/menus/equip_shop.{language}').read_bytes().decode('cp1252'))
        if root.get('name') != 'equip_shop' or root.get('type') != 'EQUIP_SHOP_MENU':
            raise ValueError('Unexpected native equipment menu type')
        root.set('name', 'stash')
        root.set('stash', 'true')
        controls = {item.get('name'): item for item in root.findall('item')}
        required = {'for_sale', 'current_inventory', 'item_cost_title', 'item_cost_value',
                    'money_title', 'money_value', 'sell_title', 'inventory_title'}
        if not required <= controls.keys():
            raise ValueError('Missing native stash controls')
        # New labels currently use English, matching the native stash refresh
        # hook. Keep the existing localized accept prompt and descriptions.
        controls['for_sale'].set('desctext2', '$MENU_ACCEPT Withdraw')
        controls['current_inventory'].set('desctext2', '$MENU_ACCEPT Deposit')
        for name, text in {'item_cost_title': 'Stored', 'item_cost_value': '',
                           'money_title': 'Stash Capacity', 'money_value': '0 / 60',
                           'sell_title': 'Stored Items', 'inventory_title': 'Carried Items'}.items():
            controls[name].set('text', text)
        documents[language] = ET.tostring(root, encoding='unicode').encode('cp1252')

    # Compile and verify privately before emitting any deliverable files.
    compiled = {}
    with tempfile.TemporaryDirectory(prefix='xml1-stash-menu-') as temporary:
        temporary = Path(temporary)
        for language, text in documents.items():
            original = temporary / f'stash.{language}'
            binary = temporary / f'stash.{language}b'
            decoded = temporary / f'decoded.{language}'
            repeated = temporary / f'repeated.{language}b'
            original.write_bytes(text)
            for arguments in [('compile', original, binary), ('decode', binary, decoded),
                              ('compile', decoded, repeated)]:
                subprocess.run([str(compiler), *map(str, arguments)], check=True)
            compiled[language] = binary.read_bytes()
            if compiled[language] != repeated.read_bytes():
                raise ValueError('Compiled menu round trip changed content')
    (output / 'ui/menus').mkdir(parents=True)
    for language, text in documents.items():
        (output / f'ui/menus/stash.{language}').write_bytes(text)
        (output / f'ui/menus/stash.{language}b').write_bytes(compiled[language])
    destination = output / 'packages/generated/maps/package/menus/stash.pkgb'
    destination.parent.mkdir(parents=True)
    destination.write_bytes(blob)
    print('Built three native stash menu documents and PKGB; XMLB round trips passed')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--assets', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    parser.add_argument('--compiler', type=Path, required=True)
    arguments = parser.parse_args()
    build(arguments.assets, arguments.output, arguments.compiler)
