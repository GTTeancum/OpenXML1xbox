#define RECOMP_GENERATED_CODE
#include "engine/scripting/raven_script_extensions.h"
#include "engine/world/raven_progress_guest.h"
#include "ui/pc_menu.h"
#include "engine/saves/save_name.h"
#include "app/build_settings.h"
#include "engine/core/motionpath_name.h"
#include "recomp_funcs.h"
#include "game/xml1/newgame_plus.h"
#include "game/xml1/character_limits.h"
#include <math.h>

/* xml1_guest_command_manager_get; original guest entry 0x0011CD90.
 * Evidence: src/engine/saves/raven_saved_stats_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_0011CD90
 * Original: 0x0011CD90 - 0x0011CDCA (58 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_command_manager_get(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011CD90: ;
    SET_LO8(ecx, MEM8(0x501D5C));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011CDC4; /* jne: not equal / not zero */

loc_0011CD9F: ;
    edx = MEM32(0x501D5C);
    edx = edx | eax;
    ecx = 0x5016F0;
    MEM32(0x501D5C) = edx;
    PUSH32(esp, 0x0011CDB7u); RECOMP_ABI_CALL(0x0011CD10u, sub_0011CD10); /* call 0x0011CD10 */

loc_0011CDB7: ;
    PUSH32(esp, 0x35A2D0);
    PUSH32(esp, 0x0011CDC1u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0011CDC1: ;
    esp = esp + 4;

loc_0011CDC4: ;
    eax = 0x5016F0;
    esp += 4; return; /* ret */

}
