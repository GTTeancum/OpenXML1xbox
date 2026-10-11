#define RECOMP_GENERATED_CODE
#include "engine/combat/raven_vitality_bonus.h"
#include "engine/progression/talent_registry_guest.h"
#include "engine/actors/raven_leader_definition.h"
#include "engine/actors/raven_ai_modes.h"
#include "engine/actors/raven_actor_transform_owner.h"
#include "engine/actors/raven_character_race.h"
#include "engine/combat/raven_filter_event.h"
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include "engine/progression/character_talent_guest.h"
#include <math.h>
#include "game/xml1/character_limits.h"

/* xml1_guest_character_definition_parse; original guest entry 0x000AFD70.
 * Evidence: docs/ROSTER-COSTUME-EXPANSION.md
 * Calling convention, guest registers and instruction labels are preserved. */
/**
 * sub_000AFD70
 * Original: 0x000AFD70 - 0x000B0D2C (4028 bytes, 1110 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void xml1_guest_character_definition_parse(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AFD70: ;
    /* Imported property is stored in the expanded CharacterDef, never in
     * a host map or the adjacent costume bytes. Native fields continue below. */
    if (raven_character_filter_parse(&MEM8(ecx + XML1_CHARACTER_COMBAT_FLAGS),
            (const char *)XBOX_PTR(MEM32(esp + 4)),
            (const char *)XBOX_PTR(MEM32(esp + 8)))) {
        SET_LO8(eax, 1);
        esp += 12; return; /* native thiscall ret 8 */
    }
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xEC));
    esp = esp - 0xEC;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xFC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C8690);
    PUSH32(esp, esi);
    MEM32(esp + 0x100) = eax;
    ebp = ecx;
    PUSH32(esp, 0x000AFD9Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000AFD9A: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000AFDC5; /* jne: not equal / not zero */

loc_000AFDA1: ;
    eax = MEM32(esp + 0x104);
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    esi = ebp + 0x20C;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AFDB7u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000AFDB7: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    MEM8(esi + 0x1F) = 0;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000AFDC5: ;
    PUSH32(esp, 0x3CB7D0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AFDD0u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000AFDD0: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000AFDF7; /* jne: not equal / not zero */

loc_000AFDD7: ;
    ecx = MEM32(esp + 0x104);
    PUSH32(esp, 0x1F);
    PUSH32(esp, ecx);
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x22C)) >> 32) & 1);
    ebp = ebp + 0x22C;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000AFDEDu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000AFDED: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000AFDF7: ;
    PUSH32(esp, 0x3D3DB8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AFE02u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000AFE02: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000AFE2D; /* jne: not equal / not zero */

loc_000AFE09: ;
    edx = MEM32(esp + 0x104);
    PUSH32(esp, 0x20);
    PUSH32(esp, edx);
    esi = ebp + 0x30C;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AFE1Fu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000AFE1F: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    MEM8(esi + 0x1F) = 0;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000AFE2D: ;
    PUSH32(esp, 0x3C96F4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AFE38u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000AFE38: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000AFED8; /* jne: not equal / not zero */

loc_000AFE43: ;
    esi = MEM32(esp + 0x104);
    eax = esi;
    edi = eax + 1;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */

loc_000AFE51: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(edx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000AFE51; /* jne: not equal / not zero */

loc_000AFE58: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000AFEBB; /* jne: not equal / not zero */

loc_000AFE5F: ;
    PUSH32(esp, 2);
    eax = esp + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM8(esp + 0x1C) = LO8(edx);
    MEM8(esp + 0x1E) = LO8(edx);
    PUSH32(esp, 0x000AFE74u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000AFE74: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000AFE7Eu); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000AFE7E: ;
    PUSH32(esp, 2);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    edx = esp + 0x24;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEM8(ebp + 0x370) = LO8(eax);
    PUSH32(esp, 0x000AFE94u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000AFE94: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AFE9Eu); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000AFE9E: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    MEM8(ebp + 0x1E) = LO8(eax);
    PUSH32(esp, 0x000AFEABu); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000AFEAB: ;
    MEM8(ebp + 0x371) = LO8(eax);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000AFEBB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AFEC1u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000AFEC1: ;
    MEM8(ebp + 0x370) = LO8(eax);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    MEM8(ebp + 0x371) = 0xFF;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000AFED8: ;
    PUSH32(esp, 0x3D3DB0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AFEE3u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_000AFEE3: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000AFF34; /* je: equal / zero */

loc_000AFEEA: ;
    PUSH32(esp, 0x3D3DB0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AFEF5u); RECOMP_ABI_CALL(0x003416B0u, sub_003416B0); /* call 0x003416B0 */

loc_000AFEF5: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(5)) >> 32) & 1);
    eax = eax + 5;
    PUSH32(esp, eax);
    /* Extended names belong to CharacterDef's herostat skin_ table.
     * Mission defaults use a different packed enum; keep that retail lookup. */
    { int extra = xml1_extra_skin_category((const char *)((uintptr_t)g_xbox_mem_offset + eax));
      if (extra >= 0) eax = (unsigned)extra;
      else { PUSH32(esp, 0x000AFEFEu); RECOMP_ABI_CALL(0x00084390u, sub_00084390); }
    }

loc_000AFEFE: ;
    esi = eax;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_000B0D0D; /* jl: less (signed <) */

loc_000AFF0B: ;
    /* Herostat categories, not physical skin numbers. */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(XML1_SKIN_CATEGORY_COUNT) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000B0D0D; /* jge: greater or equal (signed >=) */

loc_000AFF14: ;
    edx = MEM32(esp + 0x104);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000AFF21u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000AFF21: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    XML1_SKIN_BYTE(ebp, esi) = LO8(eax); /* New names use appended storage. */
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000AFF34: ;
    PUSH32(esp, 0x3CB7C0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AFF3Fu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000AFF3F: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000AFF60; /* jne: not equal / not zero */

loc_000AFF46: ;
    eax = MEM32(esp + 0x104);
    PUSH32(esp, eax);
    ecx = ebp + 0x2AC;
    PUSH32(esp, 0x000AFF59u); RECOMP_ABI_CALL(0x000496B0u, sub_000496B0); /* call 0x000496B0 */

loc_000AFF59: ;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000AFF60: ;
    PUSH32(esp, 0x3D3DA4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AFF6Bu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000AFF6B: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000AFF8C; /* jne: not equal / not zero */

loc_000AFF72: ;
    ecx = MEM32(esp + 0x104);
    PUSH32(esp, ecx);
    ecx = ebp + 0x2CC;
    PUSH32(esp, 0x000AFF85u); RECOMP_ABI_CALL(0x000496B0u, sub_000496B0); /* call 0x000496B0 */

loc_000AFF85: ;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000AFF8C: ;
    PUSH32(esp, 0x3D3D98);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AFF97u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000AFF97: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000AFFB8; /* jne: not equal / not zero */

loc_000AFF9E: ;
    edx = MEM32(esp + 0x104);
    PUSH32(esp, edx);
    ecx = ebp + 0x2EC;
    PUSH32(esp, 0x000AFFB1u); RECOMP_ABI_CALL(0x000496B0u, sub_000496B0); /* call 0x000496B0 */

loc_000AFFB1: ;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000AFFB8: ;
    PUSH32(esp, 0x3D3D8C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AFFC3u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000AFFC3: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0011; /* jne: not equal / not zero */

loc_000AFFCA: ;
    edi = MEM32(esp + 0x104);
    MEM32(ebp + 0x32C) = 6;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    /* nop */

loc_000AFFE0: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AFFE7u); RECOMP_ABI_CALL(0x001389E0u, sub_001389E0); /* call 0x001389E0 */

loc_000AFFE7: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AFFF0u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000AFFF0: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B0004; /* je: equal / zero */

loc_000AFFF7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000AFFE0; /* jl: less (signed <) */

loc_000AFFFD: ;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0004: ;
    MEM32(ebp + 0x32C) = esi;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0011: ;
    PUSH32(esp, 0x3D3D80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B001Cu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B001C: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B003D; /* jne: not equal / not zero */

loc_000B0023: ;
    eax = MEM32(esp + 0x104);
    PUSH32(esp, eax);
    ecx = ebp + 0x26C;
    PUSH32(esp, 0x000B0036u); RECOMP_ABI_CALL(0x000496B0u, sub_000496B0); /* call 0x000496B0 */

loc_000B0036: ;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B003D: ;
    PUSH32(esp, 0x3D3D74);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B0048u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0048: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0069; /* jne: not equal / not zero */

loc_000B004F: ;
    ecx = MEM32(esp + 0x104);
    PUSH32(esp, ecx);
    ecx = ebp + 0x28C;
    PUSH32(esp, 0x000B0062u); RECOMP_ABI_CALL(0x000496B0u, sub_000496B0); /* call 0x000496B0 */

loc_000B0062: ;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0069: ;
    PUSH32(esp, 0x3CB6D8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B0074u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0074: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B00AF; /* jne: not equal / not zero */

loc_000B007B: ;
    PUSH32(esp, 0x000B0080u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_000B0080: ;
    edx = MEM32(esp + 0x104);
    esi = eax;
    edi = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B0091u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000B0091: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0xC8); PUSH32(esp, 0x000B009Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B009D: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ebp + 0x18)));
    eax = eax - MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x000B00A8u); RECOMP_ABI_CALL(0x000AF890u, sub_000AF890); /* call 0x000AF890 */

loc_000B00A8: ;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B00AF: ;
    PUSH32(esp, 0x3D3D68);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B00BAu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B00BA: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B00E5; /* jne: not equal / not zero */

loc_000B00C1: ;
    eax = MEM32(esp + 0x104);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B00CEu); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000B00CE: ;
    edx = MEM32(ebp + 0x18);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x000B00DEu); RECOMP_ABI_CALL(0x000AF890u, sub_000AF890); /* call 0x000AF890 */

