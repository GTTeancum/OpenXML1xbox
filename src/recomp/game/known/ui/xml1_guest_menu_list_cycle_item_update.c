#define RECOMP_GENERATED_CODE
#include "engine/inventory/raven_stash_menu_guest.h"
#include "engine/inventory/raven_stash_owner.h"
#include "ui/pc_menu.h"
#include "recomp_funcs.h"
#include <math.h>
#include "game/xml1/character_limits.h"

/* xml1_guest_menu_list_cycle_item_update; original guest entry 0x00177940.
 * Evidence: docs/PC-OPTIONS-CONTROLS.md
 * Evidence: scripts/guard-pc-menu.py
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00177940
 * Original: 0x00177940 - 0x00177972 (50 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_menu_list_cycle_item_update(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00177940: ;
    PUSH32(esp, esi);
    esi = ecx;
    xml1_pc_native_owner(esi, MEM32(esi + 4));
    xml1_pc_native_flags(esi, MEM8(esi + 0x39));
    xml1_pc_native_adjustable(esi, MEM32(MEM32(esi) + 0x3C) == 0x0017CE40u);
    xml1_pc_native_bounds(esi, SMEM16(esi + 0x5C), SMEM16(esi + 0x5E), SMEM16(esi + 0x60), SMEM16(esi + 0x62));
    if (xml1_pc_native_hover(esi) && MEM32(esi + 4) && MEM32(MEM32(esi + 4) + 0x290) != esi) {
        ecx = MEM32(esi + 4);
        PUSH32(esp, esi);
        PUSH32(esp, 0x00177970u);
        RECOMP_ABI_CALL(0x001639F0u, sub_001639F0);
    }
    if (xml1_pc_native_activate(esi)) {
        ecx = esi;
        uint32_t pc_use_target = MEM32(MEM32(esi) + 0x2C);
        uint32_t pc_use_esp = esp;
        PUSH32(esp, 0x00177970u);
        RECOMP_ICALL_SAFE(pc_use_target, pc_use_esp);
    }
    int pc_adjust = xml1_pc_native_adjust(esi);
    if (pc_adjust) {
        ecx = esi;
        uint32_t pc_adjust_esp = esp;
        uint32_t pc_adjust_target = MEM32(MEM32(esi) + 0x3C);
        PUSH32(esp, 0);
        PUSH32(esp, (uint32_t)pc_adjust);
        PUSH32(esp, 0x00177970u);
        RECOMP_ICALL_SAFE(pc_adjust_target, pc_adjust_esp);
    }
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00177970; /* je: equal / zero */

loc_0017794A: ;
    SET_LO8(ecx, MEM8(0x571864));
    SET_LO8(ecx, LO8(ecx) & 0xF0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x571758);
    MEM8(0x571864) = LO8(ecx);
    { uint32_t _icall_target = MEM32(esi + 0x34); PUSH32(esp, 0x00177961u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00177961: ;
    eax = MEM32(esi);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x571758);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x00177970u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00177970: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
