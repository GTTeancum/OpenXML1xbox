"""Presence/classification evidence only; never compare XML1 behavior parity."""
import argparse
import hashlib
import struct
import sys
from pathlib import Path
from recomp_source import RecompSources, find_function

def validate_generated(index):
    """Check current integration hooks by address, independent of C file layout."""
    def guest_source(*labels):
        owners={index.labels[label][0][1] for label in labels if index.label_path(label)}
        return '\n'.join(find_function(index.canonical_read(index.path(owner)),owner)[0] for owner in sorted(owners))
    generated=guest_source(0x10EF51,0x105850,0x105BE0,0x10B9F0,0x10ED7F,0x10EEAB)
    hook='loc_0010EF51: ;\n    if (raven_ai_protect_update(esi)) goto loc_0010F34D;\n'
    if generated.count(hook)!=1:
        raise SystemExit('Protect update hook missing or duplicated')
    for call in ('if (raven_ai_pack_update(esi)) goto loc_0010F02A;',
                 'if (raven_ai_pack_interrupt_guest(ecx)) { SET_LO8(eax, 0); esp += 4; return; }',
                 'raven_ai_pack_contact_guest(ecx, MEM32(esp + 4));'):
        if generated.count(call)!=1:raise SystemExit('PackHunt hook missing or duplicated: '+call)
    for call in ('if (raven_ai_hit_run_waiting(ecx)) { SET_LO8(eax, 0); esp += 12; return; }',
                 'if (raven_ai_hit_run_waiting(esi)) goto loc_0010EDA6;',
                 'raven_ai_hit_run_finish(esi);'):
        if generated.count(call)!=1:raise SystemExit('HitAndRun lifecycle hook missing or duplicated: '+call)
    damage=guest_source(0x462EB)
    if damage.count('loc_000462EB: ;\n    raven_ai_hit_run_incoming(esi, MEM32(edi));')!=1:
        raise SystemExit('HitAndRun pre-admission notification hook missing or duplicated')
    teleport=guest_source(0xD62F1)
    if teleport.count('raven_ai_teleport_event(ebp, esi, edi, MEM32(esp + 0x38))')!=1:
        raise SystemExit('Teleporter event bridge missing or duplicated')
    for unit in (0xEE8E1,0x10B3E9):
        source=guest_source(unit)
        if source.count('raven_ai_teleport_attack(ecx, MEM32(esp), MEM32(esp + 4))')!=1:
            raise SystemExit('Teleporter main dispatch missing or duplicated: '+hex(unit))
    for file,call in ((0x00055B20,'raven_ai_definition_capture(ebx, edi);'),
                      (0x000B1640,'raven_ai_definition_reset(ecx);'),
                      (0x000B2DC0,'raven_ai_definition_reset(esi);')):
        source=guest_source(file)
        if source.count(call)!=1:raise SystemExit('AI definition lifetime hook missing or duplicated: '+call)

