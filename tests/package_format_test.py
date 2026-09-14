"""Synthetic corruption checks for the observed PKGB/FB formats."""
import sys
from pathlib import Path
import struct
import unittest
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'scripts'))
from xml1_packages import Resource,read_pkgb,write_pkgb,read_fb

class PackageTests(unittest.TestCase):
    def test_order_attributes_and_empty_root(self):
        records=[Resource('combat_is',(('filename','off'),)),Resource('texture',(('filename','textures/twirl'),('filter','linear')))]
        self.assertEqual(read_pkgb(write_pkgb(records)),records)
        self.assertEqual(read_pkgb(write_pkgb([])),[])
    def test_truncated_records(self):
        b=write_pkgb([Resource('texture',(('filename','textures/twirl'),))])
        for end in range(len(b)):
            with self.subTest(end=end),self.assertRaises(ValueError):read_pkgb(b[:end])
    def test_cycle_and_invalid_offsets(self):
        b=bytearray(write_pkgb([Resource('texture',(('filename','textures/twirl'),))]))
        struct.pack_into('<I',b,28,24)
        with self.assertRaisesRegex(ValueError,'Cycle'):read_pkgb(b)
        struct.pack_into('<I',b,28,0xffffffff)
        struct.pack_into('<I',b,24,len(b)+1)
        with self.assertRaisesRegex(ValueError,'offset'):read_pkgb(b)
    def test_fb_payload_and_truncation(self):
        h=b'scripts/example.py'.ljust(128,b'\0')+b'script'.ljust(64,b'\0')+struct.pack('<I',3)
        self.assertEqual(list(read_fb(h+b'abc')),[('scripts/example.py','script',b'abc')])
        for b in (h[:-1],h+b'ab'):
            with self.assertRaises(ValueError):list(read_fb(b))

if __name__=='__main__':unittest.main()
