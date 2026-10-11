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

/* xml1_guest_progress_set_campaign_complete; original guest entry 0x0008C300.
 * Evidence: src/engine/world/raven_progress_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_0008C300
 * Original: 0x0008C300 - 0x0008C365 (101 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_progress_set_campaign_complete(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0008C300: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x195)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x195), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0008C349; /* jne: not equal / not zero */

loc_0008C311: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008C349; /* je: equal / zero */

loc_0008C315: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0008C31Cu); RECOMP_ABI_CALL(0x000B3470u, sub_000B3470); /* call 0x000B3470 */

loc_0008C31C: ;
    edi = eax;
    PUSH32(esp, 0x0008C323u); RECOMP_ABI_CALL(0x00187AF0u, xml1_guest_popup_manager_get); /* call 0x00187AF0 */

loc_0008C323: ;
    edx = MEM32(edi);
    ebp = eax;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x422);
    ecx = edi;
    MEM32(esp + 0x1C) = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0008C33Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008C33D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0008C347u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0008C347: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0008C349: ;
    xml1_progress_campaign_completed(esi, LO8(ebx));
    SET_LO8(edx, MEM8(esi + 0x195));
    SET_LO8(ebx, LO8(ebx) << 1);
    SET_LO8(ebx, LO8(ebx) ^ LO8(edx));
    SET_LO8(ebx, LO8(ebx) & 2);
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    MEM8(esi + 0x195) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
