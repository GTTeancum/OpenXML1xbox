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

/* xml1_guest_character_snapshot_construct; original guest entry 0x000549A0.
 * Evidence: tests/engine/progression/progression_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000549A0
 * Original: 0x000549A0 - 0x000549BE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_character_snapshot_construct(void)
{
    /* XML1 CHARACTER LAYOUT v2 */

loc_000549A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x48F90);
    PUSH32(esp, 0x48EF0);
    PUSH32(esp, XML1_SNAPSHOT_COUNT);
    esi = ecx;
    PUSH32(esp, 0x1E4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000549BAu); RECOMP_ABI_CALL(0x003418A8u, sub_003418A8); /* call 0x003418A8 */

loc_000549BA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
