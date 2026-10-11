"""Attach metadata to verified XML1 definition ownership, not ref releases."""
from pathlib import Path

root=Path(__file__).resolve().parents[1]
from recomp_source import RecompSources, find_function, FUNCTION, address_of
import re

index=RecompSources(root/'src/recomp/gen')

def read(*owners):
    # Logical hook groups are independent of physical translation units.
    bodies=[find_function(index.canonical_read(index.path(owner)),owner)[0]
            for owner in owners]
    return owners,'\n\n'.join(bodies)+'\n'

def write(owners, source):
    matches=list(FUNCTION.finditer(source))
    bodies={address_of(match):match[0] for match in matches}
    if len(matches)!=len(owners) or set(bodies)!=set(owners):
        raise SystemExit('Powerup guard changed function coverage')
    remainder=source
    for match in reversed(matches):
        remainder=remainder[:match.start()]+remainder[match.end():]
    includes=re.findall(r'^#include "[^"\n]+"\n',remainder,re.M)
    for include in includes:remainder=remainder.replace(include,'')
    if remainder.strip():raise SystemExit('Powerup guard emitted text outside function ownership')
    # Legacy blocks relied on other hooks in their chunk for this declaration.
    # Every independently movable owner now declares it.
    includes.append('#include "engine/powers/raven_powerup_guest.h"\n')
    for path,addresses in index.grouped(owners).items():
        original=path.read_text();text=index.canonical_read(path)
        for address in addresses:
            match=find_function(text,address)
            text=text[:match.start()]+bodies[address]+text[match.end():]
        for include in includes:
            if include not in text:text=include+text
        text=index.restore_names(text)
        if text!=original:path.write_text(text)

state,s=read(0x00094FE0)
marker='loc_00094FE0: ;\n'
first='    PUSH32(esp, esi);'
call='    raven_xml1_powerup_effect_scope(ecx, MEM32(esp + 4));\n'
load='    raven_xml1_absorb_load_resource(ecx, MEM32(esp + 4));\n'
if marker+call+first not in s and marker+call+load+first not in s:
    if s.count(marker+first)!=1:raise SystemExit('Powerup resource scope boundary changed')
    s=s.replace(marker+first,marker+call+first,1)
include='#include "engine/powers/raven_powerup_metadata.h"\n'
if include not in s:s=include+s
if marker+call+load+first not in s:
    if s.count(marker+call+first)!=1:raise SystemExit('Absorb resource-load boundary changed')
    s=s.replace(marker+call+first,marker+call+load+first,1)
include='#include "engine/combat/raven_absorb_runtime.h"\n'
if include not in s:s=include+s
write(state,s)

# Incoming XML2 def_damage joins XML1's existing defensive scale before
# native integer conversion. Install before optional transport diagnostics.
state,s=read(0x00043FA0,0x00045260)
marker='loc_00044130: ;\n'
call='    raven_xml1_trigger_hurt_attempt(MEM32(esi), edi);\n'
if marker+call not in s:
    if s.count(marker)!=1:raise SystemExit('Incoming hurt-attempt boundary changed')
    start=s.index(marker)+len(marker)
    end=s.index('\nloc_',start)
    if 'RECOMP_ABI_CALL(0x000BF750u, sub_000BF750)' not in s[start:end]:
        raise SystemExit('Incoming reflection preamble changed')
    s=s.replace(marker,marker+call,1)
marker='loc_00045517: ;\n'
call='    raven_xml1_combat_defense_damage_scale(MEM32(esi), esi + 0xC, esp + 0x10);\n'
if marker+call not in s:
    if s.count(marker)!=1:raise SystemExit('Native defensive damage boundary changed')
    start=s.index(marker)+len(marker)
    end=s.index('\nloc_',start)
    if 'fp_push((double)SMEM32(esi + 0x94));' not in s[start:end]:
        raise SystemExit('Native defensive damage conversion changed')
    s=s.replace(marker,marker+call,1)
include='#include "engine/powers/raven_powerup_guest.h"\n'
if include not in s:s=include+s
write(state,s)
# XML1 nonactor damage92386 emits hurt after its hit filters. XML2 A6F6A
# emits hurt_attempt immediately before the corresponding hurt dispatch.
state,s=read(0x00092220)
marker='loc_00092386: ;\n'
first='    if (secondary_victim_handle) raven_secondary_victim_dispatch(ebx, secondary_victim_handle);\n'
call='    raven_xml1_trigger_hurt_attempt(esi, esp + 0x20);\n'
if call not in s:
    # Generation applies this guard before secondary-victim; reruns may
    # already contain that hook. Keep the same order in both cases.
    prefix=marker+first if marker+first in s else marker
    if s.count(prefix+'    PUSH32(esp, 0);')!=1:
        raise SystemExit('Physical hurt preamble changed')
    s=s.replace(prefix,prefix+call,1)
