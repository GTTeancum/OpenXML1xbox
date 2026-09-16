"""Expand verified CharacterManager layout after regeneration.

This is a layout change, not a global replacement of 24/32/0x484. The retail
World XBE's CharacterManager methods occupy 0x54150..0x57090. Pool methods
receive manager+4, while manager methods receive the manager itself. The few
mixed-base methods are handled explicitly below. Unrelated stack frames and
other template instantiations keep their original layouts.
"""
from pathlib import Path
import re

ROOT = Path(__file__).resolve().parents[1]
MARK = '/* XML1 CHARACTER LAYOUT v2 */'
POOL = {0x54830, 0x548A0, 0x54AC0, 0x558C0, 0x55920, 0x55E30,
        0x55F70, 0x560B0}
FIELDS = {0x6C60: 0xD980, 0x6C64: 0xD988, 0x6CC8: 0xDA4C,
          0x6CCC: 0xDA50, 0x6CD0: 0xDA54, 0x6CD4: 0xDA58,
          0x6CD8: 0xDA60, 0x6CDC: 0xDA64, 0x6CE0: 0xDA68,
          0x6D3C: 0xDB24, 0x6D40: 0xDB28}
DELTA = 0x6DE8
SNAPSHOT_EXTRA = (48 - 17) * 0x1E4

def manager_offset(old):
    return old + DELTA + (2 * SNAPSHOT_EXTRA if old >= 0xDAC0 else SNAPSHOT_EXTRA if old >= 0xBA98 else 0)

def rewrite(body, pool):
    def value(m):
        old = int(m[0], 16)
        if old == 0x2028:
            return 'XML1_SNAPSHOT_BYTES'
        if old == 0x484:
            return '0x488'
        if old == 0xDDD0:
            return 'XML1_MANAGER_BYTES'
        if pool and old in FIELDS:
            return f'0x{FIELDS[old]:X}'
        if not pool:
            # +6D3C in manager routines is specifically accessed through a
            # derived pool pointer (54C30/54CB0/54FD0/550E0/56E60).
            if old == 0x6D3C:
                return '0xDB24'
            if old - 4 in FIELDS:
                return f'0x{FIELDS[old - 4] + 4:X}'
            # Parser forms metadata[index-1]; its base is biased by -24.
            if old == 0x6D30 or 0x6D44 <= old < 0xDDD0:
                return f'0x{manager_offset(old):X}'
        return m[0]
    return re.sub(r'0x[0-9A-Fa-f]+', value, body)

def change(fn, body):
    if MARK in body:
        return body
    if fn == 0x56220:
        a = body.index('loc_00056883: ;')
        b = body.index('loc_00056934: ;')
        body = rewrite(body[:a], False) + rewrite(body[a:b], True) + rewrite(body[b:], False)
    else:
        body = rewrite(body, fn in POOL)
    if fn in (0x549A0, 0x54AA0, 0x54E10, 0x54E90):
        # Constructor/destructor and snapshot copy/restore only. Save readers
        # need format-aware record counts before their loops can be widened.
        body = re.sub(r'0x11\b', 'XML1_SNAPSHOT_COUNT', body)
    if fn in POOL or fn == 0x56220:
        # Comparisons only: 0x18 is also the metadata record stride and the
        # six-handle reset-loop increment, neither of which is a capacity.
        body = body.replace('(uint32_t)(0x18) & 0xFFFFFFFFu',
                            '(uint32_t)(XML1_CHARACTER_POOL_CAPACITY) & 0xFFFFFFFFu')
    if fn in (0x55E30, 0x558C0, 0x55920):
        body = body.replace('ecx = 0x17;', 'ecx = XML1_CHARACTER_POOL_CAPACITY - 1;')
        body = body.replace('eax = 0x17;', 'eax = XML1_CHARACTER_POOL_CAPACITY - 1;')
    if fn == 0x55E30:
        body = body.replace('MEM32(esi + 0xD980) = edi;',
            'MEM32(esi + 0xD980) = edi;\n    MEM32(esi + 0xD984) = edi; /* constructed slots 32..47 */')
        body = body.replace('MEM32(esi + 0xDA58) = edi;',
            'MEM32(esi + 0xDA58) = edi;\n    MEM32(esi + 0xDA5C) = edi; /* allocated slots 32..47 */')
    if fn == 0x55F70:
        body = body.replace('MEM32(esi + 0xDA58) = eax;',
            'MEM32(esi + 0xDA58) = eax;\n    MEM32(esi + 0xDA5C) = eax; /* reset both allocation words */')
    if fn == 0x548A0:
        body = body.replace('MEM32(edi) = 0;',
            'MEM32(edi) = 0;\n    MEM32(edi + 4) = 0; /* reset both construction words */')
    return body.replace('{', '{\n    ' + MARK, 1)

