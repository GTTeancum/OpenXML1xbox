"""dangerRoomUnlockAll: open every main-menu Danger Room mode, character and arena.

The main-menu Danger Room reads three pieces of progression state:
- 001716F0 stores GameState vtable+0x38 (0008C020, the highest level reached,
  GameState+0x194) at menu+0xEDC. Sparring needs more than 5, Skirmish more
  than 15, and the skirmish game types 15, 18, 23 and 30 (0016EF30, 0016F010).
- 00170E90 lists a character only when GameState vtable+0x34 (0008C3B0, the
  character-unlocked bitmap at GameState+0x150) has its bit; course rewards
  set it ("Unlocked %s For Sparring").
- 0016F9C0 disables an arena whose record (0x2C bytes from 004E7948) lacks
  bit 0 of +0x28; completing an arena's courses sets it for the next one.

With the option on, each check reads as unlocked at its call site only: the
level is the cap of 45 and every listed character and arena counts. Nothing is
written to GameState, so saves keep their real progress and turning the
option off restores the original rules.
"""
from pathlib import Path

path = Path(__file__).resolve().parents[1] / 'src/recomp/gen/recomp_0031.c'
text = path.read_text(encoding='utf-8')

def replace_once(text, old, new):
    if new in text:
        return text
    if text.count(old) != 1:
        raise ValueError(f'Expected one Danger Room boundary: {old}')
    return text.replace(old, new, 1)

if '#include "build_settings.h"' not in text:
    text = text.replace('#include "recomp_funcs.h"', '#include "recomp_funcs.h"\n#include "build_settings.h"', 1)
text = replace_once(text, 'loc_0017179E: ;\n    MEM32(esi + 0xEDC) = eax;',
    'loc_0017179E: ;\n    /* dangerRoomUnlockAll: the menu sees the level cap. */\n'
    '    if (xml1_build_settings.danger_room_unlock_all) eax = 45;\n    MEM32(esi + 0xEDC) = eax;')
text = replace_once(text, 'loc_00170F6A: ;\n',
    'loc_00170F6A: ;\n    /* dangerRoomUnlockAll: every listed character counts as unlocked. */\n'
    '    if (xml1_build_settings.danger_room_unlock_all) SET_LO8(eax, 1);\n')
text = replace_once(text, 'loc_0016FA1D: ;\n',
    'loc_0016FA1D: ;\n    /* dangerRoomUnlockAll: every arena counts as unlocked. */\n'
    '    if (xml1_build_settings.danger_room_unlock_all) goto loc_0016FA31;\n')
path.write_text(text, encoding='utf-8')
print('Danger Room unlock guard applied')
