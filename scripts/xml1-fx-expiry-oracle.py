"""Execute XML1's real live-particle group gate up to its branch outcome.

No native callees are mocked. Stop before particle removal/iteration; this
proves the ownership/expiry decision, not rendering or complete teardown.
"""
import argparse
import hashlib
import json
import struct
from pathlib import Path
from unicorn import Uc, UC_ARCH_X86, UC_MODE_32, UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_EBP, UC_X86_REG_EBX, UC_X86_REG_ESP


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('xbe',type=Path);p.add_argument('--out',type=Path,required=True)
    a=p.parse_args();raw=a.xbe.read_bytes();digest=hashlib.sha256(raw).hexdigest()
    assert digest=='2ea531f11e0b5b7ca651485012b871ef99a5099c566a6d7cb8ec327ee73d62ac'
    word=lambda at:struct.unpack_from('<I',raw,at)[0]
    m=Uc(UC_ARCH_X86,UC_MODE_32);m.mem_map(0,0x2000000)
    for i in range(word(0x11c)):
        _,va,_,offset,size=struct.unpack_from('<5I',raw,word(0x120)-word(0x104)+56*i)
        m.mem_write(va,raw[offset:offset+size])
    manager,stack=0x1800000,0x1f00000
    pool=manager+0x4a90;handle=1027;slot=3
    write=lambda at,value:m.mem_write(at,struct.pack('<I',value))
    outcomes={0x1c577:'continue',0x1c78b:'expire_and_remove',0x1c7fa:'remove_invalid_group'}
    observed=[]
    def boundary(machine,address,size,context):
        if address in outcomes:
            observed.append(outcomes[address]);machine.emu_stop()
    m.hook_add(UC_HOOK_CODE,boundary)
    rows=[]
    cases=[('before',9.,10.,handle,True,'continue'),
           ('equal',10.,10.,handle,True,'continue'),
           ('after',11.,10.,handle,True,'expire_and_remove'),
           ('retired',9.,10.,handle,False,'remove_invalid_group'),
           ('reused',9.,10.,handle+1024,True,'remove_invalid_group'),
           ('long_lived',100000.,1e30,handle,True,'continue')]
    for name,now,deadline,generation,active,expected in cases:
        m.mem_write(manager,bytes(0x7000))
        write(pool+0x1bf4,1023);write(pool+0x12c4+slot*4,generation)
        write(pool+0x1274,1<<slot if active else 0)
        m.mem_write(pool+slot*4,struct.pack('<f',deadline))
        m.mem_write(stack+0x50,struct.pack('<f',now))
        m.reg_write(UC_X86_REG_EBP,manager);m.reg_write(UC_X86_REG_EBX,handle)
        m.reg_write(UC_X86_REG_ESP,stack)
        before=bytes(m.mem_read(manager,0x7000));observed.clear()
        m.emu_start(0x1c734,0x1fff000,count=1000)
        assert observed==[expected],(name,observed)
        assert bytes(m.mem_read(manager,0x7000))==before
        rows.append(dict(case=name,outcome=observed[0]))
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(dict(sha256=digest,entry='0001C734',cases=rows,
        not_covered=['particle teardown after branch','effect launch','gameplay']),indent=2))
    print('PASS six original particle group decisions: deadline, retirement and generation reuse')


if __name__=='__main__':main()