changed = 0
for p in (ROOT/'src/recomp/gen').glob('recomp_*.c'):
    old = p.read_text(encoding='utf-8')
    if '/* XML1 CHARACTER LAYOUT v1 */' in old:
        raise SystemExit('Layout changed: regenerate code before applying v2')
    # Split at declarations so changes never escape an audited method.
    chunks = re.split(r'(?=void sub_[0-9A-F]{8}\(void\))', old)
    for i, chunk in enumerate(chunks):
        m = re.match(r'void sub_([0-9A-F]{8})\(void\)', chunk)
        if not m:
            continue
        fn = int(m[1], 16)
        if 0x54150 <= fn <= 0x57090 and MARK not in chunk:
            chunks[i] = change(fn, chunk)
            changed += 1
    new = ''.join(chunks)
    if new != old:
        if '#include "character_limits.h"' not in new:
            new = new.replace('#include "recomp_funcs.h"', '#include "recomp_funcs.h"\n#include "character_limits.h"', 1)
        p.write_text(new, encoding='utf-8')
print(f'Character layout: updated {changed} method bodies')

# Keep the extension idempotent and fail if a generated instruction changes.
def replace_once(text, old, new):
    if new in text:
        return text
    if text.count(old) != 1:
        raise ValueError(f'Expected one verified costume boundary: {old}')
    return text.replace(old, new, 1)

for name in ('recomp_0005.c', 'recomp_0010.c', 'recomp_0014.c'):
    p = ROOT/'src/recomp/gen'/name
    original = s = p.read_text(encoding='utf-8')
    # The access helpers need MEM8 from recomp_funcs.h, so include afterward.
    s = s.replace('#include "character_limits.h"\n', '')
    s = s.replace('#include "recomp_funcs.h"', '#include "recomp_funcs.h"\n#include "character_limits.h"', 1)
    if name == 'recomp_0005.c':
        # 56FC3 derives an index by adding the NEGATIVE old campaign-list base.
        # Relocating positive accesses alone makes save loading walk past it.
        s = replace_once(s, 'ebp = 0xFFFF2538u;',
            'ebp = (uint32_t)(0u - XML1_MANAGER_OFFSET(0xDAC8u)); /* inverse relocated list base */')
        if '[CHARACTER TRACE] definitions=' not in s:
            s = replace_once(s, 'loc_00056A33: ;', r'''loc_00056A33: ;
        if (getenv("XML1_CHARACTER_TRACE")) {
            unsigned pc_count = MEM32(esi + XML1_MANAGER_OFFSET(0xDCCC));
            fprintf(stderr, "[CHARACTER TRACE] definitions=%u herostat=%u instantiated=%u\n",
                MEM32(esi + 0x8534 + XML1_MANAGER_DELTA), pc_count, MEM32(esi + 4 + XML1_POOL_LIVE_COUNT));
            for (unsigned pc_i = 0; pc_i < pc_count; ++pc_i) {
                unsigned pc_id = MEM8(esi + XML1_MANAGER_OFFSET(0xDBCC) + pc_i);
                unsigned pc_meta = esi + 0x6D48 + XML1_MANAGER_DELTA + pc_id * 24;
                unsigned pc_handle = MEM32(pc_meta + 16);
                if (!pc_handle) continue;
                unsigned pc_char = esi + 4 + (pc_handle & 63) * XML1_CHARACTER_BYTES;
                fprintf(stderr, "[CHARACTER TRACE] id=%u slot=%u name=%s selected=%u skins=",
                    pc_id, pc_handle & 63, (const char *)((uintptr_t)g_xbox_mem_offset + pc_char + 0x20C), MEM8(pc_char + 0x1E));
                for (unsigned pc_c=0; pc_c<XML1_SKIN_CATEGORY_COUNT; ++pc_c)
                    fprintf(stderr, "%s%u", pc_c ? "," : "", XML1_SKIN_BYTE(pc_char,pc_c)+1);
                fprintf(stderr, "\n");
            }
        }''')
    if name == 'recomp_0014.c':
        s = replace_once(s,
            'PUSH32(esp, 0x000AFEFEu); RECOMP_ABI_CALL(0x00084390u, sub_00084390); /* call 0x00084390 */',
            '''/* Extended names belong to CharacterDef's herostat skin_ table.
     * Mission defaults use a different packed enum; keep that retail lookup. */
    { int extra = xml1_extra_skin_category((const char *)((uintptr_t)g_xbox_mem_offset + eax));
      if (extra >= 0) eax = (unsigned)extra;
      else { PUSH32(esp, 0x000AFEFEu); RECOMP_ABI_CALL(0x00084390u, sub_00084390); }
    }''')
        s = replace_once(s, 'loc_000AFF0B: ;\n    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8)',
            'loc_000AFF0B: ;\n    /* Herostat categories, not physical skin numbers. */\n    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(XML1_SKIN_CATEGORY_COUNT)')
        s = replace_once(s, 'MEM8(esi + ebp + 0x372) = LO8(eax);',
            'XML1_SKIN_BYTE(ebp, esi) = LO8(eax); /* New names use appended storage. */')
        s = replace_once(s, 'ecx = esi + 0x372;\n    MEM32(ecx) = eax;',
            'ecx = esi + 0x372;\n    MEM32(esi + 0x484) = 0; /* Reset extra skins when a pool slot is reused. */\n    MEM32(ecx) = eax;')
        s = replace_once(s, 'MEM8(esp + 7) = LO8(eax);\n    if ((LO8(eax) == 0))',
            'SET_LO8(eax, LO8(eax) | MEM8(esi + 0x484) | MEM8(esi + 0x485) | MEM8(esi + 0x486));\n    MEM8(esp + 7) = LO8(eax);\n    if ((LO8(eax) == 0))')
        cycle_start = s.index('loc_000B0DB3: ;')
        cycle_end = s.index('    _fa = (uint32_t)(MEM8(esi + 0x1E)) & 0xFFu;', cycle_start)
        cycle_hook = r'''loc_000B0DB3: ;
    /* Retail unlock checks above remain authoritative. Cycle distinct physical
     * skins across all eleven categories; mission-default flags stay intact.
     * Keep tracing in this same hook so regeneration is idempotent. */
    { unsigned pc_previous_skin = MEM8(esi + 0x1E);
      MEM8(esi + 0x1E) = (uint8_t)xml1_next_character_skin(esi);
      if (getenv("XML1_CHARACTER_TRACE"))
          fprintf(stderr, "[COSTUME CYCLE] name=%.20s old=%u new=%u\n",
              (const char *)((uintptr_t)g_xbox_mem_offset + esi + 0x20C),
              pc_previous_skin, MEM8(esi + 0x1E));
    }
    goto loc_000B0DF9;
'''
        s = s[:cycle_start] + cycle_hook + s[cycle_end:]
    if s != original:
        p.write_text(s, encoding='utf-8')

