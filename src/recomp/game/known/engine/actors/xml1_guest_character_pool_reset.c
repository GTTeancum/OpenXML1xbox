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

/* xml1_guest_character_pool_reset; original guest entry 0x00055F70.
 * Evidence: tests/engine/progression/progression_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00055F70
 * Original: 0x00055F70 - 0x000560AC (316 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_character_pool_reset(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00055F70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    MEM32(esi + 0xDA60) = eax;
    PUSH32(esp, edi);
    MEM32(esi + 0xDA58) = eax;
    MEM32(esi + 0xDA5C) = eax; /* reset both allocation words */
    PUSH32(esp, 0x00055F88u); RECOMP_ABI_CALL(0x000548A0u, sub_000548A0); /* call 0x000548A0 */

loc_00055F88: ;
    ecx = esi;
    PUSH32(esp, 0x00055F8Fu); RECOMP_ABI_CALL(0x000558C0u, sub_000558C0); /* call 0x000558C0 */

loc_00055F8F: ;
    edx = 2;
    eax = esi + 0xDA68;
    /* nop */

loc_00055FA0: ;
    ecx = MEM32(esi + 0xDB28);
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(eax + -4) = MEM32(eax + -4) + edi;
    if (((int32_t)MEM32(eax + -4) >= 0)) goto loc_00055FCA; /* jns: not sign (positive) */

loc_00055FB2: ;
    edi = edx + -2;
    MEM32(eax + -4) = edi;
    ecx = MEM32(esi + 0xDB28);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ebx = ebx | edi;
    MEM32(eax + -4) = ebx;

loc_00055FCA: ;
    ecx = MEM32(esi + 0xDB28);
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(eax) = MEM32(eax) + edi;
    if (((int32_t)MEM32(eax) >= 0)) goto loc_00055FF1; /* jns: not sign (positive) */

loc_00055FDB: ;
    edi = edx + -1;
    MEM32(eax) = edi;
    ecx = MEM32(esi + 0xDB28);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ebx = ebx | edi;
    MEM32(eax) = ebx;

loc_00055FF1: ;
    ecx = MEM32(esi + 0xDB28);
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(eax + 4) = MEM32(eax + 4) + edi;
    if (((int32_t)MEM32(eax + 4) >= 0)) goto loc_00056018; /* jns: not sign (positive) */

loc_00056003: ;
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 0xDB28);
    edi = 1;
    edi = edi << LO8(ecx);
    edi = edi | edx;
    MEM32(eax + 4) = edi;

loc_00056018: ;
    ecx = MEM32(esi + 0xDB28);
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(eax + 8) = MEM32(eax + 8) + edi;
    if (((int32_t)MEM32(eax + 8) >= 0)) goto loc_00056042; /* jns: not sign (positive) */

loc_0005602A: ;
    edi = edx + 1;
    MEM32(eax + 8) = edi;
    ecx = MEM32(esi + 0xDB28);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ebx = ebx | edi;
    MEM32(eax + 8) = ebx;

loc_00056042: ;
    ecx = MEM32(esi + 0xDB28);
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + edi;
    if (((int32_t)MEM32(eax + 0xC) >= 0)) goto loc_0005606C; /* jns: not sign (positive) */

loc_00056054: ;
    edi = edx + 2;
    MEM32(eax + 0xC) = edi;
    ecx = MEM32(esi + 0xDB28);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ebx = ebx | edi;
    MEM32(eax + 0xC) = ebx;

loc_0005606C: ;
    ecx = MEM32(esi + 0xDB28);
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + edi;
    if (((int32_t)MEM32(eax + 0x10) >= 0)) goto loc_00056096; /* jns: not sign (positive) */

loc_0005607E: ;
    edi = edx + 3;
    MEM32(eax + 0x10) = edi;
    ecx = MEM32(esi + 0xDB28);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ebx = ebx | edi;
    MEM32(eax + 0x10) = ebx;

loc_00056096: ;
    edx = edx + 6;
    ecx = edx + -2;
    eax = eax + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(XML1_CHARACTER_POOL_CAPACITY) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x18 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00055FA0; /* jl: less (signed <) */

loc_000560A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
