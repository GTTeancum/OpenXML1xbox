"""Preserve a second victim tag through native attack/record ownership.
Unused byte29 (attack payload) and56 (hit record) keep original struct sizes.
All fieldwise reset/copy boundaries below are derived from the supplied XBE.
"""
from pathlib import Path
root=Path(__file__).resolve().parents[1]
def patch(name,changes):
 p=root/'src/recomp/gen'/name;s=p.read_text()
 for old,new in changes:
  if new in s:continue
  if s.count(old)!=1:raise SystemExit('Secondary tag boundary changed: '+name+' '+old[:70])
  s=s.replace(old,new,1)
 if s!=p.read_text():p.write_text(s)
patch('recomp_0017.c',[
 ('loc_000CEEE0: ;\n','loc_000CEEE0: ;\n    MEM8(ecx + 0x29) = 0;\n'),
 ('loc_000CF6B0: ;\n','loc_000CF6B0: ;\n    if (raven_secondary_victim_attribute(ecx, (const char*)XBOX_PTR(MEM32(esp + 4)), (const char*)XBOX_PTR(MEM32(esp + 8)))) { SET_LO8(eax, 1); esp += 12; return; }\n'),
 ('loc_000CFD00: ;\n','loc_000CFD00: ;\n    MEM8(ecx + 0x29) = MEM8(MEM32(esp + 4) + 0x29);\n'),
 ('    MEM8(esi + 0x55) = LO8(eax);\n','    MEM8(esi + 0x55) = LO8(eax);\n    MEM8(esi + 0x56) = MEM8(edx + 0x29);\n'),
])
patch('recomp_0002.c',[
 ('    MEM8(eax + 0x55) = LO8(edx);\n','    MEM8(eax + 0x55) = LO8(edx);\n    MEM8(eax + 0x56) = MEM8(esi + 0x56);\n'),
 ('    MEM8(eax + 0x55) = LO8(ecx);\n','    MEM8(eax + 0x55) = LO8(ecx);\n    MEM8(eax + 0x56) = 0;\n'),
])
patch('recomp_0011.c',[
 ('void sub_00092220(void)\n{\n','void sub_00092220(void)\n{\n    uint32_t secondary_victim_handle = 0;\n'),
 ('loc_00092337: ;\n','loc_00092337: ;\n    if (MEM8(ebx + 0x56)) secondary_victim_handle = MEM32(esi + 0x1C);\n'),
 ('loc_00092386: ;\n','loc_00092386: ;\n    if (secondary_victim_handle) raven_secondary_victim_dispatch(ebx, secondary_victim_handle);\n'),
])
for name in ['recomp_0011.c','recomp_0017.c']:
 p=root/'src/recomp/gen'/name;s=p.read_text();inc='#include "raven_victim_event_guest.h"\n'
 if inc not in s:p.write_text(inc+s)
print('Installed secondary victim tag parse/reset/copy/dispatch boundaries')

patch('recomp_0006.c',[
 ('loc_0005A625: ;\n','loc_0005A625: ;\n    raven_spawn_harm_context(edi, MEM32(esp + 0x100), MEM32(esp + 0x108));\n'),
])
p=root/'src/recomp/gen/recomp_0006.c';s=p.read_text();inc='#include "raven_victim_event_guest.h"\n'
if inc not in s:p.write_text(inc+s)

patch('recomp_0012.c',[
 ('loc_00097650: ;\n','loc_00097650: ;\n    raven_projectile_death_parse(ecx, MEM32(esp + 4));\n'),
 ('loc_00097EC9: ;\n','loc_00097EC9: ;\n    raven_projectile_death_dispatch(esi);\n'),
 ('loc_00096810: ;\n','loc_00096810: ;\n    raven_projectile_victim_store(ecx, MEM32(esp + 4));\n'),
 ('    MEM32(eax + 0x48) = ecx;\n    POP32(esp, esi);\n',
  '    MEM32(eax + 0x48) = ecx;\n    raven_projectile_victim_restore(esi, eax);\n    POP32(esp, esi);\n'),
])
patch('recomp_0009.c',[
 ('loc_0007BEF0: ;\n','loc_0007BEF0: ;\n    raven_projectile_victim_retire(ecx);\n'),
])
for name in ['recomp_0012.c','recomp_0009.c']:
 p=root/'src/recomp/gen'/name;s=p.read_text();inc='#include "raven_victim_event_guest.h"\n'
 if inc not in s:p.write_text(inc+s)

