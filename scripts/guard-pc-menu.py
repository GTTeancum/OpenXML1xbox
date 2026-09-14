"""Install the PC application-exit command at its verified dispatch boundary."""
from pathlib import Path
root = Path(__file__).resolve().parents[1]
hooks = {
    'recomp_0023.c': ('loc_0011C680: ;', '''loc_0011C680: ;
    /* Command-manager vtable 003DA650 + 14: execute const char*. */
    if (MEM32(esp+4)) xml1_pc_menu_command((const char *)((uintptr_t)g_xbox_mem_offset+MEM32(esp+4)));'''),
}
for name, (marker, hook) in hooks.items():
    p = root / 'src/recomp/gen' / name
    s = p.read_text(encoding='utf-8')
    if hook in s:
        continue
    if s.count(marker) != 1:
        raise SystemExit('Verified PC menu boundary missing: '+marker)
    s = '#include "pc_menu.h"\n' + s.replace(marker, hook, 1)
    p.write_text(s, encoding='utf-8')
print('Installed PC menu and application-exit command hooks')
