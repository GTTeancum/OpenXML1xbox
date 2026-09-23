"""Preflight must distinguish declared values from verified runtime behavior."""
from pathlib import Path
from runpy import run_path
import sys
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT/'scripts'))
analyze = run_path(str(ROOT/'scripts/audit-xml2-character.py'))['analyze']


class CharacterRequirementsTests(unittest.TestCase):
    def test_affecters_preserve_scope_filters_and_classless_powerups(self):
        fields = [('attribute', 'damage'), ('affect_type', 'scale'),
                  ('level', '%fire_damage'), ('scope_damage', 'dmg_fire'),
                  ('scope_node', 'one'), ('scope_node', 'two')]
        report = analyze({'talents.xmlb': [
            ('powerup', [('life', '-1')]), ('affecter', fields),
            ('affecter', [('attribute', 'resist_fire'), ('level', '0.1')]),
        ]})
        self.assertEqual(report['powerups'][0]['attributes'], [('life', '-1')])
        self.assertEqual(report['affecters'][0]['attributes'], fields)
        self.assertEqual(report['affecter_attributes'], ['damage', 'resist_fire'])
        self.assertEqual(report['references'][0]['context'], 'behavior')
        self.assertEqual(report['undeclared_value_symbols'], ['fire_damage'])

    def test_shared_requirement_and_duplicate_attributes_are_not_lost(self):
        report = analyze({'data/talents/test.xmlb': [
            ('talents', []),
            ('talent', [('name', 'blast'), ('power', 'power1')]),
            ('talentvalue', [('name', 'blast_dmg'), ('level', '1'), ('value', '11 15')]),
            ('talentvalue', [('name', 'blast_dmg'), ('level', '20'), ('value', '195 217')]),
            ('level', [('count', '20'), ('description', '%blast_dmg damage; ^100% bonus')]),
            ('require', [('category', 'skill'), ('item', 'shared_flight'), ('level', '1')]),
        ], 'data/powerstyles/test.xmlb': [
            ('trigger', [('damage', '%blast_dmg'), ('damage', '%missing')])
        ]})
        self.assertEqual(len(report['value_definitions']['blast_dmg']), 2)
        self.assertEqual(len(report['references']), 3)
        self.assertEqual(report['undeclared_value_symbols'], ['missing'])
        self.assertEqual(report['external_skill_requirements'][0]['item'], 'shared_flight')
        self.assertEqual(report['talents'][0]['levels'][0]['attributes'][0], ('count', '20'))

    def test_native_name_limit_and_multiple_owners(self):
        rows = []
        for owner in ('one', 'two'):
            rows.extend([('talent', [('name', owner)]),
                         ('talentvalue', [('name', 'a'*20), ('level', '1'), ('value', '1')])])
        report = analyze({'talents.xmlb': rows})
        self.assertEqual(report['rejected_native_value_names'], ['a'*20])
        self.assertEqual(set(report['multiply_owned_values']), {'a'*20})

    def test_language_variant_cannot_hide_missing_declaration(self):
        report = analyze({
            'talents.xmlb': [('talentvalue', [('name', 'power'), ('value', '1')])],
            'powerstyle.engb': [('trigger', [('damage', '%power')])],
        })
        self.assertTrue(report['references'][0]['declared_in_fixture'])
        self.assertFalse(report['references'][0]['declared_in_variant'])
        self.assertEqual(report['undeclared_values_by_variant']['.engb'], ['power'])


if __name__ == '__main__':
    unittest.main()
