"""Retire transformation snapshots at verified native actor lifecycle boundaries."""
from pathlib import Path
from recomp_source import RecompSources
root=Path(__file__).resolve().parents[1]
index=RecompSources(root/'src/recomp/gen')
pending={}
for address,register,native in (
    ('0002E6F0','ecx','    xml1_bishop_contact_reset(ecx);\n    PUSH32(esp, esi);'),
    ('0003243A','esi','    ecx = MEM32(esp + 0x18);'),
):
    path=index.label_path(int(address,16))
    text=pending.get(path,path.read_text())
    marker=f'loc_{address}: ;\n'
    prior='    xml1_bishop_contact_reset(ecx);\n'
    if address=='0002E6F0' and marker+prior in text:marker+=prior
    marker+=f'    raven_actor_scale_owner_reset({register});\n    xml1_leader_event_retire_actor({register});\n'
    hook=f'    raven_actor_transform_reset({register});\n'
    if text.count(marker)!=1:raise SystemExit('Transformation actor lifecycle boundary changed: '+address)
    tail=text.split(marker,1)[1]
    if tail.startswith(hook):tail=tail[len(hook):]
    else:text=text.replace(marker,marker+hook,1)
    if not tail.startswith(native):raise SystemExit('Transformation native continuation changed: '+address)
    include='#include "engine/actors/raven_actor_transform_owner.h"\n'
    if include not in text:text=include+text
    pending[path]=text
for path,text in pending.items():
    if path.read_text()!=text:path.write_text(text)
print('Installed transformation snapshot reset at actor construction/final destruction')
