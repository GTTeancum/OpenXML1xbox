"""Execute XML2's held-power charge arithmetic; no mocked native callees.

Starts after talent resolution and stops before difficulty/player adjustment
and energy deduction. This does not prove lifecycle, charging or gameplay.
"""
import argparse,hashlib,json,math,struct
from pathlib import Path
from unicorn import Uc,UC_ARCH_X86,UC_MODE_32
from unicorn.x86_const import UC_X86_REG_EAX,UC_X86_REG_ESP

def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('xbe',type=Path);p.add_argument('--out',type=Path,required=True)
    a=p.parse_args();raw=a.xbe.read_bytes();digest=hashlib.sha256(raw).hexdigest()
    assert digest=='24ff13d0eb61bd4405653c0456d33f7a0440cdd577aaa85d7e067ecb650e6488'
    u=lambda at:struct.unpack_from('<I',raw,at)[0]
    rows=[]
    for rate,elapsed,expected in [(0,.3,0),(1,.3,1),(6,.3,1.8),(6,1,6),(-1,.3,-.3),(20,.5,10)]:
        m=Uc(UC_ARCH_X86,UC_MODE_32);m.mem_map(0,0x2000000)
        for i in range(u(0x11c)):
            _,va,_,offset,size=struct.unpack_from('<5I',raw,u(0x120)-u(0x104)+56*i)
            m.mem_write(va,raw[offset:offset+size])
        stack=0x1f00000
        m.reg_write(UC_X86_REG_ESP,stack);m.reg_write(UC_X86_REG_EAX,rate&0xffffffff)
        m.mem_write(stack+0xc,struct.pack('<f',elapsed))
        m.emu_start(0x1057df,0x105818,count=100)
        amount=struct.unpack('<f',m.mem_read(stack+0x14,4))[0]
        assert math.isclose(amount,expected,abs_tol=1e-6),(rate,elapsed,amount)
        rows.append(dict(rate=rate,elapsed=elapsed,charge=amount))
    requirements=[]
    for rate in (0,1,6,14,117,-1,32767,-32768):
        m.reg_write(UC_X86_REG_ESP,stack);m.reg_write(UC_X86_REG_EAX,rate&0xffff)
        m.emu_start(0x105c2e,0x105c43,count=100)
        required=struct.unpack('<f',m.mem_read(stack+0x20,4))[0]
        assert required==rate*.25,(rate,required)
        requirements.append(dict(rate=rate,required=required))
    a.out.parent.mkdir(parents=True,exist_ok=True)
    a.out.write_text(json.dumps(dict(sha256=digest,entry='001057DF',stop='00105818',cases=rows,
        eligibility_entry='00105C2E',eligibility_stop='00105C43',eligibility_cases=requirements,
        not_covered=['talent resolution','quarter-second gate','event cost sum','difficulty adjustment','energy deduction','gameplay']),indent=2))
    print('PASS six original XML2 held-energy charge calculations')
    print('PASS eight original XML2 quarter-second energy requirements (no minimum1)')

if __name__=='__main__':main()
