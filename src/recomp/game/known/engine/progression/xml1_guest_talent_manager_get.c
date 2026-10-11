#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_registry_guest.h"
#include "engine/progression/talent_package_guest.h"
#include "engine/progression/talent_source_table.h"
#include "diagnostics/raven_operand_trace.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include <math.h>

/* xml1_guest_talent_manager_get; original guest entry 0x000B5980.
 * Evidence: src/engine/progression/talent_identity_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000B5980
 * Original: 0x000B5980 - 0x000B59C1 (65 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_talent_manager_get(void)
{
    /* XML1 EXPANDED TALENT REGISTRY */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B5980: ;
    eax = MEM32(0x4D7300);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B59C0; /* jne: not equal / not zero */

loc_000B5989: ;
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x13C70);
    PUSH32(esp, 0x000B5997u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_000B5997: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B59A7; /* je: equal / zero */

loc_000B599E: ;
    ecx = eax;
    PUSH32(esp, 0x000B59A5u); RECOMP_ABI_CALL(0x000B58A0u, xml1_guest_talent_registry_construct); /* call 0x000B58A0 */

loc_000B59A5: ;
    goto loc_000B59A9;

loc_000B59A7: ;
    eax = 0; /* xor self */

loc_000B59A9: ;
    PUSH32(esp, 0xB3520);
    MEM32(0x4D7300) = eax;
    PUSH32(esp, 0x000B59B8u); RECOMP_ABI_CALL(0x000119F0u, sub_000119F0); /* call 0x000119F0 */

loc_000B59B8: ;
    eax = MEM32(0x4D7300);
    esp = esp + 4;

loc_000B59C0: ;
    esp += 4; return; /* ret */

}
