#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_registry_guest.h"
#include "engine/progression/talent_package_guest.h"
#include "engine/progression/talent_source_table.h"
#include "diagnostics/raven_operand_trace.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/* xml1_guest_talent_metadata_handle_valid; original guest entry 0x000B39E0.
 * Evidence: tests/engine/progression/talent_registry_native_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000B39E0
 * Original: 0x000B39E0 - 0x000B3A20 (64 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_talent_metadata_handle_valid(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000B39E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + (_talent_expanded ? 0x5B9Cu : 0x3624u));
    _cf = 0; /* logical op clears CF */
    edx = edx & eax;
    _fa = (uint32_t)(MEM32(esi + edx * 4 + (_talent_expanded ? 0x57A4u : 0x33CCu))) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + edx * 4 + 0x33CC), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000B3A1A; /* jne: not equal / not zero */

loc_000B39F8: ;
    ecx = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    eax = 1;
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((5) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ecx = MEM32(esi + edx * 4 + (_talent_expanded ? 0x5780u : 0x33B4u));
    POP32(esp, esi);
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    esp += 8; return; /* ret 4 */

loc_000B3A1A: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
