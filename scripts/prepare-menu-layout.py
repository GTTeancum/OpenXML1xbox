"""Rebuild initial model, typography, binding-table and volume-anchor stages.

This is an intermediate authoring tree, not a playable menu. Later layout and
menu-content steps must run before staging. Original paths are retained.
"""
import argparse
import json
import subprocess
import sys
import xml.etree.ElementTree as ET
from pathlib import Path
from xml1_packages import Resource, write_pkgb


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--xml2-import', type=Path, required=True,
                        help='xml1-blue directory from prepare-menu-import')
    parser.add_argument('--xml1-assets', type=Path, required=True,
                        help='Original extracted XML1 assets, for model_bar_sound')
    parser.add_argument('--writer-root', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    output = args.output.resolve()
    inputs = [args.xml2_import.resolve(strict=True), args.xml1_assets.resolve(strict=True)]
    if output.exists() or any(output.is_relative_to(p) or p.is_relative_to(output) for p in inputs):
        raise ValueError('Output must be new and separate from both input trees')
    scripts = Path(__file__).resolve().parent
    recipe = json.loads((scripts / 'menu-layout-model-bindings.json').read_text())
    resources = [recipe['layout'], *dict.fromkeys(recipe['models'].values())]
    payload = []
    for resource in resources:
        relative = Path(resource + '.igb')
        if relative.is_absolute() or '..' in relative.parts:
            raise ValueError(f'Invalid resource: {resource}')
        source_root = inputs[1] if resource == 'ui/models/model_bar_sound' else inputs[0]
        source = source_root / relative
        if not source.resolve().is_relative_to(source_root):
            raise ValueError(f'Resource escapes source tree: {resource}')
        payload.append((relative, source.read_bytes()))
    output.mkdir(parents=True, exist_ok=False)
    seed = output / 'input'
    for relative, data in payload:
        target = seed / relative
        target.parent.mkdir(parents=True, exist_ok=True)
        target.write_bytes(data)
    menu = ET.Element('menu', name='options', igb='x2m_options')
    for name, model in recipe['models'].items():
        ET.SubElement(menu, 'item', name=name, model=model)
    ET.indent(menu)
    menu_path = seed / 'ui/menus/options.eng'
    ET.ElementTree(menu).write(menu_path, encoding='unicode')
    package = seed / 'packages/generated/maps/package/menus/options.pkgb'
    package.parent.mkdir(parents=True, exist_ok=True)
    rows = [Resource('model', (('filename', r),)) for r in resources]
    rows.append(Resource('xml', (('filename', 'ui/menus/options'),)))
    package.write_bytes(write_pkgb(rows))
    layout = Path('ui/menus/x2m_options.igb')
    def run(script, *extra):
        subprocess.run([sys.executable, str(scripts / script), '--writer-root',
                        str(args.writer_root), '--package', str(package), *map(str, extra)], check=True)
    run('author-menu-models.py', '--input', seed / layout, '--menu', menu_path,
        '--assets', seed, '--output', output / 'models' / layout)
    run('author-menu-typography.py', '--input', output / 'models' / layout,
        '--output-assets', output / 'typography')
    run('author-menu-binding-table.py', '--input', output / 'typography' / layout,
        '--output-assets', output / 'table')
    run('author-menu-sliders.py', '--layout', output / 'table' / layout,
        '--bar', seed / 'ui/models/model_bar_sound.igb',
        '--output-assets', output / 'sliders')
    run('author-menu-type-scale.py', '--input', output / 'sliders' / layout,
        '--output-assets', output / 'type-scale')
    print('Intermediate layout rebuilt; later authoring is required before staging.')


if __name__ == '__main__':
    main()
