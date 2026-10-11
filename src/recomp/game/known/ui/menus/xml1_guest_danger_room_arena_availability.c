#define RECOMP_GENERATED_CODE
#include "engine/progression/talent_slot_layout.h"
#include "engine/powers/raven_power_bindings_guest.h"
#include "engine/inventory/raven_stash_menu_guest.h"
#include "engine/inventory/raven_stash_owner.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include "engine/progression/character_talent_guest.h"
#include "app/build_settings.h"
#include <math.h>
#include "game/xml1/character_limits.h"
#include "game/xml1/modder_mode.h"

/* xml1_guest_danger_room_arena_availability; original guest entry 0x0016F9C0.
 * Evidence: scripts/guard-danger-room-unlock.py
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_0016F9C0
 * Original: 0x0016F9C0 - 0x0016FA61 (161 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_danger_room_arena_availability(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016F9C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(ebp + 0xED8);
    PUSH32(esp, 0x0016F9CFu); RECOMP_ABI_CALL(0x00178A00u, sub_00178A00); /* call 0x00178A00 */

loc_0016F9CF: ;
    ebx = 0; /* xor self */
    PUSH32(esp, 0x0016F9D6u); RECOMP_ABI_CALL(0x000BF950u, sub_000BF950); /* call 0x000BF950 */

loc_0016F9D6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0016FA40; /* jbe: below or equal (unsigned <=) */

loc_0016F9DA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_0016F9E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0016F9E6u); RECOMP_ABI_CALL(0x000C0480u, sub_000C0480); /* call 0x000C0480 */

loc_0016F9E6: ;
    edi = eax;
    esi = MEM32(edi + 0x20);
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016F9F9; /* jne: not equal / not zero */

loc_0016F9F2: ;
    eax = 0x3C806C;
    goto loc_0016FA0F;

loc_0016F9F9: ;
    PUSH32(esp, 0x0016F9FEu); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_0016F9FE: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    eax = ecx + eax + 0x8008;

loc_0016FA0F: ;
    ecx = MEM32(ebp + 0xED8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0016FA1Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0016FA1D: ;
    /* dangerRoomUnlockAll: every arena counts as unlocked. */
    if (xml1_build_settings.danger_room_unlock_all) goto loc_0016FA31;
    _fa = (uint32_t)(MEM8(edi + 0x28)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x28), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016FA31; /* jne: not equal / not zero */

loc_0016FA23: ;
    ecx = MEM32(ebp + 0xED8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016FA31u); RECOMP_ABI_CALL(0x001782F0u, sub_001782F0); /* call 0x001782F0 */

loc_0016FA31: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0016FA37u); RECOMP_ABI_CALL(0x000BF950u, sub_000BF950); /* call 0x000BF950 */

loc_0016FA37: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016F9E0; /* jl: less (signed <) */

loc_0016FA3E: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0016FA40: ;
    ebp = MEM32(ebp + 0xED8);
    ecx = ebp;
    PUSH32(esp, 0x0016FA4Du); RECOMP_ABI_CALL(0x00177980u, sub_00177980); /* call 0x00177980 */

loc_0016FA4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0016FA57; /* jle: less or equal (signed <=) */

loc_0016FA51: ;
    MEM16(ebp + 0x7C) = 0;

loc_0016FA57: ;
    edx = MEM32(ebp);
    ecx = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x64)); return; /* indirect tail jmp */

}
