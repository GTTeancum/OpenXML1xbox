"""Characterize original XML2 harming scalar attributes without code stubs.

Operand binding and inherited attributes are outside this isolated test.
"""
import argparse
import hashlib
import json
import struct
import subprocess
from itertools import product
from pathlib import Path
from unicorn import Uc, UC_ARCH_X86, UC_MODE_32
from unicorn.x86_const import UC_X86_REG_ESP, UC_X86_REG_ECX, UC_X86_REG_EAX, UC_X86_REG_EIP

p=argparse.ArgumentParser(description=__doc__)
p.add_argument('xbe',type=Path)
p.add_argument('--out',type=Path,required=True)
a=p.parse_args();raw=a.xbe.read_bytes()
assert raw[:4]==b'XBEH'
u=lambda at:struct.unpack_from('<I',raw,at)[0]
m=Uc(UC_ARCH_X86,UC_MODE_32);m.mem_map(0,0x2000000)
for i in range(u(0x11c)):
    at=u(0x120)-u(0x104)+56*i
    _,va,_,offset,length=struct.unpack_from('<5I',raw,at)
    m.mem_write(va,raw[offset:offset+length])
definition,key_at,value_at,sp,stop=0x1800000,0x1801000,0x1802000,0x1f00000,0x1fff000
context=m.context_save();rows=[]
for key in ('attacks_per_second','ATTACKS_PER_SECOND','use_tint','USE_TINT','use_trait_scale','USE_TRAIT_SCALE'):
    values=('0','1','3','255','256','-1',' 3','3tail') if key.lower()=='attacks_per_second' else ('true','TRUE','True','false','1','0',' true','true ')
    # The original XOR/AND/XOR sequence REPLACES the selected bit. Testing
    # only 0xa8 hides a false-value bug when a cloned definition starts true.
    initial_flags=(0xa8,) if key.lower()=='attacks_per_second' else range(256)
    for value,flags in product(values,initial_flags):
        m.context_restore(context)
        initial=bytearray(192);initial[0x70]=3;initial[0x71]=flags
        m.mem_write(definition,bytes(initial))
        m.mem_write(key_at,key.encode()+b'\0');m.mem_write(value_at,value.encode()+b'\0')
        m.mem_write(sp,struct.pack('<III',stop,key_at,value_at))
        m.reg_write(UC_X86_REG_ESP,sp);m.reg_write(UC_X86_REG_ECX,definition)
        m.emu_start(0x14e9a0,stop,count=10000)
        assert m.reg_read(UC_X86_REG_EIP)==stop
        assert m.reg_read(UC_X86_REG_ESP)==sp+12
        assert m.reg_read(UC_X86_REG_EAX)&255==1
        expected=bytearray(initial)
        if key.lower()=='attacks_per_second':
            expected[0x70]={'0':0,'1':1,'3':3,'255':255,'256':0,'-1':255,' 3':3,'3tail':3}[value]
        else:
            bit=1 if key.lower()=='use_tint' else 2
            expected[0x71]=(flags & ~bit) | (bit if value.lower()=='true' else 0)
        actual=bytes(m.mem_read(definition,192))
        assert actual==bytes(expected),(key,value,actual[0x70:0x72])
        rows.append(dict(key=key,value=value,initial_flags=flags,aps=actual[0x70],flags=actual[0x71]))
a.out.mkdir(parents=True,exist_ok=True)
root=Path(__file__).resolve().parents[1]
source=r'''
#include "raven_harming_settings.h"
#include <stdio.h>
struct row {const char *key,*value;unsigned initial,aps,flags;};
static const struct row rows[]={ROWS};
int main(void) {
 for(unsigned i=0;i<sizeof(rows)/sizeof(rows[0]);++i) {
  const struct row *r=rows+i;raven_harming_settings s={3,(uint8_t)r->initial};
  if(!raven_harming_settings_parse(&s,r->key,r->value)||s.attacks_per_second!=r->aps||s.flags!=r->flags){
   printf("FAIL native parser comparison %u\n",i);return 1;
  }
 }
 raven_harming_settings s;raven_harming_settings_init(&s);
 if(s.attacks_per_second!=3||s.flags!=1)return 2;
 if(raven_harming_settings_parse(&s,"damage","%sun_flmthrow_sdmg")||s.attacks_per_second!=3||s.flags!=1)return 3;
 puts("PASS compiled harming settings match original parser; defaults and unknown-field delegation");return 0;
}
'''.replace('ROWS',',\n'.join('{'+json.dumps(r['key'])+','+json.dumps(r['value'])+','+
    ','.join(str(r[k]) for k in ('initial_flags','aps','flags'))+'}' for r in rows))
(a.out/'parser.c').write_text(source)
(a.out/'CMakeLists.txt').write_text('cmake_minimum_required(VERSION 3.20)\nproject(HarmingParser C)\n'
    f'add_executable(parser parser.c "{root.as_posix()}/src/raven_harming_settings.c")\n'
    f'target_include_directories(parser PRIVATE "{root.as_posix()}/src")\n')
subprocess.run(['cmake','-S',str(a.out),'-B',str(a.out/'build')],check=True)
subprocess.run(['cmake','--build',str(a.out/'build'),'--config','Release'],check=True)
subprocess.run([str(a.out/'build/Release/parser.exe')],check=True)
(a.out/'result.json').write_text(json.dumps(dict(xbe_sha256=hashlib.sha256(raw).hexdigest(),
    entry='0014E9A0',cases=len(rows),rows=rows,
    not_covered=['damage operand binding','inherited fields','runtime execution','gameplay']),indent=2))
print(f'PASS {len(rows)} original harming parser cases: mixed-case keys, byte APS conversion, flag replacement across all 256 initial bytes')
