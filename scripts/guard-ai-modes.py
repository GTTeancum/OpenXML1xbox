"""Capture new XML2 actor-mode metadata without replacing stock decisions."""
from pathlib import Path
from recomp_source import RecompSources
root=Path(__file__).resolve().parents[1]
index=RecompSources(root/'src/recomp/gen')
pending={}
for address,call in {
 '001093D0':'    raven_ai_mode_capture(ecx, MEM32(esp + 4), MEM32(esp + 8));\n',
 '00109300':'    raven_ai_mode_reset(ecx);\n',
 '0010A468':'    raven_ai_wander_initialize(esi);\n',
 '0010C8D0':'    if (raven_ai_wander_idle(ecx)) { SET_LO8(eax, 0); esp += 12; return; }\n',
 '0010EF51':'    if (raven_ai_protect_update(esi)) goto loc_0010F34D;\n    if (raven_ai_pack_update(esi)) goto loc_0010F02A;\n',
 '00105850':'    if (raven_ai_pack_interrupt_guest(ecx)) { SET_LO8(eax, 0); esp += 4; return; }\n',
 '00105BE0':'    raven_ai_pack_contact_guest(ecx, MEM32(esp + 4));\n',
 '0010B9F0':'    if (raven_ai_hit_run_waiting(ecx)) { SET_LO8(eax, 0); esp += 12; return; }\n',
 '0010ED7F':'    if (raven_ai_hit_run_waiting(esi)) goto loc_0010EDA6;\n',
 '0010EEAB':'    raven_ai_hit_run_finish(esi);\n',
}.items():
 p=index.label_path(int(address,16));s=pending.get(p,p.read_text())
 # Upgrade the earlier Protect-only hook without duplicating it on reruns.
 s=s.replace('    if (raven_ai_protect_update(esi)) goto loc_0010F34D;\n',
             '    if (raven_ai_protect_update(esi)) goto loc_0010F34D;\n    if (raven_ai_pack_update(esi)) goto loc_0010F02A;\n') if '    if (raven_ai_pack_update(esi)) goto loc_0010F02A;\n' not in s else s
 marker='loc_'+address+': ;\n'
 if marker+call not in s:
  if s.count(marker)!=1:raise SystemExit('AI lifecycle boundary changed: '+address)
  s=s.replace(marker,marker+call,1)
 pending[p]=s
include='#include "engine/actors/raven_ai_modes.h"\n'
for p,s in pending.items():
 if include not in s:s=include+s
 if s!=p.read_text():p.write_text(s)
# The explicit destination is new AI-owned data. Keep the original event's
# eligibility setup and call its existing spatial/teleport implementation.
p=index.label_path(0xD62F1)
if not p.exists():raise SystemExit('Teleport event generated unit missing')
s=p.read_text()
marker='loc_000D62F1: ;\n'
call='    { int _teleport = raven_ai_teleport_event(ebp, esi, edi, MEM32(esp + 0x38)); if (_teleport >= 0) { fp_pop(); SET_LO8(eax, _teleport); POP32(esp, edi); POP32(esp, esi); POP32(esp, ebp); POP32(esp, ebx); esp += 0x20; esp += 20; return; } }\n'
if marker+call not in s:
 if s.count(marker)!=1:raise SystemExit('Teleport event continuation changed')
 s=s.replace(marker,marker+call,1)
if include not in s:s=include+s
if s!=p.read_text():p.write_text(s)
# Pre-admission notification: this remains separate from actual damage,
# whose existing XML1 admission/reaction rules must not be changed.
p=index.label_path(0x462EB);s=p.read_text()
marker='loc_000462EB: ;\n';call='    raven_ai_hit_run_incoming(esi, MEM32(edi));\n'
if marker+call not in s:
 if s.count(marker)!=1:raise SystemExit('AI incoming-hit boundary changed')
 s=s.replace(marker,marker+call,1)
if include not in s:s=include+s
if s!=p.read_text():p.write_text(s)

# Replace only the two main-method calls. EE810 retains its target/range
# checks and temporary handler-flag restoration around the call.
for continuation in ['0010B3E9','000EE8E1']:
 p=index.label_path(int(continuation,16));s=p.read_text()
 original='    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x'+continuation+'u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */'
 replacement='    { int _teleport = raven_ai_teleport_attack(ecx, MEM32(esp), MEM32(esp + 4)); if (_teleport >= 0) { SET_LO8(eax, _teleport); esp += 8; } else { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x'+continuation+'u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } } /* owned teleporter or stock main method */'
 if replacement not in s:
  if s.count(original)!=1:raise SystemExit('AI main dispatch changed: '+continuation)
  s=s.replace(original,replacement,1)
 if include not in s:s=include+s
 if s!=p.read_text():p.write_text(s)
