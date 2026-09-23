"""Check the original XML2 block-state consumers at their branch boundaries.

This is a trace oracle for missing ch_block, not a whole combat/gameplay test.
It executes only the two original instruction ranges that read block bit1.
"""
import argparse, hashlib, json, struct
from pathlib import Path
from unicorn import Uc, UC_ARCH_X86, UC_MODE_32, UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_EAX, UC_X86_REG_ECX, UC_X86_REG_ESP, UC_X86_REG_ESI, UC_X86_REG_EDI, UC_X86_REG_EIP
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('xbe',type=Path)
p.add_argument('--out',type=Path,required=True)
p.add_argument('--xml1',type=Path,help='Also verify the native XML1 attack-record flag adapter')
a=p.parse_args();raw=a.xbe.read_bytes();digest=hashlib.sha256(raw).hexdigest()
assert digest=='24ff13d0eb61bd4405653c0456d33f7a0440cdd577aaa85d7e067ecb650e6488'
u32=lambda at:struct.unpack_from('<I',raw,at)[0]
m=Uc(UC_ARCH_X86,UC_MODE_32);m.mem_map(0,0x2000000)
for i in range(u32(0x11c)):
    _,va,_,off,size=struct.unpack_from('<5I',raw,u32(0x120)-u32(0x104)+56*i)
    m.mem_write(va,raw[off:off+size])
actor,context,record,stack=0x1800000,0x1801000,0x1802000,0x1f00000
stops=set()
def stop(machine,address,size,user):
    if address in stops:machine.emu_stop()
m.hook_add(UC_HOOK_CODE,stop)
rows=[]
for flags in range(256):
    m.mem_write(actor+0x765,bytes([flags]))
    for incoming in (0,8,0xff):
        m.mem_write(context,struct.pack('<I',actor));m.mem_write(context+0xac,bytes([incoming]))
        m.reg_write(UC_X86_REG_ESI,context);m.reg_write(UC_X86_REG_ESP,stack)
        stops={0x43f50};m.emu_start(0x43f24,0x1e00000,count=15)
        assert m.reg_read(UC_X86_REG_EIP)==0x43f50
        value=m.mem_read(context+0xac,1)[0]
        assert value==(incoming&~8 if flags&2 else incoming)
        assert m.mem_read(actor+0x765,1)[0]==flags
    for attack_flag in (0,4):
        for qualifies in (0,1):
            m.mem_write(record+0x35,bytes([attack_flag]))
            m.mem_write(stack+0x13,bytes([qualifies]));m.mem_write(stack+0x28,b'\x00')
            m.reg_write(UC_X86_REG_ESI,record);m.reg_write(UC_X86_REG_EDI,actor)
            m.reg_write(UC_X86_REG_ESP,stack)
            stops={0x5dbc4,0x5dccd};m.emu_start(0x5db9e,0x1e00000,count=25)
            bypass=bool(attack_flag and (not qualifies or not flags&2))
            end=m.reg_read(UC_X86_REG_EIP)
            assert end==(0x5dccd if bypass else 0x5dbc4)
            if bypass:assert m.reg_read(UC_X86_REG_EDI)==1
            assert m.mem_read(stack+0x28,1)[0]==bool(attack_flag)
            assert m.reg_read(UC_X86_REG_ESP)==stack
            rows.append(dict(actor_flags=flags,attack_flag=attack_flag,qualifies=qualifies,bypass=bypass))
native_cases=0
if a.xml1:
    native=a.xml1.read_bytes()
    assert hashlib.sha256(native).hexdigest()=='2ea531f11e0b5b7ca651485012b871ef99a5099c566a6d7cb8ec327ee73d62ac'
    n=Uc(UC_ARCH_X86,UC_MODE_32);n.mem_map(0,0x2000000)
    read32=lambda at:struct.unpack_from('<I',native,at)[0]
    for i in range(read32(0x11c)):
        _,va,_,off,size=struct.unpack_from('<5I',native,read32(0x120)-read32(0x104)+56*i)
        n.mem_write(va,native[off:off+size])
    sentinel=0x1e00000
    for source_flags in range(256):
        for previous in (0,0x55,0xaa,0xff):
            n.mem_write(record,bytes(0x70));n.mem_write(context,bytes(0x70))
            n.mem_write(record+0x2c,bytes([source_flags]));n.mem_write(context+0x60,bytes([previous]))
            n.mem_write(stack,struct.pack('<II',sentinel,record))
            n.reg_write(UC_X86_REG_ECX,context);n.reg_write(UC_X86_REG_ESP,stack)
            n.emu_start(0x5cc00,sentinel,count=60)
            assert n.reg_read(UC_X86_REG_EIP)==sentinel
            assert n.reg_read(UC_X86_REG_ESP)==stack+8
            assert n.mem_read(context+0x60,1)[0]==((previous&~1)|((source_flags>>2)&1))
            native_cases+=1
a.out.parent.mkdir(parents=True,exist_ok=True)
a.out.write_text(json.dumps(dict(sha256=digest,hit_reaction_cases=768,attack_cases=rows,native_flag_adapter_cases=native_cases,
    not_covered=['upstream qualification gates','full hit resolution','XML1 integration','gameplay']),indent=2))
print('PASS original block consumers: 768 reaction-bit cases and 1024 attack-gate cases')

if native_cases: print(f'PASS {native_cases} XML1 native attack-flag adapter cases; unrelated flags preserved')
