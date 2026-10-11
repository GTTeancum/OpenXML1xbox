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

/* xml1_guest_character_talent_map_destroy; original guest entry 0x00048EE0.
 * Evidence: tests/engine/progression/character_talent_map_native_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00048EE0
 * Original: 0x00048EE0 - 0x00048EEB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_character_talent_map_destroy(void)
{
    /* XML1 OWNED CHARACTER TALENT MAP */
    const uint32_t _character_original=ecx;
    const uint32_t _character_map=xml1_character_talent_map_resolve(ecx);
    const int _character_expanded=xml1_character_talent_map_contains(_character_map);
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00048EE0: ;
    ecx = _character_map + (_character_expanded ? 0x141cu : 0x168u);
    g_seh_ebp = ebp; xml1_guest_character_talent_records_clear();
    if (_character_expanded) xml1_character_talent_map_retire(_character_original);
    return; /* native tail call consumed the guest return address */

}
