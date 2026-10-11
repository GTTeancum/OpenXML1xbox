#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_registry_guest.h"
#include "engine/progression/talent_package_guest.h"
#include "engine/progression/talent_source_table.h"
#include "diagnostics/raven_operand_trace.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/* xml1_guest_talent_metadata_pool_release; original guest entry 0x000B4F60.
 * Evidence: tests/engine/progression/talent_registry_native_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000B4F60
 * Original: 0x000B4F60 - 0x000B4FAE (78 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_talent_metadata_pool_release(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);
    int _flags = 0; /* fallback flag var */

loc_000B4F60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + (_talent_expanded ? 0x5B9Cu : 0x3624u));
    esi = esi & MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000B4F76u); RECOMP_ABI_CALL(0x000B4000u, sub_000B4000); /* call 0x000B4000 */

loc_000B4F76: ;
    ecx = MEM32(edi + (_talent_expanded ? 0x5BA0u : 0x3628u));
    eax = 1;
    eax = eax << LO8(ecx);
    MEM32(edi + esi * 4 + (_talent_expanded ? 0x57A4u : 0x33CCu)) = MEM32(edi + esi * 4 + (_talent_expanded ? 0x57A4u : 0x33CCu)) + eax;
    if (((int32_t)MEM32(edi + esi * 4 + (_talent_expanded ? 0x57A4u : 0x33CCu)) >= 0)) goto loc_000B4FA9; /* jns: not sign (positive) */

loc_000B4F8C: ;
    MEM32(edi + esi * 4 + (_talent_expanded ? 0x57A4u : 0x33CCu)) = esi;
    ecx = MEM32(edi + (_talent_expanded ? 0x5BA0u : 0x3628u));
    edx = 1;
    edx = edx << LO8(ecx);
    edx = edx | esi;
    MEM32(edi + esi * 4 + (_talent_expanded ? 0x57A4u : 0x33CCu)) = edx;

loc_000B4FA9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
