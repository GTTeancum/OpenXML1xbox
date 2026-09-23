"""Check shared CPUHarming timing against original Xbox instructions.

Runs the complete 14EAB0 scheduler with original pool/vtable/clock accessors,
and 14EFB9..14F00D damage scaling. No guest code is patched or stubbed.
Does not establish actor eligibility, damage delivery or XML1 integration.
"""
import argparse
import hashlib
import json
import struct
import subprocess
from pathlib import Path

from unicorn import Uc, UC_ARCH_X86, UC_MODE_32, UC_HOOK_CODE
from unicorn.x86_const import (
    UC_X86_REG_ECX, UC_X86_REG_ESP, UC_X86_REG_EIP,
    UC_X86_REG_EAX, UC_X86_REG_EBX, UC_X86_REG_ESI, UC_X86_REG_EDI, UC_X86_REG_EBP,
)

p = argparse.ArgumentParser(description=__doc__)
p.add_argument("xbe", type=Path)
p.add_argument("--out", type=Path, required=True)
a = p.parse_args()
root = Path(__file__).resolve().parents[1]
data = a.xbe.read_bytes()
assert data[:4] == b"XBEH"
u32 = lambda o: struct.unpack_from("<I", data, o)[0]
m = Uc(UC_ARCH_X86, UC_MODE_32)
m.mem_map(0, 0x2000000)
for i in range(u32(0x11c)):
    at = u32(0x120)-u32(0x104)+i*56
    _, va, _, raw, n = struct.unpack_from("<5I", data, at)
    m.mem_write(va, data[raw:raw+n])

def put(at, value):
    m.mem_write(at, struct.pack("<I", value))

def flt(at, value):
    m.mem_write(at, struct.pack("<f", value))

def bits(at):
    return struct.unpack("<I", m.mem_read(at, 4))[0]

def fbits(value):
    return struct.unpack("<I", struct.pack("<f", value))[0]

# A real native active-powerup pool slot with generation 0x81, index 1.
pool = 0x1004000
active = pool+4+0x68
definition = 0x1010000
sp, stop = 0x1f00000, 0x1fff000
put(pool, 0x4a6be8)
put(pool+0x3838, 0x7f)
put(pool+0x363c, 0x81)
put(pool+0x3624, 2)
put(active, 0x4a6af4)
# Initialize the already-constructed native game singleton, not its return.
put(0x5aa78c, 1)
put(0x5aa060, 0x49641c)
assert bits(0x49641c+0x160) == 0x77fa0
assert bits(0x4a6af4+0xb4) == 0x21b850
context = m.context_save()
saved_regs = (UC_X86_REG_EBX, UC_X86_REG_ESI, UC_X86_REG_EDI, UC_X86_REG_EBP)
rows = []
for aps in range(256):
    # Expiry, clipped final tick, normal ticks, nonpositive life, NaN gates.
    for life, start, now, damage in (
        (2., 10., 10., 60.), (2., 10., 11.999, 60.),
        (2., 10., 12., 60.), (2., 10., 13., 60.),
        (0., 10., 0., 60.), (-1., 10., 0., 60.),
        (1., 0., 0.5, -15.), (1., 0., 0.5, 0.),
        (1., 0., float('nan'), 60.), (float('nan'), 0., 0., 60.),
    ):
        m.context_restore(context)
        flt(active+0xc, life)
        flt(active+0x10, start)
        flt(active+0x34, -123.)
        flt(0x5aa060+0x3e8, now)
        m.mem_write(definition+0x70, bytes([aps]))
        m.mem_write(sp, struct.pack('<3I', stop, 0x81, pool))
        for i, reg in enumerate(saved_regs):
            m.reg_write(reg, 0x12340000+i)
        m.reg_write(UC_X86_REG_ECX, definition)
        m.reg_write(UC_X86_REG_ESP, sp)
        m.emu_start(0x14eab0, stop, count=1000)
        assert m.reg_read(UC_X86_REG_EIP) == stop
        assert m.reg_read(UC_X86_REG_ESP) == sp+12
        assert all(m.reg_read(reg) == 0x12340000+i for i, reg in enumerate(saved_regs))
        scheduled = bits(active+0x34)
        # Match the original end-time getter's positive-life branch/store.
        end = struct.unpack('<f', struct.pack('<f', life+start if life>0 else 0.))[0]
        now = struct.unpack('<f', struct.pack('<f', now))[0]
        remaining = struct.unpack('<f', struct.pack('<f', end-now))[0]
        m.context_restore(context)
        flt(sp+0x20, life)
        flt(sp+0x1c, remaining)
        flt(sp+0x10, damage)
        put(sp+0x14, definition)
        m.reg_write(UC_X86_REG_ESP, sp)
        m.emu_start(0x14efb9, 0x14f00d, count=150)
        assert m.reg_read(UC_X86_REG_EIP) == 0x14f00d
        assert m.reg_read(UC_X86_REG_ESP) == sp
        rows.append([aps, fbits(life), fbits(end), fbits(now), fbits(remaining),
                     fbits(damage), scheduled, bits(sp+0x10)])

