"""Run migrated guards against individually relocated real guest functions.

Requires local generated game source. No game process or host input is used.
"""
from pathlib import Path
import sys
import tempfile
import unittest
import ast
import re
from unittest.mock import patch

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'scripts'))
from recomp_source import RecompSources, find_function, rename_identifiers


class GuardRelocationTest(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.index = RecompSources(ROOT / 'src/recomp/gen')
        if not cls.index.functions:
            raise unittest.SkipTest('Local generated guest source is required')

    def check_guard(self, name, labels, arguments=()):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            dest = root / 'src/recomp/gen/known'
            dest.mkdir(parents=True)
            (dest.parent / 'recomp_types.h').write_bytes((ROOT / 'src/recomp/gen/recomp_types.h').read_bytes())
            owners = {}
            for label in labels:
                if label in self.index.labels:
                    path = self.index.label_path(label)
                    owners[self.index.labels[label][0][1]] = path
                else:
                    owners[label] = self.index.path(label)
            for address, path in owners.items():
                match = find_function(path.read_text(), address)
                # Wrappers without guest entry labels retain their address names.
                names = {match['name']: f'known_{address:08X}'} if f'loc_{address:08X}:' in match[0] else {}
                body = rename_identifiers(match[0], names)
                includes='\n'.join(re.findall(r'^#include .+$',path.read_text(),re.M))+'\n'
                (dest / f'function_{address:08X}.c').write_text(
                    includes + body + '\n')
            def run():
                for script in ([name] if isinstance(name, str) else name):
                    source = (ROOT / 'scripts' / script).read_text()
                    context = {'__file__': str(root / 'scripts' / script), '__name__': '__main__'}
                    with patch.object(sys, 'argv', [script, *arguments]):
                        exec(compile(source, script, 'exec'), context)
            run()
            first = {p: p.read_bytes() for p in dest.glob('*.c')}
            run()
            self.assertTrue(all(p.read_bytes() == data for p, data in first.items()))
            self.assertEqual(set(RecompSources(root / 'src/recomp/gen').functions), set(owners))

    def test_frame_limit(self):
        self.check_guard('guard-frame-limit.py', [0x11178])

    def test_shared_event_factory_order(self):
        self.check_guard(['guard-filter-event.py', 'guard-raven-effect-sound.py'], [0xE6C6D])

    def test_character_limits(self):
        managers = [address for address in self.index.functions
                    if 0x54150 <= address <= 0x57090]
        self.assertTrue(managers)
        self.check_guard('guard-character-limits.py', managers + [
            0xAFD70, 0xB1640, 0xB0D30, 0x178770, 0x164140,
            0x164240, 0x16B970, 0x8C2F0, 0xB0EA0,
        ])

    def test_native_damage(self):
        tree = ast.parse((ROOT / 'scripts/guard-raven-damage.py').read_text())
        hooks = next(ast.literal_eval(node.value) for node in tree.body
                     if isinstance(node, ast.Assign)
                     and any(isinstance(t, ast.Name) and t.id == 'hooks' for t in node.targets))
        labels = [int(label, 16) for entries in hooks.values() for label in entries]
        self.check_guard('guard-raven-damage.py', labels + [
            0x5C240, 0x5BA90, 0x46270, 0x45260, 0x45E20, 0x70FB0,
        ])

    def test_pc_menu(self):
        self.check_guard('guard-pc-menu.py', [
            0x11C680, 0x145770, 0x340E00, 0x344D90, 0x3677B0,
            0x144910, 0x144A00, 0x1B68B0, 0x173340, 0x173890,
            0x174860, 0x177940, 0x17CDE0, 0x17CEB0, 0x17D4F0,
            0x17D750, 0x18A7A0, 0x18AB00, 0x18AF60, 0x184FD0,
            0x4BEF0, 0x14F730, 0x14FBE0, 0x152970, 0x153080,
            0x1533B0, 0x1535E0,
        ])

    def test_generated_diagnostics(self):
        self.check_guard('guard-generated.py', [
            0x35FDE0, 0x35FC00, 0x30BBB0, 0x30FF50, 0x3072A0,
            0x30BDA0, 0x32B8A0,
        ])

    def test_native_energy(self):
        self.check_guard('guard-raven-energy.py', [
            0xD2190, 0xD258F, 0xD296E, 0xD221D, 0xCF854, 0xCF6E9,
            0xCF356, 0xCDC3A, 0xCF610, 0xCFBF0, 0xCEDD0, 0xCFE50,
            0xCFCA9, 0xCF689, 0xCF640, 0xCDEE1, 0xD0460, 0xD0640,
            0xD2920, 0xE1A6D, 0xE1DDC, 0xE1A8F, 0xE1AC6, 0xE41F9,
            0x43B83, 0xE77C9, 0xE2220, 0xE2610, 0xEAF10, 0xECEA4,
        ])

    def test_powerup_metadata(self):
        self.check_guard('guard-raven-powerup-metadata.py', [
            0x94FE0, 0x43FA0, 0x45260, 0x92220, 0x953A0, 0x955C0,
            0x96220, 0x96370, 0x964A0, 0xCEF40, 0x2A400, 0x264B0,
            0x2A7B0, 0x2A730, 0x2AA90, 0x2AF30, 0x1C530, 0x2B270,
            0x5CCA0, 0x5C020, 0x931D0, 0x93BA0, 0x464E6, 0x299B0,
        ])

    def test_auto_equip(self):
        self.check_guard('guard-auto-equip.py', [0x7DB50])

    def test_danger_room(self):
        self.check_guard('guard-danger-room-unlock.py', [0x17179E, 0x170F6A, 0x16FA1D])

    def test_campaign_records(self):
        self.check_guard('guard-campaign-extra.py', [0x7F760, 0x6EB00, 0x6F940, 0x73616, 0x80640, 0x82A77])

    def test_character_race(self):
        self.check_guard('guard-character-race.py', [0x55BB6, 0xB1640, 0xB2E37])

    def test_character_filter(self):
        self.check_guard('guard-character-filter.py', [0xAFD70, 0xB1640])

    def test_silent_action(self):
        self.check_guard('guard-silent-action.py', [0x28420, 0x27AE0])

    def test_removal_health(self):
        self.check_guard('guard-removal-health.py', [0xE1A20])

    def test_parser_text(self):
        self.check_guard('guard-parser-text-arena.py',
                         [0x199DB0, 0x199DD0, 0x199E40, 0x19A060], ('--apply',))

    def test_extraction_state(self):
        self.check_guard('guard-extraction-state.py', [0x81031,0x7053B,0x706B1,0x18CF90])

    def test_actor_transform(self):
        self.check_guard('guard-actor-transform.py', [0x2E6F0,0x3243A])

    def test_leader_event(self):
        self.check_guard('guard-leader-event.py',
                         [0x2E6F0,0x3243A,0x83370,0x830DA,0x6C7D0,0x2F000,0x80DDB,0x831D6])

    def test_handler_trace(self):
        self.check_guard('guard-handler-live-trace.py', [0x9DE6A])

    def test_actor_scale(self):
        self.check_guard('guard-actor-scale.py', [0x2E6F0,0x3243A,0x43689,0x2AF85])

    def test_operand_trace(self):
        name='guard-raven-operand-trace.py'
        self.check_guard(name,self.hook_addresses(name)+[0xD0460])

    def test_vitality(self):
        self.check_guard('guard-vitality-bonus.py',
                         [0x472F0,0x48EF0,0x490F0,0x49003,0x47F9A,0x492D7,
                          0x54E01,0xAF0F0,0xAFBAD,0xAFC7B])

    def test_power_bindings(self):
        self.check_guard('guard-raven-power-bindings.py',
                         [0xED724,0x15EB6B,0xE7161,0xEA31C,0x164655,0x35C3A,0x54A10,0xED587])

    def test_stash_lifecycle(self):
        self.check_guard('guard-stash-lifecycle.py',
                         [0x7F82F,0x7E2FC,0x7DF80,0x7E7F0,0x7E9B0,0x7E8E0,0x7EAA0])

    def test_stash_menu(self):
        self.check_guard('guard-stash-menu.py',
                         [0x161450,0x1720D8,0x172720,0x17B289,0x17B439,
                          0x17ADA0,0x17AB70,0x17C221,0x17CAA2])

    def test_progress(self):
        self.check_guard('guard-progress-extension.py',
                         [0x8BE30,0x8C042,0x8C065,0x8C349,0x8C820,0x8C930,0x8C5F0,0x11FE10,0x11FF6A,0x120090])

    def test_gameplay_command(self):
        self.check_guard('guard-native-gameplay-command.py', [0x11C715])

    def test_vertex_state(self):
        self.check_guard('guard-vertex-state.py', [0x35D990])

    def test_saved_stats(self):
        self.check_guard('guard-saved-stats.py', [0xA5230,0xA5380,0xA589B,0xA5420,0x18D102])

    def test_ai_modes(self):
        self.check_guard('guard-ai-modes.py',
                         [0x1093D0,0x109300,0x10A468,0x10C8D0,0x10EF51,0x105850,
                          0x105BE0,0x10B9F0,0x10ED7F,0x10EEAB,0xD62F1,0x462EB,0x10B3E9,0xEE8E1])

    def test_xmlb(self):
        self.check_guard('guard-xmlb.py', [0x14A3EE])

    def test_packages(self):
        self.check_guard('guard-package-loading.py',
                         [0x121A60,0x123AEF,0x1210E0,0x149B19,0x1277B5,0x11F504,0x11F6D4,0x120504])

    def test_script_registration(self):
        self.check_guard('guard-script-extensions.py', [0x99B66,0xCAD99])

    def test_newgame_plus(self):
        self.check_guard('guard-newgame-plus.py',
                         [0x11C680,0x18DAED,0x18D122,0x18D134,0x54A10,0xC0700,
                          0x7E2F0,0x54F10,0x18CF90,0x18CFF0,0x18CFFC,0x18D008,
                          0x18D092,0x18D0B0,0x18D102,0x18DA90,0x18DAF9,0x18DC9E])

    def test_secondary_victim(self):
        self.check_guard('guard-raven-secondary-victim.py',
                         [0x2B720,0x2C8C0,0x44630,0x46B80,0x46F10,0x5A090,0x7BEF0,
                          0x92220,0x93BE0,0x96810,0x96870,0x96910,0x96960,0x97650,
                          0x97EB0,0xCEEE0,0xCF250,0xCF6B0,0xCFD00,0xD25C0])

    def test_talent_strip(self):
        self.check_guard('guard-talent-slot-layout.py', [0x153080, 0x1535E0, 0x18AF60, 0x169200])

    def hook_addresses(self, name):
        tree = ast.parse((ROOT / 'scripts' / name).read_text())
        assignment = next(node for node in tree.body if isinstance(node, ast.Assign) and
                          any(isinstance(t, ast.Name) and t.id == 'hooks' for t in node.targets))
        hooks = ast.literal_eval(assignment.value)
        return [int(address,16) for group in hooks.values() for address in group]

    def test_loop_sound(self):
        name = 'guard-raven-loop-sound.py'
        self.check_guard(name, self.hook_addresses(name) + [0x43B83])

    def test_bishop_contacts(self):
        name = 'guard-bishop-drain.py'
        self.check_guard(name, self.hook_addresses(name))

    def test_effect_sound(self):
        self.check_guard('guard-raven-effect-sound.py', [0xE6C6D])

    def test_filter_factory(self):
        self.check_guard('guard-filter-event.py', [0xE6C6D])


if __name__ == '__main__':
    unittest.main()
