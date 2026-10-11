"""Preserve traced progression boundaries only during native NewGame+ startup."""
from pathlib import Path
from recomp_source import RecompSources
root=Path(__file__).resolve().parents[1]
hooks={
 'command': [('loc_0011C680: ;', '\n    { int ng=xml1_newgame_plus_command(MEM32(esp+4));\n      if(ng<0){SET_LO8(eax,1);esp+=8;return;}\n      if(ng>0)MEM32(esp+4)=0x3E0734; /* Retail "newgame" queues the destructive reset safely. */ }\n')],
 'campaign': [('loc_0018DAED: ;', '\n    /* Alison normally restores snapshot zero (the level-one baseline), then\n     * captures it again. In NG+, invalidate only that restore so the native\n     * capture establishes the carried progression as the new baseline. */\n    if(xml1_newgame_plus_starting)MEM8(MEM32(0x48D59C)+XML1_MANAGER_OFFSET(0xDAC4))=0;\n'),('loc_0018D122: ;','\n    xml1_newgame_plus_finish();'),('loc_0018D134: ;','\n    xml1_newgame_plus_finish();')],
 'roster': [('loc_00054A10: ;', "\n    /* resetgame's campaign-list clear; retain availability, not mission flags. */\n    if(xml1_newgame_plus_starting && MEM32(esp)==0x0018CFFC){esp+=4;return;}\n")],
 'danger-room': [('loc_000C0700: ;', '\n    /* resetgame resets Danger Room credits and unlock flags; retain them in NG+. */\n    if(xml1_newgame_plus_starting && MEM32(esp)==0x0018CFB5){esp+=4;return;}\n')],
 'inventory': [('loc_0007E2F0: ;', '\n    /* resetgame clears shared inventory counts/currency and adds starter\n     * potions. Keep the native inventory, avoiding loss or duplication. */\n    if(xml1_newgame_plus_starting && MEM32(esp)==0x0018CFD8){esp+=4;return;}\n')],
}
# CharacterManager's vtable +34 walks playable definitions and calls 47810,
# which zeroes CharacterStats' equipped-item count (+1E0). Shared inventory
# preservation alone cannot retain gear: equipped copies have already been
# removed from that inventory. Skip only resetgame's equipment-clear call;
# ordinary unequip, load and New Game keep their native behavior.
hooks['roster'].append(('loc_00054F10: ;',
 '\n    if(xml1_newgame_plus_starting && MEM32(esp)==0x0018D008){esp+=4;return;}\n'))
# Optional read-only diagnostics retain the traced reset boundaries across regeneration.
# They are dormant unless XML1_NEWGAME_TRACE names a developer evidence directory.
for phase in ('0018CF90','0018CFF0','0018CFFC','0018D008','0018D092',
              '0018D0B0','0018D102','0018DA90','0018DAF9','0018DC9E'):
 hooks['campaign'].append(('loc_'+phase+': ;','\n    xml1_newgame_trace("'+phase+'");'))
index=RecompSources(root/'src/recomp/gen')
changes={marker[4:12]:(marker,body) for group in hooks.values() for marker,body in group}
for p,entries in index.grouped_labels(changes).items():
 s=p.read_text()
 for marker,body in entries.values():
  if s.count(marker)!=1:raise SystemExit('Retrace missing boundary: '+marker)
  head,tail=s.split(marker,1)
  end=tail.find('\nloc_')
  if end<0:end=len(tail)
  # Only deduplicate this boundary: finish() intentionally occurs at both
  # native exit labels. Other guards may precede this hook at the same label.
  section=tail[:end].replace(body, "")
  s=head+marker+body+section+tail[end:]
 if '#include "game/xml1/newgame_plus.h"' not in s:s=s.replace('#include "recomp_funcs.h"','#include "recomp_funcs.h"\n#include "game/xml1/newgame_plus.h"\n#include "game/xml1/character_limits.h"',1)
 if any(address in entries for address in (marker[4:12] for marker,body in hooks['campaign'])) and '#include "diagnostics/newgame_trace.h"' not in s:
  s=s.replace('#include "game/xml1/newgame_plus.h"','#include "game/xml1/newgame_plus.h"\n#include "diagnostics/newgame_trace.h"',1)
 p.write_text(s)
print('Installed native NewGame+ carry-over boundaries')
