"""Execute original XML2 attack-descriptor construction/copy without game UI.

This establishes descriptor inheritance semantics only, not power dispatch or
damage delivery. The input image is read-only; evidence goes to --out.
"""
import argparse
import hashlib
import json
import struct
from pathlib import Path
from unicorn import Uc, UC_ARCH_X86, UC_MODE_32
from unicorn.x86_const import UC_X86_REG_ECX, UC_X86_REG_ESP, UC_X86_REG_EIP


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('xbe', type=Path)
    parser.add_argument('--out', type=Path, required=True)
    args = parser.parse_args()
    image = args.xbe.read_bytes()
    digest = hashlib.sha256(image).hexdigest()
    if digest != '24ff13d0eb61bd4405653c0456d33f7a0440cdd577aaa85d7e067ecb650e6488':
        raise SystemExit('Oracle addresses require the inspected original XML2 image')
    u32 = lambda at: struct.unpack_from('<I', image, at)[0]
    cpu = Uc(UC_ARCH_X86, UC_MODE_32)
    cpu.mem_map(0, 0x2000000)
    for index in range(u32(0x11c)):
        at = u32(0x120) - u32(0x104) + index * 56
        _, va, _, raw, length = struct.unpack_from('<5I', image, at)
        cpu.mem_write(va, image[raw:raw + length])
    source, destination, stack, stop = 0x1800000, 0x1800100, 0x1900000, 0x1f00000

    def invoke(address, target, argument=None):
        cpu.mem_write(stack, struct.pack('<II', stop, argument or 0))
        cpu.reg_write(UC_X86_REG_ECX, target)
        cpu.reg_write(UC_X86_REG_ESP, stack)
        cpu.emu_start(address, stop, count=1000)
        assert cpu.reg_read(UC_X86_REG_EIP) == stop
        assert cpu.reg_read(UC_X86_REG_ESP) == stack + (8 if argument is not None else 4)

    cpu.mem_write(destination, bytes([0xa5]) * 0x4c)
    invoke(0xeb910, destination)
    constructed = bytes(cpu.mem_read(destination, 0x4c))
    assert constructed[:4] == bytes(4), 'Original constructor must initialize both endpoints to zero'
    rows = []
    for lower, upper in ((0, 0), (3, 5), (25, 31), (-1, 32767)):
        descriptor = bytearray(constructed)
        struct.pack_into('<hh', descriptor, 0, lower, upper)
        # The first 36 bytes include XML2's operand representation. Distinct
        # marker bytes prove a full copy rather than an endpoint-only guess.
        descriptor[8:36] = bytes(range(28))
        cpu.mem_write(source, bytes(descriptor))
        cpu.mem_write(destination, constructed)
        invoke(0xec1f0, destination, source)
        copied = bytes(cpu.mem_read(destination, 0x4c))
        assert copied[:36] == descriptor[:36]
        assert bytes(cpu.mem_read(source, 0x4c)) == descriptor
        rows.append({'endpoints': [lower, upper], 'operand_bytes_copied': 36,
                     'source_unchanged': True})
    result = {'xbe_sha256': digest, 'constructor': '000EB910', 'copy': '000EC1F0',
              'constructor_endpoints': [0, 0], 'cases': rows,
              'scope': 'Original x86 descriptor construction/copy only; does not validate resource lookup, symbolic evaluation or combat'}
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(result, indent=2) + '\n')
    print('Original XML2 descriptor constructor and four copy cases passed')


if __name__ == '__main__':
    main()
