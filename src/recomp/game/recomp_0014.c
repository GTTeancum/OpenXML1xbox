#include "engine/combat/raven_vitality_bonus.h"
#include "engine/progression/talent_registry_guest.h"
#include "engine/actors/raven_leader_definition.h"
#include "engine/actors/raven_ai_modes.h"
#include "engine/actors/raven_actor_transform_owner.h"
#include "engine/actors/raven_character_race.h"
#include "engine/combat/raven_filter_event.h"
/**
 * X-Men Legends - Recompiled code chunk 14
 * Functions: 250 (0x000A8B6B - 0x000B3720)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include "engine/progression/character_talent_map_guest.h"
#include "engine/progression/character_talent_guest.h"
#include <math.h>
#include "game/xml1/character_limits.h"

/**
 * sub_000A8B6B
 * Original: 0x000A8B6B - 0x000A8FF1 (1158 bytes, 312 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A8B6B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000A8B6B: ;
    if (_flags /* je: equal / zero */) goto loc_000A8B84;

loc_000A8B6D: ;
    PUSH32(esp, 0x000A8B72u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000A8B72: ;
    edx = MEM32(eax);
    ecx = esi + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x2F4);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x000A8B84u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A8B84: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_000A8FD8; /* je: equal / zero */

loc_000A8B8D: ;
    edx = MEM32(esi + 0x34);
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    ecx = MEM32(esi + 0x2CC);
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    fp_push(MEMF(esi + 0x30)); /* fld float */
    eax = edx;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    MEM32(esp + 0x18) = eax;
    eax = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x74) = eax;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x324);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x24) = edx;
    edx = ecx;
    MEM32(esp + 0x6C) = ecx;
    MEM32(esp + 0x70) = edx;
    MEM32(esp + 0x60) = 0;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000A8E2A; /* jne: not equal / not zero */

loc_000A8BEF: ;
    fp_push(MEMF(esi + 0x318)); /* fld float */
    ecx = esi + 0x30C;
    fp_top() = fp_top() - MEMF(esi + 0x20); /* fsub dword ptr [esi + 0x20] */
    PUSH32(esp, ecx);
    edx = esp + 0x7C;
    PUSH32(esp, edx);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x31C)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x24); /* fsub dword ptr [esi + 0x24] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x320)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x28); /* fsub dword ptr [esi + 0x28] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000A8C27u); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000A8C27: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = esp + 0xC;
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    PUSH32(esp, eax);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    ecx = esp + 0x44;
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    PUSH32(esp, ecx);
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x000A8C7Au); RECOMP_ABI_CALL(0x00120860u, sub_00120860); /* call 0x00120860 */

loc_000A8C7A: ;
    fp_push(MEMF(esp + 0x90)); /* fld float */
    edx = MEM32(eax);
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    MEM32(esp + 0x20) = edx;
    fp_push(MEMF(esp + 0x8C)); /* fld float */
    ecx = MEM32(eax + 4);
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    MEM32(esp + 0x24) = ecx;
    edx = MEM32(eax + 8);
    esp = esp + 0x10;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEM32(esp + 0x18) = edx;
    fp_push(MEMF(esp + 0x78)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 4); /* fmul dword ptr [esp + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x2C8)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x44)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x44] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A8CFB; /* jne: not equal / not zero */

loc_000A8CCA: ;
    fp_push(MEMF(esi + 0x310)); /* fld float */
    esp = esp - 8;
    fp_top() = fp_top() + MEMF(esi + 0x2C8); /* fadd dword ptr [esi + 0x2c8] */
    eax = ecx;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x310)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x2C8); /* fsub dword ptr [esi + 0x2c8] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A8CF4u); RECOMP_ABI_CALL(0x000345D0u, sub_000345D0); /* call 0x000345D0 */

loc_000A8CF4: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 0xC;

loc_000A8CFB: ;
    fp_push(MEMF(esi + 0x2C4)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x44)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x44] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A8E70; /* jne: not equal / not zero */

loc_000A8D12: ;
    PUSH32(esp, 0x2E6B0);
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A8D25u); RECOMP_ABI_CALL(0x00011100u, sub_00011100); /* call 0x00011100 */

loc_000A8D25: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    ecx = esp + 0x2C;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = 0;
    PUSH32(esp, 0x000A8D46u); RECOMP_ABI_CALL(0x000129C0u, sub_000129C0); /* call 0x000129C0 */

loc_000A8D46: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 0x314)); /* fld float */
    ecx = esp + 0x38;
    fp_top() = fp_top() - MEMF(esi + 0x2C4); /* fsub dword ptr [esi + 0x2c4] */
    PUSH32(esp, ecx);
    edx = esp + 0x88;
    PUSH32(esp, edx);
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x40) = 0;
    MEM32(esp + 0x44) = 0;
    PUSH32(esp, 0x000A8D7Au); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000A8D7A: ;
    fp_push(MEMF(esi + 0x314)); /* fld float */
    ecx = MEM32(eax);
    fp_top() = fp_top() + MEMF(esi + 0x2C4); /* fadd dword ptr [esi + 0x2c4] */
    MEM32(esp + 0x50) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x54) = edx;
    eax = MEM32(eax + 8);
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x90;
    PUSH32(esp, edx);
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x48) = 0;
    MEM32(esp + 0x4C) = 0;
    PUSH32(esp, 0x000A8DC0u); RECOMP_ABI_CALL(0x001209C0u, sub_001209C0); /* call 0x001209C0 */

loc_000A8DC0: ;
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x44); /* fmul dword ptr [esp + 0x44] */
    ecx = MEM32(eax);
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    MEM32(esp + 0x64) = ecx;
    fp_top() = fp_top() * MEMF(esp + 0x40); /* fmul dword ptr [esp + 0x40] */
    edx = MEM32(eax + 4);
    MEM32(esp + 0x68) = edx;
    eax = MEM32(eax + 8);
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEM32(esp + 0x6C) = eax;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    esp = esp + 0x10;
    fp_top() = fp_top() * MEMF(esp + 0x48); /* fmul dword ptr [esp + 0x48] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x34); /* fmul dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x30); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x2C); /* fmul dword ptr [esp + 0x2c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    fp_push(MEMF(esi + 0x314)); /* fld float */
    if (TEST_NZ(_fa, _fb)) goto loc_000A8E66; /* jne: not equal / not zero */

loc_000A8E22: ;
    fp_top() = fp_top() - MEMF(esi + 0x2C4); /* fsub dword ptr [esi + 0x2c4] */
    goto loc_000A8E6C;

loc_000A8E2A: ;
    SET_LO8(eax, MEM8(esi + 0x33C));
    fp_push(MEMF(esi + 0x314)); /* fld float */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A8E54; /* je: equal / zero */

loc_000A8E3A: ;
    ecx = MEM32(esi + 0x310);
    fp_top() = fp_top() - MEMF(esi + 0x2C4); /* fsub dword ptr [esi + 0x2c4] */
    MEM32(esp + 0x68) = 0xBF800000u;
    MEM32(esp + 0x14) = ecx;
    goto loc_000A8E6C;

loc_000A8E54: ;
    edx = MEM32(esi + 0x310);
    MEM32(esp + 0x68) = 0x3F800000;
    MEM32(esp + 0x14) = edx;

loc_000A8E66: ;
    fp_top() = fp_top() + MEMF(esi + 0x2C4); /* fadd dword ptr [esi + 0x2c4] */

loc_000A8E6C: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_000A8E70: ;
    ecx = MEM32(esp + 0x28);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x74;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x98;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A8E96u); RECOMP_ABI_CALL(0x00120B00u, sub_00120B00); /* call 0x00120B00 */

loc_000A8E96: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x34) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x38) = edx;
    eax = MEM32(eax + 8);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 0x000A8EB4u); RECOMP_ABI_CALL(0x001206F0u, sub_001206F0); /* call 0x001206F0 */

loc_000A8EB4: ;
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A8EBEu); RECOMP_ABI_CALL(0x001206F0u, sub_001206F0); /* call 0x001206F0 */

loc_000A8EBE: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x30); /* fsub dword ptr [esp + 0x30] */
    esp = esp + 0x20;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x18); /* fsub dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x14); /* fsub dword ptr [esp + 0x14] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C832C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c832c] */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000A8F57; /* jp: parity */

loc_000A8EFC: ;
    _fa = (uint32_t)(MEM32(esi + 0x324)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x324), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A8F28; /* jne: not equal / not zero */

loc_000A8F05: ;
    eax = MEM32(esi + 0x2D0);
    MEM32(esi + 0x328) = eax;
    SET_LO8(eax, MEM8(esi + 0x33C));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, ~LO8(ecx));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    MEM8(esi + 0x33C) = LO8(ecx);

loc_000A8F28: ;
    edx = MEM32(esi + 0x2F8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD054)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x3DD054) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8FB3; /* je: equal / zero */

loc_000A8F36: ;
    PUSH32(esp, 0x000A8F3Bu); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000A8F3B: ;
    ecx = MEM32(esi + 0x2F8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x000A8F49u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A8F49: ;
    edx = MEM32(0x3DD054);
    MEM32(esi + 0x2F8) = edx;
    goto loc_000A8FB3;

loc_000A8F57: ;
    eax = MEM32(esi + 0x2F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD050)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DD050) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A8FB3; /* je: equal / zero */

loc_000A8F65: ;
    ecx = MEM32(esi + 0x2F8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD054)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x3DD054) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A8FB3; /* jne: not equal / not zero */

loc_000A8F73: ;
    PUSH32(esp, 0x000A8F78u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000A8F78: ;
    fp_push(MEMF(esi + 0x2E8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    edx = MEM32(eax);
    esp = esp - 8;
    ecx = esi + 0x20;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x2E8)); /* fld float */
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x2F0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000A8FADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A8FAD: ;
    MEM32(esi + 0x2F8) = eax;

loc_000A8FB3: ;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000A8FBFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A8FBF: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3C23D70A);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C0); PUSH32(esp, 0x000A8FCEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A8FCE: ;
    POP32(esp, esi);
    esp = esp + 0x8C;
    esp += 8; return; /* ret 4 */

loc_000A8FD8: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C0); PUSH32(esp, 0x000A8FE7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A8FE7: ;
    POP32(esp, esi);
    esp = esp + 0x8C;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A9000
 * Original: 0x000A9000 - 0x000A96F3 (1779 bytes, 481 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9000(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9000: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FDB6);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x88;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A9025u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000A9025: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000A902Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A902F: ;
    fp_top() = fp_top() - MEMF(esi + 0x334); /* fsub dword ptr [esi + 0x334] */
    eax = MEM32(esi + 4);
    ecx = eax;
    ecx = ecx >> 0x13;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A905A; /* je: equal / zero */

loc_000A9046: ;
    _fa = (uint32_t)(MEM32(esi + 0x324)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x324), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9056; /* je: equal / zero */

loc_000A904F: ;
    eax = eax >> 0xF;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A905A; /* je: equal / zero */

loc_000A9056: ;
    SET_LO8(ebx, 1);
    goto loc_000A905C;

loc_000A905A: ;
    SET_LO8(ebx, 0); /* xor self */

loc_000A905C: ;
    eax = MEM32(esi + 0x324);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A9331; /* jne: not equal / not zero */

loc_000A906C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A9329; /* je: equal / zero */

loc_000A9074: ;
    PUSH32(esp, ebp);
    ecx = esi;
    MEM32(esi + 0x324) = 1;
    PUSH32(esp, 0x000A9086u); RECOMP_ABI_CALL(0x00076740u, sub_00076740); /* call 0x00076740 */

loc_000A9086: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A93A1; /* je: equal / zero */

loc_000A908E: ;
    fp_push(MEMF(esi + 0x2E4)); /* fld float */
    ecx = MEM32(esi + 0x1C);
    fp_top() = cos(fp_top()); /* fcos */
    eax = 0; /* xor self */
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, edi);
    edx = esp + 0x20;
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, edx);
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, 0x485874);
    ecx = esp + 0x20;
    MEM8(esp + 0x1B) = 0;
    MEM32(esp + 0x50) = eax;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000A90CCu); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_000A90CC: ;
    edx = MEM32(esi + 0x2E0);
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    MEM32(esp + 0xA8) = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000A90E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A90E5: ;
    fp_push(MEMF(esi + 0x304)); /* fld float */
    eax = MEM32(esi + 0x2FC);
    fp_push(MEMF(esi + 0x300)); /* fld float */
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    MEM32(esp + 0x28) = eax;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x308);
    edx = MEM32(ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x000A911Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A911A: ;
    ebx = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F800000);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    edi = esi + 0x20;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x000A9137u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9137: ;
    eax = MEM32(edi);
    ecx = MEM32(edi + 4);
    edx = MEM32(edi + 8);
    MEM32(esp + 0x50) = eax;
    eax = esp + 0x4C;
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x54) = 0x3CA808;
    MEM32(esp + 0x60) = edx;
    MEM32(esp + 0x64) = 7;
    PUSH32(esp, 0x000A916Au); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_000A916A: ;
    ebx = eax;
    esp = esp + 8;
    MEM32(esp + 0x34) = ebx;
    edx = MEM32(ebx);
    ecx = ebx;
    MEM8(esp + 0xA0) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000A9181u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9181: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A93F7; /* jge: greater or equal (signed >=) */

loc_000A918B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (TEST_S(_fas, _fbs)) goto loc_000A9242; /* jl: less (signed <) */

loc_000A9197: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000A91A3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A91A3: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000A9238; /* je: equal / zero */

loc_000A91B1: ;
    fp_push(MEMF(ecx + 0x240)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A9238; /* jne: not equal / not zero */

loc_000A91C4: ;
    PUSH32(esp, 0x000A91C9u); RECOMP_ABI_CALL(0x0002E280u, sub_0002E280); /* call 0x0002E280 */

loc_000A91C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A9238; /* jne: not equal / not zero */

loc_000A91CD: ;
    fp_push(MEMF(esi + 0x2D8)); /* fld float */
    ecx = MEM32(esp + 0x1C);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A9221; /* jne: not equal / not zero */

loc_000A91E4: ;
    fp_push(MEMF(ecx + 0x108)); /* fld float */
    fp_push(MEMF(ecx + 0x104)); /* fld float */
    fp_push(MEMF(ecx + 0x100)); /* fld float */
    fp_push(MEMF(esi + 0x2D8)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 5) & 7]; /* fmul st(5) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (TEST_Z(_fa, _fb)) goto loc_000A9238; /* je: equal / zero */

loc_000A9221: ;
    _fa = (uint32_t)(MEM32(esi + 0x2E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2E0), 0x1B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A9233; /* jne: not equal / not zero */

loc_000A922A: ;
    _fa = (uint32_t)(MEM8(ecx + 0x334)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x334), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A9238; /* jne: not equal / not zero */

loc_000A9233: ;
    MEM32(esp + ebp * 4 + 0x3C) = ecx;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000A9238: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_000A9197; /* jns: not sign (positive) */

loc_000A9242: ;
    PUSH32(esp, ebx);
    MEM8(esp + 0xA4) = 0;
    PUSH32(esp, 0x000A9250u); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_000A9250: ;
    esp = esp + 4;
    ecx = esp + 0x18;
    MEM32(esp + 0xA0) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000A9267u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000A9267: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A9408; /* jne: not equal / not zero */

loc_000A926F: ;
    _fa = (uint32_t)(MEM32(esi + 0x324)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x324), 2 (32-bit) */
    MEM32(esi + 0x32C) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000A92AE; /* jne: not equal / not zero */

loc_000A9282: ;
    PUSH32(esp, 0x000A9287u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000A9287: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000A9291u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9291: ;
    fp_top() = fp_top() - MEMF(esi + 0x330); /* fsub dword ptr [esi + 0x330] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x2D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x2d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A92AE; /* jne: not equal / not zero */

loc_000A92A4: ;
    MEM32(esi + 0x324) = 1;

loc_000A92AE: ;
    eax = MEM32(esi + 0x2EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD050)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3DD050) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9307; /* je: equal / zero */

loc_000A92BC: ;
    ecx = MEM32(esi + 0x2F4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD054)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x3DD054) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A9307; /* jne: not equal / not zero */

loc_000A92CA: ;
    PUSH32(esp, 0x000A92CFu); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000A92CF: ;
    fp_push(MEMF(esi + 0x2E8)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    ecx = MEM32(esi + 0x2EC);
    edx = MEM32(eax);
    esp = esp - 8;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x2E8)); /* fld float */
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x000A9301u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9301: ;
    MEM32(esi + 0x2F4) = eax;

loc_000A9307: ;
    _fa = (uint32_t)(MEM32(esi + 0x324)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x324), 2 (32-bit) */
    POP32(esp, edi);
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000A96E9; /* jne: not equal / not zero */

loc_000A9317: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DCCCCCD);
    { uint32_t _icall_target = MEM32(edx + 0x1BC); PUSH32(esp, 0x000A9324u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9324: ;
    goto loc_000A93DD;

loc_000A9329: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9086; /* je: equal / zero */

loc_000A9331: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A908E; /* jne: not equal / not zero */

loc_000A9339: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x000A9342u); RECOMP_ABI_CALL(0x00076830u, sub_00076830); /* call 0x00076830 */

loc_000A9342: ;
    edx = MEM32(esi + 0x2F0);
    MEM32(esi + 0x324) = ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD050)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x3DD050) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A9375; /* je: equal / zero */

loc_000A9356: ;
    PUSH32(esp, 0x000A935Bu); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000A935B: ;
    ecx = MEM32(esi + 0x2F8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x000A9369u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9369: ;
    edx = MEM32(0x3DD054);
    MEM32(esi + 0x2F8) = edx;

loc_000A9375: ;
    eax = MEM32(0x3DD050);
    _fa = (uint32_t)(MEM32(esi + 0x2EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2EC), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A93A1; /* je: equal / zero */

loc_000A9382: ;
    PUSH32(esp, 0x000A9387u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000A9387: ;
    ecx = MEM32(esi + 0x2F4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x000A9395u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9395: ;
    edx = MEM32(0x3DD054);
    MEM32(esi + 0x2F4) = edx;

loc_000A93A1: ;
    ecx = MEM32(esi + 0x2F4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3DD054)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x3DD054) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A93CE; /* je: equal / zero */

loc_000A93AF: ;
    PUSH32(esp, 0x000A93B4u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000A93B4: ;
    ecx = MEM32(esi + 0x2F4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x000A93C2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A93C2: ;
    edx = MEM32(0x3DD054);
    MEM32(esi + 0x2F4) = edx;

loc_000A93CE: ;
    PUSH32(esp, 0x3F800000);
    ecx = esi;

loc_000A93D5: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1BC); PUSH32(esp, 0x000A93DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A93DD: ;
    ecx = MEM32(esp + 0x94);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x94;
    esp += 8; return; /* ret 4 */

loc_000A93F7: ;
    MEM32(esp + 0x14) = 3;
    goto loc_000A9197;

loc_000A9404: ;
    ebp = MEM32(esp + 0x1C);

loc_000A9408: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esp + 0x1C) = ebp;
    if (TEST_NZ(_fa, _fb)) goto loc_000A9668; /* jne: not equal / not zero */

loc_000A9419: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4C0A5C);
    ecx = esp + 0x1C;
    MEM32(esp + 0x28) = 0;
    PUSH32(esp, 0x000A9434u); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_000A9434: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4C0A5C);
    PUSH32(esp, 1);
    MEM32(esp + 0xA8) = 2;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x000A944Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A944F: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4D7378);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x000A945Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A945F: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x18) = eax;
    edx = MEM32(ecx);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x000A9476u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9476: ;
    fp_push(MEMF(esi + 0x304)); /* fld float */
    fp_push(MEMF(esi + 0x300)); /* fld float */
    ecx = MEM32(esi + 0x2FC);
    eax = MEM32(esi + 0x308);
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x74) = ecx;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    eax = esp + 0x78;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x000A94ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A94AD: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    eax = esi + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x000A94C7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A94C7: ;
    ebx = MEM32(esp + ebp * 4 + 0x3C);
    edx = MEM32(ebx);
    eax = esp + 0x8C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000A94DAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A94DA: ;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 8); /* fsub dword ptr [edi + 8] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 4); /* fsub dword ptr [edi + 4] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() - MEMF(edi); /* fsub dword ptr [edi] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    ecx = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x5BC9D0);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x68;
    PUSH32(esp, eax);
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    PUSH32(esp, edi);
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x2E8); /* fmul dword ptr [esi + 0x2e8] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esi + 0x2E8); /* fmul dword ptr [esi + 0x2e8] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x2E8); /* fmul dword ptr [esi + 0x2e8] */
    fp_top() = fp_top() + MEMF(edi + 8); /* fadd dword ptr [edi + 8] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() + MEMF(edi + 4); /* fadd dword ptr [edi + 4] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() + MEMF(edi); /* fadd dword ptr [edi] */
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x000A9576u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9576: ;
    ecx = MEM32(edi);
    edx = MEM32(edi + 4);
    eax = MEM32(edi + 8);
    MEM32(esp + 0x7C) = ecx;
    ecx = esp + 0x78;
    MEM32(esp + 0x80) = edx;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x80) = 0x3CA808;
    MEM32(esp + 0x8C) = eax;
    MEM32(esp + 0x90) = 7;
    PUSH32(esp, 0x000A95B5u); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_000A95B5: ;
    ebp = eax;
    esp = esp + 8;
    MEM32(esp + 0x34) = ebp;
    eax = MEM32(ebp);
    ecx = ebp;
    MEM8(esp + 0xA0) = 3;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000A95CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A95CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A962B; /* je: equal / zero */

loc_000A95D1: ;
    edx = MEM32(ebp);
    ebx = MEM32(ebx + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000A95DEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A95DE: ;
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A962B; /* jne: not equal / not zero */

loc_000A95E3: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebp;
    MEM8(esp + 0x17) = 1;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000A95F2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A95F2: ;
    edx = MEM32(eax);
    ecx = esp + 0x4C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000A95FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A95FE: ;
    edx = MEM32(eax);
    MEM32(esi + 0x318) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x31C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 0x320) = edx;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000A9622u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9622: ;
    eax = MEM32(eax + 0x1C);
    MEM32(esi + 0x340) = eax;

loc_000A962B: ;
    PUSH32(esp, ebp);
    MEM8(esp + 0xA4) = 2;
    PUSH32(esp, 0x000A9639u); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_000A9639: ;
    esp = esp + 4;
    ecx = esp + 0x14;
    MEM32(esp + 0xA0) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000A9650u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000A9650: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A9404; /* jne: not equal / not zero */

loc_000A965C: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A926F; /* je: equal / zero */

loc_000A9668: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x32C); /* fadd dword ptr [esi + 0x32c] */
    MEMF(esi + 0x32C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000A967Du); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000A967D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000A9687u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9687: ;
    MEMF(esi + 0x330) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x324);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A96D1; /* jne: not equal / not zero */

loc_000A9698: ;
    fp_push(MEMF(esi + 0x32C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x2DC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x2dc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(HI8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), HI8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A96D1; /* jne: not equal / not zero */

loc_000A96AA: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(esi + 0x324) = 2;
    MEM32(esi + 0x328) = 0;
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x000A96CCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A96CC: ;
    goto loc_000A92AE;

loc_000A96D1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A92AE; /* jne: not equal / not zero */

loc_000A96DA: ;
    MEM32(esi + 0x328) = 0;
    goto loc_000A92AE;

loc_000A96E9: ;
    PUSH32(esp, 0x3E99999A);
    goto loc_000A93D5;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A9700
 * Original: 0x000A9700 - 0x000A975C (92 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9700: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000A970Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A970F: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A971Au); RECOMP_ABI_CALL(0x00066B20u, sub_00066B20); /* call 0x00066B20 */

loc_000A971A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A9755; /* je: equal / zero */

loc_000A9721: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x000A9745u); RECOMP_ABI_CALL(0x000A8600u, sub_000A8600); /* call 0x000A8600 */

loc_000A9745: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x000A974Eu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_000A974E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_000A9755: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000A9760
 * Original: 0x000A9760 - 0x000A9787 (39 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000A9760: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000A9784; /* jp: parity */

loc_000A9772: ;
    MEM32(ecx + 4) = 0;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A9784u); RECOMP_ABI_CALL(0x000A9000u, sub_000A9000); /* call 0x000A9000 */

loc_000A9784: ;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A9790
 * Original: 0x000A9790 - 0x000A97B7 (39 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000A9790: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000A97B4; /* jp: parity */

loc_000A97A2: ;
    MEM32(ecx + 4) = 0;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A97B4u); RECOMP_ABI_CALL(0x000A8A90u, sub_000A8A90); /* call 0x000A8A90 */

loc_000A97B4: ;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A97C0
 * Original: 0x000A97C0 - 0x000A97CB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A97C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A97C0: ;
    MEM32(ecx) = 0x3D323C;
    g_seh_ebp = ebp; sub_000A82C0(); return; /* tail jmp 0x000A82C0 */

}

/**
 * sub_000A97D0
 * Original: 0x000A97D0 - 0x000A984D (125 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A97D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A97D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A97DDu); RECOMP_ABI_CALL(0x00066C20u, sub_00066C20); /* call 0x00066C20 */

loc_000A97DD: ;
    esp = esp + 4;
    PUSH32(esp, 0x000A97E5u); RECOMP_ABI_CALL(0x000BD520u, sub_000BD520); /* call 0x000BD520 */

loc_000A97E5: ;
    ecx = MEM32(0x44EE68);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000A97F3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A97F3: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D341C);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A9803u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9803: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A9818; /* je: equal / zero */

loc_000A9809: ;
    PUSH32(esp, 0x000A980Eu); RECOMP_ABI_CALL(0x000BD520u, sub_000BD520); /* call 0x000BD520 */

loc_000A980E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000A9816u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9816: ;
    edi = eax;

loc_000A9818: ;
    PUSH32(esp, 0x000A981Du); RECOMP_ABI_CALL(0x000BD520u, sub_000BD520); /* call 0x000BD520 */

loc_000A981D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A9825u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9825: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A9847; /* je: equal / zero */

loc_000A9829: ;
    PUSH32(esp, 0x000A982Eu); RECOMP_ABI_CALL(0x000BD520u, sub_000BD520); /* call 0x000BD520 */

loc_000A982E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A9836u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9836: ;
    edi = eax;
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x000A9841u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9841: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x4C); PUSH32(esp, 0x000A9847u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9847: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A9850
 * Original: 0x000A9850 - 0x000A98F6 (166 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9850: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000A985Eu); RECOMP_ABI_CALL(0x000A83E0u, sub_000A83E0); /* call 0x000A83E0 */

loc_000A985E: ;
    PUSH32(esp, 0x000A9863u); RECOMP_ABI_CALL(0x000BD520u, sub_000BD520); /* call 0x000BD520 */

loc_000A9863: ;
    ecx = MEM32(0x44EE68);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000A9871u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9871: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(esi + 0x35C) = eax;
    edx = MEM32(edi);
    PUSH32(esp, 0x3D341C);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000A9885u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9885: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A989E; /* je: equal / zero */

loc_000A988B: ;
    PUSH32(esp, 0x000A9890u); RECOMP_ABI_CALL(0x000BD520u, sub_000BD520); /* call 0x000BD520 */

loc_000A9890: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000A9898u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9898: ;
    MEM32(esi + 0x35C) = eax;

loc_000A989E: ;
    _fa = (uint32_t)(MEM32(esi + 0x35C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x35C), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000A98E2; /* je: equal / zero */

loc_000A98A7: ;
    PUSH32(esp, 0x000A98ACu); RECOMP_ABI_CALL(0x000BD520u, sub_000BD520); /* call 0x000BD520 */

loc_000A98AC: ;
    ecx = MEM32(esi + 0x35C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A98BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A98BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A98E2; /* je: equal / zero */

loc_000A98BE: ;
    PUSH32(esp, 0x000A98C3u); RECOMP_ABI_CALL(0x000BD520u, sub_000BD520); /* call 0x000BD520 */

loc_000A98C3: ;
    ecx = MEM32(esi + 0x35C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A98D1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A98D1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x16);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A98DAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A98DA: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000A98E2u); RECOMP_ABI_CALL(0x00075D00u, sub_00075D00); /* call 0x00075D00 */

loc_000A98E2: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E99999A);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1CC); PUSH32(esp, 0x000A98F1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A98F1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A9900
 * Original: 0x000A9900 - 0x000A9916 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9900(void)
{

loc_000A9900: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    edx = ecx + 0x368;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A9911u); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_000A9911: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A9920
 * Original: 0x000A9920 - 0x000A9936 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9920(void)
{

loc_000A9920: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    edx = ecx + 0x378;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A9931u); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_000A9931: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A9940
 * Original: 0x000A9940 - 0x000A9956 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9940(void)
{

loc_000A9940: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    edx = ecx + 0x370;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000A9951u); RECOMP_ABI_CALL(0x000277E0u, sub_000277E0); /* call 0x000277E0 */

loc_000A9951: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A9960
 * Original: 0x000A9960 - 0x000A99DE (126 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000A9960: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x000A9972u); RECOMP_ABI_CALL(0x000BD520u, sub_000BD520); /* call 0x000BD520 */

loc_000A9972: ;
    ecx = MEM32(esi + 0x35C);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000A9980u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9980: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A99D6; /* je: equal / zero */

loc_000A9986: ;
    MEM8(esi + 0x360) = MEM8(esi + 0x360) + 1;
    _fa = (uint32_t)(MEM8(esi + 0x360)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000A9993u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9993: ;
    ecx = ZX8(MEM8(esi + 0x360));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A99A5; /* jl: less (signed <) */

loc_000A999E: ;
    MEM8(esi + 0x360) = 0;

loc_000A99A5: ;
    eax = MEM32(esi + 0x358);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_000A99BE; /* jg: greater (signed >) */

loc_000A99AF: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F000000);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1D4); PUSH32(esp, 0x000A99BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A99BE: ;
    ecx = ZX8(MEM8(esi + 0x360));
    eax = MEM32(edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x000A99D2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A99D2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000A99D6: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A99E0
 * Original: 0x000A99E0 - 0x000A99FB (27 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A99E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000A99E0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(ecx + 0x358) = 0x14;
    { uint32_t _icall_target = MEM32(eax + 0x1D0); PUSH32(esp, 0x000A99F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A99F4: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A9A00
 * Original: 0x000A9A00 - 0x000A9A06 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9A00(void)
{

loc_000A9A00: ;
    eax = 0x4C9A50;
    esp += 4; return; /* ret */

}

/**
 * sub_000A9A10
 * Original: 0x000A9A10 - 0x000A9A16 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9A10(void)
{

loc_000A9A10: ;
    eax = 0x3D342C;
    esp += 4; return; /* ret */

}

/**
 * sub_000A9A20
 * Original: 0x000A9A20 - 0x000A9A3E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9A20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000A9A28u); RECOMP_ABI_CALL(0x000A97C0u, sub_000A97C0); /* call 0x000A97C0 */

loc_000A9A28: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A9A38; /* je: equal / zero */

loc_000A9A2F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A9A35u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000A9A35: ;
    esp = esp + 4;

loc_000A9A38: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A9A40
 * Original: 0x000A9A40 - 0x000A9B24 (228 bytes, 71 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000A9A40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x324)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x324), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000A9B10; /* jne: not equal / not zero */

loc_000A9A51: ;
    eax = MEM32(esi + 0x358);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax + -1;
    MEM32(esi + 0x358) = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000A9ABA; /* jle: less or equal (signed <=) */

loc_000A9A64: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1D8); PUSH32(esp, 0x000A9A6Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9A6E: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 4);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1CC); PUSH32(esp, 0x000A9A81u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9A81: ;
    PUSH32(esp, 0x000A9A86u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000A9A86: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C7084); /* fadd dword ptr [0x3c7084] */
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x428C0000);
    MEM32(ecx) = 0;
    edx = MEM32(eax);
    PUSH32(esp, 0x1A);
    esi = esi + 0x318;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x22C); PUSH32(esp, 0x000A9AB5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9AB5: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000A9ABA: ;
    PUSH32(esp, 0x000A9ABFu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000A9ABF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000A9AC9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9AC9: ;
    fp_top() = fp_top() - MEMF(esi + 0x330); /* fsub dword ptr [esi + 0x330] */
    ecx = esi;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000A9AFE; /* jp: parity */

loc_000A9ADE: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1DC); PUSH32(esp, 0x000A9AE6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9AE6: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 4);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1CC); PUSH32(esp, 0x000A9AF9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9AF9: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000A9AFE: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    { uint32_t _icall_target = MEM32(edx + 0x1CC); PUSH32(esp, 0x000A9B0Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9B0B: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000A9B10: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1CC); PUSH32(esp, 0x000A9B1Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9B1F: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A9B30
 * Original: 0x000A9B30 - 0x000A9B36 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9B30(void)
{

loc_000A9B30: ;
    eax = 0x380;
    esp += 4; return; /* ret */

}

/**
 * sub_000A9B40
 * Original: 0x000A9B40 - 0x000A9B50 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9B40(void)
{

loc_000A9B40: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000A9B4Au); RECOMP_ABI_CALL(0x000A97D0u, sub_000A97D0); /* call 0x000A97D0 */

loc_000A9B4A: ;
    esp = esp + 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A9B50
 * Original: 0x000A9B50 - 0x000A9B80 (48 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000A9B50: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000A9B74; /* jp: parity */

loc_000A9B62: ;
    MEM32(ecx + 4) = 0;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000A9B74u); RECOMP_ABI_CALL(0x000A9A40u, sub_000A9A40); /* call 0x000A9A40 */

loc_000A9B74: ;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A9B80
 * Original: 0x000A9B80 - 0x000A9BB6 (54 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000A9B80: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000A9BB3; /* jp: parity */

loc_000A9B92: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(ecx + 4) = 0;
    ecx = esi;
    PUSH32(esp, 0x000A9BA5u); RECOMP_ABI_CALL(0x00075340u, sub_00075340); /* call 0x00075340 */

loc_000A9BA5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A9BB2; /* je: equal / zero */

loc_000A9BA9: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000A9BB2u); RECOMP_ABI_CALL(0x00076830u, sub_00076830); /* call 0x00076830 */

loc_000A9BB2: ;
    POP32(esp, esi);

loc_000A9BB3: ;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A9BC0
 * Original: 0x000A9BC0 - 0x000A9C07 (71 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000A9BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000A9BC0: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000A9C04; /* jp: parity */

loc_000A9BD2: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(ecx + 4) = 0;
    ecx = esi;
    PUSH32(esp, 0x000A9BE5u); RECOMP_ABI_CALL(0x00075340u, sub_00075340); /* call 0x00075340 */

loc_000A9BE5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A9C03; /* jne: not equal / not zero */

loc_000A9BE9: ;
    PUSH32(esp, 0x000A9BEEu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000A9BEE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x000A9BF8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9BF8: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000A9C03u); RECOMP_ABI_CALL(0x00076740u, sub_00076740); /* call 0x00076740 */

loc_000A9C03: ;
    POP32(esp, esi);

loc_000A9C04: ;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000A9C10
 * Original: 0x000A9C10 - 0x000A9D32 (290 bytes, 77 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9C10: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FDC8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x14;
    eax = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x38);
    esi = ecx;
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x44);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esi;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x54) = esp;
    PUSH32(esp, 0x000A9C59u); RECOMP_ABI_CALL(0x000A8600u, sub_000A8600); /* call 0x000A8600 */

loc_000A9C59: ;
    MEM32(esi) = 0x3D323C;
    MEM32(esi + 0x35C) = 0xFFFFFFFFu;
    edx = 0; /* xor self */
    ebx = 0; /* xor self */
    MEM32(esi + 0x354) = ebx;
    MEM32(esi + 0x358) = ebx;
    MEM8(esi + 0x360) = LO8(ebx);
    MEM32(esi + 0x368) = 0x3D3454;
    MEM32(esi + 0x36C) = ebx;
    MEM32(esp + 0x10) = edx;
    MEM32(esi + 0x370) = 0x3D3464;
    MEM32(esi + 0x374) = ebx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = edx;
    MEM32(esi + 0x378) = 0x3D3474;
    MEM32(esi + 0x37C) = ebx;
    eax = esi + 4;
    ecx = eax;
    eax = MEM32(ecx);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 0x18) = edx;
    edx = esp + 0x10;
    MEM32(esp + 0x1C) = ecx;
    eax = eax | 0x400000;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x000A9CF4u); RECOMP_ABI_CALL(0x00066E40u, sub_00066E40); /* call 0x00066E40 */

loc_000A9CF4: ;
    PUSH32(esp, 0x1C);
    ecx = esi;
    PUSH32(esp, 0x000A9CFDu); RECOMP_ABI_CALL(0x0002E320u, sub_0002E320); /* call 0x0002E320 */

loc_000A9CFD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM16(esi + 0x246) = 0x32;
    MEM32(esi + 0x240) = 0x42480000;
    if (CMP_EQ(_fa, _fb)) goto loc_000A9D1C; /* je: equal / zero */

loc_000A9D14: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000A9D1Cu); RECOMP_ABI_CALL(0x000A9850u, sub_000A9850); /* call 0x000A9850 */

loc_000A9D1C: ;
    ecx = MEM32(esp + 0x20);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000A9D40
 * Original: 0x000A9D40 - 0x000A9D9C (92 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9D40: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000A9D4Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000A9D4F: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000A9D5Au); RECOMP_ABI_CALL(0x00066B20u, sub_00066B20); /* call 0x00066B20 */

loc_000A9D5A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A9D95; /* je: equal / zero */

loc_000A9D61: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x000A9D85u); RECOMP_ABI_CALL(0x000A9C10u, sub_000A9C10); /* call 0x000A9C10 */

loc_000A9D85: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x000A9D8Eu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_000A9D8E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_000A9D95: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000A9DA0
 * Original: 0x000A9DA0 - 0x000A9DA7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9DA0(void)
{

loc_000A9DA0: ;
    MEM32(ecx) = 0x3D3488;
    esp += 4; return; /* ret */

}

/**
 * sub_000A9DB0
 * Original: 0x000A9DB0 - 0x000A9DCF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9DB0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3D3488;
    if (TEST_Z(_fa, _fb)) goto loc_000A9DC9; /* je: equal / zero */

loc_000A9DC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000A9DC6u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000A9DC6: ;
    esp = esp + 4;

loc_000A9DC9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000A9DD0
 * Original: 0x000A9DD0 - 0x000A9E69 (153 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9DD0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000A9DE7; /* jl: less (signed <) */

loc_000A9DDE: ;
    eax = 0x400;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000A9DE7: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + ecx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_000A9DFA; /* jne: not equal / not zero */

loc_000A9DF8: ;
    edx = ~edx;

loc_000A9DFA: ;
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A9E24; /* jne: not equal / not zero */

loc_000A9E05: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A9E5F; /* jge: greater or equal (signed >=) */

loc_000A9E12: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    edx = MEM32(esi + edx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_000A9E20; /* jne: not equal / not zero */

loc_000A9E1E: ;
    edx = ~edx;

loc_000A9E20: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A9E05; /* je: equal / zero */

loc_000A9E24: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A9E32; /* jne: not equal / not zero */

loc_000A9E2C: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_000A9E32: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A9E3C; /* jne: not equal / not zero */

loc_000A9E36: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_000A9E3C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A9E47; /* jne: not equal / not zero */

loc_000A9E41: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_000A9E47: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A9E58; /* jne: not equal / not zero */

loc_000A9E4C: ;
    /* nop */

loc_000A9E50: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A9E50; /* je: equal / zero */

loc_000A9E58: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A9E64; /* jl: less (signed <) */

loc_000A9E5F: ;
    eax = 0x400;

loc_000A9E64: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000A9E70
 * Original: 0x000A9E70 - 0x000A9EF0 (128 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9E70: ;
    eax = MEM32(ecx + 0x4000);
    PUSH32(esp, edi);
    edi = ecx + 0x4000;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A9E9D; /* jne: not equal / not zero */

loc_000A9E83: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x400 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A9EE5; /* jge: greater or equal (signed >=) */

loc_000A9E91: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A9E83; /* je: equal / zero */

loc_000A9E9D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A9EAA; /* jne: not equal / not zero */

loc_000A9EA4: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_000A9EAA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A9EB4; /* jne: not equal / not zero */

loc_000A9EAE: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_000A9EB4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A9EBE; /* jne: not equal / not zero */

loc_000A9EB8: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_000A9EBE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000A9EC9; /* jne: not equal / not zero */

loc_000A9EC2: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000A9EC2; /* je: equal / zero */

loc_000A9EC9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x400 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000A9EE5; /* jge: greater or equal (signed >=) */

loc_000A9ED1: ;
    eax = edx;

loc_000A9ED3: ;
    PUSH32(esp, 1);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000A9EDEu); RECOMP_ABI_CALL(0x000A9DD0u, sub_000A9DD0); /* call 0x000A9DD0 */

loc_000A9EDE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A9ED3; /* jl: less (signed <) */

loc_000A9EE5: ;
    ecx = 0x20;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A9EF0
 * Original: 0x000A9EF0 - 0x000A9F52 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000A9EF0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x5084) = esi;
    MEM32(ecx + 0x5088) = esi;
    MEM32(ecx + 0x508C) = esi;
    edx = 0; /* xor self */
    goto loc_000A9F10;

    /* nop */

loc_000A9F10: ;
    eax = MEM32(ecx + 0x5084);
    edi = MEM32(ecx + 0x508C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    MEM32(ecx + 0x5084) = eax;
    MEM32(ecx + 0x508C) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000A9F3E; /* jl: less (signed <) */

loc_000A9F31: ;
    MEM32(ecx + 0x5084) = esi;
    eax = 0x3FF;
    goto loc_000A9F3F;

loc_000A9F3E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000A9F3F: ;
    MEM32(ecx + eax * 4 + 0x4080) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x400 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000A9F10; /* jl: less (signed <) */

loc_000A9F4F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A9F60
 * Original: 0x000A9F60 - 0x000A9FAE (78 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9F60(void)
{

loc_000A9F60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ebx = 0; /* xor self */
    ecx = 0x20;
    edi = esi + 0x4000;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0x5084) = ebx;
    MEM32(esi + 0x5088) = ebx;
    MEM32(esi + 0x508C) = ebx;
    ecx = 0x20;
    edi = esi + 0x5090;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    MEM32(esi + 0x5110) = ebx;
    PUSH32(esp, 0x000A9FA2u); RECOMP_ABI_CALL(0x000A9EF0u, sub_000A9EF0); /* call 0x000A9EF0 */

loc_000A9FA2: ;
    POP32(esp, edi);
    MEM32(esi + 0x7118) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000A9FB0
 * Original: 0x000A9FB0 - 0x000A9FC7 (23 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9FB0(void)
{

loc_000A9FB0: ;
    PUSH32(esp, esi);
    esi = ecx + 4;
    ecx = esi;
    PUSH32(esp, 0x000A9FBBu); RECOMP_ABI_CALL(0x000A9FD0u, sub_000A9FD0); /* call 0x000A9FD0 */

loc_000A9FBB: ;
    MEM32(esi + 0x7118) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000A9FD0
 * Original: 0x000A9FD0 - 0x000A9FFD (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000A9FD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000A9FD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    MEM32(esi + 0x5110) = 0;
    ecx = 0x20;
    edi = esi + 0x5090;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    PUSH32(esp, 0x000A9FF4u); RECOMP_ABI_CALL(0x000A9E70u, sub_000A9E70); /* call 0x000A9E70 */

loc_000A9FF4: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000A9EF0(); return; /* tail jmp 0x000A9EF0 */

}

/**
 * sub_000AA000
 * Original: 0x000AA000 - 0x000AA015 (21 bytes, 7 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA000(void)
{

loc_000AA000: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = ecx + 4;
    PUSH32(esp, 0x000AA012u); RECOMP_ABI_CALL(0x000AA020u, sub_000AA020); /* call 0x000AA020 */

loc_000AA012: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000AA020
 * Original: 0x000AA020 - 0x000AA05F (63 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA020(void)
{

loc_000AA020: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000AA02Cu); RECOMP_ABI_CALL(0x000AA0F0u, sub_000AA0F0); /* call 0x000AA0F0 */

loc_000AA02C: ;
    edi = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000AA03Bu); RECOMP_ABI_CALL(0x000AA060u, sub_000AA060); /* call 0x000AA060 */

loc_000AA03B: ;
    ecx = MEM32(esp + 0x14);
    edx = esp + 8;
    MEM32(esp + 8) = ecx;
    PUSH32(esp, edx);
    ecx = esi + 0x5114;
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0x000AA057u); RECOMP_ABI_CALL(0x000AA170u, sub_000AA170); /* call 0x000AA170 */

loc_000AA057: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000AA060
 * Original: 0x000AA060 - 0x000AA0A0 (64 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA060(void)
{

loc_000AA060: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = edi;
    ecx = ecx << 4;
    PUSH32(esp, eax);
    ecx = ecx + esi;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000AA07Au); RECOMP_ABI_CALL(0x000AA0A0u, sub_000AA0A0); /* call 0x000AA0A0 */

loc_000AA07A: ;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = esi + edx * 4 + 0x4000;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    esp = esp + 8;
    POP32(esp, edi);
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000AA0A0
 * Original: 0x000AA0A0 - 0x000AA0E6 (70 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA0A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA0A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FDF1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp) = ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_000AA0D7; /* je: equal / zero */

loc_000AA0CD: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AA0D7u); RECOMP_ABI_CALL(0x000274C0u, sub_000274C0); /* call 0x000274C0 */

loc_000AA0D7: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000AA0F0
 * Original: 0x000AA0F0 - 0x000AA13A (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA0F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA0F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x5088);
    eax = esi + 0x4080;
    PUSH32(esp, edi);
    edi = MEM32(eax + ecx * 4);
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esi + edx * 4 + 0x5090);
    edx = esi + edx * 4 + 0x5090;
    ecx = ecx | ebx;
    MEM32(edx) = ecx;
    ecx = eax;
    PUSH32(esp, 0x000AA12Eu); RECOMP_ABI_CALL(0x000AA140u, sub_000AA140); /* call 0x000AA140 */

loc_000AA12E: ;
    MEM32(esi + 0x5110) = MEM32(esi + 0x5110) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x5110)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000AA140
 * Original: 0x000AA140 - 0x000AA16C (44 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA140: ;
    eax = MEM32(ecx + 0x1008);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x1008) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    eax = MEM32(ecx + 0x100C);
    if (CMP_L(_fas, _fbs)) goto loc_000AA164; /* jl: less (signed <) */

loc_000AA15A: ;
    MEM32(ecx + 0x1008) = 0;

loc_000AA164: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x100C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000AA170
 * Original: 0x000AA170 - 0x000AA1A4 (52 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA170: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x2004);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    edx = esi + ecx * 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000AA189u); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_000AA189: ;
    eax = MEM32(esi + 0x2004);
    esp = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000AA19Au); RECOMP_ABI_CALL(0x000AA1B0u, sub_000AA1B0); /* call 0x000AA1B0 */

loc_000AA19A: ;
    MEM32(esi + 0x2004) = MEM32(esi + 0x2004) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x2004)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AA1B0
 * Original: 0x000AA1B0 - 0x000AA1F5 (69 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000AA1B0: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AA1F1; /* je: equal / zero */

loc_000AA1BB: ;
    PUSH32(esp, esi);
    /* nop */

loc_000AA1C0: ;
    eax = ecx + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    esi = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    edx = edi + ecx * 8;
    fp_push(MEMF(edi + esi * 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AA1F0; /* jne: not equal / not zero */

loc_000AA1D9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA1EA; /* je: equal / zero */

loc_000AA1DD: ;
    PUSH32(esp, edx);
    eax = edi + esi * 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AA1E7u); RECOMP_ABI_CALL(0x000AA200u, sub_000AA200); /* call 0x000AA200 */

loc_000AA1E7: ;
    esp = esp + 8;

loc_000AA1EA: ;
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AA1C0; /* jne: not equal / not zero */

loc_000AA1F0: ;
    POP32(esp, esi);

loc_000AA1F1: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000AA200
 * Original: 0x000AA200 - 0x000AA23C (60 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA200(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AA200: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 8);
    ecx = eax;
    edi = MEM32(ecx);
    ebx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AA225u); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_000AA225: ;
    ecx = MEM32(esp + 0x18);
    esp = esp + 0xC;
    MEM32(esi) = edi;
    POP32(esp, edi);
    MEM32(esi + 4) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_00340F54(); return; /* tail jmp 0x00340F54 */

}

/**
 * sub_000AA240
 * Original: 0x000AA240 - 0x000AA248 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA240(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AA240: ;
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_000AA250(); return; /* tail jmp 0x000AA250 */

}

/**
 * sub_000AA250
 * Original: 0x000AA250 - 0x000AA2B6 (102 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000AA250: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x7118);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AA2AF; /* je: equal / zero */

loc_000AA260: ;
    PUSH32(esp, ebx);
    ebx = esi + 0x5114;
    PUSH32(esp, edi);
    goto loc_000AA270;

    /* nop */

loc_000AA270: ;
    eax = MEM32(ebx);
    edi = MEM32(ebx + 4);
    MEM32(esp + 0xC) = eax;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AA2AD; /* je: equal / zero */

loc_000AA288: ;
    ecx = ebx;
    PUSH32(esp, 0x000AA28Fu); RECOMP_ABI_CALL(0x000AA2C0u, sub_000AA2C0); /* call 0x000AA2C0 */

loc_000AA28F: ;
    ecx = edi;
    ecx = ecx << 4;
    ecx = ecx + esi;
    PUSH32(esp, 0x000AA29Bu); RECOMP_ABI_CALL(0x000274F0u, sub_000274F0); /* call 0x000274F0 */

loc_000AA29B: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000AA2A3u); RECOMP_ABI_CALL(0x000AA380u, sub_000AA380); /* call 0x000AA380 */

loc_000AA2A3: ;
    eax = MEM32(esi + 0x7118);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AA270; /* jne: not equal / not zero */

loc_000AA2AD: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000AA2AF: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000AA2C0
 * Original: 0x000AA2C0 - 0x000AA2EE (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA2C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA2C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x2004);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0x2004) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_000AA2E3; /* je: equal / zero */

loc_000AA2D6: ;
    eax = esi + eax * 8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AA2E0u); RECOMP_ABI_CALL(0x000AA200u, sub_000AA200); /* call 0x000AA200 */

loc_000AA2E0: ;
    esp = esp + 8;

loc_000AA2E3: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000AA2ECu); RECOMP_ABI_CALL(0x000AA2F0u, sub_000AA2F0); /* call 0x000AA2F0 */

loc_000AA2EC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AA2F0
 * Original: 0x000AA2F0 - 0x000AA338 (72 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000AA2F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x000AA2FFu); RECOMP_ABI_CALL(0x000AA340u, sub_000AA340); /* call 0x000AA340 */

loc_000AA2FF: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA332; /* je: equal / zero */

loc_000AA305: ;
    fp_push(MEMF(ebx + edi * 8)); /* fld float */
    ecx = ebx + edi * 8;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebx + esi * 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebx + esi*8] */
    edx = ebx + esi * 8;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AA332; /* jne: not equal / not zero */

loc_000AA318: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000AA31Fu); RECOMP_ABI_CALL(0x000AA200u, sub_000AA200); /* call 0x000AA200 */

loc_000AA31F: ;
    esp = esp + 8;
    PUSH32(esp, esi);
    ecx = ebx;
    edi = esi;
    PUSH32(esp, 0x000AA32Cu); RECOMP_ABI_CALL(0x000AA340u, sub_000AA340); /* call 0x000AA340 */

loc_000AA32C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AA305; /* jne: not equal / not zero */

loc_000AA332: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000AA340
 * Original: 0x000AA340 - 0x000AA37F (63 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000AA340: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x2004);
    PUSH32(esp, esi);
    esi = eax + eax + 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AA37B; /* jge: greater or equal (signed >=) */

loc_000AA353: ;
    PUSH32(esp, edi);
    edi = eax + eax + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AA378; /* jge: greater or equal (signed >=) */

loc_000AA35C: ;
    eax = eax << 4;
    fp_push(MEMF(eax + ecx + 0x10)); /* fld float */
    eax = eax + ecx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [eax + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    eax = esi;
    if (TEST_Z(_fa, _fb)) goto loc_000AA37A; /* je: equal / zero */

loc_000AA371: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000AA378: ;
    eax = esi;

loc_000AA37A: ;
    POP32(esp, edi);

loc_000AA37B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000AA380
 * Original: 0x000AA380 - 0x000AA3FF (127 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA380: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000AA38Eu); RECOMP_ABI_CALL(0x000AA400u, sub_000AA400); /* call 0x000AA400 */

loc_000AA38E: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    eax = edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ecx = MEM32(esi + eax * 4 + 0x5090);
    eax = esi + eax * 4 + 0x5090;
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;
    eax = MEM32(esi + 0x5084);
    edx = MEM32(esi + 0x508C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    MEM32(esi + 0x5084) = eax;
    MEM32(esi + 0x508C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000AA3E5; /* jl: less (signed <) */

loc_000AA3D4: ;
    MEM32(esi + 0x5084) = 0;
    eax = 0x3FF;
    goto loc_000AA3E6;

loc_000AA3E5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000AA3E6: ;
    MEM32(esi + eax * 4 + 0x4080) = edi;
    eax = MEM32(esi + 0x5110);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 0x5110) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AA400
 * Original: 0x000AA400 - 0x000AA427 (39 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA400(void)
{

loc_000AA400: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = eax + edx * 4 + 0x4000;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AA430
 * Original: 0x000AA430 - 0x000AA473 (67 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA430(void)
{

loc_000AA430: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FE08);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = esi + 4;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x000AA45Du); RECOMP_ABI_CALL(0x000A9E70u, sub_000A9E70); /* call 0x000A9E70 */

loc_000AA45D: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x3D3488;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000AA480
 * Original: 0x000AA480 - 0x000AA49E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA480: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000AA488u); RECOMP_ABI_CALL(0x000AA430u, sub_000AA430); /* call 0x000AA430 */

loc_000AA488: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AA498; /* je: equal / zero */

loc_000AA48F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AA495u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000AA495: ;
    esp = esp + 4;

loc_000AA498: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AA4A0
 * Original: 0x000AA4A0 - 0x000AA4E4 (68 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA4A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA4A0: ;
    SET_LO8(ecx, MEM8(0x4D0BA8));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AA4DE; /* jne: not equal / not zero */

loc_000AA4AF: ;
    edx = MEM32(0x4D0BA8);
    edx = edx | eax;
    ecx = 0x4C9A8C;
    MEM32(0x4D0BA8) = edx;
    MEM32(0x4C9A88) = 0x3D349C;
    PUSH32(esp, 0x000AA4D1u); RECOMP_ABI_CALL(0x000A9F60u, sub_000A9F60); /* call 0x000A9F60 */

loc_000AA4D1: ;
    PUSH32(esp, 0x35A060);
    PUSH32(esp, 0x000AA4DBu); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_000AA4DB: ;
    esp = esp + 4;

loc_000AA4DE: ;
    eax = 0x4C9A88;
    esp += 4; return; /* ret */

}

/**
 * sub_000AA4F0
 * Original: 0x000AA4F0 - 0x000AA518 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA4F0(void)
{

loc_000AA4F0: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000AA4FBu); RECOMP_ABI_CALL(0x00026CA0u, sub_00026CA0); /* call 0x00026CA0 */

loc_000AA4FB: ;
    eax = MEM32(esi);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000AA507u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AA507: ;
    PUSH32(esp, eax);
    ecx = esi + 0x240;
    PUSH32(esp, 0x000AA513u); RECOMP_ABI_CALL(0x0006E000u, sub_0006E000); /* call 0x0006E000 */

loc_000AA513: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000AA520
 * Original: 0x000AA520 - 0x000AA559 (57 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA520: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000AA542; /* je: equal / zero */

loc_000AA52B: ;
    ecx = esp + 8;
    PUSH32(esp, 0x000AA534u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000AA534: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AA542; /* je: equal / zero */

loc_000AA538: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000AA53Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AA53E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_000AA548; /* jge: greater or equal (signed >=) */

loc_000AA542: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000AA548: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + eax * 4 + 8) = ecx;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AA560
 * Original: 0x000AA560 - 0x000AA5AD (77 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA560: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000AA578; /* je: equal / zero */

loc_000AA56B: ;
    ecx = esp + 8;
    PUSH32(esp, 0x000AA574u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000AA574: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AA57E; /* jne: not equal / not zero */

loc_000AA578: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000AA57E: ;
    edx = MEM32(esp + 8);
    eax = 0; /* xor self */
    ecx = esi + 8;

loc_000AA587: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA59A; /* je: equal / zero */

loc_000AA58B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AA587; /* jl: less (signed <) */

loc_000AA594: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000AA59A: ;
    ecx = MEM32(0x498D90);
    MEM32(esi + eax * 4 + 8) = ecx;
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AA5B0
 * Original: 0x000AA5B0 - 0x000AA5CF (31 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA5B0: ;
    MEM32(ecx + 4) = 0;
    eax = ecx + 8;
    ecx = 0x10;
    /* nop */

loc_000AA5C0: ;
    edx = MEM32(0x498D90);
    MEM32(eax) = edx;
    eax = eax + 4;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000AA5C0; /* jne: not equal / not zero */

loc_000AA5CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000AA5D0
 * Original: 0x000AA5D0 - 0x000AA5D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA5D0(void)
{

loc_000AA5D0: ;
    eax = 0x248;
    esp += 4; return; /* ret */

}

/**
 * sub_000AA5E0
 * Original: 0x000AA5E0 - 0x000AA640 (96 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA5E0: ;
    eax = ecx;
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    MEM32(eax) = 0x3D34E8;
    edx = eax + 8;
    esi = edx;
    MEM32(esi) = ecx;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = ecx;
    MEM32(esi + 0x24) = ecx;
    MEM32(esi + 0x28) = ecx;
    MEM32(esi + 0x2C) = ecx;
    MEM32(esi + 0x30) = ecx;
    MEM32(esi + 0x34) = ecx;
    MEM32(esi + 0x38) = ecx;
    MEM32(esi + 0x3C) = ecx;
    MEM32(eax + 4) = ecx;
    ecx = 0x10;
    goto loc_000AA630;

    /* nop */

loc_000AA630: ;
    esi = MEM32(0x498D90);
    MEM32(edx) = esi;
    edx = edx + 4;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000AA630; /* jne: not equal / not zero */

loc_000AA63E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AA640
 * Original: 0x000AA640 - 0x000AA6C7 (135 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA640(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AA640: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = edi;
    ebx = ebx | 0xFFFFFFFFu;
    esi = ecx + 8;

loc_000AA657: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AA69C; /* je: equal / zero */

loc_000AA65C: ;
    ecx = esi;
    PUSH32(esp, 0x000AA663u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000AA663: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AA69C; /* je: equal / zero */

loc_000AA667: ;
    ecx = esi;
    PUSH32(esp, 0x000AA66Eu); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000AA66E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AA69C; /* je: equal / zero */

loc_000AA672: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000AA678u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AA678: ;
    edx = MEM32(0x4D0C0C);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = 1;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AA69C; /* je: equal / zero */

loc_000AA696: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000AA6A9;

loc_000AA69C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    eax = MEM32(0x498D90);
    MEM32(esi) = eax;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_000AA6A9; /* jge: greater or equal (signed >=) */

loc_000AA6A7: ;
    ebx = edi;

loc_000AA6A9: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AA657; /* jl: less (signed <) */

loc_000AA6B2: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    MEM32(ecx + 4) = edx;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_000AA6D0
 * Original: 0x000AA6D0 - 0x000AA6F5 (37 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA6D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA6D0: ;
    SET_LO8(ecx, MEM8(0x4D0BF8));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AA6EF; /* jne: not equal / not zero */

loc_000AA6DF: ;
    MEM32(0x4D0BF8) = MEM32(0x4D0BF8) | eax;
    ecx = 0x4D0BB0;
    PUSH32(esp, 0x000AA6EFu); RECOMP_ABI_CALL(0x000AA5E0u, sub_000AA5E0); /* call 0x000AA5E0 */

loc_000AA6EF: ;
    eax = 0x4D0BB0;
    esp += 4; return; /* ret */

}

/**
 * sub_000AA700
 * Original: 0x000AA700 - 0x000AA781 (129 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA700: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(edx, MEM8(esi + 0x244));
    SET_LO8(edx, LO8(edx) & 0xFC);
    PUSH32(esp, edi);
    MEM8(esi + 0x244) = LO8(edx);
    PUSH32(esp, 0x000AA718u); RECOMP_ABI_CALL(0x000AA6D0u, sub_000AA6D0); /* call 0x000AA6D0 */

loc_000AA718: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000AA71Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AA71E: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x000AA728u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AA728: ;
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3D3504);
    ecx = esi + 0x240;
    PUSH32(esp, 0x000AA73Eu); RECOMP_ABI_CALL(0x0006E2D0u, sub_0006E2D0); /* call 0x0006E2D0 */

loc_000AA73E: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D34FC);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000AA74Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AA74C: ;
    SET_LO8(ecx, MEM8(esi + 0x244));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    SET_LO8(eax, LO8(eax) << 2);
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) ^ LO8(eax));
    MEM8(esi + 0x244) = LO8(edx);
    PUSH32(esp, 0x000AA76Du); RECOMP_ABI_CALL(0x000AA6D0u, sub_000AA6D0); /* call 0x000AA6D0 */

loc_000AA76D: ;
    edx = MEM32(esi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000AA77Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AA77C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AA790
 * Original: 0x000AA790 - 0x000AA7A9 (25 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA790(void)
{

loc_000AA790: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000AA798u); RECOMP_ABI_CALL(0x000AA6D0u, sub_000AA6D0); /* call 0x000AA6D0 */

loc_000AA798: ;
    edx = MEM32(esi + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000AA7A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AA7A7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AA7B0
 * Original: 0x000AA7B0 - 0x000AA80C (92 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA7B0: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000AA7BFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AA7BF: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000AA7CAu); RECOMP_ABI_CALL(0x00066B20u, sub_00066B20); /* call 0x00066B20 */

loc_000AA7CA: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AA805; /* je: equal / zero */

loc_000AA7D1: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x000AA7F5u); RECOMP_ABI_CALL(0x000AA810u, sub_000AA810); /* call 0x000AA810 */

loc_000AA7F5: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x000AA7FEu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_000AA7FE: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_000AA805: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000AA810
 * Original: 0x000AA810 - 0x000AA88E (126 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA810: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FE36);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    esi = ecx;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esi;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x40) = esp;
    PUSH32(esp, 0x000AA856u); RECOMP_ABI_CALL(0x00079B60u, sub_00079B60); /* call 0x00079B60 */

loc_000AA856: ;
    eax = 0; /* xor self */
    MEM32(esi) = 0x3D3514;
    MEM32(esp + 0x14) = eax;
    MEM32(esi + 0x240) = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM8(esp + 0x14) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000AA879; /* je: equal / zero */

loc_000AA871: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000AA879u); RECOMP_ABI_CALL(0x000AA700u, sub_000AA700); /* call 0x000AA700 */

loc_000AA879: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000AA890
 * Original: 0x000AA890 - 0x000AA896 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA890(void)
{

loc_000AA890: ;
    eax = 0x4D0C08;
    esp += 4; return; /* ret */

}

/**
 * sub_000AA8A0
 * Original: 0x000AA8A0 - 0x000AA8A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA8A0(void)
{

loc_000AA8A0: ;
    eax = 0x3D34BC;
    esp += 4; return; /* ret */

}

/**
 * sub_000AA8B0
 * Original: 0x000AA8B0 - 0x000AA8CE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA8B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000AA8B8u); RECOMP_ABI_CALL(0x000AA8D0u, sub_000AA8D0); /* call 0x000AA8D0 */

loc_000AA8B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AA8C8; /* je: equal / zero */

loc_000AA8BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AA8C5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000AA8C5: ;
    esp = esp + 4;

loc_000AA8C8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AA8D0
 * Original: 0x000AA8D0 - 0x000AA95B (139 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AA8D0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FE36);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3D3514;
    SET_LO8(ecx, MEM8(0x4D0BF8));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    MEM32(esp + 0x10) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_000AA916; /* jne: not equal / not zero */

loc_000AA906: ;
    MEM32(0x4D0BF8) = MEM32(0x4D0BF8) | eax;
    ecx = 0x4D0BB0;
    PUSH32(esp, 0x000AA916u); RECOMP_ABI_CALL(0x000AA5E0u, sub_000AA5E0); /* call 0x000AA5E0 */

loc_000AA916: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    edx = MEM32(0x4D0BB0);
    ecx = 0x4D0BB0;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000AA92Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AA92C: ;
    ecx = esi + 0x240;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x000AA93Cu); RECOMP_ABI_CALL(0x0006E220u, sub_0006E220); /* call 0x0006E220 */

loc_000AA93C: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000AA94Bu); RECOMP_ABI_CALL(0x00075970u, sub_00075970); /* call 0x00075970 */

loc_000AA94B: ;
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000AA960
 * Original: 0x000AA960 - 0x000AAB6C (524 bytes, 163 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AA960(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AA960: ;
    esp = esp - 0x48;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    ecx = esp + 0x40;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0x000AA97Cu); RECOMP_ABI_CALL(0x000322B0u, sub_000322B0); /* call 0x000322B0 */

loc_000AA97C: ;
    PUSH32(esp, 0x000AA981u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000AA981: ;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xE0); PUSH32(esp, 0x000AA993u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AA993: ;
    edi = ebp + 8;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x20) = edi;
    ebx = 1;
    goto loc_000AA9B0;

loc_000AA9A5: ;
    esi = MEM32(esp + 0x14);
    /* nop */

loc_000AA9B0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AAB5F; /* jge: greater or equal (signed >=) */

loc_000AA9B9: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AAB35; /* je: equal / zero */

loc_000AA9C2: ;
    ecx = edi;
    PUSH32(esp, 0x000AA9C9u); RECOMP_ABI_CALL(0x0006BFA0u, sub_0006BFA0); /* call 0x0006BFA0 */

loc_000AA9C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AAB35; /* je: equal / zero */

loc_000AA9D1: ;
    ecx = edi;
    PUSH32(esp, 0x000AA9D8u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000AA9D8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AAB35; /* je: equal / zero */

loc_000AA9E2: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000AA9E8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AA9E8: ;
    edx = MEM32(0x4D0C0C);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebp = ebx;
    ebp = ebp << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AAB31; /* je: equal / zero */

loc_000AAA07: ;
    eax = MEM32(esi + 4);
    eax = eax >> 0x13;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AAB2D; /* je: equal / zero */

loc_000AAA15: ;
    SET_LO8(eax, MEM8(esi + 0x244));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AAA27; /* je: equal / zero */

loc_000AAA1F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AAB2D; /* jne: not equal / not zero */

loc_000AAA27: ;
    eax = MEM32(esp + 0x54);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esp + 0x13) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000AAAF6; /* jle: less or equal (signed <=) */

loc_000AAA3A: ;
    /* nop */

loc_000AAA40: ;
    ecx = MEM32(esp + ebp * 4 + 0x40);
    MEM32(esp + 0x24) = ecx;
    ecx = esp + 0x24;
    PUSH32(esp, 0x000AAA51u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000AAA51: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AAAE5; /* je: equal / zero */

loc_000AAA5B: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000AAA61u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AAA61: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    ebx = 1;
    ebx = ebx << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), ebx (32-bit) */
    ebx = 1;
    if (TEST_Z(_fa, _fb)) goto loc_000AAAE5; /* je: equal / zero */

loc_000AAA84: ;
    _fa = (uint32_t)(MEM8(edi + 0x334)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x334), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AAAE5; /* jne: not equal / not zero */

loc_000AAA8C: ;
    fp_push(MEMF(edi + 0x20)); /* fld float */
    edx = MEM32(esi);
    fp_top() = fp_top() - MEMF(esi + 0x20); /* fsub dword ptr [esi + 0x20] */
    ecx = esp + 0x28;
    fp_push(MEMF(edi + 0x24)); /* fld float */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    fp_top() = fp_top() - MEMF(esi + 0x24); /* fsub dword ptr [esi + 0x24] */
    ecx = esi;
    fp_push(MEMF(edi + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(esi + 0x28); /* fsub dword ptr [esi + 0x28] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x40);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x34) = eax;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000AAAC0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AAAC0: ;
    ecx = eax;
    PUSH32(esp, 0x000AAAC7u); RECOMP_ABI_CALL(0x00051480u, sub_00051480); /* call 0x00051480 */

loc_000AAAC7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AAAE5; /* je: equal / zero */

loc_000AAACB: ;
    _fa = (uint32_t)(MEM8(esi + 0x244)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x244), LO8(ebx) (8-bit) */
    MEM8(esp + 0x13) = LO8(ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_000AAAE5; /* jne: not equal / not zero */

loc_000AAAD7: ;
    ecx = esi + 0x78;
    PUSH32(esp, 0x000AAADFu); RECOMP_ABI_CALL(0x0006DF90u, sub_0006DF90); /* call 0x0006DF90 */

loc_000AAADF: ;
    MEM8(esi + 0x244) = MEM8(esi + 0x244) | LO8(ebx);

loc_000AAAE5: ;
    eax = MEM32(esp + 0x54);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AAA40; /* jl: less (signed <) */

loc_000AAAF2: ;
    edi = MEM32(esp + 0x20);

loc_000AAAF6: ;
    SET_LO8(eax, MEM8(esi + 0x244));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AAB2D; /* je: equal / zero */

loc_000AAB00: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AAB2D; /* jne: not equal / not zero */

loc_000AAB08: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AAB2D; /* jne: not equal / not zero */

loc_000AAB0C: ;
    ecx = esi + 0x240;
    PUSH32(esp, 0x000AAB17u); RECOMP_ABI_CALL(0x0006DF90u, sub_0006DF90); /* call 0x0006DF90 */

loc_000AAB17: ;
    SET_LO8(eax, MEM8(esi + 0x244));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AAB25; /* je: equal / zero */

loc_000AAB21: ;
    SET_LO8(eax, LO8(eax) & 0xFC);
    goto loc_000AAB27;

loc_000AAB25: ;
    SET_LO8(eax, LO8(eax) | 2);

loc_000AAB27: ;
    MEM8(esi + 0x244) = LO8(eax);

loc_000AAB2D: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000AAB31: ;
    ebp = MEM32(esp + 0x18);

loc_000AAB35: ;
    eax = MEM32(esp + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000AA9A5; /* jl: less (signed <) */

loc_000AAB4E: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 4) = eax;
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

loc_000AAB5F: ;
    POP32(esp, edi);
    MEM32(ebp + 4) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000AAB70
 * Original: 0x000AAB70 - 0x000AAB9B (43 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AAB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AAB70: ;
    ecx = MEM32(0x4D0C3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AAB9A; /* je: equal / zero */

loc_000AAB7A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000AAB7Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AAB7F: ;
    ecx = MEM32(0x4D0C3C);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000AAB8Du); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_000AAB8D: ;
    esp = esp + 8;
    MEM32(0x4D0C3C) = 0;

loc_000AAB9A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000AABA0
 * Original: 0x000AABA0 - 0x000AABBF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AABA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AABA0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3D375C;
    if (TEST_Z(_fa, _fb)) goto loc_000AABB9; /* je: equal / zero */

loc_000AABB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AABB6u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000AABB6: ;
    esp = esp + 4;

loc_000AABB9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AABC0
 * Original: 0x000AABC0 - 0x000AAC2D (109 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AABC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AABC0: ;
    eax = MEM32(ecx + 0x994);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AABEB; /* jne: not equal / not zero */

loc_000AABCC: ;
    /* nop */

loc_000AABD0: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AAC1C; /* jge: greater or equal (signed >=) */

loc_000AABDB: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(ecx + eax * 4 + 0x994);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AABD0; /* je: equal / zero */

loc_000AABEB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AABF8; /* jne: not equal / not zero */

loc_000AABF2: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_000AABF8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AAC02; /* jne: not equal / not zero */

loc_000AABFC: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_000AAC02: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AAC0C; /* jne: not equal / not zero */

loc_000AAC06: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_000AAC0C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AAC17; /* jne: not equal / not zero */

loc_000AAC10: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AAC10; /* je: equal / zero */

loc_000AAC17: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AAC21; /* jl: less (signed <) */

loc_000AAC1C: ;
    edx = 0x20;

loc_000AAC21: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AAC30
 * Original: 0x000AAC30 - 0x000AAE05 (469 bytes, 116 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AAC30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AAC30: ;
    esp = esp - 0x120;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x124) = eax;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3D3798);
    ebx = 0; /* xor self */
    PUSH32(esp, 3);
    esi = ecx;
    MEM8(esp + 0x30) = LO8(ebx);
    PUSH32(esp, 0x000AAC5Du); RECOMP_ABI_CALL(0x00125510u, sub_00125510); /* call 0x00125510 */

loc_000AAC5D: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x000AAC65u); RECOMP_ABI_CALL(0x00147A40u, sub_00147A40); /* call 0x00147A40 */

loc_000AAC65: ;
    edx = MEM32(eax);
    ecx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000AAC76u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AAC76: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(esi + 0xA2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xA2C), ebx (32-bit) */
    MEM32(esi + 0xA30) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000AACA1; /* jne: not equal / not zero */

loc_000AAC86: ;
    PUSH32(esp, 0x000AAC8Bu); RECOMP_ABI_CALL(0x0013C190u, sub_0013C190); /* call 0x0013C190 */

loc_000AAC8B: ;
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AAC96u); RECOMP_ABI_CALL(0x00138700u, sub_00138700); /* call 0x00138700 */

loc_000AAC96: ;
    ecx = MEM32(eax);
    esp = esp + 8;
    MEM32(esi + 0xA2C) = ecx;

loc_000AACA1: ;
    ecx = MEM32(esi + 0xA2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AAD5C; /* je: equal / zero */

loc_000AACAF: ;
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    MEM32(esp + 0x10) = 0x47C35000;
    MEM32(esp + 0x14) = 0x47C35000;
    MEM32(esp + 0x18) = 0x47C35000;
    MEM32(esp + 0x1C) = 0xC7C35000u;
    MEM32(esp + 0x20) = 0xC7C35000u;
    MEM32(esp + 0x24) = 0xC7C35000u;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000AACEEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AACEE: ;
    ecx = MEM32(esi + 0xA2C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000AACF9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AACF9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000AAD01u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AAD01: ;
    ecx = MEM32(esi + 0xA2C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000AAD0Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AAD0C: ;
    ecx = MEM32(esi + 0xA30);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000AAD1Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AAD1A: ;
    ecx = MEM32(esi + 0xA2C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000AAD25u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AAD25: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000AAD2Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AAD2C: ;
    ecx = MEM32(esi + 0xA2C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x000AAD37u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AAD37: ;
    edx = MEM32(eax);
    ecx = esi + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000AAD42u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AAD42: ;
    PUSH32(esp, 0x000AAD47u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000AAD47: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000AAD4Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AAD4E: ;
    ecx = MEM32(eax);
    edx = MEM32(esi + 0xA2C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000AAD5Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AAD5C: ;
    ecx = 0x3CCCCCCD;
    MEM32(esi + 0xA34) = ecx;
    MEM32(esi + 0xA50) = ecx;
    eax = 0x3D851EB8;
    ecx = 0x3F800000;
    MEM32(esi + 0xA38) = ebx;
    MEM16(esi + 0xA3C) = LO16(ebx);
    MEM16(esi + 0xA40) = LO16(ebx);
    MEM32(esi + 0xA4C) = ebx;
    MEM32(esi + 0xA48) = ebx;
    MEM32(esi + 0xA54) = ebx;
    MEM32(esi + 0xA5C) = ecx;
    MEM32(esi + 0xA64) = ebx;
    MEM32(esi + 0xA6C) = ebx;
    MEM32(esi + 0xA68) = ebx;
    MEM32(esi + 0xA74) = ebx;
    MEM32(esi + 0xA7C) = ecx;
    ecx = MEM32(esp + 0x124);
    MEM16(esi + 0xA3E) = 7;
    MEM32(esi + 0xA44) = eax;
    MEM32(esi + 0xA58) = 0x41A00000;
    MEM32(esi + 0xA60) = eax;
    MEM32(esi + 0xA78) = 0x41700000;
    MEM32(esi + 0xA70) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x000AADFEu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000AADFE: ;
    esp = esp + 0x120;
    esp += 4; return; /* ret */

}

/**
 * sub_000AAE10
 * Original: 0x000AAE10 - 0x000AAEB2 (162 bytes, 52 insns)
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AAE10(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000AAE10: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(esp + 0x24)); /* fld float */
    edx = MEM32(esp + 0x24);
    fp_top() = -fp_top(); /* fchs */
    ecx = 0; /* xor self */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEMF(eax + 0x24) = (float)fp_top(); /* fst */
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x30) = ecx;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEM32(eax + 0x38) = ecx;
    ecx = MEM32(eax + 0xC);
    MEM32(eax + 0x3C) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(eax + 0x40) = edx;
    ecx = MEM32(eax + 0x14);
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0x44) = ecx;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0x14);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = edx;
    ecx = MEM32(eax + 8);
    MEM32(eax + 0x18) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(eax + 0x1C) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(eax + 0x20) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(eax + 0x24) = edx;
    ecx = MEM32(eax + 8);
    MEM32(eax + 0x28) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(eax + 0x2C) = edx;
    esp += 40; return; /* ret 36 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000AAEC0
 * Original: 0x000AAEC0 - 0x000AAF71 (177 bytes, 57 insns)
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AAEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000AAEC0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    MEM32(eax) = esi;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = esi;
    ecx = eax + 0x14;
    edx = 5;

loc_000AAEE1: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(ecx + -8) = esi;
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ecx + -4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(0x3C8308); /* fadd dword ptr [0x3c8308] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8328)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c8328] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AAF14; /* jne: not equal / not zero */

loc_000AAF0E: ;
    fp_top() = fp_top() - MEMF(0x3C8328); /* fsub dword ptr [0x3c8328] */

loc_000AAF14: ;
    ecx = ecx + 0xC;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000AAEE1; /* jne: not equal / not zero */

loc_000AAF1A: ;
    eax = MEM32(esp + 0xC);
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(esp + 0x14);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edx = MEM32(esp + 0x18);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = ecx;
    edx = MEM32(eax + 8);
    MEM32(eax + 0x18) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(eax + 0x1C) = ecx;
    edx = MEM32(eax + 0x10);
    MEM32(eax + 0x20) = edx;
    ecx = MEM32(eax + 0x14);
    MEM32(eax + 0x24) = ecx;
    edx = MEM32(eax + 8);
    MEM32(eax + 0x28) = edx;
    ecx = MEM32(eax + 0xC);
    MEM32(eax + 0x2C) = ecx;
    POP32(esp, esi);
    esp += 44; return; /* ret 40 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000AAF80
 * Original: 0x000AAF80 - 0x000AB118 (408 bytes, 131 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AAF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000AAF80: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(eax) = edi;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = ecx;
    esi = 1;
    edx = 0x3D36C4;
    ebx = 7;

loc_000AAFA4: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    ecx = SX16(LO16(esi));
    fp_top() = fp_top() * MEMF(edx + -4); /* fmul dword ptr [edx - 4] */
    ecx = ecx + ecx * 2;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    ecx = eax + ecx * 4;
    fp_top() = fp_top() * MEMF(edx); /* fmul dword ptr [edx] */
    edx = edx + 0x18;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 8) = edi;
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_000AAFA4; /* jne: not equal / not zero */

loc_000AAFCB: ;
    esi = 8;
    edx = 0x3D373C;
    ebx = 5;
    /* nop */

loc_000AAFE0: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    ecx = SX16(LO16(esi));
    fp_top() = fp_top() * MEMF(edx + -4); /* fmul dword ptr [edx - 4] */
    ecx = ecx + ecx * 2;
    ecx = eax + ecx * 4;
    edx = edx - 0x18;
    fp_top() = -fp_top(); /* fchs */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(edx + 0x18); /* fmul dword ptr [edx + 0x18] */
    MEM32(ecx + 8) = edi;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_000AAFE0; /* jne: not equal / not zero */

loc_000AB00A: ;
    esi = 0xD;
    edx = 0x3D36C4;
    ebx = 7;
    /* nop */

loc_000AB020: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    ecx = SX16(LO16(esi));
    fp_top() = fp_top() * MEMF(edx + -4); /* fmul dword ptr [edx - 4] */
    ecx = ecx + ecx * 2;
    ecx = eax + ecx * 4;
    edx = edx + 0x18;
    fp_top() = -fp_top(); /* fchs */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(edx + -24); /* fmul dword ptr [edx - 0x18] */
    MEM32(ecx + 8) = edi;
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_000AB020; /* jne: not equal / not zero */

loc_000AB04C: ;
    esi = 0x14;
    edx = 0x3D373C;
    ebx = 5;
    goto loc_000AB060;

    /* nop */

loc_000AB060: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    ecx = SX16(LO16(esi));
    fp_top() = fp_top() * MEMF(edx + -4); /* fmul dword ptr [edx - 4] */
    ecx = ecx + ecx * 2;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    ecx = eax + ecx * 4;
    fp_top() = fp_top() * MEMF(edx); /* fmul dword ptr [edx] */
    edx = edx - 0x18;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = -fp_top(); /* fchs */
    MEM32(ecx + 8) = edi;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_000AB060; /* jne: not equal / not zero */

loc_000AB089: ;
    edx = MEM32(eax + 0xC);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x18); /* fsub dword ptr [esp + 0x18] */
    MEM32(eax + 0x12C) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(eax + 0x130) = ecx;
    edx = MEM32(eax + 0x14);
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 0x134) = edx;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x24);
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = ecx;
    ecx = eax + 0x1C;
    edx = 0xB;

loc_000AB0E3: ;
    esi = MEM32(eax + 8);
    MEM32(ecx + -4) = esi;
    esi = MEM32(eax + 0xC);
    MEM32(ecx) = esi;
    esi = MEM32(eax + 0x10);
    MEM32(ecx + 4) = esi;
    esi = MEM32(eax + 0x14);
    MEM32(ecx + 8) = esi;
    ecx = ecx + 0x10;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000AB0E3; /* jne: not equal / not zero */

loc_000AB100: ;
    edx = MEM32(eax + 8);
    POP32(esp, edi);
    MEM32(eax + 0xC8) = edx;
    ecx = MEM32(eax + 0xC);
    POP32(esp, esi);
    MEM32(eax + 0xCC) = ecx;
    POP32(esp, ebx);
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000AAFB5
 * Original: 0x000AAFB5 - 0x000AB118 (355 bytes, 114 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AAFB5(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AAFB5: ;
    ecx = eax + ecx * 4;
    fp_top() = fp_top() * MEMF(edx); /* fmul dword ptr [edx] */
    edx = edx + 0x18;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 8) = edi;
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_000AAFA4(); return; } /* jne: not equal / not zero */

loc_000AAFCB: ;
    esi = 8;
    edx = 0x3D373C;
    ebx = 5;
    /* nop */

loc_000AAFE0: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    ecx = SX16(LO16(esi));
    fp_top() = fp_top() * MEMF(edx + -4); /* fmul dword ptr [edx - 4] */
    ecx = ecx + ecx * 2;
    ecx = eax + ecx * 4;
    edx = edx - 0x18;
    fp_top() = -fp_top(); /* fchs */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(edx + 0x18); /* fmul dword ptr [edx + 0x18] */
    MEM32(ecx + 8) = edi;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_000AAFE0; /* jne: not equal / not zero */

loc_000AB00A: ;
    esi = 0xD;
    edx = 0x3D36C4;
    ebx = 7;
    /* nop */

loc_000AB020: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    ecx = SX16(LO16(esi));
    fp_top() = fp_top() * MEMF(edx + -4); /* fmul dword ptr [edx - 4] */
    ecx = ecx + ecx * 2;
    ecx = eax + ecx * 4;
    edx = edx + 0x18;
    fp_top() = -fp_top(); /* fchs */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(edx + -24); /* fmul dword ptr [edx - 0x18] */
    MEM32(ecx + 8) = edi;
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_000AB020; /* jne: not equal / not zero */

loc_000AB04C: ;
    esi = 0x14;
    edx = 0x3D373C;
    ebx = 5;
    goto loc_000AB060;

    /* nop */

loc_000AB060: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    ecx = SX16(LO16(esi));
    fp_top() = fp_top() * MEMF(edx + -4); /* fmul dword ptr [edx - 4] */
    ecx = ecx + ecx * 2;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    ecx = eax + ecx * 4;
    fp_top() = fp_top() * MEMF(edx); /* fmul dword ptr [edx] */
    edx = edx - 0x18;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = -fp_top(); /* fchs */
    MEM32(ecx + 8) = edi;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_000AB060; /* jne: not equal / not zero */

loc_000AB089: ;
    edx = MEM32(eax + 0xC);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x18); /* fsub dword ptr [esp + 0x18] */
    MEM32(eax + 0x12C) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(eax + 0x130) = ecx;
    edx = MEM32(eax + 0x14);
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 0x134) = edx;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x24);
    fp_top() = fp_top() + MEMF(esp + 0x18); /* fadd dword ptr [esp + 0x18] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = ecx;
    ecx = eax + 0x1C;
    edx = 0xB;

loc_000AB0E3: ;
    esi = MEM32(eax + 8);
    MEM32(ecx + -4) = esi;
    esi = MEM32(eax + 0xC);
    MEM32(ecx) = esi;
    esi = MEM32(eax + 0x10);
    MEM32(ecx + 4) = esi;
    esi = MEM32(eax + 0x14);
    MEM32(ecx + 8) = esi;
    ecx = ecx + 0x10;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000AB0E3; /* jne: not equal / not zero */

loc_000AB100: ;
    edx = MEM32(eax + 8);
    POP32(esp, edi);
    MEM32(eax + 0xC8) = edx;
    ecx = MEM32(eax + 0xC);
    POP32(esp, esi);
    MEM32(eax + 0xCC) = ecx;
    POP32(esp, ebx);
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000AB120
 * Original: 0x000AB120 - 0x000AB354 (564 bytes, 183 insns)
 * CC: cdecl, 12 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB120(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AB120: ;
    esp = esp - 8;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    ecx = MEM32(esp + 0xC);
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    PUSH32(esp, ebx);
    fp_push(MEMF(esp + 0x38)); /* fld float */
    PUSH32(esp, ebp);
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    SET_LO16(ebp, MEM16(esp + 0x1C));
    _fa = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(ebp), LO16(ebp) (16-bit) */
    PUSH32(esp, esi);
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000AB1B4; /* jle: less or equal (signed <=) */

loc_000AB14D: ;
    eax = 0; /* xor self */
    SET_LO16(eax, LO16(ebp));
    SET_LO16(eax, LO16(eax) - 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO16(eax, LO16(eax) >> 1);
    edx = ecx + 0x14;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = ZX16(LO16(eax));
    edi = edi;

loc_000AB160: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = MEM32(esp + 0x3C);
    fp_top() = cos(fp_top()); /* fcos */
    MEM32(edx + -12) = eax;
    eax = MEM32(esp + 0x40);
    fp_top() = fp_top() * MEMF(esp + 0x38); /* fmul dword ptr [esp + 0x38] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_top() = fp_top() * MEMF(esp + 0x38); /* fmul dword ptr [esp + 0x38] */
    MEMF(esp + 0x48) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(edx + -20) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(edx + -16) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edx) = eax;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(edx + -8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(edx + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(esp + 0x44); /* fadd dword ptr [esp + 0x44] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8328)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c8328] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AB1AE; /* jne: not equal / not zero */

loc_000AB1A8: ;
    fp_top() = fp_top() - MEMF(0x3C8328); /* fsub dword ptr [0x3c8328] */

loc_000AB1AE: ;
    edx = edx + 0x18;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000AB160; /* jne: not equal / not zero */

loc_000AB1B4: ;
    fp_pop(); /* fstp st(0) */
    eax = LO16(ebp);
    edx = eax + -2;
    MEM32(esp + 0x48) = edx;
    esi = MEM32(ecx);
    edx = edx + edx * 2;
    fp_push((double)SMEM32(esp + 0x48)); /* fild */
    MEM32(ecx + edx * 4) = esi;
    esi = MEM32(ecx + 4);
    edx = ecx + edx * 4;
    fp_top() = fp_top() * MEMF(0x3C83B4); /* fmul dword ptr [0x3c83b4] */
    MEM32(edx + 4) = esi;
    esi = MEM32(ecx + 8);
    MEM32(edx + 8) = esi;
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0xC);
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    esi = MEM32(esp + 0x20);
    fp_top() = fp_top() - MEMF(esp + 0x28); /* fsub dword ptr [esp + 0x28] */
    eax = eax + eax * 2;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    eax = ecx + eax * 4 + -12;
    MEM32(eax) = edx;
    fp_st1() = fp_st1() / fp_top(); fp_pop(); /* fdivp st(1) */
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x14);
    MEM32(eax + 8) = ecx;
    edx = 0; /* xor self */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x44); /* fsub dword ptr [esp + 0x44] */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C9404); /* fadd dword ptr [0x3c9404] */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000AB280; /* jp: parity */

loc_000AB242: ;
    ecx = 0; /* xor self */

loc_000AB244: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    edx = edx + 2;
    fp_top() = fp_top() + MEMF(esp + 0x44); /* fadd dword ptr [esp + 0x44] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esi + ecx * 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    MEMF(esi + ecx * 8 + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esi + ecx * 8 + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    MEMF(esi + ecx * 8 + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = SX16(LO16(edx));
    MEM32(esp + 0x14) = ecx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000AB244; /* jnp: not parity */

loc_000AB280: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() + fp_top(); /* fadd st(0), st(0) */
    MEMF(esp + 0x48) = (float)fp_top(); /* fst */
    fp_top() = fp_top() + MEMF(0x3C9404); /* fadd dword ptr [0x3c9404] */
    PUSH32(esp, 0x000AB295u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000AB295: ;
    edi = eax;
    PUSH32(esp, 0x000AB29Cu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000AB29C: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edi) (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AB2D2; /* jge: greater or equal (signed >=) */

loc_000AB2A1: ;
    edx = SX16(LO16(eax));
    ecx = esi + edx * 8 + 4;
    edx = edi;
    edx = edx - eax;
    SET_LO16(edx, LO16(edx) - 1);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO16(edx, LO16(edx) >> 1);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX16(LO16(edx));

loc_000AB2B5: ;
    fp_top() = fp_top() - MEMF(esp + 0x44); /* fsub dword ptr [esp + 0x44] */
    edx = MEM32(esp + 0x34);
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x30);
    MEMF(ecx + -4) = (float)fp_top(); /* fst */
    MEM32(ecx + 8) = edx;
    MEMF(ecx + 4) = (float)fp_top(); /* fst */
    ecx = ecx + 0x10;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000AB2B5; /* jne: not equal / not zero */

loc_000AB2D2: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), LO16(ebp) (16-bit) */
    fp_pop(); /* fstp st(0) */
    ebx = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_000AB34A; /* jge: greater or equal (signed >=) */

loc_000AB2DB: ;
    goto loc_000AB2E0;

    /* nop */

loc_000AB2E0: ;
    eax = MEM32(esp + 0x48);
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    MEM32(esp + 0x44) = eax;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x44)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x44] */
    edx = 0; /* xor self */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000AB32F; /* jp: parity */

loc_000AB2FB: ;
    ecx = 0; /* xor self */
    edi = SX16(LO16(ebx));

loc_000AB300: ;
    ebp = MEM32(esi + ecx * 8 + 0x10);
    eax = edi + ecx;
    eax = esi + eax * 8;
    MEM32(eax) = ebp;
    ecx = MEM32(esi + ecx * 8 + 0x14);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    ecx = SX16(LO16(edx));
    MEM32(esp + 0x14) = ecx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x44)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x44] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000AB300; /* jnp: not parity */

loc_000AB32A: ;
    SET_LO16(ebp, MEM16(esp + 0x24));

loc_000AB32F: ;
    edx = SX16(LO16(ebx));
    MEM32(esp + 0x14) = edx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() + MEMF(esp + 0x48); /* fadd dword ptr [esp + 0x48] */
    PUSH32(esp, 0x000AB343u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000AB343: ;
    ebx = eax;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), LO16(ebp) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AB2E0; /* jl: less (signed <) */

loc_000AB34A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 52; return; /* ret 48 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000AB360
 * Original: 0x000AB360 - 0x000AB418 (184 bytes, 65 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AB360: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = ecx + 8;
    PUSH32(esp, 0x000AB371u); RECOMP_ABI_CALL(0x000AABC0u, sub_000AABC0); /* call 0x000AABC0 */

loc_000AB371: ;
    esi = MEM32(eax + 4);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AB413; /* je: equal / zero */

loc_000AB37F: ;
    /* nop */

loc_000AB380: ;
    ecx = eax + eax * 8;
    edx = ZX8(MEM8(esi + ecx * 8 + 0x40));
    ecx = esi + ecx * 8;
    edx = edx & 1;
    MEM32(ecx + 0x40) = edx;
    edx = eax + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AB3A0; /* jl: less (signed <) */

loc_000AB399: ;
    eax = 0x20;
    goto loc_000AB40A;

loc_000AB3A0: ;
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(esi + eax * 4 + 0x994);
    ecx = edx;
    ecx = ecx & 0x1F;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AB3D2; /* jne: not equal / not zero */

loc_000AB3B7: ;
    edx = edx & 0xFFFFFFE0u;
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AB399; /* jge: greater or equal (signed >=) */

loc_000AB3C2: ;
    ecx = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    eax = MEM32(esi + ecx * 4 + 0x994);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AB3B7; /* je: equal / zero */

loc_000AB3D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AB3DF; /* jne: not equal / not zero */

loc_000AB3D9: ;
    edx = edx + 0x10;
    eax = eax >> 0x10;

loc_000AB3DF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AB3E9; /* jne: not equal / not zero */

loc_000AB3E3: ;
    edx = edx + 8;
    eax = eax >> 8;

loc_000AB3E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AB3F3; /* jne: not equal / not zero */

loc_000AB3ED: ;
    edx = edx + 4;
    eax = eax >> 4;

loc_000AB3F3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AB3FE; /* jne: not equal / not zero */

loc_000AB3F7: ;
    eax = eax >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AB3F7; /* je: equal / zero */

loc_000AB3FE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    eax = 0x20;
    if (CMP_GE(_fas, _fbs)) goto loc_000AB40A; /* jge: greater or equal (signed >=) */

loc_000AB408: ;
    eax = edx;

loc_000AB40A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AB380; /* jne: not equal / not zero */

loc_000AB413: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_000AB420
 * Original: 0x000AB420 - 0x000AB70E (750 bytes, 194 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB420(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AB420: ;
    esp = esp - 0xEC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    edx = MEM32(ebx + 0xA58);
    PUSH32(esp, 0);
    ecx = esp + 0x3C;
    MEM32(esp + 0x40) = ecx;
    esp = esp - 0x24;
    eax = esp + 0xDC;
    edi = esp;
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x68) = 0x3E75C28F;
    MEM32(esp + 0x6C) = 0x3F000000;
    MEM32(esp + 0x70) = 0;
    MEM32(esp + 0x74) = 0x3C23D70A;
    MEM32(esp + 0x78) = 0;
    MEM32(esp + 0x7C) = 0x3F7D70A4;
    MEM32(esp + 0x80) = edx;
    ecx = 9;
    esi = esp + 0x60;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = ebx;
    PUSH32(esp, 0x000AB495u); RECOMP_ABI_CALL(0x000AAEC0u, sub_000AAEC0); /* call 0x000AAEC0 */

loc_000AB495: ;
    fp_push(MEMF(esp + 0x10C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebx + 0xA54)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebx + 0xa54] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AB531; /* jne: not equal / not zero */

loc_000AB4AD: ;
    fp_push(MEMF(esp + 0x10C)); /* fld float */
    fp_top() = fp_top() + MEMF(ebx + 0xA50); /* fadd dword ptr [ebx + 0xa50] */
    MEMF(ebx + 0xA54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0xA58)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8368)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8368] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000AB4F6; /* jp: parity */

loc_000AB4D3: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(ebx + 0xA5C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000AB4F6; /* jnp: not parity */

loc_000AB4E8: ;
    fp_push(MEMF(ebx + 0xA58)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    goto loc_000AB52B;

loc_000AB4F6: ;
    fp_push(MEMF(ebx + 0xA58)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C94A4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c94a4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000AB515; /* jp: parity */

loc_000AB509: ;
    MEM32(ebx + 0xA5C) = 0x3F800000;
    goto loc_000AB51F;

loc_000AB515: ;
    MEM32(ebx + 0xA5C) = 0;

loc_000AB51F: ;
    fp_push(MEMF(ebx + 0xA58)); /* fld float */
    fp_top() = fp_top() - MEMF(0x3C6E40); /* fsub dword ptr [0x3c6e40] */

loc_000AB52B: ;
    MEMF(ebx + 0xA58) = (float)fp_top(); fp_pop(); /* fstp */

loc_000AB531: ;
    eax = MEM32(esp + 0x104);
    ecx = MEM32(esp + 0x108);
    eax = eax + eax * 8;
    edx = MEM32(ecx + eax * 8 + 0x34);
    eax = ecx + eax * 8 + 0x34;
    MEM32(esp + 0x28) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x2C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, 0x000AB561u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_000AB561: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x000AB570u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AB570: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    edx = esp + 0x10;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C8364); /* fadd dword ptr [0x3c8364] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() - MEMF(esp + 0x10); /* fsub dword ptr [esp + 0x10] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() - MEMF(esp + 0x14); /* fsub dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x18); /* fsub dword ptr [esp + 0x18] */
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(esp + 0x34); /* fmul dword ptr [esp + 0x34] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x34); /* fmul dword ptr [esp + 0x34] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x34); /* fmul dword ptr [esp + 0x34] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3D37BC); /* fmul dword ptr [0x3d37bc] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3D37BC); /* fmul dword ptr [0x3d37bc] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3D37BC); /* fmul dword ptr [0x3d37bc] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x30); /* fadd dword ptr [esp + 0x30] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AB657u); RECOMP_ABI_CALL(0x00120860u, sub_00120860); /* call 0x00120860 */

loc_000AB657: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x24) = ecx;
    esp = esp + 8;
    ecx = esp + 0x74;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x000AB677u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_000AB677: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x80;
    PUSH32(esp, 0x000AB692u); RECOMP_ABI_CALL(0x002427F0u, sub_002427F0); /* call 0x002427F0 */

loc_000AB692: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = esp + 0x78;
    PUSH32(esp, 0x000AB6A0u); RECOMP_ABI_CALL(0x0023E460u, sub_0023E460); /* call 0x0023E460 */

loc_000AB6A0: ;
    PUSH32(esp, 6);
    edx = esp + 0xB8;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    ecx = esp + 0x80;
    PUSH32(esp, 0x000AB6B9u); RECOMP_ABI_CALL(0x0023F140u, sub_0023F140); /* call 0x0023F140 */

loc_000AB6B9: ;
    esi = MEM32(esp + 0x100);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000AB6C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AB6C9: ;
    ebx = esp + 0xB4;
    edi = esp + 0x38;
    ebp = 6;
    /* nop */

loc_000AB6E0: ;
    ecx = MEM32(esp + 0x110);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000AB6F1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AB6F1: ;
    edi = edi + 8;
    ebx = ebx + 0xC;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000AB6E0; /* jne: not equal / not zero */

loc_000AB6FA: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000AB701u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AB701: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xEC;
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000AB710
 * Original: 0x000AB710 - 0x000ABC3F (1327 bytes, 335 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AB710(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AB710: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    esp = esp - 0x224;
    PUSH32(esp, ebx);
    ebx = ecx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebx + 0xA64)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebx + 0xa64] */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AB79E; /* jne: not equal / not zero */

loc_000AB72D: ;
    fp_push(MEMF(esp + 0x244)); /* fld float */
    fp_top() = fp_top() + MEMF(ebx + 0xA60); /* fadd dword ptr [ebx + 0xa60] */
    MEMF(ebx + 0xA64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0xA68)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C6DE0); /* fadd dword ptr [0x3c6de0] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C97B8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c97b8] */
    MEMF(ebx + 0xA68) = (float)fp_top(); /* fst */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AB76D; /* jne: not equal / not zero */

loc_000AB75F: ;
    fp_top() = fp_top() - MEMF(0x3C97B8); /* fsub dword ptr [0x3c97b8] */
    MEMF(ebx + 0xA68) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000AB76F;

loc_000AB76D: ;
    fp_pop(); /* fstp st(0) */

loc_000AB76F: ;
    fp_push(MEMF(ebx + 0xA6C)); /* fld float */
    fp_top() = fp_top() - MEMF(0x3C6DE0); /* fsub dword ptr [0x3c6de0] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    MEMF(ebx + 0xA6C) = (float)fp_top(); /* fst */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000AB79C; /* jp: parity */

loc_000AB78E: ;
    fp_top() = fp_top() + MEMF(0x3C97B8); /* fadd dword ptr [0x3c97b8] */
    MEMF(ebx + 0xA6C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000AB79E;

loc_000AB79C: ;
    fp_pop(); /* fstp st(0) */

loc_000AB79E: ;
    edx = MEM32(ebx + 0xA68);
    PUSH32(esp, edx);
    ecx = esp + 0x1A8;
    MEM32(esp + 0x40) = ecx;
    esp = esp - 0x24;
    eax = esp + 0xF4;
    edi = esp;
    MEM32(esp + 0x60) = eax;
    ecx = 9;
    esi = esp + 0x60;
    MEM32(esp + 0x68) = 0x3E800000;
    MEM32(esp + 0x6C) = 0x3F028F5C;
    MEM32(esp + 0x70) = 0x3C23D70A;
    MEM32(esp + 0x74) = 0x3F800000;
    MEM32(esp + 0x78) = 0x3EFAE148;
    MEM32(esp + 0x7C) = 0x3F800000;
    MEM32(esp + 0x80) = 0x41C80000;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = ebx;
    PUSH32(esp, 0x000AB80Du); RECOMP_ABI_CALL(0x000AAEC0u, sub_000AAEC0); /* call 0x000AAEC0 */

loc_000AB80D: ;
    edx = MEM32(ebx + 0xA6C);
    PUSH32(esp, edx);
    ecx = esp + 0x1D8;
    MEM32(esp + 0x40) = ecx;
    esp = esp - 0x24;
    eax = esp + 0x184;
    edi = esp;
    MEM32(esp + 0x60) = eax;
    ecx = 9;
    esi = esp + 0x60;
    MEM32(esp + 0x68) = 0x3E8A3D71;
    MEM32(esp + 0x6C) = 0x3F000000;
    MEM32(esp + 0x70) = 0x3F000000;
    MEM32(esp + 0x74) = 0x3CA3D70A;
    MEM32(esp + 0x78) = 0x3F000000;
    MEM32(esp + 0x7C) = 0x3F7AE148;
    MEM32(esp + 0x80) = 0x41C80000;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = ebx;
    PUSH32(esp, 0x000AB87Cu); RECOMP_ABI_CALL(0x000AAEC0u, sub_000AAEC0); /* call 0x000AAEC0 */

loc_000AB87C: ;
    edx = MEM32(ebx + 0xA78);
    PUSH32(esp, 0);
    ecx = esp + 0x208;
    MEM32(esp + 0x40) = ecx;
    esp = esp - 0x24;
    eax = esp + 0x13C;
    edi = esp;
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x80) = edx;
    ecx = 9;
    esi = esp + 0x60;
    MEM32(esp + 0x68) = 0x3E000000;
    MEM32(esp + 0x6C) = 0x3F000000;
    MEM32(esp + 0x70) = 0;
    MEM32(esp + 0x74) = 0x3E800000;
    MEM32(esp + 0x78) = 0;
    MEM32(esp + 0x7C) = 0x3F400000;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = ebx;
    PUSH32(esp, 0x000AB8E8u); RECOMP_ABI_CALL(0x000AAEC0u, sub_000AAEC0); /* call 0x000AAEC0 */

loc_000AB8E8: ;
    fp_push(MEMF(esp + 0x244)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebx + 0xA74)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebx + 0xa74] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AB984; /* jne: not equal / not zero */

loc_000AB900: ;
    fp_push(MEMF(esp + 0x244)); /* fld float */
    fp_top() = fp_top() + MEMF(ebx + 0xA70); /* fadd dword ptr [ebx + 0xa70] */
    MEMF(ebx + 0xA74) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0xA78)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C836C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c836c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000AB949; /* jp: parity */

loc_000AB926: ;
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    fp_push(MEMF(ebx + 0xA7C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000AB949; /* jnp: not parity */

loc_000AB93B: ;
    fp_push(MEMF(ebx + 0xA78)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    goto loc_000AB97E;

loc_000AB949: ;
    fp_push(MEMF(ebx + 0xA78)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C8324)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c8324] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000AB968; /* jp: parity */

loc_000AB95C: ;
    MEM32(ebx + 0xA7C) = 0x3F800000;
    goto loc_000AB972;

loc_000AB968: ;
    MEM32(ebx + 0xA7C) = 0;

loc_000AB972: ;
    fp_push(MEMF(ebx + 0xA78)); /* fld float */
    fp_top() = fp_top() - MEMF(0x3C6E40); /* fsub dword ptr [0x3c6e40] */

loc_000AB97E: ;
    MEMF(ebx + 0xA78) = (float)fp_top(); fp_pop(); /* fstp */

loc_000AB984: ;
    eax = MEM32(esp + 0x23C);
    ecx = MEM32(esp + 0x240);
    eax = eax + eax * 8;
    edx = MEM32(ecx + eax * 8 + 0x34);
    eax = ecx + eax * 8 + 0x34;
    MEM32(esp + 0x2C) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x30) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, 0x000AB9B4u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_000AB9B4: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x000AB9C3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AB9C3: ;
    PUSH32(esp, 0x000AB9C8u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_000AB9C8: ;
    edx = MEM32(eax);
    ecx = esp + 0xB4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0xAC;
    PUSH32(esp, ecx);
    ecx = esp + 0xA4;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x000AB9EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AB9EA: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C8364); /* fadd dword ptr [0x3c8364] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() - MEMF(esp + 0x14); /* fsub dword ptr [esp + 0x14] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() - MEMF(esp + 0x18); /* fsub dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x1C); /* fsub dword ptr [esp + 0x1c] */
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(esp + 0x28); /* fmul dword ptr [esp + 0x28] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3D37BC); /* fmul dword ptr [0x3d37bc] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3D37BC); /* fmul dword ptr [0x3d37bc] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3D37BC); /* fmul dword ptr [0x3d37bc] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + g_fp_stack[(g_fp_top + 2) & 7]; /* fadd st(2) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() + fp_st1(); /* fadd st(1) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0x34); /* fadd dword ptr [esp + 0x34] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    edx = esp + 0x14;
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    PUSH32(esp, edx);
    eax = esp + 0xC4;
    PUSH32(esp, eax);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000ABAD4u); RECOMP_ABI_CALL(0x00120860u, sub_00120860); /* call 0x00120860 */

loc_000ABAD4: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x28) = ecx;
    esp = esp + 8;
    ecx = esp + 0x5C;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x000ABAF4u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_000ABAF4: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    PUSH32(esp, 0x000ABB0Cu); RECOMP_ABI_CALL(0x002427F0u, sub_002427F0); /* call 0x002427F0 */

loc_000ABB0C: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = esp + 0x60;
    PUSH32(esp, 0x000ABB1Au); RECOMP_ABI_CALL(0x0023E460u, sub_0023E460); /* call 0x0023E460 */

loc_000ABB1A: ;
    PUSH32(esp, 6);
    edx = esp + 0xD0;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    PUSH32(esp, 0x000ABB30u); RECOMP_ABI_CALL(0x0023F140u, sub_0023F140); /* call 0x0023F140 */

loc_000ABB30: ;
    esi = MEM32(esp + 0x238);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000ABB40u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ABB40: ;
    ebp = MEM32(esp + 0x248);
    ebx = esp + 0xCC;
    edi = esp + 0x1A4;
    MEM32(esp + 0x10) = 6;
    /* nop */

loc_000ABB60: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000ABB6Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ABB6A: ;
    eax = MEM32(esp + 0x10);
    edi = edi + 8;
    ebx = ebx + 0xC;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_000ABB60; /* jne: not equal / not zero */

loc_000ABB7B: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000ABB82u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ABB82: ;
    PUSH32(esp, 6);
    eax = esp + 0x160;
    ecx = eax;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x68;
    PUSH32(esp, 0x000ABB98u); RECOMP_ABI_CALL(0x0023F140u, sub_0023F140); /* call 0x0023F140 */

loc_000ABB98: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000ABBA1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ABBA1: ;
    ebx = esp + 0x15C;
    edi = esp + 0x1D4;
    MEM32(esp + 0x10) = 6;

loc_000ABBB7: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000ABBC1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ABBC1: ;
    eax = MEM32(esp + 0x10);
    edi = edi + 8;
    ebx = ebx + 0xC;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_000ABBB7; /* jne: not equal / not zero */

loc_000ABBD2: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000ABBD9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ABBD9: ;
    PUSH32(esp, 6);
    eax = esp + 0x118;
    ecx = eax;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x68;
    PUSH32(esp, 0x000ABBEFu); RECOMP_ABI_CALL(0x0023F140u, sub_0023F140); /* call 0x0023F140 */

loc_000ABBEF: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000ABBF8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ABBF8: ;
    ebx = esp + 0x114;
    edi = esp + 0x204;
    MEM32(esp + 0x10) = 6;
    edi = edi;

loc_000ABC10: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000ABC1Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ABC1A: ;
    eax = MEM32(esp + 0x10);
    edi = edi + 8;
    ebx = ebx + 0xC;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_000ABC10; /* jne: not equal / not zero */

loc_000ABC2B: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000ABC32u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ABC32: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x224;
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000ABC40
 * Original: 0x000ABC40 - 0x000ABEBF (639 bytes, 166 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABC40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ABC40: ;
    esp = esp - 0xEC;
    eax = MEM32(esp + 0xF4);
    PUSH32(esp, ebx);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0xFC);
    eax = eax + eax * 8;
    fp_push(MEMF(ecx + eax * 8 + 0x10)); /* fld float */
    ebx = ecx + eax * 8;
    fp_top() = fp_top() + MEMF(0x3C8320); /* fadd dword ptr [0x3c8320] */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    fp_top() = fp_top() * MEMF(0x3D37C8); /* fmul dword ptr [0x3d37c8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000ABC87; /* jp: parity */

loc_000ABC7F: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6DE4)); /* fld float */

loc_000ABC87: ;
    fp_top() = fp_top() * MEMF(ebx + 0x20); /* fmul dword ptr [ebx + 0x20] */
    fp_top() = fp_top() * MEMD(0x3D37C0); /* fmul qword ptr [0x3d37c0] */
    fp_top() = fp_top() * MEMF(0x3C8360); /* fmul dword ptr [0x3c8360] */
    PUSH32(esp, 0x000ABC9Bu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000ABC9B: ;
    ebp = ZX8(LO8(eax));
    edx = esp + 0xB4;
    eax = esp + 0x44;
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = 0x3E800000;
    MEM32(esp + 0x50) = 0x3EFAE148;
    MEM32(esp + 0x54) = 0x3C23D70A;
    MEM32(esp + 0x58) = 0;
    MEM32(esp + 0x5C) = 0x3EFAE148;
    MEM32(esp + 0x60) = 0;
    ecx = MEM32(ebx);
    MEM32(esp + 0x64) = ecx;
    esp = esp - 0x24;
    edi = esp;
    ecx = 9;
    esi = esp + 0x68;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x4C);
    ebp = ebp << 0x18;
    PUSH32(esp, 0x000ABD03u); RECOMP_ABI_CALL(0x000AAE10u, sub_000AAE10); /* call 0x000AAE10 */

loc_000ABD03: ;
    ecx = esp + 0x74;
    PUSH32(esp, 0x000ABD0Cu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_000ABD0C: ;
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 0x3C) = 0x3F800000;
    MEM32(esp + 0x40) = 0;
    edx = MEM32(ebx + 0x14);
    MEM32(esp + 0x2C) = edx;
    eax = MEM32(ebx + 0x18);
    MEM32(esp + 0x30) = eax;
    ecx = MEM32(ebx + 0x1C);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    MEM32(esp + 0x38) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x000ABD4Cu); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_000ABD4C: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    ecx = esp + 0x2C;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    edx = esp + 0x14;
    PUSH32(esp, edx);
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ecx = esp + 0x24;
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x000ABDA3u); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_000ABDA3: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    ebx = ebx + 4;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    PUSH32(esp, ebx);
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    ecx = esp + 0x78;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x000ABDF4u); RECOMP_ABI_CALL(0x0023E460u, sub_0023E460); /* call 0x0023E460 */

loc_000ABDF4: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0x74) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0x78) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(esp + 0x84) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x88) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(esp + 0x7C) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x94) = eax;
    PUSH32(esp, 6);
    eax = esp + 0xB8;
    MEM32(esp + 0x9C) = ecx;
    ecx = eax;
    PUSH32(esp, eax);
    MEM32(esp + 0x94) = edx;
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    ecx = esp + 0x80;
    MEM32(esp + 0xA8) = edx;
    PUSH32(esp, 0x000ABE67u); RECOMP_ABI_CALL(0x0023F140u, sub_0023F140); /* call 0x0023F140 */

loc_000ABE67: ;
    esi = MEM32(esp + 0x100);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000ABE77u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ABE77: ;
    ebx = esp + 0xB4;
    edi = esp + 0x44;
    MEM32(esp + 0x28) = 6;
    /* nop */

loc_000ABE90: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000ABE9Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ABE9A: ;
    eax = MEM32(esp + 0x28);
    edi = edi + 8;
    ebx = ebx + 0xC;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = eax;
    if ((_fa != 0)) goto loc_000ABE90; /* jne: not equal / not zero */

loc_000ABEAB: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000ABEB2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ABEB2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xEC;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000ABEC0
 * Original: 0x000ABEC0 - 0x000AC17B (699 bytes, 203 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ABEC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ABEC0: ;
    esp = esp - 0x294;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x16C;
    MEM32(esp + 0x20) = ecx;
    esp = esp - 0x20;
    edx = esp + 0xBC;
    edi = esp;
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x48) = 0x3F000000;
    MEM32(esp + 0x4C) = 0x3F400000;
    MEM32(esp + 0x50) = 0x3F000000;
    MEM32(esp + 0x54) = 0x3F800000;
    MEM32(esp + 0x5C) = 0x41C00000;
    MEM32(esp + 0x58) = 0x41866666;
    ecx = 8;
    esi = esp + 0x40;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    PUSH32(esp, 0x000ABF29u); RECOMP_ABI_CALL(0x000AAF80u, sub_000AAF80); /* call 0x000AAF80 */

loc_000ABF29: ;
    PUSH32(esp, 0x000ABF2Eu); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_000ABF2E: ;
    edx = MEM32(eax);
    ecx = esp + 0x44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x000ABF3Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ABF3D: ;
    PUSH32(esp, 0x000ABF42u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_000ABF42: ;
    edx = MEM32(eax);
    ecx = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x000ABF5Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ABF5B: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    eax = MEM32(esp + 0x2AC);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    edx = eax + eax * 8;
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    eax = MEM32(esp + 0x2B0);
    ebx = eax + edx * 8;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    esi = ebx + 0x28;
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(0x3C6DE4); /* fmul dword ptr [0x3c6de4] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3D37D0); /* fmul dword ptr [0x3d37d0] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3D37D0); /* fmul dword ptr [0x3d37d0] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x44); /* fadd dword ptr [esp + 0x44] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(esp + 0x48); /* fadd dword ptr [esp + 0x48] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(esi); /* fsub dword ptr [esi] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() - MEMF(esi + 4); /* fsub dword ptr [esi + 4] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    ecx = esp + 0x44;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    PUSH32(esp, ecx);
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    edx = esp + 0x54;
    PUSH32(esp, edx);
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C6DE4); /* fmul dword ptr [0x3c6de4] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000AC02Eu); RECOMP_ABI_CALL(0x00120860u, sub_00120860); /* call 0x00120860 */

loc_000AC02E: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x1C) = ecx;
    esp = esp + 8;
    ecx = esp + 0x5C;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x000AC04Eu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_000AC04E: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    PUSH32(esp, 0x000AC066u); RECOMP_ABI_CALL(0x002427F0u, sub_002427F0); /* call 0x002427F0 */

loc_000AC066: ;
    PUSH32(esp, esi);
    ecx = esp + 0x60;
    PUSH32(esp, 0x000AC070u); RECOMP_ABI_CALL(0x0023E460u, sub_0023E460); /* call 0x0023E460 */

loc_000AC070: ;
    PUSH32(esp, 0x1A);
    ecx = esp + 0x170;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    ecx = esp + 0x68;
    PUSH32(esp, 0x000AC086u); RECOMP_ABI_CALL(0x0023F140u, sub_0023F140); /* call 0x0023F140 */

loc_000AC086: ;
    edi = MEM32(esp + 0x2A8);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000AC096u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AC096: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() - MEMF(ebx + 0x44); /* fsub dword ptr [ebx + 0x44] */
    esi = 0; /* xor self */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_top() = fp_top() * MEMF(0x3D37CC); /* fmul dword ptr [0x3d37cc] */
    PUSH32(esp, 0x000AC0B2u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000AC0B2: ;
    ebx = eax;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(ebx), LO16(ebx) (16-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000AC0F5; /* jle: less or equal (signed <=) */

loc_000AC0B9: ;
    /* nop */

loc_000AC0C0: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0x1A (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AC0F0; /* jge: greater or equal (signed >=) */

loc_000AC0C6: ;
    edx = MEM32(edi);
    eax = SX16(LO16(esi));
    ecx = esp + eax * 8 + 0x9C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF000000u);
    PUSH32(esp, ecx);
    eax = eax + eax * 2;
    ecx = esp + eax * 4 + 0x174;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000AC0E8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AC0E8: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(ebx) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AC0C0; /* jl: less (signed <) */

loc_000AC0EE: ;
    goto loc_000AC0F5;

loc_000AC0F0: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(ebx) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AC12C; /* jl: less (signed <) */

loc_000AC0F5: ;
    edx = SX16(LO16(ebx));
    ebp = 0x1A;
    ebp = ebp - edx;
    /* nop */

loc_000AC100: ;
    eax = SX16(LO16(esi));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AC12C; /* jge: greater or equal (signed >=) */

loc_000AC107: ;
    edx = MEM32(edi);
    ecx = esp + eax * 8 + 0x9C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF2727B9u);
    PUSH32(esp, ecx);
    eax = eax + eax * 2;
    ecx = esp + eax * 4 + 0x174;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000AC126u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AC126: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(ebx) (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AC100; /* jge: greater or equal (signed >=) */

loc_000AC12C: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0x1A (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AC167; /* jge: greater or equal (signed >=) */

loc_000AC132: ;
    eax = SX16(LO16(esi));
    edx = 0x1A;
    ebp = eax + eax * 2;
    edx = edx - esi;
    ebp = esp + ebp * 4 + 0x16C;
    ebx = esp + eax * 8 + 0x9C;
    esi = ZX16(LO16(edx));

loc_000AC150: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF000000u);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000AC15Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AC15E: ;
    ebx = ebx + 8;
    ebp = ebp + 0xC;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000AC150; /* jne: not equal / not zero */

loc_000AC167: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000AC16Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AC16E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x294;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000AC180
 * Original: 0x000AC180 - 0x000AC577 (1015 bytes, 293 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AC180(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AC180: ;
    esp = esp - 0x298;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x170;
    MEM32(esp + 0x20) = ecx;
    esp = esp - 0x20;
    edx = esp + 0xC0;
    edi = esp;
    MEM32(esp + 0x44) = edx;
    MEM32(esp + 0x48) = 0x3F000000;
    MEM32(esp + 0x4C) = 0x3F400000;
    MEM32(esp + 0x50) = 0x3F000000;
    MEM32(esp + 0x54) = 0x3F800000;
    MEM32(esp + 0x5C) = 0x41C00000;
    MEM32(esp + 0x58) = 0x41866666;
    ecx = 8;
    esi = esp + 0x40;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    PUSH32(esp, 0x000AC1E9u); RECOMP_ABI_CALL(0x000AAF80u, sub_000AAF80); /* call 0x000AAF80 */

loc_000AC1E9: ;
    PUSH32(esp, 0x000AC1EEu); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_000AC1EE: ;
    edx = MEM32(eax);
    ecx = esp + 0x44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x000AC1FDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AC1FD: ;
    PUSH32(esp, 0x000AC202u); RECOMP_ABI_CALL(0x00051100u, sub_00051100); /* call 0x00051100 */

loc_000AC202: ;
    edx = MEM32(eax);
    ecx = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x000AC21Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AC21B: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x24); /* fmul dword ptr [esp + 0x24] */
    eax = MEM32(esp + 0x2B0);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    edx = eax + eax * 8;
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    eax = MEM32(esp + 0x2B4);
    edi = eax + edx * 8;
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    esi = edi + 0x28;
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(0x3C6DE4); /* fmul dword ptr [0x3c6de4] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3D37D0); /* fmul dword ptr [0x3d37d0] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3D37D0); /* fmul dword ptr [0x3d37d0] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() + MEMF(esp + 0x44); /* fadd dword ptr [esp + 0x44] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(esp + 0x48); /* fadd dword ptr [esp + 0x48] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(esi); /* fsub dword ptr [esi] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() - MEMF(esi + 4); /* fsub dword ptr [esi + 4] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7B8C); /* fmul dword ptr [0x3c7b8c] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    ecx = esp + 0x44;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    PUSH32(esp, ecx);
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    edx = esp + 0x58;
    PUSH32(esp, edx);
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C6DE4); /* fmul dword ptr [0x3c6de4] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000AC2EEu); RECOMP_ABI_CALL(0x00120860u, sub_00120860); /* call 0x00120860 */

loc_000AC2EE: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x1C) = ecx;
    esp = esp + 8;
    ecx = esp + 0x60;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x000AC30Eu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_000AC30E: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x6C;
    PUSH32(esp, 0x000AC326u); RECOMP_ABI_CALL(0x002427F0u, sub_002427F0); /* call 0x002427F0 */

loc_000AC326: ;
    PUSH32(esp, esi);
    ecx = esp + 0x64;
    PUSH32(esp, 0x000AC330u); RECOMP_ABI_CALL(0x0023E460u, sub_0023E460); /* call 0x0023E460 */

loc_000AC330: ;
    PUSH32(esp, 0x1A);
    ecx = esp + 0x174;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    ecx = esp + 0x6C;
    PUSH32(esp, 0x000AC346u); RECOMP_ABI_CALL(0x0023F140u, sub_0023F140); /* call 0x0023F140 */

loc_000AC346: ;
    esi = MEM32(esp + 0x2AC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000AC356u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AC356: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 0x44); /* fsub dword ptr [edi + 0x44] */
    ebx = 0; /* xor self */
    fp_top() = fp_top() * MEMF(0x3C7084); /* fmul dword ptr [0x3c7084] */
    fp_top() = fp_top() * MEMF(0x3D37CC); /* fmul dword ptr [0x3d37cc] */
    PUSH32(esp, 0x000AC372u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000AC372: ;
    ebp = eax;
    _fa = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(ebp), LO16(ebp) (16-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000AC431; /* jle: less or equal (signed <=) */

loc_000AC37D: ;
    /* nop */

loc_000AC380: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0x17 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AC428; /* jge: greater or equal (signed >=) */

loc_000AC38A: ;
    edx = MEM32(esi);
    edi = SX16(LO16(ebx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF000000u);
    eax = esp + edi * 8 + 0xA4;
    ecx = edi + edi * 2;
    ecx = esp + ecx * 4 + 0x174;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000AC3B0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AC3B0: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF000000u);
    ecx = esp + edi * 8 + 0xAC;
    PUSH32(esp, ecx);
    edx = edx + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000AC3CCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AC3CC: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7F7F);
    ecx = esp + edi * 8 + 0xB4;
    PUSH32(esp, ecx);
    edx = edi + edi * 2 + 6;
    ecx = esp + edx * 4 + 0x178;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000AC3ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AC3EC: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7F7F);
    eax = esp + edi * 8 + 0xBC;
    PUSH32(esp, eax);
    ecx = edi + edi * 2 + 9;
    eax = esp + ecx * 4 + 0x178;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000AC40Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AC40C: ;
    ebx = ebx + 4;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), LO16(ebp) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AC380; /* jl: less (signed <) */

loc_000AC418: ;
    ecx = LO16(ebp);
    eax = 0x17;
    eax = eax - ecx;
    MEM32(esp + 0x50) = eax;
    goto loc_000AC445;

loc_000AC428: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), LO16(ebp) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AC4DB; /* jl: less (signed <) */

loc_000AC431: ;
    ecx = LO16(ebp);
    eax = 0x17;
    eax = eax - ecx;
    MEM32(esp + 0x50) = eax;
    goto loc_000AC445;

loc_000AC441: ;
    eax = MEM32(esp + 0x50);

loc_000AC445: ;
    edi = SX16(LO16(ebx));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AC4DB; /* jge: greater or equal (signed >=) */

loc_000AC450: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF2727BDu);
    eax = esp + edi * 8 + 0xA4;
    ecx = edi + edi * 2;
    ecx = esp + ecx * 4 + 0x174;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000AC473u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AC473: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF2727BDu);
    ecx = esp + edi * 8 + 0xAC;
    PUSH32(esp, ecx);
    edx = edx + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000AC48Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AC48F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7F7F);
    ecx = esp + edi * 8 + 0xB4;
    PUSH32(esp, ecx);
    edx = edi + edi * 2 + 6;
    ecx = esp + edx * 4 + 0x178;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000AC4AFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AC4AF: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7F7F);
    eax = esp + edi * 8 + 0xBC;
    PUSH32(esp, eax);
    ecx = edi + edi * 2 + 9;
    eax = esp + ecx * 4 + 0x178;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000AC4CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AC4CF: ;
    ebx = ebx + 4;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), LO16(ebp) (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AC441; /* jge: greater or equal (signed >=) */

loc_000AC4DB: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0x17 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AC563; /* jge: greater or equal (signed >=) */

loc_000AC4E5: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, 0x16);
    SET_LO16(ecx, LO16(ecx) - LO16(ebx));
    SET_LO16(ecx, LO16(ecx) >> 2);
    eax = SX16(LO16(ebx));
    ebp = eax + eax * 2;
    ebp = esp + ebp * 4 + 0x188;
    edi = esp + eax * 8 + 0xB0;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ZX16(LO16(ecx));
    /* nop */

loc_000AC510: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF000000u);
    eax = edi + -16;
    PUSH32(esp, eax);
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000AC524u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AC524: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF000000u);
    eax = edi + -8;
    PUSH32(esp, eax);
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000AC538u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AC538: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7F7F);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000AC546u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AC546: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7F7F7F);
    ecx = edi + 8;
    PUSH32(esp, ecx);
    edx = ebp + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000AC55Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AC55A: ;
    edi = edi + 0x20;
    ebp = ebp + 0x30;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000AC510; /* jne: not equal / not zero */

loc_000AC563: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000AC56Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AC56A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x298;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000AC580
 * Original: 0x000AC580 - 0x000AC66F (239 bytes, 67 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AC580(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AC580: ;
    esp = esp - 0x248;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x50;
    MEM32(esp + 0x10) = ecx;
    esp = esp - 0x20;
    edx = esp + 0x1A8;
    edi = esp;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = 0x3F400000;
    MEM32(esp + 0x3C) = 0x3F800000;
    MEM32(esp + 0x40) = 0x3F000000;
    MEM32(esp + 0x44) = 0x3F800000;
    MEM32(esp + 0x4C) = 0x41C00000;
    MEM32(esp + 0x48) = 0x41866666;
    ecx = 8;
    esi = esp + 0x30;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    PUSH32(esp, 0x000AC5E6u); RECOMP_ABI_CALL(0x000AAF80u, sub_000AAF80); /* call 0x000AAF80 */

loc_000AC5E6: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000AC5EFu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_000AC5EF: ;
    eax = MEM32(esp + 0x260);
    ecx = MEM32(esp + 0x264);
    eax = eax + eax * 8;
    edx = ecx + eax * 8 + 0x28;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x000AC60Eu); RECOMP_ABI_CALL(0x0023E460u, sub_0023E460); /* call 0x0023E460 */

loc_000AC60E: ;
    PUSH32(esp, 0x1A);
    eax = esp + 0x54;
    ecx = eax;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x000AC621u); RECOMP_ABI_CALL(0x0023F140u, sub_0023F140); /* call 0x0023F140 */

loc_000AC621: ;
    esi = MEM32(esp + 0x25C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000AC631u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AC631: ;
    ebx = esp + 0x50;
    edi = esp + 0x188;
    ebp = 0x1A;

loc_000AC641: ;
    ecx = MEM32(esp + 0x268);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000AC652u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AC652: ;
    edi = edi + 8;
    ebx = ebx + 0xC;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000AC641; /* jne: not equal / not zero */

loc_000AC65B: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000AC662u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AC662: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x248;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000AC670
 * Original: 0x000AC670 - 0x000AC910 (672 bytes, 175 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AC670(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AC670: ;
    esp = esp - 0x250;
    PUSH32(esp, ebx);
    eax = esp + 0x4C;
    PUSH32(esp, ebp);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x274);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    ebx = ecx;
    PUSH32(esp, esi);
    ecx = esp + 0x18C;
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = 0x3F400000;
    MEM32(esp + 0x24) = 0x3F800000;
    if (CMP_NE(_fa, _fb)) goto loc_000AC776; /* jne: not equal / not zero */

loc_000AC6AF: ;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x2C) = 0x3F000000;

loc_000AC6BF: ;
    MEM32(esp + 0x34) = 0x41C00000;
    MEM32(esp + 0x30) = 0x41866666;

loc_000AC6CF: ;
    esp = esp - 0x20;
    edi = esp;
    ecx = 8;
    esi = esp + 0x38;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = ebx;
    PUSH32(esp, 0x000AC6E6u); RECOMP_ABI_CALL(0x000AAF80u, sub_000AAF80); /* call 0x000AAF80 */

loc_000AC6E6: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x000AC6EFu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_000AC6EF: ;
    eax = MEM32(esp + 0x268);
    edx = eax + eax * 8;
    eax = MEM32(esp + 0x26C);
    ecx = eax + edx * 8 + 0x28;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x000AC70Eu); RECOMP_ABI_CALL(0x0023E460u, sub_0023E460); /* call 0x0023E460 */

loc_000AC70E: ;
    PUSH32(esp, 0x1A);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x000AC721u); RECOMP_ABI_CALL(0x0023F140u, sub_0023F140); /* call 0x0023F140 */

loc_000AC721: ;
    fp_push(MEMF(esp + 0x270)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebx + 0xA38)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebx + 0xa38] */
    edi = 0; /* xor self */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AC7E3; /* jne: not equal / not zero */

loc_000AC73B: ;
    fp_push(MEMF(esp + 0x270)); /* fld float */
    SET_LO16(ecx, MEM16(ebx + 0xA3C));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(edi) (16-bit) */
    fp_top() = fp_top() + MEMF(ebx + 0xA34); /* fadd dword ptr [ebx + 0xa34] */
    MEMF(ebx + 0xA38) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_000AC7A6; /* jne: not equal / not zero */

loc_000AC75A: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx + 0xA40));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebx + 0xA3E)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebx + 0xA3E) (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AC7A6; /* jge: greater or equal (signed >=) */

loc_000AC76C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ebx + 0xA40) = LO16(eax);
    goto loc_000AC7CC;

loc_000AC776: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    MEM32(esp + 0x2C) = 0x3F800000;
    MEM32(esp + 0x28) = 0x3F000000;
    if (CMP_NE(_fa, _fb)) goto loc_000AC6BF; /* jne: not equal / not zero */

loc_000AC791: ;
    MEM32(esp + 0x34) = 0x42100000;
    MEM32(esp + 0x30) = 0;
    goto loc_000AC6CF;

loc_000AC7A6: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0xD (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AC7C4; /* jne: not equal / not zero */

loc_000AC7AC: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx + 0xA40));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edi) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AC7C4; /* jl: less (signed <) */

loc_000AC7BA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(ebx + 0xA40) = LO16(eax);
    goto loc_000AC7CC;

loc_000AC7C4: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ebx + 0xA3C) = LO16(ecx);

loc_000AC7CC: ;
    _fa = (uint32_t)(MEM16(ebx + 0xA40)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0xA40), LO16(edi) (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AC7E3; /* jge: greater or equal (signed >=) */

loc_000AC7D5: ;
    MEM16(ebx + 0xA3C) = LO16(edi);
    MEM16(ebx + 0xA40) = LO16(edi);

loc_000AC7E3: ;
    esi = MEM32(esp + 0x264);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000AC7F2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AC7F2: ;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = edi;
    ebp = esp + 0x58;
    edi = esp + 0x190;
    goto loc_000AC810;

    /* nop */
    edi = edi;

loc_000AC810: ;
    SET_LO16(eax, MEM16(ebx + 0xA3C));
    _fa = (uint32_t)(MEM16(esp + 0x10)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x10), LO16(eax) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000AC845; /* jle: less or equal (signed <=) */

loc_000AC81E: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0xA40);
    edx = SX16(LO16(eax));
    eax = MEM32(esp + 0x14);
    ecx = ecx + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AC845; /* jge: greater or equal (signed >=) */

loc_000AC832: ;
    ecx = MEM32(esp + 0x278);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000AC843u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AC843: ;
    goto loc_000AC856;

loc_000AC845: ;
    eax = MEM32(esp + 0x274);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000AC856u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AC856: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 8;
    ebp = ebp + 0xC;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xD (16-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_000AC810; /* jle: less or equal (signed <=) */

loc_000AC874: ;
    ecx = esp + 0x100;
    edi = 0xE;
    MEM32(esp + 0x10) = ecx;
    ebp = esp + 0x200;
    MEM32(esp + 0x14) = 0xC;
    goto loc_000AC8A0;

    /* nop */
    /* nop */

loc_000AC8A0: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0xA3C);
    edx = 0x1A;
    edx = edx - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000AC8CD; /* jg: greater (signed >) */

loc_000AC8B2: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0xA40);
    edx = 0x1A;
    edx = edx - ecx;
    ecx = MEM32(esp + 0x278);
    edx = edx - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000AC8D4; /* jg: greater (signed >) */

loc_000AC8CD: ;
    ecx = MEM32(esp + 0x274);

loc_000AC8D4: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000AC8E2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AC8E2: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    ecx = ecx + 0xC;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 8;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_000AC8A0; /* jne: not equal / not zero */

loc_000AC8FC: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000AC903u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AC903: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x250;
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000AC910
 * Original: 0x000AC910 - 0x000ACA6B (347 bytes, 91 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AC910(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AC910: ;
    esp = esp - 0x248;
    fp_push(MEMF(esp + 0x258)); /* fld float */
    edx = ecx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0xA48)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0xa48] */
    PUSH32(esp, ebx);
    eax = esp + 0x44;
    PUSH32(esp, ebp);
    MEM32(esp + 8) = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    PUSH32(esp, esi);
    ebp = 0x1A;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    ecx = esp + 0x184;
    PUSH32(esp, edi);
    MEM16(esp + 0x18) = LO16(ebp);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x1C) = 0x3F000000;
    MEM32(esp + 0x20) = 0x3F400000;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0x3F000000;
    MEM32(esp + 0x2C) = 0x41500000;
    MEM32(esp + 0x34) = 0x40C00000;
    MEM32(esp + 0x30) = 0x41900000;
    if (TEST_NZ(_fa, _fb)) goto loc_000AC9C7; /* jne: not equal / not zero */

loc_000AC985: ;
    fp_push(MEMF(esp + 0x268)); /* fld float */
    fp_top() = fp_top() + MEMF(edx + 0xA44); /* fadd dword ptr [edx + 0xa44] */
    MEMF(edx + 0xA48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0xA4C)); /* fld float */
    fp_top() = fp_top() + MEMF(0x3C6DE0); /* fadd dword ptr [0x3c6de0] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C97B8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c97b8] */
    MEMF(edx + 0xA4C) = (float)fp_top(); /* fst */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AC9C5; /* jne: not equal / not zero */

loc_000AC9B7: ;
    fp_top() = fp_top() - MEMF(0x3C97B8); /* fsub dword ptr [0x3c97b8] */
    MEMF(edx + 0xA4C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_000AC9C7;

loc_000AC9C5: ;
    fp_pop(); /* fstp st(0) */

loc_000AC9C7: ;
    eax = MEM32(edx + 0xA4C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x41F00000);
    esp = esp - 0x28;
    edi = esp;
    ecx = 0xA;
    esi = esp + 0x40;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = edx;
    PUSH32(esp, 0x000AC9EAu); RECOMP_ABI_CALL(0x000AB120u, sub_000AB120); /* call 0x000AB120 */

loc_000AC9EA: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000AC9F3u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_000AC9F3: ;
    eax = MEM32(esp + 0x260);
    edx = MEM32(esp + 0x264);
    ecx = eax + eax * 8;
    eax = edx + ecx * 8 + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x000ACA12u); RECOMP_ABI_CALL(0x0023E460u, sub_0023E460); /* call 0x0023E460 */

loc_000ACA12: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x000ACA24u); RECOMP_ABI_CALL(0x0023F140u, sub_0023F140); /* call 0x0023F140 */

loc_000ACA24: ;
    esi = MEM32(esp + 0x25C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000ACA34u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ACA34: ;
    ebx = esp + 0x50;
    edi = esp + 0x188;
    /* nop */

loc_000ACA40: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF34A2D5u);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000ACA4Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ACA4E: ;
    edi = edi + 8;
    ebx = ebx + 0xC;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000ACA40; /* jne: not equal / not zero */

loc_000ACA57: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000ACA5Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ACA5E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x248;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000ACA70
 * Original: 0x000ACA70 - 0x000ACACF (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ACA70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ACA70: ;
    edx = ecx;
    eax = MEM32(edx + 0x98C);
    eax = MEM32(edx + eax * 4 + 0x904);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x994;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x98C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    MEM32(edx + 0x98C) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000ACAB9; /* jl: less (signed <) */

loc_000ACAAF: ;
    MEM32(edx + 0x98C) = 0;

loc_000ACAB9: ;
    MEM32(edx + 0x990) = MEM32(edx + 0x990) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x990)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x998);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x998) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000ACAD0
 * Original: 0x000ACAD0 - 0x000ACB7E (174 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 9 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000ACAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000ACAD0: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xA24);
    esi = esi & edx;
    _fa = (uint32_t)(MEM32(eax + esi * 4 + 0x9A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + esi * 4 + 0x9A4), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ACB7A; /* jne: not equal / not zero */

loc_000ACAEC: ;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + esi * 4 + 0x99C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + esi * 4 + 0x99C), edi (32-bit) */
    SET_LO8(ecx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000ACB7A; /* je: equal / zero */

loc_000ACB0B: ;
    ecx = MEM32(eax + 0xA24);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    esi = MEM32(esp + 0xC);
    ecx = ecx & edx;
    ecx = ecx + ecx * 8;
    MEM32(eax + ecx * 8 + 0xC) = esi;
    esi = MEM32(esp + 0x10);
    MEM32(eax + ecx * 8 + 0x10) = esi;
    esi = MEM32(esp + 0x14);
    ecx = eax + ecx * 8 + 0xC;
    MEM32(ecx + 8) = esi;
    ecx = MEM32(eax + 0xA24);
    esi = MEM32(esp + 0x1C);
    ecx = ecx & edx;
    ecx = ecx + ecx * 8;
    MEMF(eax + ecx * 8 + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax + 0xA24);
    fp_push(MEMF(esp + 0x28)); /* fld float */
    ecx = ecx & edx;
    ecx = ecx + ecx * 8;
    ecx = eax + ecx * 8 + 0x1C;
    MEM32(ecx) = esi;
    esi = MEM32(esp + 0x20);
    MEM32(ecx + 4) = esi;
    esi = MEM32(esp + 0x24);
    MEM32(ecx + 8) = esi;
    ecx = MEM32(eax + 0xA24);
    ecx = ecx & edx;
    edx = ecx + ecx * 8;
    MEMF(eax + edx * 8 + 0x28) = (float)fp_top(); fp_pop(); /* fstp */

loc_000ACB7A: ;
    POP32(esp, esi);
    esp += 40; return; /* ret 36 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000ACB80
 * Original: 0x000ACB80 - 0x000ACBCE (78 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ACB80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ACB80: ;
    edx = ecx;
    eax = MEM32(edx + 0xA24);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = eax & esi;
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x9A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4 + 0x9A4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ACBCA; /* jne: not equal / not zero */

loc_000ACB98: ;
    ecx = eax;
    PUSH32(esp, edi);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x99C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + eax * 4 + 0x99C), edi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000ACBCA; /* je: equal / zero */

loc_000ACBB7: ;
    eax = MEM32(edx + 0xA24);
    SET_LO8(ecx, MEM8(esp + 0xC));
    eax = eax & esi;
    eax = eax + eax * 8;
    MEM8(edx + eax * 8 + 0x2C) = LO8(ecx);

loc_000ACBCA: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000ACBD0
 * Original: 0x000ACBD0 - 0x000ACC1E (78 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000ACBD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000ACBD0: ;
    edx = ecx;
    eax = MEM32(edx + 0xA24);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = eax & esi;
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x9A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4 + 0x9A4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ACC1A; /* jne: not equal / not zero */

loc_000ACBE8: ;
    ecx = eax;
    PUSH32(esp, edi);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x99C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + eax * 4 + 0x99C), edi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000ACC1A; /* je: equal / zero */

loc_000ACC07: ;
    eax = MEM32(edx + 0xA24);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = eax & esi;
    eax = eax + eax * 8;
    MEMF(edx + eax * 8 + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */

loc_000ACC1A: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000ACC20
 * Original: 0x000ACC20 - 0x000ACC7E (94 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ACC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ACC20: ;
    edx = ecx;
    eax = MEM32(edx + 0xA24);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = eax & esi;
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x9A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4 + 0x9A4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ACC7A; /* jne: not equal / not zero */

loc_000ACC38: ;
    ecx = eax;
    PUSH32(esp, edi);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x99C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + eax * 4 + 0x99C), edi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000ACC7A; /* je: equal / zero */

loc_000ACC57: ;
    eax = MEM32(edx + 0xA24);
    ecx = MEM32(esp + 0xC);
    eax = eax & esi;
    eax = eax + eax * 8;
    eax = edx + eax * 8 + 0x3C;
    edx = MEM32(esp + 0x10);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;

loc_000ACC7A: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000ACC80
 * Original: 0x000ACC80 - 0x000ACCDE (94 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ACC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ACC80: ;
    edx = ecx;
    eax = MEM32(edx + 0xA24);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = eax & esi;
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x9A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4 + 0x9A4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ACCDA; /* jne: not equal / not zero */

loc_000ACC98: ;
    ecx = eax;
    PUSH32(esp, edi);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x99C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + eax * 4 + 0x99C), edi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000ACCDA; /* je: equal / zero */

loc_000ACCB7: ;
    eax = MEM32(edx + 0xA24);
    ecx = MEM32(esp + 0xC);
    eax = eax & esi;
    eax = eax + eax * 8;
    eax = edx + eax * 8 + 0x30;
    edx = MEM32(esp + 0x10);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;

loc_000ACCDA: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000ACCE0
 * Original: 0x000ACCE0 - 0x000ACD31 (81 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ACCE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ACCE0: ;
    edx = ecx;
    eax = MEM32(edx + 0xA24);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = eax & esi;
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x9A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4 + 0x9A4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ACD2D; /* jne: not equal / not zero */

loc_000ACCF8: ;
    ecx = eax;
    PUSH32(esp, edi);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x99C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + eax * 4 + 0x99C), edi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000ACD2D; /* je: equal / zero */

loc_000ACD17: ;
    eax = MEM32(edx + 0xA24);
    ecx = MEM32(esp + 0xC);
    eax = eax & esi;
    eax = eax + eax * 8;
    eax = edx + eax * 8 + 8;
    MEM32(eax + 0x40) = MEM32(eax + 0x40) | ecx;

loc_000ACD2D: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000ACD40
 * Original: 0x000ACD40 - 0x000ACD98 (88 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ACD40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ACD40: ;
    edx = ecx;
    eax = MEM32(edx + 0xA24);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = eax & esi;
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x9A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4 + 0x9A4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ACD94; /* jne: not equal / not zero */

loc_000ACD58: ;
    ecx = eax;
    PUSH32(esp, edi);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x99C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + eax * 4 + 0x99C), edi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000ACD94; /* je: equal / zero */

loc_000ACD77: ;
    eax = MEM32(edx + 0xA24);
    ecx = MEM32(esp + 0xC);
    eax = eax & esi;
    eax = eax + eax * 8;
    eax = edx + eax * 8 + 8;
    edx = MEM32(eax + 0x40);
    ecx = ~ecx;
    edx = edx & ecx;
    MEM32(eax + 0x40) = edx;

loc_000ACD94: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000ACDA0
 * Original: 0x000ACDA0 - 0x000ACDF5 (85 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ACDA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ACDA0: ;
    edx = ecx;
    eax = MEM32(edx + 0xA24);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = eax & esi;
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x9A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4 + 0x9A4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ACDF1; /* jne: not equal / not zero */

loc_000ACDB8: ;
    ecx = eax;
    PUSH32(esp, edi);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x99C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + eax * 4 + 0x99C), edi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000ACDF1; /* je: equal / zero */

loc_000ACDD7: ;
    eax = MEM32(edx + 0xA24);
    eax = eax & esi;
    eax = eax + eax * 8;
    ecx = ZX8(MEM8(edx + eax * 8 + 0x48));
    eax = edx + eax * 8 + 8;
    ecx = ecx & 1;
    MEM32(eax + 0x40) = ecx;

loc_000ACDF1: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000ACE00
 * Original: 0x000ACE00 - 0x000AD1EC (1004 bytes, 290 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ACE00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ACE00: ;
    esp = esp - 0x68;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebx + 4;
    PUSH32(esp, 0x000ACE16u); RECOMP_ABI_CALL(0x000AABC0u, sub_000AABC0); /* call 0x000AABC0 */

loc_000ACE16: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    edi = MEM32(eax + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_000AD1E2; /* je: equal / zero */

loc_000ACE24: ;
    ebp = MEM32(esp + 0x7C);
    goto loc_000ACE30;

    /* nop */

loc_000ACE30: ;
    ecx = esi + esi * 8;
    eax = edi + ecx * 8;
    SET_LO8(ecx, MEM8(eax + 0x24));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000AD168; /* je: equal / zero */

loc_000ACE45: ;
    _fa = (uint32_t)(MEM8(eax + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x40), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000ACE5E; /* je: equal / zero */

loc_000ACE4B: ;
    esp = esp - 8;
    eax = esp;
    PUSH32(esp, ebp);
    ecx = ebx + -4;
    MEM32(eax) = esi;
    MEM32(eax + 4) = edi;
    PUSH32(esp, 0x000ACE5Eu); RECOMP_ABI_CALL(0x000ABC40u, sub_000ABC40); /* call 0x000ABC40 */

loc_000ACE5E: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 0x40);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000ACE91; /* je: equal / zero */

loc_000ACE69: ;
    PUSH32(esp, 0xFFAA6A47u);
    esp = esp - 8;
    eax = esp;
    PUSH32(esp, ebp);
    ecx = ebx + -4;
    MEM32(esp + 0x8C) = 0xFFAA6A47u;
    MEM32(eax) = esi;
    MEM32(eax + 4) = edi;
    PUSH32(esp, 0x000ACE8Cu); RECOMP_ABI_CALL(0x000AC580u, sub_000AC580); /* call 0x000AC580 */

loc_000ACE8C: ;
    goto loc_000ACFE4;

loc_000ACE91: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000ACEDC; /* je: equal / zero */

loc_000ACE95: ;
    PUSH32(esp, 0x000ACE9Au); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000ACE9A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x000ACEA6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ACEA6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000ACEACu); RECOMP_ABI_CALL(0x0001CCD0u, sub_0001CCD0); /* call 0x0001CCD0 */

loc_000ACEAC: ;
    MEM32(esp + 0x80) = eax;
    MEM32(esp + 0x1C) = 0x3F59D9DA;
    MEM32(esp + 0x20) = 0x3F800000;
    MEM32(esp + 0x24) = 0x3F53D3D4;
    MEM32(esp + 0x28) = 0x3F800000;
    eax = esp + 0x1C;
    goto loc_000ACFB5;

loc_000ACEDC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000ACF27; /* je: equal / zero */

loc_000ACEE0: ;
    PUSH32(esp, 0x000ACEE5u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000ACEE5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xF);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x000ACEF1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ACEF1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000ACEF7u); RECOMP_ABI_CALL(0x0001CCD0u, sub_0001CCD0); /* call 0x0001CCD0 */

loc_000ACEF7: ;
    MEM32(esp + 0x80) = eax;
    MEM32(esp + 0x2C) = 0x3F59D9DA;
    MEM32(esp + 0x30) = 0x3F800000;
    MEM32(esp + 0x34) = 0x3F53D3D4;
    MEM32(esp + 0x38) = 0x3F800000;
    eax = esp + 0x2C;
    goto loc_000ACFB5;

loc_000ACF27: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000ACF6F; /* je: equal / zero */

loc_000ACF2B: ;
    PUSH32(esp, 0x000ACF30u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000ACF30: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x000ACF3Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ACF3C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000ACF42u); RECOMP_ABI_CALL(0x0001CCD0u, sub_0001CCD0); /* call 0x0001CCD0 */

loc_000ACF42: ;
    MEM32(esp + 0x80) = eax;
    MEM32(esp + 0x3C) = 0x3F59D9DA;
    MEM32(esp + 0x40) = 0x3F800000;
    MEM32(esp + 0x44) = 0x3F53D3D4;
    MEM32(esp + 0x48) = 0x3F800000;
    eax = esp + 0x3C;
    goto loc_000ACFB5;

loc_000ACF6F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000ACFE4; /* je: equal / zero */

loc_000ACF73: ;
    PUSH32(esp, 0x000ACF78u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000ACF78: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x000ACF84u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ACF84: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000ACF8Au); RECOMP_ABI_CALL(0x0001CCD0u, sub_0001CCD0); /* call 0x0001CCD0 */

loc_000ACF8A: ;
    MEM32(esp + 0x80) = eax;
    MEM32(esp + 0x4C) = 0x3F59D9DA;
    MEM32(esp + 0x50) = 0x3F800000;
    MEM32(esp + 0x54) = 0x3F53D3D4;
    MEM32(esp + 0x58) = 0x3F800000;
    eax = esp + 0x4C;

loc_000ACFB5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000ACFBBu); RECOMP_ABI_CALL(0x0001CCD0u, sub_0001CCD0); /* call 0x0001CCD0 */

loc_000ACFBB: ;
    ecx = MEM32(esp + 0x84);
    edx = MEM32(esp + 0x88);
    esp = esp + 8;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    esp = esp - 8;
    eax = esp;
    MEM32(eax + 4) = edi;
    ecx = ebx + -4;
    PUSH32(esp, ebp);
    MEM32(eax) = esi;
    PUSH32(esp, 0x000ACFE4u); RECOMP_ABI_CALL(0x000AC670u, sub_000AC670); /* call 0x000AC670 */

loc_000ACFE4: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 0x40);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AD004; /* je: equal / zero */

loc_000ACFEF: ;
    esp = esp - 8;
    eax = esp;
    PUSH32(esp, ebp);
    ecx = ebx + -4;
    MEM32(eax) = esi;
    MEM32(eax + 4) = edi;
    PUSH32(esp, 0x000AD002u); RECOMP_ABI_CALL(0x000ABEC0u, sub_000ABEC0); /* call 0x000ABEC0 */

loc_000AD002: ;
    goto loc_000AD01B;

loc_000AD004: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_000AD01B; /* jns: not sign (positive) */

loc_000AD008: ;
    esp = esp - 8;
    eax = esp;
    PUSH32(esp, ebp);
    ecx = ebx + -4;
    MEM32(eax) = esi;
    MEM32(eax + 4) = edi;
    PUSH32(esp, 0x000AD01Bu); RECOMP_ABI_CALL(0x000AC180u, sub_000AC180); /* call 0x000AC180 */

loc_000AD01B: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 0x40);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AD095; /* je: equal / zero */

loc_000AD027: ;
    PUSH32(esp, 0x000AD02Cu); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000AD02C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000AD033u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AD033: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000AD05D; /* jle: less or equal (signed <=) */

loc_000AD038: ;
    eax = MEM32(esp + 0x7C);
    ecx = MEM32(esp + 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);

loc_000AD045: ;
    esp = esp - 8;
    eax = esp;
    MEM32(eax) = esi;
    PUSH32(esp, ebp);
    ecx = ebx + -4;
    MEM32(eax + 4) = edi;
    PUSH32(esp, 0x000AD058u); RECOMP_ABI_CALL(0x000AB420u, sub_000AB420); /* call 0x000AB420 */

loc_000AD058: ;
    goto loc_000AD103;

loc_000AD05D: ;
    edx = esp + 0x58;
    PUSH32(esp, edx);
    MEM32(esp + 0x5C) = 0x3F800000;
    MEM32(esp + 0x60) = 0;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0x3F800000;
    PUSH32(esp, 0x000AD087u); RECOMP_ABI_CALL(0x0001CCD0u, sub_0001CCD0); /* call 0x0001CCD0 */

loc_000AD087: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x84);
    PUSH32(esp, eax);
    goto loc_000AD045;

loc_000AD095: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AD103; /* je: equal / zero */

loc_000AD09A: ;
    PUSH32(esp, 0x000AD09Fu); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000AD09F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000AD0A6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AD0A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000AD0BA; /* jle: less or equal (signed <=) */

loc_000AD0AB: ;
    eax = MEM32(esp + 0x7C);
    ecx = MEM32(esp + 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    goto loc_000AD0F0;

loc_000AD0BA: ;
    edx = esp + 0x68;
    PUSH32(esp, edx);
    MEM32(esp + 0x6C) = 0x3F038384;
    MEM32(esp + 0x70) = 0x3F800000;
    MEM32(esp + 0x74) = 0x3ED6D6D7;
    MEM32(esp + 0x78) = 0x3F400000;
    PUSH32(esp, 0x000AD0E4u); RECOMP_ABI_CALL(0x0001CCD0u, sub_0001CCD0); /* call 0x0001CCD0 */

loc_000AD0E4: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x84);
    PUSH32(esp, eax);

loc_000AD0F0: ;
    esp = esp - 8;
    eax = esp;
    MEM32(eax + 4) = edi;
    ecx = ebx + -4;
    PUSH32(esp, ebp);
    MEM32(eax) = esi;
    PUSH32(esp, 0x000AD103u); RECOMP_ABI_CALL(0x000AB710u, sub_000AB710); /* call 0x000AB710 */

loc_000AD103: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 0x40);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AD12A; /* je: equal / zero */

loc_000AD10F: ;
    edx = MEM32(esp + 0x80);
    PUSH32(esp, edx);
    esp = esp - 8;
    eax = esp;
    PUSH32(esp, ebp);
    ecx = ebx + -4;
    MEM32(eax) = esi;
    MEM32(eax + 4) = edi;
    PUSH32(esp, 0x000AD12Au); RECOMP_ABI_CALL(0x000AC910u, sub_000AC910); /* call 0x000AC910 */

loc_000AD12A: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x40);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AD168; /* je: equal / zero */

loc_000AD136: ;
    ecx = MEM32(esp + 0x80);
    PUSH32(esp, 0x200);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFF545454u);
    PUSH32(esp, ecx);
    esp = esp - 8;
    eax = esp;
    PUSH32(esp, ebp);
    ecx = ebx + -4;
    MEM32(esp + 0x98) = 0xFF545454u;
    MEM32(eax) = esi;
    MEM32(eax + 4) = edi;
    PUSH32(esp, 0x000AD168u); RECOMP_ABI_CALL(0x000AC670u, sub_000AC670); /* call 0x000AC670 */

loc_000AD168: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AD1D5; /* jge: greater or equal (signed >=) */

loc_000AD16E: ;
    edx = esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = MEM32(edi + edx * 4 + 0x994);
    ecx = esi;
    ecx = ecx & 0x1F;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AD1A0; /* jne: not equal / not zero */

loc_000AD185: ;
    esi = esi & 0xFFFFFFE0u;
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AD1D5; /* jge: greater or equal (signed >=) */

loc_000AD190: ;
    eax = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4 + 0x994);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AD185; /* je: equal / zero */

loc_000AD1A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AD1AD; /* jne: not equal / not zero */

loc_000AD1A7: ;
    esi = esi + 0x10;
    eax = eax >> 0x10;

loc_000AD1AD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AD1B7; /* jne: not equal / not zero */

loc_000AD1B1: ;
    esi = esi + 8;
    eax = eax >> 8;

loc_000AD1B7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AD1C1; /* jne: not equal / not zero */

loc_000AD1BB: ;
    esi = esi + 4;
    eax = eax >> 4;

loc_000AD1C1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AD1CC; /* jne: not equal / not zero */

loc_000AD1C5: ;
    eax = eax >> 1;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AD1C5; /* je: equal / zero */

loc_000AD1CC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000ACE30; /* jl: less (signed <) */

loc_000AD1D5: ;
    esi = 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000ACE30; /* jne: not equal / not zero */

loc_000AD1E2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x68;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000AD1F0
 * Original: 0x000AD1F0 - 0x000AD24D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD1F0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x988) = esi;
    MEM32(ecx + 0x98C) = esi;
    MEM32(ecx + 0x990) = esi;
    edx = 0; /* xor self */
    goto loc_000AD210;

    /* nop */

loc_000AD210: ;
    eax = MEM32(ecx + 0x988);
    edi = MEM32(ecx + 0x990);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEM32(ecx + 0x988) = eax;
    MEM32(ecx + 0x990) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000AD23C; /* jl: less (signed <) */

loc_000AD22F: ;
    MEM32(ecx + 0x988) = esi;
    eax = 0x1F;
    goto loc_000AD23D;

loc_000AD23C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000AD23D: ;
    MEM32(ecx + eax * 4 + 0x904) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AD210; /* jl: less (signed <) */

loc_000AD24A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AD250
 * Original: 0x000AD250 - 0x000AD277 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD250(void)
{

loc_000AD250: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x904;
    PUSH32(esp, 0x000AD25Eu); RECOMP_ABI_CALL(0x00022FE0u, sub_00022FE0); /* call 0x00022FE0 */

loc_000AD25E: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x994) = eax;
    ecx = esi;
    MEM32(esi + 0x998) = eax;
    PUSH32(esp, 0x000AD273u); RECOMP_ABI_CALL(0x000AD1F0u, sub_000AD1F0); /* call 0x000AD1F0 */

loc_000AD273: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AD280
 * Original: 0x000AD280 - 0x000AD2F2 (114 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD280: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x994;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x988);
    edi = MEM32(eax + 0x990);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    MEM32(eax + 0x988) = ecx;
    MEM32(eax + 0x990) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000AD2D8; /* jl: less (signed <) */

loc_000AD2C7: ;
    MEM32(eax + 0x988) = 0;
    ecx = 0x1F;
    goto loc_000AD2D9;

loc_000AD2D8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000AD2D9: ;
    MEM32(eax + ecx * 4 + 0x904) = esi;
    ecx = MEM32(eax + 0x998);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x998) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AD300
 * Original: 0x000AD300 - 0x000AD425 (293 bytes, 79 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000AD300: ;
    _fa = (uint32_t)(MEM32(ecx + 0x9A0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x9A0), 0x20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AD30F; /* jne: not equal / not zero */

loc_000AD309: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 8; return; /* ret 4 */

loc_000AD30F: ;
    PUSH32(esp, esi);
    esi = ecx + 8;
    ecx = esi;
    PUSH32(esp, 0x000AD31Au); RECOMP_ABI_CALL(0x000ACA70u, sub_000ACA70); /* call 0x000ACA70 */

loc_000AD31A: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(esi + eax * 4 + 0x99C);
    ecx = MEM32(esi + 0xA1C);
    ecx = ecx & eax;
    ecx = ecx + ecx * 8;
    edx = esi + ecx * 8 + 4;
    ecx = 0; /* xor self */
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    edx = MEM32(esi + 0xA1C);
    edx = edx & eax;
    edx = edx + edx * 8;
    MEM32(esi + edx * 8 + 0x10) = ecx;
    edx = MEM32(esi + 0xA1C);
    edx = edx & eax;
    edx = edx + edx * 8;
    MEMF(esi + edx * 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 0xA1C);
    edx = edx & eax;
    edx = edx + edx * 8;
    MEM32(esi + edx * 8 + 0x14) = ecx;
    MEM32(esi + edx * 8 + 0x18) = ecx;
    MEM32(esi + edx * 8 + 0x1C) = 0x3F800000;
    edx = esi + edx * 8 + 0x14;
    edx = MEM32(esi + 0xA1C);
    edx = edx & eax;
    edx = edx + edx * 8;
    MEM32(esi + edx * 8 + 0x20) = 0x3F800000;
    edx = MEM32(esi + 0xA1C);
    edx = edx & eax;
    edx = edx + edx * 8;
    MEM8(esi + edx * 8 + 0x24) = LO8(ecx);
    edx = MEM32(esi + 0xA1C);
    edx = edx & eax;
    edx = edx + edx * 8;
    MEM32(esi + edx * 8 + 0x28) = ecx;
    MEM32(esi + edx * 8 + 0x2C) = ecx;
    MEM32(esi + edx * 8 + 0x30) = ecx;
    edx = esi + edx * 8 + 0x28;
    edx = MEM32(esi + 0xA1C);
    edx = edx & eax;
    edx = edx + edx * 8;
    MEM32(esi + edx * 8 + 0x34) = ecx;
    MEM32(esi + edx * 8 + 0x38) = ecx;
    MEM32(esi + edx * 8 + 0x3C) = ecx;
    edx = esi + edx * 8 + 0x34;
    edx = MEM32(esi + 0xA1C);
    edx = edx & eax;
    edx = edx + edx * 8;
    MEM32(esi + edx * 8 + 0x40) = ecx;
    edx = MEM32(esi + 0xA1C);
    edx = edx & eax;
    edx = edx + edx * 8;
    MEM32(esi + edx * 8 + 0x44) = ecx;
    ecx = MEM32(esi + 0xA1C);
    ecx = ecx & eax;
    ecx = ecx + ecx * 8;
    edx = ZX8(MEM8(esi + ecx * 8 + 0x40));
    ecx = esi + ecx * 8;
    edx = edx & 1;
    MEM32(ecx + 0x40) = edx;
    ecx = MEM32(esi + 0xA1C);
    ecx = ecx & eax;
    ecx = ecx + ecx * 8;
    edx = MEM32(esi + ecx * 8 + 0x40);
    ecx = esi + ecx * 8;
    edx = edx | 1;
    MEM32(ecx + 0x40) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000AD430
 * Original: 0x000AD430 - 0x000AD492 (98 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD430: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000AD439u); RECOMP_ABI_CALL(0x000AD250u, sub_000AD250); /* call 0x000AD250 */

loc_000AD439: ;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(esi + 0xA1C) = eax;
    MEM32(esi + 0xA20) = eax;
    edx = 0x1F;
    edi = 0; /* xor self */

loc_000AD450: ;
    ecx = ecx + ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    ecx = ecx | 1;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AD450; /* jne: not equal / not zero */

loc_000AD45C: ;
    MEM32(esi + 0xA1C) = ecx;
    MEM32(esi + 0xA20) = edi;
    edx = esi + 0x99C;
    edi = edi;

loc_000AD470: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0xA20);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AD470; /* jl: less (signed <) */

loc_000AD48D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AD4A0
 * Original: 0x000AD4A0 - 0x000AD57B (219 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD4A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD4A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    MEM32(esi + 0x998) = eax;
    PUSH32(esp, edi);
    MEM32(esi + 0x994) = eax;
    PUSH32(esp, 0x000AD4B8u); RECOMP_ABI_CALL(0x000AD1F0u, sub_000AD1F0); /* call 0x000AD1F0 */

loc_000AD4B8: ;
    edx = 2;
    eax = esi + 0x9A0;

loc_000AD4C3: ;
    ecx = MEM32(esi + 0xA20);
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(eax + -4) = MEM32(eax + -4) + edi;
    if (((int32_t)MEM32(eax + -4) >= 0)) goto loc_000AD4ED; /* jns: not sign (positive) */

loc_000AD4D5: ;
    edi = edx + -2;
    MEM32(eax + -4) = edi;
    ecx = MEM32(esi + 0xA20);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ebx = ebx | edi;
    MEM32(eax + -4) = ebx;

loc_000AD4ED: ;
    ecx = MEM32(esi + 0xA20);
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(eax) = MEM32(eax) + edi;
    if (((int32_t)MEM32(eax) >= 0)) goto loc_000AD514; /* jns: not sign (positive) */

loc_000AD4FE: ;
    edi = edx + -1;
    MEM32(eax) = edi;
    ecx = MEM32(esi + 0xA20);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ebx = ebx | edi;
    MEM32(eax) = ebx;

loc_000AD514: ;
    ecx = MEM32(esi + 0xA20);
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(eax + 4) = MEM32(eax + 4) + edi;
    if (((int32_t)MEM32(eax + 4) >= 0)) goto loc_000AD53B; /* jns: not sign (positive) */

loc_000AD526: ;
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 0xA20);
    edi = 1;
    edi = edi << LO8(ecx);
    edi = edi | edx;
    MEM32(eax + 4) = edi;

loc_000AD53B: ;
    ecx = MEM32(esi + 0xA20);
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(eax + 8) = MEM32(eax + 8) + edi;
    if (((int32_t)MEM32(eax + 8) >= 0)) goto loc_000AD565; /* jns: not sign (positive) */

loc_000AD54D: ;
    edi = edx + 1;
    MEM32(eax + 8) = edi;
    ecx = MEM32(esi + 0xA20);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ebx = ebx | edi;
    MEM32(eax + 8) = ebx;

loc_000AD565: ;
    edx = edx + 4;
    ecx = edx + -2;
    eax = eax + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AD4C3; /* jl: less (signed <) */

loc_000AD577: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000AD580
 * Original: 0x000AD580 - 0x000AD5CE (78 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD580(void)
{
    int _flags = 0; /* fallback flag var */

loc_000AD580: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0xA1C);
    esi = esi & MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000AD596u); RECOMP_ABI_CALL(0x000AD280u, sub_000AD280); /* call 0x000AD280 */

loc_000AD596: ;
    ecx = MEM32(edi + 0xA20);
    eax = 1;
    eax = eax << LO8(ecx);
    MEM32(edi + esi * 4 + 0x99C) = MEM32(edi + esi * 4 + 0x99C) + eax;
    if (((int32_t)MEM32(edi + esi * 4 + 0x99C) >= 0)) goto loc_000AD5C9; /* jns: not sign (positive) */

loc_000AD5AC: ;
    MEM32(edi + esi * 4 + 0x99C) = esi;
    ecx = MEM32(edi + 0xA20);
    edx = 1;
    edx = edx << LO8(ecx);
    edx = edx | esi;
    MEM32(edi + esi * 4 + 0x99C) = edx;

loc_000AD5C9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AD5D0
 * Original: 0x000AD5D0 - 0x000AD5FF (47 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD5D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AD5D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xA2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = esi + 0xA2C;
    if (TEST_Z(_fa, _fb)) goto loc_000AD5EC; /* je: equal / zero */

loc_000AD5E3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AD5E9u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_000AD5E9: ;
    esp = esp + 4;

loc_000AD5EC: ;
    MEM32(esi + 0xA30) = 0;
    ecx = esi + 8;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000AD4A0(); return; /* tail jmp 0x000AD4A0 */

}

/**
 * sub_000AD600
 * Original: 0x000AD600 - 0x000AD644 (68 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD600: ;
    eax = MEM32(ecx + 0xA24);
    edx = ecx + 8;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = eax & esi;
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x99C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4 + 0x99C), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AD640; /* jne: not equal / not zero */

loc_000AD619: ;
    ecx = eax;
    PUSH32(esp, edi);
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(edx + eax * 4 + 0x994)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx + eax * 4 + 0x994), edi (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000AD640; /* je: equal / zero */

loc_000AD638: ;
    PUSH32(esp, esi);
    ecx = edx;
    PUSH32(esp, 0x000AD640u); RECOMP_ABI_CALL(0x000AD580u, sub_000AD580); /* call 0x000AD580 */

loc_000AD640: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AD650
 * Original: 0x000AD650 - 0x000AD66E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD650: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000AD658u); RECOMP_ABI_CALL(0x000AD670u, sub_000AD670); /* call 0x000AD670 */

loc_000AD658: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AD668; /* je: equal / zero */

loc_000AD65F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AD665u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000AD665: ;
    esp = esp + 4;

loc_000AD668: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AD670
 * Original: 0x000AD670 - 0x000AD677 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD670(void)
{

loc_000AD670: ;
    MEM32(ecx) = 0x3D375C;
    esp += 4; return; /* ret */

}

/**
 * sub_000AD680
 * Original: 0x000AD680 - 0x000AD6F9 (121 bytes, 33 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD680: ;
    eax = MEM32(0x4D0C3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AD6F8; /* jne: not equal / not zero */

loc_000AD689: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4B);
    PUSH32(esp, 3);
    PUSH32(esp, 0xA80);
    PUSH32(esp, 0x000AD698u); RECOMP_ABI_CALL(0x00123490u, sub_00123490); /* call 0x00123490 */

loc_000AD698: ;
    esi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AD6E5; /* je: equal / zero */

loc_000AD6A1: ;
    MEM32(esi + 4) = 0x3C70A4;
    ecx = esi + 8;
    MEM32(esi) = 0x3D37E4;
    MEM32(esi + 4) = 0x3D37D8;
    PUSH32(esp, 0x000AD6BDu); RECOMP_ABI_CALL(0x000AD430u, sub_000AD430); /* call 0x000AD430 */

loc_000AD6BD: ;
    MEM32(esi + 0xA2C) = 0;
    ecx = esi;
    MEM32(esi + 0xA30) = 0;
    eax = MEM32(ecx);
    MEM32(0x4D0C3C) = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000AD6DEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AD6DE: ;
    eax = MEM32(0x4D0C3C);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000AD6E5: ;
    ecx = 0; /* xor self */
    eax = MEM32(ecx);
    MEM32(0x4D0C3C) = ecx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000AD6F2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AD6F2: ;
    eax = MEM32(0x4D0C3C);
    POP32(esp, esi);

loc_000AD6F8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000AD700
 * Original: 0x000AD700 - 0x000AD72C (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD700: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AD72B; /* je: equal / zero */

loc_000AD70A: ;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM8(eax + 0xD) = LO8(ecx);
    MEM16(eax + 0xE) = LO16(ecx);
    MEM16(eax + 0x10) = LO16(ecx);
    MEM16(eax + 0x12) = LO16(ecx);
    eax = eax + 8;
    edx = eax;
    MEM32(edx) = ecx;
    MEM8(edx + 4) = LO8(ecx);
    MEM8(eax) = 0xFF;

loc_000AD72B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000AD730
 * Original: 0x000AD730 - 0x000AD779 (73 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD730: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AD778; /* je: equal / zero */

loc_000AD738: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    PUSH32(esp, esi);
    edx = ecx + 8;
    PUSH32(esp, edi);
    edi = MEM32(edx);
    esi = eax + 8;
    MEM32(esi) = edi;
    SET_LO8(edx, MEM8(edx + 4));
    MEM8(esi + 4) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0xD));
    MEM8(eax + 0xD) = LO8(edx);
    SET_LO16(edx, MEM16(ecx + 0xE));
    MEM16(eax + 0xE) = LO16(edx);
    SET_LO16(edx, MEM16(ecx + 0x10));
    MEM16(eax + 0x10) = LO16(edx);
    SET_LO16(ecx, MEM16(ecx + 0x12));
    POP32(esp, edi);
    MEM16(eax + 0x12) = LO16(ecx);
    POP32(esp, esi);

loc_000AD778: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000AD780
 * Original: 0x000AD780 - 0x000AD7CE (78 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD780(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD780: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1798);
    eax = edi + edi * 4;
    ecx = esi + eax * 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000AD796u); RECOMP_ABI_CALL(0x000AD700u, sub_000AD700); /* call 0x000AD700 */

loc_000AD796: ;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = esi + edx * 4 + 0x1770;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    esp = esp + 4;
    POP32(esp, edi);
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    eax = MEM32(esi + 0x1798);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1798) = eax;
    eax = eax + eax * 4;
    eax = esi + eax * 4 + -20;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AD7D0
 * Original: 0x000AD7D0 - 0x000AD7E7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD7D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AD7D0: ;
    _fa = (uint32_t)(MEM32(ecx + 0x179C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x179C), 0x12C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AD7DF; /* jne: not equal / not zero */

loc_000AD7DC: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_000AD7DF: ;
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_000AD780(); return; /* tail jmp 0x000AD780 */

}

/**
 * sub_000AD7F0
 * Original: 0x000AD7F0 - 0x000AD854 (100 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD7F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD7F0: ;
    edx = ecx;
    ecx = MEM32(edx + 0x1798);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx + ecx * 4;
    eax = edx + eax * 4;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM16(eax + 0xE) = LO16(ebx);
    MEM16(eax + 0x10) = LO16(ebx);
    MEM16(eax + 0x12) = LO16(ebx);
    MEM8(eax + 0xA) = LO8(ebx);
    MEM8(eax + 9) = LO8(ebx);
    MEM8(eax + 0xD) = LO8(ebx);
    MEM8(eax + 8) = 0xFF;
    PUSH32(esp, esi);
    eax = ecx;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ecx = MEM32(edx + eax * 4 + 0x1770);
    eax = edx + eax * 4 + 0x1770;
    esi = ~esi;
    ecx = ecx & esi;
    MEM32(eax) = ecx;
    eax = MEM32(edx + 0x1798);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(edx + 0x1798) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000AD860
 * Original: 0x000AD860 - 0x000AD881 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD860(void)
{

loc_000AD860: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 4;
    ecx = edi;
    PUSH32(esp, 0x000AD86Eu); RECOMP_ABI_CALL(0x0006CEE0u, sub_0006CEE0); /* call 0x0006CEE0 */

loc_000AD86E: ;
    MEM32(edi + 0x1798) = 0;
    POP32(esp, edi);
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AD890
 * Original: 0x000AD890 - 0x000AD91D (141 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AD890: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1798);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AD912; /* je: equal / zero */

loc_000AD8A2: ;
    ecx = edx + edx * 4;
    eax = esi + ecx * 4;
    ecx = 0; /* xor self */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM16(eax + 0xE) = LO16(ecx);
    MEM16(eax + 0x10) = LO16(ecx);
    MEM16(eax + 0x12) = LO16(ecx);
    MEM8(eax + 0xA) = LO8(ecx);
    MEM8(eax + 9) = LO8(ecx);
    MEM8(eax + 0xD) = LO8(ecx);
    PUSH32(esp, ebx);
    ecx = edx;
    ecx = ecx & 0x1F;
    PUSH32(esp, edi);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    edx = edx << 2;
    MEM8(eax + 8) = 0xFF;
    ebx = MEM32(edx + esi + 0x1770);
    ecx = edi;
    ecx = ~ecx;
    ebx = ebx & ecx;
    MEM32(edx + esi + 0x1770) = ebx;
    ecx = MEM32(esi + 0x1798);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | edi;
    MEM32(edx + esi + 0x1770) = ebx;
    edx = ecx + ecx * 4;
    ecx = esi + edx * 4;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AD90Du); RECOMP_ABI_CALL(0x000AD730u, sub_000AD730); /* call 0x000AD730 */

loc_000AD90D: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000AD912: ;
    ecx = esi;
    PUSH32(esp, 0x000AD919u); RECOMP_ABI_CALL(0x000AD7F0u, sub_000AD7F0); /* call 0x000AD7F0 */

loc_000AD919: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AD920
 * Original: 0x000AD920 - 0x000ADAB9 (409 bytes, 139 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AD920(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AD920: ;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x179C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 8) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_000ADAB1; /* je: equal / zero */

loc_000AD939: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_000AD94A; /* je: equal / zero */

loc_000AD942: ;
    ebx = 0; /* xor self */
    MEM32(esp + 0x30) = esi;
    goto loc_000AD960;

loc_000AD94A: ;
    ecx = MEM32(edi);
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ecx = ecx + 0xA;
    MEM32(edi) = ecx;
    MEM32(esp + 0x30) = 0xA;
    ebx = edx;

loc_000AD960: ;
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000ADAB0; /* jle: less or equal (signed <=) */

loc_000AD974: ;
    PUSH32(esp, ebp);

loc_000AD975: ;
    eax = ebx + ebx * 4;
    ebp = edi + eax * 4 + 4;
    ecx = ebp;
    PUSH32(esp, 0x000AD983u); RECOMP_ABI_CALL(0x0006C460u, sub_0006C460); /* call 0x0006C460 */

loc_000AD983: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000ADA8D; /* je: equal / zero */

loc_000AD98B: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x000AD997u); RECOMP_ABI_CALL(0x0006C3D0u, sub_0006C3D0); /* call 0x0006C3D0 */

loc_000AD997: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x000AD9A3u); RECOMP_ABI_CALL(0x0006C410u, sub_0006C410); /* call 0x0006C410 */

loc_000AD9A3: ;
    esi = MEM32(ebp + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AD9B1; /* jne: not equal / not zero */

loc_000AD9AA: ;
    edi = 0x3C806C;
    goto loc_000AD9C7;

loc_000AD9B1: ;
    PUSH32(esp, 0x000AD9B6u); RECOMP_ABI_CALL(0x00199C70u, sub_00199C70); /* call 0x00199C70 */

loc_000AD9B6: ;
    esi = esi & 0xFFFFFF;
    ecx = MEM32(eax + esi * 4 + 4);
    edi = ecx + eax + 0x2008;

loc_000AD9C7: ;
    esi = MEM32(ebp);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AD9D5; /* jne: not equal / not zero */

loc_000AD9CE: ;
    eax = 0x3C806C;
    goto loc_000AD9EB;

loc_000AD9D5: ;
    PUSH32(esp, 0x000AD9DAu); RECOMP_ABI_CALL(0x00199C70u, sub_00199C70); /* call 0x00199C70 */

loc_000AD9DA: ;
    esi = esi & 0xFFFFFF;
    edx = MEM32(eax + esi * 4 + 4);
    eax = edx + eax + 0x2008;

loc_000AD9EB: ;
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AD9FEu); RECOMP_ABI_CALL(0x00068060u, sub_00068060); /* call 0x00068060 */

loc_000AD9FE: ;
    esi = eax;
    esp = esp + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000ADA2F; /* je: equal / zero */

loc_000ADA07: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000ADA0Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ADA0D: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000ADA2F; /* je: equal / zero */

loc_000ADA2B: ;
    edi = esi;
    goto loc_000ADA31;

loc_000ADA2F: ;
    edi = 0; /* xor self */

loc_000ADA31: ;
    SET_LO8(eax, MEM8(0x485845));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000ADA4E; /* je: equal / zero */

loc_000ADA3A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000ADA4E; /* je: equal / zero */

loc_000ADA3E: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x000ADA4Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ADA4E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000ADA89; /* je: equal / zero */

loc_000ADA52: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000ADA60; /* je: equal / zero */

loc_000ADA56: ;
    SET_LO8(eax, MEM8(edi + 0x334));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (((int8_t)((_fa) & (_fb)) >= 0)) goto loc_000ADA89; /* jns: not sign (positive) */

loc_000ADA60: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x000ADA69u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ADA69: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000ADA71u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ADA71: ;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ecx = esi + 4;
    PUSH32(esp, 0x000ADA7Eu); RECOMP_ABI_CALL(0x000AD890u, sub_000AD890); /* call 0x000AD890 */

loc_000ADA7E: ;
    eax = MEM32(esi + 0x179C);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000ADAAF; /* je: equal / zero */

loc_000ADA89: ;
    edi = MEM32(esp + 0x10);

loc_000ADA8D: ;
    eax = MEM32(edi + 0x179C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000ADA9A; /* jl: less (signed <) */

loc_000ADA98: ;
    ebx = 0; /* xor self */

loc_000ADA9A: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x34);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000AD975; /* jl: less (signed <) */

loc_000ADAAF: ;
    POP32(esp, ebp);

loc_000ADAB0: ;
    POP32(esp, ebx);

loc_000ADAB1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000ADAC0
 * Original: 0x000ADAC0 - 0x000ADAC8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADAC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ADAC0: ;
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_0006CEE0(); return; /* tail jmp 0x0006CEE0 */

}

/**
 * sub_000ADAD0
 * Original: 0x000ADAD0 - 0x000ADB3E (110 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ADAD0: ;
    SET_LO8(ecx, MEM8(0x4D23E0));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000ADB38; /* jne: not equal / not zero */

loc_000ADADF: ;
    edx = MEM32(0x4D23E0);
    edx = edx | eax;
    eax = 0; /* xor self */
    MEM32(0x4D23B4) = eax;
    MEM32(0x4D23B8) = eax;
    MEM32(0x4D23BC) = eax;
    MEM32(0x4D23C0) = eax;
    MEM32(0x4D23C4) = eax;
    MEM32(0x4D23C8) = eax;
    MEM32(0x4D23CC) = eax;
    MEM32(0x4D23D0) = eax;
    MEM32(0x4D23D4) = eax;
    PUSH32(esp, 0x35A070);
    MEM32(0x4D23E0) = edx;
    MEM32(0x4D23D8) = eax;
    MEM32(0x4D23DC) = eax;
    MEM32(0x4D0C40) = eax;
    PUSH32(esp, 0x000ADB35u); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_000ADB35: ;
    esp = esp + 4;

loc_000ADB38: ;
    eax = 0x4D0C40;
    esp += 4; return; /* ret */

}

/**
 * sub_000ADB40
 * Original: 0x000ADB40 - 0x000ADB9C (92 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADB40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ADB40: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000ADB4Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ADB4F: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000ADB5Au); RECOMP_ABI_CALL(0x00066B20u, sub_00066B20); /* call 0x00066B20 */

loc_000ADB5A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000ADB95; /* je: equal / zero */

loc_000ADB61: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x000ADB85u); RECOMP_ABI_CALL(0x000ADBA0u, sub_000ADBA0); /* call 0x000ADBA0 */

loc_000ADB85: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x000ADB8Eu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_000ADB8E: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_000ADB95: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000ADBA0
 * Original: 0x000ADBA0 - 0x000ADBD7 (55 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADBA0(void)
{

loc_000ADBA0: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    esi = ecx;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esi;
    MEM32(esp + 0x2C) = esp;
    PUSH32(esp, 0x000ADBCBu); RECOMP_ABI_CALL(0x00028DC0u, sub_00028DC0); /* call 0x00028DC0 */

loc_000ADBCB: ;
    MEM32(esi) = 0x3D385C;
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000ADBE0
 * Original: 0x000ADBE0 - 0x000ADBE6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADBE0(void)
{

loc_000ADBE0: ;
    eax = 0x4D23F0;
    esp += 4; return; /* ret */

}

/**
 * sub_000ADBF0
 * Original: 0x000ADBF0 - 0x000ADBF6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADBF0(void)
{

loc_000ADBF0: ;
    eax = 0x3D3838;
    esp += 4; return; /* ret */

}

/**
 * sub_000ADC00
 * Original: 0x000ADC00 - 0x000ADC1E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ADC00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000ADC08u); RECOMP_ABI_CALL(0x000ADC20u, sub_000ADC20); /* call 0x000ADC20 */

loc_000ADC08: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000ADC18; /* je: equal / zero */

loc_000ADC0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000ADC15u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000ADC15: ;
    esp = esp + 4;

loc_000ADC18: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000ADC20
 * Original: 0x000ADC20 - 0x000ADC2B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADC20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ADC20: ;
    MEM32(ecx) = 0x3D385C;
    g_seh_ebp = ebp; sub_00026B60(); return; /* tail jmp 0x00026B60 */

}

/**
 * sub_000ADC30
 * Original: 0x000ADC30 - 0x000ADC36 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADC30(void)
{

loc_000ADC30: ;
    eax = 0x124;
    esp += 4; return; /* ret */

}

/**
 * sub_000ADC40
 * Original: 0x000ADC40 - 0x000ADD4D (269 bytes, 84 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000ADC40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x114);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_000ADC8E; /* jle: less or equal (signed <=) */

loc_000ADC50: ;
    _fa = (uint32_t)(MEM8(esi + 0x119)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x119), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000ADC69; /* je: equal / zero */

loc_000ADC59: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000ADC62u); RECOMP_ABI_CALL(0x001233C0u, xml1_guest_random_integer_range); /* call 0x001233C0 */

loc_000ADC62: ;
    esp = esp + 8;
    edi = eax;
    goto loc_000ADC90;

loc_000ADC69: ;
    SET_LO8(ecx, MEM8(esi + 0x118));
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 0x118) = LO8(ecx);
    ecx = SX8(LO8(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000ADC85; /* jl: less (signed <) */

loc_000ADC7E: ;
    MEM8(esi + 0x118) = 0;

loc_000ADC85: ;
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x118);
    goto loc_000ADC90;

loc_000ADC8E: ;
    edi = 0; /* xor self */

loc_000ADC90: ;
    fp_push(MEMF(esi + 0x11C)); /* fld float */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000ADCF7; /* jnp: not parity */

loc_000ADCA5: ;
    fp_push(MEMF(esi + 0x120)); /* fld float */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000ADCF7; /* jnp: not parity */

loc_000ADCBA: ;
    fp_push(MEMF(esi + 0x11C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3D3970); /* fmul dword ptr [0x3d3970] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000ADCCFu); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000ADCCF: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x11C);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x120);
    PUSH32(esp, ecx);
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + edi * 4 + 0xD0);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x000ADCF5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ADCF5: ;
    goto loc_000ADD0B;

loc_000ADCF7: ;
    PUSH32(esp, 0x000ADCFCu); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000ADCFC: ;
    ecx = MEM32(esi + edi * 4 + 0xD0);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x000ADD0Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ADD0B: ;
    fp_push(MEMF(esi + 0xA8)); /* fld float */
    fp_push(MEMF(0x3C6DE4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000ADD45; /* jnp: not parity */

loc_000ADD20: ;
    edx = MEM32(esi + 0xA8);
    eax = MEM32(esi + 0xAC);
    edi = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000ADD35u); RECOMP_ABI_CALL(0x001233A0u, sub_001233A0); /* call 0x001233A0 */

loc_000ADD35: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0xC0); PUSH32(esp, 0x000ADD45u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ADD45: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000ADD50
 * Original: 0x000ADD50 - 0x000ADE87 (311 bytes, 94 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADD50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000ADD50: ;
    esp = esp - 0x204;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    MEM32(esp + 0x210) = eax;
    eax = MEM32(ebx);
    esi = ecx;
    PUSH32(esp, 0x3CAAA4);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000ADD7Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ADD7C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000ADDF9; /* je: equal / zero */

loc_000ADD80: ;
    PUSH32(esp, 0x200);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000ADD90u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000ADD90: ;
    edx = esp + 0x18;
    PUSH32(esp, 0x3CB044);
    PUSH32(esp, edx);
    MEM8(esp + 0x21F) = 0;
    PUSH32(esp, 0x000ADDA7u); RECOMP_ABI_CALL(0x00341609u, sub_00341609); /* call 0x00341609 */

loc_000ADDA7: ;
    edi = eax;
    esp = esp + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000ADDF9; /* je: equal / zero */

loc_000ADDB0: ;
    _fa = (uint32_t)(MEM32(esi + 0x114)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x114), 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000ADDF9; /* je: equal / zero */

loc_000ADDB9: ;
    PUSH32(esp, 0x000ADDBEu); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000ADDBE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000ADDCAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ADDCA: ;
    ecx = MEM32(esi + 0x114);
    MEM32(esi + ecx * 4 + 0xD0) = eax;
    eax = MEM32(esi + 0x114);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3CB044);
    PUSH32(esp, 0);
    MEM32(esi + 0x114) = eax;
    PUSH32(esp, 0x000ADDF0u); RECOMP_ABI_CALL(0x00341609u, sub_00341609); /* call 0x00341609 */

loc_000ADDF0: ;
    edi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000ADDB0; /* jne: not equal / not zero */

loc_000ADDF9: ;
    edx = MEM32(ebx);
    eax = esi + 0x11C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C85D8);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000ADE0Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ADE0C: ;
    edx = MEM32(ebx);
    eax = esi + 0x120;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8560);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000ADE1Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ADE1F: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D3974);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000ADE2Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ADE2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000ADE4A; /* je: equal / zero */

loc_000ADE31: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C8424);
    PUSH32(esp, 0x000ADE3Cu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000ADE3C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000ADE4A; /* jne: not equal / not zero */

loc_000ADE43: ;
    MEM8(esi + 0x119) = MEM8(esi + 0x119) | 1;

loc_000ADE4A: ;
    eax = MEM32(esi + 0xA8);
    ecx = MEM32(esi + 0xAC);
    edi = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000ADE5Fu); RECOMP_ABI_CALL(0x001233A0u, sub_001233A0); /* call 0x001233A0 */

loc_000ADE5F: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0xC0); PUSH32(esp, 0x000ADE6Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ADE6F: ;
    ecx = MEM32(esp + 0x20C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    PUSH32(esp, 0x000ADE7Eu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000ADE7E: ;
    esp = esp + 0x204;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000ADE90
 * Original: 0x000ADE90 - 0x000ADEEC (92 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ADE90: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    MEM32(esp + 4) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000ADE9Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000ADE9F: ;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000ADEAAu); RECOMP_ABI_CALL(0x00066B20u, sub_00066B20); /* call 0x00066B20 */

loc_000ADEAA: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000ADEE5; /* je: equal / zero */

loc_000ADEB1: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    ecx = eax;
    PUSH32(esp, 0x000ADED5u); RECOMP_ABI_CALL(0x000ADEF0u, sub_000ADEF0); /* call 0x000ADEF0 */

loc_000ADED5: ;
    esi = eax;
    ecx = esi;
    PUSH32(esp, 0x000ADEDEu); RECOMP_ABI_CALL(0x00066E90u, sub_00066E90); /* call 0x00066E90 */

loc_000ADEDE: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

loc_000ADEE5: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000ADEF0
 * Original: 0x000ADEF0 - 0x000ADF93 (163 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ADEF0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FE56);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    esi = ecx;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = esi;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x40) = esp;
    PUSH32(esp, 0x000ADF36u); RECOMP_ABI_CALL(0x00028DC0u, sub_00028DC0); /* call 0x00028DC0 */

loc_000ADF36: ;
    eax = 0; /* xor self */
    MEM32(esi) = 0x3D3984;
    MEM32(esp + 0x14) = eax;
    MEM32(esi + 0x114) = eax;
    SET_LO8(edx, MEM8(esi + 0x119));
    SET_LO8(edx, LO8(edx) & 0xFE);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM8(esp + 0x14) = 1;
    MEM8(esi + 0x118) = LO8(eax);
    MEM8(esi + 0x119) = LO8(edx);
    MEM32(esi + 0x11C) = eax;
    MEM32(esi + 0x120) = 0x3F800000;
    if (CMP_EQ(_fa, _fb)) goto loc_000ADF7E; /* je: equal / zero */

loc_000ADF76: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000ADF7Eu); RECOMP_ABI_CALL(0x000ADD50u, sub_000ADD50); /* call 0x000ADD50 */

loc_000ADF7E: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_000ADFA0
 * Original: 0x000ADFA0 - 0x000ADFA6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADFA0(void)
{

loc_000ADFA0: ;
    eax = 0x4D2424;
    esp += 4; return; /* ret */

}

/**
 * sub_000ADFB0
 * Original: 0x000ADFB0 - 0x000ADFB6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADFB0(void)
{

loc_000ADFB0: ;
    eax = 0x3D3950;
    esp += 4; return; /* ret */

}

/**
 * sub_000ADFC0
 * Original: 0x000ADFC0 - 0x000ADFDE (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ADFC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000ADFC8u); RECOMP_ABI_CALL(0x000ADFE0u, sub_000ADFE0); /* call 0x000ADFE0 */

loc_000ADFC8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000ADFD8; /* je: equal / zero */

loc_000ADFCF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000ADFD5u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000ADFD5: ;
    esp = esp + 4;

loc_000ADFD8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000ADFE0
 * Original: 0x000ADFE0 - 0x000ADFEB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADFE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000ADFE0: ;
    MEM32(ecx) = 0x3D3984;
    g_seh_ebp = ebp; sub_00026B60(); return; /* tail jmp 0x00026B60 */

}

/**
 * sub_000ADFF0
 * Original: 0x000ADFF0 - 0x000AE078 (136 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000ADFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000ADFF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000AE036; /* jne: not equal / not zero */

loc_000ADFFC: ;
    eax = ZX8(MEM8(esi + 0x11));
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000AE00Cu); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AE00C: ;
    ecx = eax;
    PUSH32(esp, 0x000AE013u); RECOMP_ABI_CALL(0x00047360u, sub_00047360); /* call 0x00047360 */

loc_000AE013: ;
    edx = ZX8(MEM8(esi + 0x11));
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x10));
    eax = ZX8(LO8(eax));
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x000AE02Au); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AE02A: ;
    ecx = eax;
    PUSH32(esp, 0x000AE031u); RECOMP_ABI_CALL(0x000475B0u, sub_000475B0); /* call 0x000475B0 */

loc_000AE031: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000AE036: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AE071; /* jne: not equal / not zero */

loc_000AE03A: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    edi = esi + 0x11;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x000AE04Au); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AE04A: ;
    ecx = eax;
    PUSH32(esp, 0x000AE051u); RECOMP_ABI_CALL(0x000482B0u, xml1_guest_talent_bonus_rank_get); /* call 0x000482B0 */

loc_000AE051: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x10));
    eax = ZX8(LO8(eax));
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x000AE064u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AE064: ;
    ecx = eax;
    PUSH32(esp, 0x000AE06Bu); RECOMP_ABI_CALL(0x000482F0u, xml1_guest_talent_bonus_rank_set); /* call 0x000482F0 */

loc_000AE06B: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000AE071: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AE080
 * Original: 0x000AE080 - 0x000AE0D5 (85 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AE080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AE080: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000AE089u); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_000AE089: ;
    edi = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000AE095u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AE095: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AE0CE; /* je: equal / zero */

loc_000AE099: ;
    MEM32(esi + 4) = 0;
    SET_LO8(ecx, MEM8(edi));
    MEM8(esi + 0x11) = LO8(ecx);
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AE0C4; /* je: equal / zero */

loc_000AE0AD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000AE0B3u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AE0B3: ;
    ecx = eax;
    PUSH32(esp, 0x000AE0BAu); RECOMP_ABI_CALL(0x00048140u, xml1_guest_talent_rank_limit_get); /* call 0x00048140 */

loc_000AE0BA: ;
    MEM8(esi + 0x10) = LO8(eax);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000AE0C4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000AE0CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AE0CB: ;
    MEM8(esi + 0x10) = LO8(eax);

loc_000AE0CE: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000AE0E0
 * Original: 0x000AE0E0 - 0x000AE0EB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AE0E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AE0E0: ;
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_000AE0F0
 * Original: 0x000AE0F0 - 0x000AE117 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AE0F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AE0F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AE113; /* je: equal / zero */

loc_000AE0FA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000AE100u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AE100: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000AE109u); RECOMP_ABI_CALL(0x00123550u, xml1_guest_save_buffer_release); /* call 0x00123550 */

loc_000AE109: ;
    esp = esp + 4;
    MEM32(esi + 4) = 0;

loc_000AE113: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AE120
 * Original: 0x000AE120 - 0x000AE203 (227 bytes, 65 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AE120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AE120: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FE81);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x28;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AE1EF; /* jne: not equal / not zero */

loc_000AE146: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x000AE14Fu); RECOMP_ABI_CALL(0x00123530u, sub_00123530); /* call 0x00123530 */

loc_000AE14F: ;
    esp = esp + 8;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x34) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_000AE16F; /* je: equal / zero */

loc_000AE166: ;
    ecx = eax;
    PUSH32(esp, 0x000AE16Du); RECOMP_ABI_CALL(0x00127350u, sub_00127350); /* call 0x00127350 */

loc_000AE16D: ;
    goto loc_000AE171;

loc_000AE16F: ;
    eax = 0; /* xor self */

loc_000AE171: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x40);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x38) = 0xFFFFFFFFu;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 2);
    if (TEST_S(_fas, _fbs)) goto loc_000AE1B4; /* jl: less (signed <) */

loc_000AE187: ;
    eax = MEM32(0x44F1C4);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x000AE196u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000AE196: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    MEM32(esp + 0x44) = 1;
    PUSH32(esp, 0x000AE1AEu); RECOMP_ABI_CALL(0x00127510u, sub_00127510); /* call 0x00127510 */

loc_000AE1AE: ;
    ecx = esp + 0x10;
    goto loc_000AE1E1;

loc_000AE1B4: ;
    edx = MEM32(0x44F1C4);
    PUSH32(esp, edx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x000AE1C4u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000AE1C4: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    MEM32(esp + 0x44) = 2;
    PUSH32(esp, 0x000AE1DDu); RECOMP_ABI_CALL(0x00127510u, sub_00127510); /* call 0x00127510 */

loc_000AE1DD: ;
    ecx = esp + 0x20;

loc_000AE1E1: ;
    MEM32(esp + 0x38) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000AE1EEu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000AE1EE: ;
    POP32(esp, edi);

loc_000AE1EF: ;
    ecx = MEM32(esp + 0x2C);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x34;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AE210
 * Original: 0x000AE210 - 0x000AE3A9 (409 bytes, 128 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AE210(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AE210: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0x34FEB0);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_000AE2D2; /* je: equal / zero */

loc_000AE239: ;
    eax = MEM32(esp + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AE2D2; /* je: equal / zero */

loc_000AE245: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AE2D2; /* je: equal / zero */

loc_000AE24E: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D3A9C);
    ecx = esp + 0x18;
    PUSH32(esp, 0x000AE25Eu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000AE25E: ;
    ecx = MEM32(esi + 4);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEM32(esp + 0x4C) = 0;
    PUSH32(esp, 0x000AE273u); RECOMP_ABI_CALL(0x00125FE0u, sub_00125FE0); /* call 0x00125FE0 */

loc_000AE273: ;
    ebp = ebp | 0xFFFFFFFFu;
    ecx = esp + 0x10;
    esi = eax;
    MEM32(esp + 0x48) = ebp;
    PUSH32(esp, 0x000AE285u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000AE285: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AE2D2; /* je: equal / zero */

loc_000AE289: ;
    edx = MEM32(esi + 8);
    ebx = 0; /* xor self */
    edi = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx & esi;
    if ((ebx == 0)) goto loc_000AE2D2; /* je: equal / zero */

loc_000AE29D: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D3A90);
    ecx = esp + 0x18;
    PUSH32(esp, 0x000AE2ADu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000AE2AD: ;
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x50) = edi;
    PUSH32(esp, 0x000AE2BFu); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000AE2BF: ;
    ecx = esp + 0x10;
    esi = eax;
    MEM32(esp + 0x48) = ebp;
    PUSH32(esp, 0x000AE2CEu); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000AE2CE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AE2F0; /* jne: not equal / not zero */

loc_000AE2D2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x30);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x3C;
    esp += 8; return; /* ret 4 */

loc_000AE2E9: ;
    edi = 1;
    edi = edi;

loc_000AE2F0: ;
    eax = MEM32(esi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & esi;
    edi = edx;
    if ((edx == 0)) goto loc_000AE351; /* je: equal / zero */

loc_000AE301: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3C8690);
    ecx = esp + 0x28;
    PUSH32(esp, 0x000AE311u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000AE311: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x4C) = 2;
    PUSH32(esp, 0x000AE325u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000AE325: ;
    ecx = esp + 0x20;
    edi = eax;
    MEM32(esp + 0x48) = ebp;
    PUSH32(esp, 0x000AE334u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000AE334: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AE351; /* je: equal / zero */

loc_000AE338: ;
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000AE344u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000AE344: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AE34Au); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000AE34A: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AE392; /* je: equal / zero */

loc_000AE351: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D3A90);
    ecx = esp + 0x38;
    PUSH32(esp, 0x000AE361u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000AE361: ;
    PUSH32(esp, esi);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx = ebx;
    MEM32(esp + 0x50) = 3;
    PUSH32(esp, 0x000AE376u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000AE376: ;
    ecx = esp + 0x30;
    esi = eax;
    MEM32(esp + 0x48) = ebp;
    PUSH32(esp, 0x000AE385u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000AE385: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AE2E9; /* jne: not equal / not zero */

loc_000AE38D: ;
    goto loc_000AE2D2;

loc_000AE392: ;
    ecx = MEM32(esp + 0x40);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x3C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AE3B0
 * Original: 0x000AE3B0 - 0x000AE52E (382 bytes, 122 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AE3B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AE3B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FED8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x34;
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000AE4FE; /* je: equal / zero */

loc_000AE3DD: ;
    eax = MEM32(esp + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AE4FE; /* je: equal / zero */

loc_000AE3E9: ;
    ebp = MEM32(eax + 8);
    ecx = 0; /* xor self */
    ebx = 1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    esi = ecx;
    MEM32(esp + 0x58) = esi;
    if ((ecx == 0)) goto loc_000AE4FE; /* je: equal / zero */

loc_000AE407: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB6D8);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x000AE417u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000AE417: ;
    PUSH32(esp, edi);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x54) = edi;
    PUSH32(esp, 0x000AE428u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000AE428: ;
    ebp = ebp | 0xFFFFFFFFu;
    ecx = esp + 0x14;
    esi = eax;
    MEM32(esp + 0x4C) = ebp;
    PUSH32(esp, 0x000AE43Au); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000AE43A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AE4FE; /* je: equal / zero */

loc_000AE442: ;
    edi = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & esi;
    edi = eax;
    if ((eax == 0)) goto loc_000AE4A5; /* je: equal / zero */

loc_000AE454: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D3AA8);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x000AE464u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000AE464: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x50) = 1;
    PUSH32(esp, 0x000AE478u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000AE478: ;
    ecx = esp + 0x24;
    edi = eax;
    MEM32(esp + 0x4C) = ebp;
    PUSH32(esp, 0x000AE487u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000AE487: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AE4A4; /* je: equal / zero */

loc_000AE48B: ;
    ecx = edi;
    PUSH32(esp, 0x000AE492u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000AE492: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AE498u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000AE498: ;
    esp = esp + 4;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), LO16(eax) (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000AE4A5; /* jg: greater (signed >) */

loc_000AE4A0: ;
    ebx = eax;
    goto loc_000AE4A5;

loc_000AE4A4: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000AE4A5: ;
    ecx = MEM32(esp + 0x54);
    eax = SX16(LO16(ebx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AE517; /* je: equal / zero */

loc_000AE4B0: ;
    SET_LO8(edx, MEM8(esp + 0x5C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AE4C0; /* jne: not equal / not zero */

loc_000AE4B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AE4C0; /* jge: greater or equal (signed >=) */

loc_000AE4BC: ;
    MEM32(esp + 0x10) = esi;

loc_000AE4C0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB6D8);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x000AE4D0u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000AE4D0: ;
    ecx = MEM32(esp + 0x58);
    PUSH32(esp, esi);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    MEM32(esp + 0x54) = 2;
    PUSH32(esp, 0x000AE4E7u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000AE4E7: ;
    ecx = esp + 0x34;
    esi = eax;
    MEM32(esp + 0x4C) = ebp;
    PUSH32(esp, 0x000AE4F6u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000AE4F6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AE442; /* jne: not equal / not zero */

loc_000AE4FE: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x34);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x40;
    esp += 16; return; /* ret 12 */

loc_000AE517: ;
    ecx = MEM32(esp + 0x44);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x40;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000AE530
 * Original: 0x000AE530 - 0x000AE537 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AE530(void)
{

loc_000AE530: ;
    MEM32(ecx) = 0x3D2C70;
    esp += 4; return; /* ret */

}

/**
 * sub_000AE540
 * Original: 0x000AE540 - 0x000AE5EE (174 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AE540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AE540: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FEF8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edi = ecx;
    PUSH32(esp, 0x000AE566u); RECOMP_ABI_CALL(0x000AE210u, sub_000AE210); /* call 0x000AE210 */

loc_000AE566: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AE5D9; /* je: equal / zero */

loc_000AE56A: ;
    edx = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    esi = ecx;
    if ((ecx == 0)) goto loc_000AE5D9; /* je: equal / zero */

loc_000AE57C: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D3AB0);
    ecx = esp + 0x10;
    PUSH32(esp, 0x000AE58Cu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000AE58C: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x000AE5A0u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000AE5A0: ;
    ecx = esp + 8;
    esi = eax;
    MEM32(esp + 0x20) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000AE5B3u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000AE5B3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AE5D9; /* je: equal / zero */

loc_000AE5B7: ;
    ecx = esi;
    PUSH32(esp, 0x000AE5BEu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000AE5BE: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000AE5C6u); RECOMP_ABI_CALL(0x000AE210u, sub_000AE210); /* call 0x000AE210 */

loc_000AE5C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x10);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

loc_000AE5D9: ;
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AE5F0
 * Original: 0x000AE5F0 - 0x000AE6F5 (261 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AE5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AE5F0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x7D0);
    PUSH32(esp, edi);
    edi = ebx + 0x7D0;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AE621; /* jne: not equal / not zero */

loc_000AE606: ;
    ecx = ecx & 0xFFFFFFE0u;
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x64 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AE6E5; /* jge: greater or equal (signed >=) */

loc_000AE615: ;
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = MEM32(edi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AE606; /* je: equal / zero */

loc_000AE621: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AE62E; /* jne: not equal / not zero */

loc_000AE628: ;
    ecx = ecx + 0x10;
    eax = eax >> 0x10;

loc_000AE62E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AE638; /* jne: not equal / not zero */

loc_000AE632: ;
    ecx = ecx + 8;
    eax = eax >> 8;

loc_000AE638: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AE642; /* jne: not equal / not zero */

loc_000AE63C: ;
    ecx = ecx + 4;
    eax = eax >> 4;

loc_000AE642: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AE64D; /* jne: not equal / not zero */

loc_000AE646: ;
    eax = eax >> 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AE646; /* je: equal / zero */

loc_000AE64D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x64 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AE6E5; /* jge: greater or equal (signed >=) */

loc_000AE656: ;
    PUSH32(esp, esi);
    esi = ecx;
    /* nop */

loc_000AE660: ;
    ecx = esi + esi * 4;
    edx = MEM32(ebx + ecx * 4);
    ecx = ebx + ecx * 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000AE66Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AE66D: ;
    eax = esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AE6E4; /* jge: greater or equal (signed >=) */

loc_000AE675: ;
    edx = eax;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    edx = MEM32(edi + edx * 4);
    ecx = eax;
    ecx = ecx & 0x1F;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AE6A7; /* jne: not equal / not zero */

loc_000AE688: ;
    goto loc_000AE690;

    /* nop */

loc_000AE690: ;
    eax = eax & 0xFFFFFFE0u;
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AE6E4; /* jge: greater or equal (signed >=) */

loc_000AE69B: ;
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = MEM32(edi + ecx * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AE690; /* je: equal / zero */

loc_000AE6A7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AE6B5; /* jne: not equal / not zero */

loc_000AE6AF: ;
    eax = eax + 0x10;
    edx = edx >> 0x10;

loc_000AE6B5: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AE6BF; /* jne: not equal / not zero */

loc_000AE6B9: ;
    eax = eax + 8;
    edx = edx >> 8;

loc_000AE6BF: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AE6CA; /* jne: not equal / not zero */

loc_000AE6C4: ;
    eax = eax + 4;
    edx = edx >> 4;

loc_000AE6CA: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AE6D8; /* jne: not equal / not zero */

loc_000AE6CF: ;
    /* nop */

loc_000AE6D0: ;
    edx = edx >> 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AE6D0; /* je: equal / zero */

loc_000AE6D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AE6E4; /* jge: greater or equal (signed >=) */

loc_000AE6DD: ;
    esi = eax;
    goto loc_000AE660;

loc_000AE6E4: ;
    POP32(esp, esi);

loc_000AE6E5: ;
    edx = 0; /* xor self */
    MEM32(edi) = edx;
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = edx;
    MEM32(edi + 0xC) = edx;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000AE700
 * Original: 0x000AE700 - 0x000AE71E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AE700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AE700: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000AE708u); RECOMP_ABI_CALL(0x000AE530u, sub_000AE530); /* call 0x000AE530 */

loc_000AE708: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AE718; /* je: equal / zero */

loc_000AE70F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000AE715u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000AE715: ;
    esp = esp + 4;

loc_000AE718: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AE720
 * Original: 0x000AE720 - 0x000AE725 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AE720(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AE720: ;
    g_seh_ebp = ebp; sub_000AE5F0(); return; /* tail jmp 0x000AE5F0 */

}

/**
 * sub_000AE730
 * Original: 0x000AE730 - 0x000AE780 (80 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AE730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AE730: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FF21);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 8;
    eax = MEM32(esp + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AE771; /* je: equal / zero */

loc_000AE752: ;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM8(eax + 0x11) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 0x12));
    SET_LO8(ecx, LO8(ecx) & 0xFC);
    MEM8(eax + 0x10) = 1;
    MEM8(eax + 0x12) = LO8(ecx);
    MEM32(eax) = 0x3D3AC0;

loc_000AE771: ;
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_000AE780
 * Original: 0x000AE780 - 0x000AE891 (273 bytes, 102 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AE780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AE780: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000AE81C; /* jne: not equal / not zero */

loc_000AE791: ;
    eax = ZX8(MEM8(esi + 0x11));
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x000AE7A1u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AE7A1: ;
    ecx = eax;
    PUSH32(esp, 0x000AE7A8u); RECOMP_ABI_CALL(0x00047360u, sub_00047360); /* call 0x00047360 */

loc_000AE7A8: ;
    SET_LO8(ecx, MEM8(esi + 0x10));
    eax = ZX8(LO8(eax));
    edx = ZX8(LO8(ecx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AE7B7; /* jl: less (signed <) */

loc_000AE7B5: ;
    edx = eax;

loc_000AE7B7: ;
    SET_LO8(eax, LO8(eax) - LO8(edx));
    SET_LO8(ecx, LO8(ecx) - LO8(edx));
    MEM8(esi + 0x10) = LO8(ecx);
    ecx = ZX8(MEM8(esi + 0x11));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x000AE7CBu); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AE7CB: ;
    ecx = eax;
    PUSH32(esp, 0x000AE7D2u); RECOMP_ABI_CALL(0x000475B0u, sub_000475B0); /* call 0x000475B0 */

loc_000AE7D2: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AE885; /* je: equal / zero */

loc_000AE7DD: ;
    edi = ZX8(MEM8(esi + 0x11));
    ecx = ebx;
    PUSH32(esp, 0x000AE7E8u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AE7E8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_000AE7F7; /* jl: less (signed <) */

loc_000AE7EC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000AE7F7; /* jg: greater (signed >) */

loc_000AE7F1: ;
    SET_LO8(eax, MEM8(edi + eax + 0x1B));
    goto loc_000AE7F9;

loc_000AE7F7: ;
    SET_LO8(eax, 0); /* xor self */

loc_000AE7F9: ;
    SET_LO8(eax, LO8(eax) - MEM8(esi + 0x10));
    edx = ZX8(MEM8(esi + 0x11));
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000AE809u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AE809: ;
    ecx = eax;
    PUSH32(esp, 0x000AE810u); RECOMP_ABI_CALL(0x00047530u, sub_00047530); /* call 0x00047530 */

loc_000AE810: ;
    POP32(esp, edi);
    MEM8(esi + 0x10) = 0;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000AE81C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AE889; /* jne: not equal / not zero */

loc_000AE820: ;
    ebx = MEM32(esp + 0x10);
    edi = esi + 0x11;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x000AE82Fu); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AE82F: ;
    ecx = eax;
    PUSH32(esp, 0x000AE836u); RECOMP_ABI_CALL(0x000482B0u, xml1_guest_talent_bonus_rank_get); /* call 0x000482B0 */

loc_000AE836: ;
    SET_LO8(ecx, MEM8(esi + 0x10));
    eax = ZX8(LO8(eax));
    edx = ZX8(LO8(ecx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AE845; /* jl: less (signed <) */

loc_000AE843: ;
    edx = eax;

loc_000AE845: ;
    SET_LO8(eax, LO8(eax) - LO8(edx));
    SET_LO8(ecx, LO8(ecx) - LO8(edx));
    MEM8(esi + 0x10) = LO8(ecx);
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000AE855u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AE855: ;
    ecx = eax;
    PUSH32(esp, 0x000AE85Cu); RECOMP_ABI_CALL(0x000482F0u, xml1_guest_talent_bonus_rank_set); /* call 0x000482F0 */

loc_000AE85C: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AE885; /* je: equal / zero */

loc_000AE863: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x000AE86Bu); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AE86B: ;
    ecx = eax;
    PUSH32(esp, 0x000AE872u); RECOMP_ABI_CALL(0x00040DB0u, xml1_guest_talent_rank_get); /* call 0x00040DB0 */

loc_000AE872: ;
    SET_LO8(eax, LO8(eax) - MEM8(esi + 0x10));
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000AE87Eu); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AE87E: ;
    ecx = eax;
    PUSH32(esp, 0x000AE885u); RECOMP_ABI_CALL(0x000487F0u, xml1_guest_talent_rank_set); /* call 0x000487F0 */

loc_000AE885: ;
    MEM8(esi + 0x10) = 0;

loc_000AE889: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AE8A0
 * Original: 0x000AE8A0 - 0x000AEA81 (481 bytes, 157 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AE8A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AE8A0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0x34FF38);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AE93C; /* jne: not equal / not zero */

loc_000AE8C6: ;
    esi = MEM32(esp + 0x40);
    ecx = esi;
    PUSH32(esp, 0x000AE8D1u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AE8D1: ;
    ecx = eax;
    PUSH32(esp, 0x000AE8D8u); RECOMP_ABI_CALL(0x00047320u, sub_00047320); /* call 0x00047320 */

loc_000AE8D8: ;
    ebx = ZX8(LO8(eax));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000AEA6A; /* jle: less or equal (signed <=) */

loc_000AE8E3: ;
    eax = ZX8(MEM8(edi + 0x11));
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000AE8EFu); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AE8EF: ;
    ecx = eax;
    PUSH32(esp, 0x000AE8F6u); RECOMP_ABI_CALL(0x00047350u, sub_00047350); /* call 0x00047350 */

loc_000AE8F6: ;
    ecx = ZX8(MEM8(edi + 0x11));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000AE905u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AE905: ;
    ecx = eax;
    PUSH32(esp, 0x000AE90Cu); RECOMP_ABI_CALL(0x00047560u, sub_00047560); /* call 0x00047560 */

loc_000AE90C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AEA6A; /* je: equal / zero */

loc_000AE914: ;
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    ecx = esi;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000AE91Eu); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AE91E: ;
    ecx = eax;
    PUSH32(esp, 0x000AE925u); RECOMP_ABI_CALL(0x00047330u, sub_00047330); /* call 0x00047330 */

loc_000AE925: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x20);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x2C;
    esp += 8; return; /* ret 4 */

loc_000AE93C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AEA6A; /* jne: not equal / not zero */

loc_000AE946: ;
    ebp = MEM32(esp + 0x40);
    ecx = ebp;
    PUSH32(esp, 0x000AE951u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AE951: ;
    ecx = eax;
    PUSH32(esp, 0x000AE958u); RECOMP_ABI_CALL(0x00047340u, sub_00047340); /* call 0x00047340 */

loc_000AE958: ;
    ebx = ZX8(LO8(eax));
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x40) = 1;
    MEM32(esp + 0x14) = 0x3C9748;
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x38) = esi;
    PUSH32(esp, 0x000AE97Cu); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_000AE97C: ;
    edx = MEM32(eax);
    edi = edi + 0x11;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000AE987u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AE987: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AE9D1; /* je: equal / zero */

loc_000AE98D: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x000AE995u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AE995: ;
    ecx = eax;
    PUSH32(esp, 0x000AE99Cu); RECOMP_ABI_CALL(0x00048270u, xml1_guest_talent_pending_rank_get); /* call 0x00048270 */

loc_000AE99C: ;
    PUSH32(esp, edi);
    ecx = ebp;
    ebx = ZX8(LO8(eax));
    PUSH32(esp, 0x000AE9A7u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AE9A7: ;
    ecx = eax;
    PUSH32(esp, 0x000AE9AEu); RECOMP_ABI_CALL(0x00040DB0u, xml1_guest_talent_rank_get); /* call 0x00040DB0 */

loc_000AE9AE: ;
    edx = MEM32(esi);
    eax = ZX8(LO8(eax));
    ebx = ebx + eax;
    eax = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000AE9C0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AE9C0: ;
    edx = MEM32(esi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000AE9CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AE9CD: ;
    ebx = MEM32(esp + 0x10);

loc_000AE9D1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x40) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AEA51; /* jl: less (signed <) */

loc_000AE9D7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000AE9E5u); RECOMP_ABI_CALL(0x000A34A0u, sub_000A34A0); /* call 0x000A34A0 */

loc_000AE9E5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AEA51; /* je: equal / zero */

loc_000AE9E9: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x000AE9F1u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AE9F1: ;
    ecx = eax;
    PUSH32(esp, 0x000AE9F8u); RECOMP_ABI_CALL(0x00048270u, xml1_guest_talent_pending_rank_get); /* call 0x00048270 */

loc_000AE9F8: ;
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    ecx = ebp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000AEA03u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AEA03: ;
    ecx = eax;
    PUSH32(esp, 0x000AEA0Au); RECOMP_ABI_CALL(0x00048860u, xml1_guest_talent_pending_rank_set); /* call 0x00048860 */

loc_000AEA0A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AEA51; /* je: equal / zero */

loc_000AEA0E: ;
    SET_LO8(ebx, LO8(ebx) - MEM8(esp + 0x40));
    ecx = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000AEA1Au); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AEA1A: ;
    ecx = eax;
    PUSH32(esp, 0x000AEA21u); RECOMP_ABI_CALL(0x000476C0u, sub_000476C0); /* call 0x000476C0 */

loc_000AEA21: ;
    ecx = esp + 0x14;
    MEM32(esp + 0x38) = 0xFFFFFFFFu;
    MEM32(esp + 0x14) = 0x3C9748;
    PUSH32(esp, 0x000AEA3Au); RECOMP_ABI_CALL(0x000A4120u, sub_000A4120); /* call 0x000A4120 */

loc_000AEA3A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x20);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x2C;
    esp += 8; return; /* ret 4 */

loc_000AEA51: ;
    ecx = esp + 0x14;
    MEM32(esp + 0x38) = 0xFFFFFFFFu;
    MEM32(esp + 0x14) = 0x3C9748;
    PUSH32(esp, 0x000AEA6Au); RECOMP_ABI_CALL(0x000A4120u, sub_000A4120); /* call 0x000A4120 */

loc_000AEA6A: ;
    ecx = MEM32(esp + 0x30);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x2C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AEA90
 * Original: 0x000AEA90 - 0x000AEBF5 (357 bytes, 104 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AEA90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AEA90: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FF68);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x34;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AEBE1; /* je: equal / zero */

loc_000AEAB7: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    edi = ecx;
    if ((ecx == 0)) goto loc_000AEBCC; /* je: equal / zero */

loc_000AEACE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D3AD8);
    ecx = esp + 0x14;
    PUSH32(esp, 0x000AEADFu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000AEADF: ;
    PUSH32(esp, ebx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x50) = ebx;
    PUSH32(esp, 0x000AEAF0u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000AEAF0: ;
    ecx = esp + 0xC;
    esi = eax;
    MEM32(esp + 0x48) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000AEB03u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000AEB03: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AEBB6; /* je: equal / zero */

loc_000AEB0B: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x54);

loc_000AEB10: ;
    SET_LO8(edx, MEM8(esp + 0x42));
    SET_LO8(edx, LO8(edx) & 0xFC);
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = ebx;
    MEM8(esp + 0x40) = 1;
    MEM8(esp + 0x41) = LO8(ebx);
    MEM8(esp + 0x42) = LO8(edx);
    MEM32(esp + 0x30) = 0x3D3AC0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = esp + 0x38;
    MEM32(esp + 0x54) = 1;
    PUSH32(esp, 0x000AEB4Bu); RECOMP_ABI_CALL(0x000A38A0u, sub_000A38A0); /* call 0x000A38A0 */

loc_000AEB4B: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x34;
    PUSH32(esp, 0x000AEB55u); RECOMP_ABI_CALL(0x000ADFF0u, sub_000ADFF0); /* call 0x000ADFF0 */

loc_000AEB55: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D3AD8);
    ecx = esp + 0x28;
    PUSH32(esp, 0x000AEB65u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000AEB65: ;
    PUSH32(esp, esi);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(esp + 0x54) = 2;
    PUSH32(esp, 0x000AEB77u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000AEB77: ;
    ecx = esp + 0x20;
    esi = eax;
    MEM8(esp + 0x4C) = 1;
    PUSH32(esp, 0x000AEB87u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000AEB87: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x4C) = 0xFFFFFFFFu;
    MEM32(esp + 0x30) = 0x3D2C70;
    if (CMP_NE(_fa, _fb)) goto loc_000AEB10; /* jne: not equal / not zero */

loc_000AEB9F: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x34);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x40;
    esp += 12; return; /* ret 8 */

loc_000AEBB6: ;
    POP32(esp, esi);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x34);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x40;
    esp += 12; return; /* ret 8 */

loc_000AEBCC: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x34);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x40;
    esp += 12; return; /* ret 8 */

loc_000AEBE1: ;
    ecx = MEM32(esp + 0x38);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x40;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000AEC00
 * Original: 0x000AEC00 - 0x000AED65 (357 bytes, 104 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AEC00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AEC00: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FF68);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x34;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AED51; /* je: equal / zero */

loc_000AEC27: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    edi = ecx;
    if ((ecx == 0)) goto loc_000AED3C; /* je: equal / zero */

loc_000AEC3E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D3AD8);
    ecx = esp + 0x14;
    PUSH32(esp, 0x000AEC4Fu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000AEC4F: ;
    PUSH32(esp, ebx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x50) = ebx;
    PUSH32(esp, 0x000AEC60u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000AEC60: ;
    ecx = esp + 0xC;
    esi = eax;
    MEM32(esp + 0x48) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000AEC73u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000AEC73: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AED26; /* je: equal / zero */

loc_000AEC7B: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x54);

loc_000AEC80: ;
    SET_LO8(edx, MEM8(esp + 0x42));
    SET_LO8(edx, LO8(edx) & 0xFC);
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = ebx;
    MEM8(esp + 0x40) = 1;
    MEM8(esp + 0x41) = LO8(ebx);
    MEM8(esp + 0x42) = LO8(edx);
    MEM32(esp + 0x30) = 0x3D3AC0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = esp + 0x38;
    MEM32(esp + 0x54) = 1;
    PUSH32(esp, 0x000AECBBu); RECOMP_ABI_CALL(0x000A38A0u, sub_000A38A0); /* call 0x000A38A0 */

loc_000AECBB: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x34;
    PUSH32(esp, 0x000AECC5u); RECOMP_ABI_CALL(0x000AE780u, sub_000AE780); /* call 0x000AE780 */

loc_000AECC5: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D3AD8);
    ecx = esp + 0x28;
    PUSH32(esp, 0x000AECD5u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000AECD5: ;
    PUSH32(esp, esi);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = edi;
    MEM8(esp + 0x54) = 2;
    PUSH32(esp, 0x000AECE7u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000AECE7: ;
    ecx = esp + 0x20;
    esi = eax;
    MEM8(esp + 0x4C) = 1;
    PUSH32(esp, 0x000AECF7u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000AECF7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x4C) = 0xFFFFFFFFu;
    MEM32(esp + 0x30) = 0x3D2C70;
    if (CMP_NE(_fa, _fb)) goto loc_000AEC80; /* jne: not equal / not zero */

loc_000AED0F: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x34);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x40;
    esp += 12; return; /* ret 8 */

loc_000AED26: ;
    POP32(esp, esi);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x34);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x40;
    esp += 12; return; /* ret 8 */

loc_000AED3C: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0x34);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x40;
    esp += 12; return; /* ret 8 */

loc_000AED51: ;
    ecx = MEM32(esp + 0x38);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x40;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000AED70
 * Original: 0x000AED70 - 0x000AEDE3 (115 bytes, 49 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AED70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AED70: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = ecx;
    PUSH32(esp, 0x000AED7Au); RECOMP_ABI_CALL(0x000AE120u, sub_000AE120); /* call 0x000AE120 */

loc_000AED7A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AED82; /* jne: not equal / not zero */

loc_000AED7E: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000AED82: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_000AED9C; /* jne: not equal / not zero */

loc_000AED92: ;
    ecx = edi;
    PUSH32(esp, 0x000AED99u); RECOMP_ABI_CALL(0x000AF700u, sub_000AF700); /* call 0x000AF700 */

loc_000AED99: ;
    ebp = SX16(LO16(eax));

loc_000AED9C: ;
    PUSH32(esp, 1);
    ebx = edi + 0x20C;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000AEDACu); RECOMP_ABI_CALL(0x000AE540u, sub_000AE540); /* call 0x000AE540 */

loc_000AEDAC: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x000AEDB5u); RECOMP_ABI_CALL(0x000AE3B0u, sub_000AE3B0); /* call 0x000AE3B0 */

loc_000AEDB5: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000AEDBEu); RECOMP_ABI_CALL(0x000AEA90u, sub_000AEA90); /* call 0x000AEA90 */

loc_000AEDBE: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000AEDC8u); RECOMP_ABI_CALL(0x000AE210u, sub_000AE210); /* call 0x000AE210 */

loc_000AEDC8: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x000AEDD1u); RECOMP_ABI_CALL(0x000AE3B0u, sub_000AE3B0); /* call 0x000AE3B0 */

loc_000AEDD1: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000AEDDAu); RECOMP_ABI_CALL(0x000AEA90u, sub_000AEA90); /* call 0x000AEA90 */

loc_000AEDDA: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000AEDF0
 * Original: 0x000AEDF0 - 0x000AEE63 (115 bytes, 49 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AEDF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AEDF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    esi = ecx;
    PUSH32(esp, 0x000AEDFAu); RECOMP_ABI_CALL(0x000AE120u, sub_000AE120); /* call 0x000AE120 */

loc_000AEDFA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AEE02; /* jne: not equal / not zero */

loc_000AEDFE: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_000AEE02: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (CMP_NE(_fa, _fb)) goto loc_000AEE1C; /* jne: not equal / not zero */

loc_000AEE12: ;
    ecx = edi;
    PUSH32(esp, 0x000AEE19u); RECOMP_ABI_CALL(0x000AF700u, sub_000AF700); /* call 0x000AF700 */

loc_000AEE19: ;
    ebp = SX16(LO16(eax));

loc_000AEE1C: ;
    PUSH32(esp, 1);
    ebx = edi + 0x20C;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000AEE2Cu); RECOMP_ABI_CALL(0x000AE210u, sub_000AE210); /* call 0x000AE210 */

loc_000AEE2C: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x000AEE35u); RECOMP_ABI_CALL(0x000AE3B0u, sub_000AE3B0); /* call 0x000AE3B0 */

loc_000AEE35: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000AEE3Eu); RECOMP_ABI_CALL(0x000AEC00u, sub_000AEC00); /* call 0x000AEC00 */

loc_000AEE3E: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000AEE48u); RECOMP_ABI_CALL(0x000AE540u, sub_000AE540); /* call 0x000AE540 */

loc_000AEE48: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x000AEE51u); RECOMP_ABI_CALL(0x000AE3B0u, sub_000AE3B0); /* call 0x000AE3B0 */

loc_000AEE51: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000AEE5Au); RECOMP_ABI_CALL(0x000AEC00u, sub_000AEC00); /* call 0x000AEC00 */

loc_000AEE5A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000AEE70
 * Original: 0x000AEE70 - 0x000AEEBE (78 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AEE70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AEE70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x7E0);
    eax = edi + edi * 4;
    ecx = esi + eax * 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000AEE86u); RECOMP_ABI_CALL(0x000AE730u, sub_000AE730); /* call 0x000AE730 */

loc_000AEE86: ;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    eax = esi + edx * 4 + 0x7D0;
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(eax);
    esp = esp + 4;
    POP32(esp, edi);
    ecx = ecx | edx;
    MEM32(eax) = ecx;
    eax = MEM32(esi + 0x7E0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x7E0) = eax;
    eax = eax + eax * 4;
    eax = esi + eax * 4 + -20;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AEEC0
 * Original: 0x000AEEC0 - 0x000AF0EC (556 bytes, 168 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AEEC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AEEC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FF99);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x24;
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AF0D9; /* je: equal / zero */

loc_000AEEEC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x44);

loc_000AEEF4: ;
    esi = MEM32(esp + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AF0D5; /* je: equal / zero */

loc_000AEF00: ;
    ebx = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & esi;
    MEM32(esp + 0x20) = ecx;
    if ((ecx == 0)) goto loc_000AF081; /* je: equal / zero */

loc_000AEF18: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000AEF1Fu); RECOMP_ABI_CALL(0x00125F40u, sub_00125F40); /* call 0x00125F40 */

loc_000AEF1F: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AF081; /* je: equal / zero */

loc_000AEF29: ;
    /* nop */

loc_000AEF30: ;
    esi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ebp;
    if ((eax == 0)) goto loc_000AF069; /* je: equal / zero */

loc_000AEF44: ;
    esi = eax + 0x14;
    PUSH32(esp, 0x3D3AE8);
    ecx = esi;
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0x000AEF57u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000AEF57: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AEF5Du); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000AEF5D: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AEF81; /* je: equal / zero */

loc_000AEF64: ;
    PUSH32(esp, 0x3D3AE0);
    ecx = esi;
    PUSH32(esp, 0x000AEF70u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000AEF70: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AEF76u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000AEF76: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AF069; /* jne: not equal / not zero */

loc_000AEF81: ;
    SET_LO8(ebx, 0); /* xor self */
    MEM32(esp + 0x44) = 0;
    esi = edi + 0x10;
    edi = edi;

loc_000AEF90: ;
    ecx = MEM32(esp + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x7E0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x7E0) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AEFEE; /* jge: greater or equal (signed >=) */

loc_000AEF9C: ;
    SET_LO8(edx, MEM8(esi));
    eax = MEM32(esi + -16);
    ecx = esi + -16;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    MEM8(esp + 0x54) = LO8(edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000AEFAEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AEFAE: ;
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AEFD9; /* je: equal / zero */

loc_000AEFB4: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x3D3AE0);
    PUSH32(esp, 0x000AEFC2u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000AEFC2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000AEFC8u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000AEFC8: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AEFD9; /* jne: not equal / not zero */

loc_000AEFCF: ;
    SET_LO8(eax, MEM8(esi));
    SET_LO8(ecx, MEM8(esp + 0x4C));
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    MEM8(esi) = LO8(eax);

loc_000AEFD9: ;
    edx = MEM32(esp + 0x44);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 0x14;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    MEM32(esp + 0x44) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_000AEF90; /* je: equal / zero */

loc_000AEFE9: ;
    goto loc_000AF069;

loc_000AEFEE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AF069; /* jne: not equal / not zero */

loc_000AEFF2: ;
    ecx = MEM32(edi + 0x7E0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x64 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AF069; /* je: equal / zero */

loc_000AEFFD: ;
    edx = ecx + ecx * 4;
    eax = edi + edx * 4;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AF028; /* je: equal / zero */

loc_000AF009: ;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    SET_LO8(ebx, MEM8(eax + 0x12));
    SET_LO8(ebx, LO8(ebx) & 0xFC);
    MEM8(eax + 0x10) = 1;
    MEM8(eax + 0x11) = LO8(edx);
    MEM8(eax + 0x12) = LO8(ebx);
    MEM32(eax) = 0x3D3AC0;

loc_000AF028: ;
    eax = ecx;
    ecx = ecx & 0x1F;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    eax = edi + eax * 4 + 0x7D0;
    esi = 1;
    esi = esi << LO8(ecx);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ecx = ecx | esi;
    MEM32(eax) = ecx;
    ebx = MEM32(edi + 0x7E0);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx;
    ecx = eax + eax * 4;
    ecx = edi + ecx * 4 + -20;
    MEM32(edi + 0x7E0) = ebx;
    eax = MEM32(ecx);
    MEM32(esp + 0x44) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000AF069u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AF069: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000AF073u); RECOMP_ABI_CALL(0x00125F40u, sub_00125F40); /* call 0x00125F40 */

loc_000AF073: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AEF30; /* jne: not equal / not zero */

loc_000AF07D: ;
    esi = MEM32(esp + 0x18);

loc_000AF081: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x50) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AF094; /* jne: not equal / not zero */

loc_000AF087: ;
    MEM32(esp + 0x18) = 0;
    goto loc_000AEEF4;

loc_000AF094: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB6D8);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x000AF0A4u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000AF0A4: ;
    PUSH32(esp, esi);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x50);
    MEM32(esp + 0x44) = 1;
    PUSH32(esp, 0x000AF0BBu); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000AF0BB: ;
    ecx = esp + 0x24;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x3C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000AF0D0u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000AF0D0: ;
    goto loc_000AEEF4;

loc_000AF0D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000AF0D9: ;
    ecx = MEM32(esp + 0x24);
    SET_LO8(eax, 1);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x30;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000AF0F0
 * Original: 0x000AF0F0 - 0x000AF159 (105 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF0F0(void)
{
    /* XML1 OWNED CHARACTER TALENT MAP */

loc_000AF0F0: ;
#ifdef XML1_PERMANENT_VITALITY
    xml1_vitality_construct(ecx);
#endif
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FFBB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 4;
    MEM32(esp + 8) = esi;
    MEM32(esi) = 0x3CADB0;
    PUSH32(esp, 0x000AF11Cu); RECOMP_ABI_CALL(0x000474E0u, sub_000474E0); /* call 0x000474E0 */

loc_000AF11C: ;
    edi = esi + 0x30;
    ecx = edi;
    PUSH32(esp, 0x000AF126u); RECOMP_ABI_CALL(0x00048C00u, xml1_guest_character_talent_map_construct); /* call 0x00048C00 */

loc_000AF126: ;
    MEM32(xml1_character_talent_map_resolve(edi)) = 0x3CAD98;
    eax = 0; /* xor self */
    MEM32(esp + 0x14) = eax;
    MEM32(esi + 0x1E0) = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000AF144u); RECOMP_ABI_CALL(0x000490F0u, xml1_guest_character_stats_assign); /* call 0x000490F0 */

loc_000AF144: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AF160
 * Original: 0x000AF160 - 0x000AF368 (520 bytes, 153 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF160(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AF160: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FFDB);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x1EC;
    eax = MEM32(0x47A050);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x200);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x1EC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000AF342; /* je: equal / zero */

loc_000AF197: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x208);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);

loc_000AF1A1: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AF33F; /* je: equal / zero */

loc_000AF1AB: ;
    _fa = (uint32_t)(MEM32(esi + 0x7E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x7E0), ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000AF33F; /* jle: less or equal (signed <=) */

loc_000AF1B7: ;
    ecx = edi;
    PUSH32(esp, 0x000AF1BEu); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AF1BE: ;
    ecx = eax;
    PUSH32(esp, 0x000AF1C5u); RECOMP_ABI_CALL(0x00047340u, sub_00047340); /* call 0x00047340 */

loc_000AF1C5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_A(_fa & _fb, 0)) goto loc_000AF1DF; /* ja: above (unsigned >) */

loc_000AF1C9: ;
    ecx = edi;
    PUSH32(esp, 0x000AF1D0u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AF1D0: ;
    ecx = eax;
    PUSH32(esp, 0x000AF1D7u); RECOMP_ABI_CALL(0x00047320u, sub_00047320); /* call 0x00047320 */

loc_000AF1D7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_000AF33F; /* jbe: below or equal (unsigned <=) */

loc_000AF1DF: ;
    ecx = edi;
    PUSH32(esp, 0x000AF1E6u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AF1E6: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x000AF1F0u); RECOMP_ABI_CALL(0x000AF0F0u, sub_000AF0F0); /* call 0x000AF0F0 */

loc_000AF1F0: ;
    ecx = edi;
    MEM32(esp + 0x204) = ebp;
    PUSH32(esp, 0x000AF1FEu); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AF1FE: ;
    ecx = eax;
    PUSH32(esp, 0x000AF205u); RECOMP_ABI_CALL(0x00048950u, xml1_guest_talent_pending_commit); /* call 0x00048950 */

loc_000AF205: ;
    eax = MEM32(esi + 0x7E0);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = 0x47C34F80;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000AF25D; /* jle: less or equal (signed <=) */

loc_000AF219: ;
    edi = esi;
    goto loc_000AF220;

    /* nop */

loc_000AF220: ;
    ecx = MEM32(esp + 0x20C);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000AF233u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AF233: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000AF246; /* jp: parity */

loc_000AF23E: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = ebp;
    goto loc_000AF248;

loc_000AF246: ;
    fp_pop(); /* fstp st(0) */

loc_000AF248: ;
    eax = MEM32(esi + 0x7E0);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0x14;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AF220; /* jl: less (signed <) */

loc_000AF256: ;
    edi = MEM32(esp + 0x20C);

loc_000AF25D: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x000AF269u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AF269: ;
    ecx = eax;
    PUSH32(esp, 0x000AF270u); RECOMP_ABI_CALL(0x000490F0u, xml1_guest_character_stats_assign); /* call 0x000490F0 */

loc_000AF270: ;
    eax = ebx + ebx * 4;
    ebp = esi + eax * 4;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x000AF27Eu); RECOMP_ABI_CALL(0x000AE8A0u, sub_000AE8A0); /* call 0x000AE8A0 */

loc_000AF27E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AF326; /* jne: not equal / not zero */

loc_000AF286: ;
    eax = MEM32(esi + 0x7E0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    edi = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_000AF2E0; /* jge: greater or equal (signed >=) */

loc_000AF293: ;
    eax = ebp + 0x1C;

loc_000AF296: ;
    ecx = MEM32(eax + -4);
    MEM32(eax + -24) = ecx;
    edx = MEM32(eax);
    MEM32(eax + -20) = edx;
    ecx = MEM32(eax + 4);
    MEM32(eax + -16) = ecx;
    SET_LO8(edx, MEM8(eax + 8));
    MEM8(eax + -12) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 9));
    SET_LO8(edx, MEM8(eax + -10));
    MEM8(eax + -11) = LO8(ecx);
    SET_LO8(edx, LO8(edx) ^ MEM8(eax + 0xA));
    SET_LO8(ecx, MEM8(eax + -10));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    MEM8(eax + -10) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 0xA));
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    SET_LO8(edx, LO8(edx) & 2);
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    MEM8(eax + -10) = LO8(edx);
    ecx = MEM32(esi + 0x7E0);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 0x14;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AF296; /* jl: less (signed <) */

loc_000AF2E0: ;
    edi = MEM32(esi + 0x7E0);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edi + edi * 4;
    edx = MEM32(esi + eax * 4);
    ecx = esi + eax * 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000AF2F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AF2F4: ;
    ecx = edi;
    ecx = ecx & 0x1F;
    eax = edi;
    edi = MEM32(esp + 0x20C);
    edx = 1;
    edx = edx << LO8(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    ecx = MEM32(esi + eax * 4 + 0x7D0);
    eax = esi + eax * 4 + 0x7D0;
    edx = ~edx;
    ecx = ecx & edx;
    MEM32(eax) = ecx;
    MEM32(esi + 0x7E0) = MEM32(esi + 0x7E0) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x7E0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000AF326: ;
    ecx = esp + 0x14;
    MEM32(esp + 0x204) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000AF33Au); RECOMP_ABI_CALL(0x00048F90u, xml1_guest_character_stats_destroy); /* call 0x00048F90 */

loc_000AF33A: ;
    goto loc_000AF1A1;

loc_000AF33F: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);

loc_000AF342: ;
    ecx = MEM32(esp + 0x1F0);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x1EC);
    SET_LO8(eax, 1);
    POP32(esp, edi);
    PUSH32(esp, 0x000AF35Fu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000AF35F: ;
    esp = esp + 0x1F8;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000AF370
 * Original: 0x000AF370 - 0x000AF4E0 (368 bytes, 120 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF370(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AF370: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FEF8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebp);
    ebp = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000AF4CC; /* je: equal / zero */

loc_000AF397: ;
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    PUSH32(esp, edi);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    esi = ecx;
    MEM32(esp + 0x10) = esi;
    if ((ecx == 0)) goto loc_000AF4B6; /* je: equal / zero */

loc_000AF3B1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CB6D8);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000AF3C2u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000AF3C2: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x34) = 0;
    PUSH32(esp, 0x000AF3D6u); RECOMP_ABI_CALL(0x00125F00u, sub_00125F00); /* call 0x00125F00 */

loc_000AF3D6: ;
    ecx = esp + 0x18;
    edi = eax;
    MEM32(esp + 0x30) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000AF3E9u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000AF3E9: ;
    ebx = MEM32(esp + 0x38);
    ecx = ebx;
    PUSH32(esp, 0x000AF3F4u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AF3F4: ;
    ecx = eax;
    PUSH32(esp, 0x000AF3FBu); RECOMP_ABI_CALL(0x00047340u, sub_00047340); /* call 0x00047340 */

loc_000AF3FB: ;
    ecx = ebx;
    esi = ZX8(LO8(eax));
    PUSH32(esp, 0x000AF405u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AF405: ;
    ecx = eax;
    PUSH32(esp, 0x000AF40Cu); RECOMP_ABI_CALL(0x00047320u, sub_00047320); /* call 0x00047320 */

loc_000AF40C: ;
    eax = ZX8(LO8(eax));
    ecx = ebx;
    esi = esi + eax;
    PUSH32(esp, 0x000AF418u); RECOMP_ABI_CALL(0x000AF700u, sub_000AF700); /* call 0x000AF700 */

loc_000AF418: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    eax = SX16(LO16(eax));
    MEM32(esp + 0x38) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000AF49F; /* jle: less or equal (signed <=) */

loc_000AF423: ;
    goto loc_000AF430;

loc_000AF425: ;
    eax = MEM32(esp + 0x38);
    /* nop */

loc_000AF430: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2D (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AF49F; /* jge: greater or equal (signed >=) */

loc_000AF435: ;
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0x000AF448u); RECOMP_ABI_CALL(0x000AE3B0u, sub_000AE3B0); /* call 0x000AE3B0 */

loc_000AF448: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000AF46E; /* je: equal / zero */

loc_000AF44E: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x000AF465u); RECOMP_ABI_CALL(0x000AEEC0u, sub_000AEEC0); /* call 0x000AEEC0 */

loc_000AF465: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x000AF46Eu); RECOMP_ABI_CALL(0x000AF160u, sub_000AF160); /* call 0x000AF160 */

loc_000AF46E: ;
    ecx = ebx;
    PUSH32(esp, 0x000AF475u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AF475: ;
    ecx = eax;
    PUSH32(esp, 0x000AF47Cu); RECOMP_ABI_CALL(0x00047340u, sub_00047340); /* call 0x00047340 */

loc_000AF47C: ;
    ecx = ebx;
    esi = ZX8(LO8(eax));
    PUSH32(esp, 0x000AF486u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AF486: ;
    ecx = eax;
    PUSH32(esp, 0x000AF48Du); RECOMP_ABI_CALL(0x00047320u, sub_00047320); /* call 0x00047320 */

loc_000AF48D: ;
    ecx = ZX8(LO8(eax));
    esi = esi + ecx;
    ecx = MEM32(esp + 0x38);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x38) = ecx;
    if (CMP_G(_fas & _fbs, 0)) goto loc_000AF425; /* jg: greater (signed >) */

loc_000AF49F: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x18);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x24;
    esp += 16; return; /* ret 12 */

loc_000AF4B6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x18);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x24;
    esp += 16; return; /* ret 12 */

loc_000AF4CC: ;
    ecx = MEM32(esp + 0x1C);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x24;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000AF4E0
 * Original: 0x000AF4E0 - 0x000AF6A3 (451 bytes, 128 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF4E0(void)
{
    /* XML1 OWNED CHARACTER TALENT MAP */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AF4E0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34FFFB);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x7EC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x808);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    ebp = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000AF518; /* je: equal / zero */

loc_000AF50D: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x000AF514u); RECOMP_ABI_CALL(0x000AE120u, sub_000AE120); /* call 0x000AE120 */

loc_000AF514: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AF51F; /* jne: not equal / not zero */

loc_000AF518: ;
    SET_LO8(eax, 0); /* xor self */
    goto loc_000AF689;

loc_000AF51F: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x7E4) = eax;
    MEM32(esp + 0x7E8) = eax;
    MEM32(esp + 0x7EC) = eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x7F4) = eax;
    MEM32(esp + 0x7F8) = ebx;
    edi = esi + 0x20C;
    PUSH32(esp, edi);
    ecx = ebp;
    MEM32(esp + 0x808) = ebx;
    PUSH32(esp, 0x000AF55Au); RECOMP_ABI_CALL(0x000AE540u, sub_000AE540); /* call 0x000AE540 */

loc_000AF55A: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x000AF568u); RECOMP_ABI_CALL(0x000AF370u, sub_000AF370); /* call 0x000AF370 */

loc_000AF568: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x000AF570u); RECOMP_ABI_CALL(0x000AE210u, sub_000AE210); /* call 0x000AE210 */

loc_000AF570: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x000AF57Eu); RECOMP_ABI_CALL(0x000AF370u, sub_000AF370); /* call 0x000AF370 */

loc_000AF57E: ;
    ecx = esi;
    PUSH32(esp, 0x000AF585u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AF585: ;
    ecx = eax;
    PUSH32(esp, 0x000AF58Cu); RECOMP_ABI_CALL(0x00047320u, sub_00047320); /* call 0x00047320 */

loc_000AF58C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AF5A6; /* jne: not equal / not zero */

loc_000AF590: ;
    ecx = esi;
    PUSH32(esp, 0x000AF597u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AF597: ;
    ecx = eax;
    PUSH32(esp, 0x000AF59Eu); RECOMP_ABI_CALL(0x00047340u, sub_00047340); /* call 0x00047340 */

loc_000AF59E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AF672; /* je: equal / zero */

loc_000AF5A6: ;
    ecx = esi;
    PUSH32(esp, 0x000AF5ADu); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AF5AD: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = xml1_character_talent_map_resolve(eax+0x30u);
    PUSH32(esp, 0x000AF5BAu); RECOMP_ABI_CALL(0x00047F40u, sub_00047F40); /* call 0x00047F40 */

loc_000AF5BA: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x000AF5C3u); RECOMP_ABI_CALL(0x000AE5F0u, sub_000AE5F0); /* call 0x000AE5F0 */

loc_000AF5C3: ;
    edi = MEM32(esp + 0x10);
    MEM32(esp + 0x7F8) = ebx;
    ebx = MEM32(esp + 0x14);

loc_000AF5D2: ;
    ecx = esi;
    PUSH32(esp, 0x000AF5D9u); RECOMP_ABI_CALL(0x000801F0u, sub_000801F0); /* call 0x000801F0 */

loc_000AF5D9: ;
    eax = xml1_character_talent_map_resolve(eax+0x30u);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000AF5E8; /* jne: not equal / not zero */

loc_000AF5E4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AF625; /* je: equal / zero */

loc_000AF5E8: ;
    _fa = (uint32_t)(MEM32(esp + 0x7F8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x7F8), 0x64 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AF619; /* je: equal / zero */

loc_000AF5F2: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x000AF5FBu); RECOMP_ABI_CALL(0x000AEE70u, sub_000AEE70); /* call 0x000AEE70 */

loc_000AF5FB: ;
    edx = edi;
    edx = edx << 4;
    eax = edx + ebx + 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x800);
    ecx = eax + eax * 4;
    ecx = esp + ecx * 4 + 0xC;
    PUSH32(esp, 0x000AF619u); RECOMP_ABI_CALL(0x000AE080u, sub_000AE080); /* call 0x000AE080 */

loc_000AF619: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x000AF621u); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_000AF621: ;
    edi = eax;
    goto loc_000AF5D2;

loc_000AF625: ;
    ebx = 0; /* xor self */
    goto loc_000AF630;

    /* nop */

loc_000AF630: ;
    _fa = (uint32_t)(MEM32(esp + 0x7F8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x7F8), 0x64 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AF65F; /* je: equal / zero */

loc_000AF63A: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x000AF643u); RECOMP_ABI_CALL(0x000AEE70u, sub_000AEE70); /* call 0x000AEE70 */

loc_000AF643: ;
    eax = MEM32(esp + 0x7F8);
    eax = eax + eax * 4;
    eax = esp + eax * 4 + 4;
    MEM32(eax + 4) = 1;
    MEM8(eax + 0x11) = LO8(ebx);
    MEM8(eax + 0x10) = 0x64;

loc_000AF65F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AF630; /* jl: less (signed <) */

loc_000AF665: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x000AF672u); RECOMP_ABI_CALL(0x000AF160u, sub_000AF160); /* call 0x000AF160 */

loc_000AF672: ;
    ecx = esp + 0x18;
    MEM32(esp + 0x804) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000AF686u); RECOMP_ABI_CALL(0x000AE5F0u, sub_000AE5F0); /* call 0x000AE5F0 */

loc_000AF686: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);

loc_000AF689: ;
    ecx = MEM32(esp + 0x7F8);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x7F8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AF6B0
 * Original: 0x000AF6B0 - 0x000AF6C9 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF6B0(void)
{

loc_000AF6B0: ;
    PUSH32(esp, 0x000AF6B5u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_000AF6B5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x000AF6BCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AF6BC: ;
    eax = SX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)eax);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC8);
    esp += 4; return; /* ret */

}

/**
 * sub_000AF6D0
 * Original: 0x000AF6D0 - 0x000AF6D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF6D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AF6D0: ;
    ecx = ecx + 4;
    g_seh_ebp = ebp; sub_00048690(); return; /* tail jmp 0x00048690 */

}

/**
 * sub_000AF6E0
 * Original: 0x000AF6E0 - 0x000AF6E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF6E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AF6E0: ;
    ecx = ecx + 4;
    g_seh_ebp = ebp; xml1_guest_character_stats_save(); return; /* tail jmp 0x00047F80 */

}

/**
 * sub_000AF6F0
 * Original: 0x000AF6F0 - 0x000AF6F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF6F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AF6F0: ;
    ecx = ecx + 4;
    g_seh_ebp = ebp; xml1_guest_character_stats_load(); return; /* tail jmp 0x00049280 */

}

/**
 * sub_000AF700
 * Original: 0x000AF700 - 0x000AF717 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AF700: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000AF708u); RECOMP_ABI_CALL(0x000BF750u, sub_000BF750); /* call 0x000BF750 */

loc_000AF708: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO16(eax, 0x14);
    if (TEST_NZ(_fa, _fb)) goto loc_000AF715; /* jne: not equal / not zero */

loc_000AF710: ;
    SET_LO16(eax, ZX8(MEM8(esi + 0x1C)));

loc_000AF715: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AF720
 * Original: 0x000AF720 - 0x000AF831 (273 bytes, 89 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000AF720: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_000AF739; /* jl: less (signed <) */

loc_000AF72E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000AF739; /* jg: greater (signed >) */

loc_000AF733: ;
    SET_LO8(ebx, MEM8(edi + ecx + 0x1F));
    goto loc_000AF73B;

loc_000AF739: ;
    SET_LO8(ebx, 0); /* xor self */

loc_000AF73B: ;
    esi = ecx + 4;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000AF746u); RECOMP_ABI_CALL(0x00047360u, sub_00047360); /* call 0x00047360 */

loc_000AF746: ;
    eax = ZX8(LO8(eax));
    ecx = ZX8(LO8(ebx));
    eax = eax + ecx;
    MEM32(esp + 0x20) = eax;
    SET_LO8(eax, MEM8(esp + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    if (TEST_Z(_fa, _fb)) goto loc_000AF77D; /* je: equal / zero */

loc_000AF762: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000AF76Au); RECOMP_ABI_CALL(0x00047350u, sub_00047350); /* call 0x00047350 */

loc_000AF76A: ;
    edx = ZX8(LO8(eax));
    MEM32(esp + 0x24) = edx;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */

loc_000AF77D: ;
    esi = MEM32(esp + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AF81F; /* je: equal / zero */

loc_000AF789: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    edi = edi + 2;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esp + 0x24) = 0x3F800000;
    MEM32(esp + 0x28) = 0x3F800000;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x000AF7BDu); RECOMP_ABI_CALL(0x0002A400u, sub_0002A400); /* call 0x0002A400 */

loc_000AF7BD: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000AF7CEu); RECOMP_ABI_CALL(0x0002A400u, sub_0002A400); /* call 0x0002A400 */

loc_000AF7CE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x000AF7E0u); RECOMP_ABI_CALL(0x0002A400u, sub_0002A400); /* call 0x0002A400 */

loc_000AF7E0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x000AF7F2u); RECOMP_ABI_CALL(0x0002A400u, sub_0002A400); /* call 0x0002A400 */

loc_000AF7F2: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 0xC); /* fadd dword ptr [esp + 0xc] */
    esi = MEM32(esp + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    fp_top() = fp_top() + MEMF(esp + 0x20); /* fadd dword ptr [esp + 0x20] */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    fp_top() = fp_top() * MEMF(esp + 0x14); /* fmul dword ptr [esp + 0x14] */
    if (TEST_Z(_fa, _fb)) goto loc_000AF81B; /* je: equal / zero */

loc_000AF80E: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_st1() - fp_top(); /* fsubr st(1) */
    PUSH32(esp, 0x000AF819u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000AF819: ;
    MEM32(esi) = eax;

loc_000AF81B: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */

loc_000AF81F: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    PUSH32(esp, 0x000AF828u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000AF828: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000AF840
 * Original: 0x000AF840 - 0x000AF859 (25 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF840(void)
{

loc_000AF840: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000AF856u); RECOMP_ABI_CALL(0x000AF720u, sub_000AF720); /* call 0x000AF720 */

loc_000AF856: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000AF860
 * Original: 0x000AF860 - 0x000AF88D (45 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF860(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000AF860: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    PUSH32(esp, 0x000AF873u); RECOMP_ABI_CALL(0x000AF720u, sub_000AF720); /* call 0x000AF720 */

loc_000AF873: ;
    eax = ZX8(LO8(eax));
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = fp_top() * MEMF(0x3C93C0); /* fmul dword ptr [0x3c93c0] */
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000AF890
 * Original: 0x000AF890 - 0x000AF8F9 (105 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AF890: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000AF898u); RECOMP_ABI_CALL(0x000BF730u, sub_000BF730); /* call 0x000BF730 */

loc_000AF898: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AF8B7; /* je: equal / zero */

loc_000AF89C: ;
    PUSH32(esp, 0x000AF8A1u); RECOMP_ABI_CALL(0x000BF780u, sub_000BF780); /* call 0x000BF780 */

loc_000AF8A1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AF8B7; /* jne: not equal / not zero */

loc_000AF8A5: ;
    PUSH32(esp, 0x000AF8AAu); RECOMP_ABI_CALL(0x000BF740u, sub_000BF740); /* call 0x000BF740 */

loc_000AF8AA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AF8F5; /* jne: not equal / not zero */

loc_000AF8AE: ;
    PUSH32(esp, 0x000AF8B3u); RECOMP_ABI_CALL(0x000BF750u, sub_000BF750); /* call 0x000BF750 */

loc_000AF8B3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AF8F5; /* jne: not equal / not zero */

loc_000AF8B7: ;
    _fa = (uint32_t)(MEM8(esi + 0x3A1)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3A1), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AF8F5; /* jne: not equal / not zero */

loc_000AF8C0: ;
    PUSH32(esp, 0x000AF8C5u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_000AF8C5: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x000AF8CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AF8CF: ;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(esp + 8);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000AF8F2; /* jbe: below or equal (unsigned <=) */

loc_000AF8DC: ;
    PUSH32(esp, 0x000AF8E1u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_000AF8E1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x000AF8EBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AF8EB: ;
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000AF8F2: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + ecx;

loc_000AF8F5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000AF900
 * Original: 0x000AF900 - 0x000AF942 (66 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AF900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AF900: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000AF908u); RECOMP_ABI_CALL(0x000BF730u, sub_000BF730); /* call 0x000BF730 */

loc_000AF908: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AF91E; /* je: equal / zero */

loc_000AF90C: ;
    PUSH32(esp, 0x000AF911u); RECOMP_ABI_CALL(0x000BF740u, sub_000BF740); /* call 0x000BF740 */

loc_000AF911: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AF93E; /* jne: not equal / not zero */

loc_000AF915: ;
    PUSH32(esp, 0x000AF91Au); RECOMP_ABI_CALL(0x000BF750u, sub_000BF750); /* call 0x000BF750 */

loc_000AF91A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AF93E; /* jne: not equal / not zero */

loc_000AF91E: ;
    _fa = (uint32_t)(MEM8(esi + 0x3A1)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x3A1), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AF93E; /* jne: not equal / not zero */

loc_000AF927: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x18) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000AF93B; /* jle: less or equal (signed <=) */

loc_000AF930: ;
    MEM32(esi + 0x18) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000AF93B: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) - eax;

loc_000AF93E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}



/**
 * sub_000AFA20
 * Original: 0x000AFA20 - 0x000AFA32 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AFA20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AFA20: ;
    SET_LO8(eax, MEM8(ecx + 0x1D));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x1C));
    edx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_000AFA40
 * Original: 0x000AFA40 - 0x000AFA8A (74 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AFA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000AFA40: ;
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM8(edi + 0x3A1)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x3A1), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AFA50; /* je: equal / zero */

loc_000AFA4C: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000AFA50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = edi + 4;
    ecx = esi;
    PUSH32(esp, 0x000AFA5Cu); RECOMP_ABI_CALL(0x00047340u, sub_00047340); /* call 0x00047340 */

loc_000AFA5C: ;
    ecx = esi;
    ebx = ZX8(LO8(eax));
    PUSH32(esp, 0x000AFA66u); RECOMP_ABI_CALL(0x00047320u, sub_00047320); /* call 0x00047320 */

loc_000AFA66: ;
    eax = ZX8(LO8(eax));
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_G(_fas & _fbs, 0)) goto loc_000AFA83; /* jg: greater (signed >) */

loc_000AFA71: ;
    ecx = ZX8(MEM8(edi + 0x1D));
    edx = ZX8(MEM8(edi + 0x1C));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_000AFA83; /* jg: greater (signed >) */

loc_000AFA7F: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000AFA83: ;
    eax = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000AFA90
 * Original: 0x000AFA90 - 0x000AFBCD (317 bytes, 98 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AFA90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000AFA90: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 8);
    eax = MEM32(0x44F1F4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    ecx = edi;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000AFAB6u); RECOMP_ABI_CALL(0x000AF720u, sub_000AF720); /* call 0x000AF720 */

loc_000AFAB6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ecx = ZX8(MEM8(edi + 0x1C));
    eax = ZX8(LO8(eax));
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    MEM32(esp + 0x18) = ecx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = fp_top() * MEMF(0x44F1F8); /* fmul dword ptr [0x44f1f8] */
    fp_top() = fp_top() + MEMF(esp + 8); /* fadd dword ptr [esp + 8] */
    fp_push(MEMF(0x44F1FC)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    if (TEST_Z(_fa, _fb)) goto loc_000AFBAD; /* je: equal / zero */

loc_000AFAEF: ;
    eax = MEM32(esi + 0x2D8);
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AFB5F; /* je: equal / zero */

loc_000AFAFB: ;
    ecx = esi;
    PUSH32(esp, 0x000AFB02u); RECOMP_ABI_CALL(0x00026E60u, xml1_guest_entity_team); /* call 0x00026E60 */

loc_000AFB02: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1B (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000AFB5F; /* je: equal / zero */

loc_000AFB07: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(edi + 0x384); /* fmul dword ptr [edi + 0x384] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000AFB1Au); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000AFB1A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000AFB21u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AFB21: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000AFB5F; /* jle: less or equal (signed <=) */

loc_000AFB26: ;
    PUSH32(esp, 0x000AFB2Bu); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000AFB2B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x000AFB32u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AFB32: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AFB5F; /* jne: not equal / not zero */

loc_000AFB36: ;
    PUSH32(esp, 0x000AFB3Bu); RECOMP_ABI_CALL(0x0008A600u, sub_0008A600); /* call 0x0008A600 */

loc_000AFB3B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000AFB42u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AFB42: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = fp_top() * MEMF(0x3C83B0); /* fmul dword ptr [0x3c83b0] */
    fp_top() = fp_top() + MEMF(0x3C6E40); /* fadd dword ptr [0x3c6e40] */
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_000AFB5F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0xD);
    ecx = esi;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x24) = 0x3F800000;
    PUSH32(esp, 0x000AFB81u); RECOMP_ABI_CALL(0x0002A400u, sub_0002A400); /* call 0x0002A400 */

loc_000AFB81: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xD);
    ecx = esi;
    PUSH32(esp, 0x000AFB93u); RECOMP_ABI_CALL(0x0002A400u, sub_0002A400); /* call 0x0002A400 */

loc_000AFB93: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 8); /* fadd dword ptr [esp + 8] */
    esp = esp - 8;
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000AFBAAu); RECOMP_ABI_CALL(0x00341BA1u, sub_00341BA1); /* call 0x00341BA1 */

loc_000AFBAA: ;
    esp = esp + 8;

loc_000AFBAD: ;
#ifdef XML1_PERMANENT_VITALITY
    { unsigned bonus=xml1_vitality_value(edi+4,0); if(bonus) fp_top()+=bonus; }
#endif
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D3B08)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3d3b08] */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000AFBC4; /* jnp: not parity */

loc_000AFBBC: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3D3B08)); /* fld float */

loc_000AFBC4: ;
    PUSH32(esp, 0x000AFBC9u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000AFBC9: ;
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000AFBD0
 * Original: 0x000AFBD0 - 0x000AFC9B (203 bytes, 65 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AFBD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000AFBD0: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 8);
    eax = MEM32(0x44F200);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    ecx = edi;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000AFBF6u); RECOMP_ABI_CALL(0x000AF720u, sub_000AF720); /* call 0x000AF720 */

loc_000AFBF6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ecx = ZX8(MEM8(edi + 0x1C));
    eax = ZX8(LO8(eax));
    MEM32(esp + 0x18) = eax;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    MEM32(esp + 0x18) = ecx;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = fp_top() * MEMF(0x44F204); /* fmul dword ptr [0x44f204] */
    fp_top() = fp_top() + MEMF(esp + 8); /* fadd dword ptr [esp + 8] */
    fp_push(MEMF(0x44F208)); /* fld float */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 2) & 7]; /* fmul st(2) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    if (TEST_Z(_fa, _fb)) goto loc_000AFC7B; /* je: equal / zero */

loc_000AFC2B: ;
    PUSH32(esp, 0);
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0xE);
    ecx = esi;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x24) = 0x3F800000;
    PUSH32(esp, 0x000AFC4Fu); RECOMP_ABI_CALL(0x0002A400u, sub_0002A400); /* call 0x0002A400 */

loc_000AFC4F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0xE);
    ecx = esi;
    PUSH32(esp, 0x000AFC61u); RECOMP_ABI_CALL(0x0002A400u, sub_0002A400); /* call 0x0002A400 */

loc_000AFC61: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fp_top() + MEMF(esp + 8); /* fadd dword ptr [esp + 8] */
    esp = esp - 8;
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000AFC78u); RECOMP_ABI_CALL(0x00341BA1u, sub_00341BA1); /* call 0x00341BA1 */

loc_000AFC78: ;
    esp = esp + 8;

loc_000AFC7B: ;
#ifdef XML1_PERMANENT_VITALITY
    { unsigned bonus=xml1_vitality_value(edi+4,1); if(bonus) fp_top()+=bonus; }
#endif
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D3B08)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3d3b08] */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000AFC92; /* jnp: not parity */

loc_000AFC8A: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3D3B08)); /* fld float */

loc_000AFC92: ;
    PUSH32(esp, 0x000AFC97u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000AFC97: ;
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000AFCA0
 * Original: 0x000AFCA0 - 0x000AFD6B (203 bytes, 72 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000AFCA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000AFCA0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x000AFCAEu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000AFCAE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x000AFCB5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AFCB5: ;
    ebp = eax;
    PUSH32(esp, 0x000AFCBCu); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_000AFCBC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x000AFCC3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000AFCC3: ;
    esi = MEM32(esp + 0x2C);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    MEM8(esp + 0x13) = (CMP_A(_fa, _fb)) ? 1 : 0; /* seta */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0x3E4CCCCD;
    MEM32(esp + 0x1C) = 0x3ECCCCCD;
    MEM32(esp + 0x20) = 0x3F4CCCCD;
    if (TEST_Z(_fa, _fb)) goto loc_000AFCF7; /* je: equal / zero */

loc_000AFCF4: ;
    MEM8(esi) = 0;

loc_000AFCF7: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000AFD5F; /* jl: less (signed <) */

loc_000AFCFC: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000AFD5F; /* jge: greater or equal (signed >=) */

loc_000AFD01: ;
    edi = MEM32(esp + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AFD5F; /* je: equal / zero */

loc_000AFD09: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0x000AFD15u); RECOMP_ABI_CALL(0x000AFA90u, sub_000AFA90); /* call 0x000AFA90 */

loc_000AFD15: ;
    eax = SX16(LO16(eax));
    MEM32(esp + 0x2C) = eax;
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000AFD5D; /* jne: not equal / not zero */

loc_000AFD2D: ;
    fp_push(MEMF(edi + 0x240)); /* fld float */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + ebp * 4 + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + ebp*4 + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000AFD5F; /* jp: parity */

loc_000AFD42: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000AFD51; /* je: equal / zero */

loc_000AFD46: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esi) = LO8(ecx);

loc_000AFD51: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

loc_000AFD5D: ;
    fp_pop(); /* fstp st(0) */

loc_000AFD5F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}



/**
 * sub_000B0004
 * Original: 0x000B0004 - 0x000B0D2C (3368 bytes, 916 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B0004(void)
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

loc_000B0004: ;
    MEM32(ebp + 0x32C) = esi;
    SET_LO8(eax, 1);
    goto loc_000B0D13;

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

/**
 * sub_000B0016
 * Original: 0x000B0016 - 0x000B0D2C (3350 bytes, 912 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B0016(void)
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

loc_000B0016: ;
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

/**
 * sub_000B0017
 * Original: 0x000B0017 - 0x000B0D2C (3349 bytes, 911 insns)
 * Category: game_vehicle
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B0017(void)
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

loc_000B0017: ;
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

/**
 * sub_000B0740
 * Original: 0x000B0740 - 0x000B0D2C (1516 bytes, 432 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B0740(void)
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



/**
 * sub_000B0E40
 * Original: 0x000B0E40 - 0x000B0E9C (92 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B0E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B0E40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B0E48u); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_000B0E48: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000B0E4Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B0E4F: ;
    ecx = eax;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B0E63; /* je: equal / zero */

loc_000B0E59: ;
    SET_LO8(eax, MEM8(esi + 0x371));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B0E63: ;
    SET_LO8(eax, MEM8(esi + 0x1E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B0E6E; /* je: equal / zero */

loc_000B0E6A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B0E98; /* jne: not equal / not zero */

loc_000B0E6E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B0E89; /* je: equal / zero */

loc_000B0E74: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 0x12E));
    eax = eax >> 4;
    eax = eax & 7;
    if (((int32_t)eax < 0)) goto loc_000B0E96; /* jl: less (signed <) */

loc_000B0E84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B0E96; /* jge: greater or equal (signed >=) */

loc_000B0E89: ;
    eax = ZX8(MEM8(eax + esi + 0x372));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B0E96: ;
    SET_LO8(eax, 1);

loc_000B0E98: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}



/**
 * sub_000B0F10
 * Original: 0x000B0F10 - 0x000B0F15 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B0F10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B0F10: ;
    g_seh_ebp = ebp; xml1_guest_character_reconcile_level(); return; /* tail jmp 0x000AF950 */

}

/**
 * sub_000B0F20
 * Original: 0x000B0F20 - 0x000B1116 (502 bytes, 180 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B0F20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B0F20: ;
    esp = esp - 0x44;
    eax = MEM32(0x47A050);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x40);
    MEM32(esp + 0x54) = eax;
    ebx = esi + 0x20C;
    eax = esp + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B0F45u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B0F45: ;
    esp = esp + 0xC;
    MEM8(esp + 0x4F) = 0;
    PUSH32(esp, 0x000B0F52u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_000B0F52: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x000B0F62u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B0F62: ;
    eax = MEM32(esp + 0x5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B0F6E; /* jle: less or equal (signed <=) */

loc_000B0F6B: ;
    MEM8(esi + 0x1E) = LO8(eax);

loc_000B0F6E: ;
    ebp = MEM32(esp + 0x58);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B1061; /* je: equal / zero */

loc_000B0F7B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    PUSH32(esp, 0x000B0F86u); RECOMP_ABI_CALL(0x000B0EA0u, xml1_guest_character_format_skin); /* call 0x000B0EA0 */

loc_000B0F86: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3D3DEC);
    eax = esp + 0x1C;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B0F99u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000B0F99: ;
    esp = esp + 0x14;
    PUSH32(esp, 0x000B0FA1u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_000B0FA1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000B0FA8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B0FA8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B0FC0; /* je: equal / zero */

loc_000B0FAC: ;
    edi = esp + 0x10;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000B0FB1: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B0FB1; /* jne: not equal / not zero */

loc_000B0FB9: ;
    eax = MEM32(0x3CCF18);
    MEM32(edi) = eax;

loc_000B0FC0: ;
    PUSH32(esp, 0x000B0FC5u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000B0FC5: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edi = ebp + -8;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x000B0FD8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B0FD8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B1044; /* je: equal / zero */

loc_000B0FDC: ;
    PUSH32(esp, 0x000B0FE1u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000B0FE1: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x000B0FF1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B0FF1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B1018; /* je: equal / zero */

loc_000B0FF5: ;
    PUSH32(esp, 0x000B0FFAu); RECOMP_ABI_CALL(0x00122CB0u, sub_00122CB0); /* call 0x00122CB0 */

loc_000B0FFA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000B1004u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B1004: ;
    PUSH32(esp, 0x000B1009u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000B1009: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000B1010u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B1010: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000B1018u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B1018: ;
    PUSH32(esp, 0x000B101Du); RECOMP_ABI_CALL(0x00122CB0u, sub_00122CB0); /* call 0x00122CB0 */

loc_000B101D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000B102Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B102A: ;
    PUSH32(esp, 0x000B102Fu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000B102F: ;
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x000B103Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B103F: ;
    goto loc_000B10E5;

loc_000B1044: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3D3DD0);
    edx = esp + 0x18;
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B1056u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000B1056: ;
    esp = esp + 0x10;
    PUSH32(esp, 0x000B105Eu); RECOMP_ABI_CALL(0x00122CB0u, sub_00122CB0); /* call 0x00122CB0 */

loc_000B105E: ;
    PUSH32(esp, ebp);
    goto loc_000B10D9;

loc_000B1061: ;
    PUSH32(esp, 0x000B1066u); RECOMP_ABI_CALL(0x000BF730u, sub_000BF730); /* call 0x000BF730 */

loc_000B1066: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B10E5; /* je: equal / zero */

loc_000B106A: ;
    PUSH32(esp, 0x000B106Fu); RECOMP_ABI_CALL(0x00086000u, sub_00086000); /* call 0x00086000 */

loc_000B106F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000B1076u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B1076: ;
    SET_LO8(ecx, MEM8(esi + 0x1E));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B1087; /* je: equal / zero */

loc_000B107E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B1087; /* je: equal / zero */

loc_000B1083: ;
    SET_LO8(eax, LO8(ecx));
    goto loc_000B10AF;

loc_000B1087: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B10A2; /* je: equal / zero */

loc_000B108D: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 0x12E));
    ecx = ecx >> 4;
    ecx = ecx & 7;
    if (((int32_t)ecx < 0)) goto loc_000B10AD; /* jl: less (signed <) */

loc_000B109D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000B10AD; /* jge: greater or equal (signed >=) */

loc_000B10A2: ;
    SET_LO8(eax, MEM8(ecx + esi + 0x372));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    goto loc_000B10AF;

loc_000B10AD: ;
    SET_LO8(eax, 1);

loc_000B10AF: ;
    eax = ZX8(LO8(eax));
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B10BCu); RECOMP_ABI_CALL(0x000B0EA0u, xml1_guest_character_format_skin); /* call 0x000B0EA0 */

loc_000B10BC: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3D3DEC);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B10CFu); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000B10CF: ;
    esp = esp + 0x14;
    PUSH32(esp, 0x000B10D7u); RECOMP_ABI_CALL(0x00122CB0u, sub_00122CB0); /* call 0x00122CB0 */

loc_000B10D7: ;
    PUSH32(esp, 0xC);

loc_000B10D9: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000B10E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B10E5: ;
    eax = MEM32(esi + 0x3B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B1103; /* je: equal / zero */

loc_000B10EF: ;
    PUSH32(esp, 0x000B10F4u); RECOMP_ABI_CALL(0x00089FC0u, sub_00089FC0); /* call 0x00089FC0 */

loc_000B10F4: ;
    ecx = MEM32(esi + 0x3B0);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000B1103u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B1103: ;
    ecx = MEM32(esp + 0x50);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x000B1110u); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000B1110: ;
    esp = esp + 0x44;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B1120
 * Original: 0x000B1120 - 0x000B1138 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1120(void)
{

loc_000B1120: ;
    edx = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x40;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx + 0x104) = eax;
    eax = edx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B1140
 * Original: 0x000B1140 - 0x000B114E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1140(void)
{

loc_000B1140: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x5C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000B1150
 * Original: 0x000B1150 - 0x000B118C (60 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1150: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x440);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000B1181; /* jle: less or equal (signed <=) */

loc_000B1160: ;
    PUSH32(esp, esi);
    esi = ebx + 0x3BC;

loc_000B1167: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B1172u); RECOMP_ABI_CALL(0x00094FE0u, sub_00094FE0); /* call 0x00094FE0 */

loc_000B1172: ;
    eax = MEM32(ebx + 0x440);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B1167; /* jl: less (signed <) */

loc_000B1180: ;
    POP32(esp, esi);

loc_000B1181: ;
    SET_LO8(eax, MEM8(ebx + 0x32));
    SET_LO8(eax, LO8(eax) & 0xFE);
    POP32(esp, edi);
    MEM8(ebx + 0x32) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B1190
 * Original: 0x000B1190 - 0x000B11D6 (70 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1190(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B1190: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    ebx = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000B11D1; /* je: equal / zero */

loc_000B119C: ;
    eax = MEM32(ebx + 0x440);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000B11C9; /* jle: less or equal (signed <=) */

loc_000B11A9: ;
    PUSH32(esp, edi);
    edi = ebx + 0x3BC;

loc_000B11B0: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x000B11BAu); RECOMP_ABI_CALL(0x0002B1C0u, sub_0002B1C0); /* call 0x0002B1C0 */

loc_000B11BA: ;
    eax = MEM32(ebx + 0x440);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B11B0; /* jl: less (signed <) */

loc_000B11C8: ;
    POP32(esp, edi);

loc_000B11C9: ;
    MEM8(ebp + 0x337) = MEM8(ebp + 0x337) & 0xFB;
    POP32(esp, esi);

loc_000B11D1: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B11E0
 * Original: 0x000B11E0 - 0x000B12E3 (259 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B11E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B11E0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350040);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    edi = ecx;
    ebx = 0; /* xor self */
    PUSH32(esp, 0x485874);
    ecx = esp + 0x18;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x000B1217u); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_000B1217: ;
    edx = MEM32(esp + 0x10);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x20) = 0x3C898C;
    PUSH32(esp, 0x000B1232u); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_000B1232: ;
    esi = eax;
    esp = esp + 8;
    MEM32(esp + 0x1C) = esi;
    eax = MEM32(esi);
    ecx = esi;
    MEM8(esp + 0x28) = 1;
    ebp = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000B1248u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B1248: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000B127B; /* jle: less or equal (signed <=) */

loc_000B124C: ;
    /* nop */

loc_000B1250: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000B1258u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B1258: ;
    _fa = (uint32_t)(MEM32(eax + 0x2D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2D8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B1270; /* jne: not equal / not zero */

loc_000B1260: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000B1268u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B1268: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000B1270u); RECOMP_ABI_CALL(0x000B1190u, sub_000B1190); /* call 0x000B1190 */

loc_000B1270: ;
    edx = MEM32(esi);
    ecx = esi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000B1277u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B1277: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B1250; /* jl: less (signed <) */

loc_000B127B: ;
    eax = MEM32(edi + 0x440);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000B12AB; /* jle: less or equal (signed <=) */

loc_000B1287: ;
    ebx = edi + 0x3BC;
    /* nop */

loc_000B1290: ;
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B1298u); RECOMP_ABI_CALL(0x000967B0u, xml1_guest_powerup_definition_release); /* call 0x000967B0 */

loc_000B1298: ;
    eax = MEM32(edi + 0x440);
    esp = esp + 4;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B1290; /* jl: less (signed <) */

loc_000B12A9: ;
    ebx = 0; /* xor self */

loc_000B12AB: ;
    PUSH32(esp, esi);
    MEM32(edi + 0x440) = ebx;
    MEM8(esp + 0x2C) = 0;
    PUSH32(esp, 0x000B12BCu); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_000B12BC: ;
    esp = esp + 4;
    ecx = esp + 0x10;
    MEM32(esp + 0x28) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B12D0u); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000B12D0: ;
    ecx = MEM32(esp + 0x20);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_000B12F0
 * Original: 0x000B12F0 - 0x000B1328 (56 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B12F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B12F0: ;
    edx = MEM32(ecx + 0x450);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000B131C; /* jle: less or equal (signed <=) */

loc_000B12FD: ;
    esi = MEM32(esp + 8);
    esi = MEM32(esi);
    ecx = ecx + 0x444;
    /* nop */

loc_000B1310: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B1322; /* je: equal / zero */

loc_000B1314: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B1310; /* jl: less (signed <) */

loc_000B131C: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B1322: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B1330
 * Original: 0x000B1330 - 0x000B133C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1330(void)
{

loc_000B1330: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B1338u); RECOMP_ABI_CALL(0x000B1120u, sub_000B1120); /* call 0x000B1120 */

loc_000B1338: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B1340
 * Original: 0x000B1340 - 0x000B139F (95 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1340: ;
    edx = ecx;
    eax = MEM32(edx + 0x5AC);
    eax = MEM32(edx + eax * 4 + 0x554);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    esi = edx + ecx * 4 + 0x5B4;
    PUSH32(esp, edi);
    ecx = eax;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edi;
    esi = MEM32(edx + 0x5AC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x14 (32-bit) */
    MEM32(edx + 0x5AC) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000B1389; /* jl: less (signed <) */

loc_000B137F: ;
    MEM32(edx + 0x5AC) = 0;

loc_000B1389: ;
    MEM32(edx + 0x5B0) = MEM32(edx + 0x5B0) - 1;
    _fa = (uint32_t)(MEM32(edx + 0x5B0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(edx + 0x5B8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx + 0x5B8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B13A0
 * Original: 0x000B13A0 - 0x000B13AC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B13A0(void)
{

loc_000B13A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B13A8u); RECOMP_ABI_CALL(0x000B1140u, sub_000B1140); /* call 0x000B1140 */

loc_000B13A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B13B0
 * Original: 0x000B13B0 - 0x000B13DE (46 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000B13B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B13B0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x1FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B13D9; /* je: equal / zero */

loc_000B13BF: ;
    eax = eax & MEM32(0x4D2A8C);
    edx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44);
    eax = eax + 0x4D2480;
    ecx = MEM32(eax + 0x40);
    MEM32(edx) = ecx;
    esp += 12; return; /* ret 8 */

loc_000B13D9: ;
    eax = 0; /* xor self */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B13E0
 * Original: 0x000B13E0 - 0x000B1460 (128 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B13E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B13E0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350018);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x000B1404u); RECOMP_ABI_CALL(0x000EDAE0u, sub_000EDAE0); /* call 0x000EDAE0 */

loc_000B1404: ;
    SET_LO8(ebx, MEM8(esp + 0x30));
    MEM32(esp + 0x28) = 0;
    esi = 0; /* xor self */

loc_000B1412: ;
    PUSH32(esp, esi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x000B141Cu); RECOMP_ABI_CALL(0x000ED320u, sub_000ED320); /* call 0x000ED320 */

loc_000B141C: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B1436; /* je: equal / zero */

loc_000B1422: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B142F; /* je: equal / zero */

loc_000B1426: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x000B142Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B142D: ;
    goto loc_000B1436;

loc_000B142F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000B1436u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B1436: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B1412; /* jl: less (signed <) */

loc_000B143C: ;
    ecx = esp + 8;
    MEM32(esp + 0x28) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B144Du); RECOMP_ABI_CALL(0x000ED330u, sub_000ED330); /* call 0x000ED330 */

loc_000B144D: ;
    ecx = MEM32(esp + 0x20);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x24;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B1460
 * Original: 0x000B1460 - 0x000B14BB (91 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1460(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B1460: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ebx = ecx;
    PUSH32(esp, 0x000B1470u); RECOMP_ABI_CALL(0x000B1190u, sub_000B1190); /* call 0x000B1190 */

loc_000B1470: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B14B4; /* je: equal / zero */

loc_000B1474: ;
    eax = MEM32(ebx + 0x440);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000B14AD; /* jle: less or equal (signed <=) */

loc_000B1480: ;
    edi = ebx + 0x3BC;

loc_000B1486: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x498D90);
    eax = esp;
    PUSH32(esp, 0);
    MEM32(eax) = ecx;
    edx = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x000B149Fu); RECOMP_ABI_CALL(0x0002AA90u, xml1_guest_actor_attach_powerup); /* call 0x0002AA90 */

loc_000B149F: ;
    eax = MEM32(ebx + 0x440);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B1486; /* jl: less (signed <) */

loc_000B14AD: ;
    MEM8(ebp + 0x337) = MEM8(ebp + 0x337) | 4;

loc_000B14B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B14C0
 * Original: 0x000B14C0 - 0x000B155F (159 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B14C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B14C0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x47A050);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = eax;
    eax = MEM32(esi + 0x3AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000B1551; /* jle: less or equal (signed <=) */

loc_000B14D7: ;
    SET_LO8(ecx, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B14E8; /* jne: not equal / not zero */

loc_000B14DF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x3AC) = eax;
    if ((_fa != 0)) goto loc_000B1551; /* jne: not equal / not zero */

loc_000B14E8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    PUSH32(esp, 0x000B14F3u); RECOMP_ABI_CALL(0x000B0EA0u, xml1_guest_character_format_skin); /* call 0x000B0EA0 */

loc_000B14F3: ;
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(esi + 0x3AC) = 0;
    PUSH32(esp, 0x000B1506u); RECOMP_ABI_CALL(0x000B13E0u, sub_000B13E0); /* call 0x000B13E0 */

loc_000B1506: ;
    eax = MEM32(esi + 0x3B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B152D; /* je: equal / zero */

loc_000B1510: ;
    PUSH32(esp, 0x000B1515u); RECOMP_ABI_CALL(0x00089FC0u, sub_00089FC0); /* call 0x00089FC0 */

loc_000B1515: ;
    ecx = MEM32(esi + 0x3B0);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000B1523u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B1523: ;
    MEM32(esi + 0x3B0) = 0;

loc_000B152D: ;
    ecx = esi;
    PUSH32(esp, 0x000B1534u); RECOMP_ABI_CALL(0x000B11E0u, sub_000B11E0); /* call 0x000B11E0 */

loc_000B1534: ;
    esi = esi + 0x30C;
    if ((esi == 0)) goto loc_000B1551; /* je: equal / zero */

loc_000B153C: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B1551; /* je: equal / zero */

loc_000B1541: ;
    PUSH32(esp, 0x000B1546u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000B1546: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x000B1551u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B1551: ;
    ecx = MEM32(esp + 4);
    POP32(esp, esi);
    PUSH32(esp, 0x000B155Bu); RECOMP_ABI_CALL(0x00340F54u, sub_00340F54); /* call 0x00340F54 */

loc_000B155B: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B1560
 * Original: 0x000B1560 - 0x000B1640 (224 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1560(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B1560: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x350040);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ebp = 0; /* xor self */
    PUSH32(esp, 0x485874);
    ecx = esp + 0x10;
    MEM32(esp + 0x14) = ebp;
    PUSH32(esp, 0x000B1593u); RECOMP_ABI_CALL(0x000A2A70u, sub_000A2A70); /* call 0x000A2A70 */

loc_000B1593: ;
    edx = MEM32(esp + 8);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x28) = ebp;
    MEM32(esp + 0x18) = 0x3C898C;
    PUSH32(esp, 0x000B15AEu); RECOMP_ABI_CALL(0x000A2B10u, sub_000A2B10); /* call 0x000A2B10 */

loc_000B15AE: ;
    esi = eax;
    esp = esp + 8;
    MEM32(esp + 0x14) = esi;
    eax = MEM32(esi);
    ecx = esi;
    MEM8(esp + 0x20) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000B15C2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B15C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000B1610; /* jle: less or equal (signed <=) */

loc_000B15C6: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x34);

loc_000B15D0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000B15D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B15D8: ;
    _fa = (uint32_t)(MEM32(eax + 0x2D8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x2D8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B1603; /* jne: not equal / not zero */

loc_000B15E0: ;
    _fa = (uint32_t)(MEM32(edi + 0x104)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x104), 0x40 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B1603; /* je: equal / zero */

loc_000B15E9: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000B15F1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B15F1: ;
    eax = MEM32(eax + 0x1C);
    ecx = MEM32(edi + 0x104);
    MEM32(edi + ecx * 4) = eax;
    MEM32(edi + 0x104) = MEM32(edi + 0x104) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x104)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B1603: ;
    edx = MEM32(esi);
    ecx = esi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000B160Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B160A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B15D0; /* jl: less (signed <) */

loc_000B160E: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000B1610: ;
    PUSH32(esp, esi);
    MEM8(esp + 0x24) = 0;
    PUSH32(esp, 0x000B161Bu); RECOMP_ABI_CALL(0x000A2B70u, sub_000A2B70); /* call 0x000A2B70 */

loc_000B161B: ;
    esp = esp + 4;
    ecx = esp + 8;
    MEM32(esp + 0x20) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B162Fu); RECOMP_ABI_CALL(0x000A2AC0u, sub_000A2AC0); /* call 0x000A2AC0 */

loc_000B162F: ;
    ecx = MEM32(esp + 0x18);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}



/**
 * sub_000B18B0
 * Original: 0x000B18B0 - 0x000B1922 (114 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B18B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B18B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_000B18DB; /* je: equal / zero */

loc_000B18BC: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B18DB; /* je: equal / zero */

loc_000B18C1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B18C7u); RECOMP_ABI_CALL(0x00199BF0u, sub_00199BF0); /* call 0x00199BF0 */

loc_000B18C7: ;
    esp = esp + 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B18D2u); RECOMP_ABI_CALL(0x00199C10u, sub_00199C10); /* call 0x00199C10 */

loc_000B18D2: ;
    ecx = eax;
    PUSH32(esp, 0x000B18D9u); RECOMP_ABI_CALL(0x00012A90u, sub_00012A90); /* call 0x00012A90 */

loc_000B18D9: ;
    goto loc_000B18DD;

loc_000B18DB: ;
    eax = 0; /* xor self */

loc_000B18DD: ;
    esi = MEM32(edi + 0x450);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000B18FC; /* jle: less or equal (signed <=) */

loc_000B18E9: ;
    edx = edi + 0x444;
    /* nop */

loc_000B18F0: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B191B; /* je: equal / zero */

loc_000B18F4: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B18F0; /* jl: less (signed <) */

loc_000B18FC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B1908; /* jne: not equal / not zero */

loc_000B1901: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

loc_000B1908: ;
    ecx = MEM32(edi + 0x450);
    MEM32(edi + ecx * 4 + 0x444) = eax;
    MEM32(edi + 0x450) = MEM32(edi + 0x450) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x450)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B191B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B1930
 * Original: 0x000B1930 - 0x000B1941 (17 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1930(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B1930: ;
    ecx = ecx + 0x88;
    MEM32(ecx) = 0x3C9748;
    g_seh_ebp = ebp; sub_000A4120(); return; /* tail jmp 0x000A4120 */

}

/**
 * sub_000B1950
 * Original: 0x000B1950 - 0x000B19C2 (114 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1950: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x1514;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x1508);
    edi = MEM32(eax + 0x1510);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    MEM32(eax + 0x1508) = ecx;
    MEM32(eax + 0x1510) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000B19A8; /* jl: less (signed <) */

loc_000B1997: ;
    MEM32(eax + 0x1508) = 0;
    ecx = 0x1F;
    goto loc_000B19A9;

loc_000B19A8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000B19A9: ;
    MEM32(eax + ecx * 4 + 0x1484) = esi;
    ecx = MEM32(eax + 0x1518);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x1518) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B19D0
 * Original: 0x000B19D0 - 0x000B1A42 (114 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B19D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B19D0: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x5B4;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x5A8);
    edi = MEM32(eax + 0x5B0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x14 (32-bit) */
    MEM32(eax + 0x5A8) = ecx;
    MEM32(eax + 0x5B0) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000B1A28; /* jl: less (signed <) */

loc_000B1A17: ;
    MEM32(eax + 0x5A8) = 0;
    ecx = 0x13;
    goto loc_000B1A29;

loc_000B1A28: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000B1A29: ;
    MEM32(eax + ecx * 4 + 0x554) = esi;
    ecx = MEM32(eax + 0x5B8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x5B8) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B1A50
 * Original: 0x000B1A50 - 0x000B1AAD (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1A50: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x1508) = esi;
    MEM32(ecx + 0x150C) = esi;
    MEM32(ecx + 0x1510) = esi;
    edx = 0; /* xor self */
    goto loc_000B1A70;

    /* nop */

loc_000B1A70: ;
    eax = MEM32(ecx + 0x1508);
    edi = MEM32(ecx + 0x1510);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    MEM32(ecx + 0x1508) = eax;
    MEM32(ecx + 0x1510) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000B1A9C; /* jl: less (signed <) */

loc_000B1A8F: ;
    MEM32(ecx + 0x1508) = esi;
    eax = 0x1F;
    goto loc_000B1A9D;

loc_000B1A9C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000B1A9D: ;
    MEM32(ecx + eax * 4 + 0x1484) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B1A70; /* jl: less (signed <) */

loc_000B1AAA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B1AB0
 * Original: 0x000B1AB0 - 0x000B1B0D (93 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1AB0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x5A8) = esi;
    MEM32(ecx + 0x5AC) = esi;
    MEM32(ecx + 0x5B0) = esi;
    edx = 0; /* xor self */
    goto loc_000B1AD0;

    /* nop */

loc_000B1AD0: ;
    eax = MEM32(ecx + 0x5A8);
    edi = MEM32(ecx + 0x5B0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    MEM32(ecx + 0x5A8) = eax;
    MEM32(ecx + 0x5B0) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000B1AFC; /* jl: less (signed <) */

loc_000B1AEF: ;
    MEM32(ecx + 0x5A8) = esi;
    eax = 0x13;
    goto loc_000B1AFD;

loc_000B1AFC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000B1AFD: ;
    MEM32(ecx + eax * 4 + 0x554) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B1AD0; /* jl: less (signed <) */

loc_000B1B0A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B1B10
 * Original: 0x000B1B10 - 0x000B1B2D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1B10(void)
{

loc_000B1B10: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM8(eax) = LO8(ecx);
    MEM8(eax + 0x40) = LO8(ecx);
    MEM8(eax + 0x60) = LO8(ecx);
    MEM32(eax + 0x88) = 0x3C9748;
    MEM32(eax + 0xA0) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000B1B30
 * Original: 0x000B1B30 - 0x000B1B93 (99 bytes, 28 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B1B30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi + edi * 4 + 0x1FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B1B5B; /* jne: not equal / not zero */

loc_000B1B43: ;
    ecx = 0x4D2480;
    PUSH32(esp, 0x000B1B4Du); RECOMP_ABI_CALL(0x000B1340u, sub_000B1340); /* call 0x000B1340 */

loc_000B1B4D: ;
    eax = MEM32(eax * 4 + 0x4D2A3C);
    MEM32(esi + edi * 4 + 0x1FC) = eax;

loc_000B1B5B: ;
    esi = MEM32(esi + edi * 4 + 0x1FC);
    esi = esi & MEM32(0x4D2A8C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x44);
    esi = esi + 0x4D2480;
    if ((esi == 0)) goto loc_000B1B8E; /* je: equal / zero */

loc_000B1B73: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(esi + 0x40) = ecx;
    PUSH32(esp, 0x000B1B87u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B1B87: ;
    esp = esp + 0xC;
    MEM8(esi + 0x3F) = 0;

loc_000B1B8E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000B1BA0
 * Original: 0x000B1BA0 - 0x000B1C99 (249 bytes, 82 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1BA0(void)
{
    /* XML1 OWNED CHARACTER TALENT MAP */
    /* XML1 SIX BIT TALENT RECORD */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000B1BA0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + 4;
    eax = MEM32(xml1_character_talent_map_resolve(edi+0x30u)+4);
    esi = xml1_character_talent_map_resolve(edi+0x30u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4D72F2);
    ecx = esi;
    PUSH32(esp, 0x000B1BBCu); RECOMP_ABI_CALL(0x000B3BE0u, sub_000B3BE0); /* call 0x000B3BE0 */

loc_000B1BBC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B1BC7; /* jne: not equal / not zero */

loc_000B1BC3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B1BD3; /* je: equal / zero */

loc_000B1BC7: ;
    SET_LO8(ebx, xml1_talent_record_get(MEM32(esi + eax*4 + (xml1_character_talent_map_contains(esi)?0x141cu:0x168u)), XML1_TALENT_CURRENT));
    goto loc_000B1BD5;

loc_000B1BD3: ;
    SET_LO8(ebx, 0); /* xor self */

loc_000B1BD5: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B1BEB; /* je: equal / zero */

loc_000B1BDD: ;
    PUSH32(esp, 0x4D72F2);
    ecx = edi;
    PUSH32(esp, 0x000B1BE9u); RECOMP_ABI_CALL(0x00048270u, xml1_guest_talent_pending_rank_get); /* call 0x00048270 */

loc_000B1BE9: ;
    SET_LO8(ebx, LO8(ebx) + LO8(eax));

loc_000B1BEB: ;
    esi = MEM32(esp + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B1C8E; /* je: equal / zero */

loc_000B1BF7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 7);
    ecx = esi;
    MEM32(esp + 0x24) = 0x3F800000;
    MEM32(esp + 0x28) = 0x3F800000;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x000B1C29u); RECOMP_ABI_CALL(0x0002A400u, sub_0002A400); /* call 0x0002A400 */

loc_000B1C29: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B1C8E; /* jne: not equal / not zero */

loc_000B1C3A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 8);
    ecx = esi;
    PUSH32(esp, 0x000B1C4Cu); RECOMP_ABI_CALL(0x0002A400u, sub_0002A400); /* call 0x0002A400 */

loc_000B1C4C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    ecx = esi;
    PUSH32(esp, 0x000B1C5Eu); RECOMP_ABI_CALL(0x0002A400u, sub_0002A400); /* call 0x0002A400 */

loc_000B1C5E: ;
    esi = ZX8(LO8(ebx));
    MEM32(esp + 0x20) = esi;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = fp_top() + MEMF(esp + 0x10); /* fadd dword ptr [esp + 0x10] */
    fp_top() = fp_top() * MEMF(esp + 0x18); /* fmul dword ptr [esp + 0x18] */
    PUSH32(esp, 0x000B1C76u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000B1C76: ;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B1C90; /* je: equal / zero */

loc_000B1C7E: ;
    edx = ZX8(LO8(eax));
    POP32(esp, edi);
    edx = edx - esi;
    POP32(esp, esi);
    MEM32(ecx) = edx;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

loc_000B1C8E: ;
    SET_LO8(eax, LO8(ebx));

loc_000B1C90: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B1CA0
 * Original: 0x000B1CA0 - 0x000B1F18 (632 bytes, 233 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1CA0(void)
{
    /* XML1 OWNED CHARACTER TALENT MAP */
    /* XML1 SIX BIT TALENT RECORD */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B1CA0: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, ebp);
    ebp = ecx;
    MEM32(esp + 8) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_000B1CBB; /* je: equal / zero */

loc_000B1CB2: ;
    _fa = (uint32_t)(MEM8(ebp + 0x3A1)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x3A1), 0x40 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B1CC4; /* je: equal / zero */

loc_000B1CBB: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebp);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_000B1CC4: ;
    SET_LO8(eax, MEM8(ebp + 0x1D));
    SET_LO8(ecx, MEM8(ebp + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_000B1D59; /* jae: above or equal (unsigned >=) */

loc_000B1CD5: ;
    esi = ZX8(LO8(eax));
    eax = ZX8(LO8(ecx));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000B1D3B; /* jg: greater (signed >) */

loc_000B1CE0: ;
    edi = ebp + 4;

loc_000B1CE3: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000B1CEEu); RECOMP_ABI_CALL(0x000AED70u, sub_000AED70); /* call 0x000AED70 */

loc_000B1CEE: ;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = 1;
    MEM32(esp + 0x14) = ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B1D0E; /* jne: not equal / not zero */

loc_000B1D05: ;
    ebx = 2;
    MEM32(esp + 0x14) = ebx;

loc_000B1D0E: ;
    ecx = edi;
    PUSH32(esp, 0x000B1D15u); RECOMP_ABI_CALL(0x00047320u, sub_00047320); /* call 0x00047320 */

loc_000B1D15: ;
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + LO8(ebx));
    ecx = edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B1D1Fu); RECOMP_ABI_CALL(0x00047330u, sub_00047330); /* call 0x00047330 */

loc_000B1D1F: ;
    ecx = edi;
    PUSH32(esp, 0x000B1D26u); RECOMP_ABI_CALL(0x00047340u, sub_00047340); /* call 0x00047340 */

loc_000B1D26: ;
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(MEM8(esp + 0x14))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + MEM8(esp + 0x14));
    ecx = edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B1D32u); RECOMP_ABI_CALL(0x000476C0u, sub_000476C0); /* call 0x000476C0 */

loc_000B1D32: ;
    edx = ZX8(MEM8(ebp + 0x1C));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000B1CE3; /* jle: less or equal (signed <=) */

loc_000B1D3B: ;
    SET_LO8(eax, MEM8(ebp + 0x1C));
    SET_LO8(ecx, MEM8(ebp + 0x1D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_000B1D47; /* jbe: below or equal (unsigned <=) */

loc_000B1D45: ;
    SET_LO8(eax, LO8(ecx));

loc_000B1D47: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebp + 0x1D) = LO8(eax);
    POP32(esp, ebx);
    eax = 1;
    POP32(esp, ebp);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_000B1D59: ;
    if (CMP_BE(_fa, _fb)) goto loc_000B1F0C; /* jbe: below or equal (unsigned <=) */

loc_000B1D5F: ;
    ebx = ZX8(LO8(eax));
    eax = ZX8(LO8(ecx));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x1C) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_000B1EF0; /* jle: less or equal (signed <=) */

loc_000B1D71: ;
    edi = ebp + 4;

loc_000B1D74: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000B1D7Fu); RECOMP_ABI_CALL(0x000AEDF0u, sub_000AEDF0); /* call 0x000AEDF0 */

loc_000B1D7F: ;
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = 1;
    ebp = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B1D9B; /* jne: not equal / not zero */

loc_000B1D94: ;
    esi = 2;
    ebp = esi;

loc_000B1D9B: ;
    ecx = edi;
    PUSH32(esp, 0x000B1DA2u); RECOMP_ABI_CALL(0x00048510u, xml1_guest_talent_pending_refund); /* call 0x00048510 */

loc_000B1DA2: ;
    ecx = edi;
    PUSH32(esp, 0x000B1DA9u); RECOMP_ABI_CALL(0x00047320u, sub_00047320); /* call 0x00047320 */

loc_000B1DA9: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000B1DB4; /* jl: less (signed <) */

loc_000B1DB2: ;
    ecx = eax;

loc_000B1DB4: ;
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(LO8(ecx)));
    SET_LO8(eax, LO8(eax) - LO8(ecx));
    _cf = (int)((uint32_t)(esi) < (uint32_t)(ecx));
    esi = esi - ecx;
    ecx = edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B1DC0u); RECOMP_ABI_CALL(0x00047330u, sub_00047330); /* call 0x00047330 */

loc_000B1DC0: ;
    ecx = edi;
    PUSH32(esp, 0x000B1DC7u); RECOMP_ABI_CALL(0x00047340u, sub_00047340); /* call 0x00047340 */

loc_000B1DC7: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_000B1DD2; /* jl: less (signed <) */

loc_000B1DD0: ;
    ecx = eax;

loc_000B1DD2: ;
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(LO8(ecx)));
    SET_LO8(eax, LO8(eax) - LO8(ecx));
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(ecx));
    ebp = ebp - ecx;
    ecx = edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B1DDEu); RECOMP_ABI_CALL(0x000476C0u, sub_000476C0); /* call 0x000476C0 */

loc_000B1DDE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000B1E13; /* jle: less or equal (signed <=) */

loc_000B1DE2: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x000B1DEBu); RECOMP_ABI_CALL(0x00047620u, sub_00047620); /* call 0x00047620 */

loc_000B1DEB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000B1E10; /* je: equal / zero */

loc_000B1DF0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_S(_fas, _fbs)) goto loc_000B1E03; /* jl: less (signed <) */

loc_000B1DF4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_000B1E03; /* jg: greater (signed >) */

loc_000B1DF9: ;
    edx = MEM32(esp + 0x14);
    SET_LO8(ecx, MEM8(eax + edx + 0x1F));
    goto loc_000B1E05;

loc_000B1E03: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(ecx, 0); /* xor self */

loc_000B1E05: ;
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000B1E10u); RECOMP_ABI_CALL(0x00047530u, sub_00047530); /* call 0x00047530 */

loc_000B1E10: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B1DE2; /* jne: not equal / not zero */

loc_000B1E13: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000B1ED9; /* jle: less or equal (signed <=) */

loc_000B1E1B: ;
    goto loc_000B1E20;

    /* nop */

loc_000B1E20: ;
    eax = esp + 0x13;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = edi;
    MEM32(esp + 0x20) = 1;
    PUSH32(esp, 0x000B1E36u); RECOMP_ABI_CALL(0x000483C0u, sub_000483C0); /* call 0x000483C0 */

loc_000B1E36: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B1ECD; /* je: equal / zero */

loc_000B1E3E: ;
    PUSH32(esp, 0x000B1E43u); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_000B1E43: ;
    edx = MEM32(eax);
    ecx = esp + 0x13;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000B1E4Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B1E4F: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B1E8F; /* je: equal / zero */

loc_000B1E55: ;
    edx = MEM32(xml1_character_talent_map_resolve(edi+0x30u)+4);
    esi = xml1_character_talent_map_resolve(edi+0x30u);
    PUSH32(esp, edx);
    eax = esp + 0x17;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B1E68u); RECOMP_ABI_CALL(0x000B3BE0u, sub_000B3BE0); /* call 0x000B3BE0 */

loc_000B1E68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000B1E73; /* jne: not equal / not zero */

loc_000B1E6F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000B1E7E; /* je: equal / zero */

loc_000B1E73: ;
    SET_LO8(eax, xml1_talent_record_get(MEM32(esi + eax*4 + (xml1_character_talent_map_contains(esi)?0x141cu:0x168u)), XML1_TALENT_CURRENT));
    _cf = 0; /* logical op clears CF */
    goto loc_000B1E80;

loc_000B1E7E: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */

loc_000B1E80: ;
    edx = MEM32(ebx);
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000B1E8Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B1E8F: ;
    edx = MEM32(xml1_character_talent_map_resolve(edi+0x30u)+4);
    esi = xml1_character_talent_map_resolve(edi+0x30u);
    PUSH32(esp, edx);
    eax = esp + 0x17;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B1EA2u); RECOMP_ABI_CALL(0x000B3BE0u, sub_000B3BE0); /* call 0x000B3BE0 */

loc_000B1EA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000B1EAD; /* jne: not equal / not zero */

loc_000B1EA9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000B1EB8; /* je: equal / zero */

loc_000B1EAD: ;
    SET_LO8(eax, xml1_talent_record_get(MEM32(esi + eax*4 + (xml1_character_talent_map_contains(esi)?0x141cu:0x168u)), XML1_TALENT_CURRENT));
    _cf = 0; /* logical op clears CF */
    goto loc_000B1EBA;

loc_000B1EB8: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */

loc_000B1EBA: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    ecx = esp + 0x13;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x000B1EC9u); RECOMP_ABI_CALL(0x000487F0u, xml1_guest_talent_rank_set); /* call 0x000487F0 */

loc_000B1EC9: ;
    ebx = MEM32(esp + 0x1C);

loc_000B1ECD: ;
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(MEM32(esp + 0x18)));
    ebp = ebp - MEM32(esp + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_G(_fas & _fbs, 0)) goto loc_000B1E20; /* jg: greater (signed >) */

loc_000B1ED9: ;
    edx = MEM32(esp + 0x14);
    eax = ZX8(MEM8(edx + 0x1C));
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x1C) = ebx;
    ebp = edx;
    if (CMP_G(_fas, _fbs)) goto loc_000B1D74; /* jg: greater (signed >) */

loc_000B1EF0: ;
    SET_LO8(eax, MEM8(ebp + 0x1C));
    SET_LO8(ecx, MEM8(ebp + 0x1D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000B1EFC; /* jae: above or equal (unsigned >=) */

loc_000B1EFA: ;
    SET_LO8(eax, LO8(ecx));

loc_000B1EFC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebp + 0x1D) = LO8(eax);
    POP32(esp, ebx);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebp);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_000B1F0C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebp);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B1F20
 * Original: 0x000B1F20 - 0x000B22C8 (936 bytes, 303 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B1F20(void)
{
    /* XML1 OWNED CHARACTER TALENT MAP */
    /* XML1 SIX BIT TALENT RECORD */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B1F20: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000B1F2Eu); RECOMP_ABI_CALL(0x000B11E0u, sub_000B11E0); /* call 0x000B11E0 */

loc_000B1F2E: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B1F9F; /* je: equal / zero */

loc_000B1F36: ;
    eax = MEM32(xml1_character_talent_map_resolve(esi+0x34u)+4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    ebx = xml1_character_talent_map_resolve(esi+0x34u);
    if (CMP_EQ(_fa, _fb)) goto loc_000B1F5C; /* je: equal / zero */

loc_000B1F43: ;
    ecx = eax + 1;
    ecx = ecx << 4;
    ecx = MEM32(ecx + ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B1F5C; /* je: equal / zero */

loc_000B1F54: ;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x000B1F5Cu); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_000B1F5C: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B1F6A; /* jne: not equal / not zero */

loc_000B1F66: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B1F9F; /* je: equal / zero */

loc_000B1F6A: ;
    PUSH32(esp, 0x000B1F6Fu); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_000B1F6F: ;
    edx = MEM32(eax);
    ecx = ebp;
    ecx = ecx << 4;
    ecx = ecx + ebx + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000B1F80u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B1F80: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B1F95; /* je: equal / zero */

loc_000B1F86: ;
    PUSH32(esp, 0x000B1F8Bu); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_000B1F8B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000B1F95u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B1F95: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x000B1F9Du); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_000B1F9D: ;
    goto loc_000B1F5C;

loc_000B1F9F: ;
    eax = MEM32(xml1_character_talent_map_resolve(esi+0x34u)+4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    ebp = xml1_character_talent_map_resolve(esi+0x34u);
    if (CMP_EQ(_fa, _fb)) goto loc_000B1FC5; /* je: equal / zero */

loc_000B1FAC: ;
    ecx = eax + 1;
    ecx = ecx << 4;
    ecx = MEM32(ecx + ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B1FC5; /* je: equal / zero */

loc_000B1FBD: ;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x000B1FC5u); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_000B1FC5: ;
    ebx = eax;
    MEM32(esp + 0x14) = ebx;
    goto loc_000B1FD0;

    /* nop */

loc_000B1FD0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B1FE0; /* jne: not equal / not zero */

loc_000B1FD8: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B20EC; /* je: equal / zero */

loc_000B1FE0: ;
    PUSH32(esp, 0x000B1FE5u); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_000B1FE5: ;
    edx = MEM32(eax);
    ecx = ebx;
    ecx = ecx << 4;
    ecx = ecx + ebp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000B1FF6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B1FF6: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B20D6; /* je: equal / zero */

loc_000B2000: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(ebp + edx*4 + (xml1_character_talent_map_contains(ebp)?0x141cu:0x168u));
    SET_LO8(edx, MEM8(esp + 0x20));
    eax = ecx;
    ebx = 0; /* xor self */
    eax = xml1_talent_record_get(eax, XML1_TALENT_CURRENT);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B2020; /* je: equal / zero */

loc_000B201B: ;
    ecx = xml1_talent_record_get(ecx, XML1_TALENT_PENDING);
    eax = eax + ecx;

loc_000B2020: ;
    edx = MEM32(edi);
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = edi;
    MEM8(esp + 0x18) = LO8(eax);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000B2032u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B2032: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B20D2; /* je: equal / zero */

loc_000B203A: ;
    /* nop */

loc_000B2040: ;
    _fa = (uint32_t)(MEM32(esi + 0x440)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x440), 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B20D2; /* je: equal / zero */

loc_000B204D: ;
    PUSH32(esp, 0x000B2052u); RECOMP_ABI_CALL(0x00096740u, xml1_guest_powerup_definition_allocate); /* call 0x00096740 */

loc_000B2052: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B20D2; /* je: equal / zero */

loc_000B2058: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x000B2066u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B2066: ;
    fp_push(MEMF(ebp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B20B1; /* jp: parity */

loc_000B2076: ;
    eax = MEM32(esi + 0x440);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax;
    MEM32(esi + 0x440) = eax;
    MEM32(esi + edx * 8 + 0x3B4) = ebp;
    PUSH32(esp, 0x000B2091u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000B2091: ;
    edx = MEM32(eax);
    ebp = MEM32(esi + 0x440);
    ecx = esi + 0x20C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x000B20A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B20A8: ;
    MEM32(esi + ebp * 8 + 0x3B8) = eax;
    goto loc_000B20BA;

loc_000B20B1: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000B20B7u); RECOMP_ABI_CALL(0x000967B0u, xml1_guest_powerup_definition_release); /* call 0x000967B0 */

loc_000B20B7: ;
    esp = esp + 4;

loc_000B20BA: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000B20CAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B20CA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B2040; /* jne: not equal / not zero */

loc_000B20D2: ;
    ebx = MEM32(esp + 0x14);

loc_000B20D6: ;
    ebp = xml1_character_talent_map_resolve(esi+0x34u);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x000B20E1u); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_000B20E1: ;
    MEM32(esp + 0x14) = eax;
    ebx = eax;
    goto loc_000B1FD0;

loc_000B20EC: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B2158; /* je: equal / zero */

loc_000B20F4: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B2117; /* je: equal / zero */

loc_000B20FE: ;
    ecx = eax + 1;
    ecx = ecx << 4;
    ecx = MEM32(ecx + ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3FFFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B2117; /* je: equal / zero */

loc_000B210F: ;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x000B2117u); RECOMP_ABI_CALL(0x00171BB0u, sub_00171BB0); /* call 0x00171BB0 */

loc_000B2117: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B2125; /* jne: not equal / not zero */

loc_000B2121: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B2158; /* je: equal / zero */

loc_000B2125: ;
    PUSH32(esp, 0x000B212Au); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_000B212A: ;
    edx = MEM32(eax);
    ecx = ebx;
    ecx = ecx << 4;
    ecx = ecx + ebp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000B213Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B213B: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B214E; /* je: equal / zero */

loc_000B2141: ;
    PUSH32(esp, 0x000B2146u); RECOMP_ABI_CALL(0x000B5980u, xml1_guest_talent_manager_get); /* call 0x000B5980 */

loc_000B2146: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x000B214Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B214E: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x000B2156u); RECOMP_ABI_CALL(0x000EA8E0u, sub_000EA8E0); /* call 0x000EA8E0 */

loc_000B2156: ;
    goto loc_000B2117;

loc_000B2158: ;
    ebx = esi + 4;
    ebp = 0; /* xor self */
    ecx = ebx;
    MEM32(esp + 0x20) = ebp;
    PUSH32(esp, 0x000B2168u); RECOMP_ABI_CALL(0x00047690u, sub_00047690); /* call 0x00047690 */

loc_000B2168: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000B22A7; /* jle: less or equal (signed <=) */

loc_000B2170: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_000B2194; /* je: equal / zero */

loc_000B2180: ;
    PUSH32(esp, 0x000B2185u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_000B2185: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x000B2194u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B2194: ;
    PUSH32(esp, 0x000B2199u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_000B2199: ;
    PUSH32(esp, 0);
    edi = eax;
    eax = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = ebx;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x000B21ADu); RECOMP_ABI_CALL(0x00047820u, sub_00047820); /* call 0x00047820 */

loc_000B21AD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x000B21BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B21BA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B228F; /* je: equal / zero */

loc_000B21C2: ;
    _fa = (uint32_t)(MEM32(esi + 0x440)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x440), 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B2284; /* je: equal / zero */

loc_000B21CF: ;
    PUSH32(esp, 0x000B21D4u); RECOMP_ABI_CALL(0x00096740u, xml1_guest_powerup_definition_allocate); /* call 0x00096740 */

loc_000B21D4: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B2284; /* je: equal / zero */

loc_000B21DE: ;
    PUSH32(esp, 0x000B21E3u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_000B21E3: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    ebp = eax;
    eax = MEM32(ebp);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x000B21FEu); RECOMP_ABI_CALL(0x00047820u, sub_00047820); /* call 0x00047820 */

loc_000B21FE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x000B220Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B220B: ;
    fp_push(MEMF(edi + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000B2244; /* jp: parity */

loc_000B221B: ;
    eax = MEM32(esi + 0x440);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x440) = eax;
    edx = eax;
    MEM32(esi + edx * 8 + 0x3B4) = edi;
    eax = MEM32(esi + 0x440);
    MEM32(esi + eax * 8 + 0x3B8) = 0xC;
    goto loc_000B224D;

loc_000B2244: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B224Au); RECOMP_ABI_CALL(0x000967B0u, xml1_guest_powerup_definition_release); /* call 0x000967B0 */

loc_000B224A: ;
    esp = esp + 4;

loc_000B224D: ;
    ebx = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, 0x000B225Bu); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_000B225B: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    edi = eax;
    ebp = MEM32(edi);
    PUSH32(esp, ecx);
    ebx = esi + 4;
    ecx = ebx;
    PUSH32(esp, 0x000B2271u); RECOMP_ABI_CALL(0x00047820u, sub_00047820); /* call 0x00047820 */

loc_000B2271: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x90); PUSH32(esp, 0x000B227Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B227A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B21C2; /* jne: not equal / not zero */

loc_000B2282: ;
    goto loc_000B228F;

loc_000B2284: ;
    ecx = ebx;
    PUSH32(esp, 0x000B228Bu); RECOMP_ABI_CALL(0x00047690u, sub_00047690); /* call 0x00047690 */

loc_000B228B: ;
    MEM32(esp + 0x20) = eax;

loc_000B228F: ;
    ebp = MEM32(esp + 0x20);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ebx;
    MEM32(esp + 0x20) = ebp;
    PUSH32(esp, 0x000B229Fu); RECOMP_ABI_CALL(0x00047690u, sub_00047690); /* call 0x00047690 */

loc_000B229F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B2170; /* jl: less (signed <) */

loc_000B22A7: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_000B22C2; /* je: equal / zero */

loc_000B22B3: ;
    PUSH32(esp, 0x000B22B8u); RECOMP_ABI_CALL(0x0007F850u, sub_0007F850); /* call 0x0007F850 */

loc_000B22B8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x000B22C2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B22C2: ;
    esp = esp + 0xC;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B22D0
 * Original: 0x000B22D0 - 0x000B243F (367 bytes, 129 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B22D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B22D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x3AC);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esi + 0x3AC) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_000B243A; /* jne: not equal / not zero */

loc_000B22EC: ;
    eax = MEM32(esi + 0x398);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1C (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000B22FD; /* je: equal / zero */

loc_000B22F8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B2325; /* jne: not equal / not zero */

loc_000B22FD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000B2304u); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_000B2304: ;
    edi = eax;
    PUSH32(esp, 0x000B230Bu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_000B230B: ;
    ecx = esi + 0x20C;
    ebx = eax;
    eax = MEM32(edi);
    ebp = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x000B231Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B231D: ;
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x2C); PUSH32(esp, 0x000B2323u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B2323: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000B2325: ;
    edi = esi + 0x30C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B2381; /* je: equal / zero */

loc_000B232F: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B2381; /* je: equal / zero */

loc_000B2334: ;
    PUSH32(esp, 0x000B2339u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_000B2339: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000B2340u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B2340: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B235C; /* je: equal / zero */

loc_000B2344: ;
    eax = esi + 0x20C;
    PUSH32(esp, 0x3CAA88);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B2355u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B2355: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B2381; /* jne: not equal / not zero */

loc_000B235C: ;
    PUSH32(esp, 0x000B2361u); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_000B2361: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x000B2371u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B2371: ;
    PUSH32(esp, 0x000B2376u); RECOMP_ABI_CALL(0x00151EF0u, xml1_guest_sound_manager_get); /* call 0x00151EF0 */

loc_000B2376: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x98); PUSH32(esp, 0x000B2381u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B2381: ;
    PUSH32(esp, 0x000B2386u); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000B2386: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edi = esi + 0x20C;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x000B239Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B239C: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B23A4u); RECOMP_ABI_CALL(0x000B0F20u, sub_000B0F20); /* call 0x000B0F20 */

loc_000B23A4: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x000B23ADu); RECOMP_ABI_CALL(0x000B13E0u, sub_000B13E0); /* call 0x000B13E0 */

loc_000B23AD: ;
    _fa = (uint32_t)(MEM32(esi + 0x398)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x398), 0x1B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B2425; /* jne: not equal / not zero */

loc_000B23B6: ;
    PUSH32(esp, 0x000B23BBu); RECOMP_ABI_CALL(0x00056E90u, xml1_guest_character_manager_get_or_create); /* call 0x00056E90 */

loc_000B23BB: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x000B23C3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B23C3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B2425; /* je: equal / zero */

loc_000B23C7: ;
    PUSH32(esp, 0x000B23CCu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000B23CC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x178); PUSH32(esp, 0x000B23E0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B23E0: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B23F5; /* je: equal / zero */

loc_000B23E8: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B23F2u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_000B23F2: ;
    esp = esp + 4;

loc_000B23F5: ;
    PUSH32(esp, 0x000B23FAu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000B23FA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x178); PUSH32(esp, 0x000B240Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B240E: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_000B2425; /* je: equal / zero */

loc_000B2418: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B2422u); RECOMP_ABI_CALL(0x00138400u, sub_00138400); /* call 0x00138400 */

loc_000B2422: ;
    esp = esp + 4;

loc_000B2425: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x000B2432u); RECOMP_ABI_CALL(0x000B1F20u, sub_000B1F20); /* call 0x000B1F20 */

loc_000B2432: ;
    ecx = esi;
    PUSH32(esp, 0x000B2439u); RECOMP_ABI_CALL(0x000B1150u, sub_000B1150); /* call 0x000B1150 */

loc_000B2439: ;
    POP32(esp, edi);

loc_000B243A: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B2440
 * Original: 0x000B2440 - 0x000B2483 (67 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B2440: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi;
    ecx = 0x14;
    /* nop */

loc_000B2450: ;
    MEM8(eax) = 0;
    eax = eax + 0x44;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B2450; /* jne: not equal / not zero */

loc_000B2459: ;
    ecx = esi + 0x554;
    PUSH32(esp, 0x000B2464u); RECOMP_ABI_CALL(0x000B13A0u, sub_000B13A0); /* call 0x000B13A0 */

loc_000B2464: ;
    MEM32(esi + 0x5B4) = 0;
    ecx = esi;
    MEM32(esi + 0x5B8) = 0;
    PUSH32(esp, 0x000B247Fu); RECOMP_ABI_CALL(0x000B1AB0u, sub_000B1AB0); /* call 0x000B1AB0 */

loc_000B247F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B2490
 * Original: 0x000B2490 - 0x000B28EC (1116 bytes, 328 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2490(void)
{
    /* XML1 OWNED CHARACTER TALENT MAP */
    /* XML1 SIX BIT TALENT RECORD */
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B2490: ;
    esp = esp - 0x128;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0x30;
    PUSH32(esp, 0x000B24A5u); RECOMP_ABI_CALL(0x000B1330u, sub_000B1330); /* call 0x000B1330 */

loc_000B24A5: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000B24B0u); RECOMP_ABI_CALL(0x000B1560u, sub_000B1560); /* call 0x000B1560 */

loc_000B24B0: ;
    edi = MEM32(esp + 0x13C);
    ebx = 0; /* xor self */
    esp = esp + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esp + 0x20) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_000B25AC; /* jle: less or equal (signed <=) */

loc_000B24C8: ;
    goto loc_000B24D0;

    /* nop */

loc_000B24D0: ;
    ecx = MEM32(esp + ebx * 4 + 0x30);
    MEM32(esp + 0x1C) = ecx;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x000B24E1u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000B24E1: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B259C; /* je: equal / zero */

loc_000B24EB: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000B24F1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B24F1: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B259C; /* je: equal / zero */

loc_000B2513: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x000B251Bu); RECOMP_ABI_CALL(0x000B1190u, sub_000B1190); /* call 0x000B1190 */

loc_000B251B: ;
    ecx = esi;
    PUSH32(esp, 0x000B2522u); RECOMP_ABI_CALL(0x0002E290u, sub_0002E290); /* call 0x0002E290 */

loc_000B2522: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B2541; /* je: equal / zero */

loc_000B2526: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x000B252Fu); RECOMP_ABI_CALL(0x0002E290u, sub_0002E290); /* call 0x0002E290 */

loc_000B252F: ;
    ecx = eax;
    PUSH32(esp, 0x000B2536u); RECOMP_ABI_CALL(0x000ED320u, sub_000ED320); /* call 0x000ED320 */

loc_000B2536: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B2541; /* je: equal / zero */

loc_000B253A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x000B2541u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B2541: ;
    PUSH32(esp, 0x000B2546u); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000B2546: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x168); PUSH32(esp, 0x000B2558u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B2558: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B257F; /* jne: not equal / not zero */

loc_000B2560: ;
    ecx = esi;
    PUSH32(esp, 0x000B2567u); RECOMP_ABI_CALL(0x0002E290u, sub_0002E290); /* call 0x0002E290 */

loc_000B2567: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B257F; /* je: equal / zero */

loc_000B256B: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x000B2574u); RECOMP_ABI_CALL(0x0002E290u, sub_0002E290); /* call 0x0002E290 */

loc_000B2574: ;
    ecx = eax;
    PUSH32(esp, 0x000B257Bu); RECOMP_ABI_CALL(0x000ED320u, sub_000ED320); /* call 0x000ED320 */

loc_000B257B: ;
    MEM32(esp + 0x20) = eax;

loc_000B257F: ;
    ecx = esi;
    PUSH32(esp, 0x000B2586u); RECOMP_ABI_CALL(0x0002E290u, sub_0002E290); /* call 0x0002E290 */

loc_000B2586: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B259C; /* je: equal / zero */

loc_000B258A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x000B2595u); RECOMP_ABI_CALL(0x0002E290u, sub_0002E290); /* call 0x0002E290 */

loc_000B2595: ;
    ecx = eax;
    PUSH32(esp, 0x000B259Cu); RECOMP_ABI_CALL(0x000ED380u, sub_000ED380); /* call 0x000ED380 */

loc_000B259C: ;
    edi = MEM32(esp + 0x134);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B24D0; /* jl: less (signed <) */

loc_000B25AC: ;
    eax = MEM32(esp + 0x140);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = ebp;
    PUSH32(esp, 0x000B25BFu); RECOMP_ABI_CALL(0x000B1F20u, sub_000B1F20); /* call 0x000B1F20 */

loc_000B25BF: ;
    eax = MEM32(ebp + 0x440);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000B25EA; /* jle: less or equal (signed <=) */

loc_000B25CB: ;
    esi = ebp + 0x3BC;

loc_000B25D1: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 0x000B25DCu); RECOMP_ABI_CALL(0x00094FE0u, sub_00094FE0); /* call 0x00094FE0 */

loc_000B25DC: ;
    eax = MEM32(ebp + 0x440);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B25D1; /* jl: less (signed <) */

loc_000B25EA: ;
    SET_LO8(edx, MEM8(ebp + 0x32));
    ebx = ebp + 4;
    SET_LO8(edx, LO8(edx) & 0xFE);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM8(ebx + 0x2E) = LO8(edx);
    MEM8(esp + 0x1B) = 1;
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000B28CC; /* jle: less or equal (signed <=) */

loc_000B2609: ;
    /* nop */

loc_000B2610: ;
    edx = MEM32(esp + eax * 4 + 0x30);
    ecx = esp + 0x24;
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, 0x000B2621u); RECOMP_ABI_CALL(0x0006BF80u, sub_0006BF80); /* call 0x0006BF80 */

loc_000B2621: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B28B4; /* je: equal / zero */

loc_000B262B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000B2631u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B2631: ;
    edx = MEM32(0x485878);
    edx = edx + 0x21;
    ecx = edx;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(MEM32(eax + edx * 4 + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + edx * 4 + 0x14), edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B28B4; /* je: equal / zero */

loc_000B2653: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x000B265Bu); RECOMP_ABI_CALL(0x000B1460u, sub_000B1460); /* call 0x000B1460 */

loc_000B265B: ;
    ecx = MEM32(0x44F200);
    SET_LO8(edx, MEM8(ebp + 0x22));
    MEM32(esp + 0x2C) = ecx;
    PUSH32(esp, 3);
    ecx = ebx;
    MEM8(esp + 0x17) = LO8(edx);
    PUSH32(esp, 0x000B2675u); RECOMP_ABI_CALL(0x00047360u, sub_00047360); /* call 0x00047360 */

loc_000B2675: ;
    ecx = ZX8(MEM8(esp + 0x13));
    edx = ZX8(MEM8(ebp + 0x1C));
    eax = ZX8(LO8(eax));
    eax = eax + ecx;
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM32(esp + 0x14) = edx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(0x44F204); /* fmul dword ptr [0x44f204] */
    fp_top() = fp_top() + MEMF(esp + 0x2C); /* fadd dword ptr [esp + 0x2c] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    PUSH32(esp, 0x000B26A4u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000B26A4: ;
    eax = ZX8(LO8(eax));
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(0x44F208); /* fmul dword ptr [0x44f208] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D3B08)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3d3b08] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B26CC; /* jnp: not parity */

loc_000B26C4: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3D3B08)); /* fld float */

loc_000B26CC: ;
    PUSH32(esp, 0x000B26D1u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000B26D1: ;
    ecx = MEM32(0x44F1F4);
    MEM16(esi + 0x2BC) = LO16(eax);
    SET_LO8(edx, MEM8(ebp + 0x21));
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, 2);
    ecx = ebx;
    MEM8(esp + 0x17) = LO8(edx);
    PUSH32(esp, 0x000B26F2u); RECOMP_ABI_CALL(0x00047360u, sub_00047360); /* call 0x00047360 */

loc_000B26F2: ;
    ecx = ZX8(MEM8(esp + 0x13));
    edx = ZX8(MEM8(ebp + 0x1C));
    eax = ZX8(LO8(eax));
    eax = eax + ecx;
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM32(esp + 0x14) = edx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(0x44F1F8); /* fmul dword ptr [0x44f1f8] */
    fp_top() = fp_top() + MEMF(esp + 0x28); /* fadd dword ptr [esp + 0x28] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    PUSH32(esp, 0x000B2721u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000B2721: ;
    eax = ZX8(LO8(eax));
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = fp_top() * MEMF(0x44F1FC); /* fmul dword ptr [0x44f1fc] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3D3B08)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3d3b08] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000B2749; /* jnp: not parity */

loc_000B2741: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3D3B08)); /* fld float */

loc_000B2749: ;
    PUSH32(esp, 0x000B274Eu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_000B274E: ;
    MEM16(esi + 0x246) = LO16(eax);
    PUSH32(esp, 0x000B275Au); RECOMP_ABI_CALL(0x00080C80u, sub_00080C80); /* call 0x00080C80 */

loc_000B275A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000B2761u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B2761: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B27FF; /* jne: not equal / not zero */

loc_000B2769: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B27FF; /* je: equal / zero */

loc_000B2775: ;
    ecx = MEM32(esi + 0x2D8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000B2782u); RECOMP_ABI_CALL(0x000B13E0u, sub_000B13E0); /* call 0x000B13E0 */

loc_000B2782: ;
    edi = MEM32(esp + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B27C7; /* je: equal / zero */

loc_000B278A: ;
    PUSH32(esp, 0x000B278Fu); RECOMP_ABI_CALL(0x000E9E50u, sub_000E9E50); /* call 0x000E9E50 */

loc_000B278F: ;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000B279Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B279A: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B27A7; /* jne: not equal / not zero */

loc_000B27A0: ;
    eax = 0x3C806C;
    goto loc_000B27BD;

loc_000B27A7: ;
    PUSH32(esp, 0x000B27ACu); RECOMP_ABI_CALL(0x00199D50u, sub_00199D50); /* call 0x00199D50 */

loc_000B27AC: ;
    edi = edi & 0xFFFFFF;
    ecx = MEM32(eax + edi * 4 + 4);
    eax = ecx + eax + 0x4008;

loc_000B27BD: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000B27C7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B27C7: ;
    PUSH32(esp, 0x000B27CCu); RECOMP_ABI_CALL(0x00072CF0u, xml1_guest_effect_manager_get); /* call 0x00072CF0 */

loc_000B27CC: ;
    edi = MEM32(esi + 0x2D8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = edi + 0x20C;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x000B27E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B27E5: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000B27EDu); RECOMP_ABI_CALL(0x000B0F20u, sub_000B0F20); /* call 0x000B0F20 */

loc_000B27ED: ;
    ecx = MEM32(esi + 0x2D8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000B27FAu); RECOMP_ABI_CALL(0x000B13E0u, sub_000B13E0); /* call 0x000B13E0 */

loc_000B27FA: ;
    MEM8(esp + 0x1B) = 0;

loc_000B27FF: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x000B280Bu); RECOMP_ABI_CALL(0x00030D90u, sub_00030D90); /* call 0x00030D90 */

loc_000B280B: ;
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x000B2814u); RECOMP_ABI_CALL(0x00048690u, sub_00048690); /* call 0x00048690 */

loc_000B2814: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x000B281Eu); RECOMP_ABI_CALL(0x0002E290u, sub_0002E290); /* call 0x0002E290 */

loc_000B281E: ;
    ecx = eax;
    PUSH32(esp, 0x000B2825u); RECOMP_ABI_CALL(0x000ED300u, sub_000ED300); /* call 0x000ED300 */

loc_000B2825: ;
    ecx = esi;
    PUSH32(esp, 0x000B282Cu); RECOMP_ABI_CALL(0x00030890u, sub_00030890); /* call 0x00030890 */

loc_000B282C: ;
    ecx = esi;
    PUSH32(esp, 0x000B2833u); RECOMP_ABI_CALL(0x0002F600u, sub_0002F600); /* call 0x0002F600 */

loc_000B2833: ;
    ecx = esi;
    PUSH32(esp, 0x000B283Au); RECOMP_ABI_CALL(0x00033890u, sub_00033890); /* call 0x00033890 */

loc_000B283A: ;
    PUSH32(esp, 0x000B283Fu); RECOMP_ABI_CALL(0x00183D20u, sub_00183D20); /* call 0x00183D20 */

loc_000B283F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x168); PUSH32(esp, 0x000B2851u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B2851: ;
    PUSH32(esp, 0x000B2856u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000B2856: ;
    edi = xml1_character_talent_map_resolve(ebx+0x30u);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4D72F5);
    ecx = edi;
    PUSH32(esp, 0x000B286Du); RECOMP_ABI_CALL(0x000B3BE0u, sub_000B3BE0); /* call 0x000B3BE0 */

loc_000B286D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B2878; /* jne: not equal / not zero */

loc_000B2874: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B2883; /* je: equal / zero */

loc_000B2878: ;
    SET_LO8(eax, xml1_talent_record_get(MEM32(edi + eax*4 + (xml1_character_talent_map_contains(edi)?0x141cu:0x168u)), XML1_TALENT_CURRENT));
    goto loc_000B2885;

loc_000B2883: ;
    SET_LO8(eax, 0); /* xor self */

loc_000B2885: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(eax, (CMP_A(_fa & _fb, 0)) ? 1 : 0); /* seta */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x5B4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x19C); PUSH32(esp, 0x000B289Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B289E: ;
    PUSH32(esp, 0x000B28A3u); RECOMP_ABI_CALL(0x000F9A00u, sub_000F9A00); /* call 0x000F9A00 */

loc_000B28A3: ;
    ecx = MEM32(esi + 0x5B4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x168); PUSH32(esp, 0x000B28B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B28B4: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x134);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000B2610; /* jl: less (signed <) */

loc_000B28CC: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ebp;
    PUSH32(esp, 0x000B28D5u); RECOMP_ABI_CALL(0x000B22D0u, sub_000B22D0); /* call 0x000B22D0 */

loc_000B28D5: ;
    PUSH32(esp, 0x000B28DAu); RECOMP_ABI_CALL(0x00059CE0u, sub_00059CE0); /* call 0x00059CE0 */

loc_000B28DA: ;
    PUSH32(esp, 0x000B28DFu); RECOMP_ABI_CALL(0x0005BF20u, sub_0005BF20); /* call 0x0005BF20 */

loc_000B28DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x128;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000B28F0
 * Original: 0x000B28F0 - 0x000B2952 (98 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B28F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B28F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000B28F9u); RECOMP_ABI_CALL(0x000B2440u, sub_000B2440); /* call 0x000B2440 */

loc_000B28F9: ;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(esi + 0x60C) = eax;
    MEM32(esi + 0x610) = eax;
    edx = 0x13;
    edi = 0; /* xor self */

loc_000B2910: ;
    ecx = ecx + ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    ecx = ecx | 1;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B2910; /* jne: not equal / not zero */

loc_000B291C: ;
    MEM32(esi + 0x60C) = ecx;
    MEM32(esi + 0x610) = edi;
    edx = esi + 0x5BC;
    edi = edi;

loc_000B2930: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x610);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B2930; /* jl: less (signed <) */

loc_000B294D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B2960
 * Original: 0x000B2960 - 0x000B29C4 (100 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B2960: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + 0x1E8;
    ebx = 4;
    edi = edi;

loc_000B2970: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B29BA; /* je: equal / zero */

loc_000B2976: ;
    esi = esi & MEM32(0x4D4034);
    PUSH32(esp, esi);
    ecx = 0x4D2A98;
    PUSH32(esp, 0x000B2987u); RECOMP_ABI_CALL(0x000B1950u, sub_000B1950); /* call 0x000B1950 */

loc_000B2987: ;
    ecx = MEM32(0x4D4038);
    eax = 1;
    eax = eax << LO8(ecx);
    MEM32(esi * 4 + 0x4D3FB4) = MEM32(esi * 4 + 0x4D3FB4) + eax;
    if (((int32_t)MEM32(esi * 4 + 0x4D3FB4) >= 0)) goto loc_000B29BA; /* jns: not sign (positive) */

loc_000B299D: ;
    MEM32(esi * 4 + 0x4D3FB4) = esi;
    ecx = MEM32(0x4D4038);
    edx = 1;
    edx = edx << LO8(ecx);
    edx = edx | esi;
    MEM32(esi * 4 + 0x4D3FB4) = edx;

loc_000B29BA: ;
    edi = edi + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B2970; /* jne: not equal / not zero */

loc_000B29C0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B29D0
 * Original: 0x000B29D0 - 0x000B2A34 (100 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B29D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B29D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + 0x1FC;
    ebx = 3;
    edi = edi;

loc_000B29E0: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B2A2A; /* je: equal / zero */

loc_000B29E6: ;
    esi = esi & MEM32(0x4D2A8C);
    PUSH32(esp, esi);
    ecx = 0x4D2480;
    PUSH32(esp, 0x000B29F7u); RECOMP_ABI_CALL(0x000B19D0u, sub_000B19D0); /* call 0x000B19D0 */

loc_000B29F7: ;
    ecx = MEM32(0x4D2A90);
    eax = 1;
    eax = eax << LO8(ecx);
    MEM32(esi * 4 + 0x4D2A3C) = MEM32(esi * 4 + 0x4D2A3C) + eax;
    if (((int32_t)MEM32(esi * 4 + 0x4D2A3C) >= 0)) goto loc_000B2A2A; /* jns: not sign (positive) */

loc_000B2A0D: ;
    MEM32(esi * 4 + 0x4D2A3C) = esi;
    ecx = MEM32(0x4D2A90);
    edx = 1;
    edx = edx << LO8(ecx);
    edx = edx | esi;
    MEM32(esi * 4 + 0x4D2A3C) = edx;

loc_000B2A2A: ;
    edi = edi + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000B29E0; /* jne: not equal / not zero */

loc_000B2A30: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B2A40
 * Original: 0x000B2A40 - 0x000B2A4C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2A40(void)
{

loc_000B2A40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B2A48u); RECOMP_ABI_CALL(0x000B28F0u, sub_000B28F0); /* call 0x000B28F0 */

loc_000B2A48: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B2A50
 * Original: 0x000B2A50 - 0x000B2AF2 (162 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2A50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B2A50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xB1930);
    PUSH32(esp, 0xB1B10);
    PUSH32(esp, 0x20);
    esi = ecx;
    PUSH32(esp, 0xA4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B2A6Bu); RECOMP_ABI_CALL(0x003418A8u, sub_003418A8); /* call 0x003418A8 */

loc_000B2A6B: ;
    edi = 0; /* xor self */
    MEM32(esi + 0x1508) = edi;
    MEM32(esi + 0x150C) = edi;
    MEM32(esi + 0x1510) = edi;
    MEM32(esi + 0x1514) = edi;
    ecx = esi;
    MEM32(esi + 0x1518) = edi;
    PUSH32(esp, 0x000B2A92u); RECOMP_ABI_CALL(0x000B1A50u, sub_000B1A50); /* call 0x000B1A50 */

loc_000B2A92: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x159C) = edi;
    MEM32(esi + 0x15A0) = edi;
    ecx = 0x1F;
    edx = 0; /* xor self */

loc_000B2AA7: ;
    eax = eax + eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    eax = eax | 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B2AA7; /* jne: not equal / not zero */

loc_000B2AB3: ;
    MEM32(esi + 0x159C) = eax;
    MEM32(esi + 0x15A0) = edx;
    eax = 0; /* xor self */
    edx = esi + 0x151C;
    goto loc_000B2AD0;

    /* nop */

loc_000B2AD0: ;
    MEM32(edx) = eax;
    ecx = MEM32(esi + 0x15A0);
    edi = 1;
    edi = edi << LO8(ecx);
    edx = edx + 4;
    edi = edi | eax;
    MEM32(edx + -4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B2AD0; /* jl: less (signed <) */

loc_000B2AED: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B2B00
 * Original: 0x000B2B00 - 0x000B2C72 (370 bytes, 104 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2B00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B2B00: ;
    esp = esp - 8;
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, 0x000B2B0Bu); RECOMP_ABI_CALL(0x000A4120u, sub_000A4120); /* call 0x000A4120 */

loc_000B2B0B: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 8) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_000B2C69; /* jle: less or equal (signed <=) */

loc_000B2B22: ;
    PUSH32(esp, ebx);
    eax = eax + 4;
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, edi);
    /* nop */

loc_000B2B30: ;
    _fa = (uint32_t)(MEM32(0x4C8A00)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x4C8A00), 0x100 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B2C5D; /* je: equal / zero */

loc_000B2B40: ;
    eax = MEM32(0x4C89D8);
    edi = MEM32(eax * 4 + 0x4C85D0);
    ecx = edi;
    ecx = ecx & 0x1F;
    esi = edi;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((5) & 31u));
    ebx = 1;
    ebx = ebx << LO8(ecx);
    esi = esi << 2;
    MEM32(esi + 0x4C89E0) = MEM32(esi + 0x4C89E0) | ebx;
    eax = MEM32(0x4C89D8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    MEM32(0x4C89D8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000B2B82; /* jl: less (signed <) */

loc_000B2B78: ;
    MEM32(0x4C89D8) = 0;

loc_000B2B82: ;
    edx = MEM32(0x4C89DC);
    ecx = MEM32(0x4C8A00);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x4C8A00) = ecx;
    ecx = edi + edi * 4;
    MEM32(0x4C89DC) = edx;
    edx = ecx * 4 + 0x4C71B0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000B2BACu); RECOMP_ABI_CALL(0x000A3E60u, sub_000A3E60); /* call 0x000A3E60 */

loc_000B2BAC: ;
    MEM32(esi + 0x4C85B0) = MEM32(esi + 0x4C85B0) | ebx;
    edi = MEM32(edi * 4 + 0x4C8A04);
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B2C3A; /* je: equal / zero */

loc_000B2BC0: ;
    edx = MEM32(0x4C8E04);
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax);
    eax = eax & edx;
    edx = edx & edi;
    ecx = eax + eax * 4;
    eax = edx + edx * 4;
    edx = MEM32(ecx * 4 + 0x4C71B4);
    MEM32(eax * 4 + 0x4C71B4) = edx;
    edx = MEM32(ecx * 4 + 0x4C71B8);
    ecx = ecx * 4 + 0x4C71B0;
    eax = eax * 4 + 0x4C71B0;
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    SET_LO8(edx, MEM8(ecx + 0x10));
    MEM8(eax + 0x10) = LO8(edx);
    SET_LO8(edx, MEM8(ecx + 0x11));
    MEM8(eax + 0x11) = LO8(edx);
    SET_LO8(ebx, MEM8(ecx + 0x12));
    SET_LO8(edx, MEM8(eax + 0x12));
    SET_LO8(edx, LO8(edx) ^ LO8(ebx));
    SET_LO8(ebx, MEM8(eax + 0x12));
    SET_LO8(edx, LO8(edx) & 1);
    SET_LO8(ebx, LO8(ebx) ^ LO8(edx));
    MEM8(eax + 0x12) = LO8(ebx);
    SET_LO8(ecx, MEM8(ecx + 0x12));
    SET_LO8(edx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 2);
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    MEM8(eax + 0x12) = LO8(ecx);
    edx = MEM32(ebp + 0x18);
    MEM32(ebp + edx * 4 + 4) = edi;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000B2C3A: ;
    eax = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_000B2B30; /* jl: less (signed <) */

loc_000B2C5D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = ebp;
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_000B2C69: ;
    eax = ebp;
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B2C80
 * Original: 0x000B2C80 - 0x000B2C93 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2C80(void)
{

loc_000B2C80: ;
    PUSH32(esp, 0xB1930);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0xA4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B2C92u); RECOMP_ABI_CALL(0x00341848u, sub_00341848); /* call 0x00341848 */

loc_000B2C92: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000B2CA0
 * Original: 0x000B2CA0 - 0x000B2D0F (111 bytes, 32 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B2CA0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x1E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B2D0A; /* je: equal / zero */

loc_000B2CAF: ;
    edx = MEM32(0x4D4034);
    ecx = MEM32(esp + 0x10);
    eax = eax & edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xA4);
    eax = eax + 0x4D2A98;
    MEM32(ecx) = eax;
    ecx = MEM32(esp + 0x14);
    edx = eax + 0x40;
    MEM32(ecx) = edx;
    ecx = MEM32(esp + 0x18);
    edx = eax + 0x60;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x80);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = edx;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax + 0x84);
    MEM32(ecx) = edx;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B2D05; /* je: equal / zero */

loc_000B2CFA: ;
    eax = eax + 0x88;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B2D05u); RECOMP_ABI_CALL(0x000B2B00u, sub_000B2B00); /* call 0x000B2B00 */

loc_000B2D05: ;
    SET_LO8(eax, 1);
    esp += 32; return; /* ret 28 */

loc_000B2D0A: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_000B2D10
 * Original: 0x000B2D10 - 0x000B2DBB (171 bytes, 48 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B2D10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi + edi * 4 + 0x1E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B2D3B; /* jne: not equal / not zero */

loc_000B2D23: ;
    ecx = 0x4D2A98;
    PUSH32(esp, 0x000B2D2Du); RECOMP_ABI_CALL(0x00134970u, sub_00134970); /* call 0x00134970 */

loc_000B2D2D: ;
    eax = MEM32(eax * 4 + 0x4D3FB4);
    MEM32(esi + edi * 4 + 0x1E8) = eax;

loc_000B2D3B: ;
    esi = MEM32(esi + edi * 4 + 0x1E8);
    edi = MEM32(0x4D4034);
    ecx = MEM32(esp + 0x18);
    esi = esi & edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xA4);
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    esi = esi + 0x4D2A98;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B2D63u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B2D63: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, 0x20);
    edi = esi + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM8(edi + -1) = 0;
    PUSH32(esp, 0x000B2D77u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B2D77: ;
    eax = MEM32(esp + 0x38);
    PUSH32(esp, 0x20);
    MEM8(edi + 0x1F) = 0;
    PUSH32(esp, eax);
    edi = esi + 0x60;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000B2D8Bu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B2D8B: ;
    ecx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x48);
    edx = MEM32(esp + 0x34);
    MEM8(edi + 0x1F) = 0;
    esp = esp + 0x24;
    MEM32(esi + 0x80) = ecx;
    PUSH32(esp, eax);
    ecx = esi + 0x88;
    MEM32(esi + 0x84) = edx;
    PUSH32(esp, 0x000B2DB6u); RECOMP_ABI_CALL(0x000B2B00u, sub_000B2B00); /* call 0x000B2B00 */

loc_000B2DB6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_000B2DC0
 * Original: 0x000B2DC0 - 0x000B2E47 (135 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B2DC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x35005B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x3D3E18;
    eax = MEM32(esi + 0x3B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_000B2E12; /* je: equal / zero */

loc_000B2DF5: ;
    PUSH32(esp, 0x000B2DFAu); RECOMP_ABI_CALL(0x00089FC0u, sub_00089FC0); /* call 0x00089FC0 */

loc_000B2DFA: ;
    ecx = MEM32(esi + 0x3B0);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000B2E08u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B2E08: ;
    MEM32(esi + 0x3B0) = 0;

loc_000B2E12: ;
    ecx = esi;
    PUSH32(esp, 0x000B2E19u); RECOMP_ABI_CALL(0x000B2960u, sub_000B2960); /* call 0x000B2960 */

loc_000B2E19: ;
    ecx = esi;
    PUSH32(esp, 0x000B2E20u); RECOMP_ABI_CALL(0x000B29D0u, sub_000B29D0); /* call 0x000B29D0 */

loc_000B2E20: ;
    ecx = esi;
    PUSH32(esp, 0x000B2E27u); RECOMP_ABI_CALL(0x000B11E0u, sub_000B11E0); /* call 0x000B11E0 */

loc_000B2E27: ;
    ecx = esi + 4;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B2E37u); RECOMP_ABI_CALL(0x00048F90u, xml1_guest_character_stats_destroy); /* call 0x00048F90 */

loc_000B2E37: ;
    raven_character_race_reset(esi);
    raven_leader_definition_reset(esi);
    raven_transform_definition_reset(esi);
    raven_ai_definition_reset(esi);
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_000B2E50
 * Original: 0x000B2E50 - 0x000B2E5C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2E50(void)
{

loc_000B2E50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B2E58u); RECOMP_ABI_CALL(0x000B2A50u, sub_000B2A50); /* call 0x000B2A50 */

loc_000B2E58: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B2E60
 * Original: 0x000B2E60 - 0x000B2E7E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B2E60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000B2E68u); RECOMP_ABI_CALL(0x000B2DC0u, sub_000B2DC0); /* call 0x000B2DC0 */

loc_000B2E68: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B2E78; /* je: equal / zero */

loc_000B2E6F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B2E75u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000B2E75: ;
    esp = esp + 4;

loc_000B2E78: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B2E80
 * Original: 0x000B2E80 - 0x000B2EE2 (98 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B2E80: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(ecx + 0x29C0) = esi;
    MEM32(ecx + 0x29C4) = esi;
    MEM32(ecx + 0x29C8) = esi;
    edx = 0; /* xor self */
    goto loc_000B2EA0;

    /* nop */

loc_000B2EA0: ;
    eax = MEM32(ecx + 0x29C0);
    edi = MEM32(ecx + 0x29C8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x216) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x216 (32-bit) */
    MEM32(ecx + 0x29C0) = eax;
    MEM32(ecx + 0x29C8) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000B2ECE; /* jl: less (signed <) */

loc_000B2EC1: ;
    MEM32(ecx + 0x29C0) = esi;
    eax = 0x215;
    goto loc_000B2ECF;

loc_000B2ECE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000B2ECF: ;
    MEM32(ecx + eax * 4 + 0x2164) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x216) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x216 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000B2EA0; /* jl: less (signed <) */

loc_000B2EDF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000B2EF0
 * Original: 0x000B2EF0 - 0x000B2F0E (30 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2EF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000B2EF0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx + 8);
    if (4) _cf = (int)(((edx) >> (32 - (4))) & 1);
    edx = edx << 4;
    SET_LO16(edx, MEM16(edx + ecx + 0x18));
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax + ecx + 0x18)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(eax + ecx + 0x18) (16-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B2F10
 * Original: 0x000B2F10 - 0x000B2F18 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2F10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B2F10: ;
    ecx = ecx + 0xC;
    g_seh_ebp = ebp; sub_000B2F20(); return; /* tail jmp 0x000B2F20 */

}

/**
 * sub_000B2F20
 * Original: 0x000B2F20 - 0x000B2F95 (117 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B2F20: ;
    eax = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = esi;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    edx = eax + ecx * 4 + 0x29CC;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx & 0x1F;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(edx);
    edi = ~edi;
    ecx = ecx & edi;
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 0x29C0);
    edi = MEM32(eax + 0x29C8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x216) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x216 (32-bit) */
    MEM32(eax + 0x29C0) = ecx;
    MEM32(eax + 0x29C8) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000B2F7B; /* jl: less (signed <) */

loc_000B2F6A: ;
    MEM32(eax + 0x29C0) = 0;
    ecx = 0x215;
    goto loc_000B2F7C;

loc_000B2F7B: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000B2F7C: ;
    MEM32(eax + ecx * 4 + 0x2164) = esi;
    ecx = MEM32(eax + 0x2A10);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 0x2A10) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B2FA0
 * Original: 0x000B2FA0 - 0x000B2FC9 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000B2FA0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B2FC4; /* je: equal / zero */

loc_000B2FA8: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000B2FC4; /* je: equal / zero */

loc_000B2FAD: ;
    PUSH32(esp, 0x3D3E64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B2FB8u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B2FB8: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_000B2FC4: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B2FD0
 * Original: 0x000B2FD0 - 0x000B3022 (82 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B2FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B2FD0: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = ecx + 4;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000B2FE4u); RECOMP_ABI_CALL(0x0014E9F0u, sub_0014E9F0); /* call 0x0014E9F0 */

loc_000B2FE4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000B2FEF; /* jne: not equal / not zero */

loc_000B2FEB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000B2FFF; /* je: equal / zero */

loc_000B2FEF: ;
    ecx = esi + eax * 4 + 0x2A20;
    PUSH32(esp, 0x000B2FFBu); RECOMP_ABI_CALL(0x00013DC0u, sub_00013DC0); /* call 0x00013DC0 */

loc_000B2FFB: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000B2FFF: ;
    edx = ZX16(MEM16(esp + 8));
    PUSH32(esp, edx);
    PUSH32(esp, 0x3D3E6C);
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0x4D404C);
    PUSH32(esp, 0x000B3016u); RECOMP_ABI_CALL(0x001232C0u, sub_001232C0); /* call 0x001232C0 */

loc_000B3016: ;
    esp = esp + 0x10;
    eax = 0x4D404C;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B3030
 * Original: 0x000B3030 - 0x000B335C (812 bytes, 210 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3030(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B3030: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3500BC);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xA4));
    esp = esp - 0xA4;
    MEM32(esp + 4) = ecx;
    PUSH32(esp, ebx);
    ecx = esp + 0x64;
    PUSH32(esp, 0x000B3059u); RECOMP_ABI_CALL(0x00127350u, sub_00127350); /* call 0x00127350 */

loc_000B3059: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D3EA4);
    ecx = esp + 0x18;
    MEM32(esp + 0xB8) = 0;
    PUSH32(esp, 0x000B3074u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B3074: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x70;
    MEM8(esp + 0xBC) = 1;
    PUSH32(esp, 0x000B308Eu); RECOMP_ABI_CALL(0x00127510u, sub_00127510); /* call 0x00127510 */

loc_000B308E: ;
    SET_LO8(ebx, LO8(eax));
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    ecx = esp + 0x10;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0xB0) = 0;
    PUSH32(esp, 0x000B30A7u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B30A7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B30D5; /* je: equal / zero */

loc_000B30AB: ;
    ecx = esp + 0x64;
    MEM32(esp + 0xB0) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B30BFu); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_000B30BF: ;
    POP32(esp, ebx);
    ecx = MEM32(esp + 0xA4);
    MEM32(XBOX_FS_BASE) = ecx;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xB0)) >> 32) & 1);
    esp = esp + 0xB0;
    esp += 4; return; /* ret */

loc_000B30D5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D3E9C);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x000B30E6u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B30E6: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esp + 0x6C;
    MEM8(esp + 0xB8) = 2;
    PUSH32(esp, 0x000B30FCu); RECOMP_ABI_CALL(0x00125F00u, sub_00125F00); /* call 0x00125F00 */

loc_000B30FC: ;
    esi = eax;
    ecx = esp + 0x14;
    MEM32(esp + 0x24) = esi;
    MEM8(esp + 0xB4) = 0;
    PUSH32(esp, 0x000B3113u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B3113: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B3142; /* jne: not equal / not zero */

loc_000B3117: ;
    ecx = esp + 0x68;
    MEM32(esp + 0xB4) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B312Bu); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_000B312B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    ecx = MEM32(esp + 0xA4);
    MEM32(XBOX_FS_BASE) = ecx;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xB0)) >> 32) & 1);
    esp = esp + 0xB0;
    esp += 4; return; /* ret */

loc_000B3142: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D3E94);
    ecx = esp + 0x24;
    PUSH32(esp, 0x000B3154u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B3154: ;
    PUSH32(esp, 0);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(esp + 0xC4) = 3;
    PUSH32(esp, 0x000B316Au); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000B316A: ;
    ecx = esp + 0x1C;
    ebp = eax;
    MEM8(esp + 0xBC) = 0;
    PUSH32(esp, 0x000B317Du); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B317D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B332F; /* je: equal / zero */

loc_000B3185: ;
    esi = MEM32(ebp + 8);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax & ebp;
    esi = eax;
    if ((eax == 0)) goto loc_000B32ED; /* je: equal / zero */

loc_000B319B: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D3E90);
    ecx = esp + 0x68;
    PUSH32(esp, 0x000B31ABu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B31AB: ;
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(esp + 0xC0) = 4;
    PUSH32(esp, 0x000B31BFu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000B31BF: ;
    ecx = esp + 0x60;
    edi = eax;
    MEM8(esp + 0xBC) = 0;
    PUSH32(esp, 0x000B31D2u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B31D2: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D3E84);
    ecx = esp + 0x38;
    PUSH32(esp, 0x000B31E2u); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B31E2: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(esp + 0xC0) = 5;
    PUSH32(esp, 0x000B31F6u); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000B31F6: ;
    ecx = esp + 0x30;
    ebx = eax;
    MEM8(esp + 0xBC) = 0;
    PUSH32(esp, 0x000B3209u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B3209: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B32ED; /* je: equal / zero */

loc_000B3211: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B323A; /* je: equal / zero */

loc_000B3215: ;
    eax = MEM32(esp + 0x14);
    eax = MEM32(eax);
    ecx = ebx;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x000B3226u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000B3226: ;
    ecx = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x000B3232u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_000B3232: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B32ED; /* je: equal / zero */

loc_000B323A: ;
    ecx = edi;
    PUSH32(esp, 0x000B3241u); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000B3241: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B3247u); RECOMP_ABI_CALL(0x00341986u, sub_00341986); /* call 0x00341986 */

loc_000B3247: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x1C;
    edi = eax;
    PUSH32(esp, 0x000B325Au); RECOMP_ABI_CALL(0x00013EB0u, sub_00013EB0); /* call 0x00013EB0 */

loc_000B325A: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3CC13C);
    ecx = esp + 0x48;
    PUSH32(esp, 0x000B326Au); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B326A: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(esp + 0xC0) = 6;
    PUSH32(esp, 0x000B327Eu); RECOMP_ABI_CALL(0x001260E0u, xml1_guest_xml_node_find_attribute); /* call 0x001260E0 */

loc_000B327E: ;
    ecx = esp + 0x40;
    esi = eax;
    MEM8(esp + 0xBC) = 0;
    PUSH32(esp, 0x000B3291u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B3291: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_000B32A6; /* je: equal / zero */

loc_000B3295: ;
    ecx = esi;
    PUSH32(esp, 0x000B329Cu); RECOMP_ABI_CALL(0x00199EE0u, xml1_guest_xml_attribute_text); /* call 0x00199EE0 */

loc_000B329C: ;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x000B32A6u); RECOMP_ABI_CALL(0x00013EB0u, sub_00013EB0); /* call 0x00013EB0 */

loc_000B32A6: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(esi + 0x2A20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x216) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2A20), 0x216 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000B332F; /* je: equal / zero */

loc_000B32B6: ;
    edx = MEM32(esi + 8);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x000B32CDu); RECOMP_ABI_CALL(0x0014E9F0u, sub_0014E9F0); /* call 0x0014E9F0 */

loc_000B32CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFF (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000B332F; /* jne: not equal / not zero */

loc_000B32D4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000B332F; /* jne: not equal / not zero */

loc_000B32D8: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x000B32EDu); RECOMP_ABI_CALL(0x000B3360u, sub_000B3360); /* call 0x000B3360 */

loc_000B32ED: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x3D3E94);
    ecx = esp + 0x58;
    PUSH32(esp, 0x000B32FDu); RECOMP_ABI_CALL(0x00125DA0u, xml1_guest_xml_symbol_construct); /* call 0x00125DA0 */

loc_000B32FD: ;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, ebp);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    MEM8(esp + 0xC4) = 7;
    PUSH32(esp, 0x000B3314u); RECOMP_ABI_CALL(0x00126C30u, xml1_guest_xml_node_next_named_child); /* call 0x00126C30 */

loc_000B3314: ;
    ecx = esp + 0x50;
    ebp = eax;
    MEM8(esp + 0xBC) = 0;
    PUSH32(esp, 0x000B3327u); RECOMP_ABI_CALL(0x00125890u, xml1_guest_xml_symbol_release); /* call 0x00125890 */

loc_000B3327: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_000B3185; /* jne: not equal / not zero */

loc_000B332F: ;
    ecx = esp + 0x70;
    MEM32(esp + 0xBC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000B3343u); RECOMP_ABI_CALL(0x00127480u, sub_00127480); /* call 0x00127480 */

loc_000B3343: ;
    ecx = MEM32(esp + 0xB4);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xB0)) >> 32) & 1);
    esp = esp + 0xB0;
    esp += 4; return; /* ret */

}

/**
 * sub_000B3360
 * Original: 0x000B3360 - 0x000B3392 (50 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3360(void)
{

loc_000B3360: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x000B336Du); RECOMP_ABI_CALL(0x000B33A0u, sub_000B33A0); /* call 0x000B33A0 */

loc_000B336D: ;
    ecx = esi;
    PUSH32(esp, 0x000B3374u); RECOMP_ABI_CALL(0x000B8440u, sub_000B8440); /* call 0x000B8440 */

loc_000B3374: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esi + 8);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    eax = esi + edx * 4 + 0x2A20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B338Bu); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_000B338B: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000B33A0
 * Original: 0x000B33A0 - 0x000B33EA (74 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B33A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B33A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = edi + 0xC;
    ecx = ebx;
    PUSH32(esp, 0x000B33B0u); RECOMP_ABI_CALL(0x000B33F0u, sub_000B33F0); /* call 0x000B33F0 */

loc_000B33B0: ;
    ebp = eax;
    eax = MEM32(esp + 0x14);
    esi = ebp;
    PUSH32(esp, 2);
    esi = esi << 4;
    PUSH32(esp, eax);
    ecx = esi + ebx + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B33C8u); RECOMP_ABI_CALL(0x00011040u, sub_00011040); /* call 0x00011040 */

loc_000B33C8: ;
    MEM32(edi + 8) = ebp;
    esp = esp + 0xC;
    eax = 0x3FFFFFFF;
    MEM32(esi + edi + 0x10) = eax;
    MEM32(esi + edi + 0x14) = eax;
    MEM32(esi + edi + 0xC) = 0x7FFFFFFF;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B33F0
 * Original: 0x000B33F0 - 0x000B343A (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B33F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B33F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x29C4);
    eax = esi + 0x2164;
    PUSH32(esp, edi);
    edi = MEM32(eax + ecx * 4);
    ecx = edi;
    ecx = ecx & 0x1F;
    edx = edi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esi + edx * 4 + 0x29CC);
    edx = esi + edx * 4 + 0x29CC;
    ecx = ecx | ebx;
    MEM32(edx) = ecx;
    ecx = eax;
    PUSH32(esp, 0x000B342Eu); RECOMP_ABI_CALL(0x000B3440u, sub_000B3440); /* call 0x000B3440 */

loc_000B342E: ;
    MEM32(esi + 0x2A10) = MEM32(esi + 0x2A10) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x2A10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000B3440
 * Original: 0x000B3440 - 0x000B346C (44 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3440: ;
    eax = MEM32(ecx + 0x860);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x860) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x216) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x216 (32-bit) */
    eax = MEM32(ecx + 0x864);
    if (CMP_L(_fas, _fbs)) goto loc_000B3464; /* jl: less (signed <) */

loc_000B345A: ;
    MEM32(ecx + 0x860) = 0;

loc_000B3464: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x864) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000B3470
 * Original: 0x000B3470 - 0x000B3518 (168 bytes, 34 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3470: ;
    SET_LO8(ecx, MEM8(0x4D72E8));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B3512; /* jne: not equal / not zero */

loc_000B3483: ;
    edx = MEM32(0x4D72E8);
    edx = edx | eax;
    PUSH32(esp, edi);
    MEM32(0x4D72E8) = edx;
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    MEM32(0x4D4068) = 0x3D3E54;
    MEM32(0x4D4070) = 0x3FFFFFFF;
    MEM32(0x4D4074) = 0xFFFFFFFFu;
    MEM32(0x4D406C) = 0x3D3E24;
    MEM32(0x4D6A38) = edx;
    MEM32(0x4D6A3C) = edx;
    MEM32(0x4D6A40) = edx;
    ecx = 0x11;
    edi = 0x4D6A44;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0x4D4078;
    MEM32(0x4D6A88) = edx;
    PUSH32(esp, 0x000B34ECu); RECOMP_ABI_CALL(0x000B2E80u, sub_000B2E80); /* call 0x000B2E80 */

loc_000B34EC: ;
    eax = 0; /* xor self */
    ecx = 0x216;
    edi = 0x4D6A8C;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x35A0A0);
    MEM32(0x4D406C) = 0x3D3E3C;
    PUSH32(esp, 0x000B350Eu); RECOMP_ABI_CALL(0x00340DE6u, sub_00340DE6); /* call 0x00340DE6 */

loc_000B350E: ;
    esp = esp + 4;
    POP32(esp, edi);

loc_000B3512: ;
    eax = 0x4D4068;
    esp += 4; return; /* ret */

}

/**
 * sub_000B3520
 * Original: 0x000B3520 - 0x000B353F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3520: ;
    eax = MEM32(0x4D7300);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B353E; /* je: equal / zero */

loc_000B3529: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B3531u); RECOMP_ABI_CALL(0x001234F0u, sub_001234F0); /* call 0x001234F0 */

loc_000B3531: ;
    esp = esp + 8;
    MEM32(0x4D7300) = 0;

loc_000B353E: ;
    esp += 4; return; /* ret */

}



/**
 * sub_000B3560
 * Original: 0x000B3560 - 0x000B3565 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3560(void)
{

loc_000B3560: ;
    eax = ZX8(MEM8(ecx + 0x4F));
    esp += 4; return; /* ret */

}

/**
 * sub_000B3570
 * Original: 0x000B3570 - 0x000B3576 (6 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3570(void)
{

loc_000B3570: ;
    SET_LO8(eax, MEM8(ecx + 0x51));
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000B3580
 * Original: 0x000B3580 - 0x000B3588 (8 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3580(void)
{

loc_000B3580: ;
    SET_LO8(eax, MEM8(ecx + 0x51));
    SET_LO8(eax, LO8(eax) >> 1);
    SET_LO8(eax, LO8(eax) & 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000B3590
 * Original: 0x000B3590 - 0x000B3594 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3590(void)
{

loc_000B3590: ;
    SET_LO8(eax, MEM8(ecx + 0x50));
    esp += 4; return; /* ret */

}

/**
 * sub_000B35A0
 * Original: 0x000B35A0 - 0x000B35B7 (23 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B35A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000B35A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000B35ABu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B35AB: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B35C0
 * Original: 0x000B35C0 - 0x000B35C5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B35C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000B35C0: ;
    g_seh_ebp = ebp; sub_00127480(); return; /* tail jmp 0x00127480 */

}

/**
 * sub_000B35D0
 * Original: 0x000B35D0 - 0x000B35EF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B35D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B35D0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x3D3EE0;
    if (TEST_Z(_fa, _fb)) goto loc_000B35E9; /* je: equal / zero */

loc_000B35E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000B35E6u); RECOMP_ABI_CALL(0x003414F7u, sub_003414F7); /* call 0x003414F7 */

loc_000B35E6: ;
    esp = esp + 4;

loc_000B35E9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000B35F0
 * Original: 0x000B35F0 - 0x000B363D (77 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B35F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B35F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3500E1);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 4) = esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_000B362D; /* je: equal / zero */

loc_000B361F: ;
    ecx = esi;
    PUSH32(esp, 0x000B3626u); RECOMP_ABI_CALL(0x00127350u, sub_00127350); /* call 0x00127350 */

loc_000B3626: ;
    MEM32(esi + 0x44) = 0;

loc_000B362D: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}





/**
 * sub_000B3720
 * Original: 0x000B3720 - 0x000B39D1 (689 bytes, 226 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000B3720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000B3720: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    eax = esp + 0xC;
    PUSH32(esp, 0x3D3FB0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B3736u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B3736: ;
    esi = MEM32(esp + 0x38);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, esi);
    MEM8(esp + 0x3B) = LO8(ebx);
    PUSH32(esp, 0x000B374Bu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B374B: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B3764; /* jne: not equal / not zero */

loc_000B3752: ;
    SET_LO8(edx, MEM8(esp + 0x30));
    POP32(esp, esi);
    MEM8(0x4D72F2) = LO8(edx);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 12; return; /* ret 8 */

loc_000B3764: ;
    PUSH32(esp, 0x20);
    eax = esp + 0xC;
    PUSH32(esp, 0x3D3FA4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B3775u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B3775: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM8(esp + 0x3B) = LO8(ebx);
    PUSH32(esp, 0x000B3784u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B3784: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B379D; /* jne: not equal / not zero */

loc_000B378B: ;
    SET_LO8(edx, MEM8(esp + 0x30));
    POP32(esp, esi);
    MEM8(0x4D72FA) = LO8(edx);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 12; return; /* ret 8 */

loc_000B379D: ;
    PUSH32(esp, 0x20);
    eax = esp + 0xC;
    PUSH32(esp, 0x3D3F98);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B37AEu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B37AE: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM8(esp + 0x3B) = LO8(ebx);
    PUSH32(esp, 0x000B37BDu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B37BD: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B37D6; /* jne: not equal / not zero */

loc_000B37C4: ;
    SET_LO8(edx, MEM8(esp + 0x30));
    POP32(esp, esi);
    MEM8(0x4D72F3) = LO8(edx);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 12; return; /* ret 8 */

loc_000B37D6: ;
    PUSH32(esp, 0x20);
    eax = esp + 0xC;
    PUSH32(esp, 0x3D01B8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B37E7u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B37E7: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM8(esp + 0x3B) = LO8(ebx);
    PUSH32(esp, 0x000B37F6u); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B37F6: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B380F; /* jne: not equal / not zero */

loc_000B37FD: ;
    SET_LO8(edx, MEM8(esp + 0x30));
    POP32(esp, esi);
    MEM8(0x4D72F9) = LO8(edx);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 12; return; /* ret 8 */

loc_000B380F: ;
    PUSH32(esp, 0x20);
    eax = esp + 0xC;
    PUSH32(esp, 0x3D01C4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000B3820u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_000B3820: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM8(esp + 0x3B) = LO8(ebx);
    PUSH32(esp, 0x000B382Fu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_000B382F: ;
    esp = esp + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000B3848; /* jne: not equal / not zero */

loc_000B3836: ;
    SET_LO8(edx, MEM8(esp + 0x30));
    POP32(esp, esi);
    MEM8(0x4D72F4) = LO8(edx);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 12; return; /* ret 8 */

loc_000B3848: ;
    PUSH32(esp, 0x3D3F88);
    ecx = esp + 0xC;
    PUSH32(esp, 0x000B3856u); RECOMP_ABI_CALL(0x000496B0u, sub_000496B0); /* call 0x000496B0 */

loc_000B3856: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B385Eu); RECOMP_ABI_CALL(0x000B35A0u, sub_000B35A0); /* call 0x000B35A0 */

loc_000B385E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B3873; /* je: equal / zero */

loc_000B3862: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    POP32(esp, esi);
    MEM8(0x4D72F7) = LO8(eax);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 12; return; /* ret 8 */

loc_000B3873: ;
    PUSH32(esp, 0x3D3F78);
    ecx = esp + 0xC;
    PUSH32(esp, 0x000B3881u); RECOMP_ABI_CALL(0x000496B0u, sub_000496B0); /* call 0x000496B0 */

loc_000B3881: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B3889u); RECOMP_ABI_CALL(0x000B35A0u, sub_000B35A0); /* call 0x000B35A0 */

loc_000B3889: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B389F; /* je: equal / zero */

loc_000B388D: ;
    SET_LO8(ecx, MEM8(esp + 0x30));
    POP32(esp, esi);
    MEM8(0x4D72F1) = LO8(ecx);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 12; return; /* ret 8 */

loc_000B389F: ;
    PUSH32(esp, 0x3D3F6C);
    ecx = esp + 0xC;
    PUSH32(esp, 0x000B38ADu); RECOMP_ABI_CALL(0x000496B0u, sub_000496B0); /* call 0x000496B0 */

loc_000B38AD: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B38B5u); RECOMP_ABI_CALL(0x000B35A0u, sub_000B35A0); /* call 0x000B35A0 */

loc_000B38B5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B38CB; /* je: equal / zero */

loc_000B38B9: ;
    SET_LO8(edx, MEM8(esp + 0x30));
    POP32(esp, esi);
    MEM8(0x4D72FB) = LO8(edx);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 12; return; /* ret 8 */

loc_000B38CB: ;
    PUSH32(esp, 0x3D3F64);
    ecx = esp + 0xC;
    PUSH32(esp, 0x000B38D9u); RECOMP_ABI_CALL(0x000496B0u, sub_000496B0); /* call 0x000496B0 */

loc_000B38D9: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B38E1u); RECOMP_ABI_CALL(0x000B35A0u, sub_000B35A0); /* call 0x000B35A0 */

loc_000B38E1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B38F6; /* je: equal / zero */

loc_000B38E5: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    POP32(esp, esi);
    MEM8(0x4D72F5) = LO8(eax);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 12; return; /* ret 8 */

loc_000B38F6: ;
    PUSH32(esp, 0x3D3F58);
    ecx = esp + 0xC;
    PUSH32(esp, 0x000B3904u); RECOMP_ABI_CALL(0x000496B0u, sub_000496B0); /* call 0x000496B0 */

loc_000B3904: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B390Cu); RECOMP_ABI_CALL(0x000B35A0u, sub_000B35A0); /* call 0x000B35A0 */

loc_000B390C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B3922; /* je: equal / zero */

loc_000B3910: ;
    SET_LO8(ecx, MEM8(esp + 0x30));
    POP32(esp, esi);
    MEM8(0x4D72FD) = LO8(ecx);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 12; return; /* ret 8 */

loc_000B3922: ;
    PUSH32(esp, 0x3D3F44);
    ecx = esp + 0xC;
    PUSH32(esp, 0x000B3930u); RECOMP_ABI_CALL(0x000496B0u, sub_000496B0); /* call 0x000496B0 */

loc_000B3930: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B3938u); RECOMP_ABI_CALL(0x000B35A0u, sub_000B35A0); /* call 0x000B35A0 */

loc_000B3938: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B394E; /* je: equal / zero */

loc_000B393C: ;
    SET_LO8(edx, MEM8(esp + 0x30));
    POP32(esp, esi);
    MEM8(0x4D72F6) = LO8(edx);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 12; return; /* ret 8 */

loc_000B394E: ;
    PUSH32(esp, 0x3D3F34);
    ecx = esp + 0xC;
    PUSH32(esp, 0x000B395Cu); RECOMP_ABI_CALL(0x000496B0u, sub_000496B0); /* call 0x000496B0 */

loc_000B395C: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B3964u); RECOMP_ABI_CALL(0x000B35A0u, sub_000B35A0); /* call 0x000B35A0 */

loc_000B3964: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B3979; /* je: equal / zero */

loc_000B3968: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    POP32(esp, esi);
    MEM8(0x4D72FC) = LO8(eax);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 12; return; /* ret 8 */

loc_000B3979: ;
    PUSH32(esp, 0x3D3F24);
    ecx = esp + 0xC;
    PUSH32(esp, 0x000B3987u); RECOMP_ABI_CALL(0x000496B0u, sub_000496B0); /* call 0x000496B0 */

loc_000B3987: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B398Fu); RECOMP_ABI_CALL(0x000B35A0u, sub_000B35A0); /* call 0x000B35A0 */

loc_000B398F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B39A5; /* je: equal / zero */

loc_000B3993: ;
    SET_LO8(ecx, MEM8(esp + 0x30));
    POP32(esp, esi);
    MEM8(0x4D72F0) = LO8(ecx);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 12; return; /* ret 8 */

loc_000B39A5: ;
    PUSH32(esp, 0x3D3F18);
    ecx = esp + 0xC;
    PUSH32(esp, 0x000B39B3u); RECOMP_ABI_CALL(0x000496B0u, sub_000496B0); /* call 0x000496B0 */

loc_000B39B3: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000B39BBu); RECOMP_ABI_CALL(0x000B35A0u, sub_000B35A0); /* call 0x000B35A0 */

loc_000B39BB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000B39C9; /* je: equal / zero */

loc_000B39BF: ;
    SET_LO8(edx, MEM8(esp + 0x30));
    MEM8(0x4D72F8) = LO8(edx);

loc_000B39C9: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 12; return; /* ret 8 */

}
