"""Execute XML2's original drain selector, not damage or energy transfer.

62290 is combat-manager vtable494F94+44. The byte it returns is record+2E;
do not interpret that byte as an amount of energy restored to the attacker.
"""
import argparse
import hashlib
import json
import struct
from pathlib import Path
from unicorn import Uc, UC_ARCH_X86, UC_MODE_32
from unicorn.x86_const import UC_X86_REG_EAX, UC_X86_REG_ESP, UC_X86_REG_EIP

p = argparse.ArgumentParser(description=__doc__)
p.add_argument('xbe', type=Path)
p.add_argument('--out', type=Path, required=True)
a = p.parse_args()
raw = a.xbe.read_bytes()
digest = hashlib.sha256(raw).hexdigest()
assert digest == '24ff13d0eb61bd4405653c0456d33f7a0440cdd577aaa85d7e067ecb650e6488'
u32 = lambda at: struct.unpack_from('<I', raw, at)[0]
m = Uc(UC_ARCH_X86, UC_MODE_32)
m.mem_map(0, 0x2000000)
for i in range(u32(0x11c)):
    _, va, _, off, size = struct.unpack_from('<5I', raw, u32(0x120)-u32(0x104)+56*i)
    m.mem_write(va, raw[off:off+size])
record, stack, sentinel = 0x1800000, 0x1f00000, 0x1e00000
assert struct.unpack('<I', m.mem_read(0x494fd8, 4))[0] == 0x62290
rows = []
for damage_type in (0, 0x20000, 0x20001):
    for modifiers in (0, 4, 0x200, 0x204, 0x100, 0x400):
        for selected_byte in (0, 1, 127, 255):
            m.mem_write(record, bytes(0x40))
            m.mem_write(record+0x10, struct.pack('<II', damage_type, modifiers))
            m.mem_write(record+0x2e, bytes([selected_byte]))
            before = bytes(m.mem_read(record, 0x40))
            m.mem_write(stack, struct.pack('<II', sentinel, record))
            m.reg_write(UC_X86_REG_ESP, stack)
            m.reg_write(UC_X86_REG_EAX, 0xabcdef00)
            m.emu_start(0x62290, sentinel, count=40)
            result = m.reg_read(UC_X86_REG_EAX)
            expected = selected_byte if damage_type & 0x20000 or modifiers & 0x204 else 0
            assert result == expected, (damage_type, modifiers, selected_byte, result)
            assert m.reg_read(UC_X86_REG_EIP) == sentinel
            assert m.reg_read(UC_X86_REG_ESP) == stack+8
            assert bytes(m.mem_read(record, 0x40)) == before
            rows.append(dict(damage_type=damage_type, modifiers=modifiers,
                             selected_byte=selected_byte, result=result))
a.out.parent.mkdir(parents=True, exist_ok=True)
a.out.write_text(json.dumps(dict(sha256=digest, entry='00062290', cases=rows,
    not_covered=['energy restoration', 'target reactions', 'Bishop move handler',
                 'XML1 integration', 'gameplay']), indent=2))
print(f'PASS {len(rows)} original drain-selector cases; record unchanged and stack balanced')
