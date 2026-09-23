"""Execute the original XML1 ally range decision, stopping before delivery.

The caller has already selected a living actor of the same faction. This
oracle does not claim to test that enumeration, buff allocation, or gameplay.
No original instructions or calls are replaced.
"""
import argparse
import hashlib
import json
import struct
from pathlib import Path
from unicorn import Uc, UC_ARCH_X86, UC_MODE_32, UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_ESP, UC_X86_REG_EBX

p = argparse.ArgumentParser(description=__doc__)
p.add_argument('xbe', type=Path)
p.add_argument('--out', type=Path, required=True)
a = p.parse_args()
raw = a.xbe.read_bytes()
digest = hashlib.sha256(raw).hexdigest()
assert digest == '2ea531f11e0b5b7ca651485012b871ef99a5099c566a6d7cb8ec327ee73d62ac'
u32 = lambda at: struct.unpack_from('<I', raw, at)[0]
m = Uc(UC_ARCH_X86, UC_MODE_32)
m.mem_map(0, 0x2000000)
for i in range(u32(0x11c)):
    _, va, _, off, size = struct.unpack_from('<5I', raw, u32(0x120)-u32(0x104)+56*i)
    m.mem_write(va, raw[off:off+size])
event, definition, stack = 0x1800000, 0x1801000, 0x1f00000
m.mem_write(event+0x14, struct.pack('<I', definition))
near = struct.unpack('<f', m.mem_read(0x3c8244, 4))[0]
medium = struct.unpack('<f', m.mem_read(0x3d5d4c, 4))[0]
assert 0 < near < medium
stops = {0xd7a01: True, 0xd7a2e: True, 0xd7a5b: True, 0xd7a76: False}
observed = []

def stop(machine, address, size, context):
    if address in stops:
        observed.append((address, stops[address]))
        machine.emu_stop()

m.hook_add(UC_HOOK_CODE, stop)
rows = []
for policy in range(4):
    for distance in (0., near-1., near, near+1., medium-1., medium, medium+1., 1000000.):
        observed.clear()
        m.mem_write(definition+0x6c, struct.pack('<I', policy << 4))
        m.mem_write(stack+0x10, struct.pack('<f', distance))
        m.reg_write(UC_X86_REG_ESP, stack)
        m.reg_write(UC_X86_REG_EBX, event)
        m.emu_start(0xd79f0, 0xd7a77, count=100)
        assert len(observed) == 1, (policy, distance, observed)
        at, admitted = observed[0]
        expected = policy == 3 or policy == 2 and distance < medium or policy == 1 and distance < near
        assert admitted == expected, (policy, distance, observed, expected)
        assert m.reg_read(UC_X86_REG_ESP) == stack
        rows.append(dict(policy=policy, distance=distance, admitted=admitted, stop=f'{at:08X}'))
a.out.parent.mkdir(parents=True, exist_ok=True)
a.out.write_text(json.dumps(dict(sha256=digest, entry='000D79F0', near=near,
    medium=medium, cases=rows, not_covered=['actor enumeration and faction checks',
    'delivery and active instance allocation', 'gameplay and visuals']), indent=2))
print(f'PASS {len(rows)} original XML1 ally range decisions; near={near}, medium={medium}, all bypasses range')
