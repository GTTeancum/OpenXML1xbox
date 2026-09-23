"""Compare live XML1 getDistance results with original XML2 x86 arithmetic.

Entity lookup and interpreter ownership are covered by the live script run,
not this isolated B673A..B6778 instruction range.
"""
import argparse,hashlib,json,re,struct
from pathlib import Path
from unicorn import Uc,UC_ARCH_X86,UC_MODE_32
from unicorn.x86_const import UC_X86_REG_ESI,UC_X86_REG_EAX,UC_X86_REG_ESP,UC_X86_REG_EIP
p=argparse.ArgumentParser(description=__doc__)
p.add_argument('xbe',type=Path);p.add_argument('log',type=Path);p.add_argument('--out',type=Path,required=True)
a=p.parse_args();raw=a.xbe.read_bytes();assert raw[:4]==b'XBEH'
u=lambda at:struct.unpack_from('<I',raw,at)[0]
m=Uc(UC_ARCH_X86,UC_MODE_32);m.mem_map(0,0x2000000)
for i in range(u(0x11c)):
    at=u(0x120)-u(0x104)+56*i
    _,va,_,offset,length=struct.unpack_from('<5I',raw,at)
    m.mem_write(va,raw[offset:offset+length])
context=m.context_save();rows=[];lines=a.log.read_text(errors='replace').splitlines()
for i,line in enumerate(lines):
    match=re.search(r'getDistance => (\S+) entities=([0-9A-F]+)/([0-9A-F]+)',line)
    if not match:continue
    value=float(match[1]);first=int(match[2],16);second=int(match[3],16)
    m.context_restore(context)
    m.reg_write(UC_X86_REG_ESI,0x1800000 if first else 0)
    m.reg_write(UC_X86_REG_EAX,0x1801000 if second else 0)
    m.reg_write(UC_X86_REG_ESP,0x1f00000)
    coords=None
    if first and second:
        prefix='[RAVEN SCRIPT DISTANCE POS] '
        assert lines[i+1].startswith(prefix)
        coords=[float(v) for v in lines[i+1][len(prefix):].replace('/',' ').split()]
        assert len(coords)==6
        m.mem_write(0x1800020,struct.pack('<3f',*coords[:3]))
        m.mem_write(0x1801020,struct.pack('<3f',*coords[3:]))
    m.emu_start(0xb673a,0xb6778,count=100)
    assert m.reg_read(UC_X86_REG_EIP)==0xb6778
    original=bytes(m.mem_read(0x1f0000c,4))
    assert original==struct.pack('<f',value),(line,struct.unpack('<f',original))
    rows.append(dict(result=value,positions=coords,original_bits=original.hex()))
assert rows,'No live distance evidence'
a.out.parent.mkdir(parents=True,exist_ok=True)
a.out.write_text(json.dumps(dict(xbe_sha256=hashlib.sha256(raw).hexdigest(),
    log_sha256=hashlib.sha256(a.log.read_bytes()).hexdigest(),
    instruction_range='000B673A..000B6778',cases=rows),indent=2))
print(f'PASS {len(rows)} live XML1 results bit-match original XML2 distance arithmetic')
