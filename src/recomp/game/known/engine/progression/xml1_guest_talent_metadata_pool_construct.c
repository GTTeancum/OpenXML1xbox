#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_registry_guest.h"
#include "engine/progression/talent_package_guest.h"
#include "engine/progression/talent_source_table.h"
#include "diagnostics/raven_operand_trace.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/* xml1_guest_talent_metadata_pool_construct; original guest entry 0x000B4770.
 * Evidence: tests/engine/progression/talent_registry_native_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000B4770
 * Original: 0x000B4770 - 0x000B47D4 (100 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_talent_metadata_pool_construct(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4770: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000B4779u); RECOMP_ABI_CALL(0x000B3FA0u, sub_000B3FA0); /* call 0x000B3FA0 */

loc_000B4779: ;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(esi + (_talent_expanded ? 0x5B9Cu : 0x3624u)) = eax;
    MEM32(esi + (_talent_expanded ? 0x5BA0u : 0x3628u)) = eax;
    edx = (_talent_expanded ? 0xFDu : 0x95u);
    edi = 0; /* xor self */

loc_000B4790: ;
    ecx = ecx + ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    ecx = ecx | 1;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B4790; /* jne: not equal / not zero */

loc_000B479C: ;
    MEM32(esi + (_talent_expanded ? 0x5B9Cu : 0x3624u)) = ecx;
    MEM32(esi + (_talent_expanded ? 0x5BA0u : 0x3628u)) = edi;
    edx = esi + (_talent_expanded ? 0x57A4u : 0x33CCu);
    edi = edi;

loc_000B47B0: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + (_talent_expanded ? 0x5BA0u : 0x3628u));
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)((_talent_expanded ? 0xFEu : 0x96u)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x96 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B47B0; /* jl: less (signed <) */

loc_000B47CF: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
