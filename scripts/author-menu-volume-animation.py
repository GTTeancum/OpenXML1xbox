"""Author a native volume animation in the declared XML2 sound-selection IGB.

Retains XML2 geometry/materials and original resource paths. The XML1 reference
supplies only the native two-key animation structure, not substitute geometry.
"""
import argparse, copy, hashlib, json, struct, sys
import xml.etree.ElementTree as ET
from pathlib import Path
from xml1_packages import read_pkgb

p = argparse.ArgumentParser(description=__doc__)
p.add_argument('--writer-root', type=Path, required=True)
p.add_argument('--layout', type=Path, required=True)
p.add_argument('--model', type=Path, required=True)
p.add_argument('--animation-reference', type=Path, required=True)
p.add_argument('--package', type=Path, required=True)
p.add_argument('--menu', type=Path, action='append', required=True)
p.add_argument('--output-assets', type=Path, required=True)
a = p.parse_args()
resources = {dict(r.attributes).get('filename','').lower() for r in read_pkgb(a.package.read_bytes()) if r.kind=='model'}
if not {'ui/menus/x2m_options','ui/models/m_options_sound_select'} <= resources:
    raise ValueError('Both output resources must be declared by the reference package')
if a.layout.stem.lower()!='x2m_options' or a.model.stem.lower()!='m_options_sound_select':
    raise ValueError('Preserve original resource names')
targets = [a.output_assets/'ui/menus'/a.layout.name, a.output_assets/'ui/models'/a.model.name]
if 'ui/models/m_options_view_select' not in resources:
    raise ValueError('The static focus model must already be declared')
sources = [a.layout,a.model,a.animation_reference,a.package]+a.menu
originals = [s.read_bytes() for s in sources]
if any(t.resolve()==s.resolve() for t in targets for s in sources):
    raise ValueError('Use a separate output tree')
sys.path.insert(0,str(a.writer_root.resolve()))
from igb_format.igb_reader import IGBReader
from igb_format.igb_writer import from_reader
def read(path):
    r=IGBReader(str(path)); r.read(); return from_reader(r)
layout, w, reference = map(read, sources[:3])
if any(writer.version!=6 or writer.endian!='<' for writer in (layout,w,reference)):
    raise ValueError('This authoring step requires little-endian Alchemy v6 IGBs')
def field(writer,i,slot):
    return next(v for k,v,_ in writer.objects[i].raw_fields if k==slot)
def put(writer,i,slot,value):
    o=writer.objects[i]; o.raw_bytes=None
    if slot not in {k for k,_,_ in o.raw_fields}:raise ValueError('Absent field')
    o.raw_fields=[(k,value if k==slot else v,t) for k,v,t in o.raw_fields]
def typed(writer,name):
    return [i for i,o in enumerate(writer.objects) if hasattr(o,'raw_fields') and writer.meta_objects[o.type_index].name==name]
seqs=typed(reference,b'igTransformSequence1_5')
if len(seqs)!=1 or typed(w,b'igTransformSequence1_5'):
    raise ValueError('Expected one reference animation and an unanimated XML2 model')

# Import the animation's scalar/list graph with explicit reference remapping.
# No raw byte-pattern replacement and no geometry, image or material imports.
meta_map={}; object_map={}
def meta(i):
    if i<0:return i
    if i in meta_map:return meta_map[i]
    source=reference.meta_objects[i]
    found=next((j for j,m in enumerate(w.meta_objects) if m.name==source.name),None)
    def signature(m):return [(d.slot,d.short_name,d.size) for d in m.fields]
    if found is not None:
        if signature(w.meta_objects[found])!=signature(source):raise ValueError('Incompatible shared metadata')
        meta_map[i]=found;return found
    result=copy.deepcopy(source); result.parent_index=meta(source.parent_index)
    for d in result.fields:
        n=reference.meta_fields[d.type_index]
        dest=next((j for j,v in enumerate(w.meta_fields) if v.name==n.name),None)
        if dest is None:dest=len(w.meta_fields);w.meta_fields.append(copy.deepcopy(n))
        d.type_index=dest
    meta_map[i]=len(w.meta_objects);w.meta_objects.append(result);return meta_map[i]
