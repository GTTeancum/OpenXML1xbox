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

/* xml1_guest_character_pool_construct; original guest entry 0x00055E30.
 * Evidence: tests/engine/progression/progression_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00055E30
 * Original: 0x00055E30 - 0x00055EC2 (146 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_character_pool_construct(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00055E30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esi + 0xD980) = edi;
    MEM32(esi + 0xD984) = edi; /* constructed slots 32..47 */
    MEM32(esi + 0xDA4C) = edi;
    MEM32(esi + 0xDA50) = edi;
    MEM32(esi + 0xDA54) = edi;
    MEM32(esi + 0xDA58) = edi;
    MEM32(esi + 0xDA5C) = edi; /* allocated slots 32..47 */
    MEM32(esi + 0xDA60) = edi;
    PUSH32(esp, 0x00055E5Fu); RECOMP_ABI_CALL(0x000558C0u, sub_000558C0); /* call 0x000558C0 */

loc_00055E5F: ;
    eax = 0; /* xor self */
    MEM32(esi + 0xDB24) = edi;
    MEM32(esi + 0xDB28) = edi;
    ecx = XML1_CHARACTER_POOL_CAPACITY - 1;
    edx = 0; /* xor self */

loc_00055E74: ;
    eax = eax + eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    eax = eax | 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00055E74; /* jne: not equal / not zero */

loc_00055E80: ;
    MEM32(esi + 0xDB24) = eax;
    MEM32(esi + 0xDB28) = edx;
    eax = 0; /* xor self */
    edx = esi + 0xDA64;
    goto loc_00055EA0;

    /* nop */
    /* nop */

loc_00055EA0: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0xDB28);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(XML1_CHARACTER_POOL_CAPACITY) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x18 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00055EA0; /* jl: less (signed <) */

loc_00055EBD: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
