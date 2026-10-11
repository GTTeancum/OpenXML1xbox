#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_registry_guest.h"
#include "engine/progression/talent_package_guest.h"
#include "engine/progression/talent_source_table.h"
#include "diagnostics/raven_operand_trace.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/* xml1_guest_talent_definition_resolve_handle; original guest entry 0x000B3E90.
 * Evidence: src/engine/powers/raven_power_bindings_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000B3E90
 * Original: 0x000B3E90 - 0x000B3EE6 (86 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_talent_definition_resolve_handle(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3E90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B3EE0; /* je: equal / zero */

loc_000B3E99: ;
    eax = MEM32(ecx + (_talent_expanded ? 0x8C84u : 0x5318u));
    edx = ecx + (_talent_expanded ? 0x30E8u : 0x1CF4u);
    eax = eax & esi;
    _fa = (uint32_t)(MEM32(edx + eax * 4 + (_talent_expanded ? 0x57A4u : 0x33CCu))) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4 + 0x33CC), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B3EE0; /* jne: not equal / not zero */

loc_000B3EB0: ;
    ecx = eax;
    PUSH32(esp, edi);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edx + eax * 4 + (_talent_expanded ? 0x5780u : 0x33B4u))) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + eax * 4 + 0x33B4), edi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000B3EE0; /* je: equal / zero */

loc_000B3ECF: ;
    eax = MEM32(edx + (_talent_expanded ? 0x5B9Cu : 0x3624u));
    eax = eax & esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    eax = eax + edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B3EE0: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
