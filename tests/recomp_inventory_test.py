"""Static relationships are navigation evidence, never guessed identities."""
import csv
import importlib.util
import io
from pathlib import Path
import sys
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'scripts'))
spec = importlib.util.spec_from_file_location('inventory', ROOT / 'scripts/inventory-guest-functions.py')
module = importlib.util.module_from_spec(spec)
spec.loader.exec_module(module)


class InventoryTest(unittest.TestCase):
    def test_direct_abi_and_normal_calls_only(self):
        text = '''Known(); RECOMP_ABI_CALL(0x00002000u, Other);
        // Fake(); RECOMP_ABI_CALL(0x3000u, Fake);
        puts("Fake()"); /* Fake(); */ dispatch(eax);'''
        self.assertEqual(module.direct_calls(text, {'Known': 1, 'Other': 2, 'Fake': 3}), {1, 2})

    def test_unknown_retains_identity_and_has_bidirectional_edges(self):
        with tempfile.TemporaryDirectory() as temp:
            source = Path(temp)
            (source / 'recomp_0000.c').write_text('void sub_00001000(void)\n{\nloc_00001000: ;\nRECOMP_ABI_CALL(0x2000u, Known);\n}\n')
            (source / 'known.c').write_text('void Known(void)\n{\nloc_00002000: ;\n}\n')
            (source / 'recomp_stubs_unresolved.c').write_text('void sub_00003000(void)\n{ abort(); }\n')
            registry = {'functions': [{'address': '0x00002000', 'name': 'Known', 'module': 'engine/test'}]}
            output, summary = module.inventory(source, registry)
            rows = list(csv.DictReader(io.StringIO(output)))
            self.assertEqual(rows[0]['status'], 'unidentified')
            self.assertEqual(rows[0]['confirmed_module'], '')
            self.assertEqual(rows[0]['related_modules'], 'engine/test')
            self.assertEqual(rows[0]['direct_callees'], '0x00002000')
            self.assertEqual(rows[1]['direct_callers'], '0x00001000')
            self.assertEqual(rows[2]['status'], 'unresolved_entry_stub')
            self.assertEqual(summary['total'], 3)
            (source / 'duplicate.c').write_text((source / 'known.c').read_text())
            with self.assertRaisesRegex(ValueError, 'Duplicate guest entry'):
                module.inventory(source, registry)


if __name__ == '__main__':
    unittest.main()
