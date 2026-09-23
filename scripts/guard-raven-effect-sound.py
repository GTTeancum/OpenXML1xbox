"""Connect the missing combined effect/sound event to the native event pool."""
from pathlib import Path
root=Path(__file__).resolve().parents[1]
p=root/'src/recomp/gen/recomp_0019.c';s=p.read_text()
marker='loc_000E6C6D: ;\n'
hook='    if (raven_effect_sound_construct(esi, edi)) { eax = esi; goto loc_000E60DD; }\n'
if marker+hook not in s:
 if s.count(marker)!=1:raise SystemExit('Effect/sound factory boundary changed')
 s=s.replace(marker,marker+hook,1)
inc='#include "raven_effect_sound_guest.h"\n'
if inc not in s:s=inc+s
if s!=p.read_text():p.write_text(s)
p=root/'src/recomp/gen/recomp_types.h';s=p.read_text()
old='raven_harming_callback_is_code(_va)'
new=old+' || raven_effect_sound_is_code(_va)'
if 'raven_effect_sound_is_code(_va)' not in s:
 if s.count(old)!=1:raise SystemExit('Run filter event guard first')
 s=s.replace(old,new,1)
if inc not in s:s=inc+s
if s!=p.read_text():p.write_text(s)
print('Installed combined effect/sound event factory and dispatch')