def main():
    parser=argparse.ArgumentParser()
    parser.add_argument('--recovery',type=Path,required=True)
    parser.add_argument('--xml1',type=Path,required=True)
    parser.add_argument('--xml2',type=Path,required=True)
    parser.add_argument('--output',type=Path,required=True)
    args=parser.parse_args()
    sys.path.insert(0,str(args.recovery))
    from inspect_xbe import Xbe
    from recover_interfaces import types
    from capstone import Cs,CS_ARCH_X86,CS_MODE_32
    one,two=Xbe(str(args.xml1)),Xbe(str(args.xml2))
    expected=('2ea531f11e0b5b7ca651485012b871ef99a5099c566a6d7cb8ec327ee73d62ac',
              '24ff13d0eb61bd4405653c0456d33f7a0440cdd577aaa85d7e067ecb650e6488')
    if tuple(hashlib.sha256(x.data).hexdigest() for x in (one,two))!=expected:
        raise SystemExit('AI evidence requires the traced original images')
    names1={x['name']:x for x in types(one)}
    names2={x['name']:x for x in types(two)}
    # EnemyGun adds no runtime method beyond EnemyRanged in the XML2 image.
    # XML1 already owns EnemyRanged; its differences are outside this goal.
    enemy='.?AVCAIEnemyRangedAttackHandler@@'
    gun='.?AVCAIEnemyGunAttackHandler@@'
    if enemy not in names1 or names2[gun]['vtables'][0]['methods']!=names2[enemy]['vtables'][0]['methods']:
        raise SystemExit('EnemyGun existing-facility classification changed')
    base='.?AVCActorAIDecision@@'
    if base not in names1:raise SystemExit('XML1 base decision presence changed')
    md=Cs(CS_ARCH_X86,CS_MODE_32)
    def resolved(address):
        va=int(address,16);offset=two.va_offset(va)
        first=next(md.disasm(two.data[offset:offset+16],va))
        if first.mnemonic=='jmp' and first.op_str.startswith('0x'):
            return int(first.op_str,16)
        return va
    base_methods=names2[base]['vtables'][0]['methods']
    tele=names2['.?AVCAITeleporter@@']['vtables'][0]
    # Slots0/1 are shared no-ops; slot2 only destroys the derived object.
    # Runtime slots3..8 forward to the exact same XML2 base implementations.
    for slot in (0,1,3,4,5,6,7,8):
        if resolved(tele['methods'][slot])!=resolved(base_methods[slot]):
            raise SystemExit('Teleporter has distinct runtime slot '+str(slot))
    data=two.data[two.va_offset(0x115D40):two.va_offset(0x115D40)+11]
    ops=list(md.disasm(data,0x115D40))
    if [(v.mnemonic,v.op_str) for v in ops]!=[
        ('mov','dword ptr [ecx], 0x4a4814'),('jmp','0x1302b0')]:
        raise SystemExit('Teleporter destructor gained behavior')
    def instruction(image,va,mnemonic,operands):
        at=image.va_offset(va)
        op=next(md.disasm(image.data[at:at+16],va))
        if (op.mnemonic,op.op_str)!=(mnemonic,operands):
            raise SystemExit('AI selection evidence changed at '+hex(va))
    # HitAndRun's additional callback is reached through a real actor-event
    # notification, not merely retained in an unused vtable. This establishes
    # an integration contract, NOT absence of an equivalent XML1 facility.
    hitrun=names2['.?AVCAIHitAndRunAttackHandler@@']['vtables'][0]
    if hitrun['methods'][22]!='001143A0':
        raise SystemExit('HitAndRun notification callback changed')
    for va,value in ((0x493614,40.0),(0x4a4738,119.0)):
        actual=struct.unpack_from('<f',two.data,two.va_offset(va))[0]
        if actual!=value:raise SystemExit('Retreat navigation constant changed')
    for va,value in ((0x490db8,80.0),(0x494094,180.0),(0x48f6b8,20.0),
                     (0x490e28,4.0),(0x48f504,5.0),(0x48f594,1.0),(0x48f930,0.5)):
        actual=struct.unpack_from('<f',two.data,two.va_offset(va))[0]
        if actual!=value:raise SystemExit('Teleporter native constant changed')
    for va,mn,op in (
        (0x470b6,'call','0x45650'),
        (0x470bf,'call','0x46ed0'),
        (0x470c7,'call','0x38630'),
        (0x46efd,'call','dword ptr [edx + 0xec]'),
        (0x11e20c,'call','0x12aff0'),
        (0x12b086,'mov','ecx, dword ptr [eax + 0x4c4]'),
        (0x12b092,'call','dword ptr [edx + 0x58]'),
        (0x12b09c,'ret','4'),
        (0x1143b4,'cmp','eax, dword ptr [ecx + 0x18]')):
        instruction(two,va,mn,op)
    # Notification occurs before the recipient's hit-admission check. Do
    # not hook this to health loss or first death, which are later events.
    for va,mn,op in (
        (0x12b050,'test','byte ptr [ecx + 0x3d8], 1'),
        (0x12b080,'call','dword ptr [edx + 0x258]'),
        (0x12b08c,'mov','eax, dword ptr [esi + 0x10]'),
        (0x11464f,'call','0x1264d0'),
        (0x114663,'fstp','dword ptr [eax + 0x5f8]'),
        (0x11466f,'mov','dword ptr [eax + 0x5fc], ecx'),
        (0x114678,'mov','dword ptr [edx + 0x18], 0'),
        (0x114ecf,'call','0x138210'),
        (0x114f28,'fstp','dword ptr [edi + 0x54]'),
        (0x115094,'fstp','dword ptr [ebp + 0x6e8]'),
        (0x11509a,'fstp','dword ptr [ebp + 0x6ec]'),
        (0x1150a0,'fstp','dword ptr [ebp + 0x6f0]'),
        (0x1150c7,'call','0x138210'),
        (0x115131,'call','0x1211e0'),
        (0x115141,'call','0x127c50')):
        instruction(two,va,mn,op)
    for va,mn,op in (
        (0x11c378,'push','0x4960e8'),(0x11c435,'cmp','edi, 1'),
        (0x11c47e,'call','0x115bc0'),(0x11c48f,'cmp','edi, 7'),
        (0x11c498,'cmp','edi, 8'),(0x11c4a1,'cmp','edi, 6'),
        (0x11c4c6,'call','0x115c90'),(0x11c5bc,'call','0x115c30')):
        instruction(two,va,mn,op)
    # XML1 already selects and constructs the power-selection attack facility.
    # Its authored mode/table policy wins; only the separately missing retreat
    # notification/lifecycle was added. Do not port XML2 selection parity.
    shades=names1['.?AVCAIShadesNoWingAttackHandler@@']['vtables'][0]
    if shades['va']!='003D9C1C' or shades['methods'][0]!='000F1110':
        raise SystemExit('Existing XML1 power-selection handler changed')
    for va,mn,op in ((0xfd59a,'cmp','eax, 0xa'),
                     (0xfd5a7,'call','0xfc4d0'),
                     (0xfd5c4,'mov','dword ptr [esi + 0x494], eax'),
                     (0xfc4e3,'mov','dword ptr [esi], 0x3d9c1c')):
        instruction(one,va,mn,op)
    instruction(one,0xf7b7e,'call','0xf2280')
    instruction(one,0xf7bcb,'call','0x10dcb0')
    instruction(one,0xf7be6,'call','0x1093d0')
    # The missing retreat extends native movement completion and gates
    # attack selection. It never owns locomotion or restores target18.
    for va,mn,op in (
        (0x462eb,'test','byte ptr [esi + 0x334], 1'),
        (0x46314,'call','0x39680'),
        (0x10b9f0,'push','-1'),
        (0x10e60c,'call','0x10b9f0'),
        (0x10ed7f,'call','0xfcf80'),
        (0x10eeab,'push','0'),
        (0x10eeaf,'call','0xfe330'),
        (0xfc627,'call','dword ptr [eax + 0x34]'),
        (0xfc62b,'ret','4'),
        (0xd644d,'call','0xd6030'),
        (0xd6065,'lea','ebx, [eax + 0x4dc]'),
        (0xd6349,'call','0xd56b0'),
        (0xd62d3,'fld','dword ptr [ebx + 8]'),
        (0xd62e4,'fld','dword ptr [eax + 0x28]'),
        (0xd635b,'ret','0x10'),
        (0xd5c6e,'ret','0x1c'),
        (0xf1216,'call','0x1114a0')):
        instruction(one,va,mn,op)
    # Only the missing teleporter uses these existing XML1 interfaces.
    for va,mn,op in (
        (0xee254,'ret','0x10'),(0x1114d4,'ret','4'),
        (0x103048,'ret','0x10'),(0xf144a,'call','0x102fc0'),
        (0x10b3e7,'call','dword ptr [edx]'),
        (0xee8df,'call','dword ptr [edx]'),(0xee8ed,'mov','byte ptr [esi + 0x14], cl')):
        instruction(one,va,mn,op)
    for va,mn,op in (
        (0x13226b,'fld','dword ptr [esi + 0x5f8]'),
        (0x13564b,'fld','dword ptr [esi + 0x5f8]'),
        (0x135976,'mov','dword ptr [edi], 0'),
        (0x1359d0,'call','0x1211e0'),
        (0xf52d0,'lea','ebx, [eax + 0x6dc]'),
        (0xf559f,'test','ch, 4'),
        (0xf55a7,'fld','dword ptr [ebx + 0xc]'),
        (0xf56b8,'call','0xf4120')):
        instruction(two,va,mn,op)
    # Integration interfaces only: the imported route must call XML1's grid
    # slots, not copy XML2's larger virtual layout into the older object.
    grid=names1['.?AVCPathGrid@@']['vtables'][0]
    if grid['va']!='003CFB54' or grid['methods'][8:10]!=['0008F910','0008DAF0']:
        raise SystemExit('XML1 navigation interface changed')
    instruction(one,0x8f96d,'ret','4')
    instruction(one,0x1019ac,'mov','dword ptr [esi + 0x34], edx')
    instruction(one,0x1019c7,'call','0xfe330')
    instruction(one,0x1019d3,'ret','4')
    instruction(one,0x10ef64,'call','0x10c8d0')
    instruction(one,0xfc5a4,'mov','dword ptr [ecx + 0x144], eax')
    # Protect integrates only after the existing XML1 event/common gates.
    # A consumed update uses the original epilogue, preserving ret8 cleanup.
    instruction(one,0x10eefd,'call','0x10e230')
    instruction(one,0x10ef44,'call','0x117030')
    instruction(one,0x10ef51,'mov','eax, dword ptr [esi + 8]')
    instruction(one,0x10f34d,'pop','edi')
    instruction(one,0x10f356,'ret','8')
    instruction(one,0x34f3a,'ret','0xc')
    instruction(one,0x10b0d9,'test','byte ptr [esi + 0x28a], 1')
    instruction(one,0x105850,'sub','esp, 0x14')
    instruction(one,0x105be0,'sub','esp, 0x80')
    instruction(one,0x10f033,'ret','8')
    validate_generated(RecompSources(Path(__file__).resolve().parents[1]/'src/recomp/gen'))
    lines=['# Native AI presence evidence','','Generated by `scripts/audit-native-ai-presence.py`.','',
        '| Candidate | Classification | Evidence |','|---|---|---|',
        '| CAITeleporter decision wrapper | No distinct runtime decision implementation; use existing XML1 decision facility. | XML2 runtime slots0,1,3..8 resolve to the exact same methods as CActorAIDecision. Destructor115D40 only installs the derived table then tail-calls1302B0. XML1 has CActorAIDecision at003D9DFC. |',
        '| CAIDumbWanderer | Implemented; basic programmatic validation passes. | Factory11C350 selects aitype1. raven_ai_modes.cpp / raven_ai_modes_guest.c implement owned routes, native grid initialization, idle destinations and combat-target handoff. ai-handoff-test.log covers native handle validation, destination/state transition and initialization; grid terminals substituted. |',
        '| CAIPackHunt | Implemented; basic programmatic validation passes. | Owned shared leader/target, phases/deadlines, leader projection, native follower movement/engagement, contact105BE0 and interrupt105850 hooks. ai-pack-hooks-test.log exercises native entries; scene terminals substituted. |',
        '| CAIEnemyGunAttackHandler | Existing XML1 EnemyRanged facility; skipped. | XML2 tables4A4654 and4A44EC have identical runtime method lists. XML1 EnemyRanged table3D8FFC exists. No XML1 behavior comparison or flag-parity port. |',
        '| CAIProtect | Implemented; basic programmatic validation passes. | Authored modes7/8 use owned opposite-mode pairing, native party threat selection, interception and native movement/redirect. Hook10EF51 preserves existing event gates and stock dispatcher. ai-protect-update-test.log covers combined movement and lifetimes; party enumeration terminal substituted. Existing XML1 base-decision timing retained. |','',
        'XML1 factoryF7AE0 selects only flying-creature constructorF2280 or generic',
        'constructor10DCB0, then initializes through1093D0. That integration',
        'interface receives actor and property bag, storing the actor at decision+10.',
        'XML1 power-node aitype atE2E86 is a separate string enum; it does not',
        'satisfy these numeric actor-decision modes. Existing generic decisions',
        'must remain untouched for unauthored/stock actors.','',
        'This classification applies only to the decision wrapper. CAITeleporterAttackHandler',
        'and its authored selection are implemented separately below. No XML1 behavioral,',
        'signature or balance comparison was performed. All seven AI candidates are now classified.','']
    lines.extend(['## HitAndRun retreat addition and existing attack selection','',
        'XML2 actor-event path47040 calls helper46ED0. That helper calls CAI',
        'slotEC ->11E1F0 ->12AFF0. The latter resolves the other actor, gets',
        'its decision through CAI slot258, reads attack handler+4C4, and calls',
        'handler slot58 with the notifying actor pointer. HitAndRun slot58 is',
        '1143A0; it first requires that actor handle to match owner target+18.',
        'The callback has a real consumer. This does not by itself establish',
        'a missing XML1 system or authorize copying XML2 virtual slot layouts.',
        'The unrelated call at12C1F5 uses actor+378 as receiver; it is not',
        'another call to the HitAndRun attack-handler notification.','',
        '470BF dispatches this before hit admission38630 at470C7. It is not',
        'a health-loss/kill notification. The non-player recipient branch',
        '12B050 resolves the attacker decision at12B080 and passes the',
        'recipient actor pointer (12B08C) to that attacker handler. Retreat',
        '11464F calls native movement1264D0, then retains deadline5F8 and',
        'target5FC and clears target18. XML1 contact/yield105BE0 is not this',
        'trigger; the added pre-admission notification is described below.',
        'raven_ai_hit_run_destination implements the bounded seven-ray search',
        'with native40-unit steps, previous-point retention and squared119',
        'minimum displacement. ai-retreat-plan-test.log passes obstacle/side',
        'route, open grid, degenerate target and failure-atomicity checks.',
        'The owned retreat lifecycle now passes ai-retreat-dispatch-test.log:',
        'attacker notification, real movement/state, rejected movement, target',
        'suspension, owner retirement, player exclusion, facing once and cooldown.',
        'Generated462EB dispatches before admission;10B9F0 and10ED7F suppress',
        'attack selection until the deadline;10EEAB consumes the retained target',
        'for facing via XML1 FC600. There is no target18 restoration.',
        'Grid validity and final facing transform are substituted. Generated',
        'attack-selection entry is executed for pending/expired deadlines.',
        'The remaining main-attack/selection facility exists in XML1: ShadesNoWing',
        'table3D9C1C mainF1110, selected atFD59A and constructed byFC4D0 atFD5A7.',
        'FD5C4 installs it at decision494. Preserve that existing selection',
        'policy and attack implementation; no XML2 flag/mode parity changes.','',
        '## Teleporter attack implementation','',
        '114E40 gates action6 through138210, emits80/100 input bits and',
        'sets an owned deadline54 and start58. Target-aware destination is',
        'written to actor6E8/6EC/6F0 at115094..1150A0; those are XML2 fields,',
        'not safe XML1 integration offsets. The second phase gates action5',
        'at1150C7, faces the target via1211E0, checks127C50 alignment and',
        'chooses the next attack input. The existing decision wrapper does',
        'not implement this two-phase attack callback. The new adapter now does.',
        'raven_ai_teleport_destination now implements the native destination:',
        'full3D range below80 chooses180-unit retreat (phase2), otherwise',
        'approach stops20 units short (phase1). A degenerate vector copies',
        'the target with no phase; no target uses an80-unit forward vector.',
        'ai-teleport-plan-test.log covers both branches, exact80 boundary,',
        'vertical/diagonal targets, coincidence, pitch and failure atomicity.',
        'raven_ai_teleport_step implements the two-phase timing/action/input',
        'planner; ai-teleport-phase-test.log covers gates and strict deadlines.',
        'Authored aiclasstype=teleporter is now captured through native XML',
        'attributes with definition construction/final-retirement hooks.',
        'It takes priority over numeric aitype without changing native enums.',
        'ai-teleport-definition-test.log passes real parsing and capture;',
        'ai-teleport-owner-test.log covers revisions, generations and one-use',
        'destinations. The D62F1 event bridge passes ai-teleport-event-test.log:',
        'generated event setup, owned point, ret16/ret28 and x87 balance.',
        'Native spatial terminal is substituted; rejected points delegate',
        'to stock event handling. AI power-input dispatch now passes',
        'ai-teleport-dispatch-test.log: real target/health/action gates, phase1/2',
        'inputs, real wrapper dispatch/flag restoration, cooldown, native RNG,',
        'dead targets, denied actions and owner retirement. Clock/controller',
        'and standard-attack terminals are substituted; no gameplay claim.',
        'Generated10B3E7 and EE8DF main calls select the owned adapter; XML1',
        'EE150 target admission,1114A0 actions, FC600 facing and102FC0 alignment',
        'are reused. The existing wrapper and standard base remain intact.',
        'XML1 D6440 -> D6030 -> D56B0',
        'is the existing event/collision route. XML2 explicit destination is',
        'state+C gated by0x400 atF559F; do not assume an XML1 field mapping.',
        'Dispatch, ownership and event integration have basic programmatic checks.','',
        '## Verified integration interfaces','',
        'XML1 CPathGrid table003CFB54: point-validity slot20 -> 8F910',
        '(thiscall, point pointer, ret4); projection slot24 -> 8DAF0.',
        'XML2 wandering calls slots28/2C on its larger grid table4992C4.',
        'Those slot numbers must not be used against the XML1 grid.',
        'XML1 destination setter101940 accepts a point pointer, owns the',
        'destination copy at decision+34/+38/+3C and transitions through',
        'FE330(state5); caller stack cleanup is ret4. Preserve its existing',
        'eligibility checks rather than authoring new locomotion rules.',
        'XML1 decision table3D9DFC ends after its three lifecycle slots;',
        'XML2 runtime decision virtual slots cannot be installed blindly.',
        'Wandering runtime hook is at XML1 idle10C8D0, called by state',
        'dispatcher10EF64; target setterFC5A0 owns decision+144.',
        'Native destination/state-transition, target-validity handoff and',
        'initialization wrapper fixtures pass. The grid virtual methods are',
        'substituted in the adapter fixture; no world/gameplay claim.',''])
    args.output.write_text('\n'.join(lines),encoding='utf-8')
    print('Verified native interfaces/hooks; EnemyGun skipped as existing EnemyRanged; AI candidates classified')
if __name__=='__main__':main()
