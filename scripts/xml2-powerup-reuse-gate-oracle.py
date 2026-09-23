"""Execute XML2's incoming reuse admission gate, not equality or refresh.

Handle resolution and the unrelated actor charge query are controlled fixtures;
the original branch instructions and both definition getters execute unchanged.
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
definition, handle, table, stack = 0x1800000, 0x1801000, 0x1802000, 0x1f00000
put = lambda at, value: m.mem_write(at, struct.pack('<I', value))
put(definition, 0x4a734c)
put(handle, table)
put(table, 0x1803000)
put(table+8, 0x1803010)
# Valid handle and definition lookup; no replacement of the getters under test.
m.mem_write(0x1803000, b'\xb8\x01\x00\x00\x00\xc2\x04\x00')
m.mem_write(0x1803010, b'\xb8'+struct.pack('<I', definition)+b'\xc2\x04\x00')

def hook(machine, address, size, data):
    if address == 0x15d874:
        # Neither lifetime nor either definition flag admitted this case.
        # Model zero actor charges and rejoin the original decision branch.
        machine.reg_write(UC_X86_REG_EAX, 0)
        machine.reg_write(UC_X86_REG_EIP, 0x15d891)

m.hook_add(UC_HOOK_CODE, hook)
rows = []
for positive_life in (False, True):
    for no_stack in (False, True):
        for node_end in (False, True):
            m.mem_write(definition+0x5c, bytes([int(no_stack), 0x20 if node_end else 0]))
            m.mem_write(stack+0xe, bytes([int(positive_life)]))
            m.reg_write(UC_X86_REG_ESP, stack)
            m.reg_write(UC_X86_REG_ESI, handle)
            m.reg_write(UC_X86_REG_EDI, 1)
            m.emu_start(0x15d832, 0x15d89f, count=150)
            admitted = bool(m.mem_read(stack+0xe, 1)[0])
            assert admitted == (positive_life or no_stack or node_end)
            assert m.reg_read(UC_X86_REG_ESP) == stack
            rows.append(dict(positive_life=positive_life, no_stack=no_stack,
                             remove_on_node_end=node_end, admitted=admitted))
a.out.parent.mkdir(parents=True, exist_ok=True)
a.out.write_text(json.dumps(dict(sha256=digest, entry='0015D832', stop='0015D89F',
    cases=rows, not_covered=['lifetime calculation', 'actor charge query',
    'existing owner gate', 'definition equality', 'refresh', 'gameplay']), indent=2))
print('PASS 8 original XML2 incoming powerup reuse gates')
