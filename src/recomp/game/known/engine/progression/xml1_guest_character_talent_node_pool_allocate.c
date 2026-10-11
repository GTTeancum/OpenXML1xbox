#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include "engine/progression/character_talent_guest.h"
#include "game/xml1/newgame_plus.h"
#include "game/xml1/character_limits.h"
#include <math.h>

/* xml1_guest_character_talent_node_pool_allocate; original guest entry 0x000C9B50.
 * Evidence: tests/engine/progression/character_talent_map_native_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000C9B50
 * Original: 0x000C9B50 - 0x000C9BAF (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_character_talent_node_pool_allocate(void)
{
    /* XML1 OWNED CHARACTER TALENT MAP */
    const int _character_expanded=xml1_character_talent_map_contains(ecx);
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000C9B50: ;
    edx = ecx;
    eax = MEM32(edx + (_character_expanded ? 0x13E4u : 0x14Cu));
    eax = MEM32(edx + eax * 4 + (_character_expanded ? 0xFE4u : 0x104u));
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + (_character_expanded ? 0x13ECu : 0x154u);
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + (_character_expanded ? 0x13E4u : 0x14Cu));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)((_character_expanded ? 0xFEu : 0x10u)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    MEM32(edx + (_character_expanded ? 0x13E4u : 0x14Cu)) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000C9B99; /* jl: less (signed <) */

loc_000C9B8F: ;
    MEM32(edx + (_character_expanded ? 0x13E4u : 0x14Cu)) = 0;

loc_000C9B99: ;
    MEM32(edx + (_character_expanded ? 0x13E8u : 0x150u)) = MEM32(edx + (_character_expanded ? 0x13E8u : 0x150u)) - 1;
    _fa = (uint32_t)(MEM32(edx + (_character_expanded ? 0x13E8u : 0x150u))) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + (_character_expanded ? 0x140Cu : 0x158u));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + (_character_expanded ? 0x140Cu : 0x158u)) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