# Trace actual list insertions instead of inferring roster availability from
# successful herostat parsing or the number of frames rendered.
p = ROOT/'src/recomp/gen/recomp_0032.c'
s = p.read_text(encoding='utf-8')
n = replace_once(s, 'loc_00178770: ;', r'''loc_00178770: ;
    if (getenv("XML1_CHARACTER_TRACE") && MEM32(esp+4))
        fprintf(stderr, "[ROSTER LIST] owner=%08X caller=%08X name=%s\n", ecx, MEM32(esp),
            (const char *)((uintptr_t)g_xbox_mem_offset + MEM32(esp+4)));''')
if n != s:
    p.write_text(n, encoding='utf-8')

# Upgrade a v2 generated allocation without requiring another full generation.
p = ROOT/'src/recomp/gen/recomp_0005.c'
s = p.read_text(encoding='utf-8')
n = replace_once(s, 'PUSH32(esp, 0x1C0F0);', 'PUSH32(esp, XML1_MANAGER_BYTES);')
if n != s: p.write_text(n, encoding='utf-8')

# Version only the character-manager section. A retail save has sixteen
# herostat records and seventeen snapshots regardless of the expanded live
# roster. Preserve its cursor and skip new definitions when reading it.
p = ROOT/'src/recomp/gen/recomp_0005.c'
s = p.read_text(encoding='utf-8')
chunks = re.split(r'(?=void sub_[0-9A-F]{8}\(void\))', s)
for i, body in enumerate(chunks):
    m = re.match(r'void sub_([0-9A-F]{8})\(void\)', body)
    if not m or int(m[1],16) not in (0x54D40,0x56F10): continue
    marker = '/* XML1 versioned character save section */'
    if marker in body: continue
    body = body.replace('{', '{\n    '+marker, 1)
    if int(m[1],16) == 0x54D40:
        body = replace_once(body, 'edi = MEM32(esp + 0x10);',
            'edi = MEM32(esp + 0x10);\n    if (!xml1_character_save_header(esi, edi)) xml1_character_save_rejected();')
        body = replace_once(body, 'ebx = 0x11;', 'ebx = XML1_SNAPSHOT_COUNT;')
    else:
        body = body.replace(marker, marker+'\n    xml1_save_layout pc_save_layout;', 1)
        body = replace_once(body, 'ebx = MEM32(esp + 0x14);',
            'ebx = MEM32(esp + 0x14);\n    if (!xml1_character_load_header(esi, ebx, &pc_save_layout)) xml1_character_save_rejected();')
        body = replace_once(body, 'loc_00056F5D: ;',
            'loc_00056F5D: ;\n    if (!xml1_saved_definition(&pc_save_layout, MEM8(esp + 0xF))) goto loc_00056F80;')
        body = replace_once(body, 'edi = 0x11;', 'edi = pc_save_layout.snapshot_count;')
    chunks[i] = body
