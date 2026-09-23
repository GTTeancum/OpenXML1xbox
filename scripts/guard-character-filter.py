"""Import XML2's skeleton classification at XML1's actual character parser."""
from pathlib import Path
root=Path(__file__).resolve().parents[1]
p=root/'src/recomp/gen/recomp_0014.c'
s=p.read_text()
# Character layout guard owns the expanded allocation and reuse reset. Refuse
# a retail-sized build, where +487 would be outside the object.
reset='MEM32(esi + 0x484) = 0;'
if reset not in s:raise SystemExit('Run character layout guard first')
marker='loc_000AFD70: ;\n'
hook='''    /* Imported property is stored in the expanded CharacterDef, never in
     * a host map or the adjacent costume bytes. Native fields continue below. */
    if (raven_character_filter_parse(&MEM8(ecx + XML1_CHARACTER_COMBAT_FLAGS),
            (const char *)XBOX_PTR(MEM32(esp + 4)),
            (const char *)XBOX_PTR(MEM32(esp + 8)))) {
        SET_LO8(eax, 1);
        esp += 12; return; /* native thiscall ret 8 */
    }
'''
if s.count(marker)!=1:raise SystemExit('Character parser boundary changed')
if marker+hook not in s:s=s.replace(marker,marker+hook,1)
include='#include "raven_filter_event.h"\n'
if include not in s:s=include+s
if s!=p.read_text():p.write_text(s)
print('Installed XML1 character skeleton-property parser')
