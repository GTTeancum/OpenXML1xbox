"""Embed XML2's PC tab strip in the existing PKGB-declared controls IGB.

Only authored IGB files are output; original menu/model paths are preserved.
Requires Pillow for reading the reference PNG. No runtime overlay is involved.
"""
import argparse, hashlib, importlib.util, json, struct, sys
from pathlib import Path
from PIL import Image
from menu_igb_graph import field, put, memory, refs, transfer_graph, set_strip_triangles
from xml1_packages import read_pkgb

p=argparse.ArgumentParser(description=__doc__)
p.add_argument('--writer-root',type=Path,required=True)
p.add_argument('--assets',type=Path,required=True)
p.add_argument('--reference',type=Path,required=True)
p.add_argument('--output-assets',type=Path,required=True)
p.add_argument('--kind',choices=['players','defaults'],default='players')
a=p.parse_args()
reference_name='tabimg.png' if a.kind=='players' else 'tabimg2.png'
model_rel='ui/models/m_options_controls_screen.igb'
layout_rel='ui/menus/x2m_options.igb'
package=a.assets/'packages/generated/maps/package/menus/options_controller_xbox.pkgb'
assert 'ui/models/m_options_controls_screen' in {dict(r.attributes).get('filename') for r in read_pkgb(package.read_bytes()) if r.kind=='model'}
sources=[a.assets/model_rel,a.assets/layout_rel,a.reference,package]
originals=[s.read_bytes() for s in sources]
for rel in [model_rel,layout_rel]:
 assert (a.output_assets/rel).resolve()!=(a.assets/rel).resolve()
sys.path.insert(0,str(a.writer_root.resolve()))
from igb_format.igb_reader import IGBReader
from igb_format.igb_writer import from_reader
def read(path):
 r=IGBReader(str(path));r.read();return from_reader(r)
w=read(sources[0]);s=read(sources[0]);layout=read(sources[1])
assert w.version==6 and w.endian=='<'
assert not any(hasattr(o,'raw_fields') and w.meta_objects[o.type_index].name==b'igImage' and
 field(w,j,22)=='Texs/'+reference_name for j,o in enumerate(w.objects)), 'Tab art already authored; use the preserved input'
def named(v,name):
 return next(j for j,o in enumerate(v.objects) if hasattr(o,'raw_fields') and
  v.meta_objects[o.type_index].name==b'igTransform' and field(v,j,2)==name)
anchor=named(layout,'controls_screen')
positions=field(layout,field(layout,anchor,11),2)
end=struct.unpack('<3f',layout.objects[field(layout,positions,4)].data[-12:])
# Reuse a textured, alpha-blended branch from the copied controls model.
assert refs(s,field(s,field(s,41,7),4))==[44]
assert refs(s,field(s,field(s,44,8),4))==[165]
assert refs(s,field(s,field(s,41,8),4))==[47,164,150,166]
# The original branch inherits these blend attributes from an ancestor. Its
# new scene-root placement must carry them explicitly to preserve PNG alpha.
attrs=field(s,41,8)
memory(s,field(s,attrs,4),struct.pack('<6i',47,164,150,166,143,135))
put(s,attrs,2,6);put(s,attrs,3,6)
spec=importlib.util.spec_from_file_location('menu_recolor',Path(__file__).with_name('recolor-menu-igb.py'))
recolor=importlib.util.module_from_spec(spec);spec.loader.exec_module(recolor)
image=Image.open(a.reference).convert('RGBA')
width,height=image.size
assert a.reference.name.lower()==reference_name
assert (width,height)==((676,70) if a.kind=='players' else (542,70)), 'Expected original XML2 tab image'
rgba=[(*recolor.blue(pixel[:3]),pixel[3]) for pixel in image.getdata()]
image.putdata(rgba)
tw=1<<(width-1).bit_length();th=1<<(height-1).bit_length()
texture=Image.new('RGBA',(tw,th));texture.paste(image,(0,0))
# Existing native igImage format 7 is RGBA8888, with an explicit byte stride.
assert field(s,132,11)==7
for slot,val in [(2,tw),(3,th),(12,tw*th*4),(19,tw*4),(22,'Texs/'+reference_name)]:put(s,132,slot,val)
memory(s,field(s,132,13),texture.tobytes())
va=field(s,165,4);streams=refs(s,field(s,va,2))
assert streams[0]>=0 and streams[2]>=0 and streams[11]>=0
left,right,bottom,top=(232.,541.,292.,323.) if a.kind=='players' else (232.,541.,46.,77.)
y=-118.-end[1]
vertices=[(left-end[0],y,bottom-end[2]),(right-end[0],y,bottom-end[2]),
          (left-end[0],y,top-end[2]),(right-end[0],y,top-end[2])]
