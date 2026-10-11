#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_registry_guest.h"
#include "audio/raven_effect_sound_guest.h"
#include "audio/raven_loop_sound_runtime.h"
#include "engine/powers/raven_power_bindings_guest.h"
#include "engine/combat/raven_native_energy_guest.h"
#include "engine/combat/raven_native_energy.h"
#include "engine/combat/raven_bishop_guest.h"
#include "engine/combat/raven_filter_guest.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/* xml1_guest_combat_event_pool_construct; original guest entry 0x000E33F0.
 * Evidence: tests/engine/combat/raven_filter_guest_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000E33F0
 * Original: 0x000E33F0 - 0x000E3495 (165 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_combat_event_pool_construct(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E33F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ebx = 0; /* xor self */
    ecx = 0x19;
    edi = esi + 0xB6D0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0xC368) = ebx;
    MEM32(esi + 0xC36C) = ebx;
    MEM32(esi + 0xC370) = ebx;
    ecx = 0x19;
    edi = esi + 0xC374;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    MEM32(esi + 0xC3D8) = ebx;
    PUSH32(esp, 0x000E3432u); RECOMP_ABI_CALL(0x000E3090u, sub_000E3090); /* call 0x000E3090 */

loc_000E3432: ;
    eax = 0; /* xor self */
    MEM32(esi + 0xD00C) = ebx;
    MEM32(esi + 0xD010) = ebx;
    ecx = 0x30B;
    edx = 0; /* xor self */

loc_000E3447: ;
    eax = eax + eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    eax = eax | 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3447; /* jne: not equal / not zero */

loc_000E3453: ;
    MEM32(esi + 0xD00C) = eax;
    MEM32(esi + 0xD010) = edx;
    eax = 0; /* xor self */
    edx = esi + 0xC3DC;
    goto loc_000E3470;

    /* nop */

loc_000E3470: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0xD010);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x30C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E3470; /* jl: less (signed <) */

loc_000E348F: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}
