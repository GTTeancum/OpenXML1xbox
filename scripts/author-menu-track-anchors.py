"""Rejected layout-anchor experiment, retained for diagnosis only.

Native MENU_ITEM_MODEL did not display this embedded geometry. Use
author-menu-volume-tracks.py for the accepted declared-model attachment.
"""
import argparse, copy, hashlib, json, struct, sys
import xml.etree.ElementTree as ET
from pathlib import Path

p=argparse.ArgumentParser(description=__doc__)
p.add_argument('--writer-root',type=Path,required=True)
p.add_argument('--layout',type=Path,required=True)
p.add_argument('--model',type=Path,required=True)
p.add_argument('--split-model',type=Path,required=True)
p.add_argument('--tracks',type=Path,required=True)
p.add_argument('--menu',type=Path,action='append',required=True)
p.add_argument('--output-assets',type=Path,required=True)
a=p.parse_args()
assert a.layout.stem.lower()=='x2m_options' and a.model.stem.lower()=='m_options_screen'
sources=[a.layout,a.model,a.split_model,a.tracks]+a.menu
originals=[s.read_bytes() for s in sources]
assert all(a.output_assets.resolve() not in s.resolve().parents for s in sources)
report=json.loads(a.tracks.read_text())
assert hashlib.sha256(a.model.read_bytes()).hexdigest()==report['source_sha256']
assert hashlib.sha256(a.split_model.read_bytes()).hexdigest()==report['panel_sha256']
sys.path.insert(0,str(a.writer_root.resolve()))
from igb_format.igb_reader import IGBReader
from igb_format.igb_writer import from_reader
def read(path):
 r=IGBReader(str(path));r.read();return from_reader(r)
w=read(a.layout);source=read(a.model)
assert w.version==source.version==6 and w.endian==source.endian=='<'
def field(v,j,k):return next(value for slot,value,t in v.objects[j].raw_fields if slot==k)
def put(v,j,k,value):
 obj=v.objects[j];obj.raw_bytes=None;obj.raw_fields=[(slot,value if slot==k else old,t) for slot,old,t in obj.raw_fields]
def memory(v,j,data):
 obj=v.objects[j];obj.data=data;obj.raw_data=None
 entry=copy.deepcopy(v.entries[v.index_map[j]]);entry.raw_bytes=None
 for n,t in enumerate(v.meta_objects[entry.type_index].fields):
  if t.slot==7:entry.field_values[n]=len(data)
 v.index_map[j]=len(v.entries);v.entries.append(entry);v.ref_info[j]['mem_size']=len(data)
def refs(v,j):return [x for x, in struct.iter_unpack('<i',v.objects[j].data)]
def clone(j):
 n=len(w.objects);w.objects.append(copy.deepcopy(w.objects[j]));w.ref_info.append(copy.deepcopy(w.ref_info[j]));w.index_map.append(w.index_map[j]);return n

# Keep original vertices/colors and state; only draw the four separated triangles.
attr=report['attribute'];ia=field(source,attr,5);im=field(source,ia,2)
flat=[]
for triangle in report['track_original_triangles']:
 if flat:
  flat.extend((flat[-1],triangle[0]))
  if len(flat)%2:flat.append(triangle[0])
 flat.extend(triangle)
decoded=[]
for n in range(2,len(flat)):
 t=(flat[n-2],flat[n-1],flat[n])
 if n%2:t=(t[1],t[0],t[2])
 if len(set(t))==3:decoded.append(list(t))
assert decoded==report['track_original_triangles']
memory(source,im,struct.pack('<'+'H'*len(flat),*flat))
put(source,ia,3,len(flat))
length_array=field(source,attr,13)
assert field(source,length_array,3)==1
memory(source,field(source,length_array,2),struct.pack('<I',len(flat)))
meta_map={};object_map={}
def meta(i):
 if i<0:return i
 if i in meta_map:return meta_map[i]
 m=source.meta_objects[i]
 found=next((j for j,x in enumerate(w.meta_objects) if x.name==m.name),None)
 if found is not None:
  assert [(f.slot,f.short_name,f.size) for f in w.meta_objects[found].fields]==[(f.slot,f.short_name,f.size) for f in m.fields]
  meta_map[i]=found;return found
 result=copy.deepcopy(m);result.parent_index=meta(m.parent_index)
 for f in result.fields:
  sf=source.meta_fields[f.type_index]
  dest=next((j for j,x in enumerate(w.meta_fields) if x.name==sf.name),None)
  if dest is None:dest=len(w.meta_fields);w.meta_fields.append(copy.deepcopy(sf))
  f.type_index=dest
 meta_map[i]=len(w.meta_objects);w.meta_objects.append(result);return meta_map[i]
