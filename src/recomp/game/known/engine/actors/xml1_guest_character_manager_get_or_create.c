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

/* xml1_guest_character_manager_get_or_create; original guest entry 0x00056E90.
 * Evidence: docs/ROSTER-COSTUME-EXPANSION.md
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00056E90
 * Original: 0x00056E90 - 0x00056F0E (126 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_character_manager_get_or_create(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00056E90: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E941);
    PUSH32(esp, eax);
    eax = MEM32(0x48D59C);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00056EFF; /* jne: not equal / not zero */

loc_00056EB1: ;
    PUSH32(esp, 0x4D);
    PUSH32(esp, 0xE);
    PUSH32(esp, XML1_MANAGER_BYTES);
    PUSH32(esp, 0x00056EBFu); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_00056EBF: ;
    esp = esp + 0xC;
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00056EDE; /* je: equal / zero */

loc_00056ED5: ;
    ecx = eax;
    PUSH32(esp, 0x00056EDCu); RECOMP_ABI_CALL(0x00056B70u, xml1_guest_character_manager_construct); /* call 0x00056B70 */

loc_00056EDC: ;
    goto loc_00056EE0;

loc_00056EDE: ;
    eax = 0; /* xor self */

loc_00056EE0: ;
    PUSH32(esp, 0x54270);
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    MEM32(0x48D59C) = eax;
    PUSH32(esp, 0x00056EF7u); RECOMP_ABI_CALL(0x000119F0u, sub_000119F0); /* call 0x000119F0 */

loc_00056EF7: ;
    eax = MEM32(0x48D59C);
    esp = esp + 4;

loc_00056EFF: ;
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}