loc_000B00DE: ;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B00E5: ;
    PUSH32(esp, 0x3D3D60);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B00F0u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B00F0: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0114; /* jne: not equal / not zero */

loc_000B00F7: ;
    ecx = MEM32(esp + 0x104);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B0104u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000B0104: ;
    MEM32(ebp + 0x380) = eax;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0114: ;
    PUSH32(esp, 0x3D03B4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B011Fu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B011F: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0150; /* jne: not equal / not zero */

loc_000B0126: ;
    edx = MEM32(esp + 0x104);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B0133u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000B0133: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    MEM8(esp + 0x10) = LO8(eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = ebp + 4;
    PUSH32(esp, 0x000B0149u); RECOMP_ABI_CALL(0x00047530u, sub_00047530); /* call 0x00047530 */

loc_000B0149: ;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0150: ;
    PUSH32(esp, 0x3D03AC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B015Bu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B015B: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B018C; /* jne: not equal / not zero */

loc_000B0162: ;
    ecx = MEM32(esp + 0x104);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B016Fu); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000B016F: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    MEM8(esp + 0x10) = LO8(eax);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    ecx = ebp + 4;
    PUSH32(esp, 0x000B0185u); RECOMP_ABI_CALL(0x00047530u, sub_00047530); /* call 0x00047530 */

loc_000B0185: ;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B018C: ;
    PUSH32(esp, 0x3D03A4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B0197u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0197: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B01C8; /* jne: not equal / not zero */

loc_000B019E: ;
    eax = MEM32(esp + 0x104);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B01ABu); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000B01AB: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    MEM8(esp + 0x10) = LO8(eax);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    ecx = ebp + 4;
    PUSH32(esp, 0x000B01C1u); RECOMP_ABI_CALL(0x00047530u, sub_00047530); /* call 0x00047530 */

loc_000B01C1: ;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B01C8: ;
    PUSH32(esp, 0x3D039C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B01D3u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B01D3: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0204; /* jne: not equal / not zero */

loc_000B01DA: ;
    edx = MEM32(esp + 0x104);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B01E7u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000B01E7: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    MEM8(esp + 0x10) = LO8(eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    ecx = ebp + 4;
    PUSH32(esp, 0x000B01FDu); RECOMP_ABI_CALL(0x00047530u, sub_00047530); /* call 0x00047530 */

loc_000B01FD: ;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0204: ;
    PUSH32(esp, 0x3C96EC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B020Fu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B020F: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0237; /* jne: not equal / not zero */

loc_000B0216: ;
    PUSH32(esp, 0x000B021Bu); RECOMP_ABI_CALL(0x000BD520u, sub_000BD520); /* call 0x000BD520 */

loc_000B021B: ;
    ecx = MEM32(esp + 0x104);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000B022Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B022A: ;
    MEM32(ebp + 0x39C) = eax;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0237: ;
    PUSH32(esp, 0x3CD3EC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B0242u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0242: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0263; /* jne: not equal / not zero */

loc_000B0249: ;
    edx = MEM32(esp + 0x104);
    PUSH32(esp, edx);
    ecx = ebp + 0x3A0;
    PUSH32(esp, 0x000B025Cu); RECOMP_ABI_CALL(0x00074BE0u, sub_00074BE0); /* call 0x00074BE0 */

loc_000B025C: ;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0263: ;
    PUSH32(esp, 0x3D2CC0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B026Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B026E: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0292; /* jne: not equal / not zero */

loc_000B0275: ;
    eax = MEM32(esp + 0x104);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B0282u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000B0282: ;
    MEM32(ebp + 0x3B8) = eax;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0292: ;
    PUSH32(esp, 0x3CFD44);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B029Du); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B029D: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B02C1; /* jne: not equal / not zero */

loc_000B02A4: ;
    ecx = MEM32(esp + 0x104);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B02B1u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000B02B1: ;
    MEM8(ebp + 0x37F) = LO8(eax);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B02C1: ;
    PUSH32(esp, 0x3D3D50);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B02CCu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B02CC: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B02F0; /* jne: not equal / not zero */

loc_000B02D3: ;
    edx = MEM32(esp + 0x104);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B02E0u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000B02E0: ;
    MEMF(ebp + 0x384) = (float)fp_top(); fp_pop(); /* fstp */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B02F0: ;
    PUSH32(esp, 0x3C85AC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B02FBu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B02FB: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0333; /* jne: not equal / not zero */

loc_000B0302: ;
    edx = MEM32(esp + 0x104);
    eax = ebp + 0x394;
    PUSH32(esp, eax);
    ecx = ebp + 0x390;
    PUSH32(esp, ecx);
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x38C)) >> 32) & 1);
    ebp = ebp + 0x38C;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3C875C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B0329u); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_000B0329: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0333: ;
    PUSH32(esp, 0x3C9708);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B033Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B033E: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0362; /* jne: not equal / not zero */

loc_000B0345: ;
    eax = MEM32(esp + 0x104);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B0352u); RECOMP_ABI_CALL(0x000668E0u, sub_000668E0); /* call 0x000668E0 */

loc_000B0352: ;
    MEM32(ebp + 0x398) = eax;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0362: ;
    PUSH32(esp, 0x3D3D48);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B036Du); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B036D: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B03AD; /* jne: not equal / not zero */

