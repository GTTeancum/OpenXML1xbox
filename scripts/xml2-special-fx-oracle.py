"""Execute original XML2 nested-effect scalar parsing; no mocked callees.

This characterizes definition fields, not effect rendering or owner lifetime.
Effect paths and skeleton bolt resolution still require their native pools.
"""
import argparse
import hashlib
import json
import struct
from pathlib import Path
from unicorn import Uc, UC_ARCH_X86, UC_MODE_32
from unicorn.x86_const import UC_X86_REG_EAX, UC_X86_REG_ECX, UC_X86_REG_EIP, UC_X86_REG_ESP


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('xbe', type=Path)
    parser.add_argument('--out', type=Path, required=True)
    args = parser.parse_args()
    raw = args.xbe.read_bytes()
    digest = hashlib.sha256(raw).hexdigest()
    assert digest == '24ff13d0eb61bd4405653c0456d33f7a0440cdd577aaa85d7e067ecb650e6488'
    u32 = lambda p: struct.unpack_from('<I', raw, p)[0]
    machine = Uc(UC_ARCH_X86, UC_MODE_32)
    machine.mem_map(0, 0x2000000)
    for index in range(u32(0x11c)):
        header = u32(0x120) - u32(0x104) + index * 56
        _, address, _, offset, length = struct.unpack_from('<5I', raw, header)
        machine.mem_write(address, raw[offset:offset + length])
    def cstring(address):
        return bytes(machine.mem_read(address, 128)).split(b'\0')[0].decode('ascii')
    usage_names = [cstring(struct.unpack('<I', machine.mem_read(0x545fec + i * 4, 4))[0]) for i in range(4)]
    definition, key_address, value_address = 0x1800000, 0x1801000, 0x1802000
    stack, stop = 0x1f00000, 0x1fff000
    saved = machine.context_save()
    rows = []
    cases = [('how_used', value) for value in usage_names + ['PRIMARY', 'unknown']]
    cases += [(key, value) for key in ['fxlevel', 'tag'] for value in ['0', '1', '2', '-1', '32767']]
    cases += [('share_filter', value) for value in ['owner', 'shared', 'OWNER', 'unknown']]
    cases += [('unrecognized_attribute', 'primary')]
    for key, value in cases:
        machine.context_restore(saved)
        before = bytearray(40)
        struct.pack_into('<I', before, 0, 0x4a6d1c)
        before[0x24] = 0xa3  # Verify filter replacement preserves unrelated flags.
        machine.mem_write(definition, bytes(before))
        machine.mem_write(key_address, key.encode() + b'\0')
        machine.mem_write(value_address, value.encode() + b'\0')
        machine.mem_write(stack, struct.pack('<III', stop, key_address, value_address))
        machine.reg_write(UC_X86_REG_ECX, definition)
        machine.reg_write(UC_X86_REG_ESP, stack)
        machine.emu_start(0x14b5c0, stop, count=50000)
        assert machine.reg_read(UC_X86_REG_EIP) == stop
        assert machine.reg_read(UC_X86_REG_ESP) == stack + 12
        assert machine.reg_read(UC_X86_REG_EAX) & 255 == 1
        expected = bytearray(before)
        if key == 'how_used':
            lower_names = [name.lower() for name in usage_names]
            result = lower_names.index(value.lower()) if value.lower() in lower_names else 3
            struct.pack_into('<I', expected, 0x14, result)
        elif key in ('fxlevel', 'tag'):
            struct.pack_into('<H', expected, 0x1a if key == 'fxlevel' else 0x18, int(value) & 65535)
        elif key == 'share_filter':
            expected[0x24] = 0xa0 | {'owner': 1, 'shared': 2}.get(value.lower(), 0)
        actual = bytes(machine.mem_read(definition, 40))
        assert actual == bytes(expected), (key, value, actual.hex(), expected.hex())
        rows.append(dict(key=key, value=value, definition=actual.hex()))
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(dict(xbe_sha256=digest, parser='0014B5C0',
        vtable='004A6D1C', usage_names=usage_names, cases=rows,
        not_covered=['effect resource pool', 'bolt resolution', 'activation', 'cleanup', 'rendering']), indent=2))
    print(f'PASS {len(rows)} original nested-effect parser cases; usage modes={usage_names}')


if __name__ == '__main__':
    main()
