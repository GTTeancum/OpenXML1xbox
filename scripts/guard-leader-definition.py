"""Attach missing leader and temporary-form power metadata to CharacterDef ownership."""
from pathlib import Path
from recomp_source import RecompSources
root=Path(__file__).resolve().parents[1]
index=RecompSources(root/'src/recomp/gen')
pending={}
for address,prior,call,native in (
    ('00055BB6','xml1_character_race_capture(ebx, edi);',
     'xml1_leader_definition_capture(ebx, edi);','POP32(esp, edi);'),
    ('000B1640','raven_character_race_reset(ecx);',
     'raven_leader_definition_reset(ecx);','PUSH32(esp, 0xFFFFFFFFu);'),
    ('000B2E37','raven_character_race_reset(esi);',
     'raven_leader_definition_reset(esi);','ecx = MEM32(esp + 8);'),
):
    p=index.label_path(int(address,16));s=pending.get(p,p.read_text())
    marker=f'loc_{address}: ;\n    {prior}\n'
    hook=f'    {call}\n'
    transform={'00055BB6':'xml1_transform_definition_capture(ebx, edi);',
               '000B1640':'raven_transform_definition_reset(ecx);',
               '000B2E37':'raven_transform_definition_reset(esi);'}[address]
    extra=f'    {transform}\n'
    ai={'00055BB6':'raven_ai_definition_capture(ebx, edi);',
        '000B1640':'raven_ai_definition_reset(ecx);',
        '000B2E37':'raven_ai_definition_reset(esi);'}[address]
    ai_hook=f'    {ai}\n'
    if marker+hook+extra+'    '+native in s:
        s=s.replace(marker+hook+extra,marker+hook+extra+ai_hook,1)
    extra+=ai_hook
    if marker+hook+'    '+native in s:s=s.replace(marker+hook,marker+hook+extra,1)
    hook+=extra
    if marker+hook+'    '+native not in s:
        if s.count(marker+'    '+native)!=1:
            raise SystemExit('Leader definition boundary changed: '+address)
        s=s.replace(marker,marker+hook,1)
    extra_include='#include "engine/actors/raven_actor_transform_owner.h"\n'
    if extra_include not in s:s=extra_include+s
    ai_include='#include "engine/actors/raven_ai_modes.h"\n'
    if ai_include not in s:s=ai_include+s
    include='#include "engine/actors/raven_leader_definition.h"\n'
    if include not in s:s=include+s
    pending[p]=s
for p,s in pending.items():
    if p.read_text()!=s:p.write_text(s)
print('Installed leader definition parsing and lifetime ownership')

p=index.label_path(0x00032DA7);s=p.read_text()
# At32DA7, both arguments are still live before edi/esi are restored. The
# hook preserves native temporaries and runs before the original flag updates.
marker='loc_00032DA7: ;\n'
native='    SET_LO8(ecx, MEM8(esi + 0x337));'
call='    xml1_leader_actor_loaded(esi, edi);\n'
if marker+call+native not in s:
    if s.count(marker+native)!=1:raise SystemExit('Leader actor parse boundary changed')
    s=s.replace(marker,marker+call,1)
include='#include "engine/actors/raven_leader_actor.h"\n'
if include not in s:s=include+s
if p.read_text()!=s:p.write_text(s)
p=index.label_path(0x0002F0ED);s=p.read_text()
marker='loc_0002F0ED: ;\n'
native='    POP32(esp, edi);'
call='    if (LO8(ebx)) xml1_leader_actor_restored(edi, esi);\n'
if marker+call+native not in s:
    if s.count(marker+native)!=1:raise SystemExit('Leader actor restore boundary changed')
    s=s.replace(marker,marker+call,1)
if include not in s:s=include+s
if p.read_text()!=s:p.write_text(s)
print('Connected actor leader selection and successful native restore')
