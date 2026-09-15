"""Populate the copied XML2 menu IGB with native primary/secondary binding anchors.

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
parser.add_argument('--output-assets',type=Path,required=True)
args=parser.parse_args()
source=args.input
resource='ui/menus/'+source.stem
models={dict(r.attributes)['filename'].lower() for r in read_pkgb(args.package.read_bytes()) if r.kind=='model'}
if resource.lower() not in models:raise ValueError('Input must be a PKGB-declared menu resource')
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
expected={'label_button07','label_stick01','label_stick02'}
if not expected <= transforms.keys():raise ValueError('Expected XML2 binding anchors are absent')
if any(name.startswith('pc_secondary') for name in transforms):raise ValueError('Binding table already authored; use the original input stage')
added=[]
def anchor(name,x,z):
 node=clone(transforms['label_button07']);children=clone(field(node,7));mem=clone(field(children,4));info=clone(refs(mem)[0]);props=clone(field(info,8));pmem=clone(field(props,4));prop=clone(refs(pmem)[0]);val=clone(field(prop,3))
 put(node,7,children);put(children,4,mem);memory(mem,[info]);put(info,2,name);put(info,8,props);put(props,4,pmem);memory(pmem,[prop]);put(prop,3,val);put(val,2,name);put(node,2,name)
 put(node,8,(.50,0,0,0,0,.50,0,0,0,0,.50,0,x,-120,z,1));added.append(node);transforms[name]=node
for i in range(7):anchor('pc_secondary'+str(i),435,276-i*18)
for name,x in [('pc_header_action',254),('pc_header_primary',375),('pc_header_secondary',435)]:anchor(name,x,284)
for name,x,z in [('pc_scroll_prev',254,125),('pc_scroll_next',435,125),('pc_scroll_range',340,125),('pc_status',254,98)]:anchor(name,x,z)
for i in range(7):
 for name,x in [(f'label_button{i+1:02}' if i<6 else 'label_stick01',254),(f'label_button{i+7:02}' if i<6 else 'label_stick02',375)]:
  node=transforms[name];put(node,8,(.50,0,0,0,0,.50,0,0,0,0,.50,0,x+(8 if i==6 else 0),-120,276-i*18,1))
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
output.with_suffix('.binding-table.json').write_text(json.dumps({
 'package':str(args.package),'resource':resource,
 'input_sha256':hashlib.sha256(original).hexdigest(),
 'output_sha256':hashlib.sha256(output.read_bytes()).hexdigest(),
 'new_anchors':[field(j,2) for j in added]},indent=2))
print('Added',len(added),'table anchors to copied IGB')
