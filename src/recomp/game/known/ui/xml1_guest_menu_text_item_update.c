#define RECOMP_GENERATED_CODE
#include "engine/inventory/raven_stash_menu_guest.h"
#include "engine/inventory/raven_stash_owner.h"
#include "ui/pc_menu.h"
#include "recomp_funcs.h"
#include <math.h>
#include "game/xml1/character_limits.h"

/* xml1_guest_menu_text_item_update; original guest entry 0x0017D750.
 * Evidence: docs/PC-OPTIONS-CONTROLS.md
 * Evidence: scripts/guard-pc-menu.py
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_0017D750
 * Original: 0x0017D750 - 0x0017D790 (64 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_menu_text_item_update(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0017D750: ;
    PUSH32(esp, esi);
    esi = ecx;
    xml1_pc_native_owner(esi, MEM32(esi + 4));
    xml1_pc_native_flags(esi, MEM8(esi + 0x39));
    xml1_pc_native_adjustable(esi, MEM32(MEM32(esi) + 0x3C) == 0x0017CE40u);
    xml1_pc_native_bounds(esi, SMEM16(esi + 0x5C), SMEM16(esi + 0x5E), SMEM16(esi + 0x60), SMEM16(esi + 0x62));
    if (xml1_pc_native_hover(esi) && MEM32(esi + 4) && MEM32(MEM32(esi + 4) + 0x290) != esi) {
        ecx = MEM32(esi + 4);
        PUSH32(esp, esi);
        PUSH32(esp, 0x0017D78Eu);
        RECOMP_ABI_CALL(0x001639F0u, sub_001639F0);
    }
    if (xml1_pc_native_activate(esi)) {
        ecx = esi;
        uint32_t pc_use_target = MEM32(MEM32(esi) + 0x2C);
        uint32_t pc_use_esp = esp;
        PUSH32(esp, 0x0017D78Eu);
        RECOMP_ICALL_SAFE(pc_use_target, pc_use_esp);
    }
    int pc_adjust = xml1_pc_native_adjust(esi);
    if (pc_adjust) {
        ecx = esi;
        uint32_t pc_adjust_esp = esp;
        uint32_t pc_adjust_target = MEM32(MEM32(esi) + 0x3C);
        PUSH32(esp, 0);
        PUSH32(esp, (uint32_t)pc_adjust);
        PUSH32(esp, 0x0017D78Eu);
        RECOMP_ICALL_SAFE(pc_adjust_target, pc_adjust_esp);
    }
    /* Preserve the game's resolved controller glyphs before a PC prompt update. */
    if (xml1_pc_native_prompt_pending(esi)) {
        ecx = esi;
        PUSH32(esp, 0x0017D78Eu);
        RECOMP_ABI_CALL(0x0017D590u, sub_0017D590);
        xml1_pc_native_prompt_original(esi, (const char *)((uintptr_t)g_xbox_mem_offset+eax));
    }

    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017D78E; /* je: equal / zero */

loc_0017D75A: ;
    SET_LO8(eax, MEM8(0x571864));
    SET_LO8(eax, LO8(eax) & 0xF0);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x571758);
    MEM8(0x571864) = LO8(eax);
    { uint32_t _icall_target = MEM32(esi + 0x34); PUSH32(esp, 0x0017D76Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017D76E: ;
    SET_LO8(eax, MEM8(0x571864));
    esp = esp + 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017D78E; /* je: equal / zero */

loc_0017D77A: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017D78E; /* jne: not equal / not zero */

loc_0017D781: ;
    PUSH32(esp, 0x571758);
    ecx = esi + 0x74;
    PUSH32(esp, 0x0017D78Eu); RECOMP_ABI_CALL(0x001613A0u, sub_001613A0); /* call 0x001613A0 */

loc_0017D78E: ;
    if (MEM32(esi + 0x58)) {
        unsigned pc_owner = MEM32(esi + 4);
        int pc_indicator = xml1_pc_native_profile_indicator(esi,
            pc_owner && MEM32(pc_owner + 0x290) == esi);
        if (pc_indicator >= 0) {
            unsigned pc_name = MEM32(0x458674);
            if (pc_indicator && MEM32(esi + 0x54)) {
                PUSH32(esp, 0x0017D78Eu);
                RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0);
                unsigned pc_index = MEM32(esi + 0x54) & 0xFFFFFFu;
                pc_name = eax + MEM32(eax + pc_index * 4 + 4) + 0x1008u;
            }
            ecx = MEM32(esi + 0x58);
            unsigned pc_target = MEM32(MEM32(ecx) + 0x28);
            unsigned pc_stack = esp;
            PUSH32(esp, 0);
            PUSH32(esp, pc_name);
            PUSH32(esp, 0x0017D78Eu);
            RECOMP_ICALL_SAFE(pc_target, pc_stack);
        }
    }
    /* Apply PC text after native gamevar refresh, using the actual string handle. */
    xml1_pc_native_text_handle(esi, MEM32(esi + 0x74));
    if (xml1_pc_native_value(esi, (char *)((uintptr_t)g_xbox_mem_offset+esp-512), 512)) {
        esp -= 512;
        uint32_t pc_text = esp;
        PUSH32(esp, pc_text);
        ecx = esi + 0x74;
        PUSH32(esp, 0x0017D78Eu);
        RECOMP_ABI_CALL(0x001613A0u, sub_001613A0);
        esp += 512;
        xml1_pc_native_text_handle(esi, MEM32(esi + 0x74));
    }
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
