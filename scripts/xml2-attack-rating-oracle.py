"""Exercise original XML2 attack-rating cache branches and std_enhancement flag."""
import argparse,json,struct,hashlib,subprocess
from pathlib import Path
from unicorn import Uc,UC_ARCH_X86,UC_MODE_32
from unicorn.x86_const import UC_X86_REG_ESP,UC_X86_REG_ECX,UC_X86_REG_EAX,UC_X86_REG_EIP
p=argparse.ArgumentParser();p.add_argument('xbe');p.add_argument('--out',required=True);a=p.parse_args()
data=Path(a.xbe).read_bytes();u=lambda o:struct.unpack_from('<I',data,o)[0]
if data[:4]!=b'XBEH':raise ValueError('Expected XBE')
m=Uc(UC_ARCH_X86,UC_MODE_32);m.mem_map(0,0x2000000)
for i in range(u(0x11c)):
 off=u(0x120)-u(0x104)+i*56
 _,va,size,raw,n=struct.unpack_from('<5I',data,off)
 m.mem_write(va,data[raw:raw+n])
def put(at,v):m.mem_write(at,struct.pack('<I',v))
def byte(at,v):m.mem_write(at,bytes([v]))
b=0x1000000;actor=b+0x2200;pool=b+0x4000;defs=b+0xa000;aff=b+0x14000
attached=pool+4+0x68;definition=defs+4+0x88;af1=aff+4+0x24;af2=aff+4+0x48
put(actor+0x21c,0x81);put(actor+0x220,pool);put(actor+0x214,1<<25);byte(actor+0x258,1);put(actor+0x35c,b+0x2700)
put(pool,0x4a6be8);put(pool+0x3838,0x7f);put(pool+0x363c,0x81);put(pool+0x3624,2)
put(attached,0x4a6af4);put(attached+0x20,0x301);put(attached+0x24,defs)
put(defs,0x4a7d6c);put(defs+0x9058,0xff);put(defs+0x8c5c,0x301);put(defs+0x8c34,2)
put(definition,0x4a734c);put(definition+0xc,0x401);put(definition+0x10,aff)
put(aff,0x4a6a58);put(aff+0x4278,0x1ff);put(aff+0x3c7c,0x401);put(aff+0x3c80,0x402);put(aff+0x3c44,6)
for at,lo,hi in [(af1,2.,2.),(af2,3.,4.)]:
 put(at,0x4a6a6c);m.mem_write(at+4,struct.pack('<ff',lo,hi));byte(at+0x10,57);byte(at+0x11,1)
put(af1+0x1c,0x402);put(af1+0x20,aff);put(0x5a9f74,0)
# Original getter/vtable code runs unchanged; no function hooks or return stubs.
sp=0x1f00000;stop=0x1fff000;lower=b+0x200;upper=b+0x204
m.mem_write(sp,struct.pack('<6I',stop,57,lower,upper,0,1))
m.reg_write(UC_X86_REG_ESP,sp);m.reg_write(UC_X86_REG_ECX,actor)
out=Path(a.out);out.mkdir(parents=True,exist_ok=True)
scopes=b+0x21000;scope=scopes+4+0x1c;query=b+0x23000
put(scopes,0x4a9b94);put(scopes+0x1238,0x7f);put(scopes+0x103c,0x181);put(scopes+0x1024,2)
put(scope,0x4a9bac);put(scope+0xc,0x80);put(scope+0x14,0xffff0000);put(query+0x10,0x80)
provider=0x5f3af8;tree=provider+0x2cdc;stats=b+0x2700
put(0x5f8dbc,1);put(provider,0x49e410);put(tree+4,0)
for slot,key,value in [(0,0x12340002,0x40a00000),(1,0x12340003,0x40c00000)]:
 put(tree+slot*16+0x10,0x3fffffff);put(tree+slot*16+0x14,0x3fffffff)
 put(tree+slot*16+0x18,key);put(tree+0x1f98+slot*4,value)
put(tree+0x14,1);m.mem_write(stats+0x28e,struct.pack('<h',1))
manager=0x5f92d0
put(0x602644,1);put(manager,0x49ef3c);put(manager+0xc3c,255)
put(manager+0x83c+7*4,0x107);put(manager+0x818,1<<7);put(manager+4+7*4,actor)
put(actor,0x492124);put(0x5aa7a8,7);put(0x58bdcc,8);put(0x58bde0,(1<<11)|(1<<12))
put(query+0x38,0x107);m.mem_write(stats+0x4c8,b'\x02\x00')
put(0x6db518,1);put(0x6cfd10+4+5*4,8);m.mem_write(0x6cfd10+0x4010,b'Bishop\x00')
m.mem_write(stats+0x150,b'bIsHoP\x00');put(0x72e068,0)

from unicorn.x86_const import UC_X86_REG_ESI,UC_X86_REG_EDI
cache=b+0x28000
baseline=bytes(m.mem_read(0,0x2000000));cpu=m.context_save();results=[]
# Execute the original reset's flag-clearing block from a nonzero byte.
# Full construction needs the string interner; this proves only flag reset.
constructed=b+0x30000
byte(constructed+0x5d,0xff)
m.reg_write(UC_X86_REG_ESI,constructed)
m.emu_start(0x154d7e,0x154d8d,count=20)
assert m.reg_read(UC_X86_REG_EIP)==0x154d8d
standard_default=bool(m.mem_read(constructed+0x5d,1)[0]&0x80)
assert not standard_default
for mode in (0,1,2):
 for standard in (False,True):
  m.mem_write(0,baseline);m.context_restore(cpu)
  byte(af1+0x11,mode);byte(definition+0x5d,0x80 if standard else 0)
  m.mem_write(cache+0x80,struct.pack('<6f',10,2,0,0,20,3))
  put(sp+0x3c,stop);put(sp+0x44,0x81);put(sp+0x48,pool)
  put(sp+0x4c,0x401);put(sp+0x50,aff)
  m.reg_write(UC_X86_REG_ESP,sp);m.reg_write(UC_X86_REG_ESI,cache);m.reg_write(UC_X86_REG_EDI,0)
  m.emu_start(0x149a15,stop,count=10000)
  assert m.reg_read(UC_X86_REG_EIP)==stop
  v=struct.unpack('<6f',m.mem_read(cache+0x80,24))
  expected=(12,2,0,0,20 if standard else 22,3) if mode==0 else ((10,4,0,0,20,3 if standard else 6) if mode==1 else (10,2,0,0,20,3))
  assert v==expected,(mode,standard,v,expected)
  assert m.reg_read(UC_X86_REG_ESP)==sp+0x58
  results.append(dict(mode=mode,std_enhancement=standard,cache=list(v)))
report=dict(xbe_sha256=hashlib.sha256(data).hexdigest(),std_enhancement_default=standard_default,entry='149A15',stop='native return',cases=results,scope='Cache arithmetic and definition predicate only; no live XML1 integration')
(out/'attack-rating.json').write_text(json.dumps(report,indent=2)+'\n')
print('PASS original XML2 attack-rating cache:',len(results),'cases')