allowed={b'igTransformSequence1_5',b'igVec3fList',b'igQuaternionfList',b'igLongList'}
def import_object(i):
    if i<0:return i
    if i in object_map:return object_map[i]
    obj=copy.deepcopy(reference.objects[i]); info=copy.deepcopy(reference.ref_info[i])
    if info['is_object'] and reference.meta_objects[obj.type_index].name not in allowed:
        raise ValueError('Unexpected object in animation graph')
    dest=len(w.objects);object_map[i]=dest
    w.objects.append(obj);w.ref_info.append(info);w.index_map.append(-1)
    info['type_index']=meta(info['type_index'])
    entry=copy.deepcopy(reference.entries[reference.index_map[i]])
    source_fields=reference.meta_objects[entry.type_index].fields
    entry.type_index=meta(entry.type_index);entry.raw_bytes=None
    for j,d in enumerate(source_fields):
        if d.slot==(11 if info['is_object'] else 10):entry.field_values[j]=info['type_index']
        if not info['is_object'] and d.slot==12:entry.field_values[j]=-1
    w.index_map[dest]=len(w.entries);w.entries.append(entry)
    if info['is_object']:
        obj.type_index=info['type_index'];obj.raw_bytes=None
        obj.raw_fields=[(k,import_object(v) if t.short_name in (b'ObjectRef',b'MemoryRef') else v,t) for k,v,t in obj.raw_fields]
    else:info['align_type_idx']=-1
    return dest
sequence=import_object(seqs[0])
transforms=typed(w,b'igTransform'); scenes=typed(w,b'igSceneInfo')
if len(transforms)!=1 or len(scenes)!=1:raise ValueError('Unexpected XML2 model graph')
node=transforms[0];matrix=field(w,node,8)
if field(w,node,11)!=-1:raise ValueError('Model is already animated')
def key_data(slot,values):
    listing=field(w,sequence,slot);memory=field(w,listing,4)
    if field(w,listing,2)!=2:raise ValueError('Expected two keys')
    block=w.objects[memory];new=struct.pack('<'+'f'*len(values),*values)
    if len(new)!=len(block.data):raise ValueError('Unexpected key data size')
    block.data=new;block.raw_data=None
# The existing geometry spans x=-21.4537048..131.5462952 before translation.
# Scale around its left edge so volume grows left-to-right, keeping XML2 art.
geometry=typed(w,b'igGeometry')[0];box=field(w,geometry,3)
minimum=field(w,box,2)[0];left=minimum+matrix[12];epsilon=.00001
key_data(2,[left-epsilon*minimum,matrix[13],matrix[14],matrix[12],matrix[13],matrix[14]])
key_data(3,[0,0,0,1,0,0,0,1])
key_data(4,[epsilon,1,1,1,1,1])
put(w,node,11,sequence)
put(w,scenes[0],9,field(reference,seqs[0],18))

anchors={field(layout,i,2):i for i in typed(layout,b'igHashedUserInfo')}
nodes={field(layout,i,2):i for i in typed(layout,b'igTransform')}
for name in ('fx_vol','music_vol'):
    props=field(layout,anchors[name],8);memory=field(layout,props,4)
    matches=[]
    for prop, in struct.iter_unpack('<i',layout.objects[memory].data):
        if field(layout,field(layout,prop,2),2)=='Model':matches.append(field(layout,prop,3))
    if len(matches)!=1:raise ValueError('Expected one slider Model property')
    put(layout,matches[0],2,'m_options_sound_select')
    m=list(field(layout,nodes[name],8));m[0]=.94;m[10]=.42;m[12]=101.5
    m[14]=268.2 if name=='fx_vol' else 239.2
    put(layout,nodes[name],8,tuple(m))
for writer,target in zip((layout,w),targets):
    target.parent.mkdir(parents=True,exist_ok=True);writer.write(str(target));read(target)
for source in a.menu:
    tree=ET.parse(source)
    if tree.getroot().get('igb','').lower()!='x2m_options':
        raise ValueError('Menu must use the original layout resource')
    changed=0
    for item in tree.getroot().findall('item'):
        if item.get('focusmodel')=='ui/models/m_options_sound_select':
            item.set('focusmodel','ui/models/m_options_view_select');changed+=1
    if changed!=2:raise ValueError('Expected exactly two volume-row focus references')
    target=a.output_assets/'ui/menus'/source.name
    if target.resolve() in {s.resolve() for s in sources}:raise ValueError('Preserve source menus')
    ET.indent(tree,space='  ');tree.write(target,encoding='unicode');targets.append(target)
assert [s.read_bytes() for s in sources]==originals
report=dict(animation_objects=len(object_map),outputs={str(t.relative_to(a.output_assets)):hashlib.sha256(t.read_bytes()).hexdigest() for t in targets},sources={str(s):hashlib.sha256(b).hexdigest() for s,b in zip(sources,originals)})
(a.output_assets/'volume-animation.json').write_text(json.dumps(report,indent=2)+'\n')
print(json.dumps(report,indent=2))
