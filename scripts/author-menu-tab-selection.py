"""Embed XML2's selected-tab sprite in its existing PKGB focus-model resource."""
import argparse, copy, hashlib, importlib.util, json, struct, sys
from pathlib import Path
from PIL import Image
from menu_igb_graph import field, put, refs, memory, transfer_graph, set_strip_triangles
from xml1_packages import read_pkgb

p=argparse.ArgumentParser(description=__doc__)
p.add_argument('--writer-root',type=Path,required=True)
p.add_argument('--assets',type=Path,required=True)
p.add_argument('--reference',type=Path,required=True)
p.add_argument('--output-assets',type=Path,required=True)
a=p.parse_args()
model='ui/models/m_pda_option_focus.igb'; layout='ui/menus/x2m_options.igb'
donor='ui/models/m_options_controls_screen.igb'
package=a.assets/'packages/generated/maps/package/menus/options_controller_xbox.pkgb'
declared={dict(r.attributes).get('filename','').lower() for r in read_pkgb(package.read_bytes()) if r.kind=='model'}
assert all(str(Path(rel).with_suffix('')).replace('\\','/').lower() in declared for rel in (model,layout,donor))
sources=[a.assets/model,a.assets/layout,a.assets/donor,a.reference,package]
originals=[s.read_bytes() for s in sources]
assert all((a.output_assets/rel).resolve()!=(a.assets/rel).resolve() for rel in (model,layout))
sys.path.insert(0,str(a.writer_root.resolve()))
from igb_format.igb_reader import IGBReader
from igb_format.igb_writer import from_reader
def read(path):
 r=IGBReader(str(path));r.read();return from_reader(r)
w,l,s=map(read,sources[:3])
assert all(v.version==6 and v.endian=='<' for v in (w,l,s))
assert not any(hasattr(o,'raw_fields') and w.meta_objects[o.type_index].name==b'igImage' and field(w,j,22)=='Texs/tabbtn.png' for j,o in enumerate(w.objects)), 'Use preserved input, not an already authored model'
# Original focus geometry remains under its original transform hierarchy.
assert refs(w,field(w,field(w,49,7),4))==[3]
assert refs(s,field(s,field(s,41,7),4))==[44]
attrs=field(s,41,8)
memory(s,field(s,attrs,4),struct.pack('<6i',47,164,150,166,143,135))
put(s,attrs,2,6);put(s,attrs,3,6)
im=Image.open(a.reference).convert('RGBA')
assert a.reference.name.lower()=='tabbtn.png' and im.size==(121,130)
# Five 26-pixel sprite states: the third contains the opaque selected fill.
assert im.getpixel((60,12))[3]==0 and im.getpixel((60,62))[3]==255
spec=importlib.util.spec_from_file_location('recolor',Path(__file__).with_name('recolor-menu-igb.py'))
recolor=importlib.util.module_from_spec(spec);spec.loader.exec_module(recolor)
im.putdata([(*recolor.blue(c[:3]),c[3]) for c in im.getdata()])
tex=Image.new('RGBA',(128,256));tex.paste(im,(0,0))
assert field(s,132,11)==7
for slot,val in [(2,128),(3,256),(12,128*256*4),(19,128*4),(22,'Texs/tabbtn.png')]:put(s,132,slot,val)
memory(s,field(s,132,13),tex.tobytes())
va=field(s,165,4);streams=refs(s,field(s,va,2))
box=field(w,6,3);lo=field(w,box,2);hi=field(w,box,3)
vertices=[(lo[0],lo[1],lo[2]),(hi[0],lo[1],lo[2]),(lo[0],lo[1],hi[2]),(hi[0],lo[1],hi[2])]
memory(s,streams[0],b''.join(struct.pack('<3f',*v) for v in vertices))
memory(s,streams[2],bytes([255]*16))
uv=[(0,78/256),(121/128,78/256),(0,52/256),(121/128,52/256)]
memory(s,streams[11],b''.join(struct.pack('<2f',*v) for v in uv))
put(s,va,3,4);set_strip_triangles(s,165,[(0,1,2),(2,1,3)])
box=field(s,44,3);put(s,box,2,lo);put(s,box,3,hi)
branch=transfer_graph(w,s,41)
listing=field(w,49,7);memory(w,field(w,listing,4),struct.pack('<i',branch))
put(w,listing,2,1);put(w,listing,3,1)
scene=next(j for j,o in enumerate(w.objects) if hasattr(o,'raw_fields') and w.meta_objects[o.type_index].name==b'igSceneInfo')
attrs=refs(w,field(w,field(w,branch,8),4))
bind=next(j for j in attrs if w.meta_objects[w.objects[j].type_index].name==b'igTextureBindAttr')
listing=field(w,scene,6);storage=field(w,listing,4)
children=refs(w,storage) if storage>=0 else []
if storage<0:
 template=field(w,field(w,branch,8),4);storage=len(w.objects)
 w.objects.append(copy.deepcopy(w.objects[template]));w.ref_info.append(copy.deepcopy(w.ref_info[template]));w.index_map.append(w.index_map[template])
 put(w,listing,4,storage)
children.append(field(w,bind,4));memory(w,storage,struct.pack('<'+'i'*len(children),*children))
put(w,listing,2,len(children));put(w,listing,3,len(children))
for number in range(1,5):
 name='pc_profile_focus_'+str(number)
 node=next(j for j,o in enumerate(l.objects) if hasattr(o,'raw_fields') and l.meta_objects[o.type_index].name==b'igTransform' and field(l,j,2)==name)
 matrix=list(field(l,node,8));matrix[0]=.40;matrix[10]=.65;matrix[12]+=3*(number-1);matrix[14]=307.5;put(l,node,8,tuple(matrix))
 label=next(j for j,o in enumerate(l.objects) if hasattr(o,'raw_fields') and l.meta_objects[o.type_index].name==b'igTransform' and field(l,j,2)=='pc_player'+str(number))
 matrix=list(field(l,label,8));matrix[12]+=3*(number-1);put(l,label,8,tuple(matrix))
outputs=[]
for rel,v in [(model,w),(layout,l)]:
 target=a.output_assets/rel;target.parent.mkdir(parents=True,exist_ok=True);v.write(str(target));read(target);outputs.append(target)
assert [s.read_bytes() for s in sources]==originals
(a.output_assets/'tab-selection.json').write_text(json.dumps({'sources':{str(s):hashlib.sha256(b).hexdigest() for s,b in zip(sources,originals)},'outputs':{str(s):hashlib.sha256(s.read_bytes()).hexdigest() for s in outputs},'embedded_reference':'Texs/tabbtn.png','sprite_rect':[0,52,121,78]},indent=2))
print('Authored native selected-tab sprite:',a.output_assets/model)
