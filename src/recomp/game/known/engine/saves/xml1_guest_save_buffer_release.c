#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_package_guest.h"
#include "engine/resources/pkgb_decode.h"
#include "app/build_settings.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_save_buffer_release; original guest entry 0x00123550.
 * Evidence: src/engine/saves/raven_saved_stats_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00123550
 * Original: 0x00123550 - 0x0012358B (59 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_save_buffer_release(void)
{

loc_00123550: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00123557u); RECOMP_ABI_CALL(0x0011EBB0u, sub_0011EBB0); /* call 0x0011EBB0 */

loc_00123557: ;
    esi = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0xF);
    ecx = esi;
    PUSH32(esp, 0x00123567u); RECOMP_ABI_CALL(0x0011E1C0u, sub_0011E1C0); /* call 0x0011E1C0 */

loc_00123567: ;
    ecx = MEM32(esp + 4);
    ecx = ecx << 4;
    edx = MEM32(ecx + esi + 4);
    ecx = ecx + esi + 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00123579u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00123579: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00123588u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00123588: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
