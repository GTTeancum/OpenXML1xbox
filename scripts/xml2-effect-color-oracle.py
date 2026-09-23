"""Verify imported color curves against original XML2 24C70, without stubs."""
import argparse, hashlib, json, struct
from pathlib import Path
from unicorn import Uc, UC_ARCH_X86, UC_MODE_32
from unicorn.x86_const import UC_X86_REG_ECX, UC_X86_REG_ESP, UC_X86_REG_EIP
from xml2_effect_colors import native_curve

p=argparse.ArgumentParser(description=__doc__)
p.add_argument('xbe',type=Path);p.add_argument('--out',type=Path,required=True);a=p.parse_args()
raw=a.xbe.read_bytes();digest=hashlib.sha256(raw).hexdigest()
assert digest=='24ff13d0eb61bd4405653c0456d33f7a0440cdd577aaa85d7e067ecb650e6488'
u32=lambda at:struct.unpack_from('<I',raw,at)[0]
m=Uc(UC_ARCH_X86,UC_MODE_32);m.mem_map(0,0x2000000)
for i in range(u32(0x11c)):
 _,va,_,off,length=struct.unpack_from('<5I',raw,u32(0x120)-u32(0x104)+56*i)
 m.mem_write(va,raw[off:off+length])
obj,out,stack,stop=0x1800000,0x1801000,0x1f00000,0x1fff000
cases=[]
for colors in [(255,65280,16711680,0,8421504,16777215),
               (4278217111,4278206592,4278199626)*2,
               (33023,33023,33023)*2]:
 m.mem_write(obj+0x74,struct.pack('<6I',*colors))
 for channel in range(3):
  values=[(c>>(channel*8))&255 for c in colors]
  first=native_curve(*values[:3]);second=native_curve(*values[3:])
  for factor in [0.,.25,.5,.75,1.]:
   m.mem_write(stack,struct.pack('<IIfI',stop,out,factor,channel))
   m.reg_write(UC_X86_REG_ECX,obj);m.reg_write(UC_X86_REG_ESP,stack)
   m.emu_start(0x24c70,stop,count=10000)
   assert m.reg_read(UC_X86_REG_EIP)==stop and m.reg_read(UC_X86_REG_ESP)==stack+16
   actual=struct.unpack('<3f',m.mem_read(out,12))
   expected=[x+(y-x)*factor for x,y in zip(first,second)]
   assert max(abs(x-y) for x,y in zip(actual,expected))<2e-6,(actual,expected)
   cases.append(dict(channel=channel,random_factor=factor,actual=actual,expected=expected))
a.out.write_text(json.dumps(dict(sha256=digest,entry='00024C70',cases=cases,not_covered=['rendering','power lifecycle']),indent=2))
print(f'PASS original XML2 particle color curves: {len(cases)} endpoint/channel/random cases')
