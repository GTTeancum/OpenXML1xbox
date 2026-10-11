#define RECOMP_GENERATED_CODE
#include "engine/actors/raven_leader_event_guest.h"
#include "engine/scripting/raven_script_extensions.h"
#include "engine/world/raven_campaign_state_guest.h"
#include "engine/world/raven_progress_guest.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_game_state_highest_level; original guest entry 0x0008C020.
 * Evidence: scripts/guard-danger-room-unlock.py
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_0008C020
 * Original: 0x0008C020 - 0x0008C028 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_game_state_highest_level(void)
{

loc_0008C020: ;
    eax = ZX8(MEM8(ecx + 0x194));
    esp += 4; return; /* ret */

}
