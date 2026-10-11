"""Audited native talent-record migration.

Apply all audited producers/consumers together, or export core methods for the
native transaction fixture. The game must enable XML1_EXPANDED_TALENT_RECORDS
and compile character_talent_stream.c when applying this migration.
"""
from pathlib import Path
import argparse
import re
from recomp_source import RecompSources, find_function

ROOT = Path(__file__).resolve().parents[1]
MARK = '/* XML1 SIX BIT TALENT RECORD */'
FUNCTIONS = (0x40DB0, 0x480F0, 0x48140, 0x481A0, 0x48270, 0x482B0,
             0x482F0, 0x487F0, 0x48860, 0x476A0, 0x48B40, 0x48510, 0x48950, 0x48480,
             0x47F80, 0x49280, 0x48D50)
# Disassembly-verified inlined CCharacterStats lookups. Each follows the byte
# talent-ID tree lookup 000B3BE0; similarly offset dword-valued maps in the
# 000CAC20..000CC7B0 family are different template instances and are excluded.
DIRECT_READS = {
    0x48690: ('esi', (('eax', 1),)),
    0x5C020: ('edi', (('eax', 1),)),
    0xB1BA0: ('esi', (('ebx', 1),)),
    0xB1CA0: ('esi', (('eax', 2),)),
    0xB2490: ('edi', (('eax', 1),)),
    0xC6770: ('edi', (('eax', 1),)),
    0xD9740: ('edi', (('eax', 1),)),
    0xD99D0: ('edi', (('eax', 1),)),
    0xDB0E0: ('edi', (('eax', 1),)),
    0xDB250: ('edi', (('eax', 1),)),
    0x167DD0: ('esi', (('eax', 1), ('ebx', 1))),
}
EXTRA_READERS = (*DIRECT_READS, 0x483C0, 0xB1F20, 0x18B930)


def replace_once(body, old, new):
    if body.count(old) != 1:
        raise ValueError('Expected one audited sequence: ' + old)
    return body.replace(old, new, 1)


def read_field(body, register, offset, operation, field, index='eax'):
    old = (f'SET_LO8({register}, MEM8(esi + {index} * 4 + {offset}));\n'
           f'    SET_LO8({register}, LO8({register}) {operation});')
    return replace_once(body, old,
        f'SET_LO8({register}, xml1_talent_record_get(MEM32(esi + {index} * 4 + 0x168), {field}));')


def replace_block(body, first, next_label, replacement):
    start = body.index(f'loc_{first:08X}: ;')
    end = body.index(f'loc_{next_label:08X}: ;', start)
    return body[:start] + f'loc_{first:08X}: ;\n' + replacement + '\n\n' + body[end:]


def write_xor(body, index, offset, temporary, original, value, field):
    old = (f'SET_LO8({temporary}, MEM8(esi + {index} * 4 + {offset}));\n'
           f'    SET_LO8({temporary}, LO8({temporary}) ^ {value});\n'
           f'    SET_LO8({original}, MEM8(esi + {index} * 4 + {offset}));\n'
           f'    SET_LO8({temporary}, LO8({temporary}) & 0xF);\n'
           f'    SET_LO8({original}, LO8({original}) ^ LO8({temporary}));\n'
           f'    MEM8(esi + {index} * 4 + {offset}) = LO8({original});')
    return replace_once(body, old,
        f'xml1_talent_guest_set(esi + {index} * 4 + 0x168, {field}, {value});')


