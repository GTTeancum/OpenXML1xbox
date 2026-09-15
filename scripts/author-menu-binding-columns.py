"""Give long controller bindings room within the existing XML2 menu IGB."""
import argparse,hashlib,json,sys
from pathlib import Path
from menu_igb_graph import field,put
from xml1_packages import read_pkgb
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('--writer-root',type=Path,required=True)
p.add_argument('--input',type=Path,required=True)
p.add_argument('--package',type=Path,required=True)
p.add_argument('--output-assets',type=Path,required=True)
a=p.parse_args();resource='ui/menus/'+a.input.stem
assert resource.lower() in {dict(r.attributes).get('filename','').lower() for r in read_pkgb(a.package.read_bytes()) if r.kind=='model'}
target=a.output_assets/'ui/menus'/a.input.name
assert target.resolve()!=a.input.resolve()
original=a.input.read_bytes();sys.path.insert(0,str(a.writer_root.resolve()))
from igb_format.igb_reader import IGBReader
from igb_format.igb_writer import from_reader
r=IGBReader(str(a.input));r.read();w=from_reader(r)
names={f'label_button{i:02}' for i in range(7,13)}|{'label_stick02','pc_header_primary'}|{f'pc_cell_focus_{i}_0' for i in range(7)}
changes={}
for j,o in enumerate(w.objects):
 if not hasattr(o,'raw_fields') or w.meta_objects[o.type_index].name!=b'igTransform':continue
 name=field(w,j,2)
 if name not in names:continue
 matrix=list(field(w,j,8));before=matrix[12]
 expected=393 if name.startswith('pc_cell_focus_') else 383 if name=='label_stick02' else 375
 assert before==expected, 'Use the preserved pre-spacing IGB input'
 matrix[12]-=10
 put(w,j,8,tuple(matrix));changes[name]=[before,matrix[12]]
assert set(changes)==names
target.parent.mkdir(parents=True,exist_ok=True);w.write(str(target))
check=IGBReader(str(target));check.read();assert a.input.read_bytes()==original
(a.output_assets/'binding-columns.json').write_text(json.dumps({'resource':resource,'source_sha256':hashlib.sha256(original).hexdigest(),'output_sha256':hashlib.sha256(target.read_bytes()).hexdigest(),'anchors':changes},indent=2))
print('Moved primary text/header/focus anchors together:',target)