# Execute the original due/delivery branches, stopping before damage delivery.
# No instruction replacement or mocked return values. D7A10 reads the native
# skirmish byte; the due check calls the original attached-object getter.
terminal_addresses = {0x14ef33, 0x14f174, 0x14f053, 0x14f13a, 0x14f0b6}
hook = m.hook_add(UC_HOOK_CODE, lambda uc, at, size, _: uc.emu_stop() if at in terminal_addresses else None)
due_rows=[]; delivery_rows=[]; flag_rows=[]
samples=[0., -0., -1., 1., 10., float('inf'), -float('inf'), float('nan')]
for next_time in samples:
    for now in samples:
        m.context_restore(context)
        flt(active+0x34,next_time); flt(sp+0x14,now)
        m.reg_write(UC_X86_REG_EAX,active);m.reg_write(UC_X86_REG_ESP,sp)
        m.emu_start(0x14ef1a,stop,count=100)
        at=m.reg_read(UC_X86_REG_EIP)
        assert at in (0x14ef33,0x14f174),hex(at)
        due_rows.append([fbits(next_time),fbits(now),int(at==0x14ef33)])
for mode in range(256):
    for same in (0,1):
        for damage in samples:
            m.context_restore(context)
            source=0x81;target=source if same else 0x182
            put(definition,source);m.mem_write(0x602e98,bytes([mode]))
            flt(sp+0x10,damage)
            m.reg_write(UC_X86_REG_EAX,definition);m.reg_write(UC_X86_REG_EBP,target)
            m.reg_write(UC_X86_REG_ESP,sp)
            m.emu_start(0x14f02b,stop,count=100)
            at=m.reg_read(UC_X86_REG_EIP)
            assert at in (0x14f053,0x14f13a),hex(at)
            delivery_rows.append([source,target,int(mode==0xfd),fbits(damage),int(at==0x14f053)])
for previous in range(256):
    for flags in range(256):
        m.context_restore(context)
        m.mem_write(definition+0x71,bytes([flags]));m.mem_write(sp+0x59,bytes([previous]))
        m.reg_write(UC_X86_REG_EBP,definition);m.reg_write(UC_X86_REG_ESP,sp)
        m.emu_start(0x14f097,stop,count=30)
        assert m.reg_read(UC_X86_REG_EIP)==0x14f0b6
        flag_rows.append([previous,flags,m.mem_read(sp+0x59,1)[0]])
m.hook_del(hook)

