"""Descriptor-layout regression: names must not select the next function."""
import struct
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'scripts'))
from raven_command_index import commands, correct_archived_rows


class Image:
    def __init__(self):
        self.data = bytearray(1024)
        self.sections = [dict(name='.text', va=0x1000, raw=0, raw_size=128),
                         dict(name='.rdata', va=0x2000, raw=128, raw_size=896)]

    def va_offset(self, va):
        for s in self.sections:
            if s['va'] <= va < s['va'] + s['raw_size']:
                return va - s['va'] + s['raw']
        return None

    def offset_va(self, offset):
        for s in self.sections:
            if s['raw'] <= offset < s['raw'] + s['raw_size']:
                return offset - s['raw'] + s['va']
        return None


class DescriptorTests(unittest.TestCase):
    def test_function_precedes_name_and_terminal_record_is_kept(self):
        image = Image()
        offset = 512
        def string(value):
            nonlocal offset
            encoded = value.encode() + b'\0'
            start = offset
            image.data[start:start+len(encoded)] = encoded
            offset += len(encoded)
            return image.offset_va(start)
        for i, name in enumerate(('setPosX', 'setPosY', 'cleanup', '==')):
            row = (0x1010+i*16, string(name), string('n'), string('ai') if i < 2 else 0)
            struct.pack_into('<4I', image.data, 128+i*16, *row)
        result = commands(image)
        self.assertEqual([r['function_va'] for r in result], ['00001010', '00001020', '00001030', '00001040'])
        self.assertEqual(result[-1]['name'], '==')
        self.assertEqual(result[-1]['argument_format'], '')
        self.assertEqual(result[0]['descriptor_va'], '00002000')

    def test_archive_repair_never_guesses_first_function(self):
        rows = [dict(name=name, descriptor_va=f'{0x2004+i*16:08X}',
                     return_format='i', argument_format='ii', function_va=f'{0x1020+i*16:08X}')
                for i, name in enumerate(('imul', 'idiv', 'strcatstr'))]
        corrected = correct_archived_rows(rows)
        self.assertIsNone(corrected[0]['function_va'])
        self.assertEqual(corrected[1]['function_va'], '00001020')
        self.assertEqual(corrected[1]['descriptor_va'], '00002010')


if __name__ == '__main__':
    unittest.main()
