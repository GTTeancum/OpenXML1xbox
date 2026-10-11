#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/* xml1_guest_character_talent_node_pool_construct; original guest entry 0x0013C900.
 * Evidence: tests/engine/progression/character_talent_map_native_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_0013C900
 * Original: 0x0013C900 - 0x0013C95D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_character_talent_node_pool_construct(void)
{
    /* XML1 OWNED CHARACTER TALENT MAP */
    const int _character_expanded=xml1_character_talent_map_contains(ecx);
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013C900: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + (_character_expanded ? 0x13E0u : 0x148u)) = esi;
    MEM32(ecx + (_character_expanded ? 0x13E4u : 0x14Cu)) = esi;
    MEM32(ecx + (_character_expanded ? 0x13E8u : 0x150u)) = esi;
    edx = 0; /* xor self */
    goto loc_0013C920;

    /* nop */

loc_0013C920: ;
    eax = MEM32(ecx + (_character_expanded ? 0x13E0u : 0x148u));
    edi = MEM32(ecx + (_character_expanded ? 0x13E8u : 0x150u));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)((_character_expanded ? 0xFEu : 0x10u)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    MEM32(ecx + (_character_expanded ? 0x13E0u : 0x148u)) = eax;
    MEM32(ecx + (_character_expanded ? 0x13E8u : 0x150u)) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0013C94C; /* jl: less (signed <) */

loc_0013C93F: ;
    MEM32(ecx + (_character_expanded ? 0x13E0u : 0x148u)) = esi;
    eax = (_character_expanded ? 0xFDu : 0xFu);
    goto loc_0013C94D;

loc_0013C94C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0013C94D: ;
    MEM32(ecx + eax * 4 + (_character_expanded ? 0xFE4u : 0x104u)) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)((_character_expanded ? 0xFEu : 0x10u)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013C920; /* jl: less (signed <) */

loc_0013C95A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
