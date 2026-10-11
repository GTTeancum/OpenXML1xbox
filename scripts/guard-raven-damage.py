"""Install opt-in synchronous damage transport auditing at native boundaries."""
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
        raise SystemExit('Damage guard changed function coverage')
    remainder=source
    for match in reversed(matches):
        remainder=remainder[:match.start()]+remainder[match.end():]
    includes=re.findall(r'^#include "[^"\n]+"\n',remainder,re.M)
    for include in includes:remainder=remainder.replace(include,'')
    if remainder.strip():raise SystemExit('Damage guard emitted text outside function ownership')
    # Legacy blocks relied on other hooks in their chunk for this declaration.
    # Every independently movable owner now declares it.
    includes.append('#include "engine/combat/raven_native_damage.h"\n')
    for path,addresses in index.grouped(owners).items():
        original=path.read_text();text=index.canonical_read(path)
        for address in addresses:
            match=find_function(text,address)
            text=text[:match.start()]+bodies[address]+text[match.end():]
        for include in includes:
            if include not in text:text=include+text
        text=index.restore_names(text)
        if text!=original:path.write_text(text)

hooks={
    'event':{
        '000CFDC0':'raven_native_damage_enter(0xCFDC0, esp);',
        # 78 bytes of locals plus three saved registers are still live.
        '000CFE3F':'raven_native_damage_leave(0xCFDC0, esp + 0x84);',
        '000CF3DF':'raven_native_damage_seed(edi, ebp, esi, SMEM16(esi + 8));',
        '000CFE33':'raven_native_damage_observe(0xCFE33, MEM32(esp + 0x10), SMEM16(MEM32(esp + 0x10) + 8));',
    },
    'attack':{
        # The attack manager adds the native callback's integer bonus.
        '0005AAAC':'raven_native_damage_add(0x5AAAC, esi, (int32_t)eax, SMEM16(esi + 8));',
        '0005C590':'raven_native_damage_enter(0x5C590, esp);',
        # All returns converge here after the security-cookie callback;
        # 110 bytes of locals and four saved registers remain on the stack.
        '0005CA09':'raven_native_damage_leave(0x5C590, esp + 0x120);',
        '0005C240':'raven_native_damage_observe(0x5C240, MEM32(esp + 0xC), SMEM16(MEM32(esp + 0xC) + 8));',
        # Rejection zeroes damage; the +A knockback operation is separate.
        '0005C483':'raven_native_damage_set(0x5C483, edi, 0, SMEM16(edi + 8));',
        '0005C539':'raven_native_damage_scale(0x5C539, edi, MEMF(esp + 0x2C), SMEM16(edi + 8));',
        # Native minimum-one branch; mirrored only when native takes it.
        # Fraction-dependent branch selection remains to be integrated.
        '0005C564':'raven_native_damage_set(0x5C564, edi, 1, SMEM16(edi + 8));',
        '0005C66F':'raven_native_damage_set(0x5C66F, esi, 0, SMEM16(esi + 8));',
        '0005C6C7':'raven_native_damage_observe(0x5C6C7, esi, SMEM16(esi + 8));',
        '0005C761':'raven_native_damage_scale(0x5C761, esi, MEMF(0x3CB994), SMEM16(esi + 8));',
        '0005C7DE':'raven_native_damage_set(0x5C7DE, esi, 0, SMEM16(esi + 8));',
        '0005C990':'raven_native_damage_observe(0x5C990, esp + 0x38, SMEM16(esp + 0x40));',
        # 5CCA0 adds two separately truncated bonuses to the original sample.
        # Keep their actual inputs visible rather than fitting a final ratio.
        '0005CDA2':'raven_native_damage_bonus(0x5CDA2, ebp, SMEM32(esp + 0x38), MEMF(esp + 0x14), SMEM32(esp + 0x18), -1);',
        '0005CDE3':'raven_native_damage_bonus(0x5CDE3, ebp, SMEM32(esp + 0x38), MEMF(esp + 0x14), SMEM32(esp + 0x18), ZX8(LO8(eax)));',
        '0005CE19':'raven_native_damage_observe(0x5CE19, ebp, (int32_t)eax);',
    },
    'record':{
        '0002CE70':'raven_native_damage_enter(0x2CE70, esp);',
        # After constructor RET44 the 100-byte stack record begins at +C.
        # This is the definition's integer bleed amount, not XML2 damage.
        '0002CF35':'raven_native_damage_seed(MEM32(edi + 0x2C), esi, esp + 0xC, SMEM16(esp + 0x14));',
        # 64h locals and three saved GPRs; all callback returns converge here.
        '0002CF75':'raven_native_damage_leave(0x2CE70, esp + 0x70);',
        '0002B720':'raven_native_damage_copy(MEM32(esp + 4), ecx);',
        '0002C8C0':'raven_native_damage_clear(ecx);',
    },
    'context':{
        # Explicit sentinel assignment and late context multiplier, verified
        # against the original454AF/45B61 instructions. Neither is a ratio
        # inferred from the rounded damage word.
        '000454AF':'raven_native_damage_set(0x454AF, esi + 0xC, 32000, SMEM16(esi + 0x14));',
        '00045B61':'raven_native_damage_scale(0x45B61, esi + 0xC, fp_top(), SMEM16(esi + 0x14));',
        # 44FB0 constructs a context, then copies 100 bytes via 18DD00.
        # Hook this damage-specific caller, not the generic bulk copier.
        '0004503C':'raven_native_damage_copy(ebp, esi + 0xC);',
        '00045436':'raven_native_damage_observe(0x45436, esi + 0xC, SMEM16(esi + 0x14));',
        '0004544B':'raven_native_damage_observe(0x4544B, esi + 0xC, SMEM16(esi + 0x14));',
        '00045457':'raven_native_damage_observe(0x45457, esi + 0xC, SMEM16(esi + 0x14));',
        # Read-only probes: +94 is a separate accumulator, not the hit record.
        # At 454CB the selected multiplier is already on the x87 stack.
        '000454CB':'raven_native_damage_context(0x454CB, esi + 0xC, SMEM16(esi + 0x14), SMEM16(esi + 0x14), fp_top(), 0);',
        # Event 12 callbacks have filled stack +10 (scale) and +14 (subtract).
        '00045517':'raven_native_damage_context(0x45517, esi + 0xC, SMEM16(esi + 0x14), SMEM32(esi + 0x94), MEMF(esp + 0x10), MEMF(esp + 0x14));',
        '000455DA':'raven_native_damage_context(0x455DA, esi + 0xC, SMEM16(esi + 0x14), SMEM32(esi + 0x94), MEMF(esp + 0x10), MEMF(esp + 0x14));',
        '00045639':'raven_native_damage_observe(0x45639, esi + 0xC, SMEM16(esi + 0x14));',
        '00045976':'raven_native_damage_observe(0x45976, esi + 0xC, SMEM16(esi + 0x14));',
        '00045B7C':'raven_native_damage_observe(0x45B7C, esi + 0xC, SMEM16(esi + 0x14));',
        '00045C56':'raven_native_damage_observe(0x45C56, esi + 0xC, SMEM16(esi + 0x14));',
        '0004632A':'raven_native_damage_observe(0x4632A, esp + 0x18, SMEM16(esp + 0x20));',
        '0004636A':'raven_native_damage_observe(0x4636A, esp + 0x18, SMEM16(esp + 0x20));',
    },
    'physical':{
        # 92220's local record begins at ESP+20. These are explicit native
        # mutations after 2B720 copies the record; none are inferred ratios.
        '00092301':'raven_native_damage_set(0x92301, esp + 0x20, 0, SMEM16(esp + 0x28));',
        '00092314':'raven_native_damage_scale(0x92314, esp + 0x20, 3, SMEM16(esp + 0x28));',
        '00092332':'raven_native_damage_set(0x92332, esp + 0x20, (int16_t)edi, SMEM16(esp + 0x28));',
        '00092413':'raven_native_damage_set(0x92413, esp + 0x20, 0, SMEM16(esp + 0x28));',
        '0009264A':'raven_native_damage_observe(0x9264A, esp + 0x20, SMEM16(esp + 0x28));',
        # Native copies just the final damage amount back to the caller.
        # Preserve that result in transport rather than retaining its input.
        '00092946':'raven_native_damage_copy_back(esp + 0x20, MEM32(esp + 0xA0));',
    },
}
updates=[]
for name,entries in hooks.items():
    owners=set()
    for address in entries:
        label=int(address,16)
        index.label_path(label)
        owners.add(index.labels[label][0][1])
    state,source=read(*sorted(owners))
    # Upgrade the previous audit hook; do not leave both operations installed.
    if name=='physical':
        source=source.replace('    raven_native_damage_copy(esp + 0x20, MEM32(esp + 0xA0));\n','')
    if name=='context':
        source=source.replace('    raven_native_damage_context(0x45B61, esi + 0xC, SMEM16(esi + 0x14), SMEM16(esi + 0x14), fp_top(), 0);\n','')
    for address,call in entries.items():
        marker=f'loc_{address}: ;\n'
        if source.count(marker)!=1:
            raise SystemExit('Damage transport boundary changed: '+address)
        start=source.index(marker)+len(marker)
        end=source.find('\nloc_',start)
        if '    '+call+'\n' in source[start:end if end!=-1 else len(source)]:continue
        source=source.replace(marker,marker+'    '+call+'\n',1)
    include='#include "engine/combat/raven_native_damage.h"\n'
    if name=='context':
        start=source.index('loc_00045B7C: ;\n');end=source.index('\nloc_',start+1)
        block=source[start:end]
        old='if (CMP_LE(_fas, _fbs))'
        new='if (raven_native_damage_amount(esi + 0xC, SMEM16(esi + 0x14)) <= (double)(int16_t)edi)'
        if new not in block:
            if block.count(old)!=1:raise SystemExit('Context damage consumer changed: 45B7C')
            source=source[:start]+block.replace(old,new,1)+source[end:]
    if name=='attack':
        replacements={
            '0005C4B7':('MEM8(esp + 0x28) = (CMP_NE(_fa, _fb)) ? 1 : 0;',
                'MEM8(esp + 0x28) = raven_native_damage_amount(edi, SMEM16(edi + 8)) != 0.0;'),
            # EAX is set to1 before this branch; use the newly stored damage
            # word as the native fallback rather than the overwritten EAX.
            '0005C55A':('if (CMP_G(_fas & _fbs, 0))',
                'if (raven_native_damage_amount(edi, SMEM16(edi + 8)) > 0.0)'),
            '0005C739':('if (CMP_LE(_fas & _fbs, 0))',
                'if (raven_native_damage_amount(esi, SMEM16(esi + 8)) <= 0.0)'),
        }
        for site,(old,new) in replacements.items():
            start=source.index(f'loc_{site}: ;\n');end=source.index('\nloc_',start+1)
            block=source[start:end]
            if new in block:continue
            if block.count(old)!=1:raise SystemExit('Attack damage consumer changed: '+site)
            source=source[:start]+block.replace(old,new,1)+source[end:]
    if name=='physical':
        # Change only the traced consumers. Integer comparisons remain exact
        # when no explicitly imported value is associated with the record.
        replacements={
            '00092320':('if (CMP_G(_fas, _fbs))','if (raven_native_damage_amount(esp + 0x20, SMEM16(esp + 0x28)) > 0.0)'),
            '000923D4':('if (CMP_EQ(_fa, _fb))','if (raven_native_damage_amount(esp + 0x20, SMEM16(esp + 0x28)) == 32000.0)'),
            '000925D6':('if (CMP_NE(_fa, _fb))','if (raven_native_damage_amount(esp + 0x20, SMEM16(esp + 0x28)) != 0.0)'),
            # The setter argument push has moved ESP down four bytes here;
            # local record ESP+20 at entry is now ESP+24. Replace the fild
            # operand before subtraction, preserving the native health setter
            # and subsequent death/survival branch at9266F.
            '0009264A':('fp_push((double)SMEM32(esp + 0x14)); /* fild */',
                'fp_push(raven_native_damage_amount(esp + 0x24, SMEM32(esp + 0x14))); /* imported float or native fild */'),
        }
        for site,(old,new) in replacements.items():
            start=source.index(f'loc_{site}: ;\n')
            end=source.index('\nloc_',start+1)
            block=source[start:end]
            if new in block:continue
            if block.count(old)!=1:raise SystemExit('Physical damage consumer changed: '+site)
            source=source[:start]+block.replace(old,new,1)+source[end:]
    if include not in source:source=include+source
    updates.append((name,state,source))
