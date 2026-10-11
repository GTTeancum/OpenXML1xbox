#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_package_guest.h"
#include "engine/resources/pkgb_decode.h"
#include "app/build_settings.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_xml_node_next_named_child; original guest entry 0x00126C30.
 * Evidence: src/engine/actors/raven_character_race_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00126C30
 * Original: 0x00126C30 - 0x00126C54 (36 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_xml_node_next_named_child(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126C30: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00126C45; /* jne: not equal / not zero */

loc_00126C38: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00126C42u); RECOMP_ABI_CALL(0x00125F00u, sub_00125F00); /* call 0x00125F00 */

loc_00126C42: ;
    esp += 12; return; /* ret 8 */

loc_00126C45: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00126C51u); RECOMP_ABI_CALL(0x00125F60u, sub_00125F60); /* call 0x00125F60 */

loc_00126C51: ;
    esp += 12; return; /* ret 8 */

}