include='#include "engine/powers/raven_powerup_guest.h"\n'
if include not in s:s=include+s
write(state,s)
state,s=read(0x000953A0,0x000955C0,0x00096220,0x00096370,0x000964A0)
hooks={
    '00096370':('    PUSH32(esp, 0xFFFFFFFFu);',
        '    raven_xml1_powerup_capture_effects(ecx, MEM32(esp + 4));\n'),
    '00096484':('    ecx = MEM32(esp + 0x30);',
        '    raven_harming_install_callbacks(ebx);\n'),
    '000955C0':('    PUSH32(esp, esi);',
        '    raven_xml1_powerup_metadata_attribute(ecx, (const char*)XBOX_PTR(MEM32(esp + 4)), (const char*)XBOX_PTR(MEM32(esp + 8)));\n'),
    '00096220':('    PUSH32(esp, ebx);',
        '    raven_xml1_powerup_metadata_reset(ecx);\n'),
    # Source parameter remains at ESP+0xC after ESI/EDI pushes. EDI itself
    # has advanced by 0x90 for the fifth name clone; do not use it as source.
    '000955B7':('    POP32(esp, edi);',
        '    raven_xml1_powerup_metadata_clone(esi, MEM32(esp + 0xC));\n'),
    '000964A0':('    PUSH32(esp, esi);',
        '    raven_xml1_powerup_metadata_retire(ecx);\n'),
}
for address,(first,call) in hooks.items():
    marker=f'loc_{address}: ;\n'
    if s.count(marker)!=1:raise SystemExit('Powerup boundary changed: '+address)
    if marker+call+first in s:continue
    if marker+first not in s:raise SystemExit('Powerup boundary instructions changed: '+address)
    s=s.replace(marker+first,marker+call+first,1)
include='#include "engine/powers/raven_powerup_metadata.h"\n'
if include not in s:s=include+s
include='#include "engine/combat/raven_harming_callbacks.h"\n'
if include not in s:s=include+s
include='#include "engine/powers/raven_powerup_guest.h"\n'
if include not in s:s=include+s
write(state,s)

# Remove the superseded attack-event diagnostic insertion. Powerup definitions
# enter through 96370 (including D744E), not the CEF40 damageMod loader.
state,s=read(0x000CEF40)
marker='loc_000CEF40: ;\n'
first='    PUSH32(esp, 0xFFFFFFFFu);'
call='    raven_xml1_powerup_capture_effects(MEM32(ecx + 0x14), MEM32(esp + 4));\n'
s=s.replace(marker+call+first,marker+first,1)
include='#include "engine/powers/raven_powerup_guest.h"\n'
if include not in s:s=include+s
write(state,s)
print('Installed XML1 definition reset/completed-copy/final-destruction metadata boundaries')

# Flat-type bitmap misses imported grouped affecters. Join at every completed
# query return, after XML1 has initialized/combined its own contribution.
state,s=read(0x0002A400)
match=find_function(s,0x2A400)
start,end=match.span()
body=match[0]
capture=('    const uint32_t stat_actor=ecx,stat_type=MEM32(esp+4),\n'
         '        stat_output=MEM32(esp+8),stat_record=MEM32(esp+12),stat_mode=MEM32(esp+16);\n')
if capture not in body:
    body=body.replace('loc_0002A400: ;\n','loc_0002A400: ;\n'+capture,1)
hook=('    if(raven_xml1_stat_affecters(stat_actor,stat_type,stat_output,stat_record,stat_mode)) SET_LO8(eax,1);\n')
ret='    esp += 20; return; /* ret 16 */'
if hook not in body:
    if body.count(ret)!=3:raise SystemExit('Stat query return boundaries changed')
    body=body.replace(ret,hook+ret)
if body.count(hook)!=3:raise SystemExit('Incomplete stat query return hooks')
s=s[:start]+body+s[end:]
include='#include "engine/powers/raven_powerup_guest.h"\n'
if include not in s:s=include+s
write(state,s)

# Opt-in registration evidence for the exact native resource namespace.
state,s=read(0x000264B0)
marker='loc_000264B0: ;\n'
first='    PUSH32(esp, 0xFFFFFFFFu);'
call='    raven_xml1_trace_effect_registration(MEM32(esp + 4), MEM32(esp + 8));\n'
if marker+call+first not in s:
    if s.count(marker+first)!=1:raise SystemExit('FX resource registration boundary changed')
    s=s.replace(marker+first,marker+call+first,1)
