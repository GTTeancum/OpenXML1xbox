"""Attach metadata to verified XML1 definition ownership, not ref releases."""
from pathlib import Path

root=Path(__file__).resolve().parents[1]
p=root/'src/recomp/gen/recomp_0011.c'
s=p.read_text()
marker='loc_00094FE0: ;\n'
first='    PUSH32(esp, esi);'
call='    raven_xml1_powerup_effect_scope(ecx, MEM32(esp + 4));\n'
if marker+call+first not in s:
    if s.count(marker+first)!=1:raise SystemExit('Powerup resource scope boundary changed')
    s=s.replace(marker+first,marker+call+first,1)
include='#include "raven_powerup_metadata.h"\n'
if include not in s:s=include+s
if s!=p.read_text():p.write_text(s)

# Incoming XML2 def_damage joins XML1's existing defensive scale before
# native integer conversion. Install before optional transport diagnostics.
p=root/'src/recomp/gen/recomp_0004.c'
s=p.read_text()
marker='loc_00045517: ;\n'
call='    raven_xml1_combat_defense_damage_scale(MEM32(esi), esi + 0xC, esp + 0x10);\n'
if marker+call not in s:
    if s.count(marker)!=1:raise SystemExit('Native defensive damage boundary changed')
    start=s.index(marker)+len(marker)
    end=s.index('\nloc_',start)
    if 'fp_push((double)SMEM32(esi + 0x94));' not in s[start:end]:
        raise SystemExit('Native defensive damage conversion changed')
    s=s.replace(marker,marker+call,1)
include='#include "raven_powerup_guest.h"\n'
if include not in s:s=include+s
if s!=p.read_text():p.write_text(s)
p=root/'src/recomp/gen/recomp_0012.c'
s=p.read_text()
hooks={
    '00096370':('    PUSH32(esp, 0xFFFFFFFFu);',
        '    raven_xml1_powerup_capture_effects(ecx, MEM32(esp + 4));\n'),
    '00096484':('    ecx = MEM32(esp + 0x30);',
        '    raven_harming_install_callbacks(ebx);\n'),
    '000955C0':('    PUSH32(esp, esi);',
        '    raven_xml1_powerup_metadata_attribute(ecx, (const char*)XBOX_PTR(MEM32(esp + 4)), (const char*)XBOX_PTR(MEM32(esp + 8)));\n'),
    '00096220':('    PUSH32(esp, ebx);',
        '    raven_xml1_powerup_metadata_reset(ecx);\n'),
    # Source parameter remains at ESP+0xC after ESI/EDI pushes. EDI itself
    # has advanced by 0x90 for the fifth name clone; do not use it as source.
    '000955B7':('    POP32(esp, edi);',
        '    raven_xml1_powerup_metadata_clone(esi, MEM32(esp + 0xC));\n'),
    '000964A0':('    PUSH32(esp, esi);',
        '    raven_xml1_powerup_metadata_retire(ecx);\n'),
}
for address,(first,call) in hooks.items():
    marker=f'loc_{address}: ;\n'
    if s.count(marker)!=1:raise SystemExit('Powerup boundary changed: '+address)
    if marker+call+first in s:continue
    if marker+first not in s:raise SystemExit('Powerup boundary instructions changed: '+address)
    s=s.replace(marker+first,marker+call+first,1)
include='#include "raven_powerup_metadata.h"\n'
if include not in s:s=include+s
include='#include "raven_harming_callbacks.h"\n'
if include not in s:s=include+s
include='#include "raven_powerup_guest.h"\n'
if include not in s:s=include+s
if s!=p.read_text():p.write_text(s)

# Remove the superseded attack-event diagnostic insertion. Powerup definitions
# enter through 96370 (including D744E), not the CEF40 damageMod loader.
p=root/'src/recomp/gen/recomp_0017.c'
s=p.read_text()
marker='loc_000CEF40: ;\n'
first='    PUSH32(esp, 0xFFFFFFFFu);'
call='    raven_xml1_powerup_capture_effects(MEM32(ecx + 0x14), MEM32(esp + 4));\n'
s=s.replace(marker+call+first,marker+first,1)
include='#include "raven_powerup_guest.h"\n'
if include not in s:s=include+s
if s!=p.read_text():p.write_text(s)
print('Installed XML1 definition reset/completed-copy/final-destruction metadata boundaries')

# Opt-in registration evidence for the exact native resource namespace.
p=root/'src/recomp/gen/recomp_0001.c'
s=p.read_text()
marker='loc_000264B0: ;\n'
first='    PUSH32(esp, 0xFFFFFFFFu);'
call='    raven_xml1_trace_effect_registration(MEM32(esp + 4), MEM32(esp + 8));\n'
if marker+call+first not in s:
    if s.count(marker+first)!=1:raise SystemExit('FX resource registration boundary changed')
    s=s.replace(marker+first,marker+call+first,1)
