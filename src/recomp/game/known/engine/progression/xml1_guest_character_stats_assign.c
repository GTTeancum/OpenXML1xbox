#define RECOMP_GENERATED_CODE
#include "engine/combat/raven_vitality_bonus.h"
#include "engine/powers/raven_victim_event_guest.h"
#include "engine/scripting/raven_remove_events.h"
#include "engine/powers/raven_powerup_guest.h"
#include "engine/combat/raven_native_damage.h"
#include "engine/actors/raven_actor_scale_owner.h"
#include "engine/combat/raven_native_energy_guest.h"
#include "engine/combat/raven_native_energy.h"
#include "diagnostics/raven_operand_trace.h"
#include "engine/combat/raven_bishop_guest.h"
#include "engine/actors/raven_ai_modes.h"
#include "ui/pc_menu.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include "engine/combat/raven_vitality_save_guest.h"
#include "engine/progression/character_talent_guest.h"
#include <math.h>

/* xml1_guest_character_stats_assign; original guest entry 0x000490F0.
 * Evidence: tests/engine/progression/character_talent_map_native_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000490F0
 * Original: 0x000490F0 - 0x00049274 (388 bytes, 116 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_character_stats_assign(void)
{
    /* XML1 OWNED CHARACTER TALENT MAP */
    uint32_t _temporary=0,_temporary_original=0;
    const uint32_t _character_map=xml1_character_talent_map_resolve(ecx+0x30u);
    const uint32_t _source_map=xml1_character_talent_map_resolve(MEM32(esp+4)+0x30u);
    const int _character_expanded=xml1_character_talent_map_contains(_character_map);
    const uint32_t _character_values=_character_expanded?0x141cu:0x168u;
    if (_character_expanded!=xml1_character_talent_map_contains(_source_map)) { fputs("Mixed character stats copy\n",stderr); abort(); }
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000490F0: ;
#ifdef XML1_PERMANENT_VITALITY
    xml1_vitality_assign(ecx, MEM32(esp+4));
#endif
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E5BB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x1AC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C0);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, edi);
    esi = ebx + 4;
    edi = ebp + 4;
    ecx = 0xB;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    esi = _character_map;
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00049132u); RECOMP_ABI_CALL(0x00049040u, xml1_guest_character_talent_map_copy); /* call 0x00049040 */

loc_00049132: ;
    _temporary_original=esp+0x10u;
    _temporary=xml1_character_talent_map_resolve(_temporary_original);
    MEM32(_temporary) = 0x3CAD98;
    eax = MEM32(_source_map+4);
    MEM32(esi + 4) = eax;
    ecx = MEM32(_source_map+8);
    edx = _source_map+12;
    MEM32(esi + 8) = ecx;
    PUSH32(esp, edx);
    ecx = esi + 0xC;
    MEM32(esp + 0x1C8) = 0;
    PUSH32(esp, 0x0004915Du); RECOMP_ABI_CALL(0x00048090u, xml1_guest_character_talent_node_pool_copy); /* call 0x00048090 */

loc_0004915D: ;
    eax = _source_map+_character_values;
    PUSH32(esp, eax);
    ecx = esi+_character_values;
    PUSH32(esp, 0x0004916Fu); RECOMP_ABI_CALL(0x000478B0u, xml1_guest_character_talent_records_copy); /* call 0x000478B0 */

loc_0004916F: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049192; /* je: equal / zero */

loc_00049179: ;
    ecx = eax + 1;
    ecx = ecx << 4;
    ecx = MEM32(ecx + esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049192; /* je: equal / zero */

loc_0004918A: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00049192u); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_00049192: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000491A0; /* jne: not equal / not zero */

loc_0004919C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000491C0; /* je: equal / zero */

loc_000491A0: ;
    PUSH32(esp, 0x000491A5u); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_000491A5: ;
    edx = MEM32(eax);
    ecx = edi;
    ecx = ecx << 4;
    ecx = ecx + esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000491B6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000491B6: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000491BEu); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_000491BE: ;
    goto loc_00049192;

loc_000491C0: ;
    ecx = MEM32(_temporary+4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000491E8; /* je: equal / zero */

loc_000491CC: ;
    edx = ecx;
    edx = edx << 4;
    eax = MEM32(_temporary+edx+0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000491E8; /* je: equal / zero */

loc_000491DC: ;
    PUSH32(esp, eax);
    ecx = _temporary;
    PUSH32(esp, 0x000491E6u); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_000491E6: ;
    goto loc_000491EA;

loc_000491E8: ;
    eax = ecx;

loc_000491EA: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049216; /* je: equal / zero */

loc_000491F4: ;
    PUSH32(esp, 0x000491F9u); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_000491F9: ;
    edx = MEM32(eax);
    ecx = esi;
    ecx = ecx << 4;
    ecx = _temporary+ecx+0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x0004920Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0004920A: ;
    PUSH32(esp, esi);
    ecx = _temporary;
    PUSH32(esp, 0x00049214u); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_00049214: ;
    goto loc_000491EA;

loc_00049216: ;
    esi = 0; /* xor self */
    MEM32(ebp + 0x1E0) = esi;
    _fa = (uint32_t)(MEM32(ebx + 0x1E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x1E0), esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0004924C; /* jle: less or equal (signed <=) */

loc_00049226: ;
    eax = ebp + 0x1DC;
    /* nop */

loc_00049230: ;
    edx = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(ebx + esi + 0x1DC));
    edx = edx + eax;
    MEM8(edx) = LO8(ecx);
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebx + 0x1E0);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00049230; /* jl: less (signed <) */

loc_0004924C: ;
    ecx = ebp + 0x1DC;
    PUSH32(esp, 0x00049257u); RECOMP_ABI_CALL(0x000479D0u, sub_000479D0); /* call 0x000479D0 */

loc_00049257: ;
    if (_character_expanded) xml1_character_talent_map_retire(_temporary_original);
    ecx = MEM32(esp + 0x1BC);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1B8;
    esp += 8; return; /* ret 4 */

}
