"""Record XML1's native authored powerup callbacks as presence evidence only."""
import argparse
import hashlib
import json
import struct
from pathlib import Path
import sys


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--recovery', type=Path, required=True)
    parser.add_argument('--xbe', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    parser.add_argument('--xml2-inventory', type=Path, required=True,
                        help='Original-image inventory from audit-xml2-integration.py')
    args = parser.parse_args()
    sys.path.insert(0, str(args.recovery.resolve()))
    from inspect_xbe import Xbe
    from recover_interfaces import types
    from capstone import Cs, CS_ARCH_X86, CS_MODE_32
    image = Xbe(args.xbe)
    digest = hashlib.sha256(image.data).hexdigest()
    if digest != '2ea531f11e0b5b7ca651485012b871ef99a5099c566a6d7cb8ec327ee73d62ac':
        raise ValueError('Retrace resolver boundaries for this image')
    disassembler = Cs(CS_ARCH_X86, CS_MODE_32)
    callbacks = {}
    for label, start, end in [('trail', 0x2c880, 0x2c8b2),
                              ('hurt', 0x2d920, 0x2da00),
                              ('touch', 0x2da00, 0x2da60),
                              ('lifecycle', 0x2da60, 0x2dd90),
                              ('damage/attempt-hit', 0x2dee0, 0x2dfa0)]:
        candidate = None
        destination = 'edi' if label == 'lifecycle' else 'esi'
        data = image.data[image.va_offset(start):image.va_offset(end)]
        for instruction in disassembler.disasm(data, start):
            if instruction.mnemonic == 'push' and instruction.op_str.startswith('0x'):
                address = int(instruction.op_str, 16)
                if address in image.strings:
                    candidate = (image.strings[address], instruction.address)
            if (candidate and instruction.mnemonic == 'mov' and
                    instruction.op_str.startswith(f'dword ptr [{destination}], 0x')):
                callback = int(instruction.op_str.split(', ')[1], 16)
                if image.va_offset(callback) is None:
                    raise ValueError('Unmapped callback')
                name, reference = candidate
                if name in callbacks:
                    raise ValueError('Repeated resolver name')
                callbacks[name] = (label, reference, callback)
                candidate = None
    systems = {
        'CPUFreeze': ('frozenactivate', 'frozenthink', 'frozendeactivate', 'frozenhurt'),
        'CPUChill': ('chilledactivate', 'chilleddeactivate'),
        'CPUInvisible': ('invisible_activate', 'invisithink', 'invisideactivate', 'invisihurt'),
        'CPUCharged': ('charged_hurt', 'charged_touch', 'charged_death'),
        'CPUTouchDamage': ('damagetouch',),
        'CPUTimeBomb': ('timebomb_deactivate',),
        'CPURogueDrained': ('powerstolenactivate', 'powerstolendeactivate'),
        'CPUAddHarming': ('damageaddbleed', 'bleedactivate', 'bleedthink'),
        'CPUTrailReplace': ('elemtrail',),
    }
    # A renamed XML2 class is not a missing system. Native XML1's own RTTI
    # tables establish these concrete implementations; do not compare balance
    # or port an alternative version of a system that already exists.
    existing_native = {
        'CPUStunned': ('.?AVCCHStun@@', '003D7E3C', '000DDCC0'),
        'CPUDelayedDamage': ('.?AV?$COnlyOneEvent@VCPhysicalEntity@@VEDelayedDamage@@@@',
                             '003CFC54', '00093AD0'),
    }
    native_types = types(image)
    for family, (name, table, method) in existing_native.items():
        if not any(row['name'] == name and any(
                entry['va'] == table and method in entry['methods']
                for entry in row['vtables']) for row in native_types):
            raise ValueError(f'Existing native system evidence changed: {family}')
    if image.strings.get(0x3d8264) != 'ch_stun' or 0xe88c6 not in image.refs(0x3d8264):
        raise ValueError('Native stun-handler registration evidence changed')
    if (0xe88fe not in image.refs(0x3d7e3c) or
            0x44e7e4 not in image.refs(0x3cfc54) or
            0x93c27 not in image.refs(0x44e7e4)):
        raise ValueError('Native stun/delayed-damage construction or dispatch evidence changed')
    # The existing flat reflect_damage operand is used by XML1's incoming-hit
    # path. Presence suffices: do not compare XML2's hurt_attacker variations.
    reflect_name = struct.unpack_from('<I', image.data, image.va_offset(0x44e960))[0]
    if (image.strings.get(reflect_name) != 'reflect_damage' or
            0x94706 not in image.refs(0x44e8c8) or
            image.data[image.va_offset(0x44175):image.va_offset(0x44177)] != b'\x6a\x26'):
        raise ValueError('Native reflected-damage operand/consumer evidence changed')
    for names in systems.values():
        for name in names:
            if name not in callbacks:
                raise ValueError(f'Missing native callback: {name}')
    # Presence only: XML1 already consumes dmgmod_drain in the native hit
    # pipeline. This does not by itself classify CPUAbsorb's health branch.
    drain_name, drain_mask = struct.unpack_from('<II', image.data,
                                               image.va_offset(0x44c518))
    if image.strings.get(drain_name) != 'dmgmod_drain' or drain_mask != 4:
        raise ValueError('Native drain table evidence changed')
    drain_code = list(disassembler.disasm(
        image.data[image.va_offset(0x45cf4):image.va_offset(0x45e0b)], 0x45cf4))
    if (not drain_code or drain_code[0].mnemonic != 'test' or
            drain_code[0].op_str != 'byte ptr [esi + 0x24], 4' or
            not any(i.address == 0x45e06 and i.mnemonic == 'call' and
                    i.op_str == '0x3a870' for i in drain_code)):
        raise ValueError('Native drain consumer evidence changed')
    lines = ['# Native XML1 powerup presence', '',
             'Generated by `scripts/audit-native-powerup-callbacks.py`.', '',
             f'XML1 image SHA256: `{digest}`.', '',
             'These are native callback-name resolvers used by the powerup definition',
             'parser (`955C0`). They establish existing systems, not XML2 signature,',
             'balance or behavior parity. Existing XML1 wins; no aliases are added.', '',
             '| XML2 class family | Classification | Existing XML1 authored callbacks |',
             '|---|---|---|']
    for system, names in systems.items():
        lines.append(f'| `{system}` | Existing system; skip parity work | ' +
                     ', '.join(f'`{name}`' for name in names) + ' |')
    lines += ['', '## Native callback resolver evidence', '',
              'Each address below is a native function pointer assignment selected by',
              'the authored callback name. This is presence evidence, not a new test of',
              'existing behavior. Other class families remain in the coverage audit.', '',
              '| Name | Resolver category | Name reference | Assigned callback |',
              '|---|---|---|---|']
    for name, (label, reference, callback) in callbacks.items():
        lines.append(f'| `{name}` | {label} | `{reference:08X}` | `{callback:08X}` |')
    inventory = json.loads(args.xml2_inventory.read_text(encoding='utf-8'))
    if inventory['xml1_sha256'] != digest or inventory['xml2_sha256'] != '24ff13d0eb61bd4405653c0456d33f7a0440cdd577aaa85d7e067ecb650e6488':
        raise ValueError('Class inventory must match the traced original images')
    implemented = {
        'CPURemoveOnEvents': 'src/engine/scripting/raven_remove_events.c; src/engine/scripting/raven_remove_events_guest.inc; src/engine/scripting/raven_trigger_events_guest.inc; scripts/guard-raven-powerup-metadata.py; tests/engine/powers/raven_powerup_guest_test.c',
        'CPUTriggerEvents': 'src/engine/scripting/raven_trigger_events_guest.inc; src/engine/combat/raven_harming_callbacks.c; src/engine/powers/raven_powerup_metadata.cpp; scripts/guard-raven-powerup-metadata.py; tests/engine/powers/raven_powerup_guest_test.c',
        'CPUVacuum': 'src/engine/combat/raven_vacuum.c; src/engine/combat/raven_vacuum_guest.inc; src/engine/combat/raven_vacuum_powerup.inc; tests/engine/combat/raven_harming_operand_test.cpp; tests/engine/powers/raven_powerup_guest_test.c',
        'CPUAbsorb': 'src/engine/combat/raven_absorb.cpp; src/engine/combat/raven_absorb_guest.inc; tests/engine/combat/raven_harming_operand_test.cpp; tests/engine/powers/raven_powerup_guest_test.c',
        'CPUHarming': 'src/engine/combat/raven_harming_callbacks.c; src/engine/powers/raven_powerup_guest.c',
        'CPUAtkAdd': 'src/engine/combat/raven_add_attack.cpp; src/engine/powers/raven_powerup_guest.c',
        'CPUScaleActor': 'src/engine/combat/raven_harming_callbacks.c; src/engine/actors/raven_actor_scale_guest.inc',
        'CPUSound': 'src/engine/powers/raven_powerup_metadata.cpp; src/engine/combat/raven_harming_callbacks.c; src/engine/powers/raven_powerup_guest.c; tests/engine/powers/raven_powerup_guest_test.c',
        'CPUAtkInstantPercent': 'src/engine/combat/raven_percent_attack.cpp; src/engine/powers/raven_powerup_guest.c; tests/engine/powers/raven_powerup_guest_test.c',
        'CPUFeralRage': 'src/engine/combat/raven_harming_callbacks.c; src/engine/powers/raven_powerup_guest.c; src/engine/powers/raven_powerup_metadata.cpp; tests/engine/powers/raven_powerup_guest_test.c',
    }
    existing_events = {
        'CPUInvulnerable': 'ce_invulnerable',
        'CPUSuspend': 'ce_atk_suspend',
    }
    for event in existing_events.values():
        rows = [row for row in inventory['combat_events'] if row.get('name') == event]
        if len(rows) != 1 or rows[0].get('status') != 'already-present/skipped':
            raise ValueError(f'Existing native event evidence is missing: {event}')
    for evidence in implemented.values():
        for path in evidence.split('; '):
            if not (Path(__file__).resolve().parents[1] / path).is_file():
                raise ValueError(f'Implementation evidence is missing: {path}')
    lines += ['', '## Complete added concrete powerup-class list', '',
              'Enumerated from all original-image RTTI additions, excluding factory and',
              'container templates. Pending means classification is incomplete, not that',
              'the class must be ported. Completed implementations are not restarted.', '',
              '| XML2 class | Vtable | Current classification | Evidence |',
              '|---|---|---|---|']
    class_count = 0
    for row in inventory['all_added_types']:
        name = row['name']
        if not name.startswith('.?AVCPU') or not name.endswith('@@'):
            continue
        name = name[4:-2]
        class_count += 1
        tables = ', '.join(f"`{table['va']}`" for table in row['vtables'])
        if name in systems:
            status, evidence = 'Existing XML1 system; skipped', ', '.join(systems[name])
        elif name in existing_events:
            status, evidence = 'Existing XML1 system; skipped', existing_events[name] + '; XML2-EVENT-INVENTORY.md'
        elif name in existing_native:
            native_name, table, method = existing_native[name]
            status = 'Existing XML1 system; skipped'
            evidence = f'{native_name}; vtable {table}; native method {method}'
        elif name == 'CPUHurtAttacker':
            status = 'Existing XML1 system; skipped'
            evidence = 'reflect_damage native operand 38 (table 0044E960); incoming-hit query 00044177 -> 0002A630'
        elif name == 'CPUBoostWhenShared':
            status = 'Implemented; native sharing-loop programmatic validation passes'
            evidence = 'src/engine/powers/raven_powerup_guest.c; generated2B270 loop with empty/dead/successful recipients and real full-pool rejection; shared-loop-test.log. Scene membership and clock substituted; no gameplay claim.'
        elif name in implemented:
            status, evidence = 'Implemented addition; validation recorded separately', implemented[name]
        else:
            status, evidence = 'Pending existing-system/implementation classification', 'Native class identity only'
        lines.append(f'| `{name}` | {tables} | {status} | {evidence} |')
    args.output.write_text('\n'.join(lines) + '\n', encoding='utf-8')
    print(f'{len(callbacks)} native callbacks; {len(systems)+len(existing_events)+len(existing_native)+1} existing class families; {class_count} concrete class rows')


if __name__ == '__main__':
    main()
