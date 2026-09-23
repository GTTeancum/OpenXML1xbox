"""Verify XML1's native outgoing-hit callback ABI and active-owner gates.

Runs 29DC0 unchanged with a fixture pool and a recording cdecl callback.
Selector bypass is explicit; this does not test scope matching or damage.
"""
import argparse, hashlib, json, struct
from pathlib import Path
from unicorn import Uc, UC_ARCH_X86, UC_MODE_32, UC_HOOK_CODE
from unicorn.x86_const import *
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('xbe',type=Path);p.add_argument('--out',type=Path,required=True)
a=p.parse_args();raw=a.xbe.read_bytes();digest=hashlib.sha256(raw).hexdigest()
assert digest=='2ea531f11e0b5b7ca651485012b871ef99a5099c566a6d7cb8ec327ee73d62ac'
u=lambda at:struct.unpack_from('<I',raw,at)[0]
m=Uc(UC_ARCH_X86,UC_MODE_32);m.mem_map(0,0x2000000)
for i in range(u(0x11c)):
    _,va,_,off,n=struct.unpack_from('<5I',raw,u(0x120)-u(0x104)+56*i)
    m.mem_write(va,raw[off:off+n])
put=lambda at,v:m.mem_write(at,struct.pack('<I',v))
get=lambda at:struct.unpack('<I',m.mem_read(at,4))[0]
system,actor,definition,record=0x4833c0,0x1800000,0x1801000,0x1802000
stack,stop,callback=0x1f00000,0x1fff000,0x1803000
instance=system+4
put(0x485800,1);put(system+0x2438,127)
put(instance,0xffffffff);put(instance+0x2c,definition)
put(actor+0x1fc,128)
# Native selector+14 bit2 bypasses matching; definition embeds selector at+4.
m.mem_write(definition+0x18,b'\x02')
m.mem_write(callback,b'\xc3')
calls=[]
def observe(machine,address,size,data):
    if address==callback:
        sp=machine.reg_read(UC_X86_REG_ESP)
        calls.append([get(sp+4),get(sp+8),get(sp+12)])
m.hook_add(UC_HOOK_CODE,observe)
rows=[]
for state in ('live','stale','inactive'):
    for has_callback in (False,True):
        for has_record in (False,True):
            put(system+0x2238,128 if state!='stale' else 256)
            put(system+0x2224,0 if state=='inactive' else 1)
            put(definition+0xb4,callback if has_callback else 0)
            m.mem_write(stack,struct.pack('<5I',stop,3,0x12345678,record if has_record else 0,0))
            m.reg_write(UC_X86_REG_ESP,stack);m.reg_write(UC_X86_REG_ECX,actor)
            calls.clear();m.emu_start(0x29dc0,stop,count=500)
            assert m.reg_read(UC_X86_REG_EIP)==stop
            assert m.reg_read(UC_X86_REG_ESP)==stack+20
            expected=[[instance,0x12345678,record]] if state=='live' and has_callback and has_record else []
            assert calls==expected,(state,has_callback,has_record,calls)
            rows.append(dict(state=state,callback=has_callback,record=has_record,args=list(calls)))
a.out.parent.mkdir(parents=True,exist_ok=True)
a.out.write_text(json.dumps(dict(sha256=digest,entry='00029DC0',event=3,
    callback_offset='B4',cdecl_args=['instance','other_entity_handle','damage_record'],cases=rows,
    not_covered=['scope matching','damage delivery','expiration scheduling','gameplay']),indent=2))
print('PASS 12 original XML1 outgoing-hit callback dispatch cases')
