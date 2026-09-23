"""Compare the shared XML1 active-powerup resolver with original 29C00.

Executes native pool allocation, destruction and getter instructions unpatched.
The input pool is a fixture, not gameplay. Does not test callbacks or saves.
"""
import argparse
import hashlib
import json
import struct
import subprocess
from pathlib import Path
from unicorn import Uc, UC_ARCH_X86, UC_MODE_32
from unicorn.x86_const import UC_X86_REG_EAX, UC_X86_REG_ECX, UC_X86_REG_ESP, UC_X86_REG_EIP

p=argparse.ArgumentParser(description=__doc__)
p.add_argument('xbe',type=Path)
p.add_argument('--out',type=Path,required=True)
a=p.parse_args()
raw=a.xbe.read_bytes()
assert raw[:4]==b'XBEH'
u=lambda at:struct.unpack_from('<I',raw,at)[0]
m=Uc(UC_ARCH_X86,UC_MODE_32)
m.mem_map(0,0x2000000)
for i in range(u(0x11c)):
    at=u(0x120)-u(0x104)+56*i
    _,va,_,offset,length=struct.unpack_from('<5I',raw,at)
    m.mem_write(va,raw[offset:offset+length])
def put(at,v):m.mem_write(at,struct.pack('<I',v))
system=0x4833c0
put(0x485800,1) # initialized singleton
put(system+0x2438,0x7f)
sp,stop=0x1f00000,0x1fff000
context=m.context_save()
rows=[]
for slot in range(128):
    for generation in (0x80,0x100,0x7fffff80):
        for state in ('live','stale','inactive'):
            handle=generation|slot
            stored=handle if state!='stale' else (handle^0x80)
            live=(1<<(slot&31)) if state!='inactive' else 0
            put(system+0x2238+4*slot,stored)
            put(system+0x2224+4*(slot>>5),live)
            m.context_restore(context)
            m.mem_write(sp,struct.pack('<2I',stop,handle))
            m.reg_write(UC_X86_REG_ESP,sp)
            m.emu_start(0x29c00,stop,count=150)
            assert m.reg_read(UC_X86_REG_EIP)==stop
            assert m.reg_read(UC_X86_REG_ESP)==sp+4
            rows.append([handle,stored,live,m.reg_read(UC_X86_REG_EAX)])
def call(entry,this=0,args=()):
    m.context_restore(context)
    m.mem_write(sp,struct.pack('<'+'I'*(1+len(args)),stop,*args))
    m.reg_write(UC_X86_REG_ESP,sp);m.reg_write(UC_X86_REG_ECX,this)
    m.emu_start(entry,stop,count=100000)
    assert m.reg_read(UC_X86_REG_EIP)==stop,hex(entry)
    assert m.reg_read(UC_X86_REG_ESP)==sp+4,hex(entry)
    return m.reg_read(UC_X86_REG_EAX)
def get(at):return struct.unpack('<I',m.mem_read(at,4))[0]
def observe(handle):
    slot=handle&127
    result=call(0x29c00,args=(handle,))
    rows.append([handle,get(system+0x2238+4*slot),get(system+0x2224+4*(slot>>5)),result])
    return result

# Exercise actual retirement and reuse, not just hand-authored bitmap states.
call(0x299b0,system+4)
handles=[]
for _ in range(128):
    assert call(0x29b90,args=(0x1800000,))&255
    handle=get(0x1800000);handles.append(handle)
    assert observe(handle)==system+4+64*(handle&127)
assert len(set(handles))==128
assert not(call(0x29b90,args=(0x1800000,))&255)
for handle in handles:
    call(0x2a730,args=(handle,))
    assert observe(handle)==0
for _ in range(128):
    assert call(0x29b90,args=(0x1800000,))&255
    new=get(0x1800000);assert new not in handles
    assert observe(new)==system+4+64*(new&127)
for old in handles:assert observe(old)==0

