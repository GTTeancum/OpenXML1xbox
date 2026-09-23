"""Exercise XML2's original move-end decision and native combat-node getter.

This isolates 1461F7..14625D and executes native node getter 10F360;
actor resolution, update scheduling, removal and rendering are not tested.
"""
import argparse
import hashlib
import json
import struct
from pathlib import Path

from unicorn import Uc, UC_ARCH_X86, UC_MODE_32, UC_HOOK_CODE
from unicorn.x86_const import (
    UC_X86_REG_EAX, UC_X86_REG_EBP, UC_X86_REG_ECX,
    UC_X86_REG_EDI, UC_X86_REG_EIP, UC_X86_REG_ESP,
)


def check(path):
    raw = path.read_bytes()
    digest = hashlib.sha256(raw).hexdigest()
    assert digest == '24ff13d0eb61bd4405653c0456d33f7a0440cdd577aaa85d7e067ecb650e6488'
    u32 = lambda at: struct.unpack_from('<I', raw, at)[0]
    m = Uc(UC_ARCH_X86, UC_MODE_32)
    m.mem_map(0, 0x2000000)
    for i in range(u32(0x11c)):
        _, va, _, offset, length = struct.unpack_from(
            '<5I', raw, u32(0x120)-u32(0x104)+56*i)
        m.mem_write(va, raw[offset:offset+length])
    write = lambda at, value: m.mem_write(at, struct.pack('<I', value))
    actor, other, instance, node, other_node = [0x1800000+i*0x1000 for i in range(5)]
    stack, stop = 0x1f00000, 0x1fff000
    # Run the actual declaration getter as well as the decision block.
    getter_cases = []
    for flags in (0, 1, 0x1f, 0x20, 0x40, 0xff):
        m.mem_write(instance+0x5d, bytes([flags]))
        write(stack, stop)
        m.reg_write(UC_X86_REG_ESP, stack)
        m.reg_write(UC_X86_REG_ECX, instance)
        m.emu_start(0x150c10, stop, count=100)
        assert m.reg_read(UC_X86_REG_EIP) == stop
        assert m.reg_read(UC_X86_REG_EAX) & 255 == bool(flags & 0x20)
        getter_cases.append(dict(flags=flags, enabled=bool(flags & 0x20)))

    outcome, calls = [], []
    # The RTTI-backed CCombatNode vtable 4A401C has native getter 10F360 at
    # +CC. It returns node+94, not the display/name field. Run that real
    # getter instead of fabricating callback return values.
    def hook(uc, address, size, _):
        if address in (0x145fe7, 0x14625d):
            outcome.append('remove' if address == 0x145fe7 else 'retain')
            uc.emu_stop()
        elif address in (0x14621a, 0x14623b, 0x146249):
            current = uc.reg_read(UC_X86_REG_ECX)
            assert current in (node, other_node)
            calls.append(current)
    m.hook_add(UC_HOOK_CODE, hook)
    cases = [
        ('no_origin_actor', False, True, False, 10, 20, 'retain', 0),
        ('same_node', True, True, True, 10, 20, 'retain', 0),
        ('changed_node_no_other_actor', True, False, False, 10, 20, 'remove', 0),
        ('changed_node_empty_other_key', True, True, False, 10, 0, 'remove', 1),
        ('changed_node_same_nonempty_key', True, True, False, 10, 10, 'retain', 3),
        ('changed_node_different_key', True, True, False, 10, 20, 'remove', 3),
        ('changed_node_both_empty_keys', True, True, False, 0, 0, 'remove', 1),
    ]
    rows = []
    for name, have_actor, have_other, same, key, other_key, expected, count in cases:
        outcome.clear(); calls.clear()
        write(stack+0x14, actor if have_actor else 0)
        write(actor+0x378, node); write(other+0x378, other_node)
        write(instance+0x60, node if same else node+0x100)
        write(node, 0x4a401c); write(other_node, 0x4a401c)
        write(node+0x94, key); write(other_node+0x94, other_key)
        m.reg_write(UC_X86_REG_ESP, stack)
        m.reg_write(UC_X86_REG_EBP, instance)
        m.reg_write(UC_X86_REG_EDI, other if have_other else 0)
        m.emu_start(0x1461f7, stop, count=100)
        assert outcome == [expected], (name, outcome)
        assert len(calls) == count, (name, calls)
        rows.append(dict(name=name, decision=outcome[0], name_queries=len(calls)))
    return dict(sha256=digest, getter=getter_cases, cases=rows,
                fixture_boundaries=['actor/node memory and starting registers'],
                native_node_getter='CCombatNode vtable 4A401C +CC -> 10F360 -> node+94',
                not_covered=['actor resolution', 'node capture', 'powerup removal',
                             'XML1 bridge', 'rendering', 'gameplay'])


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('xbe', type=Path)
    parser.add_argument('--out', type=Path, required=True)
    args = parser.parse_args()
    result = check(args.xbe)
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(result, indent=2)+'\n')
    print('PASS: 6 native declaration getter cases and 7 native node-end decisions')


if __name__ == '__main__':
    main()
