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

/* xml1_guest_character_snapshot_destroy; original guest entry 0x00054AA0.
 * Evidence: tests/engine/progression/progression_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00054AA0
 * Original: 0x00054AA0 - 0x00054AB3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_character_snapshot_destroy(void)
{
    /* XML1 CHARACTER LAYOUT v2 */

loc_00054AA0: ;
    PUSH32(esp, 0x48F90);
    PUSH32(esp, XML1_SNAPSHOT_COUNT);
    PUSH32(esp, 0x1E4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00054AB2u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_00054AB2: ;
    esp += 4; return; /* ret */

}
