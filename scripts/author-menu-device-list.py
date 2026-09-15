"""Populate the existing XML2 device panel with four live player-device rows.

Preserves the package-declared resource name and relative output path. This is
asset authoring only; no package edits or runtime resource aliases are created.
"""
from pathlib import Path
import argparse,sys,struct,copy,json,hashlib
from xml1_packages import read_pkgb
parser=argparse.ArgumentParser(description=__doc__)
parser.add_argument('--writer-root',type=Path,required=True)
parser.add_argument('--input',type=Path,required=True)
parser.add_argument('--package',type=Path,required=True)
parser.add_argument('--menu',type=Path,required=True)
parser.add_argument('--output-assets',type=Path,required=True)
args=parser.parse_args()
source=args.input
resource='ui/menus/'+source.stem
models={dict(r.attributes)['filename'].lower() for r in read_pkgb(args.package.read_bytes()) if r.kind=='model'}
if resource.lower() not in models:raise ValueError('Input must be a PKGB-declared menu resource')
focus_model='ui/models/m_pda_option_focus'
if focus_model not in models:raise ValueError('Native focus model must retain its PKGB declaration')
output=args.output_assets/'ui'/'menus'/source.name
if output.resolve()==source.resolve():raise ValueError('Use a separate output tree; preserve the source IGB')
original=source.read_bytes()
sys.path.insert(0,str(args.writer_root.resolve()))
from igb_format.igb_reader import IGBReader
from igb_format.igb_writer import from_reader
r=IGBReader(str(source));r.read();w=from_reader(r)
def field(j,k):return next(v for a,v,t in w.objects[j].raw_fields if a==k)
def put(j,k,v):
 o=w.objects[j];o.raw_bytes=None;o.raw_fields=[(a,v if a==k else old,t) for a,old,t in o.raw_fields]
def clone(j):
 n=len(w.objects);w.objects.append(copy.deepcopy(w.objects[j]));w.ref_info.append(copy.deepcopy(w.ref_info[j]));w.index_map.append(w.index_map[j]);return n
