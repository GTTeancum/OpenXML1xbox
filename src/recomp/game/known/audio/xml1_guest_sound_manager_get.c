#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_slot_layout.h"
#include "engine/powers/raven_power_bindings_guest.h"
#include "ui/pc_menu.h"
#include "ui/pc_prompts.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_sound_manager_get; original guest entry 0x00151EF0.
 * Evidence: src/audio/raven_loop_sound_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00151EF0
 * Original: 0x00151EF0 - 0x00151F2A (58 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_sound_manager_get(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151EF0: ;
    SET_LO8(ecx, MEM8(0x566830));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00151F24; /* jne: not equal / not zero */

loc_00151EFF: ;
    edx = MEM32(0x566830);
    edx = edx | eax;
    ecx = 0x55ADF8;
    MEM32(0x566830) = edx;
    PUSH32(esp, 0x00151F17u); RECOMP_ABI_CALL(0x0014F450u, sub_0014F450); /* call 0x0014F450 */

loc_00151F17: ;
    PUSH32(esp, 0x35A560);
    PUSH32(esp, 0x00151F21u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00151F21: ;
    esp = esp + 4;

loc_00151F24: ;
    eax = 0x55ADF8;
    esp += 4; return; /* ret */

}
