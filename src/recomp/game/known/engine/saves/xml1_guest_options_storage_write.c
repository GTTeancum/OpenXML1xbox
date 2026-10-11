#define RECOMP_GENERATED_CODE
#include "engine/scripting/raven_script_extensions.h"
#include "engine/world/raven_progress_guest.h"
#include "ui/pc_menu.h"
#include "engine/saves/save_name.h"
#include "app/build_settings.h"
#include "engine/core/motionpath_name.h"
#include "recomp_funcs.h"
#include "game/xml1/newgame_plus.h"
#include "game/xml1/character_limits.h"
#include <math.h>

/* xml1_guest_options_storage_write; original guest entry 0x0011FE10.
 * Evidence: src/engine/world/raven_progress_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_0011FE10
 * Original: 0x0011FE10 - 0x0011FE49 (57 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_options_storage_write(void)
{

loc_0011FE10: ;
    if (xml1_progress_options_io(0)) return;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0011FE18u); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0011FE18: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DAA28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, 0x3DAA3C);
    PUSH32(esp, 0xBC0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011FE38u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0011FE38: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0011FE45u); RECOMP_ABI_CALL(0x0011FE50u, sub_0011FE50); /* call 0x0011FE50 */

loc_0011FE45: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}
