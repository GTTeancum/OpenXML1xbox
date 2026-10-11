#define RECOMP_GENERATED_CODE
#include "ui/pc_menu.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_popup_set_cancel_script; original guest entry 0x00186CB0.
 * Evidence: src/engine/world/raven_campaign_menu_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00186CB0
 * Original: 0x00186CB0 - 0x00186CF0 (64 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_popup_set_cancel_script(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00186CB0: ;
    eax = MEM32(ecx + 0x3A1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00186CCB; /* jl: less (signed <) */

loc_00186CBA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00186CCB; /* jge: greater or equal (signed >=) */

loc_00186CBF: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x135C);
    eax = eax + ecx + 4;
    goto loc_00186CCE;

loc_00186CCB: ;
    eax = ecx + 4;

loc_00186CCE: ;
    PUSH32(esp, esi);
    esi = eax + 0x11CD;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00186CE5u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_00186CE5: ;
    esp = esp + 0xC;
    MEM8(esi + 0x7F) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
