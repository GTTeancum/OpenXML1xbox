"""Attach device-sensitive prompts to the existing native Options footers."""
import argparse
from pathlib import Path
import xml.etree.ElementTree as ET
from xml1_packages import read_pkgb
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('--menu',type=Path,required=True)
p.add_argument('--package',type=Path,required=True)
p.add_argument('--output-assets',type=Path,required=True)
a=p.parse_args()
original=a.menu.read_bytes();menu=ET.fromstring(original)
assert menu.get('name') in ('options', 'options_controller_xbox')
rows=read_pkgb(a.package.read_bytes())
assert any(r.kind=='xml' and dict(r.attributes).get('filename','').lower()=='ui/menus/'+a.menu.stem.lower() for r in rows)
items={i.get('name'):i for i in menu.findall('item')}
prompts=([('desctext1','prompt_options_back'),('label_click02','prompt_options_advanced')] if menu.get('name')=='options' else
         [('desctext1','prompt_back'),('desctext2','prompt_change')])
for name,key in prompts:
 assert name in items and (menu.get(name) or items[name].get('text'))
 items[name].set('gamevar','pcnative_'+key)
output=a.output_assets/'ui/menus'/a.menu.name
assert output.resolve()!=a.menu.resolve()
output.parent.mkdir(parents=True,exist_ok=True)
ET.indent(menu,space='  ');output.write_text(ET.tostring(menu,encoding='unicode'),encoding='utf8')
assert a.menu.read_bytes()==original
print(output)