include='#include "raven_powerup_guest.h"\n'
if include not in s:s=include+s
if s!=p.read_text():p.write_text(s)

# Native instance initialization is shared by first application and refresh.
p=root/'src/recomp/gen/recomp_0002.c'
s=p.read_text()
marker='loc_0002A81D: ;\n'
first='    ecx = MEM32(ebp + 0x2C);'
call='    raven_xml1_harming_life(ebp);\n'
if marker+call+first not in s:
    if s.count(marker+first)!=1:raise SystemExit('Powerup lifetime boundary changed')
    s=s.replace(marker+first,marker+call+first,1)
include='#include "raven_powerup_guest.h"\n'
if include not in s:s=include+s
if s!=p.read_text():p.write_text(s)

# Probe updates after XML1 records its FX time and executes pending emissions.
# Capture after native duration/start initialization, including refreshes.
p=root/'src/recomp/gen/recomp_0002.c'
s=p.read_text()
marker='loc_0002A730: ;\n'
first='    PUSH32(esp, ebx);'
call='    raven_xml1_powerup_runtime_retire(MEM32(esp + 4));\n'
if marker+call+first not in s:
    if s.count(marker+first)!=1:raise SystemExit('Active powerup retirement boundary changed')
    s=s.replace(marker+first,marker+call+first,1)
marker='loc_0002AA7D: ;\n'
first='    POP32(esp, edi);'
old_call='    raven_xml1_powerup_node_begin(ebp);\n'
call=old_call+'    raven_xml1_powerup_effects_begin(ebp);\n'
s=s.replace(marker+old_call+first,marker+call+first,1)
if marker+call+first not in s:
    if s.count(marker+first)!=1:raise SystemExit('Powerup completed initialization boundary changed')
    s=s.replace(marker+first,marker+call+first,1)
if s!=p.read_text():p.write_text(s)

# XML2 15D86A/15D9EF admits remove_on_node_end definitions for reuse even
# with indefinite life. Extend only XML1's admission gates: native 94850
# still compares definitions, and 2AD64 still refreshes the selected owner.
# Do not set no_stack in the asset or retire effects on every self-loop.
p=root/'src/recomp/gen/recomp_0002.c'
s=p.read_text()
marker='loc_0002AB80: ;\n'
first='    PUSH32(esp, ebp);'
call=('    if (raven_xml1_powerup_remove_on_node_end(MEM32(esi + 0x2C))) MEM8(esp + 0x38) = 1;\n'
      '    if (raven_xml1_powerup_remove_on_node_end(ebp)) SET_LO8(ebx, 1);\n')
if marker+call+first not in s:
    if s.count(marker+first)!=1:raise SystemExit('Powerup reuse admission boundary changed')
    s=s.replace(marker+first,marker+call+first,1)
include='#include "raven_powerup_metadata.h"\n'
if include not in s:s=include+s
if s!=p.read_text():p.write_text(s)

p=root/'src/recomp/gen/recomp_0001.c'
s=p.read_text()
marker='loc_0001C55E: ;\n'
first='    eax = MEM32(ebp + 0x224C);'
call='    raven_xml1_effect_probe_tick();\n'
if marker+call+first not in s:
    if s.count(marker+first)!=1:raise SystemExit('FX update boundary changed')
    s=s.replace(marker+first,marker+call+first,1)
if s!=p.read_text():p.write_text(s)

# New XML2 enemy-sharing selection uses XML1's native CStaticQuery interface.
p=root/'src/recomp/gen/recomp_0002.c'
s=p.read_text()
for marker,first,call in [
    ('loc_0002B44D: ;\n','    { uint32_t _icall_esp = g_esp;',
     '    if (raven_xml1_powerup_enemy_query(ebp, esi, edi, eax)) goto loc_0002B455;\n'),
    ('loc_0002AEC9: ;\n','    eax = MEM32(esi + 0x30);',
     '    raven_xml1_powerup_metadata_shared_copy(MEM32(esi + 0x30));\n')]:
    if marker+call+first not in s:
        if s.count(marker+first)!=1:raise SystemExit('Native sharing boundary changed: '+marker)
        s=s.replace(marker+first,marker+call+first,1)
include='#include "raven_powerup_metadata.h"\n'
if include not in s:s=include+s
if s!=p.read_text():p.write_text(s)

# Imported XML2 nested damage scale joins the native multiplier, not base stats.
p=root/'src/recomp/gen/recomp_0006.c'
s=p.read_text()
marker='loc_0005CD53: ;\n'
first='    ecx = MEM32(esi + 0x2D8);'
call='    raven_xml1_combat_damage_scale(esi, ebp, esp + 0x14);\n'
if marker+call+first not in s:
    if s.count(marker+first)!=1:raise SystemExit('Native damage multiplier boundary changed')
    s=s.replace(marker+first,marker+call+first,1)
include='#include "raven_powerup_guest.h"\n'
if include not in s:s=include+s
if s!=p.read_text():p.write_text(s)
