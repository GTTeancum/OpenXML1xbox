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

/* xml1_guest_talent_pending_commit; original guest entry 0x00048950.
 * Evidence: tests/engine/progression/character_talent_native_test.c
 * Evidence: scripts/guard-talent-ranks.py
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00048950
 * Original: 0x00048950 - 0x00048B3D (493 bytes, 164 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_talent_pending_commit(void)
{
    /* XML1 OWNED CHARACTER TALENT MAP */
    const uint32_t _character_map=xml1_character_talent_map_resolve(ecx+0x30u);
    const int _character_expanded=xml1_character_talent_map_contains(_character_map);
    const uint32_t _character_values=_character_expanded?0x141cu:0x168u;
    /* XML1 SIX BIT TALENT RECORD */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00048950: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0x14) = edi;
    MEM8(esp + 0x11) = 0;
    esi = _character_map;
    MEM32(esp + 0x18) = 4;
    /* nop */

loc_00048970: ;
    eax = 0; /* xor self */

loc_00048972: ;
    SET_LO16(edx, ZX8(MEM8(edi + eax + 0x1F)));
    SET_LO8(ebx, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(edx), LO16(edx) (16-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(ebx, LO8(ebx) | LO8(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esp + 0x11) = LO8(ebx);
    if (TEST_S(_fas, _fbs)) goto loc_000489B8; /* jl: less (signed <) */

loc_0004898C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000489B0; /* jge: greater or equal (signed >=) */

loc_00048991: ;
    SET_LO8(ebx, MEM8(eax + edi + 0x23));
    ecx = ZX8(MEM8(eax + edi + 0x1B));
    ebx = ZX8(LO8(ebx));
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x64 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000489AD; /* jg: greater (signed >) */

loc_000489A4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_000489AD; /* jl: less (signed <) */

loc_000489A8: ;
    MEM8(edi + eax + 0x1F) = 0;

loc_000489AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */

loc_000489B0: ;
    if (CMP_G(_fas, _fbs)) goto loc_000489B8; /* jg: greater (signed >) */

loc_000489B2: ;
    SET_LO8(ecx, MEM8(eax + edi + 0x1B));
    goto loc_000489BA;

loc_000489B8: ;
    SET_LO8(ecx, 0); /* xor self */

loc_000489BA: ;
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_000489D0; /* jl: less (signed <) */

loc_000489C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000489D0; /* jge: greater or equal (signed >=) */

loc_000489C5: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x64) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x64 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000489CC; /* jb: below (unsigned <) */

loc_000489CA: ;
    SET_LO8(edx, 0x64);

loc_000489CC: ;
    MEM8(eax + edi + 0x1B) = LO8(edx);

loc_000489D0: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00048972; /* jl: less (signed <) */

loc_000489D6: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000489F9; /* je: equal / zero */

loc_000489E0: ;
    edx = eax + 1;
    edx = edx << 4;
    ecx = MEM32(edx + esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000489F9; /* je: equal / zero */

loc_000489F1: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000489F9u); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_000489F9: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00048A0B; /* jne: not equal / not zero */

loc_00048A03: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00048B27; /* je: equal / zero */

loc_00048A0B: ;
    SET_LO8(eax, xml1_talent_record_get(MEM32(esi + ebp * 4 + _character_values), XML1_TALENT_PENDING));
    SET_LO16(ebx, ZX8(LO8(eax)));
    SET_LO8(eax, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(ebx), LO16(ebx) (16-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    MEM8(esp + 0x11) = LO8(eax);
    eax = MEM32(esi + 4);
    edx = ebp;
    edx = edx << 4;
    edi = edx + esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00048A3Eu); RECOMP_ABI_CALL(0x000B3BE0u, sub_000B3BE0); /* call 0x000B3BE0 */

loc_00048A3E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00048A49; /* jne: not equal / not zero */

loc_00048A45: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00048A58; /* je: equal / zero */

loc_00048A49: ;
    SET_LO8(eax, xml1_talent_record_get(MEM32(esi + eax * 4 + _character_values), XML1_TALENT_CURRENT));
    MEM8(esp + 0x13) = LO8(eax);
    goto loc_00048A5D;

loc_00048A58: ;
    MEM8(esp + 0x13) = 0;

loc_00048A5D: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00048A69u); RECOMP_ABI_CALL(0x000B3BE0u, sub_000B3BE0); /* call 0x000B3BE0 */

loc_00048A69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00048A7C; /* jne: not equal / not zero */

loc_00048A74: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00048B0A; /* je: equal / zero */

loc_00048A7C: ;
    MEM8(esp + 0x12) = 0;
    PUSH32(esp, 0x00048A86u); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_00048A86: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00048A8Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00048A8E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00048A9D; /* je: equal / zero */

loc_00048A92: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00048A99u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00048A99: ;
    MEM8(esp + 0x12) = LO8(eax);

loc_00048A9D: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00048AA9u); RECOMP_ABI_CALL(0x000B3BE0u, sub_000B3BE0); /* call 0x000B3BE0 */

loc_00048AA9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00048AB4; /* jne: not equal / not zero */

loc_00048AB0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00048ACC; /* je: equal / zero */

loc_00048AB4: ;
    SET_LO8(eax, xml1_talent_record_get(MEM32(esi + eax * 4 + _character_values), XML1_TALENT_LIMIT));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00048ACC; /* jbe: below or equal (unsigned <=) */

loc_00048AC2: ;
    _fa = (uint32_t)(MEM8(esp + 0x12)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x12), LO8(eax) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00048ACC; /* jb: below (unsigned <) */

loc_00048AC8: ;
    MEM8(esp + 0x12) = LO8(eax);

loc_00048ACC: ;
    ecx = ZX8(MEM8(esp + 0x12));
    SET_LO8(ebx, LO8(ebx) + MEM8(esp + 0x13));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = ZX8(LO8(ebx));
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00048AEA; /* jle: less or equal (signed <=) */

loc_00048ADC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00048AE4; /* jge: greater or equal (signed >=) */

loc_00048AE0: ;
    eax = 0; /* xor self */
    goto loc_00048AEA;

loc_00048AE4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00048AEA; /* jle: less or equal (signed <=) */

loc_00048AE8: ;
    eax = ecx;

loc_00048AEA: ;
    ecx = MEM32(esp + 0x1C);
    xml1_talent_guest_set(esi + ecx * 4 + _character_values, XML1_TALENT_CURRENT, LO8(eax));

loc_00048B0A: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00048B16u); RECOMP_ABI_CALL(0x00048860u, xml1_guest_talent_pending_rank_set); /* call 0x00048860 */

loc_00048B16: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00048B1Eu); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_00048B1E: ;
    edi = MEM32(esp + 0x14);
    goto loc_000489F9;

loc_00048B27: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00048970; /* jne: not equal / not zero */

loc_00048B31: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}
