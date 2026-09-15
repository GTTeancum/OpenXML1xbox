"""Add native selection anchors to the copied XML2 binding table.

Preserves the package-declared resource name and relative output path. This is
asset authoring only; no package edits or runtime resource aliases are created.
"""
from pathlib import Path
import argparse,sys,struct,copy,json,hashlib
import xml.etree.ElementTree as ET
from xml1_packages import read_pkgb
parser=argparse.ArgumentParser(description=__doc__)
parser.add_argument('--writer-root',type=Path,required=True)
parser.add_argument('--input',type=Path,required=True)
parser.add_argument('--package',type=Path,required=True)
parser.add_argument('--output-assets',type=Path,required=True)
parser.add_argument('--menu',type=Path,required=True)
parser.add_argument('--assets',type=Path,required=True)
args=parser.parse_args()
source=args.input
resource='ui/menus/'+source.stem
models={dict(r.attributes)['filename'].lower() for r in read_pkgb(args.package.read_bytes()) if r.kind=='model'}
if resource.lower() not in models:raise ValueError('Input must be a PKGB-declared menu resource')
output=args.output_assets/'ui'/'menus'/source.name
if output.resolve()==source.resolve():raise ValueError('Use a separate output tree; preserve the source IGB')
original=source.read_bytes()
package_bytes=args.package.read_bytes()
rows=read_pkgb(package_bytes)
menu_resource='ui/menus/'+args.menu.stem
if not any(r.kind=='xml' and dict(r.attributes).get('filename','').lower()==menu_resource.lower() for r in rows):raise ValueError('Menu must retain its own PKGB association')
focus_model='ui/models/m_options_view_select'
if focus_model not in models or not (args.assets/(focus_model+'.igb')).is_file():raise ValueError('Native selection model must exist at its declared path')
menu=ET.parse(args.menu)
if menu.getroot().get('igb','').lower()!=source.stem.lower():raise ValueError('IGB must match the menu resource')
original_menu=args.menu.read_bytes()
items={i.get('name'):i for i in menu.getroot().findall('item')}
menu_output=args.output_assets/'ui'/'menus'/args.menu.name
if menu_output.resolve()==args.menu.resolve():raise ValueError('Preserve the source menu')
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
expected={'label_button07','label_stick01','label_stick02'}
if not expected <= transforms.keys():raise ValueError('Expected XML2 binding anchors are absent')
if 'pc_secondary0' not in transforms:raise ValueError('Author the binding table first')
if any(name.startswith('pc_cell_focus') for name in transforms):raise ValueError('Focus anchors already authored; use the original input stage')
added=[]
def anchor(name,x,z):
 node=clone(transforms['label_button07']);children=clone(field(node,7));mem=clone(field(children,4));info=clone(refs(mem)[0]);props=clone(field(info,8));pmem=clone(field(props,4));prop=clone(refs(pmem)[0]);val=clone(field(prop,3))
 put(node,7,children);put(children,4,mem);memory(mem,[info]);put(info,2,name);put(info,8,props);put(props,4,pmem);memory(pmem,[prop]);put(prop,3,val);put(val,2,name);put(node,2,name)
 put(node,8,(.50,0,0,0,0,.50,0,0,0,0,.50,0,x,-120,z,1));added.append(node);transforms[name]=node
for row in range(7):
 for slot in range(2):
  itemname=(f'label_button{row+7:02}' if row<6 else 'label_stick02') if slot==0 else f'pc_secondary{row}'
  item=items[itemname]
  name=f'pc_cell_focus_{row}_{slot}'
  anchor(name,393 if slot==0 else 457,276-row*18)
  node=transforms[name]
  matrix=list(field(node,8));matrix[0]=.36;matrix[5]=1.;matrix[10]=.85;matrix[13]=-119.
  put(node,8,tuple(matrix))
  item.set('focusmodel',focus_model);item.set('focusitemname',name)
  ET.SubElement(menu.getroot(),'item',name=name,type='MENU_ITEM_MODEL',enabled='false')
# The verified root node list owns the original label transforms.
lists=[]
for j,o in enumerate(w.objects):
 if hasattr(o,'raw_fields') and w.meta_objects[o.type_index].name==b'igNodeList':
  m=field(j,4)
  if m>=0 and transforms['label_button07'] in refs(m):lists.append(j)
assert len(lists)==1,lists
j=lists[0];m=field(j,4);values=refs(m)+added;memory(m,values);put(j,2,len(values));put(j,3,len(values))
output.parent.mkdir(parents=True,exist_ok=True);w.write(str(output));check=IGBReader(str(output));check.read()
assert source.read_bytes()==original, 'Source IGB changed'
ET.indent(menu.getroot(),space='  ')
menu.write(menu_output,encoding='unicode')
assert args.package.read_bytes()==package_bytes, 'Package changed during asset authoring'
assert args.menu.read_bytes()==original_menu, 'Source menu changed during authoring'
output.with_suffix('.binding-focus.json').write_text(json.dumps({
 'package':str(args.package),'resource':resource,
 'input_sha256':hashlib.sha256(original).hexdigest(),
 'output_sha256':hashlib.sha256(output.read_bytes()).hexdigest(),
 'menu':str(menu_resource),'focus_model':focus_model,
 'package_sha256':hashlib.sha256(package_bytes).hexdigest(),
 'new_anchors':[field(j,2) for j in added]},indent=2))
print('Added',len(added),'native cell focus anchors to copied IGB')
