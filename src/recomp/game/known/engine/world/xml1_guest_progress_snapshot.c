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

/* xml1_guest_progress_snapshot; original guest entry 0x0008C820.
 * Evidence: src/engine/world/raven_progress_guest.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_0008C820
 * Original: 0x0008C820 - 0x0008C85B (59 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_progress_snapshot(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0008C820: ;
    xml1_progress_snapshot(ecx, MEM32(esp+4));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0008C83C; /* je: equal / zero */

loc_0008C82D: ;
    eax = esi + 8;
    PUSH32(esp, eax);
    ecx = esi + 0x19C;
    PUSH32(esp, 0x0008C83Cu); RECOMP_ABI_CALL(0x0008C860u, sub_0008C860); /* call 0x0008C860 */

loc_0008C83C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0008C856; /* je: equal / zero */

loc_0008C841: ;
    ecx = esi + 4;
    SET_LO16(edx, MEM16(ecx));
    SET_LO8(eax, MEM8(ecx + 2));
    esi = esi + 0x198;
    MEM16(esi) = LO16(edx);
    MEM8(esi + 2) = LO8(eax);

loc_0008C856: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
