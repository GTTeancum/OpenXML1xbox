"""Address lookup must survive chunk moves and descriptive function names."""
from pathlib import Path
import sys
import tempfile
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'scripts'))
from recomp_source import RecompSources, find_function


class SourceLookupTest(unittest.TestCase):
    def test_moved_and_named_function(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            path = root / 'engine/progression/sources.c'
            path.parent.mkdir(parents=True)
            source = ('void TalentSource_Find(void)\n{\n'
                      '    /* A hook may precede the entry label. */\n'
                      'loc_00012340: ;\n    if (eax) { eax = 0; }\nloc_00012344: ;\n}\n')
            path.write_text(source)
            index = RecompSources(root)
            self.assertEqual(index.path(0x12340), path)
            self.assertEqual(index.label_path(0x12344), path)
            self.assertEqual(index.labels[0x12344][0][1], 0x12340)
            self.assertEqual(find_function(source, 0x12340)['name'], 'TalentSource_Find')
            canonical = index.canonical_read(path)
            self.assertIn('void sub_00012340(void)', canonical)
            self.assertEqual(index.restore_names(canonical), source)
            self.assertEqual(path.read_text(), source)
            with self.assertRaises(ValueError):
                index.path(0x12341)

    def test_duplicate_rejected(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            for name in ('recomp_0001.c', 'powers.c'):
                (root / name).write_text('void sub_00012340(void)\n{\nloc_00012340: ;\n}\n')
            with self.assertRaisesRegex(ValueError, 'Duplicate'):
                RecompSources(root)

    def test_prototypes_and_host_helpers_excluded(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            (root / 'dispatch.c').write_text('void sub_00012340(void);\nvoid host(void)\n{\n}\n')
            self.assertEqual(RecompSources(root).functions, {})

    def test_single_line_unresolved_stub(self):
        source = 'void sub_00012340(void) { missing_operation(); }\n'
        self.assertEqual(find_function(source, 0x12340)['name'], 'sub_00012340')

    def test_overlapping_label_requires_unambiguous_owner(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            (root / 'overlap.c').write_text(
                'void sub_00012340(void)\n{\nloc_00012340: ;\nloc_00012344: ;\n}\n'
                'void sub_00012344(void)\n{\nloc_00012344: ;\n}\n')
            index = RecompSources(root)
            self.assertEqual(len(index.functions), 2)
            with self.assertRaisesRegex(ValueError, 'Ambiguous'):
                index.label_path(0x12344)


if __name__ == '__main__':
    unittest.main()
