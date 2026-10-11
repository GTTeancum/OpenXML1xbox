#define RECOMP_GENERATED_CODE
#include "ui/pc_menu.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_popup_set_selection; original guest entry 0x00185DF0.
 * Evidence: src/engine/world/raven_campaign_menu_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00185DF0
 * Original: 0x00185DF0 - 0x00185E31 (65 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_popup_set_selection(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00185DF0: ;
    eax = MEM32(ecx + 0x3A1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00185E0B; /* jl: less (signed <) */

loc_00185DFA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00185E0B; /* jge: greater or equal (signed >=) */

loc_00185DFF: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x135C);
    eax = eax + ecx + 4;
    goto loc_00185E0E;

loc_00185E0B: ;
    eax = ecx + 4;

loc_00185E0E: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00185E2C; /* jl: less (signed <) */

loc_00185E16: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x1354);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00185E2C; /* jge: greater or equal (signed >=) */

loc_00185E21: ;
    MEM8(eax + 0x1357) = LO8(ecx);
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_00185E2C: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}
