"""Conservative operand presence ledger; different names do not prove absence."""
import argparse
import hashlib
import re
import struct
import sys
from pathlib import Path
from recomp_source import RecompSources, find_function


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--recovery', type=Path, required=True)
    parser.add_argument('--xml1', type=Path, required=True)
    parser.add_argument('--xml2', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    sys.path.insert(0, str(args.recovery))
    from inspect_xbe import Xbe
    from recover_interfaces import types
    from capstone import Cs, CS_ARCH_X86, CS_MODE_32
    one, two = Xbe(str(args.xml1)), Xbe(str(args.xml2))
    expected = ('2ea531f11e0b5b7ca651485012b871ef99a5099c566a6d7cb8ec327ee73d62ac',
                '24ff13d0eb61bd4405653c0456d33f7a0440cdd577aaa85d7e067ecb650e6488')
    if tuple(hashlib.sha256(x.data).hexdigest() for x in (one, two)) != expected:
        raise SystemExit('Retrace affecter evidence for changed original images')

    def word(image, va):
        return struct.unpack_from('<I', image.data, image.va_offset(va))[0]

    def string(image, va):
        offset = image.va_offset(va)
        return image.data[offset:image.data.index(b'\0', offset)].decode('ascii')

    native = {string(one, word(one, 0x44e8c8 + 4*i)).lower(): i for i in range(59)}
    root = Path(__file__).resolve().parents[1]
    index=RecompSources(root/'src/recomp/gen')
    def evidence_source(owner):
        if isinstance(owner,int):
            return find_function(index.canonical_read(index.path(owner)),owner)[0]
        return (root/owner).read_text()
    entries = re.findall(r'\{"([^"\n]+)",\s*(\d+)\}',
                         (root/'src/engine/powers/raven_xml2_affecter_names.inc').read_text())
    for i, (name, operand) in enumerate(entries):
        if (string(two, word(two, 0x545998 + 8*i)), word(two, 0x54599c + 8*i)) != (name, int(operand)):
            raise SystemExit('XML2 operand table differs at '+name)
    if 0x94706 not in one.refs(0x44e8c8):
        raise SystemExit('XML1 native operand-name resolver changed')

    # All five native queries receive the operand as their first stack arg.
    # Only accept an immediate push followed by register-only mov/lea and a
    # direct call. Do not guess through control flow, indirect calls or loads.
    queries = {0x2a220, 0x2a400, 0x2a4b0, 0x2a5e0, 0x2a630}
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    consumers = {}
    for offset, byte in enumerate(one.data[:-20]):
        if byte != 0x6a or one.data[offset+1] >= 59:
            continue
        va = one.offset_va(offset)
        if va is None or not 0x10000 <= va < 0x340000:
            continue
        instructions = list(md.disasm(one.data[offset:offset+20], va))
        for ins in instructions[1:]:
            if ins.mnemonic == 'call':
                if ins.op_str.startswith('0x') and int(ins.op_str, 16) in queries:
                    consumers.setdefault(one.data[offset+1], []).append((va, ins.address, int(ins.op_str, 16)))
                break
            if ins.mnemonic not in ('mov', 'lea') or 'esp' in ins.op_str:
                break

    lines = ['# Native affecter presence inventory', '',
             'Generated from the pinned original images by `scripts/audit-native-affecter-presence.py`.', '',
             'This is presence evidence, not parity work or a completion claim. A different name',
             'does not establish missing functionality. Existing implementations must be reconciled',
             'before adding anything. Consumer addresses below are native XML1 operand-query calls;',
             'the conservative scan does not recover dynamic operands or every call pattern.', '',
             '| XML2 name | XML2 ID | XML1 ID | Classification / evidence |',
             '|---|---:|---:|---|']
    implemented = {
        'def_dodge': 'damage_dodge_apply before reserve/energy at455DA; scoped add-times-scale chance and native simulation RNG. Native HUD virtual30/156E20 owns floating text. dodge-feedback-test.log passes cancellation, shield ordering, scopes, detached exclusion, actual queue position/color/duration/text lifetime and ABI. English-only Dodge label; no rendered verification.',
        'damage_to_energy': 'raven_xml1_combat_defense_extensions at native455DA before reactions: scalar assignment, energy interception, unblockable flags, native3F410 charging. energy-shield-test.log passes partial/full/no energy, replacement/disable and native setter/ABI; no gameplay claim.',
        'spend_damage': 'raven_xml1_damage_reserve_refresh and raven_xml1_combat_damage_reserve; generation-owned capacity, refreshed maximum, scoped first eligible attachment, native2AF30 depletion removal and pool reset/retirement. reserve-final-test.log passes repeated/overflow/exact hits, generated initialization, actual native unlink, generation reuse and reset. No gameplay claim.',
        'attack_rating': 'raven_xml1_combat_rating outgoing scale consumer; native rating fixture passes.',
        'atk_attack_rating': 'raven_rating.cpp authored alias through the outgoing rating consumer; fire/physical isolation fixture passes.',
        'defense_rating': 'raven_xml1_combat_rating incoming scale consumer; shared owner/recipient fixture passes.',
        'def_absorb_damage': 'raven_xml1_combat_absorb_damage incoming hit consumer; separate from CPUAbsorb.',
        'scale_factor': 'raven_xml1_actor_scale_factor and ordered raven_rating_actor_scale; lifecycle/ordered arithmetic fixtures pass.',
        'atk_critical': 'raven_xml1_combat_critical_chance joins native probability before its single RNG draw; scope/repeat/retirement fixture passes.',
        'powerup_scope': 'raven_xml1_powerup_class_share_matches and native class-scope filter bridge; owned metadata and shared-role checks.',
        'health_per_kill': 'raven_xml1_combat_kill_rewards after native first-death flag45EA4; existing health setter2E5B0. kill-rewards-final-test.log passes.',
        'energy_per_kill': 'raven_xml1_combat_kill_rewards after native first-death flag45EA4; existing energy getter2E8C0/setter2E5F0. kill-rewards-final-test.log passes.',
        'extra_potions': 'raven_xml1_bonus_drops at native710C3 before ordinary loot roll; party scale factors, original inventory capacity methods, native715A0 spawning. drop-hook-final-test.log passes basic programmatic contracts; scene terminals substituted.',
        'extra_money': 'raven_xml1_bonus_drops at native710C3; party scale factors and native XML1 source value/item spawning, bounded nearby pickups, source revalidation and cleanup. drop-hook-final-test.log passes; scene terminals substituted.',
    }
    for name in ('resist_physical', 'resist_energy', 'resist_fire', 'resist_radiation'):
        implemented[name] = ('raven_xml1_combat_resistance at incoming46373; actual XML1 type IDs, '
                             'typed reduction/isolation/retirement fixture passes. Other resistance names are not implied.')
    # Reconcile current consumers before treating missing original-image names
    # as missing work. Existing XML1 declarations are skipped, not parity-audited.
    for filename, token in (
        ('src/engine/combat/raven_rating.cpp', 'name=="atk_attack_rating"'),
        ('src/engine/powers/raven_powerup_guest.c', 'void raven_xml1_combat_absorb_damage('),
        ('src/engine/powers/raven_powerup_guest.c', 'float raven_xml1_actor_scale_factor('),
        (0x00046270, 'raven_xml1_combat_absorb_damage(esi, esp + 0x18);'),
        (0x0005C240, 'raven_xml1_combat_rating(ebx, edi, esp+0x28, 0);'),
        (0x0005C240, 'raven_xml1_combat_rating(ebp, edi, esp+0x2c, 1);')):
        if token not in evidence_source(filename):
            raise SystemExit('Implemented affecter consumer missing: '+token)
    for filename, token in (
        ('src/engine/powers/raven_powerup_metadata.cpp', 'if(name=="powerup_scope")return raven::xml1_powerup_share_matches(f,definition,radius);'),
        (0x00046270, 'raven_xml1_combat_resistance(esi, esp + 0x18);'),
        (0x00045E20, 'MEM8(ecx + 0x2B8) = LO8(eax);\n    raven_xml1_combat_kill_rewards(ebp);'),
        (0x00070FB0, 'loc_000710C3: ;\n    raven_xml1_bonus_drops(edi, (int32_t)MEM32(esp + 0x70), MEM32(esp + 0x78));'),
        (0x0005C020, 'raven_xml1_combat_critical_chance(esi, MEM32(esp + 0x14), esp + 0x10);')):
        if token not in evidence_source(filename):
            raise SystemExit('Implemented affecter consumer missing: '+token)
    for filename,token in (
        (0x000299B0,'loc_000299B0: ;\n    raven_xml1_damage_reserve_reset();'),
        (0x00045260,'loc_000455DA: ;\n    raven_xml1_combat_defense_extensions(esi);'),
        ('src/engine/powers/raven_powerup_guest.c','raven_xml1_damage_reserve_refresh(instance);'),
        ('src/engine/powers/raven_powerup_guest.c','damage_reserve_retire(owner);'),
        ('src/engine/combat/raven_damage_reserve_guest.inc','RECOMP_ABI_CALL(0x0002AF30u,sub_0002AF30);'),
        ('src/engine/combat/raven_damage_reserve_guest.inc','RECOMP_ABI_CALL(0x0003F410u,sub_0003F410);')):
        if token not in evidence_source(filename):
            raise SystemExit('Damage reserve integration missing: '+token)
    # Native cache refresh uses a byte selector table followed by a jump table.
    # Default means "not cached here", never "unused": hit-time queries and
    # class callbacks may own those operands instead.
    def cache_target(operand):
        operand=int(operand)
        if not 2<=operand<=94:
            return 0x14a99c
        selector=two.data[two.va_offset(0x14aa80+operand-2)]
        if selector>=54:
            raise SystemExit('Unexpected cache selector')
        return word(two,0x14a9a8+4*selector)
    if cache_target(22)!=0x149578 or cache_target(23)!=0x149518:
        raise SystemExit('Regeneration cache dispatch changed')
    if cache_target(84)!=0x14a99c or word(two,0x545c38)!=0x4a655c:
        raise SystemExit('stolen_damage declaration/default-cache evidence changed')
    for va, mnemonic, operands in (
        (0x14956a,'fadd','dword ptr [esi + 0x4c]'),
        (0x14956d,'fstp','dword ptr [esi + 0x4c]'),
        (0x1495be,'fadd','dword ptr [esi + 0x4c]'),
        (0x1495c3,'fstp','dword ptr [esi + 0x4c]')):
        off=two.va_offset(va)
        ins=next(md.disasm(two.data[off:off+16],va))
        if (ins.mnemonic,ins.op_str)!=(mnemonic,operands):
            raise SystemExit('Regeneration cache consumer changed')
    if native.get('health_regen')!=11 or not consumers.get(11):
        raise SystemExit('Existing XML1 health regeneration evidence missing')
    variants={'health_regen_pct':
              'Existing health regeneration; skip XML2 percentage variant. XML2 IDs22/23 '
              'both accumulate cache+4C (1495BE/14956A); XML1 health_regen ID11 '
              'has native query3A9A3. Preserve XML1 without arithmetic parity or alias.'}
    variants.update({
        'bypass_enemy_dr': 'Existing XML1 attack-roll bypass through dmgmod_no_atk_roll; skip XML2 affecter/cache interface. XML2 cache579 bit4 at5DB17 sets bypass5DB20, joining the flag path5DB55/5DB8B. XML1 flag08000000 at5C385 sets bypass5C3BB;5C460/5C462 skips RNG1233A0 at5C46B. Preserve XML1, no affecter alias or damage-reduction conflation.',
        'slow_immune': 'Existing XML1 movement-impairment admission immunity; skip XML2 slowdown-threshold variant. Native attachment2ACD5 calls383A0, which queries no_iceshell53 at383E9; blocked scale-move effects reject at2ACFD. Preserve XML1 thresholds, no alias or broader rejection.',
        'reveal_hidden': 'Existing XML1 stealth detection; skip dynamic XML2 cache variant. XML2 cache109 bit10 joins canSeeStealthed at2EB70/2EB90. XML1 parses canSeeStealthed atB09D9 into character3A1 bit4 and consumes it in actor query3052E. No visibility alias or new detection system.',
        'move_attack': 'Existing XML1 combat-node movement scaling; skip separate XML2 attack-only cache variant. Native combat execution40623 calls movement getter38270 (move9 query38286). XML2 node virtual58 is noncombat flag10F1C0; XML1 already parses noncombat atE28E8 and exposesEAC20. Preserve XML1, no attack-only alias or timing parity.',
        'frozen': 'Existing XML1 freeze system; skip cached status variant. Native frozenactivate resolver2DAC4 installs2C010; full lifecycle/hurt callbacks in XML2-POWERUP-PRESENCE.md. No new status alias.',
        'might_heaviness': 'Existing XML1 might system; skip split XML2 cache variant. Native might_mode/might_mode_mod IDs7/8 queried byB1BA0, called by object weight gate38457. Preserve XML1.',
        'might_structure': 'Existing XML1 might system; skip split XML2 cache variant. Native might queriesB1C24/B1C47/B1C59 already consumed in combat59A64/5CD5C. Preserve XML1.',
        'atk_vampire_energy': 'Existing XML1 energy drain/attacker restoration; skip XML2 variant. Native dmgmod_drain at45CF4 reduces victim energy and grants attacker energy at45E06. XML2 operand65 restores attacker energy at46C35. No formula or flag alias.',
        'energy_drain': 'Existing XML1 energy depletion on hit; skip XML2 cache variant. XML2 cacheDC is consumed at46D90/46DD3 and victim energy setter46E03. XML1 dmgmod_drain already subtracts hit energy at45D26 and commits victim energy at45D67. Preserve XML1, no cache/formula alias.',
        'min_damage': 'Existing XML1 damage-range and damage-affecter system; skip split XML2 endpoint-cache variant. Native5CCA0 samples the supplied endpoints at5CD02 and applies damage16 at5CD29/5CD42. Preserve XML1 formulas; no alias.',
        'max_damage': 'Existing XML1 damage-range and damage-affecter system; skip split XML2 endpoint-cache variant. Native5CCA0 samples the supplied endpoints at5CD02 and applies damage16 at5CD29/5CD42. Preserve XML1 formulas; no alias.',
        'talent': 'Existing XML1 talent bonus system; skip alternate affecter interface. Native bonus getter482B0/setter482F0, addAE04C/AE066, removalAE831/AE857 and UI18B95B. Completed progression preserves/expands this record; do not restart.',
        'all_talents': 'Existing XML1 talent bonus system; skip bulk XML2 variant. Named bonus add/remove/accessors already exist; completed progression expands their native records. Preserve XML1 rather than importing a second rank-bonus system.',
        'def_defense_rating': 'Covered defensive rating system; skip alternate hit-query interface. XML2 query51 at5D8AF/5D8BF combines with defense-rating cache88/8C at5D8E7/5D906. Current XML1 raven_xml1_combat_rating already joins its incoming rating path. No new alias or formula parity.',
        'def_absorb_energy': 'Covered incoming-hit energy restoration through integrated CPUAbsorb (energy=true, inflicted=false). XML2 query53 at45DD4 restores recipient energy via45E4C; current raven_xml1_absorb already supplies this system through native XML1 getter/setter. Skip alternate affecter interface, no alias.',
        'atk_vampire': 'Covered outgoing-hit health restoration through integrated CPUAbsorb (energy=false, inflicted=true). Native query64 restores attacker health at46AB6; current raven_xml1_absorb supplies damage-based holder/sponsor restoration and native caps. Skip alternate affecter interface, no alias.',

    })
    for filename,token in (
        ('src/engine/combat/raven_absorb.cpp','flag(*fields,"inflicted")?1:2'),
        ('src/engine/combat/raven_absorb_guest.inc','const double restored=damage*values.percentage;'),
        ('src/engine/combat/raven_absorb_guest.inc','values.energy?0x1A0:0x19C'),
        ('src/engine/powers/raven_powerup_guest.c','defense?"defense_rating":"attack_rating"')):
        if token not in evidence_source(filename):
            raise SystemExit('Covered restoration/rating system missing: '+token)
    for va,mnemonic,operands in (
        (0x5d8af,'call','0x15ed50'),(0x5d8bf,'call','0x15ed50'),
        (0x5d8e7,'fadd','dword ptr [esi + 0x88]'),
        (0x5d906,'fmul','dword ptr [esi + 0x8c]'),
        (0x45dd2,'push','0x35'),(0x45dd4,'call','0x15ed50'),
        (0x45df4,'fmul','dword ptr [esi + 0x9c]'),
        (0x45e4c,'call','dword ptr [ebx + 0x1a8]')):
        off=two.va_offset(va)
        ins=next(md.disasm(two.data[off:off+16],va))
        if (ins.mnemonic,ins.op_str)!=(mnemonic,operands):
            raise SystemExit('Defensive restoration/rating trace changed')
    for name in ('resist_mental','resist_elemental','resist_cold','resist_electricity','resist_all','def_damage_scope'):
        variants[name] = ('Existing XML1 scoped defensive-damage system; skip XML2 cache/query variant. '
                          'Native def_damage18 queries45501/45512 use hit context; filter94F00 checks '
                          'damage type/group and node, including unfiltered all-types. Original damage '
                          'table includes mental/cold/electricity. Preserve XML1; no new alias.')
    if native.get('def_damage')!=18:
        raise SystemExit('Existing defensive affecter declaration changed')
    for index,name in ((1,'dmg_mental'),(5,'dmg_electricity'),(8,'dmg_cold')):
        if string(one,word(one,0x44c498+index*8))!=name:
            raise SystemExit('Existing damage type changed')
    for va,mnemonic,operands in (
        (0x482cf,'mov','al, byte ptr [esi + eax*4 + 0x169]'),
        (0x482d6,'and','al, 0xf'),
        (0xae04c,'call','0x482b0'),(0xae066,'call','0x482f0'),
        (0xae831,'call','0x482b0'),(0xae857,'call','0x482f0'),
        (0x18b95b,'call','0x482b0'),
        (0x5ccf8,'mov','edx, dword ptr [esp + 0x38]'),
        (0x5ccfc,'mov','eax, dword ptr [esp + 0x34]'),
        (0x5cd02,'call','0x1233c0'),
        (0x5cd25,'push','0x10'),(0x5cd29,'call','0x2a5e0'),
        (0x5cd3e,'push','0x10'),(0x5cd42,'call','0x2a400'),
        (0x45501,'call','0x2a400'),(0x45512,'call','0x2a400'),
        (0x2a477,'call','0x2a220'),(0x2a333,'call','0x94f00'),
        (0x94f16,'mov','edi, dword ptr [ebp + 0x10]'),
        (0x94f1a,'call','0x494c0'),(0x94f1f,'mov','edx, dword ptr [esi + 0xc]'),
        (0x94f27,'je','0x94f47'),(0x94f32,'test','edx, ebx'),
        (0x94f3f,'test','edx, eax'),(0x94f79,'cmp','eax, dword ptr [ebp + 0x48]')):
        off=one.va_offset(va)
        ins=next(md.disasm(one.data[off:off+16],va))
        if (ins.mnemonic,ins.op_str)!=(mnemonic,operands):
            raise SystemExit('Existing defensive scope consumer changed')
    if (native.get('might_mode')!=7 or native.get('might_mode_mod')!=8 or
            one.strings.get(0x3c8f0c)!='frozenactivate'):
        raise SystemExit('Existing might/freeze declaration changed')
    for va,mnemonic,operands in (
        (0xb1c00,'push','7'),(0xb1c24,'call','0x2a400'),
        (0xb1c43,'push','8'),(0xb1c47,'call','0x2a400'),
        (0xb1c55,'push','8'),(0xb1c59,'call','0x2a400'),
        (0x38457,'call','0xb1ba0'),(0x59a64,'call','0xb1ba0'),
        (0x5cd5c,'call','0xb1ba0'),(0x2dac4,'mov','dword ptr [edi], 0x2c010')):
        off=one.va_offset(va)
        ins=next(md.disasm(one.data[off:off+16],va))
        if (ins.mnemonic,ins.op_str)!=(mnemonic,operands):
            raise SystemExit('Existing might/freeze consumer changed')
    # Authored Rogue Power Theft uses this only as its damage-scaling variant.
    # XML1 already has the stolen-power lifecycle; user policy keeps XML1,
    # rather than porting a new scalar/alias into that existing facility.
    variants['stolen_damage'] = (
        'Existing XML1 stolen-power system; skip the authored damage-scaling variant. '
        'PC Rogue talent rogue_ability/Power Theft authors a scale affecter with '
        'level=%rog_ability_dmg. XML1 powerstolenactivate2CF80 and '
        'powerstolendeactivate2D3B0 already own the facility (also classified in '
        'XML2-POWERUP-PRESENCE.md). Preserve XML1, no operand alias or balance parity. '
        'This is not a claim that XML2 ID84 is unused; no distinct native consumer was proved.')
    for va, mnemonic, operands in (
        (0x2cf96,'call','0x6bf80'),(0x2d085,'call','0x2e290'),
        (0x2d097,'call','0x2e290'),(0x2d09e,'call','0xed320')):
        off=one.va_offset(va)
        ins=next(md.disasm(one.data[off:off+16],va))
        if (ins.mnemonic,ins.op_str)!=(mnemonic,operands):
            raise SystemExit('Existing stolen-power interface changed')
    traced = {
        'spend_damage': 'Native consumer460DC/460E6 queries operand30 through15BEF0 and validates its owned reference at46106. Referent virtual68 supplies finite remaining capacity4611D; hit consumes capacity via virtualB8 at4616C or46196, clears/subtracts incoming damage46174/46186, and removes exhausted reference through15C560 at461A8. Existing-system and ownership classification remain open; this is a finite reserve, not a cached damage multiplier.',
        'def_dodge': 'Partial implementation: damage_dodge_apply at incoming455DA combines scoped add/scale operands and uses native XML1 RNG1233A0 before reserve/energy interception. dodge-contract-test.log passes cancellation, scale-zero disable, fire/physical isolation, detached exclusion and ABI. Native XML2 feedback uses localized tokenA9; XML1 HUD virtual30/156E20 identified but feedback remains unfinished. Not counted complete.',
        'stolen_damage': 'Declaration84 at545C38 points to4A655C; cached-stat dispatcher148E39/148E45/148E4C selects default14A99C. Direct immediate84 scan has no identified affecter-query caller. CPURogueDrained activation1504E0 and XML1 powerstolenactivate2CF80 establish an existing steal facility, but no distinct stolen_damage consumer is yet proved. Remains unresolved; default cache branch alone does not establish an unused declaration.',
        'slow_immune': 'Native powerup admission consumer15D525 tests cache109 bit8; scans incoming affecters9/10 at15D5AD/15D5D8 and rejects a resolved value below1 via15D603/15D611. Existing-system or integration classification remains open.',
        'move_attack': 'Native consumer36ED0 reads cache3C/44/48;37120 composes it with ordinary move factor only when the supplied move interface virtual58 is false (37153/3715C). XML1 move getter38270 exists, but attack-specific integration/classification remains open.',
        'damage_to_energy': 'Native consumer traced:149A12 writes cache+7C;461C6 reads it,461E6 scales incoming damage,461F2 reads victim energy and46221 calls3ED50 for energy spending. Existing-system/integration classification remains open.',
        'atk_vampire': 'Native hit-time consumer confirmed: query64 add/scale at469DB/469F4, damage-based gain and health cap, attacker health setter46AB6. Existing-system/integration classification remains open; default cache branch is not a no-op.',
        'extra_potions': 'Native party-wide bonus-drop consumer7D390 confirmed: scale cache+F4, multiply across party at7D448, inventory-cap gate7D55A..7D5B0, native potion selection7D5CE and spawn7D650. XML1 native drop entry70FB0/spawner715A0 located; bonus integration remains pending.',
        'extra_money': 'Native party-wide bonus-drop consumer7D390 confirmed: scale cache+F8, multiply across party at7D463, money amount7D6AA/7D6AF and spawn7D759. XML1 native money/drop path71303..713B6 and spawner715A0 located; bonus integration remains pending.',
    }
    # spend_damage owns a finite per-attachment reserve. Its native field is
    # not a shared definition value: attachment refresh samples the authored
    # affecter, while incoming hits decrement the owned instance and remove
    # that attachment on exhaustion. Pin this contract before porting storage.
    for image, va, mnemonic, operands in (
        (two,0x43eec,'mov','eax, dword ptr [edi + 0x35c]'),
        (two,0x43ef2,'fld','dword ptr [eax + 0x4ec]'),
        (two,0x4680f,'mov','edx, dword ptr [ebx + 0x35c]'),
        (two,0x46815,'fld','dword ptr [edx + 0x4ec]'),
        (two,0x461af,'mov','al, byte ptr [edi + 0x57a]'),
        (two,0x461b5,'add','edi, 0x470'),
        (two,0x461c6,'fld','dword ptr [edi + 0x7c]'),
        (one,0x3f475,'push','0x28'),
        (one,0x3f479,'call','0x2a400'),
        (one,0x3f48a,'push','0x28'),
        (one,0x3f48e,'call','0x2a400'),
        (one,0x3f4b8,'call','0x2e8c0'),
        (two,0x146d10,'mov','ax, word ptr [ecx + 0x44]'),
        (two,0x146dc5,'mov','word ptr [ecx + 0x44], ax'),
        (two,0x146826,'push','0x1e'),
        (two,0x146885,'call','dword ptr [ebp + 0x34]'),
        (two,0x1468a2,'call','0x16e1c0'),
        (two,0x1468bb,'mov','word ptr [esi + 0x44], ax'),
        (two,0x4611d,'call','dword ptr [edx + 0x68]'),
        (two,0x4616c,'call','dword ptr [ebx + 0xb8]'),
        (two,0x46196,'call','dword ptr [edx + 0xb8]'),
        (two,0x461a8,'call','0x15c560'),
        (two,0x5db17,'test','byte ptr [ebx + 0x579], 4'),
        (two,0x5db20,'mov','byte ptr [esp + 0x28], 1'),
        (two,0x5db55,'test','dword ptr [esi + 0x14], 0x8000000'),
        (two,0x5db8b,'mov','byte ptr [esp + 0x28], 1'),
        (one,0x5c385,'test','dword ptr [edi + 0x18], 0x8000000'),
        (one,0x5c3bb,'mov','byte ptr [esp + 0x30], 1'),
        (one,0x5c460,'test','al, al'),
        (one,0x5c462,'jne','0x5c4b7'),
        (one,0x5c46b,'call','0x1233a0'),
        (two,0x14990a,'add','word ptr [esi + 0x74], ax'),
        (two,0x14994f,'add','word ptr [esi + 0x76], ax'),
        (two,0x4505f,'movsx','edx, word ptr [edi + 0x74]'),
        (two,0x45124,'movsx','edx, word ptr [edi + 0x76]'),
        (two,0x45099,'call','dword ptr [edx + 0x1a4]'),
        (two,0x4516a,'call','dword ptr [edx + 0x1a8]'),
        (two,0x44fe2,'jne','0x4563f'),
        (two,0x44ff1,'mov','byte ptr [ecx + 0x30c], dl'),
        (one,0x45e9c,'jne','0x4625b'),
        (one,0x45ea4,'mov','byte ptr [ecx + 0x2b8], al')):
        off=image.va_offset(va)
        ins=next(md.disasm(image.data[off:off+16],va))
        if (ins.mnemonic,ins.op_str)!=(mnemonic,operands):
            raise SystemExit('Kill reward native consumer evidence changed')
    if word(one,0x44c51c)!=4 or string(one,word(one,0x44c518))!='dmgmod_drain':
        raise SystemExit('Existing XML1 energy-drain declaration changed')
    for image,va,mnemonic,operands in (
        (two,0x46d90,'fld','dword ptr [edi + 0xdc]'),
        (two,0x46dd3,'fmul','dword ptr [edi + 0xdc]'),
        (two,0x46e03,'call','dword ptr [edi + 0x1a8]'),
        (one,0x45d26,'fisub','dword ptr [esi + 0x94]'),
        (one,0x40623,'call','0x38270'),(one,0x38286,'call','0x2a400'),
        (one,0xe28e8,'push','0x3d68c4'),
        (one,0xeac20,'mov','al, byte ptr [ecx + 0x12c]'),
        (two,0x106597,'push','0x4a17ec'),
        (two,0x10f1c0,'mov','al, byte ptr [ecx + 0x144]'),
        (two,0x36eeb,'fmul','dword ptr [esi + 0x44]'),
        (two,0x37153,'call','dword ptr [eax + 0x58]'),
        (two,0x3715c,'call','0x36ed0'),
        (two,0x2eb70,'test','byte ptr [eax + 0x2ad], 4'),
        (two,0x2eb90,'test','byte ptr [ebp + 0x109], 0x10'),
        (one,0xb09d9,'push','0x3d3bcc'),
        (one,0xb0a0a,'or','al, 4'),
        (one,0x3052e,'test','byte ptr [ecx + 0x3a1], 4'),
        (two,0x15d525,'test','byte ptr [ebp + 0x109], 8'),
        (one,0x2acd5,'call','0x383a0'),
        (one,0x383dd,'push','0x35'),(one,0x383e9,'call','0x2a400'),
        (one,0x2ace7,'cmp','ecx, 0x100'),(one,0x2acfd,'jnp','0x2af18'),
        (two,0x15d5ad,'cmp','eax, 9'),(two,0x15d5d8,'cmp','eax, 0xa'),
        (two,0x15d603,'call','dword ptr [edx + 0x30]'),
        (two,0x15d611,'jnp','0x15d4f6'),
        (two,0x149a12,'fstp','dword ptr [esi + 0x7c]'),
        (two,0x461c6,'fld','dword ptr [edi + 0x7c]'),
        (two,0x461e6,'fmul','dword ptr [esi + 0x9c]'),
        (two,0x461f2,'call','0x2c610'),
        (two,0x46221,'call','0x3ed50'),
        (one,0x45cf4,'test','byte ptr [esi + 0x24], 4'),
        (one,0x45d67,'call','dword ptr [edx + 0x1a0]'),
        (one,0x45dd1,'mov','edi, dword ptr [esi + 8]'),
        (one,0x45e06,'call','0x3a870'),
        (two,0x469b9,'push','0x40'),(two,0x469db,'call','0x15e8c0'),
        (two,0x469f2,'push','0x40'),(two,0x469f4,'call','0x15e8c0'),
        (two,0x46ab6,'call','dword ptr [edx + 0x1a4]'),
        (two,0x46b27,'push','0x41'),(two,0x46b49,'call','0x15e8c0'),
        (two,0x46b60,'push','0x41'),(two,0x46b62,'call','0x15e8c0'),
        (two,0x46c35,'call','dword ptr [eax + 0x1a8]')):
        off=image.va_offset(va)
        ins=next(md.disasm(image.data[off:off+16],va))
        if (ins.mnemonic,ins.op_str)!=(mnemonic,operands):
            raise SystemExit('Drain/vampire consumer changed')
    # Extra drops are generated before the ordinary drop roll, not awarded at
    # pickup and not restricted to the attacker. Keep these native interfaces
    # pinned while adding the missing party-wide calculation to XML1.
    if cache_target(87)!=0x14a76e or cache_target(88)!=0x14a7cf:
        raise SystemExit('Bonus drop cache dispatch changed')
    for image,va,mnemonic,operands in (
        (two,0x14ac90,'call','dword ptr [edx + 0x44]'),
        (two,0x14acad,'call','0x148d60'),
        (two,0x14391a,'call','dword ptr [eax + 0x48]'),
        (one,0x7e0c1,'call','dword ptr [edx + 0x50]'),
        (one,0x7e0ea,'push','edx'),
        (one,0x7e0eb,'call','dword ptr [eax + 0x74]'),
        (one,0x7e10b,'call','dword ptr [eax + 0x74]'),
        (two,0x14a77e,'cmp','eax, 1'),
        (two,0x14a7df,'cmp','eax, 1'),
        (two,0x14a7b9,'fmul','dword ptr [esi + 0xf4]'),
        (two,0x14a81a,'fmul','dword ptr [esi + 0xf8]'),
        (two,0x7ce75,'call','0x7d390'),
        (two,0x7d406,'cmp','edi, 4'),
        (two,0x7d422,'lea','esi, [eax + 0x470]'),
        (two,0x7d448,'fmul','dword ptr [esi + 0xf4]'),
        (two,0x7d463,'fmul','dword ptr [esi + 0xf8]'),
        (two,0x7d5ce,'call','dword ptr [edx + 0x40]'),
        (two,0x7d650,'call','dword ptr [esi + 0x264]'),
        (two,0x7d6aa,'call','0x7d2f0'),
        (two,0x7d6af,'imul','eax, ebx'),
        (two,0x7d759,'call','dword ptr [ebp + 0x264]'),
        (one,0x710cb,'call','0x123330'),
        (one,0x710d4,'fcomp','dword ptr [edx*4 + 0x3cccb8]'),
        (one,0x7130b,'call','0xaf700'),
        (one,0x71337,'call','0xaf700'),
        (one,0x7154d,'call','dword ptr [esi + 0x1b4]')):
        off=image.va_offset(va)
        ins=next(md.disasm(image.data[off:off+16],va))
        if (ins.mnemonic,ins.op_str)!=(mnemonic,operands):
            raise SystemExit('Bonus drop consumer evidence changed')
    if word(one,0x3ccd14+0x1b0)!=0x70fb0 or word(one,0x3ccd14+0x1b4)!=0x715a0:
        raise SystemExit('XML1 native drop/spawn dispatch changed')
    proven = named = unresolved = added = variant_count = 0
    for name, operand in entries:
        identifier = native.get(name.lower())
        sites = consumers.get(identifier, [])
        if sites:
            proven += 1
            evidence = 'Existing XML1 operand and consumer; skip. '+', '.join(
                f'`{push:08X}` push -> `{call:08X}` call `{target:08X}`' for push, call, target in sites[:3])
        elif identifier is not None:
            named += 1
            evidence = 'Existing XML1 declaration/resolver; skip under existing-system rule. No behavior comparison.'
        elif name in implemented:
            added += 1
            evidence = 'Already implemented addition; do not restart. '+implemented[name]
        elif name in variants:
            variant_count += 1
            evidence = variants[name]
        else:
            unresolved += 1
            target=cache_target(operand)
            evidence = traced.get(name) or ('No exact XML1 operand name; reconcile existing systems and implemented additions. '
                        +(f'XML2 cache branch `{target:08X}`.' if target!=0x14a99c else
                          'XML2 cache dispatcher takes default; trace other consumers, not a no-op claim.'))
        lines.append(f'| `{name}` | {operand} | {identifier if identifier is not None else "—"} | {evidence} |')
    lines += ['', f'{proven} rows have direct native XML1 consumer evidence; {named} have an existing',
              f'XML1 declaration and are skipped; {added} additions have current implementation evidence;',
              f'{variant_count} differently named variants feed existing systems and are skipped;',
              f'{unresolved} unmatched rows still need existing-system/current-implementation reconciliation.',
              'Counts are inventory rows, not numbers of missing systems. Separate damage-modifier',
              'flags and their consumers remain outside this operand-name inventory.', '']
    def modifier_table(image, start, count):
        return {string(image, word(image, start+8*i)): word(image, start+8*i+4)
                for i in range(count)}
    modifiers1 = modifier_table(one, 0x44c510, 27)
    modifiers2 = modifier_table(two, 0x53dcb8, 31)
    if modifiers1.get('dmgmod_ignore_def') != 0x04000000:
        raise SystemExit('Existing XML1 defensive bypass declaration changed')
    for va, mnemonic, operands in (
        (0x454a4, 'mov', 'edi, dword ptr [esi + 0x24]'),
        (0x454e0, 'test', 'edi, 0x4000000'),
        (0x454ec, 'jne', '0x455da'),
        (0x454ff, 'push', '0x12'),
        (0x45501, 'call', '0x2a400')):
        offset=one.va_offset(va)
        ins=next(md.disasm(one.data[offset:offset+16],va))
        if (ins.mnemonic,ins.op_str)!=(mnemonic,operands):
            raise SystemExit('Existing XML1 defensive bypass consumer changed')
    if not all(name.startswith('dmgmod_') for name in (*modifiers1, *modifiers2)):
        raise SystemExit('Native modifier table boundary changed')
    if word(two, 0x154b98+4*4) != 0x154a02 or word(one, 0x29fa8+4*4) != 0x29e99:
        raise SystemExit('Outgoing damage selector mapping changed')
    # Battery drain is another input to the existing power-trigger category5,
    # not a new physical-trigger system. XML1 wins; no flag/eligibility parity.
    for image, table in ((one, '003CFF04'), (two, '0049965C')):
        if not any(t['name']=='.?AVCPowerTriggerEntity@@' and
                   any(v['va']==table for v in t['vtables']) for t in types(image)):
            raise SystemExit('Native power-trigger facility identity changed')
    if (word(one,0x9468c+4*4)!=0x9454e or word(two,0xa97d0+4*4)!=0xa9697 or
            word(one,0x3cbcf4+0x40)!=0x5cb30 or word(two,0x494f94+0x44)!=0x62290):
        raise SystemExit('Power-trigger category5 consumer changed')
    # Current implementation reconciliation: never reopen a completed handler
    # just because the original XML1 name table predates its added token.
    for filename, hook in (
        (0x00029DC0, 'if (ebp && (MEM32(ebp + 0x18) & 0x10000000u)) goto loc_00029F94;'),
        (0x00049510, 'xml1_block_parse_modifier(MEM32(esp+4), MEM32(esp+8));'),
        (0x00045260, 'if (MEM32(ecx + 0x24) & 2u) { SET_LO8(eax, 0); esp += 4; return; }'),
        (0x0005C240, 'if (xml1_block_attack_gate(ebp, edi))')):
        if evidence_source(filename).count(hook) != 1:
            raise SystemExit('Unblockable integration hook missing or duplicated')
    for va, mnemonic, operands in (
        (0x456d8, 'call', '0x623e0'),
        (0x62164, 'mov', 'edx, dword ptr [ecx + 0x14]'),
        (0x62167, 'mov', 'dword ptr [eax + 0x14], edx'),
        (0x45958, 'mov', 'al, byte ptr [esi + 0x20]'),
        (0x4595b, 'mov', 'ebx, 2'),
        (0x45960, 'test', 'bl, al'),
        (0x4597b, 'jne', '0x459cc'),
        (0x459cc, 'xor', 'al, al'),
        (0x470d8, 'call', '0x45950'),
        (0x470df, 'je', '0x472c9'),
        (0x154a0e, 'test', 'dword ptr [ebp + 0x14], 0x10000000'),
        (0x154a15, 'jne', '0x154b8e'),
        (0x622a1, 'mov', 'edx, dword ptr [ecx + 0x14]'),
        (0x622a9, 'test', 'dh, 2'),
        (0xa96a1, 'call', 'dword ptr [edx + 0x44]'),
        (0x45ed9, 'mov', 'eax, dword ptr [esi + 0x20]'),
        (0x45edc, 'test', 'eax, 0x40000000'),
        (0x45eeb, 'jne', '0x45f14'),
        (0x45f0a, 'fmul', 'dword ptr [ebx + 0xf0]')):
        offset = two.va_offset(va)
        ins = next(md.disasm(two.data[offset:offset+16], va))
        if (ins.mnemonic, ins.op_str) != (mnemonic, operands):
            raise SystemExit('No-protection consumer evidence changed')
    lines += ['', '## Damage-modifier declarations', '',
              'Separate from affecter operands. Exact existing declarations are recorded without',
              'comparing behavior. New names still need native-consumer classification. Never',
              'treat equal numeric bits as equivalent behavior across the two titles.', '',
              '| XML2 declaration | XML2 mask | XML1 declaration evidence / next action |',
              '|---|---:|---|']
    for name, mask in modifiers2.items():
        if name == 'dmgmod_no_actors':
            evidence = ('Implemented addition. XML2 actor preprocessor45950 tests copied damage '
                        'flags at context+20 against BL=2 and returns false; caller470DF skips '
                        'damage delivery. XML1 actor preprocessor45260 gates context+24. '
                        'Missing-token parser preserves native names; physical-object delivery untouched. '
                        'See no-actors-test.log for native entry, combined masks, parser and ABI checks.')
        elif name == 'dmgmod_drain_battery':
            evidence = ('Existing power-trigger category5 facility; skip XML2 eligibility/flag variant. '
                        'XML2 A9697 -> combat slot44/62290 consumes flag200. '
                        'XML1 category5 9454E -> slot40/5CB30 already exists. '
                        'Preserve XML1 behavior; do not alias200, which is XML1 confusion.')
        elif name == 'dmgmod_no_on_damage':
            evidence = ('Implemented addition. XML2 selector4 at154A02 tests record+14 mask10000000; '
                        'XML1 outgoing dispatcher29E99 now skips its callback for this optional flag. '
                        'Missing-token parser preserves existing names. no-on-damage-test.log: '
                        'suppression, unflagged delivery, incoming-hurt isolation, spelling and ABI pass.')
        elif name == 'dmgmod_unblockable':
            evidence = ('Already implemented addition; do not restart. raven_bishop_guest.c '
                        'missing-token adapter and block gate; generated49589/5C3C0 hooks verified. '
                        'Block fixture checks token spelling, existing-token preservation and attack gates; '
                        'shared-loop-test.log passes the complete fixture.')
        elif name == 'dmgmod_no_protection':
            evidence = ('Existing XML1 defensive-damage bypass; skip XML2 variant. '
                        'XML1 dmgmod_ignore_def at454E0/454EC skips defensive operand18 '
                        'queries at45501/45512 to455DA. XML2 protection bypass at45EDC/45EEB '
                        'is not a new defensive bypass system. Preserve XML1; no flag alias.')
        elif name in modifiers1:
            evidence = 'Existing XML1 declaration; skip and preserve its system without behavior comparison.'
        else:
            collision = [key for key, value in modifiers1.items() if value == mask]
            evidence = 'New name; trace actual consumer before classifying.'
            if collision:
                evidence += ' Numeric mask is already used by XML1 `'+collision[0]+'`; do not forward blindly.'
        lines.append(f'| `{name}` | `0x{mask:08X}` | {evidence} |')
    args.output.write_text('\n'.join(lines)+'\n', encoding='utf-8')
    print(f'{len(entries)} rows: {proven} native consumers, {named} existing declarations skipped, {added} implemented additions, {variant_count} existing variants, {unresolved} need reconciliation')


if __name__ == '__main__':
    main()