loc_000B0374: ;
    ecx = MEM32(esp + 0x104);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B0386u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0386: ;
    SET_LO8(ebx, MEM8(ebp + 0x3A1));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    if (4) _cf = (int)(((LO8(edx)) >> (8 - (4))) & 1);
    SET_LO8(edx, LO8(edx) << 4);
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 0x10);
    SET_LO8(eax, LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    MEM8(ebp + 0x3A1) = LO8(eax);
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B03AD: ;
    PUSH32(esp, 0x3D3D3C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B03B8u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B03B8: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B03F5; /* jne: not equal / not zero */

loc_000B03BF: ;
    eax = MEM32(esp + 0x104);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B03D1u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B03D1: ;
    SET_LO8(ebx, MEM8(ebp + 0x47C));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(eax, LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM8(ebp + 0x47C) = LO8(eax);
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B03F5: ;
    PUSH32(esp, 0x3D3D34);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B0400u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0400: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B043F; /* jne: not equal / not zero */

loc_000B0407: ;
    edx = MEM32(esp + 0x104);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B0419u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0419: ;
    SET_LO8(ebx, MEM8(ebp + 0x3A1));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    if (3) _cf = (int)(((LO8(eax)) >> (8 - (3))) & 1);
    SET_LO8(eax, LO8(eax) << 3);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 8);
    SET_LO8(ecx, LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(ebp + 0x3A1) = LO8(ecx);
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B043F: ;
    PUSH32(esp, 0x3D3D24);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B044Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B044A: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B046E; /* jne: not equal / not zero */

loc_000B0451: ;
    ecx = MEM32(esp + 0x104);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B045Eu); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000B045E: ;
    MEMF(ebp + 0x3A8) = (float)fp_top(); fp_pop(); /* fstp */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B046E: ;
    PUSH32(esp, 0x3D3D18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B0479u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0479: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B049A; /* jne: not equal / not zero */

loc_000B0480: ;
    edx = MEM32(esp + 0x104);
    PUSH32(esp, edx);
    ecx = ebp + 0x330;
    PUSH32(esp, 0x000B0493u); RECOMP_ABI_CALL(0x00025BF0u, sub_00025BF0); /* call 0x00025BF0 */

loc_000B0493: ;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B049A: ;
    PUSH32(esp, 0x3D1FFC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B04A5u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B04A5: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0517; /* jne: not equal / not zero */

loc_000B04AC: ;
    esi = MEM32(esp + 0x104);
    PUSH32(esp, 0x3D3D10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B04BEu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B04BE: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B04D3; /* jne: not equal / not zero */

loc_000B04C5: ;
    MEM8(ebp + 0x3A4) = 1;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B04D3: ;
    PUSH32(esp, 0x3D3D08);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B04DEu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B04DE: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B04F3; /* jne: not equal / not zero */

loc_000B04E5: ;
    MEM8(ebp + 0x3A4) = 2;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B04F3: ;
    PUSH32(esp, 0x3D3CFC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B04FEu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B04FE: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0D0D; /* jne: not equal / not zero */

loc_000B0509: ;
    MEM8(ebp + 0x3A4) = 3;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0517: ;
    PUSH32(esp, 0x3D3CF0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B0522u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0522: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0765; /* jne: not equal / not zero */

loc_000B052D: ;
    ecx = MEM32(0x3D3CEC);
    eax = MEM32(0x3D3CE8);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(0x3D3CE0);
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x31) = ecx;
    MEM32(esp + 0x24) = edx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x38) = ecx;
    MEM8(esp + 0x2C) = LO8(edx);
    SET_LO16(edx, MEM16(0x3D3CE4));
    MEM32(esp + 0x3C) = ecx;
    MEM16(esp + 0x35) = LO16(edx);
    edx = MEM32(0x3D3CD0);
    MEM32(esp + 0x40) = ecx;
    MEM16(esp + 0x44) = LO16(ecx);
    SET_LO16(ecx, MEM16(0x3D3CD8));
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x3D3CDC);
    MEM32(esp + 0x46) = edx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    MEM16(esp + 0x4E) = LO16(ecx);
    ecx = MEM32(0x3D3CC8);
    MEM32(esp + 0x2D) = eax;
    SET_LO8(eax, MEM8(0x3D3CE6));
    MEM32(esp + 0x50) = edx;
    MEM32(esp + 0x63) = ecx;
    ecx = MEM32(0x3D3CB8);
    MEM8(esp + 0x37) = LO8(eax);
    eax = MEM32(0x3D3CD4);
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0x58) = edx;
    MEM32(esp + 0x78) = ecx;
    MEM32(esp + 0x4A) = eax;
    eax = MEM32(0x3D3CC4);
    MEM16(esp + 0x5C) = LO16(edx);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    MEM8(esp + 0x5E) = LO8(edx);
    SET_LO8(edx, MEM8(0x3D3CCC));
    MEM32(esp + 0x5F) = eax;
    MEM32(esp + 0x81) = ecx;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    MEM32(esp + 0x85) = ecx;
    MEM8(esp + 0x67) = LO8(edx);
    edx = MEM32(0x3D3CBC);
    MEM32(esp + 0x68) = eax;
    MEM32(esp + 0x89) = ecx;
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x7C) = edx;
    edx = MEM32(0x3D3CAC);
    MEM32(esp + 0x8D) = ecx;
    SET_LO8(ecx, MEM8(0x3D3CB4));
    MEM32(esp + 0x70) = eax;
    MEM32(esp + 0x91) = edx;
    MEM8(esp + 0x99) = LO8(ecx);
    ecx = MEM32(0x3D3CA0);
    MEM32(esp + 0x74) = eax;
    SET_LO8(eax, MEM8(0x3D3CC0));
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    MEM32(esp + 0xAE) = ecx;
    MEM8(esp + 0x80) = LO8(eax);
    eax = MEM32(0x3D3CB0);
    MEM32(esp + 0x9A) = edx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    MEM32(esp + 0x9E) = edx;
    MEM32(esp + 0x95) = eax;
    eax = MEM32(0x3D3C9C);
    MEM32(esp + 0xB8) = ecx;
    MEM32(esp + 0xA2) = edx;
    MEM32(esp + 0xBC) = ecx;
    MEM32(esp + 0xA6) = edx;
    edx = MEM32(0x3D3CA4);
    MEM32(esp + 0xAA) = eax;
    SET_LO16(eax, MEM16(0x3D3CA8));
    MEM16(esp + 0xC0) = LO16(ecx);
    MEM32(esp + 0xB2) = edx;
    MEM16(esp + 0xB6) = LO16(eax);
    MEM8(esp + 0xC2) = LO8(ecx);
    eax = MEM32(0x3D3C90);
    ebx = MEM32(esp + 0x104);
    ecx = 5;
    esi = 0x3D3C78;
    edi = esp + 0xC3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(0x3D3C94);
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    MEM32(esp + 0xE0) = ecx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    MEM32(esp + 0xE8) = ecx;
    MEM32(esp + 0xEC) = ecx;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    MEM32(esp + 0xDC) = eax;
    eax = MEM32(0x3D3C98);
    MEM32(esp + 0xF0) = ecx;
    MEM16(esp + 0xDA) = LO16(edx);
    MEM32(esp + 0xE4) = eax;
    MEM8(esp + 0xF4) = LO8(ecx);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    edi = esp + 0x14;
    goto loc_000B0740;

    /* nop */

loc_000B0740: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000B0747u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0747: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0755; /* jne: not equal / not zero */

loc_000B074E: ;
    MEM16(ebp + 0x454) = LO16(esi);

loc_000B0755: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x19)) >> 32) & 1);
    edi = edi + 0x19;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 9 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000B0740; /* jb: below (unsigned <) */