for name,state,source in updates:write(state,source)
# Reuse the actual generated subtraction block in a process-local fixture.
# No hand-maintained replacement of its argument layout or native setter.
physical=next(source for name,state,source in updates if name=='physical')
start=physical.index('loc_0009264A: ;\n')+len('loc_0009264A: ;\n')
end=physical.index('\nloc_0009266F:',start)
fragment=root/'src/recomp/gen/raven_physical_health_block.inc'
fragment.write_text('/* Generated by guard-raven-damage.py; do not edit. */\n'+physical[start:end])
attack=next(source for name,state,source in updates if name=='attack')
start=attack.index('loc_0005C4B7: ;\n')+len('loc_0005C4B7: ;\n')
end=attack.index('    #undef fp_push',start)
(root/'src/recomp/gen/raven_attack_minimum_block.inc').write_text(
    '/* Generated by guard-raven-damage.py; do not edit. */\n'+attack[start:end])
print('Installed opt-in native damage transport audit')
context=next(source for name,state,source in updates if name=='context')
start=context.index('loc_00045B61: ;\n')+len('loc_00045B61: ;\n')
end=context.index('\nloc_00045B86:',start)
(root/'src/recomp/gen/raven_context_scale_block.inc').write_text(
    '/* Generated by guard-raven-damage.py; do not edit. */\n'+context[start:end])

