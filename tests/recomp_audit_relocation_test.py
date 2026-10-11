"""Generated-source audit contracts after relocation; not original-XBE audits."""
import ast
import importlib.util
from pathlib import Path
import sys
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'scripts'))
from recomp_source import RecompSources, find_function, rename_identifiers


class AuditRelocationTest(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.index = RecompSources(ROOT / 'src/recomp/gen')
        if not cls.index.functions:
            raise unittest.SkipTest('Local generated source is required')

    def relocated(self, destination, owners):
        for address in owners:
            body = find_function(self.index.canonical_read(self.index.path(address)), address)[0]
            body = rename_identifiers(body, {f'sub_{address:08X}': f'known_{address:08X}'})
            (destination / f'known_{address:08X}.c').write_text(body)
        return RecompSources(destination)

    def test_ai_generated_contract(self):
        path = ROOT / 'scripts/audit-native-ai-presence.py'
        spec = importlib.util.spec_from_file_location('ai_audit', path)
        module = importlib.util.module_from_spec(spec)
        spec.loader.exec_module(module)
        function = next(n for n in ast.parse(path.read_text()).body
                        if isinstance(n, ast.FunctionDef) and n.name == 'validate_generated')
        labels = {n.value for n in ast.walk(function)
                  if isinstance(n, ast.Constant) and type(n.value) is int
                  and n.value in self.index.labels}
        owners = set()
        for label in labels:
            self.index.label_path(label)  # Reject ambiguous instruction ownership.
            owners.add(self.index.labels[label][0][1])
        module.validate_generated(self.index)
        with tempfile.TemporaryDirectory() as temp:
            relocated = self.relocated(Path(temp), owners)
            module.validate_generated(relocated)
            # A real removed hook must still fail after relocation.
            owner = self.index.labels[0x462EB][0][1]
            target = relocated.path(owner)
            target.write_text(target.read_text().replace('raven_ai_hit_run_incoming', 'missing_hook'))
            with self.assertRaises(SystemExit):
                module.validate_generated(RecompSources(temp))

    def test_affecter_generated_evidence_owners(self):
        tree = ast.parse((ROOT / 'scripts/audit-native-affecter-presence.py').read_text())
        evidence = []
        for node in ast.walk(tree):
            if isinstance(node, ast.Tuple) and len(node.elts) == 2:
                first, second = node.elts
                if (isinstance(first, ast.Constant) and type(first.value) is int
                        and first.value > 0x10000
                        and isinstance(second, ast.Constant) and isinstance(second.value, str)):
                    evidence.append((first.value, second.value))
        self.assertEqual(len(evidence), 13)
        with tempfile.TemporaryDirectory() as temp:
            relocated = self.relocated(Path(temp), {address for address, _ in evidence})
            for index in (self.index, relocated):
                for address, token in evidence:
                    body = find_function(index.canonical_read(index.path(address)), address)[0]
                    self.assertEqual(body.count(token), 1, (hex(address), token))


if __name__ == '__main__':
    unittest.main()
