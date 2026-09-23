"""Install additive character-handler hooks at verified native boundaries.

Contact history supports Bishop drain. Block hooks are inert without the new
handler's generation-keyed state; the new modifier is accepted on lookup miss.
"""
from pathlib import Path
root = Path(__file__).resolve().parents[1]
hooks = {
    'recomp_0002.c': {'0002E6F0': '    xml1_bishop_contact_reset(ecx);\n'},
    'recomp_0003.c': {
        # Add the power13 model lookup only; native animation IDs bypass.
        '0003D600': '    if (xml1_missing_animation_index()) return;\n',
        # Type-checked actor recipient in ESI; original clock is already on ST0.
        '0003CE37': '    xml1_bishop_contact_record(edi, MEM32(esi + 0x1C), (float)g_fp_stack[g_fp_top]);\n'},
    'recomp_0004.c': {
        # CActor move start inlines the bank lookup; only the new enum bypasses it.
        '000406AF': '    if (MEM32(esp+0x3C)==0xD6) { ebp=xml1_power13_animation(esi); goto loc_000406F1; }\n',
        '00043F20': '    xml1_bishop_hit_contact(ecx);\n',
        '00049589': '    xml1_block_parse_modifier(MEM32(esp+4), MEM32(esp+8));\n',
        # New block state only, after native reaction eligibility gates.
        '000444FD': '    if (xml1_block_active(MEM32(esi))) { MEM8(esi+0xA4) &= 0xF7; goto loc_0004452B; }\n'},
    'recomp_0006.c': {
        # A qualifying blocked automatic hit reaches native resolution;
        # preserve its bypass-of-RNG flag, just as the original new handler.
        '0005C3C0': '    if (xml1_block_attack_gate(ebp, edi)) { MEM8(esp+0x30)=1; goto loc_0005C3ED; }\n'},
    # CPowerTriggerEntity accepted contact, after native ownership/health gates
    # and before category dispatch. EBX points to the recipient handle.
    'recomp_0011.c': {
        '000944FB': '    xml1_bishop_trigger_contact(esi, MEM32(ebx));\n',
        '00092429': '    xml1_bishop_trigger_contact(esi, MEM32(esp + 0x20));\n'},
    'recomp_0019.c': {'000E6C6D': '    if (xml1_lightning_event_construct(esi, edi)) { eax = esi; goto loc_000E60DD; }\n', '000E8B52': '    xml1_bishop_register();\n'},
}
# Validate all locations before writing any generated file.
updates = []
for name, entries in hooks.items():
    path = root/'src/recomp/gen'/name
    original = text = path.read_text()
    for address, hook in entries.items():
        marker = f'loc_{address}: ;\n'
        if text.count(marker) != 1:
            raise SystemExit(f'Bishop contact boundary changed: {name}:{address}')
        if marker+hook not in text:
            text = text.replace(marker, marker+hook, 1)
    include = '#include "raven_bishop_guest.h"\n'
    if include not in text:
        text = include+text
    if text != original:
        updates.append((path, text))
for path, text in updates:
    path.write_text(text)
print('Installed missing character handler registration, contacts, block gates and modifier')
