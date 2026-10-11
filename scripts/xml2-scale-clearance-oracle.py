"""Execute XML2's real scale-clearance routine with controlled sweep outcomes.

The actor, geometry callbacks and collision results are fixtures. Original x86
clearance logic, vector construction and basis arithmetic run in Unicorn.
No game, window, OS input or XML2 runtime port is involved.
"""
import argparse
import hashlib
import json
import math
import struct
from pathlib import Path
from unicorn import Uc, UC_ARCH_X86, UC_MODE_32, UC_HOOK_CODE
from unicorn.x86_const import UC_X86_REG_EAX, UC_X86_REG_ECX, UC_X86_REG_EIP, UC_X86_REG_ESP


def check(path):
    raw=path.read_bytes()
    digest=hashlib.sha256(raw).hexdigest()
    assert digest=='24ff13d0eb61bd4405653c0456d33f7a0440cdd577aaa85d7e067ecb650e6488'
    u32=lambda at:struct.unpack_from('<I',raw,at)[0]
    m=Uc(UC_ARCH_X86,UC_MODE_32);m.mem_map(0,0x2000000)
    for i in range(u32(0x11c)):
        _,va,_,offset,length=struct.unpack_from('<5I',raw,u32(0x120)-u32(0x104)+56*i)
        m.mem_write(va,raw[offset:offset+length])
    def word(at):return struct.unpack('<I',m.mem_read(at,4))[0]
    def write(at,value):m.mem_write(at,struct.pack('<I',value))
    def vector(at):return list(struct.unpack('<3f',m.mem_read(at,12)))
    def put_vector(at,value):m.mem_write(at,struct.pack('<3f',*value))
    actor,definition,table,bounds=0x1800000,0x1801000,0x1802000,0x1803000
    code,stack,stop=0x1804000,0x1f00000,0x1fff000
    write(actor,table);write(actor+0x35c,definition)
    m.mem_write(definition+0x2b0,struct.pack('<f',1))
    put_vector(definition+0x294,[20,30,60])
    for slot,endpoint in [(0x38,code),(0x40,code+4),(0x140,code+8),(0x150,code+12)]:write(table+slot,endpoint)
    # Native startup initializes this canonical up vector. Give it explicitly
    # rather than relying on an uninitialized retail data segment.
    put_vector(0x563154,[0,0,1])
    sweeps=[];bounds_calls=[];moves=[];hits={}
    def ret(uc,arguments,value=None):
        sp=uc.reg_read(UC_X86_REG_ESP)
        if value is not None:uc.reg_write(UC_X86_REG_EAX,value)
        uc.reg_write(UC_X86_REG_EIP,word(sp));uc.reg_write(UC_X86_REG_ESP,sp+4+arguments)
    def hook(uc,address,size,_):
        sp=uc.reg_read(UC_X86_REG_ESP)
        if address==code:ret(uc,0,bounds)
        elif address==code+4:
            out=word(sp+4);put_vector(out,[0,1,0]);ret(uc,4,out)
        elif address==code+8:
            low,high=vector(word(sp+4)),vector(word(sp+8))
            put_vector(bounds,low);put_vector(bounds+12,high)
            bounds_calls.append([low,high]);ret(uc,8)
        elif address==code+12:
            position=vector(word(sp+4));put_vector(actor+0x20,position)
            moves.append(position);ret(uc,4)
        elif address==0x3bfa0:
            origin,direction=vector(word(sp+4)),vector(word(sp+8))
            index=len(sweeps);fraction=hits.get(index)
            displacement=[v*(fraction if fraction is not None else 1) for v in direction]
            put_vector(word(sp+16),displacement)
            sweeps.append(dict(origin=origin,direction=direction,hit=fraction is not None,
                               displacement=displacement,filter=word(sp+12)))
            ret(uc,20,int(fraction is not None))
    m.hook_add(UC_HOOK_CODE,hook)
    rows=[]
    for name,target,collision,accepted,query_count in [
        ('shrink',0.5,{},True,0),('same_size',1,{},True,0),
        ('grow_open',2,{},True,5),('ceiling_blocked',2,{0:0.1},False,1),
        ('boxed_sides',2,{1:0.1,2:0.1},False,3),
        ('one_side_requires_shift',2,{1:0.1},True,5),
    ]:
        sweeps.clear();bounds_calls.clear();moves.clear();hits=collision
        original_position=[100,200,300];original_bounds=[[-10,-15,0],[10,15,60]]
        put_vector(actor+0x20,original_position)
        put_vector(bounds,original_bounds[0]);put_vector(bounds+12,original_bounds[1])
        m.mem_write(actor+0x188,struct.pack('<f',1))
        write(stack,stop);m.mem_write(stack+4,struct.pack('<f',target))
        m.reg_write(UC_X86_REG_ESP,stack);m.reg_write(UC_X86_REG_ECX,actor)
        m.emu_start(0x2d6d0,stop,count=10000)
        result=bool(m.reg_read(UC_X86_REG_EAX)&255)
        assert m.reg_read(UC_X86_REG_EIP)==stop and m.reg_read(UC_X86_REG_ESP)==stack+8,name
        assert result==accepted,(name,result)
        assert len(sweeps)==query_count,(name,len(sweeps))
        assert [vector(bounds),vector(bounds+12)]==original_bounds,(name,'temporary bounds leaked')
        position=vector(actor+0x20)
        if name=='one_side_requires_shift':assert math.dist(position,original_position)>0
        else:assert position==original_position,(name,position)
        rows.append(dict(name=name,accepted=result,position=position,sweeps=list(sweeps),
                         temporary_bounds=list(bounds_calls),moves=list(moves)))
    return dict(sha256=digest,native_entry='0002D6D0',cases=rows,
                not_covered=['real collision scene','XML1 adapter','actor generation/lifetime','rendering','gameplay'])


if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('xbe',type=Path);parser.add_argument('--out',type=Path,required=True)
    args=parser.parse_args();result=check(args.xbe)
    args.out.parent.mkdir(parents=True,exist_ok=True)
    args.out.write_text(json.dumps(result,indent=2)+'\n')
    print('PASS native scale clearance: 6 cases, controlled sweeps, displacement, bounds restoration and ABI')
