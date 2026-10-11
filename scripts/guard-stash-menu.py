"""Read authored stash mode at the native XML1 shop root-property boundary."""
from pathlib import Path
from recomp_source import RecompSources
root=Path(__file__).resolve().parents[1]
index=RecompSources(root/'src/recomp/gen')
pending={}
for address,call,native in [
    ('00161450','xml1_stash_menu_parse(ecx, MEM32(esp+4));','    PUSH32(esp, 0xFFFFFFFFu);'),
    ('001720D8','raven_stash_menu_set(esi, 0);','    eax = 0; /* xor self */'),
    ('00172720','raven_stash_menu_set(ecx, 0);','    MEM32(ecx) = 0x3DE4AC;'),
    ('0017B289','{ int stash = xml1_stash_menu_stock(MEM32(esp+0x10), eax, MEM8(esp+0x18)); if (stash >= 0) { ebp = MEM32(esp+0x18); if (stash) goto loc_0017B31C; goto loc_0017B40D; } }','    ebp = MEM32(esp + 0x18);'),
    ('0017B439','if (raven_stash_menu_enabled(ebp)) goto loc_0017B54D;','    eax = MEM32(ebp);'),
    ('0017ADA0','if (xml1_stash_menu_eligibility(ecx)) { esp += 4; return; }','    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));'),
    ('0017AB70','if (xml1_stash_menu_labels(ecx, 0, 0)) { esp += 4; return; }','    PUSH32(esp, esi);'),
    ('0017C221','(void)xml1_stash_menu_labels(edi, MEM32(esp+0x2B4), MEM8(esp+0x2B8));','    ecx = MEM32(esp + 0x2A4);'),
    ('0017CAA2','{ int stash = xml1_stash_menu_action(ebp, (int32_t)eax, MEM8(esp+0x13)); if (stash >= 0) { if (stash) goto loc_0017CD1F; goto loc_0017CD33; } }','    ebx = eax;'),
]:
    path=index.label_path(int(address,16))
    text=pending.get(path,path.read_text())
    marker=f'loc_{address}: ;\n';insert=f'    {call}\n'
    if text.count(marker)!=1:raise SystemExit('Missing stash menu boundary '+address)
    tail=text.split(marker,1)[1]
    if tail.startswith(insert):tail=tail[len(insert):]
    else:text=text.replace(marker,marker+insert,1)
    if not tail.startswith(native):raise SystemExit('Changed stash menu boundary '+address)
    for header in ('raven_stash_owner.h','raven_stash_menu_guest.h'):
        include=f'#include "engine/inventory/{header}"\n'
        if include not in text:text=include+text
    pending[path]=text
for path,text in pending.items():
    if path.read_text()!=text:path.write_text(text)
print('Installed authored stash menu mode and lifetime boundaries')
