#define RECOMP_GENERATED_CODE
#include "audio/raven_loop_sound_runtime.h"
#include "engine/combat/raven_native_damage.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/scripting/raven_script_extensions.h"
#include "engine/world/raven_campaign_state_guest.h"
#include "engine/world/raven_extraction_guest.h"
#include "engine/world/raven_extraction_owner.h"
#include "recomp_funcs.h"
#include <math.h>

/* xml1_guest_effect_manager_get; original guest entry 0x00072CF0.
 * Evidence: src/engine/powers/raven_powerup_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00072CF0
 * Original: 0x00072CF0 - 0x00072D4C (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_effect_manager_get(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00072CF0: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x49954C));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F04E);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_00072D39; /* jne: not equal / not zero */

loc_00072D14: ;
    MEM32(0x49954C) = MEM32(0x49954C) | eax;
    ecx = 0x498E88;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00072D2Cu); RECOMP_ABI_CALL(0x0006EC10u, sub_0006EC10); /* call 0x0006EC10 */

loc_00072D2C: ;
    PUSH32(esp, 0x359EE0);
    PUSH32(esp, 0x00072D36u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_00072D36: ;
    esp = esp + 4;

loc_00072D39: ;
    ecx = MEM32(esp);
    eax = 0x498E88;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}
