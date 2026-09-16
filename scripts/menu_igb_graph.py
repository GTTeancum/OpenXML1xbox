"""Low-level Alchemy object graph copying for native menu asset authoring."""
import copy, struct

def strip_triangles(v,attribute):
 assert field(v,attribute,6)==4
 array=field(v,attribute,5)
 indices=struct.unpack('<'+'H'*field(v,array,3),v.objects[field(v,array,2)].data)
 result=[]
 for n in range(2,len(indices)):
  triangle=(indices[n-2],indices[n-1],indices[n])
  if n%2:triangle=(triangle[1],triangle[0],triangle[2])
  if len(set(triangle))==3:result.append(triangle)
 return result

def set_strip_triangles(v,attribute,triangles):
 """Preserve source strip type and winding using degenerate connectors."""
 indices=[]
 for triangle in triangles:
  if indices:
   indices.extend((indices[-1],triangle[0]))
   if len(indices)%2:indices.append(triangle[0])
  indices.extend(triangle)
 array=field(v,attribute,5);lengths=field(v,attribute,13)
 assert field(v,attribute,6)==4 and field(v,lengths,3)==1
 memory(v,field(v,array,2),struct.pack('<'+'H'*len(indices),*indices))
 put(v,array,3,len(indices))
 memory(v,field(v,lengths,2),struct.pack('<I',len(indices)))
 assert strip_triangles(v,attribute)==[tuple(t) for t in triangles]

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

def transfer_graph(w,source,index):
 meta_map={};object_map={}
 def meta_field(i):
  if i<0:return i
  sf=source.meta_fields[i]
  dest=next((j for j,x in enumerate(w.meta_fields) if x.name==sf.name),None)
  if dest is None:dest=len(w.meta_fields);w.meta_fields.append(copy.deepcopy(sf))
  return dest
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
   f.type_index=meta_field(f.type_index)
  meta_map[i]=len(w.meta_objects);w.meta_objects.append(result);return meta_map[i]
 def object_list(type_index):
  # Animation track/binding lists also store object references. Follow the
  # declared inheritance instead of treating arbitrary list memory as refs.
  while type_index>=0:
   m=source.meta_objects[type_index]
   if m.name==b'igObjectList':return True
   type_index=m.parent_index
  return False
 def transfer(i,reference_memory=False):
  if i<0:return i
  if i in object_map:return object_map[i]
  obj=copy.deepcopy(source.objects[i]);info=copy.deepcopy(source.ref_info[i])
  n=len(w.objects);object_map[i]=n;w.objects.append(obj);w.ref_info.append(info);w.index_map.append(-1)
  entry=copy.deepcopy(source.entries[source.index_map[i]])
  defs=source.meta_objects[entry.type_index].fields
  entry.type_index=meta(entry.type_index);entry.raw_bytes=None
  # Directory memory types index meta-fields (ObjectRef, Vec3f, Matrix44f,
  # etc.), not meta-objects. Animation buffers expose this distinction:
  # Matrix44f's field index can exceed the entire meta-object table.
  info['type_index']=(meta if info['is_object'] else meta_field)(info['type_index'])
  for j,d in enumerate(defs):
   if d.slot==(11 if info['is_object'] else 10):entry.field_values[j]=info['type_index']
   if not info['is_object'] and d.slot==12:entry.field_values[j]=-1
  w.index_map[n]=len(w.entries);w.entries.append(entry)
  if info['is_object']:
   kind=source.meta_objects[obj.type_index].name
   obj.type_index=info['type_index'];obj.raw_bytes=None
   obj.raw_fields=[(k,transfer(v, (object_list(source.objects[i].type_index) and k==4) or
     (kind==b'igVertexArray1_1' and k==2)) if t.short_name in (b'ObjectRef',b'MemoryRef') else v,t)
     for k,v,t in obj.raw_fields]
  else:
   info['align_type_idx']=-1
   if reference_memory:
    vals=[transfer(v) for v in refs(source,i)]
    obj.data=struct.pack('<'+'i'*len(vals),*vals);obj.raw_data=None
  return n
 return transfer(index)