loc_000B075E: ;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0765: ;
    PUSH32(esp, 0x3D3C6C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B0770u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0770: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0795; /* jne: not equal / not zero */

loc_000B0777: ;
    edx = MEM32(esp + 0x104);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B0784u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000B0784: ;
    MEM16(ebp + 0x456) = LO16(eax);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0795: ;
    PUSH32(esp, 0x3D3C60);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B07A0u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B07A0: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B07C5; /* jne: not equal / not zero */

loc_000B07A7: ;
    eax = MEM32(esp + 0x104);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B07B4u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000B07B4: ;
    MEM16(ebp + 0x458) = LO16(eax);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B07C5: ;
    PUSH32(esp, 0x3D3C4C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B07D0u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B07D0: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B07F4; /* jne: not equal / not zero */

loc_000B07D7: ;
    ecx = MEM32(esp + 0x104);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B07E4u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000B07E4: ;
    MEMF(ebp + 0x46C) = (float)fp_top(); fp_pop(); /* fstp */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B07F4: ;
    PUSH32(esp, 0x3D3C38);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B07FFu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B07FF: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0823; /* jne: not equal / not zero */

loc_000B0806: ;
    edx = MEM32(esp + 0x104);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B0813u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000B0813: ;
    MEMF(ebp + 0x470) = (float)fp_top(); fp_pop(); /* fstp */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0823: ;
    PUSH32(esp, 0x3D3C24);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B082Eu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B082E: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0852; /* jne: not equal / not zero */

loc_000B0835: ;
    eax = MEM32(esp + 0x104);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B0842u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000B0842: ;
    MEMF(ebp + 0x474) = (float)fp_top(); fp_pop(); /* fstp */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0852: ;
    PUSH32(esp, 0x3D3C18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B085Du); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B085D: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0881; /* jne: not equal / not zero */

loc_000B0864: ;
    ecx = MEM32(esp + 0x104);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B0871u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000B0871: ;
    MEMF(ebp + 0x45C) = (float)fp_top(); fp_pop(); /* fstp */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0881: ;
    PUSH32(esp, 0x3D3C04);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B088Cu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B088C: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B08B0; /* jne: not equal / not zero */

loc_000B0893: ;
    edx = MEM32(esp + 0x104);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B08A0u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000B08A0: ;
    MEMF(ebp + 0x460) = (float)fp_top(); fp_pop(); /* fstp */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B08B0: ;
    PUSH32(esp, 0x3D3BF8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B08BBu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B08BB: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B08EC; /* jne: not equal / not zero */

loc_000B08C2: ;
    eax = MEM32(esp + 0x104);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B08CFu); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000B08CF: ;
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    PUSH32(esp, 0x000B08DFu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000B08DF: ;
    MEM32(ebp + 0x464) = eax;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B08EC: ;
    PUSH32(esp, 0x3CCB04);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B08F7u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B08F7: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B093B; /* jne: not equal / not zero */

loc_000B08FE: ;
    ecx = MEM32(esp + 0x104);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B0910u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0910: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(eax, MEM8(ebp + 0x3A1));
    if (TEST_NZ(_fa, _fb)) goto loc_000B092C; /* jne: not equal / not zero */

loc_000B091D: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 1);
    MEM8(ebp + 0x3A1) = LO8(eax);
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B092C: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xFE);
    MEM8(ebp + 0x3A1) = LO8(eax);
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B093B: ;
    PUSH32(esp, 0x3D3BE4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B0946u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0946: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B098A; /* jne: not equal / not zero */

loc_000B094D: ;
    edx = MEM32(esp + 0x104);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B095Fu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B095F: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(eax, MEM8(ebp + 0x3A1));
    if (TEST_NZ(_fa, _fb)) goto loc_000B097B; /* jne: not equal / not zero */

loc_000B096C: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0x20);
    MEM8(ebp + 0x3A1) = LO8(eax);
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B097B: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xDF);
    MEM8(ebp + 0x3A1) = LO8(eax);
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B098A: ;
    PUSH32(esp, 0x3D3BDC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B0995u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0995: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B09D9; /* jne: not equal / not zero */

loc_000B099C: ;
    eax = MEM32(esp + 0x104);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B09AEu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B09AE: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(eax, MEM8(ebp + 0x3A1));
    if (TEST_NZ(_fa, _fb)) goto loc_000B09CA; /* jne: not equal / not zero */

loc_000B09BB: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 2);
    MEM8(ebp + 0x3A1) = LO8(eax);
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B09CA: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xFD);
    MEM8(ebp + 0x3A1) = LO8(eax);
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B09D9: ;
    PUSH32(esp, 0x3D3BCC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B09E4u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B09E4: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0A28; /* jne: not equal / not zero */

loc_000B09EB: ;
    ecx = MEM32(esp + 0x104);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B09FDu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B09FD: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(eax, MEM8(ebp + 0x3A1));
    if (TEST_NZ(_fa, _fb)) goto loc_000B0A19; /* jne: not equal / not zero */

loc_000B0A0A: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 4);
    MEM8(ebp + 0x3A1) = LO8(eax);
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0A19: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xFB);
    MEM8(ebp + 0x3A1) = LO8(eax);
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0A28: ;
    PUSH32(esp, 0x3D3BBC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B0A33u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0A33: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0A57; /* jne: not equal / not zero */

loc_000B0A3A: ;
    edx = MEM32(esp + 0x104);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B0A47u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000B0A47: ;
    MEMF(ebp + 0x468) = (float)fp_top(); fp_pop(); /* fstp */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0A57: ;
    PUSH32(esp, 0x3D3BAC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B0A62u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0A62: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0A86; /* jne: not equal / not zero */

loc_000B0A69: ;
    eax = MEM32(esp + 0x104);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B0A76u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000B0A76: ;
    MEMF(ebp + 0x478) = (float)fp_top(); fp_pop(); /* fstp */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0A86: ;
    PUSH32(esp, 0x3D3BA0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B0A91u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0A91: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0AC0; /* jne: not equal / not zero */

loc_000B0A98: ;
    ecx = MEM32(esp + 0x104);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B0AA5u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000B0AA5: ;
    fp_top() = fp_top() * MEMD(0x3D3B98); /* fmul qword ptr [0x3d3b98] */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    PUSH32(esp, 0x000B0AB3u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000B0AB3: ;
    MEM8(ebp + 0x37B) = LO8(eax);
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0AC0: ;
    PUSH32(esp, 0x3D3B88);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B0ACBu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0ACB: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0AFA; /* jne: not equal / not zero */

loc_000B0AD2: ;
    edx = MEM32(esp + 0x104);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B0ADFu); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000B0ADF: ;
    fp_top() = fp_top() * MEMD(0x3D3B98); /* fmul qword ptr [0x3d3b98] */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    PUSH32(esp, 0x000B0AEDu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000B0AED: ;
    MEM8(ebp + 0x37C) = LO8(eax);
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0AFA: ;
    PUSH32(esp, 0x3D3B78);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B0B05u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0B05: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0B34; /* jne: not equal / not zero */

loc_000B0B0C: ;
    eax = MEM32(esp + 0x104);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B0B19u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000B0B19: ;
    fp_top() = fp_top() * MEMD(0x3D3B98); /* fmul qword ptr [0x3d3b98] */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    PUSH32(esp, 0x000B0B27u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000B0B27: ;
    MEM8(ebp + 0x37D) = LO8(eax);
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0B34: ;
    PUSH32(esp, 0x3D3B64);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B0B3Fu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0B3F: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0B6E; /* jne: not equal / not zero */

loc_000B0B46: ;
    ecx = MEM32(esp + 0x104);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B0B53u); RECOMP_ABI_CALL(0x00341736u, sub_00341736); /* call 0x00341736 */

loc_000B0B53: ;
    fp_top() = fp_top() * MEMD(0x3D3B98); /* fmul qword ptr [0x3d3b98] */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    PUSH32(esp, 0x000B0B61u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000B0B61: ;
    MEM8(ebp + 0x37E) = LO8(eax);
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0B6E: ;
    PUSH32(esp, 0x3D3B5C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B0B79u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0B79: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0BA7; /* jne: not equal / not zero */

loc_000B0B80: ;
    edx = MEM32(esp + 0x104);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B0B8Du); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000B0B8D: ;
    SET_LO8(ecx, MEM8(ebp + 0x31));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(eax, MEM8(ebp + 0x31));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 0xF);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    MEM8(ebp + 0x31) = LO8(eax);
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0BA7: ;
    PUSH32(esp, 0x3D3B54);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B0BB2u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0BB2: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0BDE; /* jne: not equal / not zero */

loc_000B0BB9: ;
    edx = MEM32(esp + 0x104);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B0BC6u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000B0BC6: ;
    SET_LO8(ecx, MEM8(ebp + 0x31));
    if (4) _cf = (int)(((LO8(eax)) >> (8 - (4))) & 1);
    SET_LO8(eax, LO8(eax) << 4);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 0xF);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | LO8(ecx));
    MEM8(ebp + 0x31) = LO8(eax);
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0BDE: ;
    PUSH32(esp, 0x3D3B48);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B0BE9u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0BE9: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0C28; /* jne: not equal / not zero */

loc_000B0BF0: ;
    edx = MEM32(esp + 0x104);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B0C02u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0C02: ;
    SET_LO8(ebx, MEM8(ebp + 0x3A1));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    if (6) _cf = (int)(((LO8(eax)) >> (8 - (6))) & 1);
    SET_LO8(eax, LO8(eax) << 6);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0x40);
    SET_LO8(ecx, LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(ebp + 0x3A1) = LO8(ecx);
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0C28: ;
    PUSH32(esp, 0x3D3B38);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B0C33u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0C33: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0C62; /* jne: not equal / not zero */

loc_000B0C3A: ;
    ecx = MEM32(esp + 0x104);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B0C4Cu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0C4C: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebp + 0x3A3) = LO8(eax);
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0C62: ;
    PUSH32(esp, 0x3D3B28);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B0C6Du); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0C6D: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0CA6; /* jne: not equal / not zero */

