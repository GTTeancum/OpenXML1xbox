"""Execute XML1 combat-event factory allocation, rejection and handle retirement.

Original XBE instructions run unmodified in Unicorn. The event pool is
allocated in isolated guest memory and passed directly to the native methods. No game file, save, generated code or host process is modified.
"""
import argparse
import hashlib
import json
import struct
from pathlib import Path
from unicorn import Uc, UC_ARCH_X86, UC_MODE_32
from unicorn.x86_const import (
    UC_X86_REG_EAX, UC_X86_REG_ECX, UC_X86_REG_ESP, UC_X86_REG_EIP,
    UC_X86_REG_EBX, UC_X86_REG_ESI, UC_X86_REG_EDI, UC_X86_REG_EBP,
)

p=argparse.ArgumentParser(description=__doc__)
p.add_argument('xbe',type=Path)
p.add_argument('--out',type=Path,required=True)
a=p.parse_args()
data=a.xbe.read_bytes()
assert data[:4]==b'XBEH'
u=lambda at:struct.unpack_from('<I',data,at)[0]
m=Uc(UC_ARCH_X86,UC_MODE_32)
m.mem_map(0,0x2000000)
for i in range(u(0x11c)):
    at=u(0x120)-u(0x104)+i*56
    _,va,_,raw,n=struct.unpack_from('<5I',data,at)
    m.mem_write(va,data[raw:raw+n])

def put(at,v):m.mem_write(at,struct.pack('<I',v))
def get(at):return struct.unpack('<I',m.mem_read(at,4))[0]

pool=0x1000000
sp,stop=0x1f00000,0x1fff000
regs=(UC_X86_REG_EBX,UC_X86_REG_ESI,UC_X86_REG_EDI,UC_X86_REG_EBP)
def call(address,this=0,args=(),pop=0):
    m.mem_write(sp,struct.pack('<'+'I'*(1+len(args)),stop,*args))
    m.reg_write(UC_X86_REG_ESP,sp)
    m.reg_write(UC_X86_REG_ECX,this)
    for i,r in enumerate(regs):m.reg_write(r,0x12340000+i)
    m.emu_start(address,stop,count=100000)
    assert m.reg_read(UC_X86_REG_EIP)==stop,hex(address)
    assert m.reg_read(UC_X86_REG_ESP)==sp+4+pop,hex(address)
    assert all(m.reg_read(r)==0x12340000+i for i,r in enumerate(regs)),hex(address)
    return m.reg_read(UC_X86_REG_EAX)

# XML1 factory E6040 returns a generation handle, not an event pointer.
# Custom handlers must occupy the same 60-byte slots and retain native ownership.
assert call(0xe33f0,pool)==pool
assert get(pool+0xc3d8)==0 and get(pool+0xc370)==780
assert get(pool+0xd00c)==1023 and get(pool+0xd010)==10
name=0x1800000
def create(kind):
    m.mem_write(name,kind.encode()+b"\0")
    return call(0xe6040,pool,(name,),4)
def resolve(handle):return call(0xe4da0,pool,(handle,),4)
def retire(handle):return call(0xe6cc0,pool,(handle,),4)&255

# Unknown XML2 types are constructed temporarily then retired, not left live.
assert create('ce_filter_event')==0
assert get(pool+0xc3d8)==0 and get(pool+0xc370)==780
assert get(pool+0xc3dc)==2048
assert resolve(1024)==0 and resolve(2048)==0
handles=[create('ce_trail') for _ in range(780)]
assert len(set(handles))==780 and all(handles)
slots=[resolve(h) for h in handles]
assert sorted(slots)==[pool+60*i for i in range(780)]
assert get(pool+0xc3d8)==780 and get(pool+0xc370)==0
assert create('ce_trail')==0
old=handles[0]
address=resolve(old)
assert retire(old)==1
assert resolve(old)==0 and retire(old)==0
assert get(pool+0xc3d8)==779 and get(pool+0xc370)==1
new=create('ce_trail')
assert new!=old and resolve(new)==address and resolve(old)==0
assert new==old+1024
assert get(pool+0xc3d8)==780
for h in handles[1:]+[new]:assert retire(h)==1
assert get(pool+0xc3d8)==0 and get(pool+0xc370)==780
assert resolve(0)==0 and retire(0)==0
assert all(resolve(h)==0 for h in handles+[new])
# XML1 base methods used by the incoming adapter. These are deliberately the
# base methods, not ce_trail/ce_powerup parsers with owned subtype resources.
source=pool;destination=pool+60
m.mem_write(source,bytes([0xa5])*60);m.mem_write(destination,bytes([0x5a])*60)
put(source,0x3d5b48);put(destination,0x3d5b48)
put(source+4,0x1801000);put(destination+4,0x1802000)
key_at,value_at=0x1803000,0x1803100
base_cases=[]
for key,value,offset,expected in (
    ('time','-1',12,255),('tag','100',13,100),
    ('animbased','true',14,0xa5),('timebased','true',14,0xa7),
    ('only_non_looped','false',14,0xa3),('only_non_looped','true',14,0xa7),
    ('only_looped','true',14,0xaf),('only_non_looped','false',14,0xab)):
    m.mem_write(key_at,key.encode()+b"\0");m.mem_write(value_at,value.encode()+b"\0")
    assert call(0xe3fb0,source,(key_at,value_at),8)&255==1
    assert bytes(m.mem_read(source+offset,1))==bytes([expected]),(key,value)
    base_cases.append([key,value,expected])
before=bytes(m.mem_read(destination,60));original=bytes(m.mem_read(source,60))
call(0xcee80,destination,(source,),4)
after=bytes(m.mem_read(destination,60))
assert after[:8]==before[:8], 'Copy must preserve destination vtable and owner'
assert after[8:14]==original[8:14]
assert after[14]==(before[14]&0xf0)|(original[14]&15)
assert after[15:]==before[15:], 'Base copy must not touch subtype bytes'
assert bytes(m.mem_read(source,60))==original
# The base nondeleting destructor only restores the base vtable.
call(0xcedb0,destination,(0,),4)
assert bytes(m.mem_read(destination,60))==after

result={
 'xbe_sha256':hashlib.sha256(data).hexdigest(),
 'base_parser_cases':base_cases,
 'base_copy_preserves_owner_vtable_and_subtype':True,
 'capacity':780,'slot_bytes':60,'generation_increment':1024,
 'verified':['unknown XML2 type rejected without leaked slot',
 'unknown-type retirement advances generation','full native factory allocation',
 'capacity exhaustion','native destructor and retirement',
 'double release rejected','same-address reuse with new generation',
 'stale handles rejected before and after reuse','all live events released',
 'callee stack and nonvolatile register preservation'],
 'not_covered':['custom handler registration','custom handler parsing',
 'target property adapters','combat dispatch','gameplay']}
a.out.parent.mkdir(parents=True,exist_ok=True)
a.out.write_text(json.dumps(result,indent=2))
print('PASS original XML1 event factory: 780 slots, unknown-type rejection, exhaustion, release, generation reuse and stale handles')

print('PASS XML1 base parsing, owner-preserving copy and nondeleting destructor ABI')