def transfer(i,reference_memory=False):
 if i<0:return i
 if i in object_map:return object_map[i]
 obj=copy.deepcopy(source.objects[i]);info=copy.deepcopy(source.ref_info[i])
 n=len(w.objects);object_map[i]=n;w.objects.append(obj);w.ref_info.append(info);w.index_map.append(-1)
 entry=copy.deepcopy(source.entries[source.index_map[i]])
 defs=source.meta_objects[entry.type_index].fields
 entry.type_index=meta(entry.type_index);entry.raw_bytes=None
 info['type_index']=meta(info['type_index'])
 for j,d in enumerate(defs):
  if d.slot==(11 if info['is_object'] else 10):entry.field_values[j]=info['type_index']
  if not info['is_object'] and d.slot==12:entry.field_values[j]=-1
 w.index_map[n]=len(w.entries);w.entries.append(entry)
 if info['is_object']:
  kind=source.meta_objects[obj.type_index].name
  obj.type_index=info['type_index'];obj.raw_bytes=None
  obj.raw_fields=[(k,transfer(v, (kind in (b'igAttrList',b'igNodeList') and k==4) or
    (kind==b'igVertexArray1_1' and k==2)) if t.short_name in (b'ObjectRef',b'MemoryRef') else v,t)
    for k,v,t in obj.raw_fields]
 else:
  info['align_type_idx']=-1
  if reference_memory:
   vals=[transfer(v) for v in refs(source,i)]
   obj.data=struct.pack('<'+'i'*len(vals),*vals);obj.raw_data=None
 return n
# Source node 214 holds only geometry 1 and its two untextured render states.
assert field(source,1,8)>=0
assert refs(source,field(source,field(source,214,7),4))==[1]
assert field(source,1,2)=='details_screen01'
# Retain the source mesh transform as a child of the animated layout anchor.
source_children=field(source,132,7)
memory(source,field(source,source_children,4),struct.pack('<i',214))
put(source,source_children,2,1);put(source,source_children,3,1)
root=transfer(132)
transforms={field(w,j,2):j for j,o in enumerate(w.objects) if hasattr(o,'raw_fields') and w.meta_objects[o.type_index].name==b'igTransform'}
assert 'pc_volume_tracks' not in transforms
base=transforms['label_button07'];node=clone(base)
children=clone(field(w,node,7));mem=clone(field(w,children,4));info=clone(refs(w,mem)[0])
props=clone(field(w,info,8));pmem=clone(field(w,props,4));prop=clone(refs(w,pmem)[0]);val=clone(field(w,prop,3))
name='pc_volume_tracks'
put(w,node,7,children);put(w,children,4,mem);memory(w,mem,struct.pack('<2i',info,root));put(w,children,2,2);put(w,children,3,2)
put(w,info,2,name);put(w,info,8,props);put(w,props,4,pmem);memory(w,pmem,struct.pack('<i',prop));put(w,prop,3,val);put(w,val,2,name);put(w,node,2,name)
# The serialized panel matrix is its off-screen opening pose. Share its native
# sequence so tracks follow the panel throughout opening and closing.
panel=transforms['options_screen']
matrix=field(w,panel,8)
assert field(w,panel,11)>=0
put(w,node,8,matrix)
put(w,node,11,field(w,panel,11))
lists=[]
for j,o in enumerate(w.objects):
 if hasattr(o,'raw_fields') and w.meta_objects[o.type_index].name==b'igNodeList':
  m=field(w,j,4)
  if m>=0 and base in refs(w,m):lists.append(j)
assert len(lists)==1
j=lists[0];m=field(w,j,4);values=refs(w,m)+[node];memory(w,m,struct.pack('<'+'i'*len(values),*values));put(w,j,2,len(values));put(w,j,3,len(values))
target=a.output_assets/'ui/menus'/a.layout.name;target.parent.mkdir(parents=True,exist_ok=True);w.write(str(target));read(target)
model_target=a.output_assets/'ui/models'/a.model.name;model_target.parent.mkdir(parents=True,exist_ok=True);model_target.write_bytes(a.split_model.read_bytes())
for path in a.menu:
 tree=ET.parse(path);menu=tree.getroot();assert menu.get('igb')=='x2m_options'
 assert menu.get('name') in ('options','options_controller_xbox')
 assert not any(i.get('name')==name for i in menu.findall('item'))
 ET.SubElement(menu,'item',name=name,type='MENU_ITEM_MODEL',enabled='false',hide='false' if menu.get('name')=='options' else 'true')
 out=a.output_assets/'ui/menus'/path.name;ET.indent(tree);tree.write(out,encoding='unicode')
assert [s.read_bytes() for s in sources]==originals
target.with_suffix('.track-anchors.json').write_text(json.dumps({'source_hashes':{str(s):hashlib.sha256(b).hexdigest() for s,b in zip(sources,originals)},'output_sha256':hashlib.sha256(target.read_bytes()).hexdigest(),'imported_objects':object_map,'matrix':matrix,'anchor':name},indent=2))
print('Authored native track anchor:',target)