# After XML1 5C370 stores defense, before its original conditional branch.
state,s=read(0x5C240)
marker='    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */\n    if (TEST_Z(_fa, _fb)) goto loc_0005C380;'
call='    raven_xml1_combat_rating(ebx, edi, esp+0x28, 0);\n    raven_xml1_combat_rating(ebp, edi, esp+0x2c, 1);\n'
replacement=marker.replace('    if (TEST_Z',call+'    if (TEST_Z')
if replacement not in s:
    if s.count(marker)!=1:raise SystemExit('Native rating boundary changed')
    s=s.replace(marker,replacement,1)
include='#include "engine/powers/raven_powerup_guest.h"\n'
if include not in s:s=include+s
write(state,s)

# XML2's area iterator (original XBE 5E6D5..5E73A) constructs a fresh hit
# record at stack+74 for each candidate before invoking its recipient method.
# XML1 5BCE8..5BD1E instead reuses ESI, so a structural recipient's native
# zeroing at 5C66F can suppress later enemies. Preserve XML1's per-recipient
# method and damage rules, but isolate mutations of imported XML2 hit records
# across recipients. The original XML1 record is 0x64 bytes (2B720 copy).
state,s=read(0x5BA90)
old_probe=(
    '    raven_imported_area_amount = 0.0f;\n'
    '    raven_imported_area_saved = raven_native_damage_import_value(esi, &raven_imported_area_amount);\n'
    '    if (raven_imported_area_saved)\n'
    '        for (unsigned raven_i = 0; raven_i < 0x64; ++raven_i)\n'
    '            raven_imported_area_record[raven_i] = MEM8(esi + raven_i);\n'
)
if old_probe in s:s=s.replace(old_probe,'')
function='void sub_0005BA90(void)\n{\n'
declaration='    uint8_t raven_imported_area_record[0x64];\n    int raven_imported_area_saved = 0;\n'
if s.count(function)!=1:raise SystemExit('Area iterator function changed')
if declaration not in s[s.index(function):s.index('loc_0005BA90: ;',s.index(function))]:
    s=s.replace(function,function+declaration,1)
