"""Run missing auto-equipment selection after an accepted world pickup.

7DB50 follows native quantity clamp/commit7DEC0. Do not hook general quantity
writes: menu transfers and save restoration share those operations. The guest
entry filters equipment records and preserves the interrupted register state.
"""
from pathlib import Path
from recomp_source import RecompSources
root = Path(__file__).resolve().parents[1]
index = RecompSources(root / 'src/recomp/gen')
path = index.label_path(0x0007DB50)
text = path.read_text()
marker = 'loc_0007DB50: ;\n'
insert = '    xml1_auto_equip_pickup(ebx);\n'
native = '    goto loc_0007DC60;'
if text.count(marker) != 1:
    raise SystemExit('Missing accepted pickup boundary 0007DB50')
tail = text.split(marker, 1)[1]
if tail.startswith(insert):
    tail = tail[len(insert):]
else:
    text = text.replace(marker, marker + insert, 1)
if not tail.startswith(native):
    raise SystemExit('Changed accepted pickup continuation 0007DB50')
include = '#include "engine/scripting/raven_script_extensions.h"\n'
if include not in text:
    text = include + text
if path.read_text() != text:
    path.write_text(text)
print('Installed accepted equipment pickup auto-equip boundary')
