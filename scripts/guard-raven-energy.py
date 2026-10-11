"""Bind imported energy at verified XML1 parser/lifetime/consumer boundaries.

The adapter is explicitly opt-in until title/profile loading is integrated.
Never write the per-actor resolved cost back into a shared event descriptor.
"""
from pathlib import Path
from recomp_source import RecompSources, find_function
root=Path(__file__).resolve().parents[1]
index=RecompSources(root/'src/recomp/gen')

def read(label, owner=None):
    if owner is None:
        index.label_path(label)  # Unique instruction ownership required.
        owner=index.labels[label][0][1]
    p=index.path(owner)
    source=index.canonical_read(p)
    match=find_function(source,owner)
    return p,source,match,match[0]

def write(state, body):
    p,source,match,_=state
    source=source[:match.start()]+body+source[match.end():]
    for name in ('raven_native_energy.h','raven_native_energy_guest.h'):
        include=f'#include "engine/combat/{name}"\n'
        if include not in source:source=include+source
    source=index.restore_names(source)
    if source!=p.read_text():p.write_text(source)

def hook(address, call):
    state=read(int(address,16))
    s=state[3]
    # Compatibility with the earlier diagnostic argument; preserve its fix.
    s=s.replace('xml1_raven_energy_observe(ecx, MEM32(esp), esi, edi, ebp);',
                'xml1_raven_energy_observe(ecx, MEM32(esp), esi, edi, g_ebp);')
    marker=f'loc_{address}: ;\n'
    if s.count(marker)!=1:raise SystemExit('Energy boundary changed: '+address)
    start=s.index(marker)+len(marker)
    end=s.find('\nloc_',start)
    if call not in s[start:end if end!=-1 else len(s)]:
        s=s.replace(marker,marker+call,1)
    write(state,s)

hooks={
    '000D2190': '''    if(xml1_raven_explosion_parse(ecx, MEM32(esp + 4), MEM32(esp + 8))) {
        SET_LO8(eax, 1); esp += 12; return;
    }
''',
    '000D258F': '''    /* Imported symbolic entity lifetime; literal values remain native. */
    if(xml1_raven_spawn_life_parse(esi, edi)) {
        POP32(esp, edi); POP32(esp, esi); POP32(esp, ebp); SET_LO8(eax, 1);
        POP32(esp, ebx); POP32(esp, ecx); esp += 12; return;
    }
''',
    '000D296E': '''    if(xml1_raven_spawn_lifetime(esi, edi, MEM32(MEM32(esp + 0x8C)))) goto loc_000D2993;
''',
    '000D221D': '''    /* Imported talent count; literal XML1 counts remain native. */
    if(xml1_raven_projectile_count_parse(esi, edi)) {
        POP32(esp, edi); POP32(esp, esi); POP32(esp, ebp); SET_LO8(eax, 1);
        POP32(esp, ebx); POP32(esp, ecx); esp += 12; return;
    }
''',
    '000CF854': '''    /* Bind symbolic range; literals retain the original parser. */
    if(xml1_raven_attack_maxrange_parse(esi, edi)) {
        POP32(esp, edi); POP32(esp, esi); SET_LO8(eax, 1); POP32(esp, ebx);
        esp += 12; return;
    }
''',
    '000CF6E9': '''    /* Damage name matched and the native attack descriptor exists. */
    if(xml1_raven_attack_parse(esi, edi)) {
        POP32(esp, edi); POP32(esp, esi); SET_LO8(eax, 1); POP32(esp, ebx);
        esp += 12; return; /* original thiscall ret 8 */
    }
''',
    '000CF356': '''    /* Native CF250 copied the shared endpoints into these locals.
     * Bind against its source actor before the original sampler/modifiers. */
    xml1_raven_attack_range(edi, ebp, esp + 0x10, esp + 0x24);
''',
    '000CDC3A': '''    /* powerusage comparison succeeded; preserve the native literal path. */
    if(xml1_raven_energy_parse(esi, ebx, edi)) {
        POP32(esp, edi); POP32(esp, esi); SET_LO8(eax, 1); POP32(esp, ebx);
        esp += 12; return; /* same thiscall ret 8 as the native parser */
    }
''',
    '000CF610':'    raven_native_energy_lifetime(ecx, 0);\n',
    '000CFBF0':'    raven_native_energy_lifetime(ecx, 1);\n',
    '000CEDD0':'    raven_native_energy_lifetime(ecx, 2);\n',
    '000CFE50':'    raven_native_energy_lifetime(ecx, 3);\n',
    '000CFCA9':'    raven_native_energy_copy(esi, eax);\n',
    '000CF689':'    raven_native_energy_copy(esi, eax);\n',
    '000CF640':'    xml1_raven_energy_observe(ecx, MEM32(esp), esi, edi, g_ebp);\n',
}
for address,call in hooks.items():hook(address,call)
state=read(0xCDEE1);s=state[3]
old='loc_000CDEE1: ;\n    edx = (uint32_t)(int32_t)SMEM16(edi + 0x10);'
new=old+'\n    edx = (uint32_t)xml1_raven_energy_cost(edi, esi, (int32_t)edx);'
if new not in s:
    if s.count(old)!=1:raise SystemExit('Native energy charging boundary changed')
    s=s.replace(old,new,1)