def migrate(address, body):
    if MARK in body:
        return body
    if address in DIRECT_READS:
        base, reads = DIRECT_READS[address]
        for register, count in reads:
            carry = '    _cf = 0; /* logical op clears CF */\n' if address == 0xB1CA0 else ''
            old = (f'SET_LO8({register}, MEM8({base} + eax * 4 + 0x168));\n'
                   + carry +
                   f'    SET_LO8({register}, LO8({register}) & 0xF);')
            if body.count(old) != count:
                raise ValueError(f'Direct reader count changed: {address:08X}')
            body = body.replace(old,
                f'SET_LO8({register}, xml1_talent_record_get(MEM32({base} + eax * 4 + 0x168), XML1_TALENT_CURRENT));'
                + ('\n' + carry.rstrip() if carry else ''))
        if address == 0xC6770:
            # The original AND sets ZF; generated 'if (0)' lost that flag.
            # A zero learned rank must still follow the native skip branch.
            body = replace_once(body, 'if (0) goto loc_000C6CA0;',
                                 'if (!LO8(eax)) goto loc_000C6CA0;')
    elif address == 0x483C0:
        body = replace_once(body,
            'SET_LO8(edx, MEM8(esi + edi * 4 + 0x168));\n'
            '    SET_LO8(eax, MEM8(esi + edi * 4 + 0x16A));\n'
            '    SET_LO8(edx, LO8(edx) & 0xF);\n'
            '    SET_LO8(eax, LO8(eax) & 0xF);',
            'SET_LO8(edx, xml1_talent_record_get(MEM32(esi + edi * 4 + 0x168), XML1_TALENT_CURRENT));\n'
            '    SET_LO8(eax, xml1_talent_record_get(MEM32(esi + edi * 4 + 0x168), XML1_TALENT_BASELINE));')
    elif address == 0xB1F20:
        body = replace_once(body, 'ecx = ZX8(MEM8(ebp + edx * 4 + 0x168));',
                            'ecx = MEM32(ebp + edx * 4 + 0x168);')
        body = replace_once(body, 'eax = eax & 0xF;',
                            'eax = xml1_talent_record_get(eax, XML1_TALENT_CURRENT);')
        body = replace_once(body, 'loc_000B201B: ;\n    ecx = ecx >> 4;',
                            'loc_000B201B: ;\n    ecx = xml1_talent_record_get(ecx, XML1_TALENT_PENDING);')
    elif address == 0x18B930:
        body = replace_once(body,
            'SET_LO8(eax, MEM8(esi + eax * 4 + 0x168));\n'
            '    ecx = MEM32(esp + 0x14);\n'
            '    SET_LO8(eax, LO8(eax) & 0xF);',
            'SET_LO8(eax, xml1_talent_record_get(MEM32(esi + eax * 4 + 0x168), XML1_TALENT_CURRENT));\n'
            '    ecx = MEM32(esp + 0x14);')
    elif address == 0x40DB0:
        body = read_field(body, 'eax', '0x168', '& 0xF', 'XML1_TALENT_CURRENT')
    elif address == 0x48270:
        body = read_field(body, 'eax', '0x168', '>> 4', 'XML1_TALENT_PENDING')
    elif address == 0x482B0:
        body = read_field(body, 'eax', '0x169', '& 0xF', 'XML1_TALENT_BONUS')
    elif address == 0x48140:
        body = read_field(body, 'eax', '0x169', '>> 4', 'XML1_TALENT_LIMIT')
    elif address == 0x480F0:
        body = replace_once(body,
            'SET_LO8(edx, MEM8(esi + eax * 4 + 0x169));\n'
            '    SET_LO8(ecx, MEM8(esp + 0x10));\n'
            '    SET_LO8(edx, LO8(edx) & 0xF);\n'
            '    SET_LO8(ecx, LO8(ecx) << 4);\n'
            '    SET_LO8(edx, LO8(edx) | LO8(ecx));\n'
            '    MEM8(esi + eax * 4 + 0x169) = LO8(edx);',
            'xml1_talent_guest_set(esi + eax * 4 + 0x168, XML1_TALENT_LIMIT, MEM8(esp + 0x10));')
    elif address == 0x481A0:
        body = write_xor(body, 'eax', '0x16A', 'edx', 'ecx', 'MEM8(esp + 0x10)',
                         'XML1_TALENT_BASELINE')
    elif address == 0x487F0:
        body = write_xor(body, 'ebp', '0x168', 'ecx', 'eax', 'LO8(eax)',
                         'XML1_TALENT_CURRENT')
    elif address == 0x482F0:
        body = read_field(body, 'eax', '0x168', '& 0xF', 'XML1_TALENT_CURRENT')
        body = read_field(body, 'ebx', '0x168', '>> 4', 'XML1_TALENT_PENDING')
        body = write_xor(body, 'ebp', '0x169', 'ecx', 'eax', 'LO8(eax)',
                         'XML1_TALENT_BONUS')
    elif address == 0x48860:
        body = read_field(body, 'eax', '0x168', '& 0xF', 'XML1_TALENT_CURRENT')
        body = read_field(body, 'ebx', '0x169', '& 0xF', 'XML1_TALENT_BONUS')
        body = replace_once(body,
            'SET_LO8(edx, MEM8(esi + ecx * 4 + 0x168));\n'
            '    SET_LO8(eax, LO8(eax) << 4);\n'
            '    SET_LO8(edx, LO8(edx) & 0xF);\n'
            '    SET_LO8(edx, LO8(edx) | LO8(eax));\n'
            '    POP32(esp, edi);\n'
            '    MEM8(esi + ecx * 4 + 0x168) = LO8(edx);',
            'xml1_talent_guest_set(esi + ecx * 4 + 0x168, XML1_TALENT_PENDING, LO8(eax));\n'
            '    POP32(esp, edi);')
    elif address == 0x476A0:
        body = replace_once(body,
            'SET_LO16(edx, MEM16(ecx));\n'
            '    MEM16(eax) = LO16(edx);\n'
            '    SET_LO8(ecx, MEM8(ecx + 2));\n'
            '    MEM8(eax + 2) = LO8(ecx);',
            'MEM32(eax) = MEM32(ecx); /* Copy the complete rank record. */')
    elif address == 0x48B40:
        body = replace_once(body,
            'SET_LO16(edi, MEM16(edx));\n'
            '    MEM16(eax) = LO16(edi);\n'
            '    SET_LO8(edx, MEM8(edx + 2));\n'
            '    MEM8(eax + 2) = LO8(edx);',
            'MEM32(eax) = MEM32(edx); /* Insert all five expanded fields. */')
    elif address == 0x48950:
        body = read_field(body, 'eax', '0x168', '>> 4', 'XML1_TALENT_PENDING', 'ebp')
        body = read_field(body, 'eax', '0x168', '& 0xF', 'XML1_TALENT_CURRENT')
        body = read_field(body, 'eax', '0x169', '>> 4', 'XML1_TALENT_LIMIT')
        body = write_xor(body, 'ecx', '0x168', 'edx', 'eax', 'LO8(eax)', 'XML1_TALENT_CURRENT')
    elif address == 0x48480:
        body = replace_once(body,
            'edx = ZX8(MEM8(esi + eax * 4 + 0x168));\n    edx = edx >> 4;',
            'edx = xml1_talent_record_get(MEM32(esi + eax * 4 + 0x168), XML1_TALENT_PENDING);')
    elif address == 0x48510:
        # Keep the native per-rank cost callback and descending refund order.
        # These blocks have no incoming interior labels or live outgoing flags.
        body = replace_block(body, 0x485C4, 0x485D1,
            '    ebp = 0;\n'
            '    if (!xml1_talent_record_get(MEM32(esi + edi * 4 + 0x168), XML1_TALENT_PENDING))\n'
            '        goto loc_0004864B;')
        body = replace_block(body, 0x485FD, 0x4861F, '''    ebx = MEM32(eax);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = xml1_talent_record_get(MEM32(esi + edi * 4 + 0x168), XML1_TALENT_CURRENT)
        + xml1_talent_record_get(MEM32(esi + edi * 4 + 0x168), XML1_TALENT_PENDING) - 1;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(ebx + 0x34); PUSH32(esp, 0x0004861Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); }
    }''')
        body = replace_block(body, 0x48623, 0x4864B, '''    ebp += MEM32(esp + 0x18);
    edx = xml1_talent_record_get(MEM32(esi + edi * 4 + 0x168), XML1_TALENT_PENDING) - 1;
    xml1_talent_guest_set(esi + edi * 4 + 0x168, XML1_TALENT_PENDING, edx);
    if (edx) goto loc_000485E0;''')
    elif address == 0x47F80:
        body = replace_once(body,
            'SET_LO16(edx, MEM16(ecx));\n    MEM16(esp + 0x14) = LO16(edx);\n'
            '    SET_LO8(eax, MEM8(ecx + 2));',
            'MEM32(esp + 0x14) = MEM32(ecx);')
        body = replace_once(body, '    MEM8(esp + 0x1E) = LO8(eax);\n', '')
        body = replace_once(body, 'loc_00048026: ;\n    PUSH32(esp, 3);',
                            'loc_00048026: ;\n    PUSH32(esp, 4);')
    elif address == 0x49280:
        body = replace_once(body, 'loc_00049330: ;\n    PUSH32(esp, 3);',
            'loc_00049330: ;\n    PUSH32(esp, xml1_talent_guest_record_bytes(ebp));')
        body = replace_once(body, 'loc_0004933E: ;',
            'loc_0004933E: ;\n    xml1_talent_guest_decode(ebp, esp + 0x14);')
    elif address == 0x48D50:
        # This is the only non-load producer passed to map insertion. Retail
        # initializes three bytes and leaves padding dirty. Initialize the
        # complete expanded value, before the existing limit/current setters.
        for old in ('    SET_LO8(eax, MEM8(esp + 0x30));\n',
                    '    SET_LO8(edx, MEM8(esp + 6));\n',
                    '    SET_LO8(eax, LO8(eax) & 0xF);\n',
                    '    MEM8(esp + 0x10) = LO8(eax);\n',
                    '    SET_LO8(edx, LO8(edx) & 0xF0);\n',
                    '    MEM8(esp + 0x15) = LO8(ebx);\n',
                    '    MEM8(esp + 0x16) = LO8(edx);\n'):
            body = replace_once(body, old, '')
        body = replace_once(body, 'loc_00048E93: ;',
            'loc_00048E93: ;\n    MEM32(esp + 0x14) = 0;\n'
            '    xml1_talent_guest_set(esp + 0x14, XML1_TALENT_CURRENT, MEM8(esp + 0x40));')
    else:
        raise ValueError(f'Unaudited function {address:08X}')
    return body.replace('{', '{\n    ' + MARK, 1)


