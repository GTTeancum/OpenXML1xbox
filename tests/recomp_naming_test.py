"""Check symbol emission without modifying guest behavior or unknown functions."""
import importlib.util
from pathlib import Path
import sys
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'scripts'))
spec = importlib.util.spec_from_file_location('naming', ROOT / 'scripts/name-recomp-functions.py')
naming = importlib.util.module_from_spec(spec)
spec.loader.exec_module(naming)


class NamingTest(unittest.TestCase):
    def test_lexical_identifiers_only(self):
        text = 'sub_00001000(); /* sub_00001000 */ puts("sub_00001000");'
        self.assertEqual(naming.rename_identifiers(text, {'sub_00001000': 'Known'}),
                         'Known(); /* sub_00001000 */ puts("sub_00001000");')

    def test_named_unit_unknown_chunk_and_dispatch(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp); source = root / 'original'; source.mkdir()
            header = '#include "recomp_types.h"\nvoid sub_00001000(void);\nvoid sub_00002000(void);\n'
            (source / 'recomp_funcs.h').write_text(header)
            original = ('#define RECOMP_GENERATED_CODE\n#include "recomp_funcs.h"\n'
                        '/** Known original comment. */\nvoid sub_00001000(void)\n{\n'
                        'loc_00001000: ;\nsub_00002000();\n}\n'
                        '/** Unknown original comment. */\nvoid sub_00002000(void)\n{\n'
                        'loc_00002000: ;\nsub_00001000();\n}\n')
            (source / 'recomp_0000.c').write_text(original)
            (source / 'dispatch.c').write_text('entry table[] = {{0x1000, sub_00001000}};\n')
            registry = {'functions': [{'address':'0x00001000','name':'Known',
                        'module':'engine/progression','kind':'generated',
                        'evidence':[{'path':'tests/recomp_naming_test.py'}]}]}
            output = root / 'named'
            report = naming.emit(source, output, registry)
            self.assertEqual(report['guest_entries'], 2)
            self.assertEqual((source / 'recomp_0000.c').read_text(), original)
            self.assertIn('Known original comment', (output / 'known/engine/progression/Known.c').read_text())
            self.assertIn('void sub_00002000(void)', (output / 'recomp_0000.c').read_text())
            self.assertIn('{0x1000, Known}', (output / 'dispatch.c').read_text())
            self.assertIn('#define sub_00001000 Known', (output / 'recomp_funcs.h').read_text())
            with self.assertRaises(ValueError):
                naming.emit(source, output, registry)
            registry['functions'][0].update(placement='retain_unit',
                placement_reason='Shared file-local state must remain in one translation unit.')
            retained=root/'retained'
            report=naming.emit(source,retained,registry)
            self.assertIn('void Known(void)',(retained/'recomp_0000.c').read_text())
            self.assertFalse((retained/'known').exists())
            self.assertEqual(report['retained_unit_names'],['Known'])
            self.assertIn('{0x1000, Known}',(retained/'dispatch.c').read_text())


if __name__ == '__main__':
    unittest.main()
