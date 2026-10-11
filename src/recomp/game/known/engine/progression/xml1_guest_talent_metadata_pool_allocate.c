#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_registry_guest.h"
#include "engine/progression/talent_package_guest.h"
#include "engine/progression/talent_source_table.h"
#include "diagnostics/raven_operand_trace.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/* xml1_guest_talent_metadata_pool_allocate; original guest entry 0x000B55D0.
 * Evidence: tests/engine/progression/talent_registry_native_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000B55D0
 * Original: 0x000B55D0 - 0x000B5611 (65 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_talent_metadata_pool_allocate(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);

loc_000B55D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000B55D9u); RECOMP_ABI_CALL(0x000B3A30u, sub_000B3A30); /* call 0x000B3A30 */

loc_000B55D9: ;
    edi = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    eax = eax + esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B55E6u); RECOMP_ABI_CALL(0x000B4830u, sub_000B4830); /* call 0x000B4830 */

loc_000B55E6: ;
    ecx = edi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = esi + ecx * 4 + (_talent_expanded ? 0x5358u : 0x3138u);
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    esp = esp + 4;
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    eax = MEM32(esi + edi * 4 + (_talent_expanded ? 0x57A4u : 0x33CCu));
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
