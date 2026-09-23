"""Execute XML1 definition allocation, clone, refcount release and reuse.

Original XBE instructions run unmodified in Unicorn. The definition pool is
allocated in isolated guest memory and published through the native singleton
pointer. No game file, save, generated code or host process is modified.
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

put(0x4c0b18,pool)
call(0x95210,0x4c0b20) # native resource-name pool initialization
assert call(0x96690,pool)==pool
assert get(pool+0x7dd0)==0
allocated=[call(0x96740) for _ in range(164)]
assert len(set(allocated))==164 and all(allocated)
assert sorted(allocated)==[pool+192*i for i in range(164)]
assert get(pool+0x7dd0)==164
assert call(0x96740)==0, 'Native capacity must not be silently widened'
assert all(get(at)==1 for at in allocated)
source,destination=allocated[:2]
callbacks=(0x9c,0xa0,0xa4,0xa8,0xac,0xb0,0xb4,0xb8,0xbc)
resource_offsets=(0x54,0x60,0x78,0x84,0x90)
resource_names=[]
for i,off in enumerate(resource_offsets):
    name=('char/sun/fixture_%u'%i).encode()+b'\0'
    resource_names.append(name)
    m.mem_write(0x1801000+i*64,name)
    call(0x95280,source+off,(0x1801000+i*64,),4)
assert get(0x4c22b4)==5
for i,off in enumerate(callbacks):put(source+off,0x1800000+16*i)
put(source+0x24,0x3f800000)
put(source+0x28,0x40000000)
put(destination,7)
source_before=bytes(m.mem_read(source,192))
assert call(0x953a0,destination,(source,),4)==destination
assert bytes(m.mem_read(source,192))==source_before
assert get(destination)==7, 'Clone must preserve destination reference ownership'
assert all(get(destination+off)==get(source+off) for off in callbacks)
assert get(destination+0x24)==0x3f800000 and get(destination+0x28)==0x40000000
assert get(0x4c22b4)==10
for i,off in enumerate(resource_offsets):
    source_handle,dest_handle=get(source+off),get(destination+off)
    assert source_handle!=dest_handle
    for handle in (source_handle,dest_handle):
        index=handle&get(0x4c2448)
        assert bytes(m.mem_read(0x4c0b20+56*index,len(resource_names[i])))==resource_names[i]

# A non-final release must retain both definition and pool occupancy.
put(source,2)
call(0x967b0,args=(source,))
assert get(source)==1 and get(pool+0x7dd0)==164
assert get(0x4c22b4)==10
assert all(get(source+off)==0x1800000+16*i for i,off in enumerate(callbacks))
call(0x967b0,args=(source,))
assert get(pool+0x7dd0)==163
assert get(0x4c22b4)==5, 'Final release must free source names but retain clone names'
replacement=call(0x96740)
assert replacement==source and get(replacement)==1
assert all(get(replacement+off)==0 for off in callbacks)
assert all(get(replacement+off)==0 for off in resource_offsets)
for i,off in enumerate(resource_offsets):
    index=get(destination+off)&get(0x4c2448)
    assert bytes(m.mem_read(0x4c0b20+56*index,len(resource_names[i])))==resource_names[i]
assert get(pool+0x7dd0)==164
assert call(0x96740)==0
parser_cases=[]
for key,value in (('class','harming'),('damage','%sun_flmthrow_sdmg'),
                  ('attacks_per_second','3'),('unknown_xml2_field','value')):
    m.mem_write(0x1802000,key.encode()+b'\0')
    m.mem_write(0x1802100,value.encode()+b'\0')
    before=bytes(m.mem_read(replacement,192))
    returned=call(0x955c0,replacement,(0x1802000,0x1802100),8)
    assert returned&255==1
    assert bytes(m.mem_read(replacement,192))==before
    parser_cases.append({'field':key,'value':value,'returns_success':True,'mutates_definition':False})
# XML1's native powerup selector is a separate 59-name enum, not XML2 class.
for name,expected in (('health_regen',11),('damage',16),('continuous',55),
                      ('special',56),('harming',0),('none',0)):
    m.mem_write(0x1802000,b'powerup\0')
    m.mem_write(0x1802100,name.encode()+b'\0')
    assert call(0x955c0,replacement,(0x1802000,0x1802100),8)&255==1
    assert bytes(m.mem_read(replacement+0x1c,1))==bytes([expected])
    parser_cases.append({'field':'powerup','value':name,'native_type':expected})
a.out.mkdir(parents=True,exist_ok=True)
result={'xbe_sha256':hashlib.sha256(data).hexdigest(),
 'capacity':164,'definition_size':192,'allocation_count':165,
 'verified':['original pool initialization','capacity and exhaustion',
 'clone preserves destination refcount and source bytes','all nine callback fields copied',
 'non-final release retains occupancy','final release recycles slot',
 'reallocation clears callbacks and restores refcount',
 'five resource names cloned independently and retained after source release'],
 'native_parser_cases':parser_cases,
 'not_covered':['handler callback execution',
 'serialization','XML1 imported handler','gameplay']}
(a.out/'result.json').write_text(json.dumps(result,indent=2))
print('PASS native XML1 definition lifecycle: 164-slot exhaustion, callback clone, reference release and same-address reset')
print('PASS native parser characterization: XML2 class/damage/APS silently ignored; XML1 selector maps unknown harming to type zero')
