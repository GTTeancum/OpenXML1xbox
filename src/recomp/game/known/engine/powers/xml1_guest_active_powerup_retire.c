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

/* xml1_guest_active_powerup_retire; original guest entry 0x00028FA0.
 * Evidence: tests/engine/powers/raven_powerup_guest_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00028FA0
 * Original: 0x00028FA0 - 0x00028FE2 (66 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_active_powerup_retire(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00028FA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x3C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00028FB9; /* je: equal / zero */

loc_00028FA9: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00028FB9; /* je: equal / zero */

loc_00028FB0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00028FB6u); RECOMP_ABI_CALL(0x000967B0u, xml1_guest_powerup_definition_release); /* call 0x000967B0 */

loc_00028FB6: ;
    esp = esp + 4;

loc_00028FB9: ;
    SET_LO8(edx, MEM8(esi + 0x3C));
    eax = MEM32(esi + 0x30);
    SET_LO8(edx, LO8(edx) & 0xFE);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esi + 0x3C) = LO8(edx);
    MEM32(esi + 0x2C) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00028FE0; /* je: equal / zero */

loc_00028FD0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00028FD6u); RECOMP_ABI_CALL(0x000967B0u, xml1_guest_powerup_definition_release); /* call 0x000967B0 */

loc_00028FD6: ;
    esp = esp + 4;
    MEM32(esi + 0x30) = 0;

loc_00028FE0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
