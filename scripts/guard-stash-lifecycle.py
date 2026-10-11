"""Attach stash ownership to the native inventory, not campaign-record copies."""
from pathlib import Path
from recomp_source import RecompSources

root = Path(__file__).resolve().parents[1]
index=RecompSources(root/'src/recomp/gen')
pending={}
for address, call, native in [
    # Construction has finished initializing both native snapshot-valid flags.
    ('0007F82F', 'raven_stash_reset(esi);', '    ecx = MEM32(esp + 0xC);'),
    # After the existing NG+ early-return and native credits reset. Snapshot
    # state survives, matching the native current-inventory-only operation.
    ('0007E2FC', 'raven_stash_clear_live(edi);', '    eax = edi + 0x20;'),
    ('0007DF80', 'raven_stash_forget(ecx);', '    { uint32_t _icall_esp = g_esp;'),
    ('0007E7F0', '(void)raven_stash_capture(ecx, 0);', '    PUSH32(esp, ecx);'),
    ('0007E9B0', '(void)raven_stash_capture(ecx, 1);', '    PUSH32(esp, ecx);'),
    # The guest flag is authoritative: failed/no-op native restoration must
    # never consume an adjunct snapshot. The owner also enforces one-shot use.
    ('0007E8E0', 'if (MEM8(ecx + 0x1918)) (void)raven_stash_restore(ecx, 0);', '    PUSH32(esp, edi);'),
    ('0007EAA0', 'if (MEM8(ecx + 0x1A64)) (void)raven_stash_restore(ecx, 1);', '    PUSH32(esp, edi);'),
]:
    path=index.label_path(int(address,16))
    text=pending.get(path,path.read_text())
    marker = f'loc_{address}: ;\n'
    insert = f'    {call}\n'
    if text.count(marker) != 1:
        raise SystemExit('Missing stash inventory boundary ' + address)
    tail = text.split(marker, 1)[1]
    if tail.startswith(insert):
        tail = tail[len(insert):]
    else:
        text = text.replace(marker, marker + insert, 1)
    if not tail.startswith(native):
        raise SystemExit('Changed stash inventory boundary ' + address)
    pending[path]=text
for path,text in pending.items():
    include = '#include "engine/inventory/raven_stash_owner.h"\n'
    if include not in text:
        text = include + text
    if path.read_text() != text:
        path.write_text(text)
print('Installed stash inventory construction and snapshot boundaries')
