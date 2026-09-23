"""Connect XML2 loop-sound metadata to verified XML1 sound boundaries."""
from pathlib import Path
root=Path(__file__).resolve().parents[1]
hooks={
 'recomp_0018.c':{
  '000D7F00':'    if(raven_loop_sound_parse(ecx,(const char*)XBOX_PTR(MEM32(esp+4)),(const char*)XBOX_PTR(MEM32(esp+8)))) { SET_LO8(eax,1); esp+=12; return; }\n',
  '000D7E00':'    if(raven_loop_guest_event(ecx,MEM32(esp+4),MEM32(ecx+0x14))) { esp+=12; return; }\n',
 },
 'recomp_0019.c':{
  '000E6040':'    raven_loop_guest_factory_trace(ecx,MEM32(esp+4));\n',
  '000E5460':'    raven_loop_sound_retire(ecx);\n',
  '000E54D9':'    raven_loop_sound_copy(esi,eax);\n',
 },
 'recomp_0017.c':{'000CEDD0':'    raven_loop_sound_retire(ecx);\n'},
 # XML2 86797..8679E updates loops after the music queue; XML1's matching
 # manager boundary is 7AFFB. Run once there, never once per actor.
 'recomp_0008.c':{'0007AFFB':'    raven_loop_guest_update();\n'},
}
# Remove the superseded actor hook in existing generated trees.
p=root/'src/recomp/gen/recomp_0004.c'
s=p.read_text();old='loc_00043B83: ;\n    raven_loop_guest_update();\n'
if old in s:p.write_text(s.replace(old,'loc_00043B83: ;\n',1))
for name,changes in hooks.items():
 p=root/'src/recomp/gen'/name;s=p.read_text()
 for address,call in changes.items():
  marker='loc_'+address+': ;\n'
  if marker+call in s:continue
  if s.count(marker)!=1:raise SystemExit('Loop sound boundary changed: '+address)
  s=s.replace(marker,marker+call,1)
 inc='#include "raven_loop_sound_runtime.h"\n'
 if inc not in s:s=inc+s
 if s!=p.read_text():p.write_text(s)
print('Installed native sound loop parse/copy/execute/update hooks')
