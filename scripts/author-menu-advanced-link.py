"""Place the existing unused label anchor in the native Advanced Options footer.

Preserves the package-declared resource name and relative output path. This is
asset authoring only; no package edits or runtime resource aliases are created.
"""
from pathlib import Path
import argparse,sys,json,hashlib
import xml.etree.ElementTree as ET
from xml1_packages import read_pkgb
parser=argparse.ArgumentParser(description=__doc__)
parser.add_argument('--writer-root',type=Path,required=True)
parser.add_argument('--input',type=Path,required=True)
parser.add_argument('--menu',type=Path,required=True)
parser.add_argument('--package',type=Path,required=True)
parser.add_argument('--output-assets',type=Path,required=True)
args=parser.parse_args()
source=args.input
resource='ui/menus/'+source.stem
models={dict(r.attributes)['filename'].lower() for r in read_pkgb(args.package.read_bytes()) if r.kind=='model'}
if resource.lower() not in models:raise ValueError('Input must be a PKGB-declared menu resource')
output=args.output_assets/'ui'/'menus'/source.name
if output.resolve()==source.resolve():raise ValueError('Use a separate output tree; preserve the source IGB')
menu_original=args.menu.read_bytes()
tree=ET.ElementTree(ET.fromstring(menu_original));menu=tree.getroot()
if menu.get('name')!='options' or menu.get('igb','').lower()!=source.stem.lower():
 raise ValueError('Expected the normal Options menu attached to this IGB')
xml_resources={dict(r.attributes)['filename'].lower() for r in read_pkgb(args.package.read_bytes()) if r.kind=='xml'}
if ('ui/menus/'+args.menu.stem).lower() not in xml_resources:
 raise ValueError('Menu contents must be declared by the same PKGB')
menu_output=args.output_assets/'ui'/'menus'/args.menu.name
if menu_output.resolve()==args.menu.resolve():raise ValueError('Preserve the source menu contents')
original=source.read_bytes()
sys.path.insert(0,str(args.writer_root.resolve()))
from igb_format.igb_reader import IGBReader
from igb_format.igb_writer import from_reader
r=IGBReader(str(source));r.read();w=from_reader(r)
transforms={}
for o in w.objects:
 if hasattr(o,'raw_fields') and w.meta_objects[o.type_index].name==b'igTransform':
  vals={k:v for k,v,t in o.raw_fields}
  transforms[vals.get(2,'')]=o
if not {'desctext2','label_click02'} <= transforms.keys():
 raise ValueError('Expected original footer and unused label anchors are absent')
footer=list(next(v for k,v,t in transforms['desctext2'].raw_fields if k==8))
# Match the footer title size while retaining STYLE_MENU's selected text color.
for axis in (0,5,10):footer[axis]=.65
footer=tuple(footer)
obj=transforms['label_click02']
before=next(v for k,v,t in obj.raw_fields if k==8)
obj.raw_bytes=None
obj.raw_fields=[(k,footer if k==8 else v,t) for k,v,t in obj.raw_fields]
output.parent.mkdir(parents=True,exist_ok=True);w.write(str(output))
check=IGBReader(str(output));check.read()
assert source.read_bytes()==original, 'Source IGB changed'
output.with_suffix('.advanced-link.json').write_text(json.dumps({
 'package':str(args.package),'resource':resource,
 'input_sha256':hashlib.sha256(original).hexdigest(),
 'output_sha256':hashlib.sha256(output.read_bytes()).hexdigest(),
 'anchor':'label_click02','before':before,'after':footer},indent=2))
print(output)

items={x.get('name'):x for x in menu.findall('item')}
# XML1 has no view_shake menu variable. Keep the XML2-only row hidden
# until its behavior is implemented, rather than displaying a dead toggle.
for name in ('label_view_shake','view_shake','view_shake_focus'):
 items[name].set('hide','true');items[name].set('enabled','false')
items['label_view_follow'].set('down','label_subtitles')
items['label_subtitles'].set('up','label_view_follow')
x=items['label_click02'];x.attrib.clear();x.attrib.update(name='label_click02',text='Advanced Options',style='STYLE_MENU',textalignx='TEXT_ALIGN_LEFT',enabled='true',up='label_accept',down='label_effects_volume',usecmd='pcnative_open;openmenu options_controller_xbox',animtext_scene='help')
items['desctext2'].set('hide','true');items['desctext2'].set('enabled','false')
items['label_accept'].set('down','label_click02');items['label_effects_volume'].set('up','label_click02')
for item in menu.findall('item'):
 if item.get('hide','').lower()=='true':continue
 for attr in ('model','focusmodel'):
  model=item.get(attr)
  if model and model.lower() not in models:raise ValueError('Undeclared model: '+model)
ET.indent(tree);tree.write(menu_output,encoding='unicode')
assert args.menu.read_bytes()==menu_original, 'Source menu contents changed'
print(menu_output)
