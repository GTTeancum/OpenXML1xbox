"""Attach missing XML2 Race children to native XML1 CharacterDef ownership."""
from pathlib import Path
from recomp_source import RecompSources
root=Path(__file__).resolve().parents[1]
hooks={
 '00055BB6':('    POP32(esp, edi);','    xml1_character_race_capture(ebx, edi);\n'),
 '000B1640':('    PUSH32(esp, 0xFFFFFFFFu);','    raven_character_race_reset(ecx);\n'),
 '000B2E37':('    ecx = MEM32(esp + 8);','    raven_character_race_reset(esi);\n'),
}
index=RecompSources(root/'src/recomp/gen')
groups={}
for address,entry in hooks.items():
 groups.setdefault(index.label_path(int(address,16)),{})[address]=entry
pending={}
for p,entries in groups.items():
 s=p.read_text()
 # Retain classification while native destruction releases effects/talents;
 # retire metadata only after that cleanup has completed.
 s=s.replace('loc_000B2DC0: ;\n    raven_character_race_reset(ecx);\n',
             'loc_000B2DC0: ;\n')
 for address,(first,call) in entries.items():
  marker=f'loc_{address}: ;\n'
  leader={'00055BB6':'xml1_leader_definition_capture(ebx, edi);',
          '000B1640':'raven_leader_definition_reset(ecx);',
          '000B2E37':'raven_leader_definition_reset(esi);'}[address]
  transform={'00055BB6':'xml1_transform_definition_capture(ebx, edi);',
             '000B1640':'raven_transform_definition_reset(ecx);',
             '000B2E37':'raven_transform_definition_reset(esi);'}[address]
  ai={'00055BB6':'raven_ai_definition_capture(ebx, edi);',
      '000B1640':'raven_ai_definition_reset(ecx);',
      '000B2E37':'raven_ai_definition_reset(esi);'}[address]
  if marker+call+'    '+leader+'\n    '+transform+'\n    '+ai+'\n'+first in s:continue
  if marker+call+'    '+leader+'\n    '+transform+'\n'+first in s:continue
  if marker+call+'    '+leader+'\n'+first in s:continue
  if marker+call+first in s:continue
  if s.count(marker+first)!=1:raise SystemExit('Character Race boundary changed: '+address)
  s=s.replace(marker+first,marker+call+first,1)
 include='#include "engine/actors/raven_character_race.h"\n'
 if include not in s:s=include+s
 pending[p]=s
for p,s in pending.items():
 if p.read_text()!=s:p.write_text(s)
print('Installed CharacterDef Race parser, construction reset and final retirement')
