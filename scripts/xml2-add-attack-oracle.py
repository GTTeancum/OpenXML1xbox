"""Exercise original CPUAtkAdd arithmetic and hit-routing instructions.

Inputs start after actor/rank/RNG evaluation. Stops before damage delivery;
this is neither a callback lifetime test nor gameplay acceptance.
"""
import argparse
import hashlib
import json
import struct
from pathlib import Path
from unicorn import Uc, UC_ARCH_X86, UC_MODE_32, UC_HOOK_CODE
from unicorn.x86_const import *

p = argparse.ArgumentParser(description=__doc__)
p.add_argument('xbe', type=Path)
p.add_argument('--out', type=Path, required=True)
a = p.parse_args()
raw = a.xbe.read_bytes()
digest = hashlib.sha256(raw).hexdigest()
assert digest == '24ff13d0eb61bd4405653c0456d33f7a0440cdd577aaa85d7e067ecb650e6488'
u = lambda at: struct.unpack_from('<I', raw, at)[0]
m = Uc(UC_ARCH_X86, UC_MODE_32)
m.mem_map(0, 0x2000000)
for i in range(u(0x11c)):
    _, va, _, off, n = struct.unpack_from('<5I', raw, u(0x120)-u(0x104)+56*i)
    m.mem_write(va, raw[off:off+n])
stack, definition, record = 0x1f00000, 0x1800000, 0x1801000
put = lambda at, value: m.mem_write(at, struct.pack('<I', value))
flt = lambda at, value: m.mem_write(at, struct.pack('<f', value))
read_float = lambda at: struct.unpack('<f', m.mem_read(at, 4))[0]
stopped = []
def stop(machine, address, size, data):
    if address in (0x14ce47, 0x14ce5b, 0x14cefb):
        stopped.append(address)
        machine.emu_stop()
m.hook_add(UC_HOOK_CODE, stop)
rows = []
for base, percent, flat in [(100., .5, 0), (10., .25, 3), (1., .125, 0),
                            (10., 0., 0), (10., -.5, 0), (10., 0., -2)]:
    for same_type in (False, True):
        for mirror in (False, True):
            flt(stack+0x10, percent)
            put(stack+0x9c, record)
            flt(record+4, base)
            put(record+0x10, 4 if same_type else 1)
            put(definition+0x70, 4)
            m.mem_write(definition+0x74, bytes([int(mirror)]))
            m.reg_write(UC_X86_REG_ESP, stack)
            m.reg_write(UC_X86_REG_EDI, definition)
            m.reg_write(UC_X86_REG_EAX, flat & 0xffff)
            stopped.clear()
            m.emu_start(0x14cdf2, 0x14cf03, count=100)
            assert len(stopped) == 1
            raw_bonus = base*percent+flat
            expected_route = ('suppressed' if raw_bonus <= 0 else
                              'merge' if same_type and not mirror else 'separate')
            route = {0x14ce47:'merge', 0x14ce5b:'separate', 0x14cefb:'suppressed'}[stopped[0]]
            assert route == expected_route
            bonus = read_float(stack+0x10)
            assert bonus == (max(1., raw_bonus) if raw_bonus > 0 else raw_bonus)
            assert read_float(record+4) == base
            rows.append(dict(base=base, percent=percent, flat=flat,
                             same_type=same_type, mirror=mirror, bonus=bonus, route=route))
a.out.parent.mkdir(parents=True, exist_ok=True)
a.out.write_text(json.dumps(dict(sha256=digest, entry='0014CDF2', cases=rows,
    not_covered=['actor and handle eligibility', 'rank and RNG resolution',
                 'separate-hit delivery', 'lifecycle', 'gameplay']), indent=2))
print('PASS 24 original XML2 add_attack arithmetic/routing cases')
