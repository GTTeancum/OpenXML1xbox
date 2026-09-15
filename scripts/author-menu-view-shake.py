"""Restore XML2's existing View Shake row within the declared normal Options menu."""
import argparse, hashlib, json
from pathlib import Path
import xml.etree.ElementTree as ET
from xml1_packages import read_pkgb

p=argparse.ArgumentParser(description=__doc__)
p.add_argument('--assets',type=Path,required=True)
p.add_argument('--output-assets',type=Path,required=True)
a=p.parse_args()
relative=Path('ui/menus/options.eng')
source=a.assets/relative;output=a.output_assets/relative
assert source.resolve()!=output.resolve()
original=source.read_bytes();menu=ET.fromstring(original)
assert menu.get('name')=='options' and menu.get('igb')=='x2m_options'
packages=list((a.assets/'packages').rglob('options.pkgb'))
assert len(packages)==1
rows=read_pkgb(packages[0].read_bytes())
assert any(r.kind=='xml' and dict(r.attributes).get('filename','').lower()=='ui/menus/options' for r in rows)
assert any(r.kind=='model' and dict(r.attributes).get('filename','').lower()=='ui/menus/x2m_options' for r in rows)
items={i.get('name'):i for i in menu.findall('item')}
label=items['label_view_shake'];label.attrib.clear()
label.attrib.update(name='label_view_shake',text='View Shake',style='STYLE_MENU',
    animtext_scene='options',textalignx='TEXT_ALIGN_LEFT',enabled='true',
    up='label_view_follow',down='label_subtitles',usecmd='pcnative_shake',
    focusmodel='ui/models/m_options_view_select',focusitemname='view_shake_focus')
field=items['view_shake'];field.attrib.clear()
field.attrib.update(name='view_shake',text='On',style='STYLE_SMALL',
    animtext_scene='options',textalignx='TEXT_ALIGN_RIGHT',enabled='false',
    gamevar='pcnative_view_shake')
items['view_shake_focus'].attrib.pop('hide',None)
items['label_view_follow'].set('down','label_view_shake')
items['label_subtitles'].set('up','label_view_shake')
assert items['label_accept'].get('usecmd')=='saveoptions'
items['label_accept'].set('usecmd','pcnative_shake_accept;saveoptions')
ET.indent(menu,space='  ');output.parent.mkdir(parents=True,exist_ok=True)
output.write_text(ET.tostring(menu,encoding='unicode'),encoding='utf8')
assert source.read_bytes()==original
(a.output_assets/'view-shake.json').write_text(json.dumps({
    'source_sha256':hashlib.sha256(original).hexdigest(),
    'output_sha256':hashlib.sha256(output.read_bytes()).hexdigest(),
    'package':str(packages[0]),'resource':relative.as_posix(),
    'igb_changes':False,'package_changes':False},indent=2)+'\n')
print(output)