def refs(j):return list(struct.unpack('<'+'i'*(len(w.objects[j].data)//4),w.objects[j].data))
def memory(j,values):
 o=w.objects[j];o.data=struct.pack('<'+'i'*len(values),*values);o.raw_data=None
 entry=copy.deepcopy(w.entries[w.index_map[j]]);entry.raw_bytes=None
 for p,t in enumerate(w.meta_objects[entry.type_index].fields):
  if t.slot==7:entry.field_values[p]=len(o.data)
 w.index_map[j]=len(w.entries);w.entries.append(entry);w.ref_info[j]['mem_size']=len(o.data)
transforms={field(j,2):j for j,o in enumerate(w.objects) if hasattr(o,'raw_fields') and w.meta_objects[o.type_index].name==b'igTransform'}
import xml.etree.ElementTree as ET
menu=ET.parse(args.menu);original_menu=args.menu.read_bytes()
assert menu.getroot().get('name')=='options_controller_xbox'
assert menu.getroot().get('igb','').lower()==source.stem.lower()
assert any(r.kind=='xml' and dict(r.attributes).get('filename','').lower()=='ui/menus/'+args.menu.stem.lower() for r in read_pkgb(args.package.read_bytes()))
assert 'pc_device_3' not in transforms
added=[]
def anchor(name,x,z):
 existing=name in transforms
 if existing:
  node=transforms[name];donor=transforms['label_button07'];w.objects[node]=copy.deepcopy(w.objects[donor]);w.ref_info[node]=copy.deepcopy(w.ref_info[donor]);w.index_map[node]=w.index_map[donor]
 else:node=clone(transforms['label_button07'])
 children=clone(field(node,7));mem=clone(field(children,4));info=clone(refs(mem)[0]);props=clone(field(info,8));pmem=clone(field(props,4));prop=clone(refs(pmem)[0]);val=clone(field(prop,3))
 put(node,7,children);put(children,4,mem);memory(mem,[info]);put(info,2,name);put(info,8,props);put(props,4,pmem);memory(pmem,[prop]);put(prop,3,val);put(val,2,name);put(node,2,name)
 put(node,8,(.50,0,0,0,0,.50,0,0,0,0,.50,0,x,-120,z,1))
 if not existing:added.append(node)
 transforms[name]=node

items={i.get('name'):i for i in menu.getroot().findall('item')}
# Use the unused space below the last binding row for pagination, leaving the
# original lower panel for device selection and connection status.
def move(name, x=None, z=None, scale=None):
 node=transforms[name];matrix=list(field(node,8))
 if x is not None:matrix[12]=x
 if z is not None:matrix[14]=z
 if scale is not None:matrix[0]=matrix[5]=matrix[10]=scale
 put(node,8,tuple(matrix))
for name in ('pc_scroll_prev','pc_scroll_next','pc_scroll_range'):move(name,z=153)
move('pc_status',z=325,scale=.4)
move('pc_binding_device',z=125)
move('pc_binding_device_focus',z=125)
move('pc_window',x=378,z=125,scale=.5)
move('pc_window_focus',x=413,z=125)
def device_name(player):return {1:'controls_list',2:'controls_list2'}.get(player,f'pc_device_{player}')
for player in range(1,5):
 name=device_name(player);focus=name+'_focus'
 x=254 if player%2 else 374;z=108 if player<=2 else 94
 if name in transforms:assert items[name].get('hide')=='true'
 anchor(name,x,z);move(name,scale=.4)
 anchor(focus,x+49,z)
 matrix=list(field(transforms[focus],8));matrix[0]=.75;matrix[5]=1.;matrix[10]=.5;matrix[13]=-119.;put(transforms[focus],8,tuple(matrix))
 item=items[name] if name in items else ET.SubElement(menu.getroot(),'item')
 item.attrib.clear()
 item.attrib.update(name=name,style='STYLE_SMALL',text='Loading...',
  gamevar=f'pcnative_device_{player}',usecmd=f'pcnative_device_{player}',textalignx='TEXT_ALIGN_LEFT',
  up='pc_binding_device' if player<=2 else device_name(player-2),
  down=device_name(player+2) if player<=2 else 'pc_preset1',
  left=device_name(player+1 if player%2 else player-1),
  right=device_name(player+1 if player%2 else player-1),focusmodel=focus_model,focusitemname=focus)
 ET.SubElement(menu.getroot(),'item',name=focus,type='MENU_ITEM_MODEL',enabled='false')
items['pc_binding_device'].set('down',device_name(1))
items['pc_binding_device'].set('right','pc_window')
items['pc_window'].set('left','pc_binding_device')
items['pc_window'].set('down',device_name(2))
for n in range(1,4):items[f'pc_preset{n}'].set('up','pc_device_3')
lists=[]
for j,o in enumerate(w.objects):
 if hasattr(o,'raw_fields') and w.meta_objects[o.type_index].name==b'igNodeList':
  m=field(j,4)
  if m>=0 and transforms['label_button07'] in refs(m):lists.append(j)
assert len(lists)==1,lists
j=lists[0];m=field(j,4);values=refs(m)+added;memory(m,values);put(j,2,len(values));put(j,3,len(values))
# The original menu collector has a fixed 128-pointer stack array. Reuse
# dormant list anchors and reject authoring beyond its capacity.
assert sum(hasattr(o,'raw_fields') and w.meta_objects[o.type_index].name==b'igTransform' for o in w.objects)<=128
output.parent.mkdir(parents=True,exist_ok=True);w.write(str(output));check=IGBReader(str(output));check.read()
menu_output=args.output_assets/'ui'/'menus'/args.menu.name
assert menu_output.resolve()!=args.menu.resolve()
ET.indent(menu,space='  ');menu.write(menu_output,encoding='unicode')
assert source.read_bytes()==original and args.menu.read_bytes()==original_menu
output.with_suffix('.device-list.json').write_text(json.dumps({
 'resource':resource,'menu_resource':'ui/menus/'+args.menu.stem,
 'package_sha256':hashlib.sha256(args.package.read_bytes()).hexdigest(),
 'input_sha256':hashlib.sha256(original).hexdigest(),
 'output_sha256':hashlib.sha256(output.read_bytes()).hexdigest(),
 'menu_input_sha256':hashlib.sha256(original_menu).hexdigest(),
 'menu_output_sha256':hashlib.sha256(menu_output.read_bytes()).hexdigest(),
 'focus_model':focus_model,'anchors':[field(j,2) for j in added]},indent=2))
print('Authored native device panel:',output)
