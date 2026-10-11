#define RECOMP_GENERATED_CODE
#include "engine/powers/raven_victim_event_guest.h"
#include "engine/scripting/raven_remove_events.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/powers/raven_powerup_metadata.h"
#include "engine/combat/raven_absorb_runtime.h"
#include "engine/combat/raven_native_damage.h"
#include "diagnostics/raven_operand_trace.h"
#include "engine/combat/raven_bishop_guest.h"
#include "engine/world/raven_progress_guest.h"
#include "recomp_funcs.h"
#include <math.h>
#include "app/build_settings.h"
#include "game/xml1/character_limits.h"

/* xml1_guest_progress_manager_get; original guest entry 0x0008C980.
 * Evidence: src/engine/world/raven_progress_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_0008C980
 * Original: 0x0008C980 - 0x0008C9DC (92 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_progress_manager_get(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008C980: ;
    eax = MEM32(XBOX_FS_BASE);
    SET_LO8(ecx, MEM8(0x4A0540));
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F89E);
    PUSH32(esp, eax);
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(XBOX_FS_BASE) = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_0008C9C9; /* jne: not equal / not zero */

loc_0008C9A4: ;
    MEM32(0x4A0540) = MEM32(0x4A0540) | eax;
    ecx = 0x4A0210;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0008C9BCu); RECOMP_ABI_CALL(0x0008BE30u, sub_0008BE30); /* call 0x0008BE30 */

loc_0008C9BC: ;
    PUSH32(esp, 0x359FC0);
    PUSH32(esp, 0x0008C9C6u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_0008C9C6: ;
    esp = esp + 4;

loc_0008C9C9: ;
    ecx = MEM32(esp);
    eax = 0x4A0210;
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}
