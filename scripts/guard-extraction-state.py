"""Connect additional extraction metadata/state at traced XML1 boundaries."""
from pathlib import Path
from recomp_source import RecompSources
root = Path(__file__).resolve().parents[1]
hooks = [
    ('00081031', 'xml1_extraction_capture(MEM32(esp+0x6C));', '    ecx = esp + 0x6C;'),
    ('0007053B', 'xml1_extraction_campaign_save(ebx);', '    eax = esp + 0x14;'),
    ('000706B1', 'xml1_extraction_campaign_load(ebx);', '    ecx = ebx;'),
    ('0018CF90', 'raven_extraction_reset();', '    PUSH32(esp, ebp);'),
]
index = RecompSources(root/'src/recomp/gen')
groups = {}
for entry in hooks:
    groups.setdefault(index.label_path(int(entry[0],16)), []).append(entry)
pending = {}
for path, entries in groups.items():
    text = path.read_text()
    for address, call, native in entries:
        marker = f'loc_{address}: ;\n'
        insert = f'    {call}\n'
        if text.count(marker) != 1:
            raise SystemExit('Missing extraction boundary '+address)
        tail = text.split(marker, 1)[1]
        trace = '    xml1_newgame_trace("0018CF90");\n'
        # The new-game pass may prepend its trace after this guard has run.
        # Keep either established order and do not add a second reset.
        anchor = marker
        if address == '0018CF90' and tail.startswith(trace):
            tail = tail[len(trace):]
            anchor += trace
        if tail.startswith(insert):
            tail = tail[len(insert):]
        else:
            text = text.replace(anchor, anchor+insert, 1)
        # Existing new-game diagnostics remain intact. Extraction travel state
        # resets with campaign progress, independently of carried hero stats.
        if address == '0018CF90' and tail.startswith(trace):
            tail = tail[len(trace):]
        if not tail.startswith(native):
            raise SystemExit('Changed extraction native instruction '+address)
    include = '#include "engine/world/raven_extraction_guest.h"\n#include "engine/world/raven_extraction_owner.h"\n'
    if include not in text:
        text = include+text
    pending[path] = text
for path, text in pending.items():
    if path.read_text() != text:
        path.write_text(text)
print('Installed extraction metadata, campaign save/load and reset boundaries')
