#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_registry_guest.h"
#include "engine/progression/talent_package_guest.h"
#include "engine/progression/talent_source_table.h"
#include "diagnostics/raven_operand_trace.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/* xml1_guest_talent_id_pool_release; original guest entry 0x000B5040.
 * Evidence: tests/engine/progression/talent_registry_native_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000B5040
 * Original: 0x000B5040 - 0x000B5071 (49 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_talent_id_pool_release(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5040: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esi + (_talent_expanded ? 0x13ECu : 0xBCCu);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x000B5057u); RECOMP_ABI_CALL(0x0014A7A0u, sub_0014A7A0); /* call 0x0014A7A0 */

loc_000B5057: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi + (_talent_expanded ? 0xFE4u : 0x964u);
    PUSH32(esp, 0x000B5067u); RECOMP_ABI_CALL(0x000B3CF0u, sub_000B3CF0); /* call 0x000B3CF0 */

loc_000B5067: ;
    MEM32(esi + (_talent_expanded ? 0x140Cu : 0xBE0u)) = MEM32(esi + (_talent_expanded ? 0x140Cu : 0xBE0u)) - 1;
    _fa = (uint32_t)(MEM32(esi + (_talent_expanded ? 0x140Cu : 0xBE0u))) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