begin_call=(
    '    raven_imported_area_saved = raven_native_damage_imported_event(esi);\n'
    '    if (raven_imported_area_saved)\n'
    '        for (unsigned raven_i = 0; raven_i < 0x64; ++raven_i)\n'
    '            raven_imported_area_record[raven_i] = MEM8(esi + raven_i);\n'
)
begin='    PUSH32(esp, edi);\n    MEM32(esi + 0x40) = eax;\n'
end='loc_0005BD21: ;\n'
end_call=(
    '    if (raven_imported_area_saved)\n'
    '        for (unsigned raven_i = 0; raven_i < 0x64; ++raven_i)\n'
    '            MEM8(esi + raven_i) = raven_imported_area_record[raven_i];\n'
    '    raven_imported_area_saved = 0;\n'
)
if s.count(begin)!=1:raise SystemExit('Area iterator call boundary changed')
if begin_call not in s[s.index(begin):s.index(end)]:
    s=s.replace(begin,begin+begin_call,1)
if s.count(end)!=1:raise SystemExit('Area iterator return boundary changed')
start=s.index(end)+len(end)
stop=s.index('\nloc_',start)
if end_call not in s[start:stop]:s=s[:start]+end_call+s[start:]
write(state,s)

# XML2 45CFE..45DBE consumes additive def_absorb_damage on the recipient's
# completed hit before health delivery. XML1 46373 is after ordinary hit
# modifiers/contact callbacks and before its native 92220 health method.
state,s=read(0x46270,0x45260,0x45E20)
marker='loc_00046373: ;\n'
call='    raven_xml1_combat_absorb_damage(esi, esp + 0x18);\n'
if s.count(marker)!=1:raise SystemExit('Incoming absorption boundary changed')
start=s.index(marker)+len(marker)
end=s.index('\nloc_',start)
if call not in s[start:end]:
    s=s[:start]+call+s[start:]
