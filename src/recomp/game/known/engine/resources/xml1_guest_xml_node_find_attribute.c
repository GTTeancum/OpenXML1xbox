#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_package_guest.h"
#include "engine/resources/pkgb_decode.h"
#include "app/build_settings.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_xml_node_find_attribute; original guest entry 0x001260E0.
 * Evidence: src/engine/actors/raven_character_race_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_001260E0
 * Original: 0x001260E0 - 0x001260FC (28 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void xml1_guest_xml_node_find_attribute(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001260E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    ecx = ecx + 0x2C;
    PUSH32(esp, 0x001260EDu); RECOMP_ABI_CALL(0x00125C00u, sub_00125C00); /* call 0x00125C00 */

loc_001260ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001260F7; /* je: equal / zero */

loc_001260F1: ;
    eax = eax + 0x14;
    esp += 8; return; /* ret 4 */

loc_001260F7: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}
