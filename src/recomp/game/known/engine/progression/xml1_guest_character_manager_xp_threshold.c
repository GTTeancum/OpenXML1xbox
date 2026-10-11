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

/* xml1_guest_character_manager_xp_threshold; original guest entry 0x000541E0.
 * Evidence: tests/engine/progression/progression_test.c
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000541E0
 * Original: 0x000541E0 - 0x0005426A (138 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_character_manager_xp_threshold(void)
{
    /* XML1 CHARACTER LAYOUT v2 */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000541E0: ;
    SET_LO8(eax, MEM8(0x48D674));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, ebx);
    ebx = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0005424A; /* jne: not equal / not zero */

loc_000541EC: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x48D5B8) = 0xFFFFFFFFu;
    MEM32(0x48D5BC) = 0;
    MEM32(0x48D670) = 0x7FFFFFFF;
    esi = 0xA;
    edi = 0x48D5C0;
    ebp = 0x2C;
    /* nop */

loc_00054220: ;
    eax = MEM32(ebx);
    ecx = esi + -9;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xC4); PUSH32(esp, 0x0005422Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0005422E: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    edx = eax + eax * 4;
    edx = edx + MEM32(edi + -4);
    MEM32(edi) = edx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00054220; /* jne: not equal / not zero */

loc_00054240: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x48D674) = 1;
    POP32(esp, ebp);

loc_0005424A: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, ebx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00054262; /* jle: less or equal (signed <=) */

loc_00054253: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00054262; /* jge: greater or equal (signed >=) */

loc_00054258: ;
    eax = MEM32(eax * 4 + 0x48D5B8);
    esp += 8; return; /* ret 4 */

loc_00054262: ;
    eax = 0x7FFFFFFF;
    esp += 8; return; /* ret 4 */

}
