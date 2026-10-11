"""Attach missing vitality state to complete native character-stats lifetimes.

Do not hook talent-map copies: loading uses temporary maps to release old
talent references, and those temporaries do not own complete character stats.
"""
from pathlib import Path
from recomp_source import RecompSources
root=Path(__file__).resolve().parents[1]
hooks={
    'character-stats': (
        ('000472F0','xml1_vitality_reset_if_owned(ecx-4);','    edx = ecx;'),
        ('00048EF0','xml1_vitality_construct(ecx);','    PUSH32(esp, 0xFFFFFFFFu);'),
        ('000490F0','xml1_vitality_assign(ecx, MEM32(esp+4));','    PUSH32(esp, 0xFFFFFFFFu);'),
        ('00049003','xml1_vitality_retire(esi);','    ecx = MEM32(esp + 0xC);'),
        ('00047F9A','xml1_vitality_saved_record(ebx,ebp,0);','    SET_LO8(ecx, MEM8(_character_map'),
        ('000492D7','xml1_vitality_saved_record(edi-4,ebp,1);','    ecx = esi + 0xC;'),
    ),
    'character-save': (
        ('00054E01','xml1_vitality_stream_reset();','    POP32(esp, edi);'),
    ),
    'character-definition': (
        ('000AF0F0','xml1_vitality_construct(ecx);','    PUSH32(esp, 0xFFFFFFFFu);'),
        # edi is the CharacterDef, whose embedded complete stats starts at+4.
        # Add only the missing bonus after native affecters, before XML1's
        # existing clamp/conversion. Zero must not round or rewrite the FPU.
        ('000AFBAD','{ unsigned bonus=xml1_vitality_value(edi+4,0); if(bonus) fp_top()+=bonus; }',
         '    g_fp_cmp = RECOMP_FCMP'),
        ('000AFC7B','{ unsigned bonus=xml1_vitality_value(edi+4,1); if(bonus) fp_top()+=bonus; }',
         '    g_fp_cmp = RECOMP_FCMP'),
    ),
}
pending={}
index=RecompSources(root/'src/recomp/gen')
changes={address:(call,instruction) for group in hooks.values() for address,call,instruction in group}
for p,entries in index.grouped_labels(changes).items():
    s=p.read_text()
    for address,(call,instruction) in entries.items():
        marker=f'loc_{address}: ;\n'
        insert=f'#ifdef XML1_PERMANENT_VITALITY\n    {call}\n#endif\n'
        if s.count(marker)!=1:raise SystemExit('Missing vitality boundary '+address)
        if marker+insert in s:continue
        known='    if (_character_expanded) xml1_character_talent_map_retire(_character_original);\n' if address=='00049003' else ''
        if s.count(marker+instruction)!=1 and (not known or s.count(marker+known+instruction)!=1):
            raise SystemExit('Changed vitality native instruction '+address)
        s=s.replace(marker,marker+insert,1)
    include='#include "engine/combat/raven_vitality_bonus.h"\n'
    if include not in s:s=include+s
    if any(address in entries for address in ('00047F9A','000492D7')):
        # Guest-memory macros come from the generated file's normal includes.
        inc='#include "engine/combat/raven_vitality_save_guest.h"\n'
        if inc not in s:
            anchor='#include "engine/progression/character_talent_map_guest.h"\n'
            if anchor not in s:raise SystemExit('Missing native guest include boundary')
            s=s.replace(anchor,anchor+inc,1)
    pending[p]=s
for p,s in pending.items():
    if p.read_text()!=s:p.write_text(s)
print('Installed character-stats vitality construction, copy/assignment and final retirement hooks')
