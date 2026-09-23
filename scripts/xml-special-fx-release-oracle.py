"""Check original XML1/XML2 effect-group release ownership, without stubs.

This verifies handle invalidation and isolation; it does not render particles.
"""
import argparse
import hashlib
import json
import struct
from pathlib import Path
from unicorn import Uc, UC_ARCH_X86, UC_MODE_32
from unicorn.x86_const import UC_X86_REG_ECX, UC_X86_REG_EIP, UC_X86_REG_ESP


def check(path, config):
    raw = path.read_bytes()
    digest = hashlib.sha256(raw).hexdigest()
    assert digest == config['sha256']
    u32 = lambda at: struct.unpack_from('<I', raw, at)[0]
    m = Uc(UC_ARCH_X86, UC_MODE_32)
    m.mem_map(0, 0x2000000)
    for i in range(u32(0x11c)):
        _, va, _, offset, length = struct.unpack_from('<5I', raw, u32(0x120)-u32(0x104)+56*i)
        m.mem_write(va, raw[offset:offset+length])
    manager, stack, stop = 0x1800000, 0x1f00000, 0x1fff000
    pool = manager + config['pool']
    write = lambda at, value: m.mem_write(at, struct.pack('<I', value))
    read = lambda at: struct.unpack('<I', m.mem_read(at, 4))[0]
    mask, bits, table, count = [config[k] for k in ('mask', 'bits', 'table', 'count')]
    rows = []
    for mode in ('valid', 'stale', 'inactive', 'repeat'):
        m.mem_write(manager, bytes(0x7000))
        write(pool+mask, 1023 if config['game']=='xml1' else 511)
        write(pool+mask+4, 10 if config['game']=='xml1' else 9)
        shift = read(pool+mask+4)
        handle, neighbor = (1 << shift)+3, (1 << shift)+4
        write(pool+table+3*4, handle)
        write(pool+table+4*4, neighbor)
        write(pool+bits, (1 << 4) | (0 if mode=='inactive' else 1 << 3))
        write(pool+count, 1 if mode=='inactive' else 2)
        before = bytes(m.mem_read(manager, 0x7000))
        argument = handle+(1 << shift) if mode=='stale' else handle
        for _ in range(2 if mode=='repeat' else 1):
            write(stack, stop); write(stack+4, argument)
            m.reg_write(UC_X86_REG_ECX, manager)
            m.reg_write(UC_X86_REG_ESP, stack)
            m.emu_start(config['entry'], stop, count=10000)
            assert m.reg_read(UC_X86_REG_EIP)==stop
            assert m.reg_read(UC_X86_REG_ESP)==stack+8
        if mode in ('stale', 'inactive'):
            assert bytes(m.mem_read(manager, 0x7000))==before
        else:
            assert read(pool+table+3*4)==handle+(1 << shift)
            assert read(pool+bits)==1 << 4
            assert read(pool+count)==1
        assert read(pool+table+4*4)==neighbor
        rows.append(dict(mode=mode, passed=True))
    return dict(**config, cases=rows)


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('xml1',type=Path); p.add_argument('xml2',type=Path)
    p.add_argument('--out',type=Path,required=True); a=p.parse_args()
    configs=[dict(game='xml1', sha256='2ea531f11e0b5b7ca651485012b871ef99a5099c566a6d7cb8ec327ee73d62ac',
        entry=0x16650,pool=0x4a90,mask=0x1bf4,bits=0x1274,table=0x12c4,count=0x12c0),
        dict(game='xml2',sha256='24ff13d0eb61bd4405653c0456d33f7a0440cdd577aaa85d7e067ecb650e6488',
        entry=0x174b0,pool=0x4690,mask=0xbf8,bits=0x71c,table=0x748,count=0x744)]
    result=[check(path,c) for path,c in zip((a.xml1,a.xml2),configs)]
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(dict(results=result, not_covered=['effect launch','particle teardown','gameplay']),indent=2))
    print('PASS original effect-group release: both games, valid/stale/inactive/repeat; neighboring handle preserved')


if __name__=='__main__':
    main()
