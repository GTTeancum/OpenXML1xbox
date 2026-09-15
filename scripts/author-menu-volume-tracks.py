"""Move the copied panel's static tracks into its declared volume model.

Keep original resource paths. The existing volume animation affects only the
fill; the added track is a sibling under the model's original scene root.
"""
import argparse, hashlib, json, struct, sys
from pathlib import Path
from menu_igb_graph import field, put, memory, refs, transfer_graph, strip_triangles, set_strip_triangles

p=argparse.ArgumentParser(description=__doc__)
p.add_argument('--writer-root',type=Path,required=True)
p.add_argument('--assets',type=Path,required=True)
p.add_argument('--panel',type=Path,required=True)
p.add_argument('--split-model',type=Path,required=True)
p.add_argument('--tracks',type=Path,required=True)
p.add_argument('--output-assets',type=Path,required=True)
a=p.parse_args()
assert a.assets.resolve()!=a.output_assets.resolve()
layout_path=a.assets/'ui/menus/x2m_options.igb'
volume_path=a.assets/'ui/models/m_options_sound_select.igb'
menus=[a.assets/'ui/menus'/name for name in ('options.eng','options_controller_xbox.eng')]
sources=[layout_path,volume_path,a.panel,a.split_model,a.tracks,*menus]
originals=[s.read_bytes() for s in sources]
report=json.loads(a.tracks.read_text())
assert hashlib.sha256(a.panel.read_bytes()).hexdigest()==report['source_sha256']
assert hashlib.sha256(a.split_model.read_bytes()).hexdigest()==report['panel_sha256']
sys.path.insert(0,str(a.writer_root.resolve()))
from igb_format.igb_reader import IGBReader
from igb_format.igb_writer import from_reader
def read(path):
 r=IGBReader(str(path));r.read();return from_reader(r)
layout=read(layout_path);w=read(volume_path);source=read(a.panel);panel_model=read(a.split_model)
assert all(v.version==6 and v.endian=='<' for v in (layout,w,source))
def named(v,name):
 return next(i for i,o in enumerate(v.objects) if hasattr(o,'raw_fields') and
  v.meta_objects[o.type_index].name==b'igTransform' and field(v,i,2)==name)
panel=named(layout,'options_screen');fx=named(layout,'fx_vol');music=named(layout,'music_vol')
sequence=field(layout,panel,11);positions=field(layout,sequence,2)
end=struct.unpack('<3f',layout.objects[field(layout,positions,4)].data[-12:])
anchor=field(layout,fx,8)
assert all(anchor[i]==0 for i in (1,2,3,4,6,7,8,9,11))
attr=report['attribute'];ia=field(source,attr,5)
va=field(source,attr,4);streams=refs(source,field(source,va,2))
verts=list(struct.iter_unpack('<3f',source.objects[streams[0]].data))
triangles=[t for t in report['track_original_triangles'] if min(verts[i][2] for i in t)>100]
assert len(triangles)==2
set_strip_triangles(source,attr,triangles)
# Audited source geometry9/attribute111 contains four end pieces per bar pair.
# Keep its original render states, positions and blue vertex colors.
cap_attr=111
assert refs(source,field(source,field(source,9,8),4))==[cap_attr]
cap_va=field(source,cap_attr,4);cap_streams=refs(source,field(source,cap_va,2))
assert cap_streams[11]==-1
cap_vertices=list(struct.iter_unpack('<3f',source.objects[cap_streams[0]].data))
cap_colors=list(struct.iter_unpack('<4B',source.objects[cap_streams[2]].data))
selected={n for n,v in enumerate(cap_vertices) if 85<v[2]<123 and -240<v[0]<-60}
assert len(selected)==16 and all(cap_colors[n]==(0,128,255,255) for n in selected)
all_caps=strip_triangles(source,cap_attr)
caps=[t for t in all_caps if set(t)<=selected]
retained=[t for t in all_caps if not set(t)&selected]
assert len(caps)==8 and len(retained)==45 and len(caps)+len(retained)==len(all_caps)
assert strip_triangles(panel_model,cap_attr)==all_caps
upper_caps=[t for t in caps if min(cap_vertices[n][2] for n in t)>100]
assert len(upper_caps)==4
set_strip_triangles(source,cap_attr,upper_caps)
set_strip_triangles(panel_model,cap_attr,retained)
root=named(source,'details_screen01');children=field(source,root,7)
assert refs(source,field(source,children,4))==[214,6]
assert refs(source,field(source,field(source,6,7),4))==[9]
# Original model -> fully opened panel -> inverse volume anchor.
matrix=list(field(source,root,8))
for axis in range(3):
 for row in range(3):matrix[row*4+axis]/=anchor[axis*5]
 matrix[12+axis]=(matrix[12+axis]+end[axis]-anchor[12+axis])/anchor[axis*5]
put(source,root,8,tuple(matrix))
static=transfer_graph(w,source,root)
scene=next(i for i,o in enumerate(w.objects) if hasattr(o,'raw_fields') and w.meta_objects[o.type_index].name==b'igSceneInfo')
scene_root=field(w,scene,5);listing=field(w,scene_root,7);mem=field(w,listing,4)
children=refs(w,mem)
assert len(children)==1 and field(w,children[0],11)>=0
fill=children[0];fill_sequence=field(w,fill,11)
children.append(static);memory(w,mem,struct.pack('<2i',*children));put(w,listing,2,2);put(w,listing,3,2)
# Both original gray quads are 28 units apart. Use that same spacing for their
# paired native volume anchors, preserving the model's proportions.
mm=list(field(layout,music,8));mm[14]=anchor[14]-28;put(layout,music,8,tuple(mm))
outputs=[]
for rel,writer in [('ui/models/m_options_sound_select.igb',w),('ui/menus/x2m_options.igb',layout),('ui/models/m_options_screen.igb',panel_model)]:
 out=a.output_assets/rel
 assert all(out.resolve()!=s.resolve() for s in sources)
 out.parent.mkdir(parents=True,exist_ok=True);writer.write(str(out));checked=read(out);outputs.append(out)
 if writer is w:
  assert refs(checked,field(checked,listing,4))==[fill,static]
  assert field(checked,fill,11)==fill_sequence and field(checked,static,11)==-1
 if writer is panel_model:assert strip_triangles(checked,cap_attr)==retained
for filename in ('options.eng','options_controller_xbox.eng'):
 out=a.output_assets/'ui/menus'/filename;out.write_bytes((a.assets/'ui/menus'/filename).read_bytes());outputs.append(out)
assert [s.read_bytes() for s in sources]==originals
(a.output_assets/'volume-tracks.json').write_text(json.dumps({'sources':{str(s):hashlib.sha256(b).hexdigest() for s,b in zip(sources,originals)},'outputs':{str(s):hashlib.sha256(s.read_bytes()).hexdigest() for s in outputs},'panel_end':end,'static_matrix':matrix,'static_root':static},indent=2))
print('Authored static track beside animated volume fill:',a.output_assets)
