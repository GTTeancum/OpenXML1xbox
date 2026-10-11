#define RECOMP_GENERATED_CODE
#include "engine/actors/raven_actor_transform_owner.h"
#include "engine/actors/raven_leader_event_guest.h"
#include "engine/powers/raven_victim_event_guest.h"
#include "engine/powers/raven_powerup_metadata.h"
#include "engine/combat/raven_native_damage.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/actors/raven_actor_scale_owner.h"
#include "engine/scripting/raven_script_extensions.h"
#include "engine/combat/raven_bishop_guest.h"
#include "engine/actors/raven_leader_actor.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_actor_character_name; original guest entry 0x0002E6C0.
 * Evidence: src/engine/scripting/raven_script_extensions.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_0002E6C0
 * Original: 0x0002E6C0 - 0x0002E6D7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_actor_character_name(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002E6C0: ;
    SET_LO8(edx, MEM8(ecx + 0x24C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    eax = ecx + 0x24C;
    if (TEST_NZ(_fa, _fb)) goto loc_0002E6D6; /* jne: not equal / not zero */

loc_0002E6D0: ;
    eax = ecx + 0x22C;

loc_0002E6D6: ;
    esp += 4; return; /* ret */

}