a.out.mkdir(parents=True, exist_ok=True)
source = r'''
#include "raven_numeric.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>
static float value(uint32_t b){float f;memcpy(&f,&b,4);return f;}
static uint32_t bits(float f){uint32_t b;memcpy(&b,&f,4);return b;}
static const uint32_t rows[][8]={ROWS};
static const uint32_t due_rows[][3]={DUE_ROWS};
static const uint32_t delivery_rows[][5]={DELIVERY_ROWS};
static const uint32_t flag_rows[][3]={FLAG_ROWS};
int main(void){
 for(unsigned i=0;i<sizeof(due_rows)/sizeof(due_rows[0]);++i){
  const uint32_t *r=due_rows[i];
  if(raven_xml2_harming_tick_due(value(r[0]),value(r[1]))!=r[2]){printf("FAIL due %u\n",i);return 1;}
 }
 for(unsigned i=0;i<sizeof(delivery_rows)/sizeof(delivery_rows[0]);++i){
  const uint32_t *r=delivery_rows[i];
  if(raven_xml2_harming_deliver(r[0],r[1],r[2],value(r[3]))!=r[4]){printf("FAIL delivery %u\n",i);return 1;}
 }
 for(unsigned i=0;i<sizeof(flag_rows)/sizeof(flag_rows[0]);++i){
  const uint32_t *r=flag_rows[i];
  if(raven_xml2_harming_record_flags((uint8_t)r[0],(uint8_t)r[1])!=r[2]){printf("FAIL flags %u\n",i);return 1;}
 }
 for(unsigned i=0;i<sizeof(rows)/sizeof(rows[0]);++i){
  const uint32_t *r=rows[i];float next=-123.0f;
  int changed=raven_xml2_harming_next_tick(value(r[2]),value(r[3]),value(r[3]),(uint8_t)r[0],&next);
  float damage=raven_xml2_harming_damage(value(r[5]),value(r[1]),value(r[4]),(uint8_t)r[0]);
  if(bits(next)!=r[6] || bits(damage)!=r[7] || changed!=(r[6]!=bits(-123.0f))){
   printf("FAIL row %u aps %u schedule %08x/%08x damage %08x/%08x\n",i,r[0],bits(next),r[6],bits(damage),r[7]);return 1;
  }
 }
 puts("PASS original-x86 comparisons: 2560 scheduler/damage, 64 due, 4096 self/skirmish/delivery, 65536 record flags");return 0;
}
'''
for name,values in [('DUE_ROWS',due_rows),('DELIVERY_ROWS',delivery_rows),('FLAG_ROWS',flag_rows),('ROWS',rows)]:
    source=source.replace(name, ',\n'.join('{'+','.join(str(v)+'u' for v in r)+'}' for r in values))
(a.out/'harming.c').write_text(source)
(a.out/'CMakeLists.txt').write_text(
    'cmake_minimum_required(VERSION 3.20)\nproject(HarmingOracle C)\n'
    f'add_executable(harming harming.c "{root.as_posix()}/src/raven_numeric.c")\n'
    f'target_include_directories(harming PRIVATE "{root.as_posix()}/src")\n')
subprocess.run(['cmake', '-S', str(a.out), '-B', str(a.out/'build')], check=True)
subprocess.run(['cmake', '--build', str(a.out/'build'), '--config', 'Release'], check=True)
subprocess.run([str(a.out/'build/Release/harming.exe')], check=True)
(a.out/'result.json').write_text(json.dumps({'xbe_sha256':hashlib.sha256(data).hexdigest(),
    'cases':len(rows),'scheduler':'original 14EAB0, original pool/accessors; fixed clock per invocation',
    'damage':'original 14EFB9..14F00D; numeric portion only',
    'due_cases':len(due_rows),'delivery_gate_cases':len(delivery_rows),'record_flag_cases':len(flag_rows),
    'gate_entries':['14EF1A (native time getter)','14F02B (native skirmish getter)','14F097'],
    'not_covered':['actor eligibility','delivery','full lifecycle','XML1 adapter','gameplay']},indent=2))
