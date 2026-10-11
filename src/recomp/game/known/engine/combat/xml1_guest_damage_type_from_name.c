#define RECOMP_GENERATED_CODE
#include "engine/combat/raven_vitality_bonus.h"
#include "engine/powers/raven_victim_event_guest.h"
#include "engine/scripting/raven_remove_events.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/combat/raven_native_damage.h"
#include "engine/actors/raven_actor_scale_owner.h"
#include "engine/combat/raven_native_energy_guest.h"
#include "engine/combat/raven_native_energy.h"
#include "diagnostics/raven_operand_trace.h"
#include "engine/combat/raven_bishop_guest.h"
#include "engine/actors/raven_ai_modes.h"
#include "ui/pc_menu.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include "engine/combat/raven_vitality_save_guest.h"
#include "engine/progression/character_talent_guest.h"
#include <math.h>

/* xml1_guest_damage_type_from_name; original guest entry 0x00049480.
 * Evidence: tests/engine/powers/raven_powerup_guest_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00049480
 * Original: 0x00049480 - 0x000494A4 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_damage_type_from_name(void)
{

loc_00049480: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x44C498);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x0004949Cu); RECOMP_ABI_CALL(0x00123100u, sub_00123100); /* call 0x00123100 */

loc_0004949C: ;
    eax = MEM32(esp + 0xC);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}
