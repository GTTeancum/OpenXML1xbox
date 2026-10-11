"""Read-only audit of XML1 package dispatch and talent source limits.

Checks original XBE bytes, not the patched generated C. The report identifies
integration points; passing this audit does not establish imported UI support.
"""
import argparse
import hashlib
import json
import re
import struct
from pathlib import Path


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--xbe', type=Path, required=True)
    parser.add_argument('--analysis', type=Path, default=Path('analysis'))
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    if args.output.resolve() == args.xbe.resolve():
        raise ValueError('Output must not replace the XBE')
    original = args.xbe.read_bytes()
    sections = json.loads((args.analysis / 'default_analysis.json').read_text())['sections']

    def data(address, size):
        section = next(s for s in sections if int(s['virtual_addr'], 16) <= address
                       and address + size <= int(s['virtual_addr'], 16) + s['raw_size'])
        offset = address - int(section['virtual_addr'], 16) + int(section['raw_addr'], 16)
        return original[offset:offset + size]

    def u32(address):
        return struct.unpack('<I', data(address, 4))[0]

    def expect(address, value):
        if data(address, len(value)) != value:
            raise ValueError(f'Unrecognized original instructions at {address:08X}')

    expect(0xB41EB, bytes.fromhex('83f803'))  # source filenames: three entries
    expect(0xB41F0, bytes.fromhex('6a20'))    # each filename is 32 bytes
    expect(0xB5701, bytes.fromhex('b896000000'))  # active definition maps: 150
    expect(0x121D08, bytes.fromhex('7418'))  # absent package handler skips callback
    expect(0x121D1F, bytes.fromhex('ff5204'))
    expect(0xB497A, bytes.fromhex('ff5228')) # shared loader registers each Talent
    if u32(0x3D40CC) != 0xB4870 or u32(0x3D40CC + 0x28) != 0xB5620:
        raise ValueError('Unexpected talent manager vtable')

    assembly = (args.analysis / 'disasm/asm/text.asm').read_text()
    references = {}
    for symbol in ('0x4d7310', '0x4d7374', '0x44f388'):
        functions = set()
        current = None
        for line in assembly.splitlines():
            if line.startswith('; Function: '):
                current = line.removeprefix('; Function: ')
            if symbol in line and current:
                functions.add(current)
        references[symbol] = sorted(functions)
    if references['0x4d7310'] != ['sub_000B41B0', 'sub_000B4870',
            'sub_000B4A50', 'sub_000B4B30', 'sub_000B53A0', 'sub_00357460']:
        raise ValueError('Talent source table reference coverage changed')

    # Validate every string used by the package constructor against the image.
    start = assembly.index('; Function: sub_001228B0')
    end = assembly.index('; Function:', start + 20)
    constructor = assembly[start:end]
    strings = json.loads((args.analysis / 'disasm/strings.json').read_text())
    pushed = {int(x, 16) for x in re.findall(r'push\s+(0x[0-9a-f]+)', constructor)}
    names = []
    for entry in strings:
        address = int(entry['address'], 16)
        if address in pushed:
            text = entry['string']
            expect(address, text.encode('ascii') + b'\0')
            names.append(text)
    if 'xml_resident' not in names or 'xml_talents' in names:
        raise ValueError('Unexpected package constructor registration strings')
    report = {
        'xbe_sha256': hashlib.sha256(original).hexdigest(),
        'package_constructor': '001228B0',
        'constructor_strings': names,
        'unhandled_type': 'xml_talents',
        'unknown_type_branch': '00121D08 -> 00121D22 (no callback)',
        'shared_loader': '000B4870',
        'definition_registration': '000B5620 (talent manager vtable +28)',
        'source_table': {'base': '004D7310', 'count': '004D7374',
                         'capacity': 3, 'filename_bytes': 32,
                         'default_source_index': '0044F388',
                         'references': references},
        'active_definition_capacity': 150,
        'next_work': 'Add shared package loading and registration with safe source storage, lifecycle and actor enumeration; preserve original definitions.',
        'limitation': 'Static integration audit only. No implementation or gameplay acceptance.'
    }
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(report, indent=2) + '\n')
    print('Verified native package dispatch, source registry references and talent registration limits')


if __name__ == '__main__':
    main()
