"""Execute XML1's original health deduction and real virtual health setter.

This isolates an already accepted hit. It does not exercise hit rejection,
power callbacks, death handling or gameplay. No instructions are replaced.
"""
import argparse
import hashlib
import json
import struct
from pathlib import Path
from unicorn import Uc, UC_ARCH_X86, UC_MODE_32
from unicorn.x86_const import UC_X86_REG_ESP, UC_X86_REG_ESI, UC_X86_REG_EIP

p = argparse.ArgumentParser(description=__doc__)
p.add_argument('xbe', type=Path)
p.add_argument('--out', type=Path, required=True)
a = p.parse_args()
raw = a.xbe.read_bytes()
assert raw[:4] == b'XBEH'
u32 = lambda at: struct.unpack_from('<I', raw, at)[0]
m = Uc(UC_ARCH_X86, UC_MODE_32)
m.mem_map(0, 0x2000000)
for i in range(u32(0x11c)):
    at = u32(0x120) - u32(0x104) + 56*i
    _, va, _, offset, length = struct.unpack_from('<5I', raw, at)
    m.mem_write(va, raw[offset:offset+length])

# Use the original physical-entity vtable and its original setter, not a stub.
vtable = 0x3c9204
assert struct.unpack('<I', m.mem_read(vtable+0x19c, 4))[0] == 0x2e5b0
actor, sp = 0x1800000, 0x1f00000
context = m.context_save()
f32 = lambda value: struct.unpack('<f', struct.pack('<f', value))[0]
rows = []
for health in (0.0, 0.25, 1.0, 1.5, 99.75, 100.0, 150.0):
    for damage in (-32768, -100, -1, 0, 1, 2, 99, 100, 32000, 32767):
        m.context_restore(context)
        m.mem_write(actor, struct.pack('<I', vtable))
        m.mem_write(actor+0x240, struct.pack('<f', health))
        m.mem_write(actor+0x246, struct.pack('<h', 100))
        m.mem_write(sp+0x28, struct.pack('<h', damage))
        m.reg_write(UC_X86_REG_ESI, actor)
        m.reg_write(UC_X86_REG_ESP, sp)
        # Includes the virtual call and actual 2E5B0 body. Stop immediately
        # before the subsequent native health/death decision.
        m.emu_start(0x9264a, 0x9266f, count=100)
        assert m.reg_read(UC_X86_REG_EIP) == 0x9266f
        assert m.reg_read(UC_X86_REG_ESP) == sp
        result = struct.unpack('<f', m.mem_read(actor+0x240, 4))[0]
        expected = min(f32(health-damage), 100.0)
        assert result == expected, (health, damage, result, expected)
        rows.append(dict(health=health, damage=damage, result=result))
a.out.mkdir(parents=True, exist_ok=True)
(a.out/'result.json').write_text(json.dumps(dict(
    xbe_sha256=hashlib.sha256(raw).hexdigest(), cases=len(rows),
    entry='0009264A', stop='0009266F', setter='0002E5B0',
    scope='accepted-hit deduction; original physical-entity setter',
    not_covered=['hit rejection', 'death handling', 'fractional damage transport',
                 'XML2 handlers', 'gameplay', 'save/load'], rows=rows), indent=2))
print(f'PASS {len(rows)} native health deductions: signed damage, fractional health, upper clamp, negative health')