loc_000B0C74: ;
    edx = MEM32(esp + 0x104);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B0C86u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0C86: ;
    SET_LO8(ebx, MEM8(ebp + 0x3A2));
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ecx, LO8(ebx));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(ebp + 0x3A2) = LO8(ecx);
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0CA6: ;
    PUSH32(esp, 0x3D3B14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B0CB1u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0CB1: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0CE9; /* jne: not equal / not zero */

loc_000B0CB8: ;
    ecx = MEM32(esp + 0x104);
    PUSH32(esp, 0x3CB744);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B0CCAu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0CCA: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(eax, MEM8(ebp + 0x3A1));
    SET_LO8(edx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0x7F);
    if (7) _cf = (int)(((LO8(edx)) >> (8 - (7))) & 1);
    SET_LO8(edx, LO8(edx) << 7);
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEM8(ebp + 0x3A1) = LO8(edx);
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0CE9: ;
    PUSH32(esp, 0x3D3B0C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B0CF4u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0CF4: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B0D0D; /* je: equal / zero */

loc_000B0CFB: ;
    PUSH32(esp, 0x3CB7B4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B0D06u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B0D06: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0D11; /* jne: not equal / not zero */

loc_000B0D0D: ;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

loc_000B0D11: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */

loc_000B0D13: ;
    ecx = MEM32(esp + 0xF8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000B0D23u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000B0D23: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xEC)) >> 32) & 1);
    esp = esp + 0xEC;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
