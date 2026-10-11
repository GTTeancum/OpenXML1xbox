/**
 * X-Men Legends - Recompiled code chunk 45
 * Functions: 250 (0x001E8230 - 0x001ECC60)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001E8230
 * Original: 0x001E8230 - 0x001E826C (60 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E8230: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(esi) = edi;
    SET_LO8(ecx, MEM8(eax));
    ecx = ecx & 0x7F;
    MEM32(esi) = ecx;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (((int8_t)((_fa) - (_fb)) >= 0)) goto loc_001E8266; /* jns: not sign (positive) */

loc_001E824C: ;
    /* nop */

loc_001E8250: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(eax));
    edi = edi + 7;
    ecx = edi;
    edx = edx & 0x7F;
    edx = edx << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edx;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (((int8_t)((_fas) - (_fbs)) < 0)) goto loc_001E8250; /* js: sign (negative) */

loc_001E8266: ;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E8270
 * Original: 0x001E8270 - 0x001E8293 (35 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E8270: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);

loc_001E8278: ;
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) & 0x7F);
    ecx = ecx >> 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM8(eax) = LO8(edx);
    if (TEST_Z(_fa, _fb)) goto loc_001E828B; /* je: equal / zero */

loc_001E8286: ;
    SET_LO8(edx, LO8(edx) | 0x80);
    MEM8(eax) = LO8(edx);

loc_001E828B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E8278; /* jne: not equal / not zero */

loc_001E8290: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E82A0
 * Original: 0x001E82A0 - 0x001E82F8 (88 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E82A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E82A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(esi) = edi;
    SET_LO8(ecx, MEM8(eax));
    ecx = ecx & 0x7F;
    MEM32(esi) = ecx;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (((int8_t)((_fa) - (_fb)) >= 0)) goto loc_001E82D6; /* jns: not sign (positive) */

loc_001E82BC: ;
    /* nop */

loc_001E82C0: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(eax));
    edi = edi + 7;
    ecx = edi;
    edx = edx & 0x7F;
    edx = edx << LO8(ecx);
    MEM32(esi) = MEM32(esi) | edx;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (((int8_t)((_fas) - (_fbs)) < 0)) goto loc_001E82C0; /* js: sign (negative) */

loc_001E82D6: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E82F2; /* je: equal / zero */

loc_001E82DB: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edx = 0x80000000u;
    if (TEST_S(_fas, _fbs)) goto loc_001E82EE; /* js: sign (negative) */

loc_001E82E6: ;
    edi = ecx;

loc_001E82E8: ;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E82E8; /* je: equal / zero */

loc_001E82EE: ;
    ecx = ecx | edx;
    MEM32(esi) = ecx;

loc_001E82F2: ;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E8300
 * Original: 0x001E8300 - 0x001E8367 (103 bytes, 41 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E8300: ;
    ecx = MEM32(esp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001E8314; /* jge: greater or equal (signed >=) */

loc_001E830A: ;
    edx = edx | 0xFFFFFFFFu;
    MEM8(esp + 8) = 0x40;
    goto loc_001E8318;

loc_001E8314: ;
    MEM8(esp + 8) = LO8(edx);

loc_001E8318: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    SET_LO8(ebx, LO8(ecx));
    SET_LO8(ebx, LO8(ebx) & 0x7F);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((7) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM8(eax) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001E8342; /* je: equal / zero */

loc_001E832B: ;
    goto loc_001E8330;

    /* nop */

loc_001E8330: ;
    MEM8(eax) = MEM8(eax) | 0x80;
    SET_LO8(ebx, LO8(ecx));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ebx, LO8(ebx) & 0x7F);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((7) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM8(eax) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_001E8330; /* jne: not equal / not zero */

loc_001E8342: ;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(ebx, MEM8(esp + 0xC));
    MEM8(esp + 8) = LO8(ecx);
    SET_LO8(ecx, LO8(ecx) & 0x40);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001E8363; /* je: equal / zero */

loc_001E8354: ;
    SET_LO8(ecx, MEM8(esp + 4));
    SET_LO8(ecx, LO8(ecx) | 0x80);
    MEM8(eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(edx, LO8(edx) & 0x7F);
    MEM8(eax) = LO8(edx);

loc_001E8363: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E8370
 * Original: 0x001E8370 - 0x001E8396 (38 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E8370: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */

loc_001E8376: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x001E8381u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E8381: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x001E838Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E838C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E8376; /* jne: not equal / not zero */

loc_001E8393: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001E83A0
 * Original: 0x001E83A0 - 0x001E83C8 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E83A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E83A0: ;
    edx = MEM32(ecx + 0x50);
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    PUSH32(esp, esi);
    goto loc_001E83B0;

    /* nop */

loc_001E83B0: ;
    esi = 3;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E83C6; /* je: equal / zero */

loc_001E83BB: ;
    ecx = ecx + 2;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E83B0; /* jl: less (signed <) */

loc_001E83C4: ;
    eax = 0; /* xor self */

loc_001E83C6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001E83D0
 * Original: 0x001E83D0 - 0x001E8407 (55 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E83D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E83D0: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    eax = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_001E8404; /* jge: greater or equal (signed >=) */

loc_001E83DB: ;
    PUSH32(esp, esi);
    ecx = edx + edx;
    esi = 3;
    esi = esi << LO8(ecx);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x50);
    esi = ~esi;
    esi = esi & edi;
    edi = 1;
    edi = edi << LO8(ecx);
    ecx = MEM32(esp + 0x10);
    esi = esi | edi;
    MEM32(eax + 0x50) = esi;
    POP32(esp, edi);
    MEM32(eax + edx * 4 + 0x54) = ecx;
    POP32(esp, esi);

loc_001E8404: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E8410
 * Original: 0x001E8410 - 0x001E8447 (55 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E8410: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    eax = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_001E8444; /* jge: greater or equal (signed >=) */

loc_001E841B: ;
    PUSH32(esp, esi);
    ecx = edx + edx;
    esi = 3;
    esi = esi << LO8(ecx);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x50);
    esi = ~esi;
    esi = esi & edi;
    edi = 2;
    edi = edi << LO8(ecx);
    ecx = MEM32(esp + 0x10);
    esi = esi | edi;
    MEM32(eax + 0x50) = esi;
    POP32(esp, edi);
    MEM32(eax + edx * 4 + 0x54) = ecx;
    POP32(esp, esi);

loc_001E8444: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E8450
 * Original: 0x001E8450 - 0x001E8482 (50 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E8450: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    edx = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_001E847E; /* jge: greater or equal (signed >=) */

loc_001E845C: ;
    ecx = esi + esi;
    eax = 3;
    eax = eax << LO8(ecx);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x50);
    ecx = eax;
    ecx = ~ecx;
    ecx = ecx & edi;
    ecx = ecx | eax;
    eax = MEM32(esp + 0x10);
    MEM32(edx + 0x50) = ecx;
    MEM32(edx + esi * 4 + 0x54) = eax;
    POP32(esp, edi);

loc_001E847E: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E8490
 * Original: 0x001E8490 - 0x001E84D9 (73 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E8490: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E84D5; /* je: equal / zero */

loc_001E8499: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001E84D5; /* jge: greater or equal (signed >=) */

loc_001E84A2: ;
    edx = MEM32(ecx + eax * 4 + 0x54);
    MEM32(esi) = edx;
    edx = eax + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001E84B6; /* jge: greater or equal (signed >=) */

loc_001E84B0: ;
    edx = MEM32(ecx + edx * 4 + 0x54);
    goto loc_001E84B9;

loc_001E84B6: ;
    edx = edx | 0xFFFFFFFFu;

loc_001E84B9: ;
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    MEM32(esi + 4) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_001E84CF; /* jge: greater or equal (signed >=) */

loc_001E84C4: ;
    eax = MEM32(ecx + eax * 4 + 0x54);
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001E84CF: ;
    eax = eax | 0xFFFFFFFFu;
    MEM32(esi + 8) = eax;

loc_001E84D5: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E84E0
 * Original: 0x001E84E0 - 0x001E8589 (169 bytes, 60 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E84E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E84E0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    eax = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001E8585; /* je: equal / zero */

loc_001E84EF: ;
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001E8585; /* jge: greater or equal (signed >=) */

loc_001E84FC: ;
    PUSH32(esp, ebx);
    ecx = edx + edx;
    ebx = 3;
    ebx = ebx << LO8(ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x50);
    PUSH32(esp, esi);
    esi = MEM32(edi);
    ebx = ~ebx;
    ebx = ebx & ebp;
    ebp = 2;
    ebp = ebp << LO8(ecx);
    ebx = ebx | ebp;
    MEM32(eax + 0x50) = ebx;
    MEM32(eax + edx * 4 + 0x54) = esi;
    ecx = MEM32(edi + 4);
    esi = edx + 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_001E8556; /* jge: greater or equal (signed >=) */

loc_001E8531: ;
    ebp = MEM32(eax + 0x50);
    ecx = esi + esi;
    ebx = 3;
    ebx = ebx << LO8(ecx);
    ebx = ~ebx;
    ebx = ebx & ebp;
    ebp = 2;
    ebp = ebp << LO8(ecx);
    ecx = MEM32(esp + 0x18);
    ebx = ebx | ebp;
    MEM32(eax + 0x50) = ebx;
    MEM32(eax + esi * 4 + 0x54) = ecx;

loc_001E8556: ;
    edi = MEM32(edi + 8);
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001E8582; /* jge: greater or equal (signed >=) */

loc_001E8561: ;
    ebx = MEM32(eax + 0x50);
    ecx = edx + edx;
    esi = 3;
    esi = esi << LO8(ecx);
    esi = ~esi;
    esi = esi & ebx;
    ebx = 2;
    ebx = ebx << LO8(ecx);
    esi = esi | ebx;
    MEM32(eax + 0x50) = esi;
    MEM32(eax + edx * 4 + 0x54) = edi;

loc_001E8582: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001E8585: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E8590
 * Original: 0x001E8590 - 0x001E85AC (28 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E8590: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    PUSH32(esp, esi);
    esi = ecx;

loc_001E8598: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x001E859Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E859F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E85A7; /* je: equal / zero */

loc_001E85A3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E8598; /* jne: not equal / not zero */

loc_001E85A7: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E85B0
 * Original: 0x001E85B0 - 0x001E85D1 (33 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E85B0(void)
{

loc_001E85B0: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x001E85C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E85C1: ;
    ecx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esp + 0x14); PUSH32(esp, 0x001E85CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E85CB: ;
    esp = esp + 8;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001E85E0
 * Original: 0x001E85E0 - 0x001E86CD (237 bytes, 101 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E85E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E85E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM8(ebp) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001E86C8; /* je: equal / zero */

loc_001E85F8: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E86C8; /* je: equal / zero */

loc_001E8601: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001E860Bu); RECOMP_ABI_CALL(0x003426D0u, sub_003426D0); /* call 0x003426D0 */

loc_001E860B: ;
    edi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E8656; /* jne: not equal / not zero */

loc_001E8614: ;
    ebx = esi;
    ecx = ebx + 1;
    /* nop */

loc_001E8620: ;
    SET_LO8(eax, MEM8(ebx));
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E8620; /* jne: not equal / not zero */

loc_001E8627: ;
    ebx = ebx - ecx;
    ecx = MEM32(esp + 0x1C);
    ecx = ecx + 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001E8665; /* jbe: below or equal (unsigned <=) */

loc_001E8634: ;
    edx = ebp;
    eax = esi;
    edx = edx - esi;
    /* nop */

loc_001E8640: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E8640; /* jne: not equal / not zero */

loc_001E864A: ;
    edx = MEM32(esp + 0x14);
    MEM32(edx) = 0;
    goto loc_001E8682;

loc_001E8656: ;
    eax = MEM32(esp + 0x1C);
    ebx = edi;
    ebx = ebx - esi;
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001E866C; /* ja: above (unsigned >) */

loc_001E8665: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001E866C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001E8674u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_001E8674: ;
    ecx = MEM32(esp + 0x20);
    esp = esp + 0xC;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebx + ebp) = 0;
    MEM32(ecx) = edi;

loc_001E8682: ;
    edi = 0x3D2D80;
    esi = ebp;
    ecx = 2;
    edx = 0; /* xor self */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_001E869E; /* jne: not equal / not zero */

loc_001E8694: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    MEM8(ebp) = LO8(edx);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001E869E: ;
    SET_LO8(ebx, MEM8(ebx + ebp + -1));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E86C1; /* je: equal / zero */

loc_001E86A7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E86C1; /* je: equal / zero */

loc_001E86AC: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = ebp;
    /* nop */

loc_001E86B0: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E86B0; /* jne: not equal / not zero */

loc_001E86B8: ;
    SET_LO16(eax, MEM16(0x3CAA94));
    MEM16(edi) = LO16(eax);

loc_001E86C1: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001E86C8: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001E86D0
 * Original: 0x001E86D0 - 0x001E86FB (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E86D0(void)
{

loc_001E86D0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3EEAA4);
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001E86F1u); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_001E86F1: ;
    eax = MEM32(esp + 0x10);
    esp = esp + 0x14;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001E8700
 * Original: 0x001E8700 - 0x001E8752 (82 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E8700: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001E8741; /* jle: less or equal (signed <=) */

loc_001E870D: ;
    /* nop */

loc_001E8710: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + esi * 4);
    MEM32(ecx + 0xC) = esi;
    edx = MEM32(edi + 0x10);
    ecx = MEM32(edx + esi * 4);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x001E8728u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E8728: ;
    eax = MEM32(edi + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E8710; /* jl: less (signed <) */

loc_001E8730: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001E8741: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E8760
 * Original: 0x001E8760 - 0x001E87BE (94 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E8760: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x90) = edi;
    MEM32(esi + 0x98) = edi;
    MEM32(esi + 0x94) = edi;
    MEM32(esi + 0x9C) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_001E87AD; /* jle: less or equal (signed <=) */

loc_001E8785: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + edi * 4);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x001E8794u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E8794: ;
    eax = MEM32(esi + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E8785; /* jl: less (signed <) */

loc_001E879C: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001E87AD: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E87C0
 * Original: 0x001E87C0 - 0x001E87EB (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E87C0(void)
{

loc_001E87C0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3EEA70);
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001E87E1u); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_001E87E1: ;
    eax = MEM32(esp + 0x10);
    esp = esp + 0x14;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001E87F0
 * Original: 0x001E87F0 - 0x001E87F5 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E87F0(void)
{

loc_001E87F0: ;
    SET_LO16(eax, 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001E8800
 * Original: 0x001E8800 - 0x001E8886 (134 bytes, 59 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8800(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E8800: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001E8869; /* jle: less or equal (signed <=) */

loc_001E8814: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(esp + 0x1C);
    edx = MEM32(eax + 8);
    MEM32(esp + 0x14) = ecx;
    edi = ecx;

loc_001E8824: ;
    ecx = MEM32(edi);
    esi = MEM32(esp + 0x20);
    eax = MEM32(ecx + edx);
    /* nop */

loc_001E8830: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E8854; /* jne: not equal / not zero */

loc_001E8838: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001E8850; /* je: equal / zero */

loc_001E883C: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E8854; /* jne: not equal / not zero */

loc_001E8846: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001E8830; /* jne: not equal / not zero */

loc_001E8850: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_001E8859;

loc_001E8854: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_001E8859: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001E8875; /* je: equal / zero */

loc_001E885D: ;
    eax = MEM32(esp + 0x10);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001E8824; /* jl: less (signed <) */

loc_001E8869: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

loc_001E8875: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx + ebp * 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E8890
 * Original: 0x001E8890 - 0x001E88B2 (34 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E8890: ;
    edx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001E88AB; /* jle: less or equal (signed <=) */

loc_001E889D: ;
    esi = MEM32(esp + 8);

loc_001E88A1: ;
    _fa = (uint32_t)(MEM32(edx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E88AE; /* je: equal / zero */

loc_001E88A6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E88A1; /* jl: less (signed <) */

loc_001E88AB: ;
    eax = eax | 0xFFFFFFFFu;

loc_001E88AE: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E88C0
 * Original: 0x001E88C0 - 0x001E88F4 (52 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E88C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E88C0: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x001E88CEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E88CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E88EF; /* jne: not equal / not zero */

loc_001E88D3: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x001E88EFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E88EF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001E8900
 * Original: 0x001E8900 - 0x001E8919 (25 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001E8900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E8900: ;
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E8914; /* je: equal / zero */

loc_001E8907: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = edx;
    esp += 8; return; /* ret 4 */

loc_001E8914: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E8920
 * Original: 0x001E8920 - 0x001E8927 (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8920(void)
{

loc_001E8920: ;
    eax = MEM32(ecx + 0x34);
    eax = eax << 3;
    esp += 4; return; /* ret */

}

/**
 * sub_001E8930
 * Original: 0x001E8930 - 0x001E8935 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8930(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E8930: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x58)); return; /* indirect tail jmp */

}

/**
 * sub_001E8940
 * Original: 0x001E8940 - 0x001E8B3D (509 bytes, 188 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8940(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E8940: ;
    esp = esp - 0x210;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x218);
    SET_LO8(eax, MEM8(ebx + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E8962; /* je: equal / zero */

loc_001E8955: ;
    eax = 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp = esp + 0x210;
    esp += 4; return; /* ret */

loc_001E8962: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x220);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E897D; /* jne: not equal / not zero */

loc_001E8971: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x210;
    esp += 4; return; /* ret */

loc_001E897D: ;
    eax = ebp;
    edx = eax + 1;

loc_001E8982: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E8982; /* jne: not equal / not zero */

loc_001E8989: ;
    eax = eax - edx;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_001E8B2F; /* jle: less or equal (signed <=) */

loc_001E899D: ;
    eax = esp + 0x224;
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = eax;
    goto loc_001E89B0;

loc_001E89AB: ;
    ecx = MEM32(esp + 0x14);
    /* nop */

loc_001E89B0: ;
    edi = 0; /* xor self */

loc_001E89B2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E89DF; /* je: equal / zero */

loc_001E89B6: ;
    SET_LO8(eax, MEM8(esi + ebp));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x25) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x25 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E89C5; /* je: equal / zero */

loc_001E89BD: ;
    MEM8(esp + edi + 0x20) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001E89B2;

loc_001E89C5: ;
    _fa = (uint32_t)(MEM8(esi + ebp + 1)) & 0xFFu; _fb = (uint32_t)(0x25) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + ebp + 1), 0x25 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E89E9; /* jne: not equal / not zero */

loc_001E89CC: ;
    MEM8(esp + edi + 0x20) = 0x25;
    SET_LO8(edx, MEM8(esi + ebp + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + edi + 0x20) = LO8(edx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001E89B2;

loc_001E89DF: ;
    ecx = 1;
    goto loc_001E8A80;

loc_001E89E9: ;
    SET_LO8(eax, MEM8(esi + ebp));
    MEM8(esp + edi + 0x20) = LO8(eax);
    ecx = (uint32_t)(int32_t)SMEM8(esi + ebp + 1);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001E89FDu); RECOMP_ABI_CALL(0x00341F75u, sub_00341F75); /* call 0x00341F75 */

loc_001E89FD: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E8A61; /* jne: not equal / not zero */

loc_001E8A04: ;
    SET_LO8(eax, MEM8(esi + ebp));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x64) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x64 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8A61; /* je: equal / zero */

loc_001E8A0B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x75) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x75 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8A61; /* je: equal / zero */

loc_001E8A0F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x6F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x6F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8A61; /* je: equal / zero */

loc_001E8A13: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x78) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x78 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8A61; /* je: equal / zero */

loc_001E8A17: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x69) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x69 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8A61; /* je: equal / zero */

loc_001E8A1B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x6E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x6E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8A61; /* je: equal / zero */

loc_001E8A1F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x65) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x65 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8A61; /* je: equal / zero */

loc_001E8A23: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x66) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x66 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8A61; /* je: equal / zero */

loc_001E8A27: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x67) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x67 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8A61; /* je: equal / zero */

loc_001E8A2B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x73) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x73 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8A61; /* je: equal / zero */

loc_001E8A2F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x53) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x53 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8A61; /* je: equal / zero */

loc_001E8A33: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x63) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x63 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8A61; /* je: equal / zero */

loc_001E8A37: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x43) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x43 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8A61; /* je: equal / zero */

loc_001E8A3B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8A61; /* je: equal / zero */

loc_001E8A3F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x70) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x70 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8A61; /* je: equal / zero */

loc_001E8A43: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x14) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8A61; /* je: equal / zero */

loc_001E8A49: ;
    MEM8(esp + edi + 0x20) = LO8(eax);
    edx = (uint32_t)(int32_t)SMEM8(esi + ebp + 1);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, 0x001E8A5Au); RECOMP_ABI_CALL(0x00341F75u, sub_00341F75); /* call 0x00341F75 */

loc_001E8A5A: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E8A04; /* je: equal / zero */

loc_001E8A61: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001E8A6Bu); RECOMP_ABI_CALL(0x00341F75u, sub_00341F75); /* call 0x00341F75 */

loc_001E8A6B: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E8A7B; /* jne: not equal / not zero */

loc_001E8A72: ;
    SET_LO8(ecx, MEM8(esi + ebp));
    MEM8(esp + edi + 0x20) = LO8(ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001E8A7B: ;
    ecx = 2;

loc_001E8A80: ;
    MEM8(esp + edi + 0x20) = 0;
    edi = esp + 0x20;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_001E8A90: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E8A90; /* jne: not equal / not zero */

loc_001E8A98: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    SET_LO16(edx, MEM16(0x3EEAB4));
    SET_LO8(eax, MEM8(0x3EEAB6));
    MEM16(edi) = LO16(edx);
    MEM8(edi + 2) = LO8(eax);
    MEM32(esp + 0x10) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_001E8AE0; /* jne: not equal / not zero */

loc_001E8AB7: ;
    eax = MEM32(ebx + 0x3C);
    edi = MEM32(ebx + 0x38);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = eax + edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001E8ACFu); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_001E8ACF: ;
    eax = MEM32(ebx + 0x38);
    ecx = MEM32(esp + 0x1C);
    esp = esp + 0xC;
    eax = eax + ecx;
    MEM32(ebx + 0x38) = eax;
    goto loc_001E8B24;

loc_001E8AE0: ;
    eax = MEM32(esp + 0x1C);
    eax = eax + 4;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(eax);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(ebx + 0x3C);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x38);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = edx + eax;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001E8B06u); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_001E8B06: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8B2E; /* je: equal / zero */

loc_001E8B0E: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(ebx + 0x38);
    edx = edx + eax;
    eax = MEM32(esp + 0x10);
    ecx = ecx + eax;
    MEM32(esp + 0x18) = edx;
    MEM32(ebx + 0x38) = ecx;

loc_001E8B24: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x14) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E89AB; /* jl: less (signed <) */

loc_001E8B2E: ;
    POP32(esp, edi);