def extract(source, address):
    return find_function(source,address)[0]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--fixture-output', type=Path)
    parser.add_argument('--apply', action='store_true')
    args = parser.parse_args()
    if not args.fixture_output and not args.apply:
        parser.error('Specify --fixture-output or --apply')
    index = RecompSources(ROOT / 'src/recomp/gen')
    bodies = [migrate(address, extract(index.path(address).read_text(), address)) for address in FUNCTIONS]
    updates = {}
    for path, addresses in index.grouped((*FUNCTIONS, *EXTRA_READERS)).items():
        text = path.read_text()
        for address in addresses:
            migrated = migrate(address, extract(text, address))
            if migrate(address, migrated) != migrated:
                raise ValueError('Non-idempotent direct reader')
            text = replace_once(text, extract(text, address), migrated)
        if MARK in text:
            include = '#include "engine/progression/character_talent_guest.h"'
            if include not in text:
                text = replace_once(text, '#include "recomp_funcs.h"',
                                    '#include "recomp_funcs.h"\n' + include)
            updates[path] = text
    for address, body in zip(FUNCTIONS, bodies):
        if migrate(address, body) != body:
            raise ValueError('Non-idempotent migration')
    if args.fixture_output:
        args.fixture_output.parent.mkdir(parents=True, exist_ok=True)
        args.fixture_output.write_text('\n\n'.join(bodies) + '\n')
        print(f'Exported {len(bodies)} migrated native methods')
    if args.apply:
        # No mutation until every expected method has validated successfully.
        for path, text in updates.items():
            if path.read_text() != text:
                path.write_text(text)
        print(f'Applied {len(FUNCTIONS)+len(EXTRA_READERS)} audited native migrations')


if __name__ == '__main__':
    main()
