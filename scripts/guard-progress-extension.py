"""Attach missing progress state to verified XML1 owner lifecycle entries."""
from pathlib import Path
from recomp_source import RecompSources

root = Path(__file__).resolve().parents[1]
hooks = {
    'campaign-io': [
        ('0008BE30', 'xml1_progress_construct(ecx);', '    PUSH32(esp, 0xFFFFFFFFu);'),
        ('0008C042', 'xml1_progress_campaign_save(MEM32(esp+4));', '    esp += 8; return; /* ret 4 */'),
        ('0008C065', 'xml1_progress_campaign_load(esi, MEM32(esp+8));', '    edx = MEM32(esi);'),
    ],
    'progress-state': [
        ('0008C349', 'xml1_progress_campaign_completed(esi, LO8(ebx));', '    SET_LO8(edx, MEM8(esi + 0x195));'),
        ('0008C820', 'xml1_progress_snapshot(ecx, MEM32(esp+4));', '    PUSH32(esp, ebx);'),
        ('0008C930', 'xml1_progress_restore(ecx, MEM32(esp+4));', '    PUSH32(esp, ebx);'),
        ('0008C5F0', 'xml1_progress_merge(ecx, MEM32(esp+4));', '    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;'),
    ],
    'options': [
        ('0011FE10', 'if (xml1_progress_options_io(0)) return;', '    PUSH32(esp, esi);'),
        ('00120090', 'if (xml1_progress_options_io(1)) return;', '    esp = esp - 0x104;'),
    ],
}
pending = {}
index=RecompSources(root/'src/recomp/gen')
changes={address:(call,native) for group in hooks.values() for address,call,native in group}
for path, entries in index.grouped_labels(changes).items():
    text = path.read_text()
    for address, (call, native) in entries.items():
        marker = f'loc_{address}: ;\n'
        insert = f'    {call}\n'
        if text.count(marker) != 1:
            raise SystemExit('Missing progress entry '+address)
        tail = text.split(marker, 1)[1]
        if tail.startswith(insert):
            tail = tail[len(insert):]
        else:
            text = text.replace(marker, marker+insert, 1)
        if native is not None and not tail.startswith(native):
            raise SystemExit('Changed progress native entry '+address)
    include = '#include "engine/world/raven_progress_guest.h"\n'
    if include not in text:
        text = include+text
    pending[path] = text
path=index.label_path(0x11FF6A)
text=pending.get(path,path.read_text())
# At this point two arguments have been pushed since loc_0011FF6A;
# the original payload parameter is therefore at esp+24C (native
# 11FFDB reads it at esp+248 after one push instead).
old = 'loc_0011FF6A: ;\n    PUSH32(esp, 0);\n    PUSH32(esp, 0x80);\n    PUSH32(esp, 4);'
new = old.rsplit('PUSH32(esp, 4);', 1)[0] + 'PUSH32(esp, xml1_progress_options_disposition(MEM32(esp + 0x24C)));'
if text.count(new) == 1:
    pass
elif text.count(old) == 1:
    text = text.replace(old, new, 1)
else:
    raise SystemExit('Changed options create disposition boundary')
if include not in text:text=include+text
pending[path]=text
for path, text in pending.items():
    if path.read_text() != text:
        path.write_text(text)
print('Installed additional progress owner lifecycle boundaries')
