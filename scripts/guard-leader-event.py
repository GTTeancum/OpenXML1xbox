"""Register the missing leader callback with existing indirect dispatch guards."""
from pathlib import Path
from recomp_source import RecompSources
root=Path(__file__).resolve().parents[1]
index=RecompSources(root/'src/recomp/gen')
p=root/'src/recomp/gen/recomp_types.h'
s=p.read_text()
include='#include "engine/actors/raven_leader_event_guest.h"\n'
if include not in s:s=include+s
old='raven_harm_pulse_is_code(_va)'
new=old+' || xml1_leader_event_is_code(_va)'
if new not in s:
    if s.count(old)!=1:raise SystemExit('Missing existing callback registration boundary')
    s=s.replace(old,new,1)
if s!=p.read_text():p.write_text(s)
print('Registered native leader event callback guard')

# Join the established actor lifecycle boundaries without moving or replacing
# another import's cleanup. Address-based retirement needs no live handle.
pending={}
for address,register in (
    ('0002E6F0','ecx'),
    ('0003243A','esi'),
):
    p=index.label_path(int(address,16))
    s=p.read_text()
    marker=f'loc_{address}: ;\n'
    prior='    xml1_bishop_contact_reset(ecx);\n'
    if address=='0002E6F0' and marker+prior in s:marker+=prior
    marker+=f'    raven_actor_scale_owner_reset({register});\n'
    call=f'    xml1_leader_event_retire_actor({register});\n'
    if s.count(marker)!=1:raise SystemExit('Leader actor lifecycle boundary changed: '+address)
    if marker+call not in s:s=s.replace(marker,marker+call,1)
    if include not in s:s=include+s
    pending[p]=s
for p,s in pending.items():
    if p.read_text()!=s:p.write_text(s)
print('Installed leader event retirement at actor construction and final destruction')

pending={}
for address,call,native in (
    ('00083370','xml1_leader_zone_bind(ecx);','PUSH32(esp, 0xFFFFFFFFu);'),
    ('000830DA','xml1_leader_zone_bind(esi);','ebp = MEM32(esp + 0x1C);'),
    ('0006C7D0','xml1_leader_zone_reset(ecx);','PUSH32(esp, ecx);'),
    ('0002F000','xml1_leader_zone_capture(LO8(ebx) ? edi : 0, esi);','POP32(esp, edi);'),
    ('00080DDB','xml1_leader_zone_save(edi, MEM32(esi + 0x4AC));','POP32(esp, edi);'),
    ('000831D6','xml1_leader_zone_load(ebp, MEM32(edi + 0x4AC));','edx = MEM32(edi + 0x4AC);'),
):
    p=index.label_path(int(address,16))
    s=pending.get(p,p.read_text())
    marker=f'loc_{address}: ;\n'
    hook='    '+call+'\n'
    if marker+hook not in s:
        if s.count(marker+'    '+native)!=1:
            raise SystemExit('Leader zone lifecycle boundary changed: '+address)
        s=s.replace(marker,marker+hook,1)
    if include not in s:s=include+s
    pending[p]=s
for p,s in pending.items():
    if p.read_text()!=s:p.write_text(s)
print('Installed leader zone-cache ownership, reset and completed native actor capture')
