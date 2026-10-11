"""Install the XML2 default-chain resolution seam in XML1's move lookup."""
from pathlib import Path
from recomp_source import RecompSources
root=Path(__file__).resolve().parents[1]
index=RecompSources(root/'src/recomp/gen')
path=index.label_path(0xED724)
source=index.canonical_read(path)
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
include='#include "engine/powers/raven_power_bindings_guest.h"\n'
if include not in source:source=include+source
if source!=path.read_text():path.write_text(index.restore_names(source))
path=index.label_path(0x15EB6B)
source=index.canonical_read(path)
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
if source!=path.read_text():path.write_text(index.restore_names(source))
path=index.label_path(0xE7161)
source=index.canonical_read(path)
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
if source!=path.read_text():path.write_text(index.restore_names(source))
print('Installed XML2 per-character power binding lookup')
path=index.label_path(0xEA31C)
source=index.canonical_read(path)
marker='loc_000EA31C: ;\n'
call='    xml1_raven_power_icon_grid(edi);\n'
if marker+call not in source:
    if source.count(marker)!=1:raise SystemExit('Native icon texture initialization changed')
    source=source.replace(marker,marker+call,1)
if include not in source:source=include+source
if source!=path.read_text():path.write_text(index.restore_names(source))

# Observe native lookup/eligibility without changing either result.
path=index.label_path(0x164655)
source=index.canonical_read(path)
source=source.replace('    xml1_raven_talent_icon_grid(eax,esi,ebx);\n','')
marker='loc_00164655: ;\n'
call='    xml1_raven_talent_icon_grid(esi,edi);\n'
if marker+call not in source:
    if source.count(marker)!=1:raise SystemExit('Native talent icon texture seam changed')
    source=source.replace(marker,marker+call,1)
if include not in source:source=include+source
if source!=path.read_text():path.write_text(index.restore_names(source))

# Native gameplay hero-direction consumer. Preserve stock input unless the
# live imported character owns a POWER chord; mask pressed/held/released
# copies together so delayed native hero switching cannot leak through it.
input_path=index.label_path(0x35C3A)
input_source=index.canonical_read(input_path)
marker='loc_00035C3A: ;\n'
rotation='''    if(xml1_raven_power_rotate_input(ebp,ebx,eax,MEM32(esp+0x24))) {
        const uint32_t directions=(1u<<12)|(1u<<16)|(1u<<17)|(1u<<11);
        eax&=~directions;edi&=~directions;
        MEM32(esp+0x24)&=~directions;MEM32(esp+0x20)&=~directions;
    }
'''
if marker+rotation not in input_source:
    if input_source.count(marker)!=1 or marker+'    MEM32(esp + 0x18) = eax;' not in input_source:
        raise SystemExit('Native gameplay input seam changed')
    input_source=input_source.replace(marker,marker+rotation,1)
if include not in input_source:input_source=include+input_source
if input_source!=input_path.read_text():input_path.write_text(index.restore_names(input_source))

# resetgame reaches 54A10 from 18CFFC. Preserve the existing NG+ early return;
# ordinary campaign resets discard selected powers from the previous game.
# The other native callers merely edit availability and must not reset them.
reset_path=index.label_path(0x54A10)
reset_source=index.canonical_read(reset_path)
anchor='if(xml1_newgame_plus_starting && MEM32(esp)==0x0018CFFC){esp+=4;return;}'
reset_call='\n    if(MEM32(esp)==0x0018CFFC) raven_power_selections_read(NULL,0);'
if reset_call not in reset_source:
    if reset_source.count(anchor)!=1:raise SystemExit('Native new-game selection reset seam changed')
    reset_source=reset_source.replace(anchor,anchor+reset_call,1)
save_include='#include "engine/powers/raven_power_selection_save.h"\n'
if save_include not in reset_source:reset_source=save_include+reset_source
if reset_source!=reset_path.read_text():reset_path.write_text(index.restore_names(reset_source))

# Observe native lookup/eligibility without changing either result.
path=index.label_path(0xED587)
source=index.canonical_read(path)
for address,call in [
    ('000ED587','xml1_raven_move_search_trace(0xED587,ebp,MEM32(MEM32(esp+0x10)+ebp*4),eax,0);'),
    ('000ED59F','xml1_raven_move_search_trace(0xED59F,ebp,MEM32(MEM32(esp+0x10)+ebp*4),esi,eax);')]:
    marker='loc_'+address+': ;\n'
    if marker+'    '+call not in source:
        if source.count(marker)!=1:raise SystemExit('Native move trace seam changed')
        source=source.replace(marker,marker+'    '+call+'\n',1)
if include not in source:source=include+source
if source!=path.read_text():path.write_text(index.restore_names(source))