n = ''.join(chunks)
if '#include "character_save.h"' not in n:
    n = n.replace('#include "character_limits.h"', '#include "character_limits.h"\n#include "character_save.h"', 1)
n = replace_once(n, 'loc_00056F97: ;',
    'loc_00056F97: ;\n    xml1_character_save_trace(esi, "loaded");')
if n != s: p.write_text(n, encoding='utf-8')

p = ROOT/'src/recomp/gen/recomp_0031.c'
s = p.read_text(encoding='utf-8')
chunks = re.split(r'(?=void sub_[0-9A-F]{8}\(void\))', s)
for i, body in enumerate(chunks):
    m = re.match(r'void sub_([0-9A-F]{8})\(void\)', body)
    if not m or int(m[1],16) not in (0x164140,0x164240,0x16B970): continue
    fn = int(m[1],16)
    marker = '/* XML1 expanded Blackbird name cache */'
    if marker in body: continue
    if fn == 0x164140:
        body = body.replace('ebp = ecx;', 'ebp = XML1_MENU_ROSTER_BASE;')
        body = body.replace('MEM8(ebp + 0x140)', 'MEM8(0x571588)')
        body = body.replace('ecx = 0x50;', 'ecx = XML1_MENU_ROSTER_BYTES / 4;')
        body = body.replace('PUSH32(esp, 0x10);', 'PUSH32(esp, XML1_MENU_ROSTER_CAPACITY);')
    else:
        body = body.replace('0x571448', 'XML1_MENU_ROSTER_BASE')
    # Comparison operands only; leave stack offsets and cdecl cleanup alone.
    body = body.replace('(uint32_t)(0x10) &', '(uint32_t)(XML1_MENU_ROSTER_CAPACITY) &')
    body = body.replace('(uint32_t)(0x140) &', '(uint32_t)(XML1_MENU_ROSTER_BYTES) &')
    chunks[i] = body.replace('{', '{\n    '+marker, 1)
n = ''.join(chunks)
if '#include "character_limits.h"' not in n:
    n = n.replace('#include "recomp_funcs.h"', '#include "recomp_funcs.h"\n#include "character_limits.h"', 1)
if n != s: p.write_text(n, encoding='utf-8')

# Modder mode uses the native unlock state at load/menu/save boundaries. It is
# independent of process-local input fixtures and survives ordinary save loads.
for filename, hooks in {
    'recomp_0005.c': [('loc_00056A33: ;','esi'),('loc_00057041: ;','MEM32(0x48D59C)'),('loc_00054D40: ;','ecx')],
    'recomp_0031.c': [('loc_00164140: ;','MEM32(0x48D59C)')],
}.items():
    p=ROOT/'src/recomp/gen'/filename
    s=p.read_text(encoding='utf-8')
    if '#include "modder_mode.h"' not in s:
        s=s.replace('#include "character_limits.h"','#include "character_limits.h"\n#include "modder_mode.h"',1)
    for anchor,manager in hooks:
        s=replace_once(s,anchor,anchor+'\n    xml1_modder_unlock('+manager+');')
    p.write_text(s,encoding='utf-8')
p=ROOT/'src/recomp/gen/recomp_0011.c'
s=p.read_text(encoding='utf-8')
if '#include "build_settings.h"' not in s:
    s=s.replace('#include "recomp_funcs.h"','#include "recomp_funcs.h"\n#include "build_settings.h"',1)
s=replace_once(s,'loc_0008C2F0: ;','loc_0008C2F0: ;\n    /* Modder mode remains effective even if a loaded save resets GameState. */\n    if (xml1_build_settings.modder_mode) { SET_LO8(eax,1); esp+=4; return; }')
p.write_text(s,encoding='utf-8')
