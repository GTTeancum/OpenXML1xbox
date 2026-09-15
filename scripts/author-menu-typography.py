"""Size the copied XML2 menu labels for the XML1 font.

Preserves the package-declared resource name and relative output path. This is
asset authoring only; no package edits or runtime resource aliases are created.
"""
from pathlib import Path
import argparse,sys,json,hashlib
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
r=IGBReader(str(source));r.read();w=from_reader(r);changes={}
for o in w.objects:
 if not hasattr(o,'raw_fields') or w.meta_objects[o.type_index].name!=b'igTransform':continue
 vals={k:v for k,v,t in o.raw_fields};name=vals.get(2,'')
 if not name.startswith('label_'):continue
 mat=list(vals[8]);before=mat[:]
 for k in [0,1,2,4,5,6,8,9,10]:mat[k]*=.65
 if name=='label_controls':
  mat=[.65,0,0,0,0,.65,0,0,0,0,.65,0,254,-120,303,1]
 o.raw_bytes=None;o.raw_fields=[(k,tuple(mat) if k==8 else v,t) for k,v,t in o.raw_fields]
 changes[name]={'before':before,'after':mat}
if not changes or 'label_controls' not in changes:
 raise ValueError('Expected XML2 label anchors are absent')
output.parent.mkdir(parents=True,exist_ok=True);w.write(str(output))
check=IGBReader(str(output));check.read()
assert source.read_bytes()==original, 'Source IGB changed'
output.with_suffix('.typography.json').write_text(json.dumps({'package':str(args.package),'resource':resource,'input_sha256':hashlib.sha256(original).hexdigest(),'output_sha256':hashlib.sha256(output.read_bytes()).hexdigest(),'transforms':changes},indent=2))
print('Authored',len(changes),'label transforms')
