"""Preserve traced progression boundaries only during native NewGame+ startup."""
from pathlib import Path
root=Path(__file__).resolve().parents[1]
hooks={
 'recomp_0023.c': [('loc_0011C680: ;', '\n    { int ng=xml1_newgame_plus_command(MEM32(esp+4));\n      if(ng<0){SET_LO8(eax,1);esp+=8;return;}\n      if(ng>0)MEM32(esp+4)=0x3E0734; /* Retail "newgame" queues the destructive reset safely. */ }\n')],
 'recomp_0034.c': [('loc_0018DAED: ;', '\n    /* Alison normally restores snapshot zero (the level-one baseline), then\n     * captures it again. In NG+, invalidate only that restore so the native\n     * capture establishes the carried progression as the new baseline. */\n    if(xml1_newgame_plus_starting)MEM8(MEM32(0x48D59C)+XML1_MANAGER_OFFSET(0xDAC4))=0;\n'),('loc_0018D122: ;','\n    xml1_newgame_plus_finish();'),('loc_0018D134: ;','\n    xml1_newgame_plus_finish();')],
 'recomp_0005.c': [('loc_00054A10: ;', "\n    /* resetgame's campaign-list clear; retain availability, not mission flags. */\n    if(xml1_newgame_plus_starting && MEM32(esp)==0x0018CFFC){esp+=4;return;}\n")],
 'recomp_0016.c': [('loc_000C0700: ;', '\n    /* resetgame resets Danger Room credits and unlock flags; retain them in NG+. */\n    if(xml1_newgame_plus_starting && MEM32(esp)==0x0018CFB5){esp+=4;return;}\n')],
 'recomp_0009.c': [('loc_0007E2F0: ;', '\n    /* resetgame clears shared inventory counts/currency and adds starter\n     * potions. Keep the native inventory, avoiding loss or duplication. */\n    if(xml1_newgame_plus_starting && MEM32(esp)==0x0018CFD8){esp+=4;return;}\n')],
}
# Optional read-only diagnostics retain the traced reset boundaries across regeneration.
# They are dormant unless XML1_NEWGAME_TRACE names a developer evidence directory.
for phase in ('0018CF90','0018CFF0','0018CFFC','0018D008','0018D092',
              '0018D0B0','0018D102','0018DA90','0018DAF9','0018DC9E'):
 hooks['recomp_0034.c'].append(('loc_'+phase+': ;','\n    xml1_newgame_trace("'+phase+'");'))
for name,entries in hooks.items():
 p=root/'src/recomp/gen'/name;s=p.read_text()
 for marker,body in entries:
  hook=marker+body
  if hook in s:continue
  if s.count(marker)!=1:raise SystemExit('Retrace missing boundary: '+marker)
  s=s.replace(marker,hook,1)
 if '#include "newgame_plus.h"' not in s:s=s.replace('#include "recomp_funcs.h"','#include "recomp_funcs.h"\n#include "newgame_plus.h"\n#include "character_limits.h"',1)
 if name=='recomp_0034.c' and '#include "newgame_trace.h"' not in s:
  s=s.replace('#include "newgame_plus.h"','#include "newgame_plus.h"\n#include "newgame_trace.h"',1)
 p.write_text(s)
print('Installed native NewGame+ carry-over boundaries')
