"""Remove exploratory invisible Model properties from native menu anchors.

The anchors and their ItemName properties remain in the same menu IGB. Native
focusmodel declarations supply the visible selection art. No asset is renamed.
"""
import argparse
import copy
import hashlib
import json
import struct
import sys
from pathlib import Path

parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument('--writer-root', type=Path, required=True)
parser.add_argument('--input', type=Path, required=True)
parser.add_argument('--output-assets', type=Path, required=True)
args = parser.parse_args()
target = args.output_assets / 'ui/menus' / args.input.name
if args.input.stem.lower() != 'x2m_options':
    raise ValueError('Expected the original x2m_options resource')
if target.resolve() == args.input.resolve():
    raise ValueError('Preserve the source; use a separate output tree')
original = args.input.read_bytes()
sys.path.insert(0, str(args.writer_root.resolve()))
from igb_format.igb_reader import IGBReader
from igb_format.igb_writer import from_reader

r = IGBReader(str(args.input)); r.read(); w = from_reader(r)
def field(i, slot):
    return next(v for k, v, _ in w.objects[i].raw_fields if k == slot)
def put(i, slot, value):
    o = w.objects[i]; o.raw_bytes = None
    o.raw_fields = [(k, value if k == slot else v, t) for k, v, t in o.raw_fields]

removed = []
for i, obj in enumerate(w.objects):
    if not hasattr(obj, 'raw_fields') or w.meta_objects[obj.type_index].name != b'igHashedUserInfo':
        continue
    props = field(i, 8); memory = field(props, 4)
    if memory < 0:
        continue
    refs = [j for j, in struct.iter_unpack('<i', w.objects[memory].data)]
    keep = [j for j in refs if not (
        field(field(j, 2), 2) == 'Model' and field(field(j, 3), 2) == 'm_invis')]
    if keep == refs:
        continue
    if not any(field(field(j, 2), 2) == 'ItemName' for j in keep):
        raise ValueError('Removing a Model must preserve the native ItemName')
    removed.append(field(i, 2))
    put(props, 2, len(keep)); put(props, 3, len(keep))
    block = w.objects[memory]
    block.data = struct.pack('<' + 'i' * len(keep), *keep); block.raw_data = None
    entry = copy.deepcopy(w.entries[w.index_map[memory]]); entry.raw_bytes = None
    for pos, descriptor in enumerate(w.meta_objects[entry.type_index].fields):
        if descriptor.slot == 7:
            entry.field_values[pos] = len(block.data)
    w.index_map[memory] = len(w.entries); w.entries.append(entry)
    w.ref_info[memory]['mem_size'] = len(block.data)
if not removed:
    raise ValueError('No exploratory invisible Model properties found')
target.parent.mkdir(parents=True, exist_ok=True)
w.write(str(target))
check = IGBReader(str(target)); check.read()
assert args.input.read_bytes() == original
report = dict(removed=removed, source_sha256=hashlib.sha256(original).hexdigest(),
              output_sha256=hashlib.sha256(target.read_bytes()).hexdigest())
target.with_suffix('.remove-invisible.json').write_text(json.dumps(report, indent=2)+'\n')
print(json.dumps(report, indent=2))
