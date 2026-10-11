#define RECOMP_GENERATED_CODE
#include "engine/combat/raven_vitality_bonus.h"
#include "engine/powers/raven_power_selection_save.h"
#include "engine/actors/raven_leader_definition.h"
#include "engine/actors/raven_ai_modes.h"
#include "engine/actors/raven_actor_transform_owner.h"
#include "engine/actors/raven_character_race.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include "game/xml1/newgame_plus.h"
#include "game/xml1/character_limits.h"
#include <math.h>
#include "engine/progression/character_save.h"
#include "game/xml1/modder_mode.h"

/* xml1_guest_character_manager_skin_name; original guest entry 0x00056D30.
 * Evidence: docs/BETA-ISSUE-REPAIR.md
 * Evidence: scripts/guard-character-limits.py
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00056D30
 * Original: 0x00056D30 - 0x00056D43 (19 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_character_manager_skin_name(void)
{
    /* XML1 CHARACTER LAYOUT v2 */

loc_00056D30: ;
    eax = ZX8(MEM8(esp + 4));
    eax = eax + eax * 2;
    eax = ecx + eax * 8 + XML1_MANAGER_OFFSET(0x6D50u); /* relocated metadata skin string */
    esp += 8; return; /* ret 4 */

}