write(state,s)
# Resolve dispatch-local values, never the shared attack descriptor. The beam
# tail is emitted both in merged D0460 and standalone D0640; cover both copies.
for address,load,event,actor,owners in (
    ('000CF356','edx = (uint32_t)(int32_t)SMEM16(eax + 6);','edi','ebp',(0xCF250,)),
    ('000D0556','edx = (uint32_t)(int32_t)SMEM16(edx + 6);','ebp','MEM32(edi)',(0xD0460,)),
    ('000D06DE','edx = (uint32_t)(int32_t)SMEM16(ecx + 6);','ebp','MEM32(edi)',(0xD0460,0xD0640)),
    ('000D0840','edx = (uint32_t)(int32_t)SMEM16(ecx + 6);','ebp','MEM32(edi)',(0xD0460,0xD0640)),
):
    actual={owner for _,owner in index.labels.get(int(address,16),[])}
    if actual!=set(owners):raise SystemExit('Attack range ownership changed: '+address)
    for owner in owners:
        state=read(int(address,16),owner);s=state[3]
        marker=f'loc_{address}: ;\n'
        if s.count(marker)!=1:raise SystemExit('Attack range boundary changed: '+address)
        chunks=s.split(marker)
        call=f'\n    edx = (uint32_t)xml1_raven_attack_maxrange({event}, {actor}, (int32_t)edx);'
        for i in range(1,len(chunks)):
            end=chunks[i].find('\nloc_')
            block=chunks[i][:end]
            if load+call in block:continue
            if block.count(load)!=1:raise SystemExit('Attack range load changed: '+address)
            chunks[i]=chunks[i].replace(load,load+call,1)
        s=marker.join(chunks)
        write(state,s)
state=read(0xD2920);s=state[3]
old_spawn='{ uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000D2920u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); }'
new_spawn='{ uint32_t _icall_target = MEM32(edx + 0x24); if(!xml1_raven_projectile_spawn(esi, _icall_target)) { PUSH32(esp, 0x000D2920u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } }'
if new_spawn not in s:
    if s.count(old_spawn)!=1:raise SystemExit('Projectile spawn boundary changed')
    s=s.replace(old_spawn,new_spawn,1)
write(state,s)
for address,call in {
    '000E1A6D':'''    MEMF(esp + 0x14) = xml1_raven_held_requirement(edi, ebx);
    /* A held node may have no charged events. Still run the native energy
       comparison for its rate contribution instead of the empty-list exit. */
    if(!eax && MEMF(esp + 0x14) != 0.0f) goto loc_000E1AA5;
''',
    '000E1DDC':'    xml1_raven_held_trigger_observe(edi, esi);\n',
    '000E1A8F':'    fp_top() = xml1_raven_energy_query(esi, ebx, fp_top());\n',
    '000E1AC6':'    xml1_raven_energy_gate(ebx, fp_top(), MEMF(esp + 0x14));\n',
}.items():hook(address,call)
# Beam clone inlines its base copy after the native RTTI check.
hook('000E41F9','    raven_native_energy_copy(esi, eax);\n')
for address,call in {'00043B83':'    xml1_raven_held_update(MEM32(esi + 0x2F4), esi);\n'}.items():hook(address,call)
for address,call in {
        '000E77C9':'''    /* Preserve XML1's pending-move/transition path; replace its idle
       fallback only while the declared current power is still held. */
    { uint32_t held = xml1_raven_held_destination(esi, ebp);
      if(held) { eax=held; goto loc_000E77D2; } }
''',
        '000E2220':'    raven_native_held_retire(ecx);\n',
        '000E2610':'''    if(xml1_raven_held_parse(ecx, MEM32(esp + 4), MEM32(esp + 8))) {
        SET_LO8(eax, 1); esp += 12; return; /* native attribute parser ret8 */
    }
''',
    }.items():hook(address,call)
for address,call in {
        '000EAF10':'    raven_native_held_retire(ecx);\n',
        '000ECEA4':'    xml1_raven_held_chain_parse(MEM32(esp + 0x3C), edi, esi);\n',
    }.items():hook(address,call)
print('Installed XML1 imported-energy boundaries by guest address')
