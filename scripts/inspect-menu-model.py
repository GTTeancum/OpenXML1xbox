"""Report serialized menu-model geometry and transforms without modifying assets."""
import argparse
import hashlib
import json
import struct
import sys
from pathlib import Path

p = argparse.ArgumentParser(description=__doc__)
p.add_argument('--writer-root', type=Path, required=True)
p.add_argument('--input', type=Path, required=True)
p.add_argument('--output', type=Path, required=True)
a = p.parse_args()
if a.input.resolve() == a.output.resolve():
    raise ValueError('The report must not replace its source model')
original = a.input.read_bytes()
sys.path.insert(0, str(a.writer_root.resolve()))
from igb_format.igb_reader import IGBReader
from igb_format.igb_writer import from_reader
r = IGBReader(str(a.input)); r.read(); w = from_reader(r)

def fields(i):
    return {k: v for k, v, _ in w.objects[i].raw_fields}

def members(i):
    if i < 0:
        return []
    f = fields(i)
    if f[4] < 0:
        return []
    values = [v for v, in struct.iter_unpack('<i', w.objects[f[4]].data)]
    return values[:f[2]]

report = {'source': str(a.input), 'sha256': hashlib.sha256(original).hexdigest(),
          'geometry': [], 'transforms': []}
for i, obj in enumerate(w.objects):
    if not hasattr(obj, 'raw_fields'):
        continue
    kind = w.meta_objects[obj.type_index].name
    f = fields(i)
    if kind == b'igGeometry':
        box = fields(f[3]) if f[3] >= 0 else {}
        report['geometry'].append({'object': i, 'name': f[2],
            'minimum': box.get(2), 'maximum': box.get(3),
            'attributes': members(f[8])})
    elif kind == b'igTransform':
        report['transforms'].append({'object': i, 'name': f[2],
            'matrix': f[8], 'children': members(f[7])})
assert a.input.read_bytes() == original
a.output.parent.mkdir(parents=True, exist_ok=True)
a.output.write_text(json.dumps(report, indent=2), encoding='utf8')
print(f"{len(report['geometry'])} geometry nodes, {len(report['transforms'])} transforms: {a.output}")