include='#include "engine/powers/raven_powerup_guest.h"\n'
if include not in s:s=include+s
write(state,s)

# Native instance initialization is shared by first application and refresh.
state,s=read(0x0002A7B0)
marker='loc_0002A81D: ;\n'
first='    ecx = MEM32(ebp + 0x2C);'
call='    raven_xml1_harming_life(ebp);\n'
if marker+call+first not in s:
    if s.count(marker+first)!=1:raise SystemExit('Powerup lifetime boundary changed')
    s=s.replace(marker+first,marker+call+first,1)
include='#include "engine/powers/raven_powerup_guest.h"\n'
if include not in s:s=include+s
write(state,s)

# Probe updates after XML1 records its FX time and executes pending emissions.
# Capture after native duration/start initialization, including refreshes.
state,s=read(0x0002A730,0x0002A7B0)
marker='loc_0002A730: ;\n'
first='    PUSH32(esp, ebx);'
call='    raven_xml1_powerup_runtime_retire(MEM32(esp + 4));\n'
if marker+call+first not in s:
    if s.count(marker+first)!=1:raise SystemExit('Active powerup retirement boundary changed')
    s=s.replace(marker+first,marker+call+first,1)
marker='loc_0002AA7D: ;\n'
first='    POP32(esp, edi);'
old_call='    raven_xml1_powerup_node_begin(ebp);\n'
previous_call=old_call+'    raven_xml1_powerup_effects_begin(ebp);\n'
call=previous_call+'    raven_xml1_scale_affecter_changed(ebp, 0);\n'
s=s.replace(marker+previous_call+first,marker+call+first,1)
s=s.replace(marker+old_call+first,marker+call+first,1)
if marker+call+first not in s:
    if s.count(marker+first)!=1:raise SystemExit('Powerup completed initialization boundary changed')
    s=s.replace(marker+first,marker+call+first,1)
write(state,s)

# XML2 15D86A/15D9EF admits remove_on_node_end definitions for reuse even
# XML2 15DF7D emits activation usage1/tag0 before primary effects;15C975
# emits removal usage2/tag0 before unlink. XML1 2AE80 is reached only for
# a new attachment (2AD98), not a duration refresh.2AF53 retains XML1's
# target-present/not-destroying gate before the deactivation callback.
state,s=read(0x0002AA90,0x0002AF30)
for marker,first,call in [
    ('loc_0002AE80: ;\n','    ecx = esi;',
     '    raven_xml1_powerup_effect_event(esi, 1, 0);\n'),
    ('loc_0002AF53: ;\n','    eax = MEM32(edi + 0x2C);',
     '    raven_xml1_powerup_effect_event(edi, 2, 0);\n')]:
    if marker+call+first not in s:
        if s.count(marker+first)!=1:raise SystemExit('Effect event lifecycle boundary changed: '+marker)
        s=s.replace(marker+first,marker+call+first,1)
write(state,s)

# XML2 15D86A/15D9EF admits remove_on_node_end definitions for reuse even
# with indefinite life. Extend only XML1's admission gates: native 94850
# still compares definitions, and 2AD64 still refreshes the selected owner.
# Do not set no_stack in the asset or retire effects on every self-loop.
state,s=read(0x0002AA90)
marker='loc_0002AB80: ;\n'
first='    PUSH32(esp, ebp);'
call=('    if (raven_xml1_powerup_remove_on_node_end(MEM32(esi + 0x2C))) MEM8(esp + 0x38) = 1;\n'
      '    if (raven_xml1_powerup_remove_on_node_end(ebp)) SET_LO8(ebx, 1);\n')
if marker+call+first not in s:
    if s.count(marker+first)!=1:raise SystemExit('Powerup reuse admission boundary changed')
    s=s.replace(marker+first,marker+call+first,1)
include='#include "engine/powers/raven_powerup_metadata.h"\n'
if include not in s:s=include+s
write(state,s)

state,s=read(0x0001C530)
marker='loc_0001C55E: ;\n'
first='    eax = MEM32(ebp + 0x224C);'
call='    raven_xml1_effect_probe_tick();\n'
if marker+call+first not in s:
    if s.count(marker+first)!=1:raise SystemExit('FX update boundary changed')
    s=s.replace(marker+first,marker+call+first,1)
write(state,s)

