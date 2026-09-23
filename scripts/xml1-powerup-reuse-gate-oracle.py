"""Run XML1 original lifetime gates before powerup-definition matching.
This does not execute definition equality, allocation, refresh or rendering.
"""
import argparse,hashlib,json,struct
from pathlib import Path
from unicorn import Uc,UC_ARCH_X86,UC_MODE_32
from unicorn.x86_const import UC_X86_REG_ESP,UC_X86_REG_ESI,UC_X86_REG_EBP,UC_X86_REG_EBX
p=argparse.ArgumentParser(description=__doc__);p.add_argument('xbe',type=Path);p.add_argument('--out',type=Path,required=True);a=p.parse_args()
raw=a.xbe.read_bytes();digest=hashlib.sha256(raw).hexdigest()
assert digest=='2ea531f11e0b5b7ca651485012b871ef99a5099c566a6d7cb8ec327ee73d62ac'
u=lambda at:struct.unpack_from('<I',raw,at)[0]
m=Uc(UC_ARCH_X86,UC_MODE_32);m.mem_map(0,0x2000000)
for i in range(u(0x11c)):
 _,va,_,off,n=struct.unpack_from('<5I',raw,u(0x120)-u(0x104)+56*i);m.mem_write(va,raw[off:off+n])
instance,existing,incoming,stack=0x1800000,0x1801000,0x1802000,0x1f00000
m.mem_write(instance+0x2c,struct.pack('<I',existing));rows=[]
for old_life in (-1.,0.,1.):
 for new_life in (-1.,0.,1.):
  for old_flag in (0,8):
   for new_flag in (0,8):
    m.mem_write(existing+0x24,struct.pack('<f',old_life));m.mem_write(incoming+0x24,struct.pack('<f',new_life))
    m.mem_write(existing+0x72,bytes([old_flag]));m.mem_write(incoming+0x72,bytes([new_flag]))
    m.reg_write(UC_X86_REG_ESP,stack);m.reg_write(UC_X86_REG_ESI,instance);m.reg_write(UC_X86_REG_EBP,incoming);m.reg_write(UC_X86_REG_EBX,0)
    m.emu_start(0x2ab41,0x2ab80,count=100)
    old_ok=bool(m.mem_read(stack+0x38,1)[0]);new_ok=bool(m.reg_read(UC_X86_REG_EBX)&255)
    assert old_ok==(bool(old_flag) or old_life>0),(old_life,old_flag,old_ok)
    assert new_ok==(bool(new_flag) or new_life>0),(new_life,new_flag,new_ok)
    rows.append(dict(old_life=old_life,new_life=new_life,old_flag=old_flag,new_flag=new_flag,old_admitted=old_ok,new_admitted=new_ok))
a.out.parent.mkdir(parents=True,exist_ok=True);a.out.write_text(json.dumps(dict(sha256=digest,entry='0002AB41',stop='0002AB80',cases=rows,not_covered=['definition matching','refresh','XML2 behavior','gameplay']),indent=2))
print('PASS 36 original XML1 powerup-reuse lifetime gates')
