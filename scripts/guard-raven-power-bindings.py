"""Install the XML2 default-chain resolution seam in XML1's move lookup."""
from pathlib import Path
root=Path(__file__).resolve().parents[1]
path=root/'src/recomp/gen/recomp_0020.c'
source=path.read_text()
start=source.index('loc_000ED724: ;\n')
end=source.index('loc_000ED733: ;\n',start)
old=source[start:end]
replacement='''loc_000ED724: ;
    /* XML2 110A10 adds per-actor resolution before native move lookup. */
    xml1_raven_power_lookup(edi, eax, ebp, MEM32(esp + 0x1C));

'''
if old!=replacement:
    if 'RECOMP_ABI_CALL(0x000ED500u, sub_000ED500)' not in old:
        raise SystemExit('Native ED724 lookup seam changed')
    source=source[:start]+replacement+source[end:]
include='#include "raven_power_bindings_guest.h"\n'
if include not in source:source=include+source
if source!=path.read_text():path.write_text(source)
path=root/'src/recomp/gen/recomp_0030.c'
source=path.read_text()
start=source.index('loc_0015EB6B: ;\n')
end=source.index('loc_0015EB72: ;\n',start)
old=source[start:end]
replacement='''loc_0015EB6B: ;
    /* Actor ebx owns the slot, while native HUD requirements use NULL. */
    xml1_raven_power_hud_lookup(eax, ebp, ebx);
    esp += 8; /* consume the original ED6E0 arguments */

'''
if old!=replacement:
    if 'RECOMP_ABI_CALL(0x000ED6E0u, sub_000ED6E0)' not in old:
        raise SystemExit('Native HUD lookup seam changed')
    source=source[:start]+replacement+source[end:]
if include not in source:source=include+source
if source!=path.read_text():path.write_text(source)
path=root/'src/recomp/gen/recomp_0019.c'
source=path.read_text()
start=source.index('loc_000E7161: ;\n')
end=source.index('loc_000E7169: ;\n',start)
old=source[start:end]
replacement='''loc_000E7161: ;
    /* Action enumeration also performs move lookup without ED700. */
    xml1_raven_power_lookup(edi, eax, ebp, MEM32(esp));
    esp += 4; /* consume the pending requirement-actor argument */

'''
if old!=replacement:
    if 'RECOMP_ABI_CALL(0x000ED6E0u, sub_000ED6E0)' not in old:
        raise SystemExit('Native action enumeration seam changed')
    source=source[:start]+replacement+source[end:]
if include not in source:source=include+source
if source!=path.read_text():path.write_text(source)
print('Installed XML2 per-character power binding lookup')
marker='loc_000EA31C: ;\n'
call='    xml1_raven_power_icon_grid(edi);\n'
if marker+call not in source:
    if source.count(marker)!=1:raise SystemExit('Native icon texture initialization changed')
    source=source.replace(marker,marker+call,1)
if source!=path.read_text():path.write_text(source)

# Observe native lookup/eligibility without changing either result.
path=root/'src/recomp/gen/recomp_0020.c'
source=path.read_text()
for address,call in [
    ('000ED587','xml1_raven_move_search_trace(0xED587,ebp,MEM32(MEM32(esp+0x10)+ebp*4),eax,0);'),
    ('000ED59F','xml1_raven_move_search_trace(0xED59F,ebp,MEM32(MEM32(esp+0x10)+ebp*4),esi,eax);')]:
    marker='loc_'+address+': ;\n'
    if marker+'    '+call not in source:
        if source.count(marker)!=1:raise SystemExit('Native move trace seam changed')
        source=source.replace(marker,marker+'    '+call+'\n',1)
if source!=path.read_text():path.write_text(source)
