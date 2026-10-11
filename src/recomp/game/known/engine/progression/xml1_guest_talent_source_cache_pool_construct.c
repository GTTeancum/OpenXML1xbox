#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_registry_guest.h"
#include "engine/progression/talent_package_guest.h"
#include "engine/progression/talent_source_table.h"
#include "diagnostics/raven_operand_trace.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/* xml1_guest_talent_source_cache_pool_construct; original guest entry 0x000B47E0.
 * Evidence: tests/engine/progression/talent_source_cache_native_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000B47E0
 * Original: 0x000B47E0 - 0x000B4823 (67 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_talent_source_cache_pool_construct(void)
{
    /* XML1 EXPANDED TALENT SOURCE CACHE */
    const int _talent_cache_expanded=xml1_talent_registry_contains(g_ecx);
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B47E0: ;
    if (_talent_cache_expanded) memset((void*)XBOX_PTR(ecx+0x4FC4u),0,32);
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xC;
    ecx = (_talent_cache_expanded ? 255 : 3);
    goto loc_000B47F0;

    /* nop */

loc_000B47F0: ;
    MEM8(eax) = 0;
    eax = eax + 0x4C;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B47F0; /* jne: not equal / not zero */

loc_000B47F9: ;
    ecx = esi + (_talent_cache_expanded ? 0x4BB8u : 0xE8u);
    PUSH32(esp, 0x000B4804u); RECOMP_ABI_CALL(0x000B3E80u, sub_000B3E80); /* call 0x000B3E80 */

loc_000B4804: ;
    MEM32(esi + (_talent_cache_expanded ? 0x4FC4u : 0x104u)) = 0;
    ecx = esi;
    MEM32(esi + (_talent_cache_expanded ? 0x4FE4u : 0x108u)) = 0;
    PUSH32(esp, 0x000B481Fu); RECOMP_ABI_CALL(0x000B4120u, sub_000B4120); /* call 0x000B4120 */

loc_000B481F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
