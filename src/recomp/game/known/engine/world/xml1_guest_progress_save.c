#define RECOMP_GENERATED_CODE
#include "engine/actors/raven_leader_event_guest.h"
#include "engine/scripting/raven_script_extensions.h"
#include "engine/world/raven_campaign_state_guest.h"
#include "engine/world/raven_progress_guest.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_progress_save; original guest entry 0x0008C030.
 * Evidence: src/engine/world/raven_progress_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_0008C030
 * Original: 0x0008C030 - 0x0008C045 (21 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_progress_save(void)
{

loc_0008C030: ;
    ecx = ecx + 4;
    PUSH32(esp, 0x194);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x0008C042u); RECOMP_ABI_CALL(0x0006E7E0u, sub_0006E7E0); /* call 0x0006E7E0 */

loc_0008C042: ;
    xml1_progress_campaign_save(MEM32(esp+4));
    esp += 8; return; /* ret 4 */

}
