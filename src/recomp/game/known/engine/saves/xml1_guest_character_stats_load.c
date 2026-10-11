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

/* xml1_guest_character_stats_load; original guest entry 0x00049280.
 * Evidence: tests/engine/progression/progression_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00049280
 * Original: 0x00049280 - 0x0004947C (508 bytes, 159 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_character_stats_load(void)
{
    /* XML1 OWNED CHARACTER TALENT MAP */
    uint32_t _temporary=0,_temporary_original=0;
    const uint32_t _character_map=xml1_character_talent_map_resolve(ecx+0x30u);
    const int _character_expanded=xml1_character_talent_map_contains(_character_map);
    /* XML1 SIX BIT TALENT RECORD */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00049280: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34E5BB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x1B8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = _character_map;
    PUSH32(esp, esi);
    ecx = esp + 0x20;
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0x000492B2u); RECOMP_ABI_CALL(0x00049040u, xml1_guest_character_talent_map_copy); /* call 0x00049040 */

loc_000492B2: ;
    _temporary_original=esp+0x1cu;
    _temporary=xml1_character_talent_map_resolve(_temporary_original);
    MEM32(_temporary) = 0x3CAD98;
    ebp = MEM32(esp + 0x1D8);
    PUSH32(esp, 0x2C);
    edi = edi + 4;
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    ecx = ebp;
    MEM32(esp + 0x1D8) = ebx;
    PUSH32(esp, 0x000492D7u); RECOMP_ABI_CALL(0x0006E830u, sub_0006E830); /* call 0x0006E830 */

loc_000492D7: ;
#ifdef XML1_PERMANENT_VITALITY
    xml1_vitality_saved_record(edi-4,ebp,1);
#endif
    ecx = esi + 0xC;
    MEM32(esi + 4) = 0x3FFFFFFF;
    MEM32(ecx+(_character_expanded?0x140cu:0x158u)) = ebx;
    memset((void*)XBOX_PTR(ecx+(_character_expanded?0x13ecu:0x154u)),0,_character_expanded?32u:4u);
    PUSH32(esp, 0x000492F2u); RECOMP_ABI_CALL(0x0013C900u, xml1_guest_character_talent_node_pool_construct); /* call 0x0013C900 */

loc_000492F2: ;
    ecx = esi+(_character_expanded?0x141cu:0x168u);
    PUSH32(esp, 0x000492FDu); RECOMP_ABI_CALL(0x000476E0u, xml1_guest_character_talent_records_clear); /* call 0x000476E0 */

loc_000492FD: ;
    PUSH32(esp, 1);
    eax = esp + 0x16;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0004930Bu); RECOMP_ABI_CALL(0x0006E830u, sub_0006E830); /* call 0x0006E830 */

loc_0004930B: ;
    if (MEM8(esp+0x12u)>(_character_expanded?254u:16u)) { fputs("Invalid saved talent count\n",stderr); abort(); }
    SET_LO8(eax, MEM8(esp + 0x12));
    edi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00049359; /* jbe: below or equal (unsigned <=) */

loc_00049315: ;
    MEM8(esp + 0x16) = MEM8(esp + 0x16) & 0xF0;
    PUSH32(esp, 1);
    ecx = esp + 0x17;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM8(esp + 0x1C) = LO8(ebx);
    MEM8(esp + 0x1D) = LO8(ebx);
    PUSH32(esp, 0x00049330u); RECOMP_ABI_CALL(0x0006E830u, sub_0006E830); /* call 0x0006E830 */

loc_00049330: ;
    PUSH32(esp, xml1_talent_guest_record_bytes(ebp));
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0004933Eu); RECOMP_ABI_CALL(0x0006E830u, sub_0006E830); /* call 0x0006E830 */

loc_0004933E: ;
    xml1_talent_guest_decode(ebp, esp + 0x14);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x17;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0004934Fu); RECOMP_ABI_CALL(0x00048B40u, sub_00048B40); /* call 0x00048B40 */

loc_0004934F: ;
    edx = ZX8(MEM8(esp + 0x12));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00049315; /* jl: less (signed <) */

loc_00049359: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004937C; /* je: equal / zero */

loc_00049363: ;
    ecx = eax + 1;
    ecx = ecx << 4;
    ecx = MEM32(ecx + esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004937C; /* je: equal / zero */

loc_00049374: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0004937Cu); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_0004937C: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0004938A; /* jne: not equal / not zero */

loc_00049386: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000493AA; /* je: equal / zero */

loc_0004938A: ;
    PUSH32(esp, 0x0004938Fu); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_0004938F: ;
    edx = MEM32(eax);
    ecx = edi;
    ecx = ecx << 4;
    ecx = ecx + esi + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000493A0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000493A0: ;
    if (getenv("XML1_TALENT_TRACE")) fprintf(stderr,
        "[TALENT LOAD ACQUIRE] stats=%08X id=%u result=%08X\n",
        MEM32(esp+0x18), MEM8(esi+(edi<<4)+0x18), eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000493A8u); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_000493A8: ;
    goto loc_0004937C;

loc_000493AA: ;
    ecx = MEM32(_temporary+4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000493D2; /* je: equal / zero */

loc_000493B6: ;
    edx = ecx;
    edx = edx << 4;
    eax = MEM32(_temporary+edx+0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000493D2; /* je: equal / zero */

loc_000493C6: ;
    PUSH32(esp, eax);
    ecx = _temporary;
    PUSH32(esp, 0x000493D0u); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_000493D0: ;
    goto loc_000493D4;

loc_000493D2: ;
    eax = ecx;

loc_000493D4: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00049400; /* je: equal / zero */

loc_000493DE: ;
    PUSH32(esp, 0x000493E3u); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_000493E3: ;
    edx = MEM32(eax);
    ecx = esi;
    ecx = ecx << 4;
    ecx = _temporary+ecx+0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x000493F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000493F4: ;
    PUSH32(esp, esi);
    ecx = _temporary;
    PUSH32(esp, 0x000493FEu); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_000493FE: ;
    goto loc_000493D4;

loc_00049400: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, 1);
    edx = esp + 0x16;
    PUSH32(esp, edx);
    ecx = ebp;
    MEM32(esi + 0x1E0) = ebx;
    PUSH32(esp, 0x00049418u); RECOMP_ABI_CALL(0x0006E830u, sub_0006E830); /* call 0x0006E830 */

loc_00049418: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    edi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00049456; /* jbe: below or equal (unsigned <=) */

loc_00049422: ;
    esi = esi + 0x1DC;

loc_00049428: ;
    PUSH32(esp, 1);
    eax = esp + 0x17;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00049436u); RECOMP_ABI_CALL(0x0006E830u, sub_0006E830); /* call 0x0006E830 */

loc_00049436: ;
    ecx = MEM32(esi + 4);
    SET_LO8(edx, MEM8(esp + 0x13));
    ecx = ecx + esi;
    MEM8(ecx) = LO8(edx);
    ebx = MEM32(esi + 4);
    eax = ZX8(MEM8(esp + 0x12));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esi + 4) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00049428; /* jl: less (signed <) */

loc_00049452: ;
    esi = MEM32(esp + 0x18);

loc_00049456: ;
    ecx = esi + 0x1DC;
    PUSH32(esp, 0x00049461u); RECOMP_ABI_CALL(0x000479D0u, sub_000479D0); /* call 0x000479D0 */

loc_00049461: ;
    if (_character_expanded) xml1_character_talent_map_retire(_temporary_original);
    ecx = MEM32(esp + 0x1C8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C4;
    esp += 8; return; /* ret 4 */

}
