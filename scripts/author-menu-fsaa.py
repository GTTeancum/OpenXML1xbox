"""Populate the copied XML2 Advanced Options layout with native FSAA/window settings.

Keep the copied layout, menu and PKGB paths. Original Options leaves these
controller-only anchors hidden. The source files are never modified.
"""
import argparse,hashlib,json,sys,copy,struct
from pathlib import Path
import xml.etree.ElementTree as ET
from xml1_packages import read_pkgb
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('--writer-root',type=Path,required=True)
p.add_argument('--input',type=Path,required=True)
p.add_argument('--menu',type=Path,required=True)
p.add_argument('--package',type=Path,required=True)
p.add_argument('--output-assets',type=Path,required=True)
a=p.parse_args()
rows=read_pkgb(a.package.read_bytes())
models={dict(r.attributes)['filename'].lower() for r in rows if r.kind=='model'}
assert 'ui/menus/'+a.input.stem.lower() in models
assert 'ui/models/m_options_view_select' in models
assert any(r.kind=='xml' and dict(r.attributes).get('filename','').lower()=='ui/menus/'+a.menu.stem.lower() for r in rows)
original=a.input.read_bytes();original_menu=a.menu.read_bytes()
sys.path.insert(0,str(a.writer_root.resolve()))
from igb_format.igb_reader import IGBReader
from igb_format.igb_writer import from_reader
r=IGBReader(str(a.input));r.read();w=from_reader(r)
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
assert 'pc_window' not in transforms
changes={};added=[]
for name,x,scale,y in [('pc_window',254,.65,-120),('pc_window_focus',296,1,-119)]:
 node=clone(transforms['label_button01']);children=clone(field(node,7));mem=clone(field(children,4));info=clone(refs(mem)[0]);props=clone(field(info,8));pmem=clone(field(props,4));prop=clone(refs(pmem)[0]);val=clone(field(prop,3))
 put(node,7,children);put(children,4,mem);memory(mem,[info]);put(info,2,name);put(info,8,props);put(props,4,pmem);memory(pmem,[prop]);put(prop,3,val);put(val,2,name);put(node,2,name)
 matrix=(.75 if name=='pc_window_focus' else scale,0,0,0,0,scale,0,0,0,0,scale,0,x,y,90,1)
 put(node,8,matrix);changes[name]=matrix;added.append(node)
lists=[]
for j,o in enumerate(w.objects):
 if hasattr(o,'raw_fields') and w.meta_objects[o.type_index].name==b'igNodeList':
  m=field(j,4)
  if m>=0 and transforms['label_button01'] in refs(m):lists.append(j)
assert len(lists)==1
j=lists[0];m=field(j,4);values=refs(m)+added;memory(m,values);put(j,2,len(values));put(j,3,len(values))
menu=ET.fromstring(original_menu);items={i.get('name'):i for i in menu.findall('item')}
assert menu.get('igb').lower()==a.input.stem.lower()
assert items['label_music_volume'].get('gamevar')=='pcnative_window'
items['label_music_volume'].set('gamevar','pcnative_fsaa');items['label_music_volume'].set('usecmd','pcnative_fsaa')
i=ET.SubElement(menu,'item');i.attrib.update(name='pc_window',text='Loading...',style='STYLE_MENU',enabled='true',textalignx='TEXT_ALIGN_LEFT',gamevar='pcnative_window',usecmd='pcnative_window',up='pc_scroll_prev',down='label_accept',left='label_subtitles',focusmodel='ui/models/m_options_view_select',focusitemname='pc_window_focus')
i=ET.SubElement(menu,'item');i.attrib.update(name='pc_window_focus',type='MENU_ITEM_MODEL',enabled='false')
items['pc_scroll_prev'].set('down','pc_window');items['pc_scroll_next'].set('down','pc_window')
items['label_subtitles'].set('right','pc_window')
output=a.output_assets/'ui/menus'/a.input.name;menuout=output.parent/a.menu.name
assert output.resolve()!=a.input.resolve() and menuout.resolve()!=a.menu.resolve()
output.parent.mkdir(parents=True,exist_ok=True);w.write(str(output));check=IGBReader(str(output));check.read()
ET.indent(menu,space='  ');menuout.write_text(ET.tostring(menu,encoding='unicode'),encoding='utf8')
assert a.input.read_bytes()==original and a.menu.read_bytes()==original_menu
output.with_suffix('.fsaa.json').write_text(json.dumps({'input_sha256':hashlib.sha256(original).hexdigest(),'output_sha256':hashlib.sha256(output.read_bytes()).hexdigest(),'package':str(a.package),'transforms':changes},indent=2))
print(output)

