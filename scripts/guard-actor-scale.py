"""Retire missing timed-scaling state at native XML1 actor lifecycle boundaries."""
from pathlib import Path
from recomp_source import RecompSources
root=Path(__file__).resolve().parents[1]
index=RecompSources(root/'src/recomp/gen')
hooks={
    '0002E6F0': ('    raven_actor_scale_owner_reset(ecx);\n','    PUSH32(esp, esi);'),
    '0003243A': ('    raven_actor_scale_owner_reset(esi);\n','    ecx = MEM32(esp + 0x18);'),
    '00043689': ('    xml1_actor_scale_tick(esi, MEMF(edi + 0x20));\n','    fp_push(MEMF(edi + 0x20));'),
}
pending={}
for address,(call,native) in hooks.items():
    p=index.label_path(int(address,16));s=pending.get(p,p.read_text())
    marker=f'loc_{address}: ;\n'
    if address=='00043689':
        # 4368F is inside this generated block: consume the native clock store
        # first so the hook starts with the same FPU stack as XML2's update.
        marker+='    MEMF(esi + 0x40C) = (float)fp_top(); fp_pop(); /* fstp */\n'
    if s.count(marker)!=1:raise SystemExit('Actor scale lifecycle boundary changed: '+address)
    # Another additive import already owns a reset call at 2E6F0. Accept that
    # exact known hook; never suppress it or assume arbitrary rewritten code.
    tail=s.split(marker,1)[1]
    prior='    xml1_bishop_contact_reset(ecx);\n'
    if address=='0002E6F0' and tail.startswith(prior+call):
        marker+=prior;tail=tail[len(prior):]
    if not tail.startswith(call):
        known='    xml1_bishop_contact_reset(ecx);\n' if address=='0002E6F0' else ''
        if not (tail.startswith(native) or (known and tail.startswith(known+native))):
            raise SystemExit('Actor scale native instruction changed: '+address)
        s=s.replace(marker,marker+call,1)
    include='#include "engine/actors/raven_actor_scale_owner.h"\n'
    if include not in s:s=include+s
    pending[p]=s
for p,s in pending.items():
    if p.read_text()!=s:p.write_text(s)
print('Installed actor scale simulation update, native reset and final destruction retirement; command pending')

# The new affecter has no stock XML1 attribute callback. Join after native
# instance initialization and after the class removal callback, before unlink.
p=index.label_path(0x2AF85)
s=p.read_text()
for address,call,native in (
    ('0002AF85','    raven_xml1_scale_affecter_changed(edi, 1);\n',
     '    PUSH32(esp, esi);'),
):
    marker=f'loc_{address}: ;\n'
    if marker+call not in s:
        if s.count(marker+native)!=1:raise SystemExit('Scale affecter lifecycle changed: '+address)
        s=s.replace(marker,marker+call,1)
include='#include "engine/powers/raven_powerup_guest.h"\n'
if include not in s:s=include+s
if p.read_text()!=s:p.write_text(s)