# Actors dispatch in44630;92220 deliberately skips its callback block for
# actor recipients at922D9. Preserve primary behavior and add second tag here.
patch('recomp_0004.c',[
 ('void sub_00044630(void)\n{\n','void sub_00044630(void)\n{\n    uint32_t secondary_actor_handle = 0;\n'),
 ('loc_0004465B: ;\n','loc_0004465B: ;\n    if (MEM8(esi + 0x62) && MEM32(esi)) secondary_actor_handle = MEM32(MEM32(esi) + 0x1C);\n'),
 ('loc_0004474D: ;\n','loc_0004474D: ;\n    if (secondary_actor_handle) raven_secondary_victim_dispatch(esi + 0xC, secondary_actor_handle);\n'),
])
p=root/'src/recomp/gen/recomp_0004.c';s=p.read_text();inc='#include "raven_victim_event_guest.h"\n'
if inc not in s:p.write_text(inc+s)

patch('recomp_0004.c',[
 ('loc_000470A8: ;\n','loc_000470A8: ;\n    raven_harm_pulse_parse(esi, edi);\n'),
 ('loc_00046B80: ;\n','loc_00046B80: ;\n    raven_harm_pulse_retire(ecx);\n'),
])
p=root/'src/recomp/gen/recomp_types.h';s=p.read_text()
if 'raven_harm_pulse_is_code(_va)' not in s:
 old='raven_harming_callback_is_code(_va)'
 if s.count(old)!=1:raise SystemExit('Run filter-event guard before pulse registration')
 s=s.replace(old,old+' || raven_harm_pulse_is_code(_va)',1)
 inc='#include "raven_victim_event_guest.h"\n'
 if inc not in s:s=inc+s
 p.write_text(s)

# New smart pulses may deliver a victim callback with no direct damage.
# Preserve the native queue, capacity and pending-hit checks.
patch("recomp_0011.c",[(
    "    if (CMP_LE(_fas, _fbs)) goto loc_00093C39;",
    "    if (CMP_LE(_fas, _fbs) && !raven_harm_pulse_accept_zero(edi)) goto loc_00093C39;",
)])

# Distinct native explosion record boundary: leave scalar damage/type/ID
# handling in96910/96960; preserve only its missing victim-event context.
p=root/'src/recomp/gen/recomp_0012.c';s=p.read_text();updated=s.replace('raven_projectile_explosion_victim_store(ecx, MEM32(esp + 4));','raven_projectile_explosion_native_store(ecx, MEM32(esp + 4));')
if updated!=s:p.write_text(updated)
patch('recomp_0012.c',[
 ('loc_00096910: ;\n','loc_00096910: ;\n    raven_projectile_explosion_native_store(ecx, MEM32(esp + 4));\n'),
 ('    MEM32(eax + 0x44) = edx;\n    POP32(esp, esi);\n',
  '    MEM32(eax + 0x44) = edx;\n    raven_projectile_explosion_victim_restore(esi, eax);\n    POP32(esp, esi);\n'),
])

# XML2 F19B2: fire_event tag fires on the originating move immediately
# before the shot. D25F9 is reached after XML1 has the actor/context and
# before its native projectile setup; leave untagged XML1 events untouched.
patch('recomp_0017.c',[
 ('    MEM8(eax + 0x30) = LO8(edx);\n    eax = MEM32(esi + 0x1C);','    MEM8(eax + 0x30) = LO8(edx);\n    raven_projectile_fire_event(esi, MEM32(edi), MEM32(edi + 4));\n    eax = MEM32(esi + 0x1C);'),
])
