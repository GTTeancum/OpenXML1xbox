#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_registry_guest.h"
#include "engine/progression/talent_package_guest.h"
#include "engine/progression/talent_source_table.h"
#include "diagnostics/raven_operand_trace.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/* xml1_guest_talent_name_pool_release; original guest entry 0x000B4FF0.
 * Evidence: tests/engine/progression/talent_registry_native_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000B4FF0
 * Original: 0x000B4FF0 - 0x000B5021 (49 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_talent_name_pool_release(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4FF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esi + (_talent_expanded ? 0x2FB4u : 0x1C34u);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x000B5007u); RECOMP_ABI_CALL(0x0014A7A0u, sub_0014A7A0); /* call 0x0014A7A0 */

loc_000B5007: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi + (_talent_expanded ? 0x2BACu : 0x19CCu);
    PUSH32(esp, 0x000B5017u); RECOMP_ABI_CALL(0x000B3CF0u, sub_000B3CF0); /* call 0x000B3CF0 */

loc_000B5017: ;
    MEM32(esi + (_talent_expanded ? 0x2FD4u : 0x1C48u)) = MEM32(esi + (_talent_expanded ? 0x2FD4u : 0x1C48u)) - 1;
    _fa = (uint32_t)(MEM32(esi + (_talent_expanded ? 0x2FD4u : 0x1C48u))) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
