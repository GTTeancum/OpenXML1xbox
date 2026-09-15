"""Separate the copied Options panel's gray tracks for native menu authoring.

Produces an intermediate panel IGB and a lossless track mesh description.
Do not stage the panel until the tracks are reattached to normal Options.
Original resource filenames and all unrelated geometry are preserved.
"""
import argparse
import copy
import hashlib
import json
import struct
import sys
from pathlib import Path

p = argparse.ArgumentParser(description=__doc__)
p.add_argument('--writer-root', type=Path, required=True)
p.add_argument('--input', type=Path, required=True)
p.add_argument('--output-assets', type=Path, required=True)
a = p.parse_args()
if a.input.stem.lower() != 'm_options_screen':
    raise ValueError('Expected the original m_options_screen resource')
target = a.output_assets / 'ui/models' / a.input.name
if target.resolve() == a.input.resolve():
    raise ValueError('Preserve the source model')
original = a.input.read_bytes()
sys.path.insert(0, str(a.writer_root.resolve()))
from igb_format.igb_reader import IGBReader
from igb_format.igb_writer import from_reader
r = IGBReader(str(a.input)); r.read(); w = from_reader(r)
if w.version != 6 or w.endian != '<':
    raise ValueError('Expected little-endian Alchemy v6')

def f(i, k):
    return next(v for slot, v, _ in w.objects[i].raw_fields if slot == k)

def put(i, k, value):
    obj = w.objects[i]; obj.raw_bytes = None
    obj.raw_fields = [(slot, value if slot == k else old, t)
                      for slot, old, t in obj.raw_fields]

def replace_memory(i, data):
    obj = w.objects[i]; obj.data = data; obj.raw_data = None
    entry = copy.deepcopy(w.entries[w.index_map[i]]); entry.raw_bytes = None
    for n, field in enumerate(w.meta_objects[entry.type_index].fields):
        if field.slot == 7:
            entry.field_values[n] = len(data)
    w.index_map[i] = len(w.entries); w.entries.append(entry)
    w.ref_info[i]['mem_size'] = len(data)

candidates = []
for i, obj in enumerate(w.objects):
    if not hasattr(obj, 'raw_fields') or w.meta_objects[obj.type_index].name != b'igGeometryAttr1_5':
        continue
    va = f(i, 4)
    ext = struct.unpack('<20i', w.objects[f(va, 2)].data)
    if ext[0] < 0 or ext[2] < 0 or ext[11] >= 0:
        continue
    positions = list(struct.iter_unpack('<3f', w.objects[ext[0]].data))
    colors = list(struct.iter_unpack('<4B', w.objects[ext[2]].data))
    gray = {n for n, c in enumerate(colors) if c == (64, 64, 64, 255)}
    if len(gray) == 8:
        candidates.append((i, va, positions, colors, gray))
if len(candidates) != 1:
    raise ValueError('Expected exactly one untextured mesh with eight gray track vertices')
attr, va, positions, colors, gray = candidates[0]
if f(attr, 6) != 4:
    raise ValueError('Expected the original triangle strip')
index_array = f(attr, 5); memory = f(index_array, 2)
indices = list(struct.unpack('<' + 'H' * f(index_array, 3), w.objects[memory].data))
triangles = []
for n in range(2, len(indices)):
    t = (indices[n-2], indices[n-1], indices[n])
    if n % 2:
        t = (t[1], t[0], t[2])
    if len(set(t)) == 3:
        triangles.append(t)
tracks = [t for t in triangles if set(t) <= gray]
frame = [t for t in triangles if not set(t) & gray]
if len(tracks) != 4 or len(frame) + len(tracks) != len(triangles):
    raise ValueError('Track triangles must be isolated from all frame vertices')
# Confirm two horizontal quads instead of selecting unrelated gray details.
zs = sorted({round(positions[n][2], 3) for n in gray})
if len(zs) != 4 or abs(zs[1]-zs[0]-8) > .01 or abs(zs[3]-zs[2]-8) > .01:
    raise ValueError('Gray vertices do not form the observed eight-unit-high tracks')
flat = []
for triangle in frame:
    if flat:
        flat.extend((flat[-1], triangle[0]))
        if len(flat) % 2:
            flat.append(triangle[0])
    flat.extend(triangle)
# Keep the source's strip representation, with degenerate connectors.
decoded = []
for n in range(2, len(flat)):
    t = (flat[n-2], flat[n-1], flat[n])
    if n % 2:
        t = (t[1], t[0], t[2])
    if len(set(t)) == 3:
        decoded.append(t)
assert decoded == frame
replace_memory(memory, struct.pack('<' + 'H' * len(flat), *flat))
put(index_array, 3, len(flat))
length_array = f(attr, 13)
assert f(length_array, 3) == 1
replace_memory(f(length_array, 2), struct.pack('<I', len(flat)))
target.parent.mkdir(parents=True, exist_ok=True); w.write(str(target))
check = IGBReader(str(target)); check.read(); cw = from_reader(check)
cf = lambda i, k: next(v for slot, v, _ in cw.objects[i].raw_fields if slot == k)
assert cf(attr, 6) == 4 and cf(index_array, 3) == len(flat)
assert cw.objects[memory].data == struct.pack('<' + 'H' * len(flat), *flat)
assert a.input.read_bytes() == original
used = sorted(gray); remap = {old: new for new, old in enumerate(used)}
report = {'intermediate_only': True, 'source': str(a.input),
          'source_sha256': hashlib.sha256(original).hexdigest(),
          'panel_sha256': hashlib.sha256(target.read_bytes()).hexdigest(),
          'attribute': attr, 'vertex_array': va, 'original_triangle_count': len(triangles),
          'retained_triangles': frame, 'track_original_triangles': tracks,
          'positions': [positions[n] for n in used], 'colors': [colors[n] for n in used],
          'triangles': [[remap[n] for n in t] for t in tracks],
          'reattachment_required': 'Restore these tracks under independently controlled normal Options anchors before staging.'}
target.with_suffix('.tracks.json').write_text(json.dumps(report, indent=2), encoding='utf8')
print(f'Intermediate only: {len(frame)} frame triangles retained; four track triangles separated: {target}')
