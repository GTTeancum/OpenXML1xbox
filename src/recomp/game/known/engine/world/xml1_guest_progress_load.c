#define RECOMP_GENERATED_CODE
#include "engine/actors/raven_leader_event_guest.h"
#include "engine/scripting/raven_script_extensions.h"
#include "engine/world/raven_campaign_state_guest.h"
#include "engine/world/raven_progress_guest.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_progress_load; original guest entry 0x0008C050.
 * Evidence: src/engine/world/raven_progress_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_0008C050
 * Original: 0x0008C050 - 0x0008C070 (32 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_progress_load(void)
{

loc_0008C050: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x194);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0008C065u); RECOMP_ABI_CALL(0x0006E830u, sub_0006E830); /* call 0x0006E830 */

loc_0008C065: ;
    xml1_progress_campaign_load(esi, MEM32(esp+8));
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0008C06Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008C06C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
