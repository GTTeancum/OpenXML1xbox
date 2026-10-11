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

/* xml1_guest_character_stats_save; original guest entry 0x00047F80.
 * Evidence: tests/engine/progression/progression_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_00047F80
 * Original: 0x00047F80 - 0x00048090 (272 bytes, 90 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_character_stats_save(void)
{
    /* XML1 OWNED CHARACTER TALENT MAP */
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

loc_00047F80: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x2C);
    eax = ebx + 4;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00047F9Au); RECOMP_ABI_CALL(0x0006E7E0u, sub_0006E7E0); /* call 0x0006E7E0 */

loc_00047F9A: ;
#ifdef XML1_PERMANENT_VITALITY
    xml1_vitality_saved_record(ebx,ebp,0);
#endif
    SET_LO8(ecx, MEM8(_character_map+(_character_expanded?0x1418u:0x164u)));
    PUSH32(esp, 1);
    edx = esp + 0x20;
    MEM8(esp + 0x20) = LO8(ecx);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x00047FB2u); RECOMP_ABI_CALL(0x0006E7E0u, sub_0006E7E0); /* call 0x0006E7E0 */

loc_00047FB2: ;
    eax = MEM32(_character_map+4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    edi = _character_map;
    if (CMP_EQ(_fa, _fb)) goto loc_00047FD8; /* je: equal / zero */

loc_00047FBF: ;
    ecx = eax + 1;
    ecx = ecx << 4;
    ecx = MEM32(ecx + edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00047FD8; /* je: equal / zero */

loc_00047FD0: ;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00047FD8u); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_00047FD8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00047FE6; /* jne: not equal / not zero */

loc_00047FE2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0004803E; /* je: equal / zero */

loc_00047FE6: ;
    MEM8(esp + 0x16) = MEM8(esp + 0x16) & 0xF0;
    MEM8(esp + 0x14) = 0;
    MEM8(esp + 0x15) = 0;
    edx = esi;
    edx = edx << 4;
    SET_LO8(eax, MEM8(edx + edi + 0x18));
    MEM8(esp + 0x13) = LO8(eax);
    ecx = edi + esi*4 + (_character_expanded?0x141cu:0x168u);
    MEM32(esp + 0x14) = MEM32(ecx);
    PUSH32(esp, 1);
    ecx = esp + 0x17;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00048026u); RECOMP_ABI_CALL(0x0006E7E0u, sub_0006E7E0); /* call 0x0006E7E0 */

loc_00048026: ;
    PUSH32(esp, 4);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x00048034u); RECOMP_ABI_CALL(0x0006E7E0u, sub_0006E7E0); /* call 0x0006E7E0 */

loc_00048034: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0004803Cu); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_0004803C: ;
    goto loc_00047FD8;

loc_0004803E: ;
    SET_LO8(eax, MEM8(ebx + 0x1E0));
    PUSH32(esp, 1);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM8(esp + 0x24) = LO8(eax);
    PUSH32(esp, 0x00048056u); RECOMP_ABI_CALL(0x0006E7E0u, sub_0006E7E0); /* call 0x0006E7E0 */

loc_00048056: ;
    eax = MEM32(ebx + 0x1E0);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00048086; /* jle: less or equal (signed <=) */

loc_00048062: ;
    SET_LO8(edx, MEM8(ebx + esi + 0x1DC));
    PUSH32(esp, 1);
    eax = esp + 0x17;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM8(esp + 0x1B) = LO8(edx);
    PUSH32(esp, 0x0004807Bu); RECOMP_ABI_CALL(0x0006E7E0u, sub_0006E7E0); /* call 0x0006E7E0 */

loc_0004807B: ;
    eax = MEM32(ebx + 0x1E0);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00048062; /* jl: less (signed <) */

loc_00048086: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}
