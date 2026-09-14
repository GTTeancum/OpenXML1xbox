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

p = root / 'src/recomp/gen/recomp_0023.c'
s = p.read_text(encoding='utf-8')
marker = 'loc_0011C6A2: ;\n    esi = eax;'
hook = marker + '''
    /* Native parser has consumed one token; keep its existing command chain. */
    if (esi && xml1_pc_native_token((const char *)((uintptr_t)g_xbox_mem_offset+esi))) goto loc_0011C705;'''
if hook not in s:
    if s.count(marker) != 1:
        raise SystemExit('Verified native per-token boundary missing')
    p.write_text(s.replace(marker, hook, 1), encoding='utf-8')

p = root / 'src/recomp/gen/recomp_0032.c'
s = p.read_text(encoding='utf-8')
native_hooks = {
    'loc_00173890: ;': 'loc_00173890: ;\n    xml1_pc_native_item(ecx, 0);',
    'loc_00173BA3: ;': '''loc_00173BA3: ;
    xml1_pc_native_item(esi, (const char *)((uintptr_t)g_xbox_mem_offset+eax));''',
    'loc_0017D750: ;\n    PUSH32(esp, esi);\n    esi = ecx;': '''loc_0017D750: ;
    PUSH32(esp, esi);
    esi = ecx;
    xml1_pc_native_owner(esi, MEM32(esi + 4));
    xml1_pc_native_bounds(esi, SMEM16(esi + 0x5C), SMEM16(esi + 0x5E), SMEM16(esi + 0x60), SMEM16(esi + 0x62));
    /* Feed PC values through the same native string setter as gamevars. */
    if (xml1_pc_native_value(esi, (char *)((uintptr_t)g_xbox_mem_offset+esp-512), 512)) {
        esp -= 512;
        uint32_t pc_text = esp;
        PUSH32(esp, pc_text);
        ecx = esi + 0x74;
        PUSH32(esp, 0x0017D78Eu);
        RECOMP_ABI_CALL(0x001613A0u, sub_001613A0);
        esp += 512;
    }''',
}
for marker, hook in native_hooks.items():
    if hook in s:
        continue
    if s.count(marker) != 1:
        raise SystemExit('Verified native item boundary missing: '+marker)
    s = s.replace(marker, hook, 1)
if '#include "pc_menu.h"' not in s:
    s = '#include "pc_menu.h"\n' + s
p.write_text(s, encoding='utf-8')

p = root / 'src/recomp/gen/recomp_0033.c'
s = p.read_text(encoding='utf-8')
marker = 'loc_00184FD0: ;'
hook = marker + '\n    xml1_pc_native_closed(MEM32(ecx + 0xC08));'
if hook not in s:
    if s.count(marker) != 1:
        raise SystemExit('Verified native close boundary missing')
    s = s.replace(marker, hook, 1)
if '#include "pc_menu.h"' not in s:
    s = '#include "pc_menu.h"\n' + s
p.write_text(s, encoding='utf-8')
