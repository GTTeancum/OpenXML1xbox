"""Inventory real XML2 PC powerstyle requirements against the current XML1 XBE.

Uses the recovered Xbox interface reader supplied with the local handoff. This
is static dependency evidence, never proof that a named handler works. Game data
and recovered proprietary code remain in the ignored local work directory.
"""
import argparse
import hashlib
import json
import re
from pathlib import Path
import subprocess
import struct
import sys
from raven_command_index import commands, correct_archived_rows


def binary_nodes(data):
    """Read attributes without discarding Raven's legal duplicate keys.

    The production decoder validates the input first; this reader only indexes
    its original binary attributes so standard XML parser rules cannot alter it.
    """
    def string(offset):
        return data[offset:data.index(0, offset)].decode('latin1')
    visited = set()
    def walk(offset):
        while offset != 0xffffffff:
            if offset in visited:
                raise ValueError('Cyclic/shared XMLB node')
            visited.add(offset)
            name, sibling, child, count = struct.unpack_from('<4I', data, offset)
            attributes = [tuple(string(v) for v in struct.unpack_from('<2I', data, offset + 16 + i * 8)) for i in range(count)]
            yield string(name), attributes
            yield from walk(child)
            offset = sibling
    return list(walk(8)) if len(data) > 8 else []


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--recovery', type=Path, required=True)
    parser.add_argument('--xml1-xbe', type=Path, required=True)
    parser.add_argument('--xml2-xbe', type=Path, help='Prefer original image over incomplete archived descriptors')
    parser.add_argument('--pc-assets', type=Path, required=True)
    parser.add_argument('--decoder', type=Path, required=True)
    parser.add_argument('--out', type=Path, required=True)
    parser.add_argument('--command-report', type=Path,
                        help='Optional Markdown presence inventory; no behavior/parity comparison')
    parser.add_argument('--event-report', type=Path,
                        help='Optional event-name/factory inventory; existing names are skipped')
    parser.add_argument('--script-extensions', type=Path, default=Path(__file__).resolve().parents[1] / 'src/engine/scripting/raven_script_extensions.c',
                        help='Current registered command table; already-added commands are excluded from pending work')
    args = parser.parse_args()
    args.out.mkdir(parents=True, exist_ok=True)
    sys.path.insert(0, str(args.recovery.resolve()))
    from inspect_xbe import Xbe
    from recover_interfaces import types

    current = Xbe(args.xml1_xbe)
    current_commands = commands(current)
    current_types = types(current)
    interfaces = args.recovery / 'analysis/interfaces'
    if args.xml2_xbe:
        xml2 = Xbe(args.xml2_xbe)
        recovered_commands = commands(xml2)
        xml2_sha256 = hashlib.sha256(xml2.data).hexdigest()
        # Original images supersede the archived name/RTTI inventory. Keep all
        # types available for review: a prefix filter is a triage convenience,
        # not the acceptance boundary for executable behavior.
        recovered_all_types = types(xml2)
        recovered_types = [r for r in recovered_all_types
            if any(k in r['name'] for k in ('Handler','Character','Powerup','Combat','Hero'))
            or re.match(r'\.\?AVC(?:PU|Actor|Monster|Player|Stats|CE|CH)',r['name'])]
    else:
        recovered_commands = correct_archived_rows(json.loads((interfaces / 'xml2-commands.json').read_text()))
        xml2_sha256 = None
        recovered_types = json.loads((interfaces / 'character-handlers.json').read_text())
        recovered_all_types = None
    names = {row['name'] for row in current_commands}
    # Presence tracing identifies existing facilities even under different names.
    # The user excludes differences within systems XML1 already supplies.
    # These are scope exclusions, NOT registered XML2 spelling aliases.
    renamed_existing = {
        'getZoneVar': ('getMissionVar', '00098C30', '000ACD00'),
        'setZoneVar': ('setMissionVar', '00098C70', '000ACD40'),
        'getZoneFlag': ('getMissionFlag', '00098CB0', '000ACD80'),
        'setZoneFlag': ('setMissionFlag', '00098D20', '000ACDF0'),
        'startCharConversation': ('startConversation', '0009E3D0', '000B55C0'),
        'loadMapKeepTeam': ('loadMap', '0009A850', '000B08C0'),
        'loadMapChooseTeam': ('loadMap', '0009A850', '000B0930'),
        'moveHeroesToEnt': ('copyOriginAndAngles', '0009B8A0', '000B2350'),
        'setBossPartyLightEntity': ('setDefaultTarget', '0009DAD0', '000B6250'),
        'startMoviePreview': ('startMovie', '00099A30', '000AE390'),
        'dangerRoomEndMission': ('endDRScenario', '00099890', '000AECC0'),
        'setTeamInvisible': ('setInvisible', '0009C6B0', '000B0150'),
        'setBossPartyLightColor': ('setPartyLightColor', '0009A040', '000AD740'),
        'playBossSound': ('sound', '0009FA00', '000AD8B0'),
        'unlockCharacter': ('setInCampaign', '00099460', '000AE180'),
        'hudMessage': ('displayHelp', '0009A410', '000AF4D0'),
        'AreYouSure': ('createPopupDialog', '00099300', '000B0CF0'),
    }
    current_by_name = {row['name']: row for row in current_commands}
    recovered_by_name = {row['name']: row for row in recovered_commands}
    existing_facilities = {}
    for name, (counterpart, xml1_entry, xml2_entry) in renamed_existing.items():
        if (current_by_name.get(counterpart, {}).get('function_va') != xml1_entry or
                recovered_by_name.get(name, {}).get('function_va') != xml2_entry):
            raise ValueError(f'Existing facility evidence changed: {name}/{counterpart}')
        existing_facilities[name] = dict(xml1_name=counterpart, xml1_entry=xml1_entry,
            evidence='XML2-INTEGRATION.md: existing-facility presence evidence; no alias added')
    # XML1's differently named console entry already restores the last cached
    # zone and optionally its party. Presence is sufficient: XML1 wins; no
    # XML2 spelling adapter or semantic comparison is warranted.
    last_zone_registration = current.va_offset(0x18E26F)
    last_zone_selection = current.va_offset(0x18DF73)
    if (current.strings.get(0x3DE958) != 'endsidemission' or
            last_zone_registration is None or last_zone_selection is None or
            current.data[last_zone_registration:last_zone_registration+10] !=
                bytes.fromhex('6820df18006858e93d00') or
            current.data[last_zone_selection:last_zone_selection+6] !=
                bytes.fromhex('69f684010000') or
            recovered_by_name.get('restorelastzone',{}).get('function_va') != '000B0360'):
        raise ValueError('Existing native last-zone restoration evidence changed')
    existing_facilities['restorelastzone'] = dict(
        xml1_name='endsidemission (native cached-zone/party restoration)',xml1_entry='0018DF20',
        evidence='Console registration18E26F; last cached zone at18DF73; XML2-INTEGRATION.md; no alias added')
    # The active-Danger-Room query exists as a native facility used by XML1's
    # registered endDRScenario. No XML2 spelling adapter or parity work follows.
    native_query = current.va_offset(0xBF730)
    query_caller = current.va_offset(0x99890)
    if (native_query is None or query_caller is None or
            current.data[native_query:native_query+15] != bytes.fromhex('8a0db07a4e0033c080f9ff0f95c0c3') or
            current.data[query_caller:query_caller+5] != bytes.fromhex('e89b5e0200') or
            recovered_by_name.get('getDangerRoomActive',{}).get('function_va') != '000AD960'):
        raise ValueError('Existing native Danger Room query evidence changed')
    existing_facilities['getDangerRoomActive'] = dict(
        xml1_name='native Danger Room active query',xml1_entry='000BF730',
        evidence='XML1 endDRScenario 00099890 calls 000BF730; XML2-INTEGRATION.md; no alias added')
    unlock_query = current.va_offset(0x8C3B0)
    unlock_bytes = bytes.fromhex('8b54240485d2568bf17c2a81fa000100007d228bca83e11fb801000000d3e0c1fa058b8c96500100005e23c1f7d81bc0f7d8c2040032c05ec20400')
    if (unlock_query is None or current.data[unlock_query:unlock_query+len(unlock_bytes)] != unlock_bytes or
            recovered_by_name.get('isCharacterUnlocked', {}).get('function_va') != '000AE270'):
        raise ValueError('Existing native character unlock query evidence changed')
    existing_facilities['isCharacterUnlocked'] = dict(
        xml1_name='native character unlock query', xml1_entry='0008C3B0',
        evidence='XML1 game-state unlocked-character bitmap; XML2-INTEGRATION.md; no alias added')
    # These script names expose systems already provided by native XML1
    # combat events. The user excludes existing systems, not just identical
    # script spellings. Preserve XML1 and do not add spelling adapters.
    existing_script_event_systems = {
        'setSkin': ('ce_setskin', '.?AVCCESetSkin@@', '003D72BC', '000D8EC0', '000B3B40'),
        'setSegmentVisible': ('ce_skinsegment', '.?AVCCESkinSegment@@', '003D7290', '000D8C70', '000B59E0'),
    }
    for name, (counterpart, type_name, vtable, execute, xml2_entry) in existing_script_event_systems.items():
        found = any(row['name'] == type_name and any(
            table['va'] == vtable and len(table['methods']) > 1 and
            table['methods'][1] == execute for table in row['vtables'])
            for row in current_types)
        if (counterpart not in current.strings.values() or not found or
                recovered_by_name.get(name, {}).get('function_va') != xml2_entry):
            raise ValueError(f'Existing script/event evidence changed: {name}/{counterpart}')
        existing_facilities[name] = dict(xml1_name=counterpart, xml1_entry=execute,
            evidence=f'{type_name} vtable {vtable}; XML2-INTEGRATION.md: existing system, no script alias added')
    # These entity properties are already parsed by XML1. Do not add XML2
    # script setters merely to expose an existing system under another name.
    native_property_facilities = {
        'setBossUndying': ('undying', 0x3CCB84, 0x9346E, '000B8700'),
        'showHealthBar': ('showhealthbar', 0x3CFCF8, 0x93496, '000B3020'),
    }
    for name, (property_name, literal, reference, xml2_entry) in native_property_facilities.items():
        if (current.strings.get(literal) != property_name or reference not in current.refs(literal) or
                recovered_by_name.get(name, {}).get('function_va') != xml2_entry):
            raise ValueError(f'Existing native entity property evidence changed: {name}')
        existing_facilities[name] = dict(xml1_name=f'native {property_name} entity property',
            xml1_entry=f'{reference:08X}',
            evidence='XML1 native entity parser; XML2-INTEGRATION.md; no script alias added')
    # XML1 already has a timed game-speed setter and a per-frame consumer.
    # The XML2 script spelling does not justify replacing that clock policy.
    speed_setter = current.va_offset(0x6EF60)
    speed_consumer = current.va_offset(0x73217)
    has_speed_method = any(row['name'] == '.?AVCGame@@' and any(
        table['va'] == '003CCD14' and len(table['methods']) > 12 and
        table['methods'][12] == '0006EF60' for table in row['vtables']) for row in current_types)
    if (not has_speed_method or speed_setter is None or speed_consumer is None or
            current.data[speed_consumer:speed_consumer+6] != bytes.fromhex('8b86b8030000') or
            recovered_by_name.get('setGameSpeed', {}).get('function_va') != '000AD800'):
        raise ValueError('Existing XML1 game-speed facility evidence changed')
    existing_facilities['setGameSpeed'] = dict(xml1_name='native timed game-speed control',
        xml1_entry='0006EF60', evidence='CGame virtual30 -> speed state consumed at73217; XML2-INTEGRATION.md; no alias added')
    radius_setter = current.va_offset(0x6F010)
    radius_consumer = current.va_offset(0x74083)
    if (current.strings.get(0x3CE7A8) != 'partylightradius' or
            0x81B02 not in current.refs(0x3CE7A8) or radius_setter is None or radius_consumer is None or
            current.data[radius_setter:radius_setter+13] != bytes.fromhex('8b44240489818c010000c20400') or
            current.data[radius_consumer:radius_consumer+6] != bytes.fromhex('8b878c010000') or
            recovered_by_name.get('setPartyLightRadiusScale', {}).get('function_va') != '000AD7A0'):
        raise ValueError('Existing XML1 party-light radius evidence changed')
    existing_facilities['setPartyLightRadiusScale'] = dict(xml1_name='native party-light radius control',
        xml1_entry='0006F010', evidence='Zone partylightradius -> CGame virtual88 -> native light update74083; XML2-INTEGRATION.md; no alias added')
    # Ambient color already has a native effect primitive: its update computes
    # RGB and writes the scene-light state, and its expiry restores that state.
    # Presence of this system excludes a second XML2 script-facing implementation.
    ambient_update = current.va_offset(0x1D922)
    ambient_restore = current.va_offset(0x1D298)
    has_ambient_primitive = any(row['name'] == '.?AVCFxAmbientLightPrimitive@@' and any(
        table['va'] == '003C73E4' and table['methods'][0] == '0001ECF0'
        for table in row['vtables']) for row in current_types)
    if (not has_ambient_primitive or ambient_update is None or ambient_restore is None or
            current.data[ambient_update:ambient_update+3] != bytes.fromhex('ff5224') or
            current.data[ambient_restore:ambient_restore+3] != bytes.fromhex('ff5224') or
            recovered_by_name.get('setAmbientLightColor', {}).get('function_va') != '000AD850'):
        raise ValueError('Existing XML1 ambient-light facility evidence changed')
    existing_facilities['setAmbientLightColor'] = dict(xml1_name='native ambient-light effect control',
        xml1_entry='0001D7C0', evidence='CFxAmbientLightPrimitive update1ECF0 -> color writer1D922; restore1D298; XML2-INTEGRATION.md; no alias added')
    # Despite its name, swapInStump invokes physical-entity destruction. XML1
    # already owns that system; differing damage flags are not new functionality.
    has_physical_destroy = any(row['name'] == '.?AVCPhysicalEntity@@' and any(
        table['va'] == '003C9204' and len(table['methods']) > 2 and
        table['methods'][2] == '00093170' for table in row['vtables']) for row in current_types)
    destroy_hit = current.va_offset(0x931BB)
    if (not has_physical_destroy or destroy_hit is None or
            current.data[destroy_hit:destroy_hit+6] != bytes.fromhex('ff90a8000000') or
            recovered_by_name.get('swapInStump', {}).get('function_va') != '000B8C30'):
        raise ValueError('Existing XML1 physical destruction evidence changed')
    existing_facilities['swapInStump'] = dict(xml1_name='native physical-entity destruction',
        xml1_entry='00093170', evidence='CPhysicalEntity virtual08 -> native hit virtualA8; XML2-INTEGRATION.md; no alias added')
    # XML1 registers closemenu with its frontend command manager already.
    # A Python spelling adapter would only expose that existing menu operation.
    close_registration = current.va_offset(0x18E2C7)
    if (current.strings.get(0x3DFD08) != 'closemenu' or close_registration is None or
            current.data[close_registration:close_registration+10] != bytes.fromhex('68e0cc18006808fd3d00') or
            recovered_by_name.get('closemenu', {}).get('function_va') != '000B0B20'):
        raise ValueError('Existing XML1 closemenu registration evidence changed')
    existing_facilities['closemenu'] = dict(xml1_name='native frontend closemenu command',
        xml1_entry='0018CCE0', evidence='Native registration18E2C7 -> menu manager virtual4C; XML2-INTEGRATION.md; no alias added')
    # Native XML1 Danger Room evaluates both success and failure and owns the
    # result transitions. Different XML2 script setters do not make that system
    # missing, and importing their result policy would violate the scope rule.
    danger_outcomes = {
        'setDangerRoomSuccess': (0xC5E00, 0xC5F0C, '808e281c000004', '000AD990'),
        'setDangerRoomFailed': (0xC3840, 0xC399F, '808f281c000008', '000AD980'),
    }
    for name, (entry, write, opcode, xml2_entry) in danger_outcomes.items():
        offset = current.va_offset(write)
        expected = bytes.fromhex(opcode)
        if (offset is None or current.data[offset:offset+len(expected)] != expected or
                recovered_by_name.get(name, {}).get('function_va') != xml2_entry):
            raise ValueError(f'Existing XML1 Danger Room outcome evidence changed: {name}')
        existing_facilities[name] = dict(xml1_name='native Danger Room outcome system',
            xml1_entry=f'{entry:08X}', evidence=f'Native outcome evaluation -> state transition{write:08X}; XML2-INTEGRATION.md; no alias added')
    # XML1 already queues mission/objective notifications in CMissionMgr and
    # consumes them in the HUD update. Keep that existing notification policy.
    mission_notice = any(row['name'] == '.?AVCMissionMgr@@' and any(
        table['va'] == '003CF084' and table['methods'][4:7] ==
        ['00085FD0', '00085FE0', '000844F0'] for table in row['vtables'])
        for row in current_types)
    notice_dispatch = current.va_offset(0x158C43)
    notice_clear = current.va_offset(0x158C75)
    if (not mission_notice or notice_dispatch is None or notice_clear is None or
            current.data[notice_dispatch:notice_dispatch+3] != bytes.fromhex('ff5720') or
            current.data[notice_clear:notice_clear+3] != bytes.fromhex('ff5214') or
            recovered_by_name.get('newMissionBriefing', {}).get('function_va') != '000AD360'):
        raise ValueError('Existing XML1 mission notification evidence changed')
    existing_facilities['newMissionBriefing'] = dict(xml1_name='native queued mission HUD notification',
        xml1_entry='00158BF7', evidence='CMissionMgr pending/text/clear -> HUD158C43, objectives_up sound; XML2-INTEGRATION.md; no alias added')
    # Despite its name, homingBeaconReward only formats saved-flag progress
    # and presents a popup. It neither changes collection state nor unlocks
    # anything. XML1 already supplies saved variables and popup messages;
    # importing an alternate notification policy is outside the user's scope.
    if (current_by_name.get('createPopupDialog', {}).get('function_va') != '00099300' or
            current_by_name.get('getGameVar', {}).get('function_va') != '00098BB0' or
            recovered_by_name.get('homingBeaconReward', {}).get('function_va') != '000B7800'):
        raise ValueError('Existing collectible progress notification evidence changed')
    if args.xml2_xbe:
        for address, expected in ((0x49CAB4, '40150b00'),
                                  (0xB7856, 'ff5258'),
                                  (0xB785B, '83fe040f8f8a000000'),
                                  (0xB78C8, 'e8932e1400'),
                                  (0xB78D3, 'ff5214'),
                                  (0xB78EB, 'ff520c')):
            offset = xml2.va_offset(address)
            if offset is None or xml2.data[offset:offset+len(bytes.fromhex(expected))] != bytes.fromhex(expected):
                raise ValueError('Collectible progress popup trace changed at '+hex(address))
    existing_facilities['homingBeaconReward'] = dict(
        xml1_name='native saved-variable progress and popup notification facilities',
        xml1_entry='00098BB0/00099300',
        evidence='XML2 B7800 reads flag count and presents CPopupDialog only; '
                 'XML1 CPopupDialog187AF0 already exists; no reward side effect or spelling alias added')
    # The Review frontend and its media menus already exist in XML1. Its four
    # original script entry points dispatch the native review menus; XML2's
    # generic reviewMenu spelling is not a missing gameplay system.
    review_entries = {'reviewLoadScreens': '00099200', 'reviewCinematics': '00099220',
                      'reviewComics': '00099240', 'reviewConcept': '00099260'}
    for name, entry in review_entries.items():
        if not any(row['name'] == name and row['function_va'] == entry for row in current_commands):
            raise ValueError('Existing XML1 Review facility evidence changed: '+name)
    if (current.strings.get(0x3D25E8) != 'openmenu review_cinematics' or
            recovered_by_name.get('reviewMenu', {}).get('function_va') != '000AD400'):
        raise ValueError('Existing XML1 Review menu dispatch evidence changed')
    existing_facilities['reviewMenu'] = dict(xml1_name='native Review frontend/media menus',
        xml1_entry='00099200', evidence='Native reviewLoadScreens/reviewCinematics/reviewComics/reviewConcept dispatch; XML2-INTEGRATION.md; no alias added')
    # XML1's loader already queries retained zone state and restores it when
    # present. Preserve that persistence policy; no second cache or XML2 alias.
    for address, expected in ((0x81DF2, 'e839120000'),
                              (0x83067, '8b8486b4000000'),
                              (0x8307D, '33c0'),
                              (0x80D98, '68bc390000')):
        offset = current.va_offset(address)
        code = bytes.fromhex(expected)
        if offset is None or current.data[offset:offset+len(code)] != code:
            raise ValueError('Existing XML1 retained-zone lookup evidence changed')
    if recovered_by_name.get('getZoneReset', {}).get('function_va') != '000B0400':
        raise ValueError('XML2 zone-reset command evidence changed')
    existing_facilities['getZoneReset'] = dict(xml1_name='native retained-zone state lookup',
        xml1_entry='00083030', evidence='CMap loader81DF2 queries cached zone, restores it at81E15; save80D00; XML2-INTEGRATION.md; no alias added')
    # The native mainmenuexit console command already creates the confirmation
    # dialog, including its mainMenuExit() acceptance action. Presence is enough:
    # preserve XML1's conditions and layout; do not import an alternate dialog.
    for address, expected in ((0x18E38D, '6860d51800'),
                              (0x18E392, '6880063e00'),
                              (0x18D646, '68ec053e00'),
                              (0x18D664, 'ff5250')):
        offset = current.va_offset(address)
        code = bytes.fromhex(expected)
        if offset is None or current.data[offset:offset+len(code)] != code:
            raise ValueError('Existing XML1 main-menu exit dialog evidence changed')
    if (current.strings.get(0x3E0680) != 'mainmenuexit' or
            current.strings.get(0x3E05EC) != 'mainMenuExit()' or
            recovered_by_name.get('mainMenuExitDialog', {}).get('function_va') != '000AEB90'):
        raise ValueError('Main-menu exit command evidence changed')
    existing_facilities['mainMenuExitDialog'] = dict(xml1_name='native main-menu exit confirmation dialog',
        xml1_entry='0018D560', evidence='Command registration18E38D, acceptance action18D646, popup display18D664; XML2-INTEGRATION.md; no alias added')
    # XML1 Danger Room's native exit handler already performs its cleanup and
    # leaves the menu through the frontend close path. Do not import XML2's
    # online branches or add a second close implementation/spelling alias.
    danger_exit = any(row['name'] == '.?AVCMenuDangerRoom@@' and any(
        table['va'] == '003DEB9C' and table['methods'][11] == '00170C20'
        for table in row['vtables']) for row in current_types)
    if not danger_exit or recovered_by_name.get('closeDangerRoom', {}).get('function_va') != '000AD910':
        raise ValueError('Existing XML1 Danger Room exit entry changed')
    for address, expected in ((0x170D82, '6858e93d00'),
                              (0x170DD3, 'ff524c'),
                              (0x3E0110, 'd04f1800'),
                              (0x18508F, 'e8acfaffff'),
                              (0x184915, 'c786080c000000000000')):
        offset = current.va_offset(address)
        code = bytes.fromhex(expected)
        if offset is None or current.data[offset:offset+len(code)] != code:
            raise ValueError('Existing XML1 Danger Room close path changed')
    if current.strings.get(0x3DE958) != 'endsidemission':
        raise ValueError('Existing Danger Room mission exit command changed')
    existing_facilities['closeDangerRoom'] = dict(xml1_name='native Danger Room close/cleanup path',
        xml1_entry='00170C20', evidence='Danger Room virtual2C -> frontend close184FD0 -> teardown184890 clears active menu; XML2-INTEGRATION.md; no alias added')
    # The native new-game command already initializes the campaign and starts
    # XML1's opening mission. XML2's initial roster/difficulty policy is not a
    # missing system and must not replace it.
    for address, expected in ((0x18E217, '68b0d01800'),
                              (0x18D0FD, 'e88efeffff'),
                              (0x18D118, '68d0053e00'),
                              (0x18D11F, 'ff5214')):
        offset = current.va_offset(address)
        code = bytes.fromhex(expected)
        if offset is None or current.data[offset:offset+len(code)] != code:
            raise ValueError('Existing XML1 first-mission startup evidence changed')
    if (current.strings.get(0x3E05D0) != 'beginmission alison' or
            recovered_by_name.get('startFirstMission', {}).get('function_va') != '000B7910'):
        raise ValueError('First-mission command evidence changed')
    existing_facilities['startFirstMission'] = dict(xml1_name='native new-game and first-mission startup',
        xml1_entry='0018D0B0', evidence='Registered at18E217; campaign reset18CF90 then beginmission alison; XML2-INTEGRATION.md; no alias added')
    # XML1 already routes insufficient storage to its localized popup. Follow
    # the actual error-code table: earlier candidates 1/4/31 hit the default,
    # but the capacity consumer emits code3, which selects message3300.
    for address, expected in ((0xA7EDD, '84db0f8599000000'),
                              (0xA7F67, '6a038bc8ff5270'),
                              (0xA7F6E, '6a01508bcee878d7ffff'),
                              (0x11F13F, '01'),
                              (0x11F0CC, '74ee1100'),
                              (0x11EE74, 'bee40c0000'),
                              (0xA5898, 'ff520c'),
                              (0xA58C7, 'ff5250')):
        offset = current.va_offset(address)
        code = bytes.fromhex(expected)
        if offset is None or current.data[offset:offset+len(code)] != code:
            raise ValueError('Existing XML1 insufficient-storage warning changed')
    if recovered_by_name.get('saveloadNoSpaceWarning', {}).get('function_va') != '000ADCA0':
        raise ValueError('XML2 insufficient-storage descriptor changed')
    existing_facilities['saveloadNoSpaceWarning'] = dict(
        xml1_name='native insufficient-storage warning', xml1_entry='000A7DE0',
        evidence='Capacity rejection -> error3 -> text3300 -> A56F0 popup; XML2-INTEGRATION.md; no alias added')
    # XML1 already owns automatic stat/power spending. Presence of that system
    # is sufficient under the user's rule; do not import XML2 preferences or
    # compare when/how often the two games invoke their allocators.
    if recovered_by_name.get('setAutoSpend', {}).get('function_va') != '000AF2A0':
        raise ValueError('XML2 auto-spending command evidence changed')
    for address, expected in ((0x57334, '8a44242084c05d5b7416'),
                              (0x57341, 'e89a810500'),
                              (0x5734F, 'e8fc15ffff')):
        offset = current.va_offset(address)
        code = bytes.fromhex(expected)
        if offset is None or current.data[offset:offset+len(code)] != code:
            raise ValueError('Existing XML1 automatic stat/power spending evidence changed')
    existing_facilities['setAutoSpend'] = dict(xml1_name='native automatic stat/power allocation',
        xml1_entry='000AF4E0 / 00048950',
        evidence='Native57250 auto-allocation tail57334..57354 calls existing allocators; XML2-INTEGRATION.md; no preference/parity changes or alias added')
    # SetGameType is not purely an online service. Its session-state byte also
    # selects Story(1)/Danger Room(2). XML1 already has both local facilities;
    # keep them instead of adding a second game-mode selector or changing them.
    if (current_by_name.get('dangerRoomMenu', {}).get('function_va') != '000992D0' or
            current.strings.get(0x3D2648) != 'openmenu danger_room' or
            recovered_by_name.get('SetGameType', {}).get('function_va') != '000AFDC0'):
        raise ValueError('Existing local game-mode facility evidence changed')
    if args.xml2_xbe:
        for address, expected in ((0x20DA25, '8a4c2404888870070000'),
                                  (0x201F29, '80b87007000001'),
                                  (0x201F49, '80b87007000002')):
            offset = xml2.va_offset(address)
            code = bytes.fromhex(expected)
            if offset is None or xml2.data[offset:offset+len(code)] != code:
                raise ValueError('Story/Danger Room selector evidence changed')
        if (xml2.strings.get(0x4968A8) != 'runscript startFirstMission()' or
                xml2.strings.get(0x49C7BC) != 'set drmode 1;openmenu danger_room'):
            raise ValueError('Local game-mode dispatch evidence changed')
    existing_facilities['SetGameType'] = dict(xml1_name='native Story and Danger Room selection',
        xml1_entry='0018D0B0 / 000992D0',
        evidence='XML2 AFDC0 ->20DA20; local201F29/201F49 select existing game modes; XML1 newgame/Danger Room preserved; XML2-INTEGRATION.md; no alias added')
    # Explicit user scope decision (2026-09-30): omit console/online services;
    # retain gameplay scripting, local multiplayer, saves and character systems.
    # Keep ambiguous frontend names pending instead of guessing their purpose.
    excluded_services = {
        'AnswerFriendRequest', 'AnswerGameInvite', 'bootToDash', 'CancelGameInvite',
        'InviteConfirmation', 'JoinFriendsGame', 'LaunchFeedbackMenu',
        'LaunchFriendReqVoiceMenu', 'LaunchGameInviteVoiceMenu', 'LaunchReceiveVoiceMenu',
        'Logout', 'LogoutNoExit', 'RemoveFriend', 'SendFeedback', 'SendFriendRequest',
        'SendFriendVoiceAttachmentPrompt', 'SendGameInvite', 'SendVoiceAttachmentPrompt',
        'SetNumInvites', 'titleUpdate',
    }
    if not excluded_services <= set(recovered_by_name):
        raise ValueError('Excluded console/online command inventory changed')
    # These ambiguous names were traced into CNetPlayManager (singleton219670,
    # constructor2190C0 installs vtable4B47A4), not local audio/player settings.
    # ReNegotiate reaches that manager through212A70; ToggleMute exchanges user
    # identities with the online mute service; KickPlayer invokes its peer path.
    traced_online = {'ReNegotiate': '000AEA80', 'ToggleMute': '000AF760',
                     'KickPlayer': '000AEB30', 'openWaitingDialog': '000AEBB0',
                     'cancelWaitingDialog': '000AEC80',
                     'confirmKickPlayerDialog': '000AED40', 'kickPlayerDialog': '000B1210',
                     'SetMaxPlayers': '000B00D0',
                     'SetPrefGameType': '000AEAB0', 'SetPrefDifficulty': '000AEAE0',
                     'setupHost': '000AEB10'}
    if args.xml2_xbe:
        net_type = any(row['name'] == '.?AVCNetPlayManager@@' and any(
            table['va'] == '004B47A4' for table in row['vtables'])
            for row in recovered_all_types)
        if not net_type or any(recovered_by_name.get(name, {}).get('function_va') != entry
                               for name, entry in traced_online.items()):
            raise ValueError('Traced online-service evidence changed')
        # SetMaxPlayers writes the network-session capacity, not the local
        # controller roster. The session advertisement consumes that same byte
        # to compute available slots before calling its publication routine.
        for address, expected in (
                (0xB00F5, '88986d070000'),
                (0xB0117, '88986d070000'),
                (0x21CC73, '8a986d070000'),
                (0x21CC8E, '894e04')):
            offset = xml2.va_offset(address)
            code = bytes.fromhex(expected)
            if offset is None or xml2.data[offset:offset+len(code)] != code:
                raise ValueError('Network-session player capacity evidence changed')
        # These preferences are search filters, distinct from CGame difficulty.
        # CMenuGamesList reads both getters and forwards their values to the
        # network game-search builder21F300, including the Any sentinel.
        for address, expected in (
                (0x20FCA4, '898180380000'),
                (0x20FCD4, '898184380000'),
                (0x1C5539, 'e882a70400'),
                (0x1C554A, 'e8a1a70400'),
                (0x1C55CB, 'e8309d0500')):
            offset = xml2.va_offset(address)
            code = bytes.fromhex(expected)
            if offset is None or xml2.data[offset:offset+len(code)] != code:
                raise ValueError('Online game-search preference evidence changed')
        # setuphost resolves to the network host setup command, which publishes
        # the network session advertisement through the same21CC20 consumer.
        # This is not local player/controller setup.
        for address, expected in ((0x202B69, '68b0fd1f00'),
                                  (0x202B6E, '686cc84900'),
                                  (0x1FFDC3, 'e8782a0100'),
                                  (0x212843, 'e8d8a30000')):
            offset = xml2.va_offset(address)
            code = bytes.fromhex(expected)
            if offset is None or xml2.data[offset:offset+len(code)] != code:
                raise ValueError('Network host setup command evidence changed')
        excluded_services.update(traced_online)
    extension_source = args.script_extensions.read_text()
    extension_table = extension_source.split('extensions[]={', 1)[1].split('};', 1)[0]
    extension_names = set(re.findall(r'\{\s*"([^"]+)"\s*,', extension_table))
    if not extension_names:
        raise ValueError('No registered script extensions found; refusing to report an inaccurate pending list')
    # Classify only absent names. An exact terminal zero-return
    # body proves a retail stub, not the behavior its public name might imply.
    # Keep it pending: accepting the command name still needs an adapter.
    retail_stubs = []
    if args.xml2_xbe:
        for row in recovered_commands:
            if row['name'] in names:
                continue
            offset = xml2.va_offset(int(row['function_va'], 16))
            if offset is not None and xml2.data[offset:offset + 3] in (b'\x33\xc0\xc3', b'\x31\xc0\xc3'):
                retail_stubs.append(dict(row, evidence='Exact xor eax,eax; ret body in original XML2 image'))
    retail_stub_names = {row['name'] for row in retail_stubs}
    type_names = {row['name'] for row in current_types}
    literals = set(current.strings.values())
    # Only known runtime factory wiring counts as an added implementation.
    # A name in an asset, fixture, RTTI record or lowering tool does not.
    root = Path(__file__).resolve().parents[1]
    event_factories = {
        'ce_filter_event': ('src/engine/combat/raven_filter_guest.c', 'scripts/guard-filter-event.py', 'xml1_filter_event_construct'),
        'ce_lightning_data': ('src/engine/combat/raven_missing_area_handlers.inc', 'scripts/guard-bishop-drain.py', 'xml1_lightning_event_construct'),
        'ce_effect_sound': ('src/audio/raven_effect_sound_guest.c', 'scripts/guard-raven-effect-sound.py', 'raven_effect_sound_construct'),
        'ce_random_event': ('src/engine/scripting/raven_random_event.inc', 'scripts/guard-filter-event.py', 'xml1_filter_event_construct'),
        'ce_victim_set': ('src/engine/powers/raven_victim_set.inc', 'scripts/guard-bishop-drain.py', 'xml1_lightning_event_construct'),
        'ce_set_combat_node': ('src/engine/scripting/raven_set_combat_node.inc', 'scripts/guard-bishop-drain.py', 'xml1_lightning_event_construct'),
        'ce_remove_powerups': ('src/engine/powers/raven_remove_powerups.inc', 'scripts/guard-bishop-drain.py', 'xml1_lightning_event_construct'),
    }
    # Different entry spellings do not make an existing gameplay system new.
    # No compatibility aliases or event factories are added by exclusions.
    existing_event_systems = {
        'ce_heal': ('restoreHealth', '0009BD50', 'native actor healing 0003A7C0'),
        'ce_atk_self': ('damage', '0009FD10', 'explicit recipient damage 0009FE22 -> entity virtual A8; source/recipient may be identical'),
    }
    for event, (command, entry, consumer) in existing_event_systems.items():
        if current_by_name.get(command, {}).get('function_va') != entry:
            raise ValueError(f'Existing event system evidence changed: {event}/{command}')
    existing_event_types = {
        'ce_setup_ally_resurrect': ('ce_resurrect', '.?AVCCEResurrect@@', '003D7130', '000D83D0'),
        'ce_atk_blast_objects': ('ce_atk_blast', '.?AVCCEAtkBlast@@', '003D6B68', '000CFDC0'),
        'ce_spawn_minion': ('ce_spawn_actor', '.?AVCCESpawnActor@@', '003D6F78', '000D3270'),
        'ce_atk_spawn_sentry': ('ce_atk_spawn', '.?AVCCEAtkSpawn@@', '003D5F48', '000CFDC0'),
    }
    for event, (counterpart, type_name, vtable, execute) in existing_event_types.items():
        # Presence, not semantic equivalence: these systems already belong to
        # XML1. Do not import XML2's target-selection/placement variations.
        found = any(row['name'] == type_name and any(
            table['va'] == vtable and len(table['methods']) > 1 and
            table['methods'][1] == execute for table in row['vtables'])
            for row in current_types)
        if counterpart not in literals or not found:
            raise ValueError(f'Existing event type evidence changed: {event}/{counterpart}')
    if not any(row['name'] == '.?AVCScanTurretEntity@@' and any(
            table['va'] == '003D323C' for table in row['vtables']) for row in current_types):
        raise ValueError('Existing XML1 turret entity evidence changed')
    if current.strings.get(0x3D3D10) != 'minion' or 0xB04B4 not in current.refs(0x3D3D10):
        raise ValueError('Existing XML1 minion classification evidence changed')
    events = []
    if args.xml2_xbe:
        for name in sorted({s for s in xml2.strings.values() if re.fullmatch(r'ce_[a-z0-9_]+', s)}):
            row = dict(name=name, status='already-present/skipped' if name in literals else 'pending trace/implementation')
            if name not in literals and name in existing_event_systems:
                command, entry, consumer = existing_event_systems[name]
                row.update(status=f'existing XML1 {command} system; skipped, no event alias added',
                    evidence=f'{command} {entry} -> {consumer}; XML2-INTEGRATION.md')
            if name not in literals and name in existing_event_types:
                counterpart, type_name, vtable, execute = existing_event_types[name]
                row.update(status=f'existing XML1 {counterpart} system; skipped, no event alias added',
                    evidence=f'{type_name} vtable {vtable}, execute {execute}; XML2-INTEGRATION.md')
            if name not in literals and name in event_factories:
                source, guard, function = event_factories[name]
                if name not in (root/source).read_text() or function not in (root/guard).read_text():
                    raise ValueError(f'Stale event factory evidence: {name}')
                row.update(status='implemented factory; validation recorded separately', source=source, guard=guard, factory=function)
            events.append(row)
    powers = []
    for source in sorted((args.pc_assets / 'Data/powerstyles').glob('*')):
        if source.suffix.lower() != '.xmlb':
            continue
        decoded = args.out / 'decoded' / (source.stem + '.xml')
        subprocess.run([str(args.decoder.resolve()), 'decode', str(source), str(decoded)], check=True)
        nodes = binary_nodes(source.read_bytes())
        requirements = {}
        for field in ('handler', 'class', 'type', 'attribute', 'affect_type', 'action', 'damagetype'):
            values = sorted({value for _, attrs in nodes for key, value in attrs if key == field})
            requirements[field] = [dict(name=value, literal_in_xml1=value in literals) for value in values]
        powers.append(dict(path=str(source.relative_to(args.pc_assets)),
                           sha256=hashlib.sha256(source.read_bytes()).hexdigest(),
                           requirements=requirements,
                           damage_modifiers=sorted({value for tag, attrs in nodes if tag.lower() == 'damagemod' for key, value in attrs if key == 'name'}),
                           trigger_names=sorted({value for tag, attrs in nodes if tag == 'trigger' for key, value in attrs if key == 'name'})))
    result = dict(xml1_sha256=hashlib.sha256(current.data).hexdigest(),
                  xml2_sha256=xml2_sha256,
                  xml1_commands=current_commands,
                  xml2_commands=recovered_commands,
                  added_commands=[r for r in recovered_commands if r['name'] not in names],
                  implemented_extension_names=sorted(extension_names),
                  existing_facilities_skipped=existing_facilities,
                  excluded_console_online_commands=[r for r in recovered_commands if r['name'] in excluded_services],
                  pending_commands=[r for r in recovered_commands if r['name'] not in names | extension_names | set(existing_facilities) | excluded_services],
                  retail_stub_commands=retail_stubs,
                  pending_retail_stub_commands=[r for r in retail_stubs if r['name'] not in extension_names],
                  added_candidate_types=[r for r in recovered_types if r['name'] not in type_names],
                  all_added_types=([r for r in recovered_all_types if r['name'] not in type_names]
                                   if recovered_all_types is not None else None),
                  powerstyles=powers,
                  combat_events=events,
                  limitation='Presence inventory only. Skip existing XML1 functionality without semantic/signature comparison. Validate only added functionality programmatically.')
    (args.out / 'inventory.json').write_text(json.dumps(result, indent=2) + '\n')
    if args.command_report:
        lines = ['# XML2 script command inventory', '',
                 'Generated by `scripts/audit-xml2-integration.py` from the original images and current extension table.', '',
                 f'XML1 image SHA256: `{result["xml1_sha256"]}`.  ',
                 f'XML2 image SHA256: `{result["xml2_sha256"]}`.', '',
                 'Existing XML1 names are skipped without implementation, signature or semantic comparison. '
                 'Registered additions require their separately recorded programmatic evidence; registration alone does not prove behavior. '
                 'Console/online services are excluded by explicit user direction (2026-09-30); ambiguous frontend names remain pending until classified. '
                 'Pending names remain unimplemented/unclassified. '
                 'Exact retail zero-return stubs are labeled separately; only unregistered names still need command adapters, and no gameplay implementation is inferred from their names. '
                 'This is the scripting inventory, not proof of combat, powerup, affecter or damage-modifier completeness.', '',
                 '| XML2 command | Status | XML2 entry |', '|---|---|---|']
        for row in sorted(recovered_commands, key=lambda r: r['name'].lower()):
            status = ('Already in XML1; skipped' if row['name'] in names else
                      'Out of scope: console/online service (user direction)' if row['name'] in excluded_services else
                      f'Existing XML1 `{existing_facilities[row["name"]]["xml1_name"]}` facility; skipped, no spelling alias added' if row['name'] in existing_facilities else
                      'Implemented retail no-op adapter; see validation evidence' if row['name'] in extension_names & retail_stub_names else
                      'Implemented extension; see validation evidence' if row['name'] in extension_names else
                      'Retail zero-return stub verified; command adapter pending' if row['name'] in retail_stub_names else
                      'Pending implementation/classification')
            lines.append(f'| `{row["name"]}` | {status} | `{row["function_va"]}` |')
        args.command_report.write_text('\n'.join(lines) + '\n', encoding='utf-8')
    if args.event_report:
        if not events:
            raise ValueError('Event report requires the original XML2 image')
        lines = ['# XML2 combat-event inventory', '',
                 'Generated by `scripts/audit-xml2-integration.py`. Existing XML1 event names are skipped without semantic comparison. '
                 'Absent names need native factory/consumer tracing; names alone do not establish behavior or equivalence. '
                 'Implemented factories are supported by source and generation guards, not by asset rewrites. '
                 'Validation evidence remains in XML2-INTEGRATION.md and the relevant tests.', '',
                 f'XML1 SHA256: `{result["xml1_sha256"]}`.  ',
                 f'XML2 SHA256: `{result["xml2_sha256"]}`.', '',
                 '| Event | Status | Runtime source / factory guard |', '|---|---|---|']
        for row in events:
            evidence = f'`{row["source"]}` / `{row["guard"]}`' if 'source' in row else row.get('evidence', '')
            lines.append(f'| `{row["name"]}` | {row["status"]} | {evidence} |')
        args.event_report.write_text('\n'.join(lines) + '\n', encoding='utf-8')
    print(f'{len(current_commands)} current XML1 commands; {len(result["added_commands"])} XML2 additions; {len(powers)} PC powerstyles')
    for row in powers:
        if any(c in row['path'].lower() for c in ('scarletwitch', 'sunfire', 'juggernaut')):
            print(row['path'], json.dumps(row['requirements']))


if __name__ == '__main__':
    main()
