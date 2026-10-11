#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_registry_guest.h"
#include "engine/progression/talent_package_guest.h"
#include "engine/progression/talent_source_table.h"
#include "diagnostics/raven_operand_trace.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/* xml1_guest_talent_name_pool_construct; original guest entry 0x000B4090.
 * Evidence: tests/engine/progression/talent_registry_native_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000B4090
 * Original: 0x000B4090 - 0x000B40DB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_talent_name_pool_construct(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    const int _talent_expanded=xml1_talent_registry_contains(g_ecx);
    if (_talent_expanded) xml1_talent_registry_clear_bits(g_ecx,1);
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B4090: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xC;
    ecx = (_talent_expanded ? 0xFEu : 0x96u);
    goto loc_000B40A0;

    /* nop */

loc_000B40A0: ;
    MEM8(eax) = 0;
    eax = eax + 0x2C;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B40A0; /* jne: not equal / not zero */

loc_000B40A9: ;
    ecx = esi + (_talent_expanded ? 0x2BACu : 0x19CCu);
    PUSH32(esp, 0x000B40B4u); RECOMP_ABI_CALL(0x000B3CE0u, sub_000B3CE0); /* call 0x000B3CE0 */

loc_000B40B4: ;
    eax = 0; /* xor self */
    ecx = esi + (_talent_expanded ? 0x2FB4u : 0x1C34u);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    ecx = esi;
    MEM32(esi + (_talent_expanded ? 0x2FD4u : 0x1C48u)) = eax;
    PUSH32(esp, 0x000B40D7u); RECOMP_ABI_CALL(0x000B3DB0u, sub_000B3DB0); /* call 0x000B3DB0 */

loc_000B40D7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