loc_001E8B2F: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_001E8B40
 * Original: 0x001E8B40 - 0x001E8B6E (46 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E8B40: ;
    SET_LO8(eax, MEM8(ecx + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E8B4F; /* je: equal / zero */

loc_001E8B47: ;
    eax = 0xFFFFFFFFu;
    esp += 8; return; /* ret 4 */

loc_001E8B4F: ;
    eax = MEM32(ecx + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E8B68; /* je: equal / zero */

loc_001E8B56: ;
    edx = eax + -1;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x38) = edx;
    ecx = MEM32(ecx + 0x3C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edx + ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edx + ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E8B6B; /* je: equal / zero */

loc_001E8B68: ;
    eax = eax | 0xFFFFFFFFu;

loc_001E8B6B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E8B70
 * Original: 0x001E8B70 - 0x001E8BD8 (104 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8B70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E8B70: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E8B7F; /* je: equal / zero */

loc_001E8B78: ;
    SET_LO8(edx, MEM8(ecx + 0x2C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E8B84; /* je: equal / zero */

loc_001E8B7F: ;
    eax = 0; /* xor self */
    esp += 12; return; /* ret 8 */

loc_001E8B84: ;
    edx = MEM32(ecx + 0x34);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x38);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E8B95; /* jl: less (signed <) */

loc_001E8B8F: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_001E8B95: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = edi + ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E8BAA; /* jl: less (signed <) */

loc_001E8BA6: ;
    edx = edx - edi;
    ebx = edx;

loc_001E8BAA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001E8BCD; /* jle: less or equal (signed <=) */

loc_001E8BAE: ;
    edi = edi;

loc_001E8BB0: ;
    edi = MEM32(ecx + 0x38);
    edx = MEM32(ecx + 0x3C);
    SET_LO8(edx, MEM8(edx + edi));
    MEM8(esi + eax) = LO8(edx);
    ebp = MEM32(ecx + 0x38);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xA (8-bit) */
    MEM32(ecx + 0x38) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_001E8BCD; /* je: equal / zero */

loc_001E8BC9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E8BB0; /* jl: less (signed <) */

loc_001E8BCD: ;
    MEM8(esi + eax) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E8BE0
 * Original: 0x001E8BE0 - 0x001E8BF2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8BE0(void)
{

loc_001E8BE0: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xCC); PUSH32(esp, 0x001E8BF1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E8BF1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001E8C00
 * Original: 0x001E8C00 - 0x001E8C09 (9 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E8C00: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_001E8C10
 * Original: 0x001E8C10 - 0x001E8C29 (25 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001E8C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E8C10: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E8C24; /* je: equal / zero */

loc_001E8C17: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = edx;
    esp += 8; return; /* ret 4 */

loc_001E8C24: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E8C30
 * Original: 0x001E8C30 - 0x001E8C54 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8C30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E8C30: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x98) = MEM32(eax + 0x98) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x98)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ecx + 0x1C);
    edx = MEM32(eax + 0x9C);
    ecx = ecx + 3;
    ecx = ecx & 0xFFFFFFFCu;
    edx = edx + ecx;
    MEM32(eax + 0x9C) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E8C60
 * Original: 0x001E8C60 - 0x001E8C68 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8C60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E8C60: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x80)); return; /* indirect tail jmp */

}

/**
 * sub_001E8C70
 * Original: 0x001E8C70 - 0x001E8C75 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8C70(void)
{

loc_001E8C70: ;
    MEM8(ecx + 0x2C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001E8C80
 * Original: 0x001E8C80 - 0x001E8CE4 (100 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8C80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E8C80: ;
    edx = ecx;
    SET_LO8(eax, MEM8(edx + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E8C91; /* jne: not equal / not zero */

loc_001E8C89: ;
    eax = 0xFFFFFFFFu;
    esp += 16; return; /* ret 12 */

loc_001E8C91: ;
    ecx = MEM32(edx + 0x34);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x10));
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x38);
    ecx = ecx - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001E8CAC; /* jle: less or equal (signed <=) */

loc_001E8CAA: ;
    eax = ecx;

loc_001E8CAC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_001E8CB7; /* jg: greater (signed >) */

