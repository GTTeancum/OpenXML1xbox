#define RECOMP_GENERATED_CODE
#include "engine/combat/raven_vitality_bonus.h"
#include "engine/powers/raven_power_selection_save.h"
#include "engine/actors/raven_leader_definition.h"
#include "engine/actors/raven_ai_modes.h"
#include "engine/actors/raven_actor_transform_owner.h"
#include "engine/actors/raven_character_race.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include "game/xml1/newgame_plus.h"
#include "game/xml1/character_limits.h"
#include <math.h>
#include "engine/progression/character_save.h"
#include "game/xml1/modder_mode.h"

/* xml1_guest_character_manager_load; original guest entry 0x00056F10.
 * Evidence: docs/ROSTER-COSTUME-EXPANSION.md
 * Evidence: scripts/guard-character-limits.py
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00056F10
 * Original: 0x00056F10 - 0x00057048 (312 bytes, 97 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_character_manager_load(void)
{
    /* XML1 versioned character save section */
    xml1_save_layout pc_save_layout;
    /* XML1 CHARACTER LAYOUT v2 */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00056F10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00056F1Bu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_00056F1B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x00056F25u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00056F25: ;
    ecx = MEM32(esi + 0xF31C);
    ebx = MEM32(esp + 0x14);
    if (!xml1_character_load_header(esi, ebx, &pc_save_layout)) xml1_character_save_rejected();
    eax = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM8(esp + 0xF) = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_00056F97; /* jle: less or equal (signed <=) */

loc_00056F3D: ;
    /* nop */

loc_00056F40: ;
    eax = eax + eax * 2;
    SET_LO8(edx, MEM8(esi + eax * 8 + 0xDB46));
    eax = esi + eax * 8;
    SET_LO8(edx, LO8(edx) & 0xFD);
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    MEM8(eax + 0xDB46) = LO8(edx);
    if (TEST_Z(_fa, _fb)) goto loc_00056F80; /* je: equal / zero */

loc_00056F5D: ;
    if (!xml1_saved_definition(&pc_save_layout, MEM8(esp + 0xF))) goto loc_00056F80;
    eax = MEM32(eax + 0xDB40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00056F80; /* je: equal / zero */

loc_00056F67: ;
    ecx = MEM32(esi + 0xDB28);
    edx = esi + 4;
    ecx = ecx & eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x488);
    PUSH32(esp, ebx);
    ecx = ecx + edx;
    PUSH32(esp, 0x00056F80u); RECOMP_ABI_CALL(0x000AF6F0u, sub_000AF6F0); /* call 0x000AF6F0 */

loc_00056F80: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    ecx = MEM32(esi + 0xF31C);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0xF) = LO8(eax);
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00056F40; /* jl: less (signed <) */

loc_00056F97: ;
    xml1_character_save_trace(esi, "loaded");
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00056F9Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00056F9E: ;
    ecx = ebx;
    PUSH32(esp, 0x00056FA5u); RECOMP_ABI_CALL(0x0006E920u, sub_0006E920); /* call 0x0006E920 */

loc_00056FA5: ;
    PUSH32(esp, 0x104);
    edi = esi + 0x1BDE8;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00056FB8u); RECOMP_ABI_CALL(0x0006E830u, sub_0006E830); /* call 0x0006E830 */

loc_00056FB8: ;
    eax = MEM32(esi + 0x1BEE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00057008; /* jle: less or equal (signed <=) */

loc_00056FC2: ;
    PUSH32(esp, ebp);
    ebp = (uint32_t)(0u - XML1_MANAGER_OFFSET(0xDAC8u)); /* inverse relocated list base */
    ebp = ebp - esi;
    /* nop */

loc_00056FD0: ;
    eax = ZX8(MEM8(edi));
    eax = eax + eax * 2;
    SET_LO8(edx, MEM8(esi + eax * 8 + 0xDB46));
    eax = esi + eax * 8 + 0xDB46;
    SET_LO8(edx, LO8(edx) | 2);
    MEM8(eax) = LO8(edx);
    PUSH32(esp, 0x00056FEEu); RECOMP_ABI_CALL(0x0008C980u, xml1_guest_progress_manager_get); /* call 0x0008C980 */

loc_00056FEE: ;
    ecx = ZX8(MEM8(edi));
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00056FF9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00056FF9: ;
    eax = MEM32(esi + 0x1BEE8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edi + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00056FD0; /* jl: less (signed <) */

loc_00057007: ;
    POP32(esp, ebp);

loc_00057008: ;
    ecx = ebx;
    PUSH32(esp, 0x0005700Fu); RECOMP_ABI_CALL(0x0006E920u, sub_0006E920); /* call 0x0006E920 */

loc_0005700F: ;
    PUSH32(esp, 1);
    eax = esi + 0x1BDE5;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0005701Fu); RECOMP_ABI_CALL(0x0006E830u, sub_0006E830); /* call 0x0006E830 */

loc_0005701F: ;
    esi = esi + 0x1631C;
    edi = pc_save_layout.snapshot_count;
    /* nop */

loc_00057030: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00057038u); RECOMP_ABI_CALL(0x00049280u, xml1_guest_character_stats_load); /* call 0x00049280 */

loc_00057038: ;
    esi = esi + 0x1E4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00057030; /* jne: not equal / not zero */

loc_00057041: ;
    xml1_character_load_finished();
    xml1_modder_unlock(MEM32(0x48D59C));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}
