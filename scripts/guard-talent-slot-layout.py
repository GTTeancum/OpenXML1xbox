"""Retain native slot glyphs while fitting long rank strips to XML1 columns."""
from pathlib import Path
import re
from recomp_source import RecompSources, find_function
ROOT=Path(__file__).resolve().parents[1]
MARK='/* XML1 LONG TALENT STRIP */'
def once(text,old,new):
    if text.count(old)!=1:raise RuntimeError('Missing/ambiguous talent layout boundary: '+old)
    return text.replace(old,new,1)
index=RecompSources(ROOT/'src/recomp/gen')
updates={}
for address in (0x153080,0x1535e0,0x18af60):
    path=index.path(address);source=updates.get(path,path.read_text())
    match=find_function(source,address)
    if not match:raise RuntimeError('Missing font function')
    body=match[0]
    if MARK in body:continue
    body=once(body,'{\n','{\n    '+MARK+'\n    float talent_strip_scale=1.0f, talent_glyph_scale=1.0f;\n')
    if address==0x153080:
        body=once(body,'loc_0015309B: ;','loc_0015309B: ;\n    talent_strip_scale=xml1_talent_slot_scale((const unsigned char*)((uintptr_t)g_xbox_mem_offset+ecx),4096);')
        body=once(body,'loc_0015319D: ;','loc_0015319D: ;\n    talent_glyph_scale=xml1_talent_slot_glyph(MEM8(esp+0x24))?talent_strip_scale:1.0f;')
        body=once(body,'fp_top() = fp_top() + MEMF(esp + 0x10);',
            'fp_top() *= talent_glyph_scale;\n    fp_top() = fp_top() + MEMF(esp + 0x10);')
    elif address==0x1535e0:
        body=once(body,'loc_001535FD: ;','loc_001535FD: ;\n    talent_strip_scale=xml1_talent_slot_scale((const unsigned char*)((uintptr_t)g_xbox_mem_offset+esi),4096);')
        body=once(body,'loc_001537B8: ;','loc_001537B8: ;\n    talent_glyph_scale=xml1_talent_slot_glyph(MEM8(esp+0x40))?talent_strip_scale:1.0f;')
        body=once(body,'fp_top() = fp_top() + MEMF(esp + 0x14);',
            'fp_top() *= talent_glyph_scale;\n    fp_top() = fp_top() + MEMF(esp + 0x14);')
    else:
        body=once(body,'loc_0018B0F3: ;','loc_0018B0F3: ;\n    talent_strip_scale=xml1_talent_slot_scale((const unsigned char*)((uintptr_t)g_xbox_mem_offset+MEM32(ebp+0x14)),4096);')
        marker='MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */\n    if (CMP_EQ(_fa, _fb)) goto loc_0018B3E8;'
        replacement='MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */\n    if(xml1_talent_slot_glyph(LO8(ebx))) {\n        /* Horizontal bitmap extent, bearing and advance; preserve vertical\n         * dimensions, UVs, colour/fill selection and every guest flag. */\n        MEMF(esp+0x48)*=talent_strip_scale;\n        MEMF(esp+0x10)*=talent_strip_scale;\n        MEMF(esp+0x50)*=talent_strip_scale;\n    }\n    if (CMP_EQ(_fa, _fb)) goto loc_0018B3E8;'
        body=once(body,marker,replacement)
    source=source[:match.start()]+body+source[match.end():]
    if '#include "engine/progression/talent_slot_layout.h"' not in source:source='#include "engine/progression/talent_slot_layout.h"\n'+source
    updates[path]=source
path=index.path(0x169200)
source=updates.get(path,path.read_text())
match=find_function(source,0x169200)
if not match:raise RuntimeError('Missing native talent strip builder')
body=match[0]
if '/* XML1 LONG STRIP BUFFER */' not in body:
    body=once(body,'loc_001699A0: ;','''loc_001699A0: ;
    /* XML1 LONG STRIP BUFFER */
    if((int)SMEM16(MEM32(esp+0x10))-(int)SMEM16(MEM32(esp+0x10)-2)+1>5)
        xml1_talent_slot_compact((unsigned char*)((uintptr_t)g_xbox_mem_offset+esp+0x98),128);''')
    source=source[:match.start()]+body+source[match.end():]
    if '#include "engine/progression/talent_slot_layout.h"' not in source:source='#include "engine/progression/talent_slot_layout.h"\n'+source
    updates[path]=source
for path,source in updates.items():path.write_text(source)
print('Installed native talent-strip measurement, wrapping and drawing')