loc_001E8CB0: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_001E8CB7: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x30);
    ecx = eax;
    ebp = ecx;
    esi = esi + edi;
    edi = MEM32(esp + 0x14);
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = ebp;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    ecx = MEM32(edx + 0x38);
    ecx = ecx + eax;
    POP32(esp, esi);
    MEM32(edx + 0x38) = ecx;
    POP32(esp, ebp);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, edi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001E8CF0
 * Original: 0x001E8CF0 - 0x001E8CF6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8CF0(void)
{

loc_001E8CF0: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001E8D00
 * Original: 0x001E8D00 - 0x001E8D2C (44 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E8D00: ;
    SET_LO8(eax, MEM8(ecx + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E8D0D; /* jne: not equal / not zero */

loc_001E8D07: ;
    eax = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_001E8D0D: ;
    eax = MEM32(ecx + 0x38);
    edx = MEM32(ecx + 0x34);
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001E8D1E; /* jge: greater or equal (signed >=) */

loc_001E8D1A: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_001E8D1E: ;
    edx = MEM32(ecx + 0x30);
    SET_LO8(edx, MEM8(eax + edx));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x38) = eax;
    eax = SX8(LO8(edx));
    esp += 4; return; /* ret */

}

/**
 * sub_001E8D30
 * Original: 0x001E8D30 - 0x001E8D36 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8D30(void)
{

loc_001E8D30: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E8D40
 * Original: 0x001E8D40 - 0x001E8D45 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001E8D40(void)
{

loc_001E8D40: ;
    eax = 0; /* xor self */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E8D50
 * Original: 0x001E8D50 - 0x001E8D99 (73 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E8D50: ;
    eax = MEM32(esp + 8);
    eax = eax - 0;
    if ((eax == 0)) goto loc_001E8D73; /* je: equal / zero */

loc_001E8D59: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001E8D68; /* je: equal / zero */

loc_001E8D5C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001E8D7A; /* jne: not equal / not zero */

loc_001E8D5F: ;
    eax = MEM32(ecx + 0x34);
    eax = eax + MEM32(esp + 4);
    goto loc_001E8D77;

loc_001E8D68: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x38);
    eax = eax + edx;
    goto loc_001E8D77;

loc_001E8D73: ;
    eax = MEM32(esp + 4);

loc_001E8D77: ;
    MEM32(ecx + 0x38) = eax;

loc_001E8D7A: ;
    eax = MEM32(ecx + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001E8D87; /* jge: greater or equal (signed >=) */

loc_001E8D81: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 12; return; /* ret 8 */

loc_001E8D87: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x34);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    SET_LO8(edx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    POP32(esp, esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E8DA0
 * Original: 0x001E8DA0 - 0x001E8DA4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8DA0(void)
{

loc_001E8DA0: ;
    eax = MEM32(ecx + 0x38);
    esp += 4; return; /* ret */

}

/**
 * sub_001E8DB0
 * Original: 0x001E8DB0 - 0x001E8DD7 (39 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E8DB0: ;
    eax = MEM32(0x5BBA14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E8DCC; /* je: equal / zero */

loc_001E8DB9: ;
    edx = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001E8DC6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E8DC6: ;
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

loc_001E8DCC: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 4 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E8DE0
 * Original: 0x001E8DE0 - 0x001E8DEA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8DE0(void)
{

loc_001E8DE0: ;
    eax = MEM32(esp + 4);
    MEM32(0x5BBA14) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001E8DF0
 * Original: 0x001E8DF0 - 0x001E8E1B (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E8DF0: ;
    ecx = MEM32(0x5BC540);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E8E0E; /* je: equal / zero */

loc_001E8DFA: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x001E8E0Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E8E0A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001E8E0E: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x46A728);
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001E8E20
 * Original: 0x001E8E20 - 0x001E8EA8 (136 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E8E20: ;
    eax = MEM32(0x5BC53C);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001E8E5E; /* js: sign (negative) */

loc_001E8E32: ;
    ecx = MEM32(0x5BC53C);
    edx = MEM32(ecx);
    esi = MEM32(edx + edi * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E8E5B; /* je: equal / zero */

loc_001E8E41: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x001E8E48u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E8E48: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E8E5B; /* je: equal / zero */

loc_001E8E4C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x148); PUSH32(esp, 0x001E8E57u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E8E57: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E8EA2; /* jne: not equal / not zero */

loc_001E8E5B: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001E8E32; /* jns: not sign (positive) */

loc_001E8E5E: ;
    eax = MEM32(0x5BC538);
    edi = MEM32(eax + 4);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001E8E9C; /* js: sign (negative) */

loc_001E8E69: ;
    /* nop */

loc_001E8E70: ;
    ecx = MEM32(0x5BC538);
    edx = MEM32(ecx);
    esi = MEM32(edx + edi * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E8E99; /* je: equal / zero */

loc_001E8E7F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x001E8E86u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E8E86: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E8E99; /* je: equal / zero */

loc_001E8E8A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x148); PUSH32(esp, 0x001E8E95u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E8E95: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E8EA2; /* jne: not equal / not zero */

loc_001E8E99: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001E8E70; /* jns: not sign (positive) */

loc_001E8E9C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001E8EA2: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001E8EB0
 * Original: 0x001E8EB0 - 0x001E8F21 (113 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E8EB0: ;
    eax = MEM32(0x5BC53C);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001E8EEA; /* js: sign (negative) */

loc_001E8EC2: ;
    ecx = MEM32(0x5BC53C);
    edx = MEM32(ecx);
    esi = MEM32(edx + edi * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E8EE7; /* je: equal / zero */

loc_001E8ED1: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x001E8ED8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E8ED8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E8EE7; /* je: equal / zero */

loc_001E8EDC: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x174); PUSH32(esp, 0x001E8EE7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E8EE7: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001E8EC2; /* jns: not sign (positive) */

loc_001E8EEA: ;
    eax = MEM32(0x5BC538);
    edi = MEM32(eax + 4);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001E8F1D; /* js: sign (negative) */

loc_001E8EF5: ;
    ecx = MEM32(0x5BC538);
    edx = MEM32(ecx);
    esi = MEM32(edx + edi * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E8F1A; /* je: equal / zero */

loc_001E8F04: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x001E8F0Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E8F0B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E8F1A; /* je: equal / zero */

loc_001E8F0F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x174); PUSH32(esp, 0x001E8F1Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E8F1A: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001E8EF5; /* jns: not sign (positive) */

loc_001E8F1D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001E8F30
 * Original: 0x001E8F30 - 0x001E8FB4 (132 bytes, 60 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8F30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E8F30: ;
    eax = MEM32(0x5BC53C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    SET_LO8(ebx, 0); /* xor self */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001E8F70; /* js: sign (negative) */

loc_001E8F45: ;
    ecx = MEM32(0x5BC53C);
    edx = MEM32(ecx);
    esi = MEM32(edx + edi * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E8F6D; /* je: equal / zero */

loc_001E8F54: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x001E8F5Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E8F5B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E8F6D; /* je: equal / zero */

loc_001E8F5F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001E8F67u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E8F67: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E8F6D; /* je: equal / zero */

loc_001E8F6B: ;
    SET_LO8(ebx, 1);

loc_001E8F6D: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001E8F45; /* jns: not sign (positive) */

loc_001E8F70: ;
    eax = MEM32(0x5BC538);
    edi = MEM32(eax + 4);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001E8FAB; /* js: sign (negative) */

loc_001E8F7B: ;
    goto loc_001E8F80;

    /* nop */

loc_001E8F80: ;
    ecx = MEM32(0x5BC538);
    edx = MEM32(ecx);
    esi = MEM32(edx + edi * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E8FA8; /* je: equal / zero */

loc_001E8F8F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x001E8F96u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E8F96: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E8FA8; /* je: equal / zero */

loc_001E8F9A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001E8FA2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E8FA2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E8FA8; /* je: equal / zero */

loc_001E8FA6: ;
    SET_LO8(ebx, 1);

loc_001E8FA8: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001E8F80; /* jns: not sign (positive) */

loc_001E8FAB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E8FC0
 * Original: 0x001E8FC0 - 0x001E8FFF (63 bytes, 28 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E8FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E8FC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    esi = eax + 1;
    goto loc_001E8FD0;

    /* nop */

loc_001E8FD0: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E8FD0; /* jne: not equal / not zero */

loc_001E8FD7: ;
    edx = MEM32(ecx);
    eax = eax - esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x001E8FE3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E8FE3: ;
    esi = eax;
    ecx = edi;
    esi = esi - edi;
    /* nop */

loc_001E8FF0: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E8FF0; /* jne: not equal / not zero */

loc_001E8FFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E9000
 * Original: 0x001E9000 - 0x001E903F (63 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9000: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = edi;
    esi = eax + 1;
    goto loc_001E9010;

    /* nop */

loc_001E9010: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E9010; /* jne: not equal / not zero */

loc_001E9017: ;
    edx = MEM32(ecx);
    eax = eax - esi;
    esi = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xD0); PUSH32(esp, 0x001E9028u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9028: ;
    esi = eax;
    ecx = edi;
    esi = esi - edi;
    edi = edi;

loc_001E9030: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E9030; /* jne: not equal / not zero */

loc_001E903A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E9040
 * Original: 0x001E9040 - 0x001E9071 (49 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9040: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E9050; /* je: equal / zero */

loc_001E9048: ;
    _fa = (uint32_t)(MEM32(0x46A280)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(0x46A280), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E906E; /* je: equal / zero */

loc_001E9050: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x158); PUSH32(esp, 0x001E9058u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9058: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E906E; /* je: equal / zero */

loc_001E905C: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x001E906Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E906E: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001E9080
 * Original: 0x001E9080 - 0x001E9089 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9080(void)
{

loc_001E9080: ;
    SET_LO8(eax, MEM8(0x46A284));
    MEM8(ecx + 0x68) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_001E9090
 * Original: 0x001E9090 - 0x001E90E7 (87 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9090(void)
{

loc_001E9090: ;
    eax = 0; /* xor self */
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    MEM32(ecx + 0x40) = eax;
    MEM32(ecx + 0x44) = eax;
    MEM32(ecx + 0x48) = eax;
    MEM32(ecx + 0x4C) = eax;
    MEM32(ecx + 0x60) = eax;
    MEM32(ecx + 0x64) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    MEM32(ecx + 0x38) = eax;
    MEM32(ecx + 0x3C) = eax;
    MEM32(ecx + 0x50) = eax;
    MEM32(ecx + 0x54) = eax;
    MEM32(ecx + 0x58) = eax;
    MEM32(ecx + 0x5C) = eax;
    MEM8(ecx + 0x69) = 1;
    SET_LO8(eax, MEM8(0x46A284));
    MEM8(ecx + 0x68) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_001E90F0
 * Original: 0x001E90F0 - 0x001E91FE (270 bytes, 100 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E90F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001E90F0: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    if (TEST_Z(_fa, _fb)) goto loc_001E919F; /* je: equal / zero */

loc_001E9102: ;
    _cf = (int)((((uint64_t)(MEM32(ecx + 8)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx + 8) = MEM32(ecx + 8) + eax;
    { uint64_t _t = (uint64_t)(MEM32(ecx + 0xC)) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ecx + 0xC) = (uint32_t)_t; }  /* adc */
    esi = MEM32(ecx + 0x18);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    eax = MEM32(ecx + 0x1C);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ecx + 0x18) = esi;
    edx = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x24) (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ecx + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001E912C; /* jl: less (signed <) */

loc_001E911F: ;
    if (CMP_G(_fas, _fbs)) goto loc_001E9126; /* jg: greater (signed >) */

loc_001E9121: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x20) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001E912C; /* jbe: below or equal (unsigned <=) */

loc_001E9126: ;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;

loc_001E912C: ;
    eax = MEM32(esp + 0xC);
    esi = MEM32(ecx + 0x28);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    MEM32(ecx + 0x28) = esi;
    { uint64_t _t = (uint64_t)(MEM32(ecx + 0x2C)) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ecx + 0x2C) = (uint32_t)_t; }  /* adc */
    esi = MEM32(ecx + 0x38);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    eax = MEM32(ecx + 0x3C);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ecx + 0x38) = esi;
    edx = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x44) (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ecx + 0x3C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001E9160; /* jl: less (signed <) */

loc_001E9153: ;
    if (CMP_G(_fas, _fbs)) goto loc_001E915A; /* jg: greater (signed >) */

loc_001E9155: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x40) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001E9160; /* jbe: below or equal (unsigned <=) */

loc_001E915A: ;
    MEM32(ecx + 0x40) = edx;
    MEM32(ecx + 0x44) = eax;

loc_001E9160: ;
    edx = MEM32(ecx + 0x48);
    esi = MEM32(ecx + 0x4C);
    eax = 1;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    { uint64_t _t = (uint64_t)(esi) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); esi = (uint32_t)_t; }  /* adc */
    MEM32(ecx + 0x48) = edx;
    edx = MEM32(ecx + 0x58);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    eax = MEM32(ecx + 0x5C);
    MEM32(ecx + 0x4C) = esi;
    esi = MEM32(ecx + 0x64);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(ecx + 0x58) = edx;
    MEM32(ecx + 0x5C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001E91FA; /* jl: less (signed <) */

loc_001E918E: ;
    if (CMP_G(_fas, _fbs)) goto loc_001E9195; /* jg: greater (signed >) */

loc_001E9190: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x60) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001E91FA; /* jbe: below or equal (unsigned <=) */

loc_001E9195: ;
    MEM32(ecx + 0x60) = edx;
    MEM32(ecx + 0x64) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001E919F: ;
    _cf = (int)((((uint64_t)(MEM32(ecx + 0x10)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + eax;
    { uint64_t _t = (uint64_t)(MEM32(ecx + 0x14)) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ecx + 0x14) = (uint32_t)_t; }  /* adc */
    esi = MEM32(ecx + 0x18);
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
    eax = MEM32(ecx + 0x1C);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    MEM32(ecx + 0x18) = esi;
    esi = MEM32(ecx + 0x30);
    MEM32(ecx + 0x1C) = eax;
    eax = MEM32(esp + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    MEM32(ecx + 0x30) = esi;
    { uint64_t _t = (uint64_t)(MEM32(ecx + 0x34)) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ecx + 0x34) = (uint32_t)_t; }  /* adc */
    esi = MEM32(ecx + 0x38);
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
    eax = MEM32(ecx + 0x54);
    MEM32(ecx + 0x38) = esi;
    esi = MEM32(ecx + 0x3C);
    { uint64_t _t = (uint64_t)(esi) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); esi = (uint32_t)_t; }  /* sbb */
    edx = MEM32(ecx + 0x50);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(1)) >> 32) & 1);
    edx = edx + 1;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(ecx + 0x3C) = esi;
    esi = MEM32(ecx + 0x58);
    MEM32(ecx + 0x54) = eax;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    MEM32(ecx + 0x50) = edx;
    edx = MEM32(ecx + 0x5C);
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    MEM32(ecx + 0x58) = esi;
    MEM32(ecx + 0x5C) = edx;

loc_001E91FA: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001E9200
 * Original: 0x001E9200 - 0x001E9376 (374 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001E9200: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    eax = MEM32(esp + 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    if (TEST_Z(_fa, _fb)) goto loc_001E9302; /* je: equal / zero */

loc_001E9211: ;
    _cf = (int)((((uint64_t)(MEM32(0x5BB780)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(0x5BB780) = MEM32(0x5BB780) + eax;
    { uint64_t _t = (uint64_t)(MEM32(0x5BB784)) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(0x5BB784) = (uint32_t)_t; }  /* adc */
    ecx = MEM32(0x5BBF08);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    eax = MEM32(0x5BBF0C);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BBF8C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x5BBF8C) (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x5BBF08) = ecx;
    MEM32(0x5BBF0C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001E9254; /* jl: less (signed <) */

loc_001E923F: ;
    if (CMP_G(_fas, _fbs)) goto loc_001E9249; /* jg: greater (signed >) */

loc_001E9241: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BBF88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x5BBF88) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001E9254; /* jbe: below or equal (unsigned <=) */

loc_001E9249: ;
    MEM32(0x5BBF88) = ecx;
    MEM32(0x5BBF8C) = eax;

loc_001E9254: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BC0C0);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    MEM32(0x5BC0C0) = ecx;
    { uint64_t _t = (uint64_t)(MEM32(0x5BC0C4)) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(0x5BC0C4) = (uint32_t)_t; }  /* adc */
    ecx = MEM32(0x5BB9A0);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    eax = MEM32(0x5BB9A4);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BBF64)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x5BBF64) (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x5BB9A0) = ecx;
    MEM32(0x5BB9A4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001E92A4; /* jl: less (signed <) */

loc_001E928F: ;
    if (CMP_G(_fas, _fbs)) goto loc_001E9299; /* jg: greater (signed >) */

loc_001E9291: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BBF60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x5BBF60) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001E92A4; /* jbe: below or equal (unsigned <=) */

loc_001E9299: ;
    MEM32(0x5BBF60) = ecx;
    MEM32(0x5BBF64) = eax;

loc_001E92A4: ;
    edx = MEM32(0x5BBC40);
    ecx = MEM32(0x5BBC44);
    eax = MEM32(0x5BBC7C);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(1)) >> 32) & 1);
    edx = edx + 1;
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    MEM32(0x5BBC44) = ecx;
    ecx = MEM32(0x5BBC78);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(1)) >> 32) & 1);
    ecx = ecx + 1;
    MEM32(0x5BBC40) = edx;
    edx = MEM32(0x5BBA34);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x5BBC78) = ecx;
    MEM32(0x5BBC7C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001E9375; /* jl: less (signed <) */

loc_001E92EC: ;
    if (CMP_G(_fas, _fbs)) goto loc_001E92F6; /* jg: greater (signed >) */

loc_001E92EE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BBA30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x5BBA30) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001E9375; /* jbe: below or equal (unsigned <=) */

loc_001E92F6: ;
    MEM32(0x5BBA30) = ecx;
    MEM32(0x5BBA34) = eax;
    esp += 4; return; /* ret */

loc_001E9302: ;
    _cf = (int)((((uint64_t)(MEM32(0x5BBA50)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(0x5BBA50) = MEM32(0x5BBA50) + eax;
    { uint64_t _t = (uint64_t)(MEM32(0x5BBA54)) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(0x5BBA54) = (uint32_t)_t; }  /* adc */
    _cf = (int)((uint32_t)(MEM32(0x5BBF08)) < (uint32_t)(eax));
    MEM32(0x5BBF08) = MEM32(0x5BBF08) - eax;
    { uint64_t _t = (uint64_t)(MEM32(0x5BBF0C)) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(0x5BBF0C) = (uint32_t)_t; }  /* sbb */
    _cf = (int)((((uint64_t)(MEM32(0x5BBAA0)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(0x5BBAA0) = MEM32(0x5BBAA0) + eax;
    { uint64_t _t = (uint64_t)(MEM32(0x5BBAA4)) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(0x5BBAA4) = (uint32_t)_t; }  /* adc */
    ecx = MEM32(0x5BB9A0);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    eax = MEM32(0x5BB9A4);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    edx = MEM32(0x5BBC78);
    MEM32(0x5BB9A0) = ecx;
    ecx = MEM32(0x5BBEC8);
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(1)) >> 32) & 1);
    ecx = ecx + 1;
    MEM32(0x5BB9A4) = eax;
    { uint64_t _t = (uint64_t)(MEM32(0x5BBECC)) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(0x5BBECC) = (uint32_t)_t; }  /* adc */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    MEM32(0x5BBEC8) = ecx;
    ecx = MEM32(0x5BBC7C);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    MEM32(0x5BBC78) = edx;
    MEM32(0x5BBC7C) = ecx;

loc_001E9375: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001E9380
 * Original: 0x001E9380 - 0x001E93F8 (120 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9380: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001E93F4; /* jl: less (signed <) */

loc_001E938B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001E93F4; /* jge: greater or equal (signed >=) */

loc_001E9390: ;
    eax = esi + esi * 8;
    eax = eax << 4;
    PUSH32(esp, edi);
    edi = eax + ecx;
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E93F3; /* jne: not equal / not zero */

loc_001E93A1: ;
    _fa = (uint32_t)(MEM32(edi + 0xA0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0xA0), 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E93C3; /* je: equal / zero */

loc_001E93AD: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x001E93BBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E93BB: ;
    eax = MEM32(edi + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001E93C3: ;
    edx = MEM32(0x5BC544);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001E93F3; /* jle: less or equal (signed <=) */

loc_001E93CE: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001E93DD; /* js: sign (negative) */

loc_001E93D1: ;
    _fa = (uint32_t)(MEM32(edx * 4 + 0x5BB704)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx * 4 + 0x5BB704), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E93DD; /* je: equal / zero */

loc_001E93DA: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001E93D1; /* jns: not sign (positive) */

loc_001E93DD: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001E93F3; /* js: sign (negative) */

loc_001E93E0: ;
    edi = MEM32(edx * 4 + 0x5BB704);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E93F3; /* je: equal / zero */

loc_001E93EB: ;
    ecx = edi;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x001E93F3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E93F3: ;
    POP32(esp, edi);

loc_001E93F4: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E9400
 * Original: 0x001E9400 - 0x001E9479 (121 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9400(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E9400: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001E945D; /* je: equal / zero */

loc_001E9411: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001E945D; /* je: equal / zero */

loc_001E9416: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    edi = ecx + 0x18;
    goto loc_001E9420;

    /* nop */

loc_001E9420: ;
    esi = ebx;
    eax = edi;

loc_001E9424: ;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E9448; /* jne: not equal / not zero */

loc_001E942C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001E9444; /* je: equal / zero */

loc_001E9430: ;
    SET_LO8(ecx, MEM8(eax + 1));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E9448; /* jne: not equal / not zero */

loc_001E943A: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001E9424; /* jne: not equal / not zero */

loc_001E9444: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_001E944D;

loc_001E9448: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_001E944D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001E9467; /* je: equal / zero */

loc_001E9451: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x90)) >> 32) & 1);
    edi = edi + 0x90;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x2F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001E9420; /* jl: less (signed <) */

loc_001E945D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_001E9467: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x001E9471u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9471: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E9480
 * Original: 0x001E9480 - 0x001E94CD (77 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9480(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E9480: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_S(_fas, _fbs)) goto loc_001E94C8; /* jl: less (signed <) */

loc_001E948C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001E94C8; /* jge: greater or equal (signed >=) */

loc_001E9491: ;
    eax = esi + esi * 8;
    eax = eax << 4;
    PUSH32(esp, ebx);
    ebx = eax + edi + 0x14;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    if (TEST_Z(_fa, _fb)) goto loc_001E94B4; /* je: equal / zero */

loc_001E94A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E94C6; /* je: equal / zero */

loc_001E94AB: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x001E94B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E94B4: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(ebx) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_001E94C6; /* je: equal / zero */

loc_001E94BA: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E94C6; /* jl: less (signed <) */

loc_001E94C2: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 8) = esi;

loc_001E94C6: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001E94C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E94D0
 * Original: 0x001E94D0 - 0x001E94F2 (34 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E94D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E94D0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001E94EA; /* jl: less (signed <) */

loc_001E94D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001E94EA; /* jge: greater or equal (signed >=) */

loc_001E94DD: ;
    eax = eax + eax * 8;
    eax = eax << 4;
    eax = eax + ecx + 0x18;
    esp += 8; return; /* ret 4 */

loc_001E94EA: ;
    eax = 0x3C806C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E9500
 * Original: 0x001E9500 - 0x001E956F (111 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9500: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E9520; /* je: equal / zero */

loc_001E9509: ;
    eax = 0; /* xor self */
    edx = ecx + 0x14;
    edi = edi;

loc_001E9510: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E9558; /* je: equal / zero */

loc_001E9514: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 0x90;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2F (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E9510; /* jl: less (signed <) */

loc_001E9520: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001E9566; /* jle: less or equal (signed <=) */

loc_001E952A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001E953C; /* js: sign (negative) */

loc_001E952D: ;
    /* nop */

loc_001E9530: ;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x5BB704)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x5BB704), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E953C; /* je: equal / zero */

loc_001E9539: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001E9530; /* jns: not sign (positive) */

loc_001E953C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001E9566; /* js: sign (negative) */

loc_001E953F: ;
    edx = MEM32(eax * 4 + 0x5BB704);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E9566; /* je: equal / zero */

loc_001E954A: ;
    eax = edx;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x001E9554u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9554: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001E9558: ;
    eax = eax + eax * 8;
    eax = eax << 4;
    eax = eax + ecx + 0x18;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001E9566: ;
    eax = 0x3C806C;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E9570
 * Original: 0x001E9570 - 0x001E95DC (108 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9570(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E9570: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_001E95C9; /* je: equal / zero */

loc_001E957C: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001E95C9; /* je: equal / zero */

loc_001E9581: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    edi = ecx + 0x18;

loc_001E9586: ;
    esi = eax;
    ecx = edi;
    /* nop */

loc_001E9590: ;
    SET_LO8(ebx, MEM8(ecx));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E95B4; /* jne: not equal / not zero */

loc_001E9598: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001E95B0; /* je: equal / zero */

loc_001E959C: ;
    SET_LO8(ebx, MEM8(ecx + 1));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E95B4; /* jne: not equal / not zero */

loc_001E95A6: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001E9590; /* jne: not equal / not zero */

loc_001E95B0: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    goto loc_001E95B9;

loc_001E95B4: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */

loc_001E95B9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001E95D3; /* je: equal / zero */

loc_001E95BD: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x90)) >> 32) & 1);
    edi = edi + 0x90;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x2F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001E9586; /* jl: less (signed <) */

loc_001E95C9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001E95D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E95E0
 * Original: 0x001E95E0 - 0x001E96CF (239 bytes, 101 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E95E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E95E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001E96BC; /* je: equal / zero */

loc_001E95F2: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001E96BC; /* je: equal / zero */

loc_001E95FB: ;
    PUSH32(esp, 0x13);
    PUSH32(esp, 0x3EEAC8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001E9608u); RECOMP_ABI_CALL(0x00343260u, sub_00343260); /* call 0x00343260 */

loc_001E9608: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001E9614; /* jne: not equal / not zero */

loc_001E960F: ;
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x13)) >> 32) & 1);
    ebx = ebx + 0x13;
    goto loc_001E962B;

loc_001E9614: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x3EEAB8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001E9621u); RECOMP_ABI_CALL(0x00343260u, sub_00343260); /* call 0x00343260 */

loc_001E9621: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001E962B; /* jne: not equal / not zero */

loc_001E9628: ;
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0xD)) >> 32) & 1);
    ebx = ebx + 0xD;

loc_001E962B: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    edi = esi + 0x18;

loc_001E9630: ;
    esi = ebx;
    ecx = edi;

loc_001E9634: ;
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E9658; /* jne: not equal / not zero */

loc_001E963C: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001E9654; /* je: equal / zero */

loc_001E9640: ;
    SET_LO8(eax, MEM8(ecx + 1));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E9658; /* jne: not equal / not zero */

loc_001E964A: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001E9634; /* jne: not equal / not zero */

loc_001E9654: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    goto loc_001E965D;

loc_001E9658: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */

loc_001E965D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001E96A4; /* je: equal / zero */

loc_001E9661: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x90)) >> 32) & 1);
    edi = edi + 0x90;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x2F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001E9630; /* jl: less (signed <) */

loc_001E966D: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    /* nop */

loc_001E9670: ;
    ecx = MEM32(edi * 4 + 0x46A288);
    esi = ebx;
    /* nop */

loc_001E9680: ;
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E96AD; /* jne: not equal / not zero */

loc_001E9688: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001E96A0; /* je: equal / zero */

loc_001E968C: ;
    SET_LO8(eax, MEM8(ecx + 1));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E96AD; /* jne: not equal / not zero */

loc_001E9696: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001E9680; /* jne: not equal / not zero */

loc_001E96A0: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    goto loc_001E96B2;

loc_001E96A4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001E96AD: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */

loc_001E96B2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001E96C6; /* je: equal / zero */

loc_001E96B6: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x2F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001E9670; /* jl: less (signed <) */

loc_001E96BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001E96C6: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E96D0
 * Original: 0x001E96D0 - 0x001E96F6 (38 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E96D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E96D0: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E96F0; /* je: equal / zero */

loc_001E96D8: ;
    eax = 0; /* xor self */
    ecx = ecx + 0x14;
    /* nop */

loc_001E96E0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E96F3; /* je: equal / zero */

loc_001E96E4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 0x90;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2F (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E96E0; /* jl: less (signed <) */

loc_001E96F0: ;
    eax = eax | 0xFFFFFFFFu;

loc_001E96F3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E9700
 * Original: 0x001E9700 - 0x001E9744 (68 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9700: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    esi = ebx + 0x14;
    edi = 0x2F;
    /* nop */

loc_001E9710: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E9726; /* je: equal / zero */

loc_001E9716: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x001E971Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E971B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E9726; /* jne: not equal / not zero */

loc_001E971F: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x001E9726u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9726: ;
    esi = esi + 0x90;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001E9710; /* jne: not equal / not zero */

loc_001E972F: ;
    ecx = MEM32(ebx + 0xC);
    eax = MEM32(ebx);
    ecx = ecx | 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x001E9740u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9740: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001E9750
 * Original: 0x001E9750 - 0x001E97B0 (96 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9750: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    esi = ebx + 0x14;
    edi = 0x2F;
    /* nop */

loc_001E9760: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E9792; /* je: equal / zero */

loc_001E9766: ;
    eax = MEM32(ecx + 4);
    eax = eax & 0x7FFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E9792; /* jne: not equal / not zero */

loc_001E9773: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x001E977Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E977B: ;
    eax = eax | edx;
    if ((eax == 0)) goto loc_001E978B; /* je: equal / zero */

loc_001E977F: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x150); PUSH32(esp, 0x001E978Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E978B: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x001E9792u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9792: ;
    esi = esi + 0x90;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001E9760; /* jne: not equal / not zero */

loc_001E979B: ;
    ecx = MEM32(ebx + 0xC);
    eax = MEM32(ebx);
    ecx = ecx & 0xFFFFFFF7u;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x001E97ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E97AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001E97B0
 * Original: 0x001E97B0 - 0x001E97E4 (52 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E97B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E97B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x14;
    edi = 0x2F;
    /* nop */

loc_001E97C0: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E97D8; /* je: equal / zero */

loc_001E97C6: ;
    eax = MEM32(ecx + 4);
    eax = eax & 0x7FFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E97D8; /* jne: not equal / not zero */

loc_001E97D3: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001E97D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E97D8: ;
    esi = esi + 0x90;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001E97C0; /* jne: not equal / not zero */

loc_001E97E1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001E97F0
 * Original: 0x001E97F0 - 0x001E9836 (70 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E97F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E97F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x001E97FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E97FC: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xD4); PUSH32(esp, 0x001E9806u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9806: ;
    edi = 0x2E;
    goto loc_001E9810;

    /* nop */

loc_001E9810: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xCC); PUSH32(esp, 0x001E981Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E981B: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_001E9810; /* jns: not sign (positive) */

loc_001E981E: ;
    edi = esi + 0x14;
    ecx = 0x69C;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edx = MEM32(esi);
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xAC)); return; /* indirect tail jmp */

}

/**
 * sub_001E9840
 * Original: 0x001E9840 - 0x001E9878 (56 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9840: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x46A288;
    edi = ecx + 0x97;
    /* nop */

loc_001E9850: ;
    eax = MEM32(esi);
    PUSH32(esp, 0x7F);
    PUSH32(esp, eax);
    ecx = edi + -127;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001E985Eu); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_001E985E: ;
    MEM8(edi) = 0;
    esi = esi + 4;
    esp = esp + 0xC;
    edi = edi + 0x90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46A344) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x46A344 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E9850; /* jl: less (signed <) */

loc_001E9875: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001E9880
 * Original: 0x001E9880 - 0x001E988F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9880(void)
{

loc_001E9880: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E9890
 * Original: 0x001E9890 - 0x001E98D1 (65 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001E9890: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = MEM32(ecx);
    edi = edi;

loc_001E98A0: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E98C9; /* jne: not equal / not zero */

loc_001E98AA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001E98C4; /* je: equal / zero */

loc_001E98AE: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001E98C9; /* jne: not equal / not zero */

loc_001E98BA: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001E98A0; /* jne: not equal / not zero */

loc_001E98C4: ;
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001E98C9: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    POP32(esp, esi);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001E98E0
 * Original: 0x001E98E0 - 0x001E9A16 (310 bytes, 102 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E98E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E98E0: ;
    esp = esp - 0x10C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0x14) = edi;
    MEM8(esp + 0x13) = 0;
    esi = 0; /* xor self */
    goto loc_001E9900;

    /* nop */

loc_001E9900: ;
    eax = esi + esi * 8;
    eax = eax << 4;
    ecx = MEM32(eax + edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E9A01; /* je: equal / zero */

loc_001E9912: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x158); PUSH32(esp, 0x001E991Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E991A: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E9A01; /* je: equal / zero */

loc_001E9924: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001E9955; /* jle: less or equal (signed <=) */

loc_001E992A: ;
    edi = edi + 0x14;
    /* nop */

loc_001E9930: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E9946; /* je: equal / zero */

loc_001E9936: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x158); PUSH32(esp, 0x001E993Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E993E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001E99FD; /* je: equal / zero */

loc_001E9946: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0x90;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E9930; /* jl: less (signed <) */

loc_001E9951: ;
    edi = MEM32(esp + 0x14);

loc_001E9955: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esp + 0x11B) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_001E99D2; /* jne: not equal / not zero */

loc_001E9965: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E996E; /* je: equal / zero */

loc_001E9969: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E99D2; /* jne: not equal / not zero */

loc_001E996E: ;
    ecx = MEM32(0x5BC508);
    PUSH32(esp, 0xFF);
    ecx = ecx + 0x210;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001E998Au); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_001E998A: ;
    esp = esp + 0xC;
    MEM8(esp + 0x13) = 1;

loc_001E9992: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E99B5; /* jne: not equal / not zero */

loc_001E999A: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001E99A2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E99A2: ;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, 0x3EEADC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001E99B2u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_001E99B2: ;
    esp = esp + 0xC;

loc_001E99B5: ;
    eax = MEM32(ebx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E9A01; /* je: equal / zero */

loc_001E99BC: ;
    edx = MEM32(ebx);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x001E99D0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E99D0: ;
    goto loc_001E9A01;

loc_001E99D2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E99F6; /* jne: not equal / not zero */

loc_001E99D7: ;
    eax = MEM32(0x5BC508);
    PUSH32(esp, 0xFF);
    eax = eax + 0x290;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001E99F1u); RECOMP_ABI_CALL(0x00340E00u, sub_00340E00); /* call 0x00340E00 */

loc_001E99F1: ;
    esp = esp + 0xC;
    goto loc_001E9992;

loc_001E99F6: ;
    MEM8(esp + 0x1C) = 0;
    goto loc_001E999A;

loc_001E99FD: ;
    edi = MEM32(esp + 0x14);

loc_001E9A01: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2F (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E9900; /* jl: less (signed <) */

loc_001E9A0B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10C;
    esp += 4; return; /* ret */

}

/**
 * sub_001E9A20
 * Original: 0x001E9A20 - 0x001E9AD2 (178 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9A20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E9A20: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x5BC5D8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebp = edi + 0x14;
    MEM32(esp + 0x10) = eax;
    esi = 0; /* xor self */
    /* nop */

loc_001E9A40: ;
    eax = MEM32(ebp + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFBFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFBFFFFFFu (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E9AB4; /* je: equal / zero */

loc_001E9A4D: ;
    ecx = eax;
    ecx = ecx & 0xFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E9AB4; /* jne: not equal / not zero */

loc_001E9A59: ;
    SET_LO8(ecx, MEM8(esp + 0x20));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E9A8D; /* je: equal / zero */

loc_001E9A61: ;
    ecx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E9AB4; /* je: equal / zero */

loc_001E9A68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x2000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E9A74; /* je: equal / zero */

loc_001E9A6F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001E9A74u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9A74: ;
    _fa = (uint32_t)(MEM32(ebp + 0x8C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0x8C), 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E9AB4; /* je: equal / zero */

loc_001E9A80: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xCC); PUSH32(esp, 0x001E9A8Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9A8B: ;
    goto loc_001E9AB4;

loc_001E9A8D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x1000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E9AB4; /* je: equal / zero */

loc_001E9A94: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC4); PUSH32(esp, 0x001E9AA6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9AA6: ;
    ecx = MEM32(0x46A728);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001E9AB4; /* jne: not equal / not zero */

loc_001E9AB0: ;
    MEM32(esp + 0x10) = ecx;

loc_001E9AB4: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 0x90;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2F (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E9A40; /* jl: less (signed <) */

loc_001E9AC0: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001E9AE0
 * Original: 0x001E9AE0 - 0x001E9B09 (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9AE0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(0x5BBAB4);
    edx = MEM32(ecx);
    if (TEST_Z(_fa, _fb)) goto loc_001E9AFD; /* je: equal / zero */

loc_001E9AF0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x100); PUSH32(esp, 0x001E9AFCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9AFC: ;
    esp += 4; return; /* ret */

loc_001E9AFD: ;
    eax = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x001E9B08u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9B08: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001E9B10
 * Original: 0x001E9B10 - 0x001E9B36 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001E9B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9B10: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001E9B28; /* jle: less or equal (signed <=) */

loc_001E9B19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001E9B26; /* jge: greater or equal (signed >=) */

loc_001E9B1E: ;
    eax = MEM32(eax * 4 + 0x5BB700);
    esp += 4; return; /* ret */

loc_001E9B26: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001E9B28: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001E9B33; /* jne: not equal / not zero */

loc_001E9B2A: ;
    eax = MEM32(0x5BBAB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E9B35; /* jne: not equal / not zero */

loc_001E9B33: ;
    eax = 0; /* xor self */

loc_001E9B35: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001E9B40
 * Original: 0x001E9B40 - 0x001E9B7B (59 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9B40: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001E9B62; /* jle: less or equal (signed <=) */

loc_001E9B49: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001E9B60; /* jge: greater or equal (signed >=) */

loc_001E9B4E: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001E9B5Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9B5F: ;
    esp += 4; return; /* ret */

loc_001E9B60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001E9B62: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001E9B6E; /* jne: not equal / not zero */

loc_001E9B64: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E9B70; /* jne: not equal / not zero */

loc_001E9B6E: ;
    ecx = 0; /* xor self */

loc_001E9B70: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001E9B7Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9B7A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001E9B80
 * Original: 0x001E9B80 - 0x001E9BBB (59 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9B80: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001E9BA2; /* jle: less or equal (signed <=) */

loc_001E9B89: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001E9BA0; /* jge: greater or equal (signed >=) */

loc_001E9B8E: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x001E9B9Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9B9F: ;
    esp += 4; return; /* ret */

loc_001E9BA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001E9BA2: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001E9BAE; /* jne: not equal / not zero */

loc_001E9BA4: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E9BB0; /* jne: not equal / not zero */

loc_001E9BAE: ;
    ecx = 0; /* xor self */

loc_001E9BB0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x001E9BBAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9BBA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001E9BC0
 * Original: 0x001E9BC0 - 0x001E9C05 (69 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9BC0: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001E9BE7; /* jle: less or equal (signed <=) */

loc_001E9BC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001E9BE5; /* jge: greater or equal (signed >=) */

loc_001E9BCE: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(eax * 4 + 0x5BB700);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001E9BE4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9BE4: ;
    esp += 4; return; /* ret */

loc_001E9BE5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001E9BE7: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001E9BF3; /* jne: not equal / not zero */

loc_001E9BE9: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E9BF5; /* jne: not equal / not zero */

loc_001E9BF3: ;
    ecx = 0; /* xor self */

loc_001E9BF5: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001E9C04u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9C04: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001E9C10
 * Original: 0x001E9C10 - 0x001E9C4B (59 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9C10: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001E9C32; /* jle: less or equal (signed <=) */

loc_001E9C19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001E9C30; /* jge: greater or equal (signed >=) */

loc_001E9C1E: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x001E9C2Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9C2F: ;
    esp += 4; return; /* ret */

loc_001E9C30: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001E9C32: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001E9C3E; /* jne: not equal / not zero */

loc_001E9C34: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E9C40; /* jne: not equal / not zero */

loc_001E9C3E: ;
    ecx = 0; /* xor self */

loc_001E9C40: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x001E9C4Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9C4A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001E9C50
 * Original: 0x001E9C50 - 0x001E9CB7 (103 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9C50: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001E9C69; /* jle: less or equal (signed <=) */

loc_001E9C59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001E9C67; /* jge: greater or equal (signed >=) */

loc_001E9C5E: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_001E9C77;

loc_001E9C67: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001E9C69: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001E9C75; /* jne: not equal / not zero */

loc_001E9C6B: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E9C77; /* jne: not equal / not zero */

loc_001E9C75: ;
    ecx = 0; /* xor self */

loc_001E9C77: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001E9C7Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9C7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E9CB6; /* jne: not equal / not zero */

loc_001E9C82: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001E9CA1; /* jle: less or equal (signed <=) */

loc_001E9C8B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001E9C9F; /* jge: greater or equal (signed >=) */

loc_001E9C90: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x001E9C9Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9C9E: ;
    esp += 4; return; /* ret */

loc_001E9C9F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_001E9CA1: ;
    if (TEST_NZ(_fa, _fb)) goto loc_001E9CAD; /* jne: not equal / not zero */

loc_001E9CA3: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E9CAF; /* jne: not equal / not zero */

loc_001E9CAD: ;
    ecx = 0; /* xor self */

loc_001E9CAF: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x001E9CB6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9CB6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001E9CC0
 * Original: 0x001E9CC0 - 0x001E9D06 (70 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9CC0(void)
{

loc_001E9CC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 8) = 0x40;
    MEM32(esi + 4) = 0;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x30);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x001E9CE7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9CE7: ;
    ecx = MEM32(esi + 8);
    ecx = ecx << 2;
    edx = ecx;
    edi = eax;
    ecx = ecx >> 2;
    MEM32(esi) = edi;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001E9D10
 * Original: 0x001E9D10 - 0x001E9D62 (82 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9D10: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001E9D4F; /* jl: less (signed <) */

loc_001E9D1B: ;
    eax = eax + 4;
    MEM32(esi + 8) = eax;
    ecx = MEM32(0x5BC508);
    ecx = MEM32(ecx + 0x30);
    edx = MEM32(ecx);
    eax = eax << 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x001E9D39u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9D39: ;
    edx = MEM32(esi + 8);
    MEM32(esi) = eax;
    ecx = 0; /* xor self */
    eax = eax + edx * 4 + -16;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;

loc_001E9D4F: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    eax = MEM32(esp + 8);
    MEM32(edx + ecx * 4) = eax;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E9D70
 * Original: 0x001E9D70 - 0x001E9D77 (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9D70(void)
{

loc_001E9D70: ;
    eax = MEM32(ecx + 0x50);
    eax = eax << 2;
    esp += 4; return; /* ret */

}

/**
 * sub_001E9D80
 * Original: 0x001E9D80 - 0x001E9E2F (175 bytes, 70 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9D80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E9D80: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E9D9A; /* jne: not equal / not zero */

loc_001E9D8A: ;
    ecx = MEM32(0x46A728);
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001E9D9A: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x001E9DA3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9DA3: ;
    ecx = MEM32(esi + 0x3C);
    ebx = MEM32(ecx + 0x20);
    edx = MEM32(esi + 8);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx + edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    eax = ZX16(LO16(eax));
    if (TEST_Z(_fa, _fb)) goto loc_001E9E1E; /* je: equal / zero */

loc_001E9DBA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_001E9E04; /* je: equal / zero */

loc_001E9DBF: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_001E9E1D; /* jbe: below or equal (unsigned <=) */

loc_001E9DC7: ;
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, ebp);
    /* nop */

loc_001E9DD0: ;
    ecx = eax;
    ebp = ecx;
    ecx = ecx >> 2;
    edi = edx;
    esi = ebx;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = ebp;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    ecx = MEM32(esp + 0x1C);
    edx = edx + eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = ecx;
    if ((_fa != 0)) goto loc_001E9DD0; /* jne: not equal / not zero */

loc_001E9DF1: ;
    ecx = MEM32(0x5BC5D8);
    eax = MEM32(esp + 0x14);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001E9E04: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 0x18));
    edi = edx;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_001E9E1D: ;
    POP32(esp, edi);

loc_001E9E1E: ;
    ecx = MEM32(0x5BC5D8);
    eax = MEM32(esp + 0xC);
    POP32(esp, ebx);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001E9E30
 * Original: 0x001E9E30 - 0x001E9E49 (25 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9E30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001E9E30: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax);
    edx = MEM32(esp + 8);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx + edx)));
    eax = eax - MEM32(ecx + edx);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001E9E50
 * Original: 0x001E9E50 - 0x001E9E54 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9E50(void)
{

loc_001E9E50: ;
    SET_LO16(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_001E9E60
 * Original: 0x001E9E60 - 0x001E9E85 (37 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9E60(void)
{

loc_001E9E60: ;
    eax = ecx;
    ecx = ZX16(MEM16(eax + 0x14));
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    edi = edi + MEM32(esp + 0xC);
    eax = ecx;
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E9E90
 * Original: 0x001E9E90 - 0x001E9ECE (62 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9E90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x001E9E98u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9E98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E9EA6; /* je: equal / zero */

loc_001E9E9C: ;
    SET_LO16(ecx, MEM16(eax + 0x12));
    MEM16(esi + 0x10) = LO16(ecx);
    goto loc_001E9EAC;

loc_001E9EA6: ;
    MEM16(esi + 0x10) = 0xFFFF;

loc_001E9EAC: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x001E9EB3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9EB3: ;
    MEM16(esi + 0x14) = LO16(eax);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x001E9EC3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9EC3: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E9ECC; /* je: equal / zero */

loc_001E9ECA: ;
    MEM32(eax) = esi;

loc_001E9ECC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001E9ED0
 * Original: 0x001E9ED0 - 0x001E9EE6 (22 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9ED0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9ED0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x001E9ED5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9ED5: ;
    edx = MEM32(esp + 4);
    ecx = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx + edx;
    ecx = ~ecx;
    eax = eax & ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E9EF0
 * Original: 0x001E9EF0 - 0x001E9F30 (64 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9EF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = ZX16(MEM16(ebx + 0x14));
    edx = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = ecx >> 2;
    PUSH32(esp, edi);
    edi = eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    SET_LO8(ecx, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E9F26; /* je: equal / zero */

loc_001E9F19: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x001E9F26u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9F26: ;
    eax = ZX16(MEM16(ebx + 0x14));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001E9F30
 * Original: 0x001E9F30 - 0x001E9F90 (96 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001E9F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9F30: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = ZX16(MEM16(ebx + 0x14));
    edx = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = ecx >> 2;
    PUSH32(esp, edi);
    edi = eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    SET_LO8(ecx, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E9F66; /* je: equal / zero */

loc_001E9F59: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x001E9F66u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9F66: ;
    eax = ZX16(MEM16(ebx + 0x14));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

    SET_LO8(eax, MEM8(ecx + 0x25));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E9F8B; /* jne: not equal / not zero */

loc_001E9F7E: ;
    eax = ZX16(MEM16(ecx + 0x14));
    eax = eax + 3;
    eax = eax & 0xFFFFFFFCu;
    esp += 8; return; /* ret 4 */

loc_001E9F8B: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E9F70
 * Original: 0x001E9F70 - 0x001E9F90 (32 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001E9F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001E9F70: ;
    SET_LO8(eax, MEM8(ecx + 0x26));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001E9F8B; /* je: equal / zero */

loc_001E9F77: ;
    SET_LO8(eax, MEM8(ecx + 0x25));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001E9F8B; /* jne: not equal / not zero */

loc_001E9F7E: ;
    eax = ZX16(MEM16(ecx + 0x14));
    eax = eax + 3;
    eax = eax & 0xFFFFFFFCu;
    esp += 8; return; /* ret 4 */

loc_001E9F8B: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001E9F90
 * Original: 0x001E9F90 - 0x001EA009 (121 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001E9F90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001E9F90: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EA006; /* ja: above (unsigned >) */

loc_001E9F99: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1EA00C); /* switch: 5 entries, 5 targets */
    if (_jt == 0x001E9FA0u) goto loc_001E9FA0;
    if (_jt == 0x001E9FB5u) goto loc_001E9FB5;
    if (_jt == 0x001E9FCAu) goto loc_001E9FCA;
    if (_jt == 0x001E9FDFu) goto loc_001E9FDF;
    if (_jt == 0x001E9FF4u) goto loc_001E9FF4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001E9FA0: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x001E9FB2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9FB2: ;
    esp += 16; return; /* ret 12 */

loc_001E9FB5: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x001E9FC7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9FC7: ;
    esp += 16; return; /* ret 12 */

loc_001E9FCA: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x001E9FDCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9FDC: ;
    esp += 16; return; /* ret 12 */

loc_001E9FDF: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x001E9FF1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001E9FF1: ;
    esp += 16; return; /* ret 12 */

loc_001E9FF4: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x98); PUSH32(esp, 0x001EA006u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA006: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EA020
 * Original: 0x001EA020 - 0x001EA050 (48 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA020(void)
{

loc_001EA020: ;
    eax = MEM32(ecx + 8);
    ecx = ZX16(MEM16(ecx + 0x14));
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax + edx;
    edx = MEM32(esp + 0xC);
    edi = eax + edx;
    eax = ecx;
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EA050
 * Original: 0x001EA050 - 0x001EA088 (56 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EA050: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x24);
    eax = eax - 0;
    if ((eax == 0)) goto loc_001EA07B; /* je: equal / zero */

loc_001EA059: ;
    eax = eax - 2;
    if ((eax == 0)) goto loc_001EA06E; /* je: equal / zero */

loc_001EA05E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001EA085; /* jne: not equal / not zero */

loc_001EA061: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x001EA06Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA06B: ;
    esp += 12; return; /* ret 8 */

loc_001EA06E: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x001EA078u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA078: ;
    esp += 12; return; /* ret 8 */

loc_001EA07B: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x001EA085u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA085: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EA090
 * Original: 0x001EA090 - 0x001EA099 (9 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA090(void)
{

loc_001EA090: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001EA095u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA095: ;
    eax = ZX16(LO16(eax));
    esp += 4; return; /* ret */

}

/**
 * sub_001EA0A0
 * Original: 0x001EA0A0 - 0x001EA0F9 (89 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA0A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EA0A0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001EA0E1; /* jle: less or equal (signed <=) */

loc_001EA0B8: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xD8); PUSH32(esp, 0x001EA0C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA0C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EA0F0; /* je: equal / zero */

loc_001EA0CD: ;
    edx = MEM32(esi);
    ecx = esi;
    edi = edi + eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x001EA0D6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA0D6: ;
    ebx = ebx + eax;
    eax = MEM32(esp + 0x1C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EA0B8; /* jl: less (signed <) */

loc_001EA0E1: ;
    ecx = MEM32(esp + 0x14);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax - ecx;
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_001EA0F0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001EA100
 * Original: 0x001EA100 - 0x001EA126 (38 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001EA100(void)
{
    int _flags = 0; /* fallback flag var */

loc_001EA100: ;
    eax = MEM32(ecx + 8);
    eax = eax + MEM32(esp + 4);
    if ((eax == 0)) goto loc_001EA121; /* je: equal / zero */

loc_001EA109: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x001EA11Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA11D: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001EA121: ;
    eax = 0; /* xor self */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EA130
 * Original: 0x001EA130 - 0x001EA13E (14 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EA130: ;
    SET_LO8(edx, MEM8(ecx + 0x26));
    eax = 0; /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EA140
 * Original: 0x001EA140 - 0x001EA1A9 (105 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA140(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EA140: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EA1A4; /* ja: above (unsigned >) */

loc_001EA149: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1EA1AC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x001EA150u) goto loc_001EA150;
    if (_jt == 0x001EA165u) goto loc_001EA165;
    if (_jt == 0x001EA17Au) goto loc_001EA17A;
    if (_jt == 0x001EA18Fu) goto loc_001EA18F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001EA150: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xAC); PUSH32(esp, 0x001EA162u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA162: ;
    esp += 16; return; /* ret 12 */

loc_001EA165: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xB0); PUSH32(esp, 0x001EA177u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA177: ;
    esp += 16; return; /* ret 12 */

loc_001EA17A: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xB4); PUSH32(esp, 0x001EA18Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA18C: ;
    esp += 16; return; /* ret 12 */

loc_001EA18F: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xB8); PUSH32(esp, 0x001EA1A1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA1A1: ;
    esp += 16; return; /* ret 12 */

loc_001EA1A4: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EA1C0
 * Original: 0x001EA1C0 - 0x001EA200 (64 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EA1C0: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edx = edx + eax;
    edi = eax + esi;
    eax = ZX16(MEM16(ecx + 0x14));
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001EA1ED; /* jle: less or equal (signed <=) */

loc_001EA1DC: ;
    ecx = edx;
    edi = edi - edx;

loc_001EA1E0: ;
    SET_LO8(edx, MEM8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(edi + ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EA1F4; /* jne: not equal / not zero */

loc_001EA1E7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EA1E0; /* jl: less (signed <) */

loc_001EA1ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_001EA1F4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EA200
 * Original: 0x001EA200 - 0x001EA208 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA200(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EA200: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xAC)); return; /* indirect tail jmp */

}

/**
 * sub_001EA210
 * Original: 0x001EA210 - 0x001EA22C (28 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001EA210: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x2A);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EA224u); RECOMP_ABI_CALL(0x001EA140u, sub_001EA140); /* call 0x001EA140 */

loc_001EA224: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EA230
 * Original: 0x001EA230 - 0x001EA256 (38 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA230(void)
{

loc_001EA230: ;
    eax = ecx;
    ecx = ZX16(MEM16(eax + 0x14));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    edi = edi + MEM32(esp + 0xC);
    eax = ecx;
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EA260
 * Original: 0x001EA260 - 0x001EA279 (25 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA260(void)
{

loc_001EA260: ;
    edx = MEM32(esp + 8);
    edx = MEM32(edx + 8);
    eax = MEM32(ecx);
    edx = edx + MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x001EA276u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA276: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EA280
 * Original: 0x001EA280 - 0x001EA2D7 (87 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA280(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EA280: ;
    PUSH32(esp, ecx);
    ecx = ZX16(MEM16(ecx + 0x14));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    MEM32(esp) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001EA2D3; /* je: equal / zero */

loc_001EA28D: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001EA2D3; /* jle: less or equal (signed <=) */

loc_001EA295: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((1) & 31u));
    MEM32(esp + 0x1C) = eax;

loc_001EA2A5: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001EA2C2; /* jle: less or equal (signed <=) */

loc_001EA2A9: ;
    eax = edi;
    ecx = ecx + edi + -1;
    esi = ebp;

loc_001EA2B1: ;
    SET_LO8(ebx, MEM8(ecx));
    SET_LO8(edx, MEM8(eax));
    MEM8(eax) = LO8(ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(edx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001EA2B1; /* jne: not equal / not zero */

loc_001EA2BE: ;
    ecx = MEM32(esp + 0x10);

loc_001EA2C2: ;
    eax = MEM32(esp + 0x1C);
    edi = edi + ecx;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = eax;
    if ((_fa != 0)) goto loc_001EA2A5; /* jne: not equal / not zero */

loc_001EA2CF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001EA2D3: ;
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EA2E0
 * Original: 0x001EA2E0 - 0x001EA2F9 (25 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA2E0(void)
{

loc_001EA2E0: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edx = edx + esi;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x001EA2F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA2F5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EA300
 * Original: 0x001EA300 - 0x001EA432 (306 bytes, 134 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA300(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EA300: ;
    esp = esp - 8;
    PUSH32(esp, edi);
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EA42D; /* je: equal / zero */

loc_001EA310: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EA42D; /* je: equal / zero */

loc_001EA318: ;
    eax = MEM32(edx + 0x18);
    ecx = MEM32(eax + 0x1C);
    eax = MEM32(0x46A38C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0xC);
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x10) = ecx;
    ebx = eax + 1;

loc_001EA334: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EA334; /* jne: not equal / not zero */

loc_001EA33B: ;
    eax = eax - ebx;
    ecx = eax;
    eax = esi;
    esi = eax + 1;

loc_001EA344: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EA344; /* jne: not equal / not zero */

loc_001EA34B: ;
    eax = eax - esi;
    ebp = eax;
    eax = MEM32(0x46A390);
    esi = eax + 1;

loc_001EA357: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EA357; /* jne: not equal / not zero */

loc_001EA35E: ;
    eax = eax - esi;
    edx = eax;
    eax = MEM32(esp + 0x10);
    esi = eax + 1;
    /* nop */

loc_001EA370: ;
    SET_LO8(ebx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EA370; /* jne: not equal / not zero */

loc_001EA377: ;
    eax = eax - esi;
    esi = MEM32(edi);
    eax = eax + edx;
    eax = eax + ebp;
    edx = eax + ecx + 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(esi + 0xCC); PUSH32(esp, 0x001EA38Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA38C: ;
    ecx = MEM32(0x46A38C);
    ebp = eax;
    edx = ebp;
    edx = edx - ecx;

loc_001EA398: ;
    SET_LO8(ebx, MEM8(ecx));
    MEM8(edx + ecx) = LO8(ebx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EA398; /* jne: not equal / not zero */

loc_001EA3A2: ;
    ecx = MEM32(esp + 0x10);
    edx = ecx;

loc_001EA3A8: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EA3A8; /* jne: not equal / not zero */

loc_001EA3AF: ;
    ecx = ecx - edx;
    edi = ebp;
    esi = edx;
    edx = ecx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001EA3B8: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EA3B8; /* jne: not equal / not zero */

loc_001EA3C0: ;
    ecx = edx;
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    ecx = MEM32(0x46A390);
    edx = ecx;

loc_001EA3D6: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EA3D6; /* jne: not equal / not zero */

loc_001EA3DD: ;
    ecx = ecx - edx;
    edi = ebp;
    esi = edx;
    edx = ecx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001EA3E6: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EA3E6; /* jne: not equal / not zero */

loc_001EA3EE: ;
    ecx = edx;
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    ecx = MEM32(esp + 0x14);
    edx = ecx;

loc_001EA402: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EA402; /* jne: not equal / not zero */

loc_001EA409: ;
    ecx = ecx - edx;
    edi = ebp;
    eax = ecx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001EA410: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EA410; /* jne: not equal / not zero */

loc_001EA418: ;
    ecx = eax;
    ecx = ecx >> 2;
    esi = edx;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001EA42D: ;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001EA440
 * Original: 0x001EA440 - 0x001EA488 (72 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA440(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EA440: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x2C);
    if (TEST_Z(_fa, _fb)) goto loc_001EA481; /* je: equal / zero */

loc_001EA44F: ;
    eax = MEM32(ebx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EA481; /* je: equal / zero */

loc_001EA456: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001EA478; /* jle: less or equal (signed <=) */

loc_001EA461: ;
    eax = MEM32(ebx + 0x34);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + esi * 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001EA471u); RECOMP_ABI_CALL(0x001EA440u, sub_001EA440); /* call 0x001EA440 */

loc_001EA471: ;
    ebp = ebp + eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EA461; /* jl: less (signed <) */

loc_001EA478: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001EA481: ;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EA490
 * Original: 0x001EA490 - 0x001EA4A0 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA490(void)
{

loc_001EA490: ;
    eax = MEM32(ecx + 0x28);
    ecx = MEM32(eax + 8);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx + edx * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EA4A0
 * Original: 0x001EA4A0 - 0x001EA4B7 (23 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA4A0(void)
{

loc_001EA4A0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(0x5BB930);
    ecx = MEM32(ecx + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001EA4B4u); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_001EA4B4: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EA4C0
 * Original: 0x001EA4C0 - 0x001EA4DD (29 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA4C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EA4C0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EA4D3; /* je: equal / zero */

loc_001EA4C4: ;
    eax = MEM32(esp + 4);

loc_001EA4C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EA4D8; /* je: equal / zero */

loc_001EA4CC: ;
    ecx = MEM32(ecx + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EA4C8; /* jne: not equal / not zero */

loc_001EA4D3: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

loc_001EA4D8: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EA4E0
 * Original: 0x001EA4E0 - 0x001EA4EC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA4E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EA4E0: ;
    eax = MEM32(ecx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EA4E8; /* jne: not equal / not zero */

loc_001EA4E7: ;
    esp += 4; return; /* ret */

loc_001EA4E8: ;
    eax = MEM32(eax + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_001EA4F0
 * Original: 0x001EA4F0 - 0x001EA500 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA4F0(void)
{

loc_001EA4F0: ;
    eax = MEM32(ecx + 0x34);
    ecx = MEM32(eax + 8);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx + edx * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EA500
 * Original: 0x001EA500 - 0x001EA53E (62 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EA500(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EA500: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EA511; /* jne: not equal / not zero */

loc_001EA50A: ;
    eax = 1;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001EA511: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ebx = 1;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001EA537; /* jle: less or equal (signed <=) */

loc_001EA522: ;
    eax = MEM32(ebp + 0x34);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + esi * 4);
    PUSH32(esp, 0x001EA530u); RECOMP_ABI_CALL(0x001EA500u, sub_001EA500); /* call 0x001EA500 */

loc_001EA530: ;
    ebx = ebx + eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EA522; /* jl: less (signed <) */

loc_001EA537: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001EA540
 * Original: 0x001EA540 - 0x001EA547 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA540(void)
{

loc_001EA540: ;
    eax = MEM32(ecx + 0x28);
    eax = MEM32(eax + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_001EA550
 * Original: 0x001EA550 - 0x001EA56C (28 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA550(void)
{

loc_001EA550: ;
    eax = ecx;
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xFF000001u;
    ecx = ecx | 1;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = 0x3EEAE8;
    MEM8(eax + 7) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001EA570
 * Original: 0x001EA570 - 0x001EA594 (36 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA570(void)
{

loc_001EA570: ;
    esp = esp - 8;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    MEM32(esp) = 0x3EEAE8;
    MEM32(esp + 4) = 1;
    eax = MEM32(esp + ecx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001EA5A0
 * Original: 0x001EA5A0 - 0x001EA5F9 (89 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EA5A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EA5A0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001EA5A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA5A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EA5B8; /* je: equal / zero */

loc_001EA5AD: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EA5CA; /* jne: not equal / not zero */

loc_001EA5B8: ;
    ecx = MEM32(0x5BC508);
    SET_LO8(edx, MEM8(ecx + 0x14));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EA5CA; /* je: equal / zero */

loc_001EA5C5: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EA5F7; /* je: equal / zero */

loc_001EA5CA: ;
    edx = MEM32(0x5BC554);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x28);
    eax = MEM32(edx + 0x28);
    ebx = MEM32(edi + 0xC);
    esi = MEM32(eax + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EA5F4; /* jge: greater or equal (signed >=) */

loc_001EA5E3: ;
    ecx = MEM32(edi + 8);
    ecx = MEM32(ecx + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x001EA5EFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA5EF: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EA5E3; /* jl: less (signed <) */

loc_001EA5F4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001EA5F7: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001EA600
 * Original: 0x001EA600 - 0x001EA640 (64 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA600(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EA600: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001EA60Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA60B: ;
    ecx = MEM32(0x5BC554);
    ebx = MEM32(eax + 0x28);
    edx = MEM32(ecx + 0x28);
    ebp = MEM32(ebx + 0xC);
    esi = MEM32(edx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EA632; /* jge: greater or equal (signed >=) */

loc_001EA621: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x001EA62Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA62D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EA621; /* jl: less (signed <) */

loc_001EA632: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001EA63Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA63B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001EA640
 * Original: 0x001EA640 - 0x001EA6A1 (97 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA640(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EA640: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001EA64Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA64B: ;
    ecx = MEM32(0x5BC554);
    ebx = MEM32(eax + 0x28);
    edx = MEM32(ecx + 0x28);
    ebp = MEM32(ebx + 0xC);
    esi = MEM32(edx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EA693; /* jge: greater or equal (signed >=) */

loc_001EA661: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax + esi * 4);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x24);
    eax = eax - 0;
    if ((eax == 0)) goto loc_001EA688; /* je: equal / zero */

loc_001EA670: ;
    eax = eax - 2;
    if ((eax == 0)) goto loc_001EA680; /* je: equal / zero */

loc_001EA675: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001EA68E; /* jne: not equal / not zero */

loc_001EA678: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x001EA67Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA67E: ;
    goto loc_001EA68E;

loc_001EA680: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x001EA686u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA686: ;
    goto loc_001EA68E;

loc_001EA688: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x001EA68Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA68E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EA661; /* jl: less (signed <) */

loc_001EA693: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x001EA69Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA69C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001EA6B0
 * Original: 0x001EA6B0 - 0x001EA72F (127 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA6B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EA6B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001EA6BBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA6BB: ;
    ecx = MEM32(0x5BC554);
    ebp = MEM32(eax + 0x28);
    edx = MEM32(ecx + 0x28);
    eax = MEM32(ebp + 0xC);
    ebx = MEM32(edx + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001EA721; /* jge: greater or equal (signed >=) */

loc_001EA6D5: ;
    PUSH32(esp, esi);

loc_001EA6D6: ;
    eax = MEM32(ebp + 8);
    esi = MEM32(eax + ebx * 4);
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xE8); PUSH32(esp, 0x001EA6E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA6E6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EA717; /* jne: not equal / not zero */

loc_001EA6EA: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x24);
    eax = eax - 0;
    if ((eax == 0)) goto loc_001EA70F; /* je: equal / zero */

loc_001EA6F3: ;
    eax = eax - 2;
    if ((eax == 0)) goto loc_001EA705; /* je: equal / zero */

loc_001EA6F8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001EA717; /* jne: not equal / not zero */

loc_001EA6FB: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x001EA703u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA703: ;
    goto loc_001EA717;

loc_001EA705: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x001EA70Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA70D: ;
    goto loc_001EA717;

loc_001EA70F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x001EA717u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA717: ;
    eax = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EA6D6; /* jl: less (signed <) */

loc_001EA720: ;
    POP32(esp, esi);

loc_001EA721: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x001EA72Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA72A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001EA730
 * Original: 0x001EA730 - 0x001EA76D (61 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA730(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EA730: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001EA73Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA73B: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001EA742u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA742: ;
    ebx = MEM32(eax + 0x28);
    eax = MEM32(0x5BC554);
    ecx = MEM32(eax + 0x28);
    ebp = MEM32(ebx + 0xC);
    esi = MEM32(ecx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EA768; /* jge: greater or equal (signed >=) */

loc_001EA757: ;
    edx = MEM32(ebx + 8);
    ecx = MEM32(edx + esi * 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x001EA763u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA763: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EA757; /* jl: less (signed <) */

loc_001EA768: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001EA770
 * Original: 0x001EA770 - 0x001EA7AA (58 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA770(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EA770: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001EA77Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA77B: ;
    ecx = MEM32(0x5BC554);
    ebx = MEM32(eax + 0x28);
    edx = MEM32(ecx + 0x28);
    ebp = MEM32(ebx + 0xC);
    esi = MEM32(edx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EA7A5; /* jge: greater or equal (signed >=) */

loc_001EA791: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x001EA7A0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA7A0: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EA791; /* jl: less (signed <) */

loc_001EA7A5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001EA7B0
 * Original: 0x001EA7B0 - 0x001EA81E (110 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA7B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EA7B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001EA7BBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA7BB: ;
    ecx = MEM32(eax + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EA7C4; /* je: equal / zero */

loc_001EA7C2: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x001EA7C4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA7C4: ;
    edi = eax;
    SET_LO8(eax, MEM8(edi + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EA7D3; /* jne: not equal / not zero */

loc_001EA7CD: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001EA7D3: ;
    edx = MEM32(0x5BC554);
    ecx = MEM32(edi + 0x28);
    eax = MEM32(edx + 0x28);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = 8;
    if (CMP_GE(_fas, _fbs)) goto loc_001EA814; /* jge: greater or equal (signed >=) */

loc_001EA7F3: ;
    ecx = MEM32(edi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + esi * 4);
    eax = MEM32(ecx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x001EA805u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA805: ;
    edx = MEM32(esp + 0x10);
    edx = edx + eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001EA7F3; /* jl: less (signed <) */

loc_001EA814: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001EA820
 * Original: 0x001EA820 - 0x001EA863 (67 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA820(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EA820: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001EA82Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA82B: ;
    ecx = MEM32(0x5BC554);
    ebx = MEM32(eax + 0x28);
    edx = MEM32(ecx + 0x28);
    ebp = MEM32(ebx + 0xC);
    esi = MEM32(edx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EA85C; /* jge: greater or equal (signed >=) */

loc_001EA841: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax + esi * 4);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x29);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001EA857u); RECOMP_ABI_CALL(0x001E9F90u, sub_001E9F90); /* call 0x001E9F90 */

loc_001EA857: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EA841; /* jl: less (signed <) */

loc_001EA85C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EA870
 * Original: 0x001EA870 - 0x001EA8DA (106 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA870(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EA870: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001EA87Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA87B: ;
    edx = MEM32(edi);
    ecx = edi;
    esi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x001EA884u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA884: ;
    ebx = MEM32(esp + 0x14);
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x001EA88Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA88F: ;
    ecx = MEM32(0x5BC554);
    ebp = MEM32(esi + 0x28);
    edx = MEM32(ecx + 0x28);
    eax = MEM32(ebp + 0xC);
    esi = MEM32(edx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001EA8CB; /* jge: greater or equal (signed >=) */

loc_001EA8A9: ;
    /* nop */

loc_001EA8B0: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + esi * 4);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001EA8C2u); RECOMP_ABI_CALL(0x001E9F90u, sub_001E9F90); /* call 0x001E9F90 */

loc_001EA8C2: ;
    eax = MEM32(esp + 0x14);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EA8B0; /* jl: less (signed <) */

loc_001EA8CB: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001EA8D3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA8D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EA8E0
 * Original: 0x001EA8E0 - 0x001EA92F (79 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EA8E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EA8E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001EA8EBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA8EB: ;
    ecx = MEM32(0x5BC554);
    ebx = MEM32(eax + 0x28);
    edx = MEM32(ecx + 0x28);
    ebp = MEM32(ebx + 0xC);
    esi = MEM32(edx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EA91C; /* jge: greater or equal (signed >=) */

loc_001EA901: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax + esi * 4);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x27);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001EA917u); RECOMP_ABI_CALL(0x001E9F90u, sub_001E9F90); /* call 0x001E9F90 */

loc_001EA917: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EA901; /* jl: less (signed <) */

loc_001EA91C: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001EA928u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA928: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EA930
 * Original: 0x001EA930 - 0x001EA9B7 (135 bytes, 61 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EA930(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EA930: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001EA941u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA941: ;
    edx = MEM32(esi);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001EA94Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA94A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EA956; /* je: equal / zero */

loc_001EA94E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001EA956: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001EA95Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA95E: ;
    ecx = MEM32(0x5BC554);
    ebx = MEM32(eax + 0x28);
    edx = MEM32(ecx + 0x28);
    eax = MEM32(ebx + 0xC);
    edi = MEM32(edx + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001EA99F; /* jge: greater or equal (signed >=) */

loc_001EA978: ;
    goto loc_001EA980;

    /* nop */

loc_001EA980: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax + edi * 4);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x2B);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EA992u); RECOMP_ABI_CALL(0x001EA140u, sub_001EA140); /* call 0x001EA140 */

loc_001EA992: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EA9AE; /* je: equal / zero */

loc_001EA996: ;
    eax = MEM32(esp + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EA980; /* jl: less (signed <) */

loc_001EA99F: ;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001EA9A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA9A7: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001EA9AE: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EA9C0
 * Original: 0x001EA9C0 - 0x001EAA47 (135 bytes, 61 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EA9C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EA9C0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001EA9D1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA9D1: ;
    edx = MEM32(esi);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001EA9DAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA9DA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EA9E6; /* je: equal / zero */

loc_001EA9DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001EA9E6: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001EA9EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EA9EE: ;
    ecx = MEM32(0x5BC554);
    ebx = MEM32(eax + 0x28);
    edx = MEM32(ecx + 0x28);
    eax = MEM32(ebx + 0xC);
    edi = MEM32(edx + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001EAA2F; /* jge: greater or equal (signed >=) */

loc_001EAA08: ;
    goto loc_001EAA10;

    /* nop */

loc_001EAA10: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax + edi * 4);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001EAA22u); RECOMP_ABI_CALL(0x001EA140u, sub_001EA140); /* call 0x001EA140 */

loc_001EAA22: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EAA3E; /* je: equal / zero */

loc_001EAA26: ;
    eax = MEM32(esp + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EAA10; /* jl: less (signed <) */

loc_001EAA2F: ;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001EAA37u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EAA37: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001EAA3E: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EAA50
 * Original: 0x001EAA50 - 0x001EAAD1 (129 bytes, 58 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001EAA50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAA50: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001EAA61u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EAA61: ;
    edx = MEM32(edi);
    ecx = edi;
    esi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001EAA6Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EAA6A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EAA76; /* je: equal / zero */

loc_001EAA6E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001EAA76: ;
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001EAA7Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EAA7E: ;
    ecx = MEM32(0x5BC554);
    ebx = MEM32(eax + 0x28);
    edx = MEM32(ecx + 0x28);
    eax = MEM32(ebx + 0xC);
    esi = MEM32(edx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_001EAABF; /* jge: greater or equal (signed >=) */

loc_001EAA98: ;
    goto loc_001EAAA0;

    /* nop */

loc_001EAAA0: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax + esi * 4);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x2A);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001EAAB2u); RECOMP_ABI_CALL(0x001EA140u, sub_001EA140); /* call 0x001EA140 */

loc_001EAAB2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EAAC8; /* je: equal / zero */

loc_001EAAB6: ;
    eax = MEM32(esp + 0x14);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EAAA0; /* jl: less (signed <) */

loc_001EAABF: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_001EAAC8: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EAAE0
 * Original: 0x001EAAE0 - 0x001EAB67 (135 bytes, 58 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAAE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EAAE0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    esi = ecx;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esp + 0x1C); PUSH32(esp, 0x001EAAF1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EAAF1: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EAB61; /* je: equal / zero */

loc_001EAAF9: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x001EAB01u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EAB01: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001EAB08u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EAB08: ;
    edx = MEM32(0x5BC554);
    eax = MEM32(eax + 0x28);
    edx = MEM32(edx + 0x28);
    ecx = MEM32(eax + 0xC);
    ebx = MEM32(edx + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0xC) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_001EAB60; /* jge: greater or equal (signed >=) */

loc_001EAB26: ;
    PUSH32(esp, edi);
    goto loc_001EAB30;

loc_001EAB29: ;
    eax = MEM32(esp + 0x1C);
    /* nop */

loc_001EAB30: ;
    eax = MEM32(eax + 8);
    edi = MEM32(eax + ebx * 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esp + 0x24); PUSH32(esp, 0x001EAB3Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EAB3D: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EAB56; /* je: equal / zero */

loc_001EAB45: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x001EAB56u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EAB56: ;
    eax = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EAB29; /* jl: less (signed <) */

loc_001EAB5F: ;
    POP32(esp, edi);

loc_001EAB60: ;
    POP32(esp, ebx);

loc_001EAB61: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EAB70
 * Original: 0x001EAB70 - 0x001EABA6 (54 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAB70: ;
    eax = MEM32(esp + 8);
    eax = eax - 0;
    if ((eax == 0)) goto loc_001EAB99; /* je: equal / zero */

loc_001EAB79: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001EAB8C; /* je: equal / zero */

loc_001EAB7C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001EABA3; /* jne: not equal / not zero */

loc_001EAB7F: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EAB89u); RECOMP_ABI_CALL(0x001EA820u, sub_001EA820); /* call 0x001EA820 */

loc_001EAB89: ;
    esp += 12; return; /* ret 8 */

loc_001EAB8C: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001EAB96u); RECOMP_ABI_CALL(0x001EA870u, sub_001EA870); /* call 0x001EA870 */

loc_001EAB96: ;
    esp += 12; return; /* ret 8 */

loc_001EAB99: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EABA3u); RECOMP_ABI_CALL(0x001EA8E0u, sub_001EA8E0); /* call 0x001EA8E0 */

loc_001EABA3: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EABB0
 * Original: 0x001EABB0 - 0x001EABD5 (37 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EABB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EABB0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001EABB5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EABB5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EABCB; /* je: equal / zero */

loc_001EABB9: ;
    ecx = MEM32(esp + 4);
    /* nop */

loc_001EABC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EABD0; /* je: equal / zero */

loc_001EABC4: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EABC0; /* jne: not equal / not zero */

loc_001EABCB: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

loc_001EABD0: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EABE0
 * Original: 0x001EABE0 - 0x001EABFC (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EABE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EABE0: ;
    eax = ZX8(MEM8(ecx + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_001EABF4; /* jne: not equal / not zero */

loc_001EABEE: ;
    ecx = MEM32(0x5BC538);

loc_001EABF4: ;
    edx = MEM32(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(edx + eax * 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001EAC00
 * Original: 0x001EAC00 - 0x001EAC0B (11 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAC00(void)
{

loc_001EAC00: ;
    ecx = MEM32(ecx + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x001EAC08u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EAC08: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EAC10
 * Original: 0x001EAC10 - 0x001EAC1A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAC10(void)
{

loc_001EAC10: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x2C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EAC20
 * Original: 0x001EAC20 - 0x001EAC24 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAC20(void)
{

loc_001EAC20: ;
    eax = MEM32(ecx + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_001EAC30
 * Original: 0x001EAC30 - 0x001EACC5 (149 bytes, 67 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAC30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EAC30: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001EACBF; /* je: equal / zero */

loc_001EAC3D: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001EACBF; /* je: equal / zero */

loc_001EAC45: ;
    edx = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = edx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001EACAB; /* jle: less or equal (signed <=) */

loc_001EAC56: ;
    eax = MEM32(eax + 8);
    ebp = MEM32(ecx + 0x10);
    MEM32(esp + 0x18) = eax;

loc_001EAC60: ;
    edi = MEM32(ebp);
    ecx = MEM32(esp + 0x18);
    ecx = MEM32(ecx + edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001EACA3; /* je: equal / zero */

loc_001EAC6E: ;
    esi = MEM32(esp + 0x1C);

loc_001EAC72: ;
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001EAC96; /* jne: not equal / not zero */

loc_001EAC7A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001EAC92; /* je: equal / zero */

loc_001EAC7E: ;
    SET_LO8(eax, MEM8(ecx + 1));
    SET_LO8(edx, LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001EAC96; /* jne: not equal / not zero */

loc_001EAC88: ;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001EAC72; /* jne: not equal / not zero */

loc_001EAC92: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    goto loc_001EAC9B;

loc_001EAC96: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */

loc_001EAC9B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001EACB5; /* je: equal / zero */

loc_001EAC9F: ;
    edx = MEM32(esp + 0x10);

loc_001EACA3: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(4)) >> 32) & 1);
    ebp = ebp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001EAC60; /* jl: less (signed <) */

loc_001EACAB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001EACB5: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001EACBF: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EACD0
 * Original: 0x001EACD0 - 0x001EAD12 (66 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EACD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EACD0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EACE4; /* jne: not equal / not zero */

loc_001EACDD: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001EACE4: ;
    PUSH32(esp, ebx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, ebp);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001EAD09; /* jle: less or equal (signed <=) */

loc_001EACEC: ;
    ecx = MEM32(ecx + 0x10);
    ebx = MEM32(esp + 0x18);

loc_001EACF3: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EAD01; /* je: equal / zero */

loc_001EACF9: ;
    ebp = MEM32(edi + 8);
    _fa = (uint32_t)(MEM32(eax + ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ebp), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EAD0B; /* je: equal / zero */

loc_001EAD01: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EACF3; /* jl: less (signed <) */

loc_001EAD09: ;
    eax = 0; /* xor self */

loc_001EAD0B: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EAD20
 * Original: 0x001EAD20 - 0x001EAD98 (120 bytes, 53 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAD20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EAD20: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001EAD33; /* jne: not equal / not zero */

loc_001EAD2C: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001EAD33: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EAD43; /* jge: greater or equal (signed >=) */

loc_001EAD3C: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001EAD43: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001EAD7D; /* jle: less or equal (signed <=) */

loc_001EAD51: ;
    ebp = MEM32(ecx + 0x10);
    ecx = MEM32(eax + 8);

loc_001EAD57: ;
    eax = esi + edi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    edx = MEM32(ebp + eax * 4);
    edx = MEM32(ecx + edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001EAD6C; /* jae: above or equal (unsigned >=) */

loc_001EAD67: ;
    edi = eax + 1;
    goto loc_001EAD71;

loc_001EAD6C: ;
    if (CMP_BE(_fa, _fb)) goto loc_001EAD90; /* jbe: below or equal (unsigned <=) */

loc_001EAD6E: ;
    esi = eax + -1;

loc_001EAD71: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EAD57; /* jl: less (signed <) */

loc_001EAD75: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x18);

loc_001EAD7D: ;
    ecx = MEM32(ecx + 0x10);
    eax = MEM32(eax + 8);
    edx = MEM32(ecx + edi * 4);
    _fa = (uint32_t)(MEM32(edx + eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax), ebx (32-bit) */
    eax = edi + 1;
    if (CMP_B(_fa, _fb)) goto loc_001EAD90; /* jb: below (unsigned <) */

loc_001EAD8E: ;
    eax = edi;

loc_001EAD90: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EADA0
 * Original: 0x001EADA0 - 0x001EADA7 (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EADA0(void)
{

loc_001EADA0: ;
    eax = MEM32(ecx + 0x44);
    eax = eax << 2;
    esp += 4; return; /* ret */

}

/**
 * sub_001EADB0
 * Original: 0x001EADB0 - 0x001EAE03 (83 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EADB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EADB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x44);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001EADF1; /* jle: less or equal (signed <=) */

loc_001EADBF: ;
    ebx = MEM32(esp + 0x18);
    ebp = MEM32(esp + 0x14);

loc_001EADC7: ;
    eax = MEM32(edi + 8);
    eax = eax + esi * 4;
    ecx = MEM32(eax + ebp);
    eax = MEM32(eax + ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EADE9; /* je: equal / zero */

loc_001EADD7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EADFA; /* je: equal / zero */

loc_001EADDB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EADFA; /* je: equal / zero */

loc_001EADDF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EADE5u); RECOMP_ABI_CALL(0x001EAA50u, sub_001EAA50); /* call 0x001EAA50 */

loc_001EADE5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EADFA; /* je: equal / zero */

loc_001EADE9: ;
    eax = MEM32(edi + 0x44);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EADC7; /* jl: less (signed <) */

loc_001EADF1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001EADFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EAE10
 * Original: 0x001EAE10 - 0x001EAE63 (83 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAE10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EAE10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x44);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001EAE51; /* jle: less or equal (signed <=) */

loc_001EAE1F: ;
    ebx = MEM32(esp + 0x18);
    ebp = MEM32(esp + 0x14);

loc_001EAE27: ;
    eax = MEM32(edi + 8);
    eax = eax + esi * 4;
    ecx = MEM32(eax + ebp);
    eax = MEM32(eax + ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EAE49; /* je: equal / zero */

loc_001EAE37: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EAE5A; /* je: equal / zero */

loc_001EAE3B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EAE5A; /* je: equal / zero */

loc_001EAE3F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EAE45u); RECOMP_ABI_CALL(0x001EA930u, sub_001EA930); /* call 0x001EA930 */

loc_001EAE45: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EAE5A; /* je: equal / zero */

loc_001EAE49: ;
    eax = MEM32(edi + 0x44);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EAE27; /* jl: less (signed <) */

loc_001EAE51: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001EAE5A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EAE70
 * Original: 0x001EAE70 - 0x001EAEC3 (83 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAE70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EAE70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x44);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001EAEB1; /* jle: less or equal (signed <=) */

loc_001EAE7F: ;
    ebx = MEM32(esp + 0x18);
    ebp = MEM32(esp + 0x14);

loc_001EAE87: ;
    eax = MEM32(edi + 8);
    eax = eax + esi * 4;
    ecx = MEM32(eax + ebp);
    eax = MEM32(eax + ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EAEA9; /* je: equal / zero */

loc_001EAE97: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EAEBA; /* je: equal / zero */

loc_001EAE9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EAEBA; /* je: equal / zero */

loc_001EAE9F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EAEA5u); RECOMP_ABI_CALL(0x001EA9C0u, sub_001EA9C0); /* call 0x001EA9C0 */

loc_001EAEA5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EAEBA; /* je: equal / zero */

loc_001EAEA9: ;
    eax = MEM32(edi + 0x44);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EAE87; /* jl: less (signed <) */

loc_001EAEB1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001EAEBA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EAED0
 * Original: 0x001EAED0 - 0x001EAEDB (11 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAED0(void)
{

loc_001EAED0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x001EAEDAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EAEDA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001EAEE0
 * Original: 0x001EAEE0 - 0x001EAF23 (67 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAEE0: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(eax + esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(eax + edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EAEFE; /* jne: not equal / not zero */

loc_001EAEF7: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001EAEFE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EAF1C; /* je: equal / zero */

loc_001EAF02: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EAF1C; /* je: equal / zero */

loc_001EAF06: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(eax + edi);
    eax = MEM32(eax + esi);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x001EAF17u); RECOMP_ABI_CALL(0x001EAA50u, sub_001EAA50); /* call 0x001EAA50 */

loc_001EAF17: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001EAF1C: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EAF30
 * Original: 0x001EAF30 - 0x001EAF73 (67 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAF30: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(eax + esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(eax + edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EAF4E; /* jne: not equal / not zero */

loc_001EAF47: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001EAF4E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EAF6C; /* je: equal / zero */

loc_001EAF52: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EAF6C; /* je: equal / zero */

loc_001EAF56: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(eax + edi);
    eax = MEM32(eax + esi);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x001EAF67u); RECOMP_ABI_CALL(0x001EA930u, sub_001EA930); /* call 0x001EA930 */

loc_001EAF67: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001EAF6C: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EAF80
 * Original: 0x001EAF80 - 0x001EAFC3 (67 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAF80: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(eax + esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(eax + edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EAF9E; /* jne: not equal / not zero */

loc_001EAF97: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001EAF9E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EAFBC; /* je: equal / zero */

loc_001EAFA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EAFBC; /* je: equal / zero */

loc_001EAFA6: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(eax + edi);
    eax = MEM32(eax + esi);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x001EAFB7u); RECOMP_ABI_CALL(0x001EA9C0u, sub_001EA9C0); /* call 0x001EA9C0 */

loc_001EAFB7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001EAFBC: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EAFD0
 * Original: 0x001EAFD0 - 0x001EB0B4 (228 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EAFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EAFD0: ;
    eax = 0x1000;
    PUSH32(esp, 0x001EAFDAu); RECOMP_ABI_CALL(0x00341D40u, sub_00341D40); /* call 0x00341D40 */

loc_001EAFDA: ;
    eax = MEM32(0x5BC558);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EAFEC; /* je: equal / zero */

loc_001EAFE3: ;
    SET_LO8(eax, MEM8(0x46A3A4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EAFF9; /* jne: not equal / not zero */

loc_001EAFEC: ;
    SET_LO8(eax, MEM8(0x46A3A6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EB08C; /* je: equal / zero */

loc_001EAFF9: ;
    eax = MEM32(esp + 0x1008);
    ecx = MEM32(esp + 0x1004);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, 0x1000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001EB019u); RECOMP_ABI_CALL(0x0034278Eu, sub_0034278E); /* call 0x0034278E */

loc_001EB019: ;
    esi = eax;
    esp = esp + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001EB02A; /* jl: less (signed <) */

loc_001EB022: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1000 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EB037; /* jl: less (signed <) */

loc_001EB02A: ;
    esi = 0x1000;
    MEM8(esp + 0x1003) = 0;

loc_001EB037: ;
    SET_LO8(eax, MEM8(0x46A3A6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EB04A; /* je: equal / zero */

loc_001EB040: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EB04Au); RECOMP_ABI_CALL(0x0034D390u, sub_0034D390); /* call 0x0034D390 */

loc_001EB04A: ;
    ecx = MEM32(0x5BC558);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EB06A; /* je: equal / zero */

loc_001EB054: ;
    SET_LO8(eax, MEM8(0x46A3A4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EB06A; /* je: equal / zero */

loc_001EB05D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x001EB06Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EB06A: ;
    SET_LO8(eax, MEM8(0x46A3A5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_001EB0AD; /* je: equal / zero */

loc_001EB074: ;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3D2C44);
    PUSH32(esp, 0x001EB082u); RECOMP_ABI_CALL(0x00342EF1u, sub_00342EF1); /* call 0x00342EF1 */

loc_001EB082: ;
    esp = esp + 8;
    esp = esp + 0x1000;
    esp += 4; return; /* ret */

loc_001EB08C: ;
    SET_LO8(eax, MEM8(0x46A3A5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EB0AD; /* je: equal / zero */

loc_001EB095: ;
    edx = MEM32(esp + 0x1008);
    eax = MEM32(esp + 0x1004);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EB0AAu); RECOMP_ABI_CALL(0x0034422Au, sub_0034422A); /* call 0x0034422A */

loc_001EB0AA: ;
    esp = esp + 8;

loc_001EB0AD: ;
    esp = esp + 0x1000;
    esp += 4; return; /* ret */

}

/**
 * sub_001EB0C0
 * Original: 0x001EB0C0 - 0x001EB1AE (238 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EB0C0: ;
    eax = 0x1000;
    PUSH32(esp, 0x001EB0CAu); RECOMP_ABI_CALL(0x00341D40u, sub_00341D40); /* call 0x00341D40 */

loc_001EB0CA: ;
    eax = MEM32(0x5BC55C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EB0DC; /* je: equal / zero */

loc_001EB0D3: ;
    SET_LO8(eax, MEM8(0x46A3A7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EB0E9; /* jne: not equal / not zero */

loc_001EB0DC: ;
    SET_LO8(eax, MEM8(0x46A3A9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EB181; /* je: equal / zero */

loc_001EB0E9: ;
    eax = MEM32(esp + 0x1008);
    ecx = MEM32(esp + 0x1004);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, 0x1000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001EB109u); RECOMP_ABI_CALL(0x0034278Eu, sub_0034278E); /* call 0x0034278E */

loc_001EB109: ;
    esi = eax;
    esp = esp + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001EB11A; /* jl: less (signed <) */

loc_001EB112: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1000 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EB127; /* jl: less (signed <) */

loc_001EB11A: ;
    esi = 0x1000;
    MEM8(esp + 0x1003) = 0;

loc_001EB127: ;
    SET_LO8(eax, MEM8(0x46A3A9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EB13A; /* je: equal / zero */

loc_001EB130: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EB13Au); RECOMP_ABI_CALL(0x0034D390u, sub_0034D390); /* call 0x0034D390 */

loc_001EB13A: ;
    ecx = MEM32(0x5BC55C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EB15A; /* je: equal / zero */

loc_001EB144: ;
    SET_LO8(eax, MEM8(0x46A3A7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EB15A; /* je: equal / zero */

loc_001EB14D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x001EB15Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EB15A: ;
    SET_LO8(eax, MEM8(0x46A3A8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_001EB1A7; /* je: equal / zero */

loc_001EB164: ;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3D2C44);
    PUSH32(esp, 0x47A180);
    PUSH32(esp, 0x001EB177u); RECOMP_ABI_CALL(0x00344289u, sub_00344289); /* call 0x00344289 */

loc_001EB177: ;
    esp = esp + 0xC;
    esp = esp + 0x1000;
    esp += 4; return; /* ret */

loc_001EB181: ;
    SET_LO8(eax, MEM8(0x46A3A8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EB1A7; /* je: equal / zero */

loc_001EB18A: ;
    edx = MEM32(esp + 0x1008);
    eax = MEM32(esp + 0x1004);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x47A180);
    PUSH32(esp, 0x001EB1A4u); RECOMP_ABI_CALL(0x00343805u, sub_00343805); /* call 0x00343805 */

loc_001EB1A4: ;
    esp = esp + 0xC;

loc_001EB1A7: ;
    esp = esp + 0x1000;
    esp += 4; return; /* ret */

}

/**
 * sub_001EB1B0
 * Original: 0x001EB1B0 - 0x001EB1CB (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EB1B0: ;
    ecx = MEM32(0x5BC558);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EB1BF; /* je: equal / zero */

loc_001EB1BA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x001EB1BFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EB1BF: ;
    PUSH32(esp, 0x47A160);
    PUSH32(esp, 0x001EB1C9u); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_001EB1C9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001EB1D0
 * Original: 0x001EB1D0 - 0x001EB1EB (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EB1D0: ;
    ecx = MEM32(0x5BC55C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EB1DF; /* je: equal / zero */

loc_001EB1DA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x001EB1DFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EB1DF: ;
    PUSH32(esp, 0x47A180);
    PUSH32(esp, 0x001EB1E9u); RECOMP_ABI_CALL(0x00344447u, sub_00344447); /* call 0x00344447 */

loc_001EB1E9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001EB1F0
 * Original: 0x001EB1F0 - 0x001EB1F7 (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB1F0(void)
{

loc_001EB1F0: ;
    eax = MEM32(ecx + 0x38);
    eax = eax << 2;
    esp += 4; return; /* ret */

}

/**
 * sub_001EB200
 * Original: 0x001EB200 - 0x001EB226 (38 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB200(void)
{

loc_001EB200: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    edi = edi + eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001EB20Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EB20F: ;
    ecx = ZX16(LO16(eax));
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EB230
 * Original: 0x001EB230 - 0x001EB244 (20 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB230(void)
{

loc_001EB230: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = MEM32(ecx + eax);
    eax = eax - MEM32(ecx + edx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EB250
 * Original: 0x001EB250 - 0x001EB254 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB250(void)
{

loc_001EB250: ;
    SET_LO8(eax, MEM8(ecx + 0x34));
    esp += 4; return; /* ret */

}

/**
 * sub_001EB260
 * Original: 0x001EB260 - 0x001EB383 (291 bytes, 112 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB260(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EB260: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x001EB270u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EB270: ;
    SET_LO8(ecx, 0); /* xor self */
    edi = 0; /* xor self */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM8(esp + 0x18) = 0;
    MEM8(esp + 0x13) = LO8(ecx);
    SET_LO8(ebx, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_001EB371; /* je: equal / zero */

loc_001EB28A: ;
    /* nop */

loc_001EB290: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EB328; /* je: equal / zero */

loc_001EB298: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EB2B7; /* je: equal / zero */

loc_001EB29C: ;
    /* nop */

loc_001EB2A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB2AA; /* je: equal / zero */

loc_001EB2A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EB2B5; /* jne: not equal / not zero */

loc_001EB2AA: ;
    edx = MEM32(esi);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x001EB2B3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EB2B3: ;
    goto loc_001EB2A0;

loc_001EB2B5: ;
    SET_LO8(ebx, 0); /* xor self */

loc_001EB2B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EB2C5; /* jne: not equal / not zero */

loc_001EB2BC: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x001EB2C3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EB2C3: ;
    goto loc_001EB31F;

loc_001EB2C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB300; /* je: equal / zero */

loc_001EB2CA: ;
    SET_LO8(ecx, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EB316; /* jne: not equal / not zero */

loc_001EB2D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EB2DE; /* jne: not equal / not zero */

loc_001EB2D7: ;
    MEM8(esp + 0x18) = 1;
    goto loc_001EB316;

loc_001EB2DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x2F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EB2EE; /* jne: not equal / not zero */

loc_001EB2E3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EB2EE; /* jne: not equal / not zero */

loc_001EB2E7: ;
    MEM8(esp + 0x18) = 1;
    goto loc_001EB315;

loc_001EB2EE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EB2FD; /* jge: greater or equal (signed >=) */

loc_001EB2F6: ;
    ecx = MEM32(esp + 0x1C);
    MEM8(ecx + ebp) = LO8(eax);

loc_001EB2FD: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001EB316;

loc_001EB300: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x5C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EB328; /* jne: not equal / not zero */

loc_001EB305: ;
    ecx = MEM32(esp + 0x20);
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ecx, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    SET_LO8(ebx, 1);
    if (TEST_NZ(_fa, _fb)) goto loc_001EB316; /* jne: not equal / not zero */

loc_001EB315: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001EB316: ;
    edx = MEM32(esi);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x001EB31Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EB31F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EB290; /* jne: not equal / not zero */

loc_001EB328: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_001EB331; /* jg: greater (signed >) */

loc_001EB32C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB33C; /* je: equal / zero */

loc_001EB331: ;
    eax = MEM32(esp + 0x20);
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0x13) = 1;

loc_001EB33C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x1000 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EB35D; /* jl: less (signed <) */

loc_001EB344: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0xFFF;
    POP32(esp, ebp);
    MEM8(eax + ecx) = 0;
    SET_LO8(eax, MEM8(esp + 7));
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_001EB35D: ;
    edx = MEM32(esp + 0x1C);
    SET_LO8(eax, MEM8(esp + 0x13));
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(edx + ebp) = 0;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_001EB371: ;
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax + ebp) = 0;
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EB390
 * Original: 0x001EB390 - 0x001EB3FD (109 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EB390: ;
    eax = 0x1000;
    PUSH32(esp, 0x001EB39Au); RECOMP_ABI_CALL(0x00341D40u, sub_00341D40); /* call 0x00341D40 */

loc_001EB39A: ;
    eax = MEM32(0x46A3BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EB3AC; /* jne: not equal / not zero */

loc_001EB3A3: ;
    eax = 0; /* xor self */
    esp = esp + 0x1000;
    esp += 4; return; /* ret */

loc_001EB3AC: ;
    eax = MEM32(esp + 0x100C);
    ecx = MEM32(esp + 0x1008);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, 0x1000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001EB3CBu); RECOMP_ABI_CALL(0x0034278Eu, sub_0034278E); /* call 0x0034278E */

loc_001EB3CB: ;
    esp = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001EB3D9; /* jl: less (signed <) */

loc_001EB3D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1000 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EB3E1; /* jl: less (signed <) */

loc_001EB3D9: ;
    MEM8(esp + 0xFFF) = 0;

loc_001EB3E1: ;
    ecx = MEM32(esp + 0x1004);
    eax = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(0x46A3BC); PUSH32(esp, 0x001EB3F3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EB3F3: ;
    esp = esp + 8;
    esp = esp + 0x1000;
    esp += 4; return; /* ret */

}

/**
 * sub_001EB400
 * Original: 0x001EB400 - 0x001EB4CB (203 bytes, 83 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EB400: ;
    esp = esp - 0x804;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x810);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebx = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_001EB422; /* jne: not equal / not zero */

loc_001EB415: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x804;
    esp += 8; return; /* ret 4 */

loc_001EB422: ;
    edx = MEM32(ebx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_001EB46B; /* je: equal / zero */

loc_001EB42A: ;
    eax = edx;
    edi = eax + 1;
    /* nop */

loc_001EB430: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EB430; /* jne: not equal / not zero */

loc_001EB437: ;
    eax = eax - edi;
    MEM32(esp + 0xC) = eax;
    if ((eax == 0)) goto loc_001EB46B; /* je: equal / zero */

loc_001EB43F: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x3DD2BC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001EB453u); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_001EB453: ;
    edx = MEM32(esi);
    esp = esp + 0x10;
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x001EB462u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EB462: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (CMP_G(_fas & _fbs, 0)) ? 1 : 0); /* setg */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EB4BD; /* jne: not equal / not zero */

loc_001EB46B: ;
    edx = MEM32(ebx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EB4B2; /* je: equal / zero */

loc_001EB472: ;
    eax = edx;
    edi = eax + 1;

loc_001EB477: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EB477; /* jne: not equal / not zero */

loc_001EB47E: ;
    eax = eax - edi;
    MEM32(esp + 0xC) = eax;
    if ((eax == 0)) goto loc_001EB4B2; /* je: equal / zero */

loc_001EB486: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = esp + 0x18;
    PUSH32(esp, 0x3DD2BC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001EB49Au); RECOMP_ABI_CALL(0x00341792u, sub_00341792); /* call 0x00341792 */

loc_001EB49A: ;
    eax = MEM32(esi);
    esp = esp + 0x10;
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x001EB4A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EB4A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    SET_LO8(eax, (CMP_G(_fas & _fbs, 0)) ? 1 : 0); /* setg */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EB4BD; /* jne: not equal / not zero */

loc_001EB4B2: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x001EB4BDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EB4BD: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x804;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EB4D0
 * Original: 0x001EB4D0 - 0x001EB59B (203 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB4D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EB4D0: ;
    eax = MEM32(0x5BC5E8);
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(0x5BC5EC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((eax != 0)) goto loc_001EB4FE; /* jne: not equal / not zero */

loc_001EB4E1: ;
    ecx = MEM32(0x5BC568);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x001EB4ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EB4EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x5BC5E8) = eax;
    MEM32(0x5BC5EC) = edx;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001EB4FE: ;
    ecx = MEM32(0x5BC5E4);
    eax = MEM32(0x5BC5E0);
    _cf = 0; /* logical op clears CF */
    eax = eax | ecx;
    ecx = MEM32(0x5BC568);
    if ((eax != 0)) goto loc_001EB52A; /* jne: not equal / not zero */

loc_001EB513: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x001EB518u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EB518: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x5BC5E0) = eax;
    MEM32(0x5BC5E4) = edx;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001EB52A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x001EB52Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EB52F: ;
    ebp = MEM32(0x5BC5E0);
    ebx = edx;
    edx = MEM32(0x5BC5E8);
    ecx = ebp;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    edx = MEM32(0x5BC5E4);
    PUSH32(esp, 0);
    edi = eax;
    eax = MEM32(0x5BC5EC);
    PUSH32(esp, 2);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(eax) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001EB55Bu); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_001EB55B: ;
    esi = edi;
    _cf = (int)((uint32_t)(esi) < (uint32_t)(ebp));
    esi = esi - ebp;
    ecx = ebx;
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(MEM32(0x5BC5E4)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001EB578; /* ja: above (unsigned >) */

loc_001EB56B: ;
    if (CMP_B(_fa, _fb)) goto loc_001EB571; /* jb: below (unsigned <) */

loc_001EB56D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001EB578; /* jae: above or equal (unsigned >=) */

loc_001EB571: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001EB578: ;
    eax = MEM32(0x5BC5E4);
    MEM32(0x5BC5E0) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x5BC5E8) = ebp;
    POP32(esp, ebp);
    MEM32(0x5BC5EC) = eax;
    MEM32(0x5BC5E4) = ebx;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001EB5A0
 * Original: 0x001EB5A0 - 0x001EB5CB (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB5A0(void)
{

loc_001EB5A0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3EEB3C);
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001EB5C1u); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_001EB5C1: ;
    eax = MEM32(esp + 0x10);
    esp = esp + 0x14;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EB5D0
 * Original: 0x001EB5D0 - 0x001EB5D7 (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB5D0(void)
{

loc_001EB5D0: ;
    eax = MEM32(ecx + 0x3C);
    eax = eax << 2;
    esp += 4; return; /* ret */

}

/**
 * sub_001EB5E0
 * Original: 0x001EB5E0 - 0x001EB619 (57 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EB5E0: ;
    SET_LO8(eax, MEM8(ecx + 0x26));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EB5EC; /* jne: not equal / not zero */

loc_001EB5E7: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

loc_001EB5EC: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 4);
    ecx = MEM32(ecx + eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = 4;
    if (TEST_Z(_fa, _fb)) goto loc_001EB616; /* je: equal / zero */

loc_001EB5FF: ;
    eax = ecx;
    edx = eax + 1;

loc_001EB604: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EB604; /* jne: not equal / not zero */

loc_001EB60B: ;
    eax = eax - edx;
    eax = eax + 4;
    eax = eax & 0xFFFFFFFCu;
    eax = eax + 4;

loc_001EB616: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EB620
 * Original: 0x001EB620 - 0x001EB685 (101 bytes, 44 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001EB620: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    edx = MEM32(esp + 8);
    ecx = MEM32(ecx + edx);
    if (TEST_NZ(_fa, _fb)) goto loc_001EB63E; /* jne: not equal / not zero */

loc_001EB635: ;
    eax = ecx;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    esp += 12; return; /* ret 8 */

loc_001EB63E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001EB64A; /* jne: not equal / not zero */

loc_001EB642: ;
    eax = 1;
    esp += 12; return; /* ret 8 */

loc_001EB64A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    edi = edi;

loc_001EB650: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001EB67B; /* jne: not equal / not zero */

loc_001EB65A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001EB674; /* je: equal / zero */

loc_001EB65E: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001EB67B; /* jne: not equal / not zero */

loc_001EB66A: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001EB650; /* jne: not equal / not zero */

loc_001EB674: ;
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001EB67B: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    POP32(esp, esi);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EB690
 * Original: 0x001EB690 - 0x001EB702 (114 bytes, 52 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001EB690: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = MEM32(ecx + eax);
    PUSH32(esp, esi);
    esi = MEM32(ecx + edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001EB6AC; /* jne: not equal / not zero */

loc_001EB6A6: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001EB6AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001EB6FC; /* je: equal / zero */

loc_001EB6B0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001EB6FC; /* je: equal / zero */

loc_001EB6B4: ;
    PUSH32(esp, ebx);

loc_001EB6B5: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001EB6E9; /* jne: not equal / not zero */

loc_001EB6BF: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001EB6D9; /* je: equal / zero */

loc_001EB6C3: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001EB6E9; /* jne: not equal / not zero */

loc_001EB6CF: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001EB6B5; /* jne: not equal / not zero */

loc_001EB6D9: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001EB6E9: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001EB6FC: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EB710
 * Original: 0x001EB710 - 0x001EB71F (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EB710: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EB71E; /* je: equal / zero */

loc_001EB717: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001EB71Du); RECOMP_ABI_CALL(0x003444C3u, sub_003444C3); /* call 0x003444C3 */

loc_001EB71D: ;
    POP32(esp, ecx);

loc_001EB71E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001EB720
 * Original: 0x001EB720 - 0x001EB778 (88 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EB720: ;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x46A3C8);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edx = esi;
    if (TEST_Z(_fa, _fb)) goto loc_001EB734; /* je: equal / zero */

loc_001EB732: ;
    edx = ecx;

loc_001EB734: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0x74) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0x74 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB76B; /* je: equal / zero */

loc_001EB739: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edx = esi;
    if (TEST_Z(_fa, _fb)) goto loc_001EB741; /* je: equal / zero */

loc_001EB73F: ;
    edx = ecx;

loc_001EB741: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0x54) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0x54 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB76B; /* je: equal / zero */

loc_001EB746: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    edx = esi;
    if (TEST_Z(_fa, _fb)) goto loc_001EB74E; /* je: equal / zero */

loc_001EB74C: ;
    edx = ecx;

loc_001EB74E: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0x66) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0x66 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB75E; /* je: equal / zero */

loc_001EB753: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EB759; /* jne: not equal / not zero */

loc_001EB757: ;
    ecx = esi;

loc_001EB759: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0x46) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0x46 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EB774; /* jne: not equal / not zero */

loc_001EB75E: ;
    eax = MEM32(esp + 8);
    POP32(esp, esi);
    MEM8(eax) = 0;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_001EB76B: ;
    ecx = MEM32(esp + 8);
    MEM8(ecx) = 1;
    SET_LO8(eax, 1);

loc_001EB774: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EB780
 * Original: 0x001EB780 - 0x001EB7EA (106 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001EB780: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_001EB793; /* jne: not equal / not zero */

loc_001EB78D: ;
    ecx = MEM32(0x46A3C8);

loc_001EB793: ;
    edi = MEM32(esp + 0x10);
    eax = edi;
    ebx = eax + 1;
    /* nop */

loc_001EB7A0: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001EB7A0; /* jne: not equal / not zero */

loc_001EB7A7: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x2E (8-bit) */
    _cf = (int)(_fa < _fb);
    edx = 1;
    if (CMP_NE(_fa, _fb)) goto loc_001EB7B5; /* jne: not equal / not zero */

loc_001EB7B3: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */

loc_001EB7B5: ;
    ebx = edx + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001EB7C8; /* jb: below (unsigned <) */

loc_001EB7BC: ;
    ebx = ecx;
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(edx));
    ebx = ebx - edx;
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(eax));
    ebx = ebx - eax;
    _fa = (uint32_t)(MEM8(ebx + esi)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + esi), 0x2E (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001EB7D0; /* je: equal / zero */

loc_001EB7C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001EB7D0: ;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001EB7DBu); RECOMP_ABI_CALL(0x00343612u, sub_00343612); /* call 0x00343612 */

loc_001EB7DB: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, edi);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    POP32(esp, esi);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EB7F0
 * Original: 0x001EB7F0 - 0x001EB7F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB7F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EB7F0: ;
    g_seh_ebp = ebp; sub_00343612(); return; /* tail jmp 0x00343612 */

}

/**
 * sub_001EB800
 * Original: 0x001EB800 - 0x001EB88C (140 bytes, 65 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB800(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EB800: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    edi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001EB846; /* jle: less or equal (signed <=) */

loc_001EB810: ;
    eax = MEM32(ebp + 0x10);
    esi = edi + ebx;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    eax = MEM32(eax + esi * 4);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EB827; /* jne: not equal / not zero */

loc_001EB822: ;
    eax = MEM32(0x46A3C8);

loc_001EB827: ;
    ecx = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esp + 0x20); PUSH32(esp, 0x001EB831u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EB831: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_001EB83D; /* jge: greater or equal (signed >=) */

loc_001EB838: ;
    ebx = esi + 1;
    goto loc_001EB842;

loc_001EB83D: ;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001EB879; /* jle: less or equal (signed <=) */

loc_001EB83F: ;
    edi = esi + -1;

loc_001EB842: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EB810; /* jl: less (signed <) */

loc_001EB846: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EB882; /* je: equal / zero */

loc_001EB84D: ;
    edx = MEM32(ebp + 0x10);
    eax = MEM32(edx + ebx * 4);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EB85F; /* jne: not equal / not zero */

loc_001EB85A: ;
    eax = MEM32(0x46A3C8);

loc_001EB85F: ;
    ecx = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esp + 0x20); PUSH32(esp, 0x001EB869u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EB869: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EB882; /* jne: not equal / not zero */

loc_001EB870: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001EB879: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001EB882: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EB890
 * Original: 0x001EB890 - 0x001EB95B (203 bytes, 84 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB890(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EB890: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    edx = ecx;
    eax = MEM32(edx + 8);
    PUSH32(esp, ebp);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = eax;
    if (CMP_BE(_fa & _fb, 0)) goto loc_001EB929; /* jbe: below or equal (unsigned <=) */

loc_001EB8AE: ;
    esi = MEM32(edx + 4);
    MEM32(esp + 0x1C) = esi;
    goto loc_001EB8C0;

loc_001EB8B7: ;
    edx = MEM32(esp + 0x18);
    goto loc_001EB8C0;

    /* nop */

loc_001EB8C0: ;
    esi = MEM32(esp + 0x1C);
    edi = eax + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_001EB91F; /* jb: below (unsigned <) */

loc_001EB8CB: ;
    eax = MEM32(edx + 0x10);
    ebp = MEM32(eax + edi * 4 + -4);
    eax = MEM32(esp + 0x24);
    ebx = ebp + 8;
    esi = ebx;
    goto loc_001EB8E0;

    /* nop */

loc_001EB8E0: ;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001EB904; /* jne: not equal / not zero */

loc_001EB8E8: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001EB900; /* je: equal / zero */

loc_001EB8EC: ;
    SET_LO8(ecx, MEM8(eax + 1));
    SET_LO8(edx, LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001EB904; /* jne: not equal / not zero */

loc_001EB8F6: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001EB8E0; /* jne: not equal / not zero */

loc_001EB900: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_001EB909;

loc_001EB904: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_001EB909: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_001EB93B; /* je: equal / zero */

loc_001EB90D: ;
    eax = MEM32(esp + 0x10);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001EB91B; /* jle: less or equal (signed <=) */

loc_001EB913: ;
    ecx = edi;
    MEM32(esp + 0x14) = ecx;
    goto loc_001EB91F;

loc_001EB91B: ;
    ecx = MEM32(esp + 0x14);

loc_001EB91F: ;
    if (1) _cf = (int)(((eax) >> ((1) - 1)) & 1);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x10) = eax;
    if (CMP_A(_fa & _fb, 0)) goto loc_001EB8B7; /* ja: above (unsigned >) */

loc_001EB929: ;
    edx = MEM32(esp + 0x2C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx) = ecx;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

loc_001EB93B: ;
    eax = MEM32(ebp + 4);
    edx = MEM32(esp + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 4) = eax;
    eax = MEM32(esp + 0x2C);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edx) = ebx;
    MEM32(eax) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EB960
 * Original: 0x001EB960 - 0x001EBA2F (207 bytes, 87 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EB960(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EB960: ;
    PUSH32(esp, ecx);
    edx = MEM32(ecx + 0x18);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ebx >> 2;
    eax = 0; /* xor self */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001EB9A7; /* je: equal / zero */

loc_001EB97B: ;
    goto loc_001EB980;

    /* nop */

loc_001EB980: ;
    SET_LO16(edi, MEM16(edx + -4));
    esi = 0; /* xor self */
    SET_LO16(esi, MEM16(edx + -2));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(eax) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001EB991; /* jbe: below or equal (unsigned <=) */

loc_001EB98F: ;
    eax = esi;

loc_001EB991: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), LO16(esi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001EB9BA; /* jbe: below or equal (unsigned <=) */

loc_001EB996: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(edi), LO16(edi) (16-bit) */
    ebp = edx;
    if (TEST_Z(_fa, _fb)) goto loc_001EB9A7; /* je: equal / zero */

loc_001EB99D: ;
    esi = ZX16(LO16(edi));
    edx = edx + esi * 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EB980; /* jne: not equal / not zero */

loc_001EB9A7: ;
    eax = ZX16(LO16(eax));
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax << 2;
    POP32(esp, ebp);
    MEM32(ecx + 0x1C) = eax;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_001EB9BA: ;
    ecx = ZX16(LO16(esi));
    ecx = ecx << 2;
    eax = edx;
    eax = eax - ecx;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), LO16(esi) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EBA18; /* jne: not equal / not zero */

loc_001EB9C9: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EB9DE; /* je: equal / zero */

loc_001EB9CF: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EB9DA; /* jne: not equal / not zero */

loc_001EB9D4: ;
    MEM16(ebp + -4) = LO16(ebx);
    goto loc_001EB9DE;

loc_001EB9DA: ;
    MEM16(ebp + -4) = MEM16(ebp + -4) + LO16(edi);

loc_001EB9DE: ;
    ecx = MEM32(esp + 0x10);
    esi = MEM32(ecx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EBA20; /* jne: not equal / not zero */

loc_001EB9E9: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EBA06; /* je: equal / zero */

loc_001EB9EE: ;
    edx = ZX16(LO16(edi));
    POP32(esp, edi);
    edx = esi + edx * 4;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx + 0x18) = edx;
    MEM32(ecx + 0x1C) = 0xFFFFFFFFu;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_001EBA06: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx + 0x18) = ebx;
    MEM32(ecx + 0x1C) = 0xFFFFFFFFu;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_001EBA18: ;
    MEM16(edx + -2) = MEM16(edx + -2) - LO16(ebx);
    ecx = MEM32(esp + 0x10);

loc_001EBA20: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx + 0x1C) = 0xFFFFFFFFu;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EBA30
 * Original: 0x001EBA30 - 0x001EBB33 (259 bytes, 102 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBA30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EBA30: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebx = ebx + 3;
    PUSH32(esp, esi);
    ebx = ebx >> 2;
    PUSH32(esp, edi);
    edi = ZX16(LO16(ebx));
    ebp = ecx;
    edi = edi << 2;
    edx = edi + eax;
    eax = MEM32(ebp + 0x18);
    esi = 0; /* xor self */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_001EBA88; /* je: equal / zero */

loc_001EBA5D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EBA88; /* ja: above (unsigned >) */

loc_001EBA61: ;
    if (CMP_AE(_fa, _fb)) goto loc_001EBA8B; /* jae: above or equal (unsigned >=) */

loc_001EBA63: ;
    SET_LO16(ebp, MEM16(eax + -4));
    _fa = (uint32_t)(LO16(ebp)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(ebp), LO16(ebp) (16-bit) */
    ecx = esi;
    esi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001EBA80; /* je: equal / zero */

loc_001EBA70: ;
    ebp = ZX16(LO16(ebp));
    eax = eax + ebp * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EBA63; /* jb: below (unsigned <) */

loc_001EBA7A: ;
    ebp = MEM32(esp + 0x10);
    goto loc_001EBA8B;

loc_001EBA80: ;
    ebp = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    goto loc_001EBA8B;

loc_001EBA88: ;
    MEM32(ebp + 0x18) = edx;

loc_001EBA8B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM16(edx + -2) = LO16(ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_001EBA97; /* jne: not equal / not zero */

loc_001EBA93: ;
    ebx = 0; /* xor self */
    goto loc_001EBA9E;

loc_001EBA97: ;
    ebx = eax;
    ebx = ebx - edx;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((2) & 31u));

loc_001EBA9E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM16(edx + -4) = LO16(ebx);
    if (TEST_Z(_fa, _fb)) goto loc_001EBADE; /* je: equal / zero */

loc_001EBAA6: ;
    ebx = edx;
    ebx = ebx - esi;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((2) & 31u));
    MEM16(esi + -4) = LO16(ebx);
    ebx = edx;
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EBADE; /* jne: not equal / not zero */

loc_001EBAB9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EBAC1; /* jne: not equal / not zero */

loc_001EBABE: ;
    MEM32(ebp + 0x18) = edx;

loc_001EBAC1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EBACD; /* je: equal / zero */

loc_001EBAC5: ;
    SET_LO16(edi, MEM16(esi + -4));
    MEM16(ecx + -4) = MEM16(ecx + -4) + LO16(edi);

loc_001EBACD: ;
    SET_LO16(esi, MEM16(esi + -2));
    MEM16(edx + -2) = MEM16(edx + -2) + LO16(esi);
    edi = ZX16(MEM16(edx + -2));
    edi = edi << 2;
    esi = ecx;

loc_001EBADE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EBB14; /* je: equal / zero */

loc_001EBAE2: ;
    ecx = ZX16(MEM16(eax + -2));
    ecx = ecx << 2;
    ebx = eax;
    ebx = ebx - ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EBB14; /* jne: not equal / not zero */

loc_001EBAF1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EBAF9; /* jne: not equal / not zero */

loc_001EBAF6: ;
    MEM32(ebp + 0x18) = eax;

loc_001EBAF9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EBB05; /* je: equal / zero */

loc_001EBAFD: ;
    SET_LO16(ecx, MEM16(edx + -4));
    MEM16(esi + -4) = MEM16(esi + -4) + LO16(ecx);

loc_001EBB05: ;
    SET_LO16(edx, MEM16(edx + -2));
    MEM16(eax + -2) = MEM16(eax + -2) + LO16(edx);
    edi = ZX16(MEM16(eax + -2));
    edi = edi << 2;

loc_001EBB14: ;
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001EBB22; /* jl: less (signed <) */

loc_001EBB1B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EBB22; /* jge: greater or equal (signed >=) */

loc_001EBB1F: ;
    MEM32(ebp + 0x1C) = edi;

loc_001EBB22: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EBB2B; /* jne: not equal / not zero */

loc_001EBB27: ;
    MEM8(ebp + 0x20) = 1;

loc_001EBB2B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EBB40
 * Original: 0x001EBB40 - 0x001EBB45 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBB40(void)
{

loc_001EBB40: ;
    SET_LO16(eax, MEM16(ecx + 0x14));
    esp += 4; return; /* ret */

}

/**
 * sub_001EBB50
 * Original: 0x001EBB50 - 0x001EBB63 (19 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBB50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EBB50: ;
    eax = MEM32(esp + 8);
    edx = eax + 1;

loc_001EBB57: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EBB57; /* jne: not equal / not zero */

loc_001EBB5E: ;
    eax = eax - edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EBB70
 * Original: 0x001EBB70 - 0x001EBB74 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBB70(void)
{

loc_001EBB70: ;
    eax = MEM32(ecx + 0x34);
    esp += 4; return; /* ret */

}

/**
 * sub_001EBB80
 * Original: 0x001EBB80 - 0x001EBB95 (21 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBB80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EBB80: ;
    eax = MEM32(ecx + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EBB92; /* je: equal / zero */

loc_001EBB87: ;
    ecx = MEM32(ecx + 8);
    ecx = ecx + MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001EBB91u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EBB91: ;
    POP32(esp, ecx);

loc_001EBB92: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EBBA0
 * Original: 0x001EBBA0 - 0x001EBBB5 (21 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EBBA0: ;
    eax = MEM32(ecx + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EBBB2; /* je: equal / zero */

loc_001EBBA7: ;
    ecx = MEM32(ecx + 8);
    ecx = ecx + MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001EBBB1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EBBB1: ;
    POP32(esp, ecx);

loc_001EBBB2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EBBC0
 * Original: 0x001EBBC0 - 0x001EBC0A (74 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBBC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EBBC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EBBE9; /* je: equal / zero */

loc_001EBBCB: ;
    eax = MEM32(edi + 8);
    esi = MEM32(esp + 0xC);
    eax = eax + esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x3C); PUSH32(esp, 0x001EBBD8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EBBD8: ;
    ecx = MEM32(edi + 8);
    ecx = ecx + esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(edi + 0x38); PUSH32(esp, 0x001EBBE1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EBBE1: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001EBBE9: ;
    ecx = ZX16(MEM16(edi + 0x14));
    esi = MEM32(edi + 0x20);
    edi = MEM32(edi + 8);
    edi = edi + MEM32(esp + 0xC);
    edx = ecx;
    ecx = ecx >> 2;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EBC10
 * Original: 0x001EBC10 - 0x001EBC1B (11 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EBC10: ;
    edx = MEM32(ecx + 0x38);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_001EBC20
 * Original: 0x001EBC20 - 0x001EBC87 (103 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 9 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EBC20: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x001EBC2Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EBC2F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    edx = MEM32(esp + 0x28);
    ecx = MEM32(0x46A728);
    MEM32(edx) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001EBC7D; /* je: equal / zero */

loc_001EBC44: ;
    ecx = MEM32(esp + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x001EBC6Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EBC6F: ;
    eax = MEM32(eax);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = ecx;
    POP32(esp, esi);
    esp += 40; return; /* ret 36 */

loc_001EBC7D: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 40; return; /* ret 36 */

}

/**
 * sub_001EBC90
 * Original: 0x001EBC90 - 0x001EBCBF (47 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EBC90: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x001EBC9Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EBC9E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EBCBA; /* jne: not equal / not zero */

loc_001EBCA3: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x001EBCBAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EBCBA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001EBCC0
 * Original: 0x001EBCC0 - 0x001EBCEF (47 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBCC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EBCC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EBCE8; /* je: equal / zero */

loc_001EBCC9: ;
    esi = MEM32(ecx + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EBCE8; /* je: equal / zero */

loc_001EBCD0: ;
    edx = MEM32(ecx + 0x10);
    eax = MEM32(esp + 0xC);
    eax = eax - edx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    POP32(esp, edi);
    POP32(esp, esi);
    eax = edx;
    esp += 8; return; /* ret 4 */

loc_001EBCE8: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EBCF0
 * Original: 0x001EBCF0 - 0x001EBD29 (57 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBCF0(void)
{

loc_001EBCF0: ;
    esp = esp - 8;
    edx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    MEM32(esp + 4) = eax;
    MEM32(esp) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3EEB4C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001EBD15u); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_001EBD15: ;
    eax = MEM32(esp + 0x1C);
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM8(eax) = LO8(ecx);
    eax = MEM32(esp + 0x14);
    esp = esp + 0x18;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EBD30
 * Original: 0x001EBD30 - 0x001EBD37 (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBD30(void)
{

loc_001EBD30: ;
    eax = MEM32(ecx + 0x34);
    eax = eax << 2;
    esp += 4; return; /* ret */

}

/**
 * sub_001EBD40
 * Original: 0x001EBD40 - 0x001EBD70 (48 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBD40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EBD40: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x001EBD4Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EBD4D: ;
    edx = MEM32(esi + 0x34);
    ecx = MEM32(esi + 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_001EBD6C; /* jle: less or equal (signed <=) */

loc_001EBD59: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = edi;

loc_001EBD60: ;
    MEM32(ecx + eax * 4) = edx;
    edi = MEM32(esi + 0x34);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EBD60; /* jl: less (signed <) */

loc_001EBD6B: ;
    POP32(esp, edi);

loc_001EBD6C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EBD70
 * Original: 0x001EBD70 - 0x001EBDA0 (48 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBD70(void)
{

loc_001EBD70: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3EEB4C);
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001EBD91u); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_001EBD91: ;
    eax = MEM32(esp + 0x10);
    esp = esp + 0x14;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EBDA0
 * Original: 0x001EBDA0 - 0x001EBDCB (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBDA0(void)
{

loc_001EBDA0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3EEAAC);
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001EBDC1u); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_001EBDC1: ;
    eax = MEM32(esp + 0x10);
    esp = esp + 0x14;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EBDD0
 * Original: 0x001EBDD0 - 0x001EBDD6 (6 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBDD0(void)
{

loc_001EBDD0: ;
    eax = MEM32(ecx + 0x34);
    eax = eax << 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001EBDE0
 * Original: 0x001EBDE0 - 0x001EBDE5 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBDE0(void)
{

loc_001EBDE0: ;
    SET_LO16(eax, 2);
    esp += 4; return; /* ret */

}

/**
 * sub_001EBDF0
 * Original: 0x001EBDF0 - 0x001EBE1B (43 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBDF0(void)
{

loc_001EBDF0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3EEB54);
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x001EBE11u); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_001EBE11: ;
    eax = MEM32(esp + 0x10);
    esp = esp + 0x14;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EBE20
 * Original: 0x001EBE20 - 0x001EBE4A (42 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBE20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EBE20: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EBE47; /* je: equal / zero */

loc_001EBE28: ;
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC508);
    esi = MEM32(esi + 0x394);
    esi = MEM32(esi + eax);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x20);
    esi = esi + MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x001EBE45u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EBE45: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001EBE47: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EBE50
 * Original: 0x001EBE50 - 0x001EBE8F (63 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EBE50: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    edx = eax;
    edx = edx >> 5;
    esi = eax;
    esi = esi & 0x80000000u;
    edx = edx & 0x7FFFF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x80000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EBE7C; /* jne: not equal / not zero */

loc_001EBE6E: ;
    esi = MEM32(ecx + 8);
    esi = esi & 0xFFF;
    esi = esi << 0x13;
    edx = edx + esi;

loc_001EBE7C: ;
    edx = edx + 3;
    eax = eax >> 1;
    edx = edx & 0xFFFFFFFCu;
    eax = eax & 0xF;
    edx = edx + ecx;
    eax = edx + eax * 4 + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EBE90
 * Original: 0x001EBE90 - 0x001EBEF8 (104 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EBE90: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = edi;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10000 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EBEA8; /* jb: below (unsigned <) */

loc_001EBEA1: ;
    eax = 0x5F;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_001EBEA8: ;
    PUSH32(esp, esi);
    esi = eax + -256;
    esi = esi >> 0x10;
    esi = esi & 8;
    ecx = esi;
    eax = eax << LO8(ecx);
    ecx = eax + -4096;
    ecx = ecx >> 0x10;
    ecx = ecx & 4;
    eax = eax << LO8(ecx);
    esi = esi + ecx;
    ecx = eax + -16384;
    ecx = ecx >> 0x10;
    ecx = ecx & 2;
    eax = eax << LO8(ecx);
    eax = eax >> 0xE;
    edx = eax;
    edx = edx >> 1;
    edx = ~edx;
    edx = edx & eax;
    edx = edx - ecx;
    edx = edx - esi;
    edx = edx + 0xD;
    ecx = edx + 6;
    edi = edi >> LO8(ecx);
    POP32(esp, esi);
    edi = edi & 3;
    eax = edi + edx * 4 + 0x20;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EBF00
 * Original: 0x001EBF00 - 0x001EBFDB (219 bytes, 87 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBF00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EBF00: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 0x70);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    MEM32(esp + 0x10) = ecx;
    edx = ecx + 0x48;
    ebx = 0x5F;
    /* nop */

loc_001EBF20: ;
    eax = MEM32(edx);
    eax = eax >> 0x1F;
    eax = eax << 3;
    eax = eax | 4;
    eax = MEM32(eax + edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EBF83; /* je: equal / zero */

loc_001EBF33: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EBF6C; /* jb: below (unsigned <) */

loc_001EBF37: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001EBF6C; /* jae: above or equal (unsigned >=) */

loc_001EBF3B: ;
    ecx = MEM32(eax);
    ecx = ecx >> 0x1F;
    ecx = ecx << 3;
    ecx = ecx | 4;
    eax = eax + ecx;
    ecx = MEM32(eax);
    ebp = MEM32(ecx);
    eax = MEM32(eax + 4);
    ebp = ebp >> 0x1F;
    ebp = ebp << 3;
    ebp = ebp | 4;
    MEM32(ecx + ebp + 4) = eax;
    ebp = MEM32(eax);
    ebp = ebp >> 0x1F;
    ebp = ebp << 3;
    ebp = ebp | 4;
    MEM32(eax + ebp) = ecx;
    goto loc_001EBF7B;

loc_001EBF6C: ;
    ecx = MEM32(eax);
    ecx = ecx >> 0x1F;
    ecx = ecx << 3;
    ecx = ecx | 4;
    eax = MEM32(ecx + eax + 4);

loc_001EBF7B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EBF33; /* jne: not equal / not zero */

loc_001EBF7F: ;
    ecx = MEM32(esp + 0x10);

loc_001EBF83: ;
    edx = edx + 0x14;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001EBF20; /* jne: not equal / not zero */

loc_001EBF89: ;
    eax = MEM32(ecx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EBFB3; /* je: equal / zero */

loc_001EBF90: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EBFC7; /* jb: below (unsigned <) */

loc_001EBF94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    eax = MEM32(esp + 0x18);
    if (CMP_AE(_fa, _fb)) goto loc_001EBFB7; /* jae: above or equal (unsigned >=) */

loc_001EBF9C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x30) = 0;
    edx = MEM32(0x5BC5D8);
    POP32(esp, ebp);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_001EBFB3: ;
    eax = MEM32(esp + 0x18);

loc_001EBFB7: ;
    ecx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_001EBFC7: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EBFE0
 * Original: 0x001EBFE0 - 0x001EC114 (308 bytes, 108 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EBFE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EBFE0: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x70);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx + 0x48;
    edi = 1;

loc_001EBFF3: ;
    eax = MEM32(esi);
    eax = eax >> 0x1F;
    eax = eax << 3;
    eax = eax | 4;
    eax = MEM32(eax + esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC01D; /* je: equal / zero */

loc_001EC006: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC039; /* je: equal / zero */

loc_001EC00A: ;
    ebp = MEM32(eax);
    ebp = ebp >> 0x1F;
    ebp = ebp << 3;
    ebp = ebp | 4;
    eax = MEM32(eax + ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EC006; /* jne: not equal / not zero */

loc_001EC01D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x60 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001EBFF3; /* jl: less (signed <) */

loc_001EC026: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(0x46A728);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_001EC039: ;
    esi = MEM32(eax);
    esi = esi >> 0x1F;
    esi = esi << 3;
    esi = esi | 4;
    esi = esi + eax;
    eax = MEM32(esi);
    edi = MEM32(eax);
    esi = MEM32(esi + 4);
    edi = edi >> 0x1F;
    edi = edi << 3;
    edi = edi | 4;
    MEM32(edi + eax + 4) = esi;
    edi = MEM32(esi);
    edi = edi >> 0x1F;
    edi = edi << 3;
    edi = edi | 4;
    MEM32(edi + esi) = eax;
    MEM32(ebx + 0x2C) = edx;
    ecx = MEM32(ecx + 0xB4);
    edi = MEM32(edx);
    ecx = ecx >> 1;
    eax = ecx;
    eax = eax & 0x1F;
    edi = edi & 0x80FFFFFEu;
    eax = eax << 0x18;
    eax = eax | edi;
    edi = MEM32(esp + 0x1C);
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(edx) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_001EC0CA; /* je: equal / zero */

loc_001EC092: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80004) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x80004 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001EC0A9; /* jae: above or equal (unsigned >=) */

loc_001EC09A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001EC0A9; /* jae: above or equal (unsigned >=) */

loc_001EC09F: ;
    esi = edi + -4;
    eax = eax & 0x7FFFFFE1;
    goto loc_001EC0E4;

loc_001EC0A9: ;
    esi = edi + -12;
    ecx = ecx & 0x1FFE0;
    edi = esi;
    ecx = ecx | 0xFF000000u;
    edi = edi >> 0x13;
    ecx = ecx << 7;
    edi = edi & 0xFFF;
    ecx = ecx | edi;
    goto loc_001EC0D9;

loc_001EC0CA: ;
    ecx = ecx & 0x1FFE0;
    ecx = ecx << 7;
    ecx = ecx | 0x80000FFFu;

loc_001EC0D9: ;
    eax = eax & 0xFFFFFFE5u;
    MEM32(edx + 8) = ecx;
    eax = eax | 0x80000004u;

loc_001EC0E4: ;
    esi = esi << 5;
    esi = esi ^ eax;
    MEM32(edx) = eax;
    edi = eax;
    esi = esi & 0xFFFFE0;
    edi = edi ^ esi;
    MEM32(edx) = edi;
    eax = MEM32(ebx + 0x2C);
    ecx = MEM32(eax);
    POP32(esp, edi);
    ecx = ecx | 1;
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(0x5BC5D8);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EC120
 * Original: 0x001EC120 - 0x001EC190 (112 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC120: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x74));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EC18D; /* jne: not equal / not zero */

loc_001EC12B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x001EC133u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EC133: ;
    _fa = (uint32_t)(MEM8(esi + 0xC0)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC0), 8 (8-bit) */
    MEM32(esi + 0x88) = 0;
    MEM32(esi + 0x8C) = 0;
    MEM8(esi + 0x74) = 1;
    MEM32(esi + 0xC4) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_001EC16C; /* je: equal / zero */

loc_001EC15E: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x001EC16Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EC16C: ;
    eax = MEM32(esi + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EC18D; /* je: equal / zero */

loc_001EC176: ;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0xCC); PUSH32(esp, 0x001EC183u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EC183: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0xFC); PUSH32(esp, 0x001EC18Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EC18C: ;
    POP32(esp, edi);

loc_001EC18D: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001EC190
 * Original: 0x001EC190 - 0x001EC1D8 (72 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC190: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xA4);
    eax = MEM32(esi + 0xA0);
    eax = eax | ecx;
    ecx = esi;
    if ((eax == 0)) goto loc_001EC1CF; /* je: equal / zero */

loc_001EC1A5: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x001EC1ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EC1AD: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x88) = eax;
    MEM32(esi + 0x8C) = eax;
    esi = MEM32(esi + 0x70);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001EC1D6; /* je: equal / zero */

loc_001EC1C2: ;
    PUSH32(esp, edi);
    edi = esi;
    ecx = 0x205;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001EC1CF: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x001EC1D6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EC1D6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EC1E0
 * Original: 0x001EC1E0 - 0x001EC211 (49 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC1E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EC1E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x74));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EC20F; /* je: equal / zero */

loc_001EC1EA: ;
    eax = MEM32(esi);
    MEM8(esi + 0x74) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x001EC1F3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EC1F3: ;
    SET_LO8(eax, MEM8(esi + 0x81));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EC20F; /* je: equal / zero */

loc_001EC1FD: ;
    eax = MEM32(esi + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EC20F; /* je: equal / zero */

loc_001EC204: ;
    edx = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x188)); return; /* indirect tail jmp */

loc_001EC20F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EC220
 * Original: 0x001EC220 - 0x001EC224 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC220(void)
{

loc_001EC220: ;
    SET_LO8(eax, MEM8(ecx + 0x74));
    esp += 4; return; /* ret */

}

/**
 * sub_001EC230
 * Original: 0x001EC230 - 0x001EC234 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC230(void)
{

loc_001EC230: ;
    eax = MEM32(ecx + 0x7C);
    esp += 4; return; /* ret */

}

/**
 * sub_001EC240
 * Original: 0x001EC240 - 0x001EC2D5 (149 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC240: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x74));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EC2C5; /* jne: not equal / not zero */

loc_001EC24A: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x1C));
    MEM32(esi + 0x7C) = edx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x70);
    MEM32(edi + 0x7F4) = edx;
    MEM32(esi + 0xA4) = ecx;
    ecx = MEM32(esi + 0x70);
    eax = eax & 0xFFFFFFFCu;
    MEM32(esi + 0xA0) = eax;
    MEM8(esi + 0x80) = LO8(ebx);
    MEM32(ecx + 0x7FC) = eax;
    edx = MEM32(esi + 0x70);
    MEM32(edx + 0x800) = eax;
    ecx = MEM32(esi + 0x70);
    MEM32(ecx + 0x808) = eax;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x001EC2A2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EC2A2: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x88) = eax;
    MEM32(esi + 0x8C) = eax;
    eax = MEM32(esp + 0x10);
    MEM8(esi + 0x69) = LO8(ebx);
    ecx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

loc_001EC2C5: ;
    eax = MEM32(esp + 8);
    edx = MEM32(0x46A728);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001EC2E0
 * Original: 0x001EC2E0 - 0x001EC352 (114 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC2E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC2E0: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EC342; /* je: equal / zero */

loc_001EC2EB: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x70000000 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EC342; /* ja: above (unsigned >) */

loc_001EC2F6: ;
    edx = MEM32(edi + 0x7C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EC342; /* jne: not equal / not zero */

loc_001EC2FD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = eax + 7;
    eax = MEM32(ecx);
    esi = esi & 0xFFFFFFF8u;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xCC); PUSH32(esp, 0x001EC30Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EC30D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EC322; /* jne: not equal / not zero */

loc_001EC311: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x46A728);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

loc_001EC322: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(edi + 0x81) = 1;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x001EC33Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EC33B: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

loc_001EC342: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x46A728);
    MEM32(eax) = ecx;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EC360
 * Original: 0x001EC360 - 0x001EC367 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC360(void)
{

loc_001EC360: ;
    SET_LO8(eax, MEM8(ecx + 0x80));
    esp += 4; return; /* ret */

}

/**
 * sub_001EC370
 * Original: 0x001EC370 - 0x001EC3B1 (65 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001EC370: ;
    eax = ecx;
    edx = MEM32(eax + 0x7C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_001EC3AD; /* je: equal / zero */

loc_001EC37A: ;
    ecx = MEM32(eax + 0xA0);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | MEM32(eax + 0xA4);
    if ((ecx == 0)) goto loc_001EC3AD; /* je: equal / zero */

loc_001EC388: ;
    SET_LO8(ecx, MEM8(eax + 0x80));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_001EC3AD; /* jne: not equal / not zero */

loc_001EC392: ;
    eax = MEM32(eax + 0xA0);
    ecx = MEM32(0x5BB9AC);
    esi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0x6C); PUSH32(esp, 0x001EC3A5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EC3A5: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001EC3AD: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EC3C0
 * Original: 0x001EC3C0 - 0x001EC3C7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC3C0(void)
{

loc_001EC3C0: ;
    SET_LO8(eax, MEM8(ecx + 0x81));
    esp += 4; return; /* ret */

}

/**
 * sub_001EC3D0
 * Original: 0x001EC3D0 - 0x001EC3DD (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC3D0(void)
{

loc_001EC3D0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x81) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EC3E0
 * Original: 0x001EC3E0 - 0x001EC401 (33 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC3E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001EC3E0: ;
    eax = MEM32(ecx + 0xA0);
    edx = MEM32(ecx + 0xA4);
    PUSH32(esp, esi);
    esi = eax;
    esi = esi | edx;
    POP32(esp, esi);
    if ((esi != 0)) goto loc_001EC400; /* jne: not equal / not zero */

loc_001EC3F4: ;
    eax = MEM32(ecx + 0x88);
    edx = MEM32(ecx + 0x8C);

loc_001EC400: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001EC410
 * Original: 0x001EC410 - 0x001EC464 (84 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC410: ;
    edx = MEM32(ecx + 0xA0);
    eax = MEM32(ecx + 0xA4);
    PUSH32(esp, esi);
    esi = edx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = esi | eax;
    esi = MEM32(esp + 0x14);
    if ((esi == 0)) goto loc_001EC447; /* je: equal / zero */

loc_001EC42C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001EC447; /* jb: below (unsigned <) */

loc_001EC430: ;
    if (CMP_A(_fa, _fb)) goto loc_001EC436; /* ja: above (unsigned >) */

loc_001EC432: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001EC447; /* jbe: below or equal (unsigned <=) */

loc_001EC436: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x46A728);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001EC447: ;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0x98) = edi;
    MEM32(ecx + 0x9C) = esi;
    edx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EC470
 * Original: 0x001EC470 - 0x001EC47D (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC470(void)
{

loc_001EC470: ;
    eax = MEM32(ecx + 0x98);
    edx = MEM32(ecx + 0x9C);
    esp += 4; return; /* ret */

}

/**
 * sub_001EC480
 * Original: 0x001EC480 - 0x001EC4D7 (87 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC480: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi);
    MEM32(esi + 0xA8) = eax;
    MEM32(esi + 0xC4) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x001EC49Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EC49C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EC4C7; /* je: equal / zero */

loc_001EC4A0: ;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0xCC); PUSH32(esp, 0x001EC4ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EC4AD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0xFC); PUSH32(esp, 0x001EC4B6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EC4B6: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001EC4C7: ;
    eax = MEM32(esp + 8);
    edx = MEM32(0x5BC5D8);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EC4E0
 * Original: 0x001EC4E0 - 0x001EC4E7 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC4E0(void)
{

loc_001EC4E0: ;
    eax = MEM32(ecx + 0xA8);
    esp += 4; return; /* ret */

}

/**
 * sub_001EC4F0
 * Original: 0x001EC4F0 - 0x001EC50B (27 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC4F0(void)
{

loc_001EC4F0: ;
    SET_LO16(eax, MEM16(esp + 8));
    MEM16(ecx + 0xAC) = LO16(eax);
    eax = MEM32(esp + 4);
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EC510
 * Original: 0x001EC510 - 0x001EC518 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC510(void)
{

loc_001EC510: ;
    SET_LO16(eax, MEM16(ecx + 0xAC));
    esp += 4; return; /* ret */

}

/**
 * sub_001EC520
 * Original: 0x001EC520 - 0x001EC539 (25 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC520(void)
{

loc_001EC520: ;
    eax = MEM32(esp + 8);
    MEM32(ecx + 0x90) = eax;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EC540
 * Original: 0x001EC540 - 0x001EC547 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC540(void)
{

loc_001EC540: ;
    eax = MEM32(ecx + 0x90);
    esp += 4; return; /* ret */

}

/**
 * sub_001EC550
 * Original: 0x001EC550 - 0x001EC557 (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC550(void)
{

loc_001EC550: ;
    eax = MEM32(ecx + 0x20);
    edx = MEM32(ecx + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_001EC560
 * Original: 0x001EC560 - 0x001EC567 (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC560(void)
{

loc_001EC560: ;
    eax = MEM32(ecx + 0x40);
    edx = MEM32(ecx + 0x44);
    esp += 4; return; /* ret */

}

/**
 * sub_001EC570
 * Original: 0x001EC570 - 0x001EC57F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC570(void)
{

loc_001EC570: ;
    eax = MEM32(ecx + 0x70);
    eax = MEM32(eax + 0x7EC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    esp += 4; return; /* ret */

}

/**
 * sub_001EC580
 * Original: 0x001EC580 - 0x001EC5A3 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC580(void)
{
    int _flags = 0; /* fallback flag var */

loc_001EC580: ;
    eax = MEM32(ecx + 0xA0);
    edx = MEM32(ecx + 0xA4);
    PUSH32(esp, esi);
    esi = eax;
    esi = esi | edx;
    POP32(esp, esi);
    if ((esi != 0)) goto loc_001EC5A2; /* jne: not equal / not zero */

loc_001EC594: ;
    eax = MEM32(ecx + 0x88);
    ecx = MEM32(ecx + 0x8C);
    edx = ecx;

loc_001EC5A2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001EC5B0
 * Original: 0x001EC5B0 - 0x001EC5C9 (25 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC5B0(void)
{
    int _cf = 0; /* carry flag */

loc_001EC5B0: ;
    edx = MEM32(ecx + 0x38);
    eax = MEM32(ecx + 0x98);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x3C);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    edx = MEM32(ecx + 0x9C);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(esi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001EC5D0
 * Original: 0x001EC5D0 - 0x001EC5E0 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC5D0(void)
{

loc_001EC5D0: ;
    edx = MEM32(ecx + 0x90);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xCC); PUSH32(esp, 0x001EC5DFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EC5DF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001EC5E0
 * Original: 0x001EC5E0 - 0x001EC600 (32 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC5E0(void)
{

loc_001EC5E0: ;
    eax = MEM32(ecx);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + 0xAC));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x001EC5F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EC5F9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EC600
 * Original: 0x001EC600 - 0x001EC617 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC600(void)
{

loc_001EC600: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x001EC614u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EC614: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EC620
 * Original: 0x001EC620 - 0x001EC681 (97 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC620: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x10));
    esi = ecx;
    eax = MEM32(esi);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + 0xAC));
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x001EC644u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EC644: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EC67A; /* je: equal / zero */

loc_001EC64A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EC67A; /* je: equal / zero */

loc_001EC64E: ;
    esi = MEM32(esi + 0xC0);
    eax = esi;
    eax = eax >> 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EC666; /* jne: not equal / not zero */

loc_001EC65C: ;
    ecx = esi;
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EC67A; /* jne: not equal / not zero */

loc_001EC666: ;
    ecx = edi;
    esi = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_001EC67A: ;
    POP32(esp, edi);
    eax = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EC690
 * Original: 0x001EC690 - 0x001EC6EA (90 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC690: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0xC));
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x001EC6AFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EC6AF: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EC6E3; /* je: equal / zero */

loc_001EC6B5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EC6E3; /* je: equal / zero */

loc_001EC6B9: ;
    edi = MEM32(edi + 0xC0);
    eax = edi;
    eax = eax >> 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EC6D1; /* jne: not equal / not zero */

loc_001EC6C7: ;
    ecx = edi;
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EC6E3; /* jne: not equal / not zero */

loc_001EC6D1: ;
    ecx = esi;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_001EC6E3: ;
    POP32(esp, edi);
    eax = edx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EC6F0
 * Original: 0x001EC6F0 - 0x001EC71B (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC6F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC6F0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + -4);
    eax = ecx + -4;
    edx = edx & 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EC70B; /* jne: not equal / not zero */

loc_001EC708: ;
    eax = ecx + -12;

loc_001EC70B: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x40000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EC717; /* je: equal / zero */

loc_001EC713: ;
    eax = eax + 0xFFFFFFFAu;
    esp += 4; return; /* ret */

loc_001EC717: ;
    eax = eax + 0xFFFFFFFCu;
    esp += 4; return; /* ret */

}

/**
 * sub_001EC720
 * Original: 0x001EC720 - 0x001EC73F (31 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC720(void)
{

loc_001EC720: ;
    eax = MEM32(ecx);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + 0xAC));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x001EC73Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EC73C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001EC740
 * Original: 0x001EC740 - 0x001EC748 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC740(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001EC740: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x1AC)); return; /* indirect tail jmp */

}

/**
 * sub_001EC750
 * Original: 0x001EC750 - 0x001EC76C (28 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC750(void)
{

loc_001EC750: ;
    eax = MEM32(ecx);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + 0xAC));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x001EC769u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EC769: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EC770
 * Original: 0x001EC770 - 0x001EC824 (180 bytes, 58 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC770: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAAAAAAAFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xAAAAAAAFu (32-bit) */
    eax = ecx + -4;
    if (CMP_NE(_fa, _fb)) goto loc_001EC7DB; /* jne: not equal / not zero */

loc_001EC782: ;
    edx = MEM32(ecx + -8);
    ecx = ecx - edx;
    PUSH32(esp, esi);
    esi = MEM32(ecx + -4);
    eax = ecx + -4;
    esi = esi & 0x80000000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x80000000u (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_001EC7A0; /* jne: not equal / not zero */

loc_001EC79D: ;
    eax = ecx + -12;

loc_001EC7A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EC7F2; /* je: equal / zero */

loc_001EC7A4: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001EC7BD; /* js: sign (negative) */

loc_001EC7AA: ;
    ecx = ecx >> 5;
    ecx = ecx & 0x7FFFF;
    eax = ecx;
    eax = eax - edx;
    eax = eax - 4;
    esp += 8; return; /* ret 4 */

loc_001EC7BD: ;
    eax = MEM32(eax + 8);
    eax = eax & 0xFFF;
    ecx = ecx >> 5;
    eax = eax << 0x13;
    ecx = ecx & 0x7FFFF;
    eax = eax + ecx;
    eax = eax - edx;
    eax = eax - 4;
    esp += 8; return; /* ret 4 */

loc_001EC7DB: ;
    edx = MEM32(eax);
    edx = edx & 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EC7EE; /* jne: not equal / not zero */

loc_001EC7EB: ;
    eax = ecx + -12;

loc_001EC7EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EC7F7; /* jne: not equal / not zero */

loc_001EC7F2: ;
    eax = 0; /* xor self */
    esp += 8; return; /* ret 4 */

loc_001EC7F7: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001EC80B; /* js: sign (negative) */

loc_001EC7FD: ;
    ecx = ecx >> 5;
    ecx = ecx & 0x7FFFF;
    eax = ecx;
    esp += 8; return; /* ret 4 */

loc_001EC80B: ;
    eax = MEM32(eax + 8);
    eax = eax & 0xFFF;
    ecx = ecx >> 5;
    eax = eax << 0x13;
    ecx = ecx & 0x7FFFF;
    eax = eax + ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EC830
 * Original: 0x001EC830 - 0x001EC837 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC830(void)
{

loc_001EC830: ;
    eax = MEM32(ecx + 0xB4);
    esp += 4; return; /* ret */

}

/**
 * sub_001EC840
 * Original: 0x001EC840 - 0x001EC862 (34 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC840: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    SET_LO8(edx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    MEM32(ecx + 0xB4) = eax;
    edx = edx * 8 + 0x10;
    MEM32(ecx + 0xC8) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EC870
 * Original: 0x001EC870 - 0x001EC906 (150 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC870: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi);
    esi = ecx;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x160); PUSH32(esp, 0x001EC882u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EC882: ;
    _fa = (uint32_t)(MEM32(esi + 0xB4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xB4), 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EC890; /* jge: greater or equal (signed >=) */

loc_001EC88B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EC8F5; /* jge: greater or equal (signed >=) */

loc_001EC890: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAAAAAAAFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -4), 0xAAAAAAAFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EC8AA; /* jne: not equal / not zero */

loc_001EC89D: ;
    ecx = MEM32(eax + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x100010 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EC8E4; /* ja: above (unsigned >) */

loc_001EC8A8: ;
    eax = eax - ecx;

loc_001EC8AA: ;
    edx = MEM32(eax + -4);
    esi = eax + -4;
    edx = edx & 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EC8C1; /* jne: not equal / not zero */

loc_001EC8BE: ;
    esi = eax + -12;

loc_001EC8C1: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x160); PUSH32(esp, 0x001EC8CBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EC8CB: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001EC8D3u); RECOMP_ABI_CALL(0x001E6D40u, sub_001E6D40); /* call 0x001E6D40 */

loc_001EC8D3: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001EC8E4: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x46A728);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_001EC8F5: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(0x46A728);
    POP32(esp, edi);
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001EC910
 * Original: 0x001EC910 - 0x001EC938 (40 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC910: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x160); PUSH32(esp, 0x001EC91Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EC91F: ;
    _fa = (uint32_t)(MEM32(esi + 0xB4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xB4), 0x40 (32-bit) */
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_001EC92E; /* jge: greater or equal (signed >=) */

loc_001EC929: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001EC933; /* jge: greater or equal (signed >=) */

loc_001EC92E: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_001EC933: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EC940
 * Original: 0x001EC940 - 0x001EC9AC (108 bytes, 36 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001EC940: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001EC978; /* je: equal / zero */

loc_001EC948: ;
    _fa = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAAAAAAAFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + -4), 0xAAAAAAAFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EC95D; /* jne: not equal / not zero */

loc_001EC951: ;
    eax = MEM32(ecx + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100010) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100010 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001EC978; /* ja: above (unsigned >) */

loc_001EC95B: ;
    ecx = ecx - eax;

loc_001EC95D: ;
    edx = MEM32(ecx + -4);
    eax = ecx + -4;
    edx = edx & 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80000000u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001EC974; /* jne: not equal / not zero */

loc_001EC971: ;
    eax = ecx + -12;

loc_001EC974: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001EC97E; /* jne: not equal / not zero */

loc_001EC978: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 8; return; /* ret 4 */

loc_001EC97E: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_001EC991; /* js: sign (negative) */

loc_001EC984: ;
    ecx = ecx >> 0x18;
    ecx = ecx & 0x1F;
    ecx = ecx << 1;
    eax = ecx;
    esp += 8; return; /* ret 4 */

loc_001EC991: ;
    eax = MEM32(eax + 8);
    eax = eax >> 0xC;
    eax = eax & 0xFFF;
    ecx = ecx >> 0x18;
    eax = eax << 5;
    ecx = ecx & 0x1F;
    eax = eax + ecx;
    eax = eax << 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EC9B0
 * Original: 0x001EC9B0 - 0x001EC9BE (14 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC9B0(void)
{

loc_001EC9B0: ;
    eax = MEM32(0x46A3F0);
    MEM32(ecx + 0xC0) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001EC9C0
 * Original: 0x001EC9C0 - 0x001ECA3C (124 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001EC9C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001EC9C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xA0);
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(esi + 0xA4);
    if ((eax == 0)) goto loc_001EC9D8; /* je: equal / zero */

loc_001EC9D1: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001EC9D8: ;
    ecx = MEM32(0x5BB9AC);
    eax = MEM32(esp + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x001EC9EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001EC9EE: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001ECA35; /* je: equal / zero */

loc_001EC9F5: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x88);
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(eax)) >> 32) & 1);
    ebx = ebx + eax;
    { uint64_t _t = (uint64_t)(MEM32(esi + 0x8C)) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(esi + 0x8C) = (uint32_t)_t; }  /* adc */
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x88) = ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x80C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x80C) (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ebx);
    if (CMP_AE(_fa, _fb)) goto loc_001ECA1F; /* jae: above or equal (unsigned >=) */

loc_001ECA19: ;
    MEM32(eax + 0x80C) = ecx;

loc_001ECA1F: ;
    esi = MEM32(esi + 0x70);
    edx = MEM32(esi + 0x810);
    eax = ecx + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_001ECA35; /* jbe: below or equal (unsigned <=) */

loc_001ECA2F: ;
    MEM32(esi + 0x810) = eax;

loc_001ECA35: ;
    POP32(esp, edi);
    eax = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001ECA40
 * Original: 0x001ECA40 - 0x001ECABB (123 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001ECA40: ;
    eax = MEM32(ecx + 0xA0);
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(ecx + 0xA4);
    if ((eax == 0)) goto loc_001ECA5D; /* je: equal / zero */

loc_001ECA4E: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x46A728);
    MEM32(eax) = ecx;
    esp += 16; return; /* ret 12 */

loc_001ECA5D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    eax = ebx;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x8C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x88);
    if (CMP_A(_fa, _fb)) goto loc_001ECA8F; /* ja: above (unsigned >) */

loc_001ECA77: ;
    if (CMP_B(_fa, _fb)) goto loc_001ECA7D; /* jb: below (unsigned <) */

loc_001ECA79: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001ECA8F; /* jae: above or equal (unsigned >=) */

loc_001ECA7D: ;
    _cf = (int)((uint32_t)(edi) < (uint32_t)(eax));
    edi = edi - eax;
    { uint64_t _t = (uint64_t)(esi) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); esi = (uint32_t)_t; }  /* sbb */
    MEM32(ecx + 0x88) = edi;
    MEM32(ecx + 0x8C) = esi;
    goto loc_001ECA9D;

loc_001ECA8F: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    MEM32(ecx + 0x88) = eax;
    MEM32(ecx + 0x8C) = eax;

loc_001ECA9D: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(0x5BB9AC);
    esi = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x001ECAB3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001ECAB3: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001ECAC0
 * Original: 0x001ECAC0 - 0x001ECACB (11 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECAC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ECAC0: ;
    ecx = MEM32(0x5BB9AC);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x48)); return; /* indirect tail jmp */

}

/**
 * sub_001ECAD0
 * Original: 0x001ECAD0 - 0x001ECAE1 (17 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ECAD0: ;
    eax = MEM32(ecx + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001ECAE0; /* jne: not equal / not zero */

loc_001ECAD7: ;
    eax = MEM32(ecx + 0x70);
    eax = MEM32(eax + 0x80C);

loc_001ECAE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001ECAF0
 * Original: 0x001ECAF0 - 0x001ECB0A (26 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECAF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ECAF0: ;
    edx = MEM32(ecx + 0x7C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ECB00; /* je: equal / zero */

loc_001ECAF7: ;
    eax = MEM32(ecx + 0xA0);
    eax = eax + edx;
    esp += 4; return; /* ret */

loc_001ECB00: ;
    eax = MEM32(ecx + 0x70);
    eax = MEM32(eax + 0x810);
    esp += 4; return; /* ret */

}

/**
 * sub_001ECB10
 * Original: 0x001ECB10 - 0x001ECB4A (58 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECB10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ECB10: ;
    SET_LO8(eax, MEM8(ecx + 0x7F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ECB26; /* je: equal / zero */

loc_001ECB17: ;
    ecx = MEM32(0x46A728);
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 24; return; /* ret 20 */

loc_001ECB26: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    MEM32(ecx + 0x70) = edx;
    SET_LO8(edx, MEM8(esp + 0x14));
    MEM32(ecx + 0x74) = eax;
    eax = MEM32(esp + 4);
    MEM8(ecx + 0x7E) = LO8(edx);
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001ECB50
 * Original: 0x001ECB50 - 0x001ECB8B (59 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECB50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ECB50: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ECB7C; /* je: equal / zero */

loc_001ECB5B: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0x98); PUSH32(esp, 0x001ECB6Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001ECB6C: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001ECB7C: ;
    eax = MEM32(esp + 4);
    edx = MEM32(0x5BC5D8);
    MEM32(eax) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001ECB90
 * Original: 0x001ECB90 - 0x001ECBA0 (16 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECB90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001ECB90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x001ECB98u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001ECB98: ;
    edx = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x6C)); return; /* indirect tail jmp */

}

/**
 * sub_001ECBA0
 * Original: 0x001ECBA0 - 0x001ECBD0 (48 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ECBA0: ;
    SET_LO16(eax, MEM16(esp + 8));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 4 (16-bit) */
    eax = ZX16(LO16(eax));
    if (CMP_AE(_fa, _fb)) goto loc_001ECBB3; /* jae: above or equal (unsigned >=) */

loc_001ECBAE: ;
    eax = 4;

loc_001ECBB3: ;
    MEM16(ecx + 0x7C) = LO16(eax);
    eax = MEM32(esp + 4);
    ecx = MEM32(0x5BC5D8);
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001ECBD0
 * Original: 0x001ECBD0 - 0x001ECBE0 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECBD0(void)
{

loc_001ECBD0: ;
    edx = MEM32(ecx + 0x80);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xCC); PUSH32(esp, 0x001ECBDFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001ECBDF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001ECBE0
 * Original: 0x001ECBE0 - 0x001ECC00 (32 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECBE0(void)
{

loc_001ECBE0: ;
    eax = MEM32(ecx);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + 0x7C));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xD8); PUSH32(esp, 0x001ECBF9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001ECBF9: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001ECC00
 * Original: 0x001ECC00 - 0x001ECC38 (56 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001ECC00: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0xC));
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0xD0); PUSH32(esp, 0x001ECC18u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001ECC18: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001ECC32; /* je: equal / zero */

loc_001ECC1E: ;
    PUSH32(esp, edi);
    ecx = esi;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);

loc_001ECC32: ;
    eax = edx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001ECC40
 * Original: 0x001ECC40 - 0x001ECC57 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECC40(void)
{

loc_001ECC40: ;
    eax = MEM32(ecx);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + 0x7C));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xD0); PUSH32(esp, 0x001ECC54u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001ECC54: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001ECC60
 * Original: 0x001ECC60 - 0x001ECC77 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001ECC60(void)
{

loc_001ECC60: ;
    edx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0xE0); PUSH32(esp, 0x001ECC74u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_001ECC74: ;
    esp += 12; return; /* ret 8 */

}
