"""Add only the missing removal-event health gate to native eligibility.

Keep XML1's player bypass, event boolean virtual24 and energy calculation.
Native registers still name the event/actor at accumulation and both exits.
"""
from pathlib import Path
from recomp_source import RecompSources, find_function
root=Path(__file__).resolve().parents[1]
index=RecompSources(root/'src/recomp/gen')
p=index.path(0xE1A20);s=p.read_text()
m=find_function(s,0xE1A20)
b=m[0]
decl='    double _xml1_removal_health=0;\n'
if decl not in b:b=b.replace('{\n','{\n'+decl,1)
for address,call,following in (
    ('000E1A8F','    _xml1_removal_health += xml1_removal_health_requirement(esi,ebx);\n',
     '    fp_top() = xml1_raven_energy_query(esi, ebx, fp_top());'),
    ('000E1AB6','    if(_xml1_removal_health>0 && MEMF(ebx+0x240)<_xml1_removal_health) goto loc_000E1ADD;\n','    POP32(esp, esi);'),
    ('000E1AD1','    if(_xml1_removal_health>0 && MEMF(ebx+0x240)<_xml1_removal_health) goto loc_000E1ADD;\n','    POP32(esp, esi);'),
):
    marker=f'loc_{address}: ;\n'
    if address=='000E1A8F':
        # Keep the earlier energy guard's marker-adjacent hook intact so both
        # generation passes remain idempotent in their configured order.
        if marker+call+following in b:
            b=b.replace(marker+call+following,marker+following+'\n'+call.rstrip('\n'),1)
        anchor=marker+following+'\n'
        if anchor+call in b:continue
        if b.count(anchor)!=1:raise SystemExit('Changed energy query integration boundary')
        b=b.replace(anchor,anchor+call,1)
        continue
    if marker+call in b:continue
    if b.count(marker+following)!=1:raise SystemExit('Changed health eligibility boundary '+address)
    b=b.replace(marker,marker+call,1)
s=s[:m.start()]+b+s[m.end():]
inc='#include "engine/combat/raven_bishop_guest.h"\n'
if inc not in s:s=inc+s
if p.read_text()!=s:p.write_text(s)
print('Installed missing removal health accumulation and ordinary success gates')
