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

/* xml1_guest_talent_pending_refund; original guest entry 0x00048510.
 * Evidence: tests/engine/progression/character_talent_native_test.c
 * Evidence: scripts/guard-talent-ranks.py
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00048510
 * Original: 0x00048510 - 0x0004868F (383 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_talent_pending_refund(void)
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

loc_00048510: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    ebx = ecx;
    SET_LO16(eax, ZX8(MEM8(ebx + 0x2C)));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM16(esp + 0x10) = LO16(eax);
    MEM32(esp + 0x1C) = ebx;
    MEM8(esp + 0xF) = 0;
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    edi = edi;

loc_00048530: ;
    SET_LO16(esi, ZX8(MEM8(ebx + eax + 0x1F)));
    SET_LO8(edx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(esi), LO16(esi) (16-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(edx, LO8(edx) | LO8(ecx));
    MEM8(esp + 0x13) = LO8(edx);
    edx = MEM32(esp + 0x14);
    edx = edx + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (TEST_S(_fas, _fbs)) goto loc_00048575; /* jl: less (signed <) */

loc_00048554: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00048575; /* jge: greater or equal (signed >=) */

loc_00048559: ;
    SET_LO8(edx, MEM8(eax + ebx + 0x23));
    ecx = ZX8(MEM8(eax + ebx + 0x1B));
    edx = ZX8(LO8(edx));
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x64 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00048575; /* jg: greater (signed >) */

loc_0004856C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00048575; /* jl: less (signed <) */

loc_00048570: ;
    MEM8(ebx + eax + 0x1F) = 0;

loc_00048575: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00048530; /* jl: less (signed <) */

loc_0004857B: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    SET_LO16(ecx, ZX8(MEM8(ebx + 0x2B)));
    esi = _character_map;
    MEM8(ebx + 0x2C) = LO8(eax);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    MEM16(esp + 0x14) = LO16(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_000485B2; /* je: equal / zero */

loc_00048599: ;
    edx = eax + 1;
    edx = edx << 4;
    ecx = MEM32(edx + esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000485B2; /* je: equal / zero */

loc_000485AA: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000485B2u); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_000485B2: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000485C4; /* jne: not equal / not zero */

loc_000485BC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00048672; /* je: equal / zero */

loc_000485C4: ;
    ebp = 0;
    if (!xml1_talent_record_get(MEM32(esi + edi * 4 + _character_values), XML1_TALENT_PENDING))
        goto loc_0004864B;

loc_000485D1: ;
    eax = edi;
    eax = eax << 4;
    ecx = eax + esi + 0x18;
    MEM32(esp + 0x1C) = ecx;
    edi = edi;

loc_000485E0: ;
    MEM32(esp + 0x18) = 1;
    PUSH32(esp, 0x000485EDu); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_000485ED: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000485F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000485F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00048623; /* je: equal / zero */

loc_000485FD: ;
    ebx = MEM32(eax);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = xml1_talent_record_get(MEM32(esi + edi * 4 + _character_values), XML1_TALENT_CURRENT)
        + xml1_talent_record_get(MEM32(esi + edi * 4 + _character_values), XML1_TALENT_PENDING) - 1;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(ebx + 0x34); PUSH32(esp, 0x0004861Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); }
    }

loc_0004861F: ;
    ebx = MEM32(esp + 0x20);

loc_00048623: ;
    ebp += MEM32(esp + 0x18);
    edx = xml1_talent_record_get(MEM32(esi + edi * 4 + _character_values), XML1_TALENT_PENDING) - 1;
    xml1_talent_guest_set(esi + edi * 4 + _character_values, XML1_TALENT_PENDING, edx);
    if (edx) goto loc_000485E0;

loc_0004864B: ;
    ecx = MEM32(esp + 0x14);
    SET_LO8(edx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(ebp), LO16(ebp) (16-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx + ebp;
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    MEM8(esp + 0x17) = LO8(edx);
    PUSH32(esp, 0x0004866Du); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_0004866D: ;
    goto loc_000485B2;

loc_00048672: ;
    eax = MEM32(_character_map+(_character_expanded?0x1418u:0x164u));
    POP32(esp, edi);
    POP32(esp, esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, MEM8(esp + 0xB));
    POP32(esp, ebp);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0004868A; /* jle: less or equal (signed <=) */

loc_00048683: ;
    SET_LO8(ecx, MEM8(esp + 8));
    MEM8(ebx + 0x2B) = LO8(ecx);

loc_0004868A: ;
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}
