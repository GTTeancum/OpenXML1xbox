#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_package_guest.h"
#include "engine/resources/pkgb_decode.h"
#include "app/build_settings.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_xml_symbol_release; original guest entry 0x00125890.
 * Evidence: src/engine/actors/raven_character_race_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00125890
 * Original: 0x00125890 - 0x001258BA (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_xml_symbol_release(void)
{

loc_00125890: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    esi = ecx;
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0xC;
    PUSH32(esp, 0x001258A6u); RECOMP_ABI_CALL(0x0019A1B0u, sub_0019A1B0); /* call 0x0019A1B0 */

loc_001258A6: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001258AEu); RECOMP_ABI_CALL(0x00199E20u, sub_00199E20); /* call 0x00199E20 */

loc_001258AE: ;
    MEM32(esi + 0xC) = 0;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}
