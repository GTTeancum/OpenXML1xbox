"""Adapt the recovered producer to the shared NV2A executor in a build copy.

Original XML2 XBE: 3F0520 tests handle bit0/object+4 bit10; shader
load routines use object+114. EFEC0/EFF20/EFFD0 upload physical constants.
3F1290 calls 3F0750 at return 3F12B8, then tests device+8 bit200.
Do not apply these addresses to XML1 or modify recovered input files.
"""
from pathlib import Path
import sys

root = Path(__file__).resolve().parents[1]
source, output, chunk, chunk_output = map(Path, sys.argv[1:])
s = source.read_text()
xml1 = (root / 'src/guest_graphics_live.c').read_text()

def replace(old, new):
    global s
    if s.count(old) != 1:
        raise SystemExit(f'XML2 shader adaptation anchor changed: {old[:90]}')
    s = s.replace(old, new)

replace('#include "xbox_memory_layout.h"', '#include "vertex_program.h"\n#include "xbox_memory_layout.h"')
state = xml1[xml1.index('static float vertex_constants'):xml1.index('static uint32_t methods')]
replace('static uint32_t methods', state+'static uint32_t methods')
helpers = xml1[xml1.index('void xml1_graphics_vertex_viewport'):xml1.index('void xml1_graphics_live_observe')]
helpers = helpers.replace('0x36CAF8', '0x003FF938')
replace('void xml1_graphics_live_observe', helpers+'void xml1_graphics_live_observe')
constants = xml1[xml1.index('    if(va==0x35D100'):xml1.index('    if(va==0x003680D0') if '    if(va==0x003680D0' in xml1 else xml1.index('    if(va==0x3680D0')]
constants = constants.replace('0x35D100','0x003EFEC0').replace('0x35D160','0x003EFF20').replace('0x35D210','0x003EFFD0')
replace('    const uint32_t *a=guest(g_esp+4,32);', '    const uint32_t *a=guest(g_esp+4,32);\n'+constants)
shader = xml1[xml1.index('    else if (va==0x35D760) {'):xml1.index('        if((fvf&1)&&getenv("XML1_TRACE_VERTEX_DECL"))')]
shader = shader.replace('0x35D760','0x003F0520')+'    }\n'
replace('    else if (va==0x003F0520) fvf=a[0];', shader)
replace('!xml1_fvf_stride(fvf)||stride!=xml1_fvf_stride(fvf)', '(!(fvf&1)&&(!xml1_fvf_stride(fvf)||stride!=xml1_fvf_stride(fvf)))')
replace('<<8),fvf,a[0]};', '<<8),(fvf&1)?XML1_VERTEX_PROGRAM_WIRE:fvf,a[0]};')
replace('                append(guest(0x80000000+(uint32_t)at,stride),stride);', '                if(fvf&1)append_program_vertex(guest(0x80000000+(uint32_t)at,stride));\n                else append(guest(0x80000000+(uint32_t)at,stride),stride);')
replace('            append(vertices,(size_t)bytes);', '            if(fvf&1)for(unsigned i=0;i<vertex_count;++i)append_program_vertex(vertices+(size_t)i*stride);\n            else append(vertices,(size_t)bytes);')
# The recovered producer locked submission but not construction. A resource
# fence on another guest thread could send/reset draws while append() was
# halfway through a draw, leaving texture dimensions at the next wire header.
# Serialize the whole observation with submission, including viewport-derived
# constants. Nested clear/fence calls retain the same ticket on this thread.
replace('static xml1_fair_gate transport_lock;',
        'static xml1_fair_gate transport_lock;\nstatic RECOMP_TLS unsigned transport_depth;')
replace('static void lock_transport(const char *operation) {',
        'static void lock_transport(const char *operation) {\n    if(transport_depth++)return;')
if s.count('xml1_fair_leave(&transport_lock);') != 3:
    raise SystemExit('XML2 transport release sites changed')
s=s.replace('xml1_fair_leave(&transport_lock);','unlock_transport();')
replace('static void fatal(const char* message) {', '''static void unlock_transport(void) {
    if(!transport_depth)fatal("unbalanced graphics transport release");
    if(!--transport_depth)xml1_fair_leave(&transport_lock);
}
static void fatal(const char* message) {''')
replace('void xml1_graphics_live_observe(uint32_t va) {',
        'static void graphics_observe_locked(uint32_t va) {')
replace('static void send_bytes(const void* data,size_t bytes) {', '''void xml1_graphics_live_observe(uint32_t va) {
    if(!live()||va<0x003EDB60||va>=0x00402128)return;
    lock_transport("observe");
    graphics_observe_locked(va);
    unlock_transport();
}
static void send_bytes(const void* data,size_t bytes) {''')
replace('void xml1_graphics_vertex_viewport(uint32_t offset,uint32_t scale) {',
        'static void vertex_viewport_locked(uint32_t offset,uint32_t scale) {')
replace('static void graphics_observe_locked(uint32_t va) {', '''void xml1_graphics_vertex_viewport(unsigned offset,unsigned scale) {
    lock_transport("viewport");
    vertex_viewport_locked(offset,scale);
    unlock_transport();
}
static void graphics_observe_locked(uint32_t va) {''')
output.write_text(s)
# Compile the actual adapted locking functions in the concurrency regression,
# rather than a second implementation that could drift from this producer.
lock_start=s.index('static xml1_fair_gate transport_lock;')
lock_end=s.index('static void fatal(const char* message) {',lock_start)
output.with_name('xml2-transport-test.inc').write_text(s[lock_start:lock_end])

c = chunk.read_text()
start = c.index('void sub_003F0750(void)')
end = c.index('void sub_003F0880(void)', start)
part = c[start:end]
anchor = '    esp = esp + 0x10;\n    esp += 12; return; /* ret 8 */'
if part.count(anchor) != 1:
    raise SystemExit('XML2 native viewport return changed')
part = part.replace(anchor, '    if(MEM32(esp+0x10)==0x003F12B8u)xml1_graphics_vertex_viewport(MEM32(esp+0x14),MEM32(esp+0x18));\n'+anchor)
c = c[:start]+part+c[end:]
c = 'void xml1_graphics_vertex_viewport(unsigned offset,unsigned scale);\n'+c
chunk_output.write_text(c)