resistance='    raven_xml1_combat_resistance(esi, esp + 0x18);\n'
start=s.index(marker)+len(marker)
end=s.index('\nloc_',start)
if resistance not in s[start:end]:
    anchor=start+len(call)
    if s[start:anchor]!=call:raise SystemExit('Absorption/resistance order changed')
    s=s[:anchor]+resistance+s[anchor:]
# Retire the early integration at final health delivery. Reserve and energy
# shield must run before native reaction calculations, in that order.
s=s.replace('    raven_xml1_combat_damage_reserve(esi, esp + 0x18);\n','')
defenses='loc_000455DA: ;\n'
call_defenses='    raven_xml1_combat_defense_extensions(esi);\n'
if defenses+call_defenses not in s:
    if s.count(defenses)!=1:raise SystemExit('Defensive hit context boundary changed')
    s=s.replace(defenses,defenses+call_defenses,1)
include='#include "engine/powers/raven_powerup_guest.h"\n'
if include not in s:s=include+s
death='    MEM8(ecx + 0x2B8) = LO8(eax);\n    edi = MEM32(ebp);\n'
reward='    raven_xml1_combat_kill_rewards(ebp);\n'
if death in s:
    if s.count(death)!=1:raise SystemExit('First-death boundary ambiguous')
    s=s.replace(death,death.replace('    edi =',reward+'    edi ='),1)
elif s.count(reward)!=1:
    raise SystemExit('First-death boundary changed')
write(state,s)

# Missing XML2 party bonus drops enter after XML1's original mission exclusions
# and before its ordinary loot roll. The native source handle is argument3.
state,s=read(0x70FB0)
marker='loc_000710C3: ;\n'
call='    raven_xml1_bonus_drops(edi, (int32_t)MEM32(esp + 0x70), MEM32(esp + 0x78));\n'
if s.count(marker)!=1:raise SystemExit('Native bonus drop boundary changed')
start=s.index(marker)+len(marker)
end=s.index('\nloc_',start)
if call not in s[start:end]:s=s[:start]+call+s[start:]
include='#include "engine/powers/raven_powerup_guest.h"\n'
if include not in s:s=include+s
write(state,s)

# XML2 456D8 copies the hit record to context+C; 45958/45960 tests its
# modifier byte at context+20 against BL=2 and returns false at459CC.
# XML1 stores that same record's modifiers at +18, hence context+24.
# Gate only the actor preprocessor, leaving physical objects and tiles alone.
state,s=read(0x45260)
marker='loc_00045260: ;\n'
call='    if (MEM32(ecx + 0x24) & 2u) { SET_LO8(eax, 0); esp += 4; return; }\n'
if s.count(marker)!=1:raise SystemExit('Actor hit preprocessing boundary changed')
start=s.index(marker)+len(marker)
end=s.index('\nloc_',start)
if call not in s[start:end]:s=s[:start]+call+s[start:]
write(state,s)
