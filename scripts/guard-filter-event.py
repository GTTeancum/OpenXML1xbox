"""Install XML1 filter event through native pool factory and indirect dispatch."""
from pathlib import Path
from recomp_source import RecompSources
root=Path(__file__).resolve().parents[1]
index=RecompSources(root/'src/recomp/gen')
p=index.label_path(0x000E6C6D);s=p.read_text()
marker='loc_000E6C6D: ;\n'
hook='    if (xml1_filter_event_construct(esi, edi)) { eax = esi; goto loc_000E60DD; }\n'
if s.count(marker)!=1:raise SystemExit('Event factory boundary changed')
start=s.index(marker)+len(marker)
end=s.find('\nloc_',start)
if hook not in s[start:end if end!=-1 else len(s)]:s=s.replace(marker,marker+hook,1)
inc='#include "engine/combat/raven_filter_guest.h"\n'
if inc not in s:s=inc+s
if s!=p.read_text():p.write_text(s)
p=root/'src/recomp/gen/recomp_types.h';s=p.read_text()
old='#define RECOMP_REGISTERED_EXTENSION(_va) xml1_script_extension_is_code(_va)'
previous='#include "engine/combat/raven_filter_guest.h"\n#define RECOMP_REGISTERED_EXTENSION(_va) (xml1_script_extension_is_code(_va) || xml1_filter_event_is_code(_va))'
new='#include "engine/combat/raven_filter_guest.h"\n#include "engine/combat/raven_harming_callbacks.h"\n#define RECOMP_REGISTERED_EXTENSION(_va) (xml1_script_extension_is_code(_va) || xml1_filter_event_is_code(_va) || raven_harming_callback_is_code(_va))'
if new not in s and 'raven_effect_sound_is_code(_va)' not in s:
 if previous in s:old=previous
 if s.count(old)!=1:raise SystemExit('Run script extension guard first')
 s=s.replace(old,new,1);p.write_text(s)
print('Installed native XML1 filter event factory and thunk range guard')
