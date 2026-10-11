import importlib.util
from pathlib import Path
import sys
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'scripts'))
spec = importlib.util.spec_from_file_location('publication', ROOT / 'scripts/publish-recomp-source.py')
module = importlib.util.module_from_spec(spec)
spec.loader.exec_module(module)


class PublicationTest(unittest.TestCase):
    def test_publish_preserves_previous_and_reports_removed_files(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp); current = root/'game'; candidate = root/'candidate'; backup = root/'previous'
            current.mkdir(); candidate.mkdir()
            (current/'stale.c').write_text('old')
            (candidate/'new.c').write_text('new')
            self.assertEqual(module.differences(current, candidate), dict(added=['new.c'], removed=['stale.c'], changed=[]))
            module.publish(candidate, current, backup)
            self.assertEqual((backup/'stale.c').read_text(), 'old')
            self.assertEqual((current/'new.c').read_text(), 'new')
            self.assertFalse((current/'stale.c').exists())

    def test_failed_publication_restores_current(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp); current = root/'game'; current.mkdir()
            (current/'keep.c').write_text('original')
            with self.assertRaises(OSError):
                module.publish(root/'absent', current, root/'previous')
            self.assertEqual((current/'keep.c').read_text(), 'original')


if __name__ == '__main__':
    unittest.main()
