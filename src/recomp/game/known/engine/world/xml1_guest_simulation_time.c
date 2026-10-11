#define RECOMP_GENERATED_CODE
#include "engine/powers/raven_victim_event_guest.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/combat/raven_native_damage.h"
#include "diagnostics/raven_operand_trace.h"
#include "engine/combat/raven_bishop_guest.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include "engine/progression/character_talent_guest.h"
#include <math.h>

/* xml1_guest_simulation_time; original guest entry 0x00066AB0.
 * Evidence: src/audio/raven_loop_sound_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00066AB0
 * Original: 0x00066AB0 - 0x00066ABE (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_simulation_time(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00066AB0: ;
    ecx = MEM32(0x48D8E8);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x104)); return; /* indirect tail jmp */

}