source=r'''
#include "raven_xml1_powerup_view.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>
static unsigned char memory[0x2440];
static const uint32_t base=0x4833c0;
static uint32_t deny;
static int read_guest(void *ctx,uint32_t at,void *out,size_t size){
 (void)ctx;if(at==deny || at<base || (uint64_t)at+size>base+sizeof(memory))return 0;
 memcpy(out,memory+(at-base),size);return 1;
}
static void put(unsigned off,uint32_t v){memcpy(memory+off,&v,4);}
static const uint32_t rows[][4]={ROWS};
int main(void){
 for(unsigned i=0;i<sizeof(rows)/sizeof(rows[0]);++i){
  const uint32_t *r=rows[i];unsigned slot=r[0]&127;uint32_t result=0xabcdef01;
  memset(memory,0,sizeof(memory));put(0x2438,127);put(0x2238+4*slot,r[1]);put(0x2224+4*(slot>>5),r[2]);
  raven_lookup status=raven_xml1_active_powerup(read_guest,0,base,r[0],&result);
  if(status!=(r[3]?RAVEN_FOUND:RAVEN_MISSING)||result!=(r[3]?r[3]:0xabcdef01)){
   printf("FAIL native case %u\n",i);return 1;
  }
  uint32_t identity=0xabcdef01;
  status=raven_xml1_active_powerup_identity(read_guest,0,base,base+4+64*slot,&identity);
  int live=!!(r[2]&(1u<<(slot&31)));
  if(status!=(live?RAVEN_FOUND:RAVEN_MISSING)||identity!=(live?r[1]:0xabcdef01)){
   printf("FAIL callback identity %u\n",i);return 6;
  }
 }
 /* Host safety contract exceeds native unchecked memory behavior. */
 uint32_t result=0xabcdef01;memset(memory,0,sizeof(memory));put(0x2438,255);
 if(raven_xml1_active_powerup(read_guest,0,base,128,&result)!=RAVEN_INVALID)return 2;
 put(0x2438,127);put(0x2238,128);put(0x2224,1);deny=base+0x2224;
 if(raven_xml1_active_powerup(read_guest,0,base,128,&result)!=RAVEN_INVALID)return 3;
 if(raven_xml1_active_powerup(read_guest,0,0xfffffff0,128,&result)!=RAVEN_INVALID)return 4;
 if(result!=0xabcdef01)return 5;
 deny=0;
 const uint32_t invalid[]={0,base,base+5,base+4+128*64,0xffffffff};
 for(unsigned i=0;i<sizeof(invalid)/sizeof(invalid[0]);++i)
  if(raven_xml1_active_powerup_identity(read_guest,0,base,invalid[i],&result)!=RAVEN_INVALID||result!=0xabcdef01)return 7;
 put(0x2238,129);
 if(raven_xml1_active_powerup_identity(read_guest,0,base,base+4,&result)!=RAVEN_INVALID||result!=0xabcdef01)return 8;
 puts("PASS 1664 native handle/identity cases including actual allocation, exhaustion, destruction and same-address reuse; bounded-read safety checks");return 0;
}
'''.replace('ROWS',',\n'.join('{'+','.join(str(v)+'u' for v in r)+'}' for r in rows))
a.out.mkdir(parents=True,exist_ok=True)
(a.out/'handles.c').write_text(source)
root=Path(__file__).resolve().parents[1]
(a.out/'CMakeLists.txt').write_text('cmake_minimum_required(VERSION 3.20)\nproject(PowerupHandles C)\n'
    f'add_executable(handles handles.c "{root.as_posix()}/src/raven_xml1_powerup_view.c")\n'
    f'target_include_directories(handles PRIVATE "{root.as_posix()}/src")\n')
subprocess.run(['cmake','-S',str(a.out),'-B',str(a.out/'build')],check=True)
subprocess.run(['cmake','--build',str(a.out/'build'),'--config','Release'],check=True)
subprocess.run([str(a.out/'build/Release/handles.exe')],check=True)
(a.out/'result.json').write_text(json.dumps({'xbe_sha256':hashlib.sha256(raw).hexdigest(),
    'cases':len(rows),'original_functions':['00029C00','000299B0','00029B90','0002A730'],
    'scope':'read-only handle/identity resolution compared against original pool lifecycle',
    'not_covered':['effect callbacks','save/load','gameplay']},indent=2))