# New XML2 enemy-sharing selection uses XML1's native CStaticQuery interface.
state,s=read(0x0002AA90,0x0002B270)
for marker,first,call in [
    ('loc_0002B44D: ;\n','    { uint32_t _icall_esp = g_esp;',
     '    if (raven_xml1_powerup_enemy_query(ebp, esi, edi, eax)) goto loc_0002B455;\n'),
    ('loc_0002AEC9: ;\n','    eax = MEM32(esi + 0x30);',
     '    raven_xml1_powerup_metadata_shared_copy(MEM32(esi + 0x30));\n')]:
    if marker+call+first not in s:
        if s.count(marker+first)!=1:raise SystemExit('Native sharing boundary changed: '+marker)
        s=s.replace(marker+first,marker+call+first,1)
include='#include "engine/powers/raven_powerup_metadata.h"\n'
if include not in s:s=include+s
write(state,s)

# Imported XML2 nested damage scale joins the native multiplier, not base stats.
# XML2's boost_when_shared callback runs once after a successful sharing pass.
# Capture identity before native callbacks, and success immediately after the
# attach call: the following label is also reached by skipped/dead recipients.
state,s=read(0x0002B270)
for old,new in [
    ('void sub_0002B270(void)\n{\n',
     'void sub_0002B270(void)\n{\n    uint32_t shared_boost_owner=0;\n    int shared_boost_eligible=raven_xml1_shared_boost_begin(g_ecx,&shared_boost_owner);\n    int shared_boost_success=0;\n'),
    ('    PUSH32(esp, 0x0002B4FFu); RECOMP_ABI_CALL(0x0002AA90u, sub_0002AA90); /* call 0x0002AA90 */\n',
     '    PUSH32(esp, 0x0002B4FFu); RECOMP_ABI_CALL(0x0002AA90u, sub_0002AA90); /* call 0x0002AA90 */\n    if (shared_boost_eligible && (eax & 255)) shared_boost_success=1;\n'),
    ('loc_0002B549: ;\n',
     'loc_0002B549: ;\n    if (shared_boost_success) raven_xml1_shared_boost_finish(shared_boost_owner);\n')]:
    if new not in s:
        if s.count(old)!=1:raise SystemExit('Shared boost boundary changed: '+old)
        s=s.replace(old,new,1)
write(state,s)

# Imported XML2 nested damage scale joins the native multiplier, not base stats.
state,s=read(0x0005CCA0)
marker='loc_0005CD53: ;\n'
first='    ecx = MEM32(esi + 0x2D8);'
call='    raven_xml1_combat_damage_scale(esi, ebp, esp + 0x14);\n'
if marker+call+first not in s:
    if s.count(marker+first)!=1:raise SystemExit('Native damage multiplier boundary changed')
    s=s.replace(marker+first,marker+call+first,1)
include='#include "engine/powers/raven_powerup_guest.h"\n'
if include not in s:s=include+s
write(state,s)

# 5C020's common probability threshold precedes its single native RNG call.
# Both melee/ranged paths arrive here after all stock eligibility gates.
state,s=read(0x0005C020)
marker='loc_0005C210: ;\n'
first='    PUSH32(esp, 0x3F800000);'
call='    raven_xml1_combat_critical_chance(esi, MEM32(esp + 0x14), esp + 0x10);\n'
if marker+call+first not in s:
    if s.count(marker+first)!=1:raise SystemExit('Native critical probability boundary changed')
    s=s.replace(marker+first,marker+call+first,1)
write(state,s)

# Delayed removal metadata belongs to the native hit pool, never hit padding.
# Native931D0 releases a slot on both cancellation and delivered-hit cleanup.
for marker,call in {
    'loc_000931D0: ;\n': '    if (ecx == 0x4BFD30u) raven_xml1_remove_events_clear_pending(MEM32(esp + 4));\n',
    'loc_00093BA0: ;\n': '    if (ecx == 0x4BFD30u) raven_xml1_remove_events_reset_pending();\n',
    'loc_000464E6: ;\n': '    raven_xml1_remove_events_deliver(esp + 0xC);\n'
}.items():
    label=int(marker[4:12],16)
    index.label_path(label)
    state,s=read(index.labels[label][0][1])
    if marker+call not in s:
        if s.count(marker)!=1:raise SystemExit('Delayed removal boundary changed: '+marker)
        s=s.replace(marker,marker+call,1)
    include='#include "engine/scripting/raven_remove_events.h"\n'
    if include not in s:s=include+s
    write(state,s)

# Clear bounded capacity records when the native active pool is reconstructed;
# the same generation value can recur after a map/system reset.
state,s=read(0x000299B0)
marker='loc_000299B0: ;\n'
call='    raven_xml1_damage_reserve_reset();\n'
if marker+call not in s:
    if s.count(marker)!=1:raise SystemExit('Reserve pool reset boundary changed')
    s=s.replace(marker,marker+call,1)
write(state,s)
