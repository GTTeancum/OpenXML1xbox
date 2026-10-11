#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_registry_guest.h"
#include "engine/progression/talent_package_guest.h"
#include "engine/progression/talent_source_table.h"
#include "diagnostics/raven_operand_trace.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/* xml1_guest_talent_source_cache_pool_allocate; original guest entry 0x000B3E20.
 * Evidence: tests/engine/progression/talent_source_cache_native_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000B3E20
 * Original: 0x000B3E20 - 0x000B3E7F (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_talent_source_cache_pool_allocate(void)
{
    /* XML1 EXPANDED TALENT SOURCE CACHE */
    const int _talent_cache_expanded=xml1_talent_registry_contains(g_ecx);
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3E20: ;
    edx = ecx;
    eax = MEM32(edx + (_talent_cache_expanded ? 0x4FBCu : 0xFCu));
    eax = MEM32(edx + eax * 4 + (_talent_cache_expanded ? 0x4BB8u : 0xE8u));
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + (_talent_cache_expanded ? 0x4FC4u : 0x104u);
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + (_talent_cache_expanded ? 0x4FBCu : 0xFCu));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)((_talent_cache_expanded ? 255 : 3)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    MEM32(edx + (_talent_cache_expanded ? 0x4FBCu : 0xFCu)) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000B3E69; /* jl: less (signed <) */

loc_000B3E5F: ;
    MEM32(edx + (_talent_cache_expanded ? 0x4FBCu : 0xFCu)) = 0;

loc_000B3E69: ;
    MEM32(edx + (_talent_cache_expanded ? 0x4FC0u : 0x100u)) = MEM32(edx + (_talent_cache_expanded ? 0x4FC0u : 0x100u)) - 1;
    _fa = (uint32_t)(MEM32(edx + (_talent_cache_expanded ? 0x4FC0u : 0x100u))) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + (_talent_cache_expanded ? 0x4FE4u : 0x108u));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + (_talent_cache_expanded ? 0x4FE4u : 0x108u)) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
