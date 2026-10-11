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

/* xml1_guest_progress_merge_snapshot; original guest entry 0x0008C5F0.
 * Evidence: src/engine/world/raven_progress_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_0008C5F0
 * Original: 0x0008C5F0 - 0x0008C614 (36 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_progress_merge_snapshot(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008C5F0: ;
    xml1_progress_merge(ecx, MEM32(esp+4));
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0008C609; /* je: equal / zero */

loc_0008C5FA: ;
    eax = esi + 0x19C;
    PUSH32(esp, eax);
    ecx = esi + 8;
    PUSH32(esp, 0x0008C609u); RECOMP_ABI_CALL(0x0008C620u, sub_0008C620); /* call 0x0008C620 */

loc_0008C609: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0008C610u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008C610: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