memory(s,streams[0],b''.join(struct.pack('<3f',*v) for v in vertices))
memory(s,streams[2],bytes([255]*16))
uv=[(0,height/th),(width/tw,height/th),(0,0),(width/tw,0)]
memory(s,streams[11],b''.join(struct.pack('<2f',*v) for v in uv))
put(s,va,3,4);set_strip_triangles(s,165,[(0,1,2),(2,1,3)])
box=field(s,44,3)
put(s,box,2,tuple(min(v[i] for v in vertices) for i in range(3)))
put(s,box,3,tuple(max(v[i] for v in vertices) for i in range(3)))
branch=transfer_graph(w,s,41)
scene=next(j for j,o in enumerate(w.objects) if hasattr(o,'raw_fields') and w.meta_objects[o.type_index].name==b'igSceneInfo')
root=field(w,scene,5);listing=field(w,root,7);children=refs(w,field(w,listing,4))
children.append(branch);memory(w,field(w,listing,4),struct.pack('<'+'i'*len(children),*children))
put(w,listing,2,len(children));put(w,listing,3,len(children))
# Register the embedded texture with this scene's normal texture list.
attrs=refs(w,field(w,field(w,branch,8),4))
bind=next(j for j in attrs if w.meta_objects[w.objects[j].type_index].name==b'igTextureBindAttr')
texture_ref=field(w,bind,4);listing=field(w,scene,6);children=refs(w,field(w,listing,4))
children.append(texture_ref);memory(w,field(w,listing,4),struct.pack('<'+'i'*len(children),*children))
put(w,listing,2,len(children));put(w,listing,3,len(children))
if a.kind=='players':
 branding=named(layout,'label_controls');matrix=list(field(layout,branding,8));matrix[14]=339.;put(layout,branding,8,tuple(matrix))
else:
 # Raise the existing panel bottom to leave a separate defaults frame below it.
 # Only original panel streams are reshaped; the previously embedded player
 # frame is untouched. Transform offsets come from the copied model itself.
 for geom,attribute,transform in [(28,0,152),(19,112,122),(6,113,122),(52,159,126),(36,162,152),(44,165,152)]:
  va=field(w,attribute,4);stream=refs(w,field(w,va,2))[0]
  offset=field(w,transform,8)[14]+end[2]
  vertices=list(struct.iter_unpack('<3f',w.objects[stream].data))
  def lifted(z):
   world=z+offset
   return z if world>=112. else 82.+(world-54.)*(30./58.)-offset
  vertices=[(x,y,lifted(z)) for x,y,z in vertices]
  memory(w,stream,b''.join(struct.pack('<3f',*v) for v in vertices))
  box=field(w,geom,3)
  put(w,box,2,tuple(min(v[i] for v in vertices) for i in range(3)))
  put(w,box,3,tuple(max(v[i] for v in vertices) for i in range(3)))
 for n in range(1,4):
  for name in ['pc_preset'+str(n),'pc_preset'+str(n)+'_focus']:
   node=named(layout,name);matrix=list(field(layout,node,8));matrix[14]=61.;put(layout,node,8,tuple(matrix))
outputs=[]
for rel,writer in [(model_rel,w),(layout_rel,layout)]:
 target=a.output_assets/rel;target.parent.mkdir(parents=True,exist_ok=True);writer.write(str(target));read(target);outputs.append(target)
assert [s.read_bytes() for s in sources]==originals
(a.output_assets/'tab-art.json').write_text(json.dumps({
 'sources':{str(s):hashlib.sha256(b).hexdigest() for s,b in zip(sources,originals)},
 'outputs':{str(s):hashlib.sha256(s.read_bytes()).hexdigest() for s in outputs},
 'embedded_reference':'Texs/'+reference_name,'embedded_size':[tw,th],
 'world_bounds':[left,right,bottom,top],'anchor_end':end},indent=2))
print('Authored original XML2 tab strip inside',a.output_assets/model_rel)
