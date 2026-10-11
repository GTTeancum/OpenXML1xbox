"""Dispose only an armed XML2 stat-import request at native termination points."""
from pathlib import Path
from recomp_source import RecompSources

root = Path(__file__).resolve().parents[1]
index=RecompSources(root/'src/recomp/gen')
pending={}
for address, owner, native in (
    ('000A5230', 'ecx', '    eax = MEM32(esp + 4);'),
    ('000A5380', 'ecx', '    PUSH32(esp, esi);'),
    # A56F0's terminating error popup clears mode directly at A58AC; it does
    # not call A5380. Hook before the block's register/flag calculations.
    ('000A589B', 'esi', '    SET_LO8(ecx, MEM8(esi + 0x774));'),
):
    path=index.label_path(int(address,16))
    text=pending.get(path,path.read_text())
    marker = f'loc_{address}: ;\n'
    insert = f'    xml1_saved_stats_cancel({owner});\n'
    if text.count(marker) != 1:
        raise SystemExit('Missing saved-stat lifecycle boundary ' + address)
    tail = text.split(marker, 1)[1]
    if tail.startswith(insert):
        tail = tail[len(insert):]
    else:
        text = text.replace(marker, marker + insert, 1)
    if not tail.startswith(native):
        raise SystemExit('Changed saved-stat lifecycle instruction ' + address)
    pending[path]=text
path=index.label_path(0xA5420)
text=pending.get(path,path.read_text())
include = '#include "engine/saves/raven_saved_stats_guest.h"\n'
marker = 'loc_000A5420: ;\n'
insert = '    if (xml1_saved_stats_complete(ecx)) { esp += 4; return; }\n'
if text.count(marker) != 1:
    raise SystemExit('Missing saved-stat completion boundary')
tail = text.split(marker, 1)[1]
if tail.startswith(insert):
    tail = tail[len(insert):]
else:
    text = text.replace(marker, marker + insert, 1)
if not tail.startswith('    PUSH32(esp, esi);'):
    raise SystemExit('Changed saved-stat completion instruction')
pending[path]=text
path=index.label_path(0x18D102)
text = path.read_text()
marker = 'loc_0018D102: ;\n'
insert = '    xml1_saved_stats_after_reset();\n'
if text.count(marker) != 1:
    raise SystemExit('Missing saved-stat post-reset boundary')
tail = text.split(marker, 1)[1]
trace = '    xml1_newgame_trace("0018D102");\n'
anchor=marker
if tail.startswith(trace):
    tail=tail[len(trace):]
    anchor+=trace
if tail.startswith(insert):
    tail = tail[len(insert):]
else:
    text = text.replace(anchor, anchor + insert, 1)
if tail.startswith(trace):
    tail = tail[len(trace):]
if not tail.startswith('    eax = MEM32(0x498DB0);'):
    raise SystemExit('Changed saved-stat post-reset instruction')
pending[path]=text
for path,text in pending.items():
    if include not in text:
        text = include + text
    if path.read_text() != text:
        path.write_text(text)
print('Installed import-only saved-stat lifetime and startup boundaries')
