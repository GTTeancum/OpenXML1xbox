"""Verify native XML1 team/skirmish queries against their XML2 equivalents.

The only translated value is the compiled XML1-to-XML2 team enum mapping.
Original game methods handle team precedence and charm without test hooks.
"""
import argparse,ctypes as c,hashlib,json,struct
from pathlib import Path
from unicorn import Uc,UC_ARCH_X86,UC_MODE_32
from unicorn.x86_const import UC_X86_REG_EAX,UC_X86_REG_ECX,UC_X86_REG_ESP,UC_X86_REG_EIP
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('xml1',type=Path);p.add_argument('xml2',type=Path)
p.add_argument('dll',type=Path);p.add_argument('--out',type=Path,required=True)
a=p.parse_args()
def load(path):
    data=path.read_bytes();assert data[:4]==b'XBEH'
    u=lambda at:struct.unpack_from('<I',data,at)[0]
    m=Uc(UC_ARCH_X86,UC_MODE_32);m.mem_map(0,0x2000000)
    for i in range(u(0x11c)):
        at=u(0x120)-u(0x104)+i*56
        _,va,_,raw,n=struct.unpack_from('<5I',data,at)
        m.mem_write(va,data[raw:raw+n])
    return m,hashlib.sha256(data).hexdigest()
m1,h1=load(a.xml1);m2,h2=load(a.xml2)
dll=c.CDLL(str(a.dll.resolve()))
dll.filter_xml1_team.argtypes=[c.c_uint32];dll.filter_xml1_team.restype=c.c_uint32
entity=0x1800000;sp=0x1f00000;stop=0x1fff000
def call(m,address,args=()):
    m.mem_write(sp,struct.pack('<'+'I'*(1+len(args)),stop,*args));m.reg_write(UC_X86_REG_ESP,sp)
    m.reg_write(UC_X86_REG_ECX,entity);m.emu_start(address,stop,count=1000)
    assert m.reg_read(UC_X86_REG_EIP)==stop and m.reg_read(UC_X86_REG_ESP)==sp+4
    return m.reg_read(UC_X86_REG_EAX)
results=[]
for bits in range(8):
    for charmed in range(2):
        for m,shift,charm in ((m1,27,16),(m2,29,8)):
            m.mem_write(entity+4,struct.pack('<I',bits<<shift))
            m.mem_write(entity+0x6c,bytes([charm if charmed else 0]))
        native=call(m1,0x26e60);reference=call(m2,0x294e0)
        translated=dll.filter_xml1_team(native)
        assert translated==reference,(bits,charmed,native,reference)
        results.append(dict(team_bits=bits,charmed=charmed,xml1=native,xml2=reference))
for mode in range(256):
    m1.mem_write(0x4e7ab0,bytes([mode]));m2.mem_write(0x602e98,bytes([mode]))
    one=call(m1,0xbf750);two=call(m2,0xd7a10)
    assert one==two==int(mode==253)
# Seed the actual native setter/getter state, not a guessed boss class.
class Target(c.Structure):
    _fields_=[('team',c.c_uint32),('skirmish',c.c_int),('character_path',c.c_int),('is_actor',c.c_int),('is_boss',c.c_int),('is_nonhumanoid',c.c_int),('danger',c.c_float)]
Read=c.CFUNCTYPE(c.c_int,c.c_void_p,c.c_uint32,c.c_void_p,c.c_size_t)
@Read
def read_xml1(ctx,address,out,size):
    try:c.memmove(out,bytes(m1.mem_read(address,size)),size);return 1
    except Exception:return 0
dll.filter_default_target.argtypes=[Read,c.c_void_p,c.c_uint32,c.POINTER(Target)]
dll.filter_default_target.restype=c.c_int
call(m1,0x8a600);call(m2,0x9c3f0)
default_cases=0
for multiplayer in range(256):
    m1.mem_write(0x4a01b0,bytes([multiplayer]));m2.mem_write(0x5acc28,bytes([multiplayer]))
    for selected in (0,77,0x80001234):
        # Execute each title's native setDefaultTarget handle setter.
        call(m1,0x2f280,(selected,));call(m2,0x2c380,(selected,))
        m1.mem_write(0x498d90,struct.pack('<I',0));m2.mem_write(0x5a9f74,struct.pack('<I',0))
        result_at=entity+0x100
        call(m2,0x4d910,(result_at,))
        reference=struct.unpack('<I',m2.mem_read(result_at,4))[0]
        for handle in (0,77,78,0x80001234):
            m1.mem_write(entity+0x1c,struct.pack('<I',handle))
            target=Target();target.is_boss=37
            assert dll.filter_default_target(read_xml1,None,entity,c.byref(target))==1
            assert target.is_boss==int(handle==reference)
            default_cases+=1
# Uninitialized multiplayer state must not become a guessed default target.
m1.mem_write(0x4a01c8,b'\0')
target=Target();target.is_boss=37
assert dll.filter_default_target(read_xml1,None,entity,c.byref(target))==0 and target.is_boss==37

a.out.parent.mkdir(parents=True,exist_ok=True)
a.out.write_text(json.dumps(dict(xml1_sha256=h1,xml2_sha256=h2,
    dll_sha256=hashlib.sha256(a.dll.read_bytes()).hexdigest(),
    team_cases=results,skirmish_cases=256,default_target_cases=default_cases,
    not_covered=['actor classification','nonhumanoidskeleton property import',
        'live filter dispatch','gameplay']),indent=2))
print('PASS native team/charm translation: 16 combinations; native skirmish equivalence: 256 modes')

print(f'PASS {default_cases} native default-target comparisons including multiplayer and null sentinel')
