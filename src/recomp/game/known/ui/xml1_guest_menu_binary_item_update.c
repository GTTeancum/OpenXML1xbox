#define RECOMP_GENERATED_CODE
#include "engine/inventory/raven_stash_menu_guest.h"
#include "engine/inventory/raven_stash_owner.h"
#include "ui/pc_menu.h"
#include "recomp_funcs.h"
#include <math.h>
#include "game/xml1/character_limits.h"

/* xml1_guest_menu_binary_item_update; original guest entry 0x00174860.
 * Evidence: docs/PC-OPTIONS-CONTROLS.md
 * Evidence: scripts/guard-pc-menu.py
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00174860
 * Original: 0x00174860 - 0x0017491F (191 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_menu_binary_item_update(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00174860: ;
    PUSH32(esp, esi);
    esi = ecx;
    xml1_pc_native_owner(esi, MEM32(esi + 4));
    xml1_pc_native_flags(esi, MEM8(esi + 0x39));
    xml1_pc_native_adjustable(esi, MEM32(MEM32(esi) + 0x3C) == 0x0017CE40u);
    xml1_pc_native_bounds(esi, SMEM16(esi + 0x5C), SMEM16(esi + 0x5E), SMEM16(esi + 0x60), SMEM16(esi + 0x62));
    if (xml1_pc_native_hover(esi) && MEM32(esi + 4) && MEM32(MEM32(esi + 4) + 0x290) != esi) {
        ecx = MEM32(esi + 4);
        PUSH32(esp, esi);
        PUSH32(esp, 0x0017491Du);
        RECOMP_ABI_CALL(0x001639F0u, sub_001639F0);
    }
    if (xml1_pc_native_activate(esi)) {
        ecx = esi;
        uint32_t pc_use_target = MEM32(MEM32(esi) + 0x2C);
        uint32_t pc_use_esp = esp;
        PUSH32(esp, 0x0017491Du);
        RECOMP_ICALL_SAFE(pc_use_target, pc_use_esp);
    }
    int pc_adjust = xml1_pc_native_adjust(esi);
    if (pc_adjust) {
        ecx = esi;
        uint32_t pc_adjust_esp = esp;
        uint32_t pc_adjust_target = MEM32(MEM32(esi) + 0x3C);
        PUSH32(esp, 0);
        PUSH32(esp, (uint32_t)pc_adjust);
        PUSH32(esp, 0x0017491Du);
        RECOMP_ICALL_SAFE(pc_adjust_target, pc_adjust_esp);
    }
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017491D; /* je: equal / zero */

loc_0017486E: ;
    SET_LO8(eax, MEM8(0x571864));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    SET_LO8(eax, LO8(eax) & 0xF0);
    PUSH32(esp, 0x571758);
    MEM8(0x571864) = LO8(eax);
    { uint32_t _icall_target = MEM32(esi + 0x34); PUSH32(esp, 0x00174883u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00174883: ;
    eax = MEM32(0x571858);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001748B5; /* je: equal / zero */

loc_0017488F: ;
    edi = MEM32(esi + 0x7C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0017489D; /* jne: not equal / not zero */

loc_00174896: ;
    edi = 0x3C806C;
    goto loc_001748DC;

loc_0017489D: ;
    PUSH32(esp, 0x001748A2u); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_001748A2: ;
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    edi = ecx + eax + 0x1008;
    goto loc_001748DC;

loc_001748B5: ;
    edi = MEM32(esi + 0x80);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001748C6; /* jne: not equal / not zero */

loc_001748BF: ;
    edi = 0x3C806C;
    goto loc_001748DC;

loc_001748C6: ;
    PUSH32(esp, 0x001748CBu); RECOMP_ABI_CALL(0x00199CD0u, sub_00199CD0); /* call 0x00199CD0 */

loc_001748CB: ;
    edi = edi & 0xFFFFFF;
    edx = MEM32(eax + edi * 4 + 4);
    edi = edx + eax + 0x1008;

loc_001748DC: ;
    eax = MEM32(esi + 0x50);
    PUSH32(esp, 0);
    PUSH32(esp, 0x457E24);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001748F3u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_001748F3: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0017491C; /* je: equal / zero */

loc_001748FA: ;
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, 0);
    PUSH32(esp, 0x457E24);
    PUSH32(esp, 0x457E0C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00174911u); RECOMP_ABI_CALL(0x0034238Du, sub_0034238D); /* call 0x0034238D */

loc_00174911: ;
    edx = MEM32(eax);
    esp = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0017491Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0017491C: ;
    POP32(esp, edi);

loc_0017491D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
