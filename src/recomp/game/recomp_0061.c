/**
 * X-Men Legends - Recompiled code chunk 61
 * Functions: 250 (0x0026DA30 - 0x00277F50)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0026DA30
 * Original: 0x0026DA30 - 0x0026DAA7 (119 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026DA30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026DA30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ebx = ecx;
    ecx = MEM32(ebx + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0026DA42u); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_0026DA42: ;
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0026DA4Bu); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_0026DA4B: ;
    ecx = MEM32(ebx + 0x14);
    esi = MEM32(ecx + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0026DA57u); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_0026DA57: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026DAA1; /* jge: greater or equal (signed >=) */

loc_0026DA5B: ;
    PUSH32(esp, edi);
    /* nop */

loc_0026DA60: ;
    edi = MEM32(ebx + 0x14);
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026DA82; /* je: equal / zero */

loc_0026DA6D: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0026DA82; /* jne: not equal / not zero */

loc_0026DA7D: ;
    PUSH32(esp, 0x0026DA82u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0026DA82: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026DA9B; /* je: equal / zero */

loc_0026DA89: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0026DA9B; /* jl: less (signed <) */

loc_0026DA8D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026DA9B; /* jge: greater or equal (signed >=) */

loc_0026DA91: ;
    ecx = MEM32(edi + 0x10);
    MEM32(ecx + esi * 4) = 0;

loc_0026DA9B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026DA60; /* jl: less (signed <) */

loc_0026DAA0: ;
    POP32(esp, edi);

loc_0026DAA1: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0026DAB0
 * Original: 0x0026DAB0 - 0x0026DB51 (161 bytes, 70 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026DAB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026DAB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 8);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0026DAC6u); RECOMP_ABI_CALL(0x00144F50u, sub_00144F50); /* call 0x00144F50 */

loc_0026DAC6: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0026DADB; /* jle: less or equal (signed <=) */

loc_0026DACF: ;
    /* nop */

loc_0026DAD0: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + eax * 4) = ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026DAD0; /* jl: less (signed <) */

loc_0026DADB: ;
    MEM32(esi + 8) = ebx;
    esi = MEM32(edi + 0xC);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0026DAEDu); RECOMP_ABI_CALL(0x00144F50u, sub_00144F50); /* call 0x00144F50 */

loc_0026DAED: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0026DB01; /* jle: less or equal (signed <=) */

loc_0026DAF6: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + eax * 4) = ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026DAF6; /* jl: less (signed <) */

loc_0026DB01: ;
    MEM32(esi + 8) = ebx;
    esi = MEM32(edi + 0x14);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0026DB13u); RECOMP_ABI_CALL(0x00144F50u, sub_00144F50); /* call 0x00144F50 */

loc_0026DB13: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0026DB2B; /* jle: less or equal (signed <=) */

loc_0026DB1C: ;
    /* nop */

loc_0026DB20: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + eax * 4) = ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026DB20; /* jl: less (signed <) */

loc_0026DB2B: ;
    MEM32(esi + 8) = ebx;
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026DB4A; /* je: equal / zero */

loc_0026DB35: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0026DB4A; /* jne: not equal / not zero */

loc_0026DB45: ;
    PUSH32(esp, 0x0026DB4Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0026DB4A: ;
    MEM32(edi + 0x10) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026DB60
 * Original: 0x0026DB60 - 0x0026DBAF (79 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026DB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026DB60: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0026DB71; /* je: equal / zero */

loc_0026DB6E: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0026DB71: ;
    edi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026DB94; /* je: equal / zero */

loc_0026DB7F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0026DB94; /* jne: not equal / not zero */

loc_0026DB8F: ;
    PUSH32(esp, 0x0026DB94u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0026DB94: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026DBA9; /* je: equal / zero */

loc_0026DB9B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0026DBA9; /* jl: less (signed <) */

loc_0026DB9F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026DBA9; /* jge: greater or equal (signed >=) */

loc_0026DBA3: ;
    ecx = MEM32(esi + 0x10);
    MEM32(ecx + edi * 4) = ebx;

loc_0026DBA9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0026DBB0
 * Original: 0x0026DBB0 - 0x0026DBFF (79 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026DBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026DBB0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0026DBC1; /* je: equal / zero */

loc_0026DBBE: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0026DBC1: ;
    edi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026DBE4; /* je: equal / zero */

loc_0026DBCF: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0026DBE4; /* jne: not equal / not zero */

loc_0026DBDF: ;
    PUSH32(esp, 0x0026DBE4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0026DBE4: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026DBF9; /* je: equal / zero */

loc_0026DBEB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0026DBF9; /* jl: less (signed <) */

loc_0026DBEF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026DBF9; /* jge: greater or equal (signed >=) */

loc_0026DBF3: ;
    ecx = MEM32(esi + 0x10);
    MEM32(ecx + edi * 4) = ebx;

loc_0026DBF9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0026DC00
 * Original: 0x0026DC00 - 0x0026DC4F (79 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026DC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026DC00: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x14);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0026DC11; /* je: equal / zero */

loc_0026DC0E: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0026DC11: ;
    edi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026DC34; /* je: equal / zero */

loc_0026DC1F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0026DC34; /* jne: not equal / not zero */

loc_0026DC2F: ;
    PUSH32(esp, 0x0026DC34u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0026DC34: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026DC49; /* je: equal / zero */

loc_0026DC3B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0026DC49; /* jl: less (signed <) */

loc_0026DC3F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026DC49; /* jge: greater or equal (signed >=) */

loc_0026DC43: ;
    ecx = MEM32(esi + 0x10);
    MEM32(ecx + edi * 4) = ebx;

loc_0026DC49: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0026DC50
 * Original: 0x0026DC50 - 0x0026DD40 (240 bytes, 94 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026DC50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026DC50: ;
    eax = MEM32(0x5BB964);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026DC69u); RECOMP_ABI_CALL(0x001EAC30u, sub_001EAC30); /* call 0x001EAC30 */

loc_0026DC69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026DCB9; /* je: equal / zero */

loc_0026DC6D: ;
    ebx = MEM32(edi + 0xC);
    edx = MEM32(ebx + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0026DC8C; /* jle: less or equal (signed <=) */

loc_0026DC79: ;
    esi = MEM32(ebx + 0x10);
    /* nop */

loc_0026DC80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026DCB5; /* je: equal / zero */

loc_0026DC84: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026DC80; /* jl: less (signed <) */

loc_0026DC8C: ;
    esi = esi | 0xFFFFFFFFu;

loc_0026DC8F: ;
    ecx = MEM32(ebx + 0x10);
    ecx = MEM32(ecx + esi * 4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0026DC9Bu); RECOMP_ABI_CALL(0x002127B0u, sub_002127B0); /* call 0x002127B0 */

loc_0026DC9B: ;
    eax = MEM32(edi + 0x10);
    edx = MEM32(esp + 0x18);
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + esi * 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0026DCAEu); RECOMP_ABI_CALL(0x002127B0u, sub_002127B0); /* call 0x002127B0 */

loc_0026DCAE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0026DCB5: ;
    esi = ecx;
    goto loc_0026DC8F;

loc_0026DCB9: ;
    ecx = edi;
    PUSH32(esp, 0x0026DCC0u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0026DCC0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026DCC6u); RECOMP_ABI_CALL(0x00213B70u, sub_00213B70); /* call 0x00213B70 */

loc_0026DCC6: ;
    esp = esp + 4;
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x0026DCD2u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0026DCD2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026DCD8u); RECOMP_ABI_CALL(0x00213B70u, sub_00213B70); /* call 0x00213B70 */

loc_0026DCD8: ;
    esp = esp + 4;
    PUSH32(esp, ebp);
    ecx = ebx;
    esi = eax;
    PUSH32(esp, 0x0026DCE5u); RECOMP_ABI_CALL(0x002127B0u, sub_002127B0); /* call 0x002127B0 */

loc_0026DCE5: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0026DCF1u); RECOMP_ABI_CALL(0x002127B0u, sub_002127B0); /* call 0x002127B0 */

loc_0026DCF1: ;
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0026DCFAu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0026DCFA: ;
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0026DD03u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0026DD03: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026DD1E; /* je: equal / zero */

loc_0026DD07: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0026DD1E; /* jne: not equal / not zero */

loc_0026DD17: ;
    ecx = esi;
    PUSH32(esp, 0x0026DD1Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0026DD1E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026DD39; /* je: equal / zero */

loc_0026DD22: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0026DD39; /* jne: not equal / not zero */

loc_0026DD32: ;
    ecx = ebx;
    PUSH32(esp, 0x0026DD39u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0026DD39: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0026DD40
 * Original: 0x0026DD40 - 0x0026DD50 (16 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026DD40(void)
{

loc_0026DD40: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = 0;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0026DD50
 * Original: 0x0026DD50 - 0x0026DDB7 (103 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026DD50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026DD50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x14);
    edx = MEM32(edi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0026DD8B; /* jle: less or equal (signed <=) */

loc_0026DD5F: ;
    esi = MEM32(edi + 0x10);
    ebx = MEM32(esp + 0x14);

loc_0026DD66: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026DD7A; /* je: equal / zero */

loc_0026DD6A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026DD66; /* jl: less (signed <) */

loc_0026DD72: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0026DD7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026DD8B; /* je: equal / zero */

loc_0026DD7F: ;
    edx = MEM32(edi + 0x10);
    eax = MEM32(edx + eax * 4);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026DD93; /* jne: not equal / not zero */

loc_0026DD8B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0026DD93: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0026DD9F; /* jne: not equal / not zero */

loc_0026DD9A: ;
    eax = 0x3C806C;

loc_0026DD9F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026DDACu); RECOMP_ABI_CALL(0x0022EB70u, sub_0022EB70); /* call 0x0022EB70 */

loc_0026DDAC: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0026DDC0
 * Original: 0x0026DDC0 - 0x0026DDF3 (51 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026DDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026DDC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0026DDCF; /* je: equal / zero */

loc_0026DDCC: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0026DDCF: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026DDEB; /* je: equal / zero */

loc_0026DDD6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0026DDEB; /* jne: not equal / not zero */

loc_0026DDE6: ;
    PUSH32(esp, 0x0026DDEBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0026DDEB: ;
    MEM32(esi + 0x28) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0026DE00
 * Original: 0x0026DE00 - 0x0026DE84 (132 bytes, 56 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026DE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026DE00: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x2C);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0026DE71; /* jg: greater (signed >) */

loc_0026DE10: ;
    ecx = eax;
    eax = ebx + 1;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x14);
    MEM32(ecx + 0x14) = eax;
    eax = eax + 0x1F;
    eax = eax >> 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0026DE38; /* jl: less (signed <) */

loc_0026DE26: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0026DE30; /* jg: greater (signed >) */

loc_0026DE2B: ;
    MEM32(ecx + 8) = eax;
    goto loc_0026DE38;

loc_0026DE30: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026DE38u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0026DE38: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    edx = esi;
    if (CMP_G(_fas, _fbs)) goto loc_0026DE70; /* jg: greater (signed >) */

loc_0026DE3E: ;
    edi = edi;

loc_0026DE40: ;
    ecx = MEM32(edi + 0x2C);
    esi = MEM32(ecx + 8);
    eax = edx;
    eax = eax >> 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026DE6B; /* je: equal / zero */

loc_0026DE4F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0026DE6B; /* jl: less (signed <) */

loc_0026DE53: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026DE6B; /* jge: greater or equal (signed >=) */

loc_0026DE57: ;
    ecx = MEM32(ecx + 0x10);
    eax = ecx + eax * 4;
    ecx = edx;
    ecx = ecx & 0x1F;
    esi = 1;
    esi = esi << LO8(ecx);
    MEM32(eax) = MEM32(eax) | esi;

loc_0026DE6B: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0026DE40; /* jle: less or equal (signed <=) */

loc_0026DE70: ;
    POP32(esp, esi);

loc_0026DE71: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(edi + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0026DE7Fu); RECOMP_ABI_CALL(0x0025E520u, sub_0025E520); /* call 0x0025E520 */

loc_0026DE7F: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0026DE90
 * Original: 0x0026DE90 - 0x0026DEE3 (83 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026DE90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026DE90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x20);
    eax = MEM32(eax + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    if (CMP_BE(_fa & _fb, 0)) goto loc_0026DECF; /* jbe: below or equal (unsigned <=) */

loc_0026DEA7: ;
    ebp = MEM32(esp + 0x18);
    goto loc_0026DEB0;

    /* nop */

loc_0026DEB0: ;
    ecx = MEM32(ebx + 0x20);
    edx = MEM32(ecx + 0x10);
    edi = MEM32(edx + esi * 4);
    ecx = MEM32(edi + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0026DEC2u); RECOMP_ABI_CALL(0x001EA9C0u, sub_001EA9C0); /* call 0x001EA9C0 */

loc_0026DEC2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0026DED9; /* jne: not equal / not zero */

loc_0026DEC6: ;
    eax = MEM32(esp + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0026DEB0; /* jb: below (unsigned <) */

loc_0026DECF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0026DED9: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0026DEF0
 * Original: 0x0026DEF0 - 0x0026DF7E (142 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026DEF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026DEF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x20);
    ebx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0026DF21; /* jbe: below or equal (unsigned <=) */

loc_0026DF02: ;
    ebp = MEM32(esp + 0x18);

loc_0026DF06: ;
    ecx = MEM32(edi + 0x20);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + esi * 4);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0026DF18u); RECOMP_ABI_CALL(0x001EA9C0u, sub_001EA9C0); /* call 0x001EA9C0 */

loc_0026DF18: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0026DF34; /* jne: not equal / not zero */

loc_0026DF1C: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0026DF06; /* jb: below (unsigned <) */

loc_0026DF21: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(0x46A728);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0026DF34: ;
    edi = MEM32(edi + 0x20);
    ecx = MEM32(edi + 0x10);
    ecx = MEM32(ecx + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026DF56; /* je: equal / zero */

loc_0026DF41: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0026DF56; /* jne: not equal / not zero */

loc_0026DF51: ;
    PUSH32(esp, 0x0026DF56u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0026DF56: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0026DF5Eu); RECOMP_ABI_CALL(0x001E7BB0u, sub_001E7BB0); /* call 0x001E7BB0 */

loc_0026DF5E: ;
    eax = MEM32(edi + 0x10);
    edx = MEM32(edi + 8);
    POP32(esp, edi);
    MEM32(eax + edx * 4) = 0;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(0x5BC5D8);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0026DF80
 * Original: 0x0026DF80 - 0x0026DFB7 (55 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026DF80(void)
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

loc_0026DF80: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(0x5BDECC);
    eax = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    ecx = MEM32(eax + edx * 4);
    edx = MEM32(esp + 4);
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    edx = MEM32(edx);
    eax = MEM32(eax + edx * 4);
    fp_top() = fp_top() - MEMF(eax + 0x18); /* fsub dword ptr [eax + 0x18] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0026DFB3; /* jne: not equal / not zero */

loc_0026DFAD: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0026DFB3: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0026DFC0
 * Original: 0x0026DFC0 - 0x0026DFF3 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026DFC0(void)
{

loc_0026DFC0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    eax = MEM32(0x5BDECC);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + edx * 4);
    edx = MEM32(esp + 8);
    edx = MEM32(edx);
    eax = MEM32(eax + edx * 4);
    edx = MEM32(eax + 0x14);
    ecx = MEM32(ecx + 0x14);
    ecx = ecx - edx;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0026E000
 * Original: 0x0026E000 - 0x0026E06C (108 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026E000(void)
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

loc_0026E000: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(0x5BDECC);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = MEM32(ebx + 0x10);
    edx = MEM32(eax + esi * 4);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    eax = MEM32(eax + edi * 4);
    ecx = MEM32(eax + 0x14);
    ecx = ecx - MEM32(edx + 0x14);
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    MEM32(esp + 0x10) = ecx;
    if ((ecx != 0)) goto loc_0026E040; /* jne: not equal / not zero */

loc_0026E03A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0026E040: ;
    eax = MEM32(ebx + 0x10);
    edx = MEM32(eax + esi * 4);
    eax = MEM32(eax + edi * 4);
    fp_push(MEMF(edx + 0x18)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 0x18); /* fsub dword ptr [eax + 0x18] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0026E065; /* jne: not equal / not zero */

loc_0026E05C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0026E065: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0026E070
 * Original: 0x0026E070 - 0x0026E083 (19 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026E070(void)
{

loc_0026E070: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x0026E080u); RECOMP_ABI_CALL(0x00263110u, sub_00263110); /* call 0x00263110 */

loc_0026E080: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0026E090
 * Original: 0x0026E090 - 0x0026E409 (889 bytes, 307 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026E090(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026E090: ;
    esp = esp - 0x34;
    eax = MEM32(esp + 0x38);
    eax = MEM32(eax + 8);
    MEM32(esp) = ecx;
    ecx = MEM32(esp + 0x44);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(edx + 0x10);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x14) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_0026E402; /* jle: less or equal (signed <=) */

loc_0026E0CC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    goto loc_0026E0D3;

loc_0026E0D1: ;
    esi = 0; /* xor self */

loc_0026E0D3: ;
    eax = MEM32(esp + 0x4C);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + edx * 4);
    ecx = MEM32(esp + 0x48);
    ecx = MEM32(ecx + 0x10);
    eax = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), esi (32-bit) */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(eax + 0x1C);
    ecx = MEM32(eax + 8);
    if (CMP_NE(_fa, _fb)) goto loc_0026E107; /* jne: not equal / not zero */

loc_0026E0F7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026E129; /* je: equal / zero */

loc_0026E0FB: ;
    MEM32(esp + 0x1C) = 1;
    MEM32(esp + 0x18) = esi;

loc_0026E107: ;
    edi = MEM32(eax + 0x10);
    eax = MEM32(esp + 0x18);
    edi = MEM32(edi + eax * 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0026E124; /* jl: less (signed <) */

loc_0026E11E: ;
    MEM32(esp + 0x1C) = esi;
    goto loc_0026E129;

loc_0026E124: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = edx;

loc_0026E129: ;
    edx = MEM32(esp + 0x14);
    ebx = MEM32(edx + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x24) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026E325; /* je: equal / zero */

loc_0026E13A: ;
    eax = MEM32(esp + 0x50);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 0x6C);
    eax = MEM32(eax + 8);
    esi = MEM32(ebx + 8);
    edi = MEM32(ecx + 8);
    MEM32(esp + 0x3C) = eax;
    eax = eax + esi;
    eax = eax + edi;
    MEM32(esp + 0x24) = ebx;
    if (((int32_t)eax < 0)) goto loc_0026E171; /* js: sign (negative) */

loc_0026E15F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0026E169; /* jg: greater (signed >) */

loc_0026E164: ;
    MEM32(ecx + 8) = eax;
    goto loc_0026E171;

loc_0026E169: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026E171u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0026E171: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ecx = MEM32(esp + 0x50);
    edx = MEM32(ecx + 0xC);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx + 0x68);
    MEM32(esp + 0x30) = eax;
    ebp = edi;
    if (TEST_S(_fas, _fbs)) goto loc_0026E19E; /* jl: less (signed <) */

loc_0026E18C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0026E196; /* jg: greater (signed >) */

loc_0026E191: ;
    MEM32(ecx + 8) = esi;
    goto loc_0026E19E;

loc_0026E196: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0026E19Eu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0026E19E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 0x68);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(ebx + 0x10);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0026E24A; /* jle: less or equal (signed <=) */

loc_0026E1B3: ;
    ecx = ecx - eax;
    ebx = eax;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x28) = esi;
    goto loc_0026E1C5;

loc_0026E1C1: ;
    ecx = MEM32(esp + 0x34);

loc_0026E1C5: ;
    esi = MEM32(ecx + ebx);
    edx = MEM32(esi);
    edi = MEM32(0x5BE5E0);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0026E1D5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0026E1D5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026E206; /* jne: not equal / not zero */

loc_0026E1D9: ;
    eax = MEM32(esi + 0x10);
    edi = MEM32(esp + 0x54);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x24);
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0x0026E1F1u); RECOMP_ABI_CALL(0x001F1920u, sub_001F1920); /* call 0x001F1920 */

loc_0026E1F1: ;
    edx = MEM32(edi + 0x28);
    ecx = MEM32(edx + 0x10);
    edx = (uint32_t)(int32_t)SMEM16(esi + 8);
    edi = MEM32(edi + 0x44);
    eax = MEM32(ecx + eax * 4);
    eax = eax + MEM32(edi + edx * 4);
    goto loc_0026E218;

loc_0026E206: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 8);
    edx = MEM32(esp + 0x54);
    edx = MEM32(edx + 0x44);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    eax = eax + MEM32(edx + ecx * 4);

loc_0026E218: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x14);
    MEM32(ebx) = eax;
    eax = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x24) (32-bit) */
    MEM32(eax + 0x30) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0026E238; /* je: equal / zero */

loc_0026E22D: ;
    MEM32(eax + 0x24) = esi;
    eax = MEM32(esp + 0x30);
    MEM32(eax + ebp * 4) = esi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0026E238: ;
    eax = MEM32(esp + 0x28);
    ebx = ebx + 4;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = eax;
    if ((_fa != 0)) goto loc_0026E1C1; /* jne: not equal / not zero */

loc_0026E24A: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx + 0x6C);
    esi = MEM32(edx + 0x10);
    edi = MEM32(esp + 0x3C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0026E28B; /* jle: less or equal (signed <=) */

loc_0026E25E: ;
    edi = edi;

loc_0026E260: ;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(esi + edx * 4);
    eax = MEM32(ecx + eax * 4);
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x30), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026E286; /* je: equal / zero */

loc_0026E273: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x24) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026E286; /* je: equal / zero */

loc_0026E27B: ;
    MEM32(eax + 0x24) = ecx;
    eax = MEM32(esp + 0x30);
    MEM32(eax + ebp * 4) = ecx;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0026E286: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026E260; /* jl: less (signed <) */

loc_0026E28B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    ecx = MEM32(esp + 0x50);
    ecx = MEM32(ecx + 0xC);
    if (TEST_S(_fas, _fbs)) goto loc_0026E2A8; /* jl: less (signed <) */

loc_0026E296: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0026E2A0; /* jg: greater (signed >) */

loc_0026E29B: ;
    MEM32(ecx + 8) = ebp;
    goto loc_0026E2A8;

loc_0026E2A0: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0026E2A8u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0026E2A8: ;
    edi = MEM32(esp + 0x10);
    esi = MEM32(edi + 0x6C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026E2B6; /* je: equal / zero */

loc_0026E2B3: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0026E2B6: ;
    ebp = MEM32(edi + 0x68);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026E2C0; /* je: equal / zero */

loc_0026E2BD: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0026E2C0: ;
    ecx = MEM32(edi + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    ebx = 0x7FFFFF;
    if (TEST_Z(_fa, _fb)) goto loc_0026E2DE; /* je: equal / zero */

loc_0026E2CC: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0026E2DE; /* jne: not equal / not zero */

loc_0026E2D9: ;
    PUSH32(esp, 0x0026E2DEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0026E2DE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi + 0x6C) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_0026E2E8; /* je: equal / zero */

loc_0026E2E5: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0026E2E8: ;
    ecx = MEM32(edi + 0x68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026E301; /* je: equal / zero */

loc_0026E2EF: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0026E301; /* jne: not equal / not zero */

loc_0026E2FC: ;
    PUSH32(esp, 0x0026E301u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0026E301: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edx = esi;
    MEM32(edi + 0x68) = esi;
    MEM32(edx + 8) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0026E325; /* je: equal / zero */

loc_0026E311: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0026E325; /* jne: not equal / not zero */

loc_0026E31E: ;
    ecx = esi;
    PUSH32(esp, 0x0026E325u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0026E325: ;
    eax = MEM32(esp + 0x14);
    edi = MEM32(eax + 0x10);
    eax = MEM32(edi + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0026E3BB; /* je: equal / zero */

loc_0026E336: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0026E354; /* je: equal / zero */

loc_0026E339: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(edi + 8);
    eax = MEM32(esp + 0x50);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0026E34Fu); RECOMP_ABI_CALL(0x00200CC0u, sub_00200CC0); /* call 0x00200CC0 */

loc_0026E34F: ;
    goto loc_0026E3EA;

loc_0026E354: ;
    ecx = MEM32(esp + 0x50);
    esi = MEM32(ecx + 0xC);
    ebx = MEM32(esi + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0xC) (32-bit) */
    edx = MEM32(edi + 0x10);
    ebp = MEM32(edx);
    if (CMP_GE(_fas, _fbs)) goto loc_0026E370; /* jge: greater or equal (signed >=) */

loc_0026E368: ;
    eax = ebx + 1;
    MEM32(esi + 8) = eax;
    goto loc_0026E37D;

loc_0026E370: ;
    PUSH32(esp, 4);
    ecx = ebx + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0026E37Du); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0026E37D: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esp + 0x50);
    MEM32(edx + ebx * 4) = ebp;
    esi = MEM32(eax + 0xC);
    ecx = MEM32(edi + 0x10);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    ebx = MEM32(ecx + 4);
    if (CMP_GE(_fas, _fbs)) goto loc_0026E3A6; /* jge: greater or equal (signed >=) */

loc_0026E398: ;
    ecx = MEM32(esi + 0x10);
    edx = edi + 1;
    MEM32(esi + 8) = edx;
    MEM32(ecx + edi * 4) = ebx;
    goto loc_0026E3EA;

loc_0026E3A6: ;
    PUSH32(esp, 4);
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0026E3B3u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0026E3B3: ;
    ecx = MEM32(esi + 0x10);
    MEM32(ecx + edi * 4) = ebx;
    goto loc_0026E3EA;

loc_0026E3BB: ;
    eax = MEM32(edi + 0x10);
    edx = MEM32(esp + 0x50);
    esi = MEM32(edx + 0xC);
    ebx = MEM32(eax);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026E3D7; /* jge: greater or equal (signed >=) */

loc_0026E3CF: ;
    ecx = edi + 1;
    MEM32(esi + 8) = ecx;
    goto loc_0026E3E4;

loc_0026E3D7: ;
    PUSH32(esp, 4);
    edx = edi + 1;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0026E3E4u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0026E3E4: ;
    eax = MEM32(esi + 0x10);
    MEM32(eax + edi * 4) = ebx;

loc_0026E3EA: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x40);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x20) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0026E0D1; /* jl: less (signed <) */

loc_0026E3FF: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0026E402: ;
    POP32(esp, esi);
    esp = esp + 0x34;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0026E410
 * Original: 0x0026E410 - 0x0026E6C0 (688 bytes, 254 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026E410(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026E410: ;
    esp = esp - 0xC;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    ebx = ecx;
    MEM32(esp + 0x10) = ebx;
    PUSH32(esp, ebp);

loc_0026E425: ;
    ecx = MEM32(ebx + 0x3C);
    ecx = MEM32(ecx + 0x10);
    ebp = MEM32(ecx + edi * 4);
    esi = eax;
    eax = eax + edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = MEM32(0x5BDECC);
    edx = MEM32(edx + 0x10);
    ebp = MEM32(edx + ebp * 4);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    ecx = MEM32(ecx + eax * 4);
    edx = MEM32(edx + ecx * 4);
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0x14) (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_0026E47E; /* jbe: below or equal (unsigned <=) */

loc_0026E455: ;
    ecx = MEM32(ebx + 0x3C);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026E47E; /* je: equal / zero */

loc_0026E45F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0026E47E; /* jl: less (signed <) */

loc_0026E463: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026E47E; /* jge: greater or equal (signed >=) */

loc_0026E467: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0026E47E; /* jl: less (signed <) */

loc_0026E46B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026E47E; /* jge: greater or equal (signed >=) */

loc_0026E46F: ;
    ecx = MEM32(ecx + 0x10);
    ebp = MEM32(ecx + eax * 4);
    edx = MEM32(ecx + edi * 4);
    MEM32(ecx + edi * 4) = ebp;
    MEM32(ecx + eax * 4) = edx;

loc_0026E47E: ;
    edx = MEM32(ebx + 0x3C);
    ecx = MEM32(edx + 0x10);
    edx = MEM32(0x5BDECC);
    ebp = MEM32(esp + 0x24);
    ebp = MEM32(ecx + ebp * 4);
    edx = MEM32(edx + 0x10);
    ebp = MEM32(edx + ebp * 4);
    ecx = MEM32(ecx + eax * 4);
    edx = MEM32(edx + ecx * 4);
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0x14) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0026E4DA; /* jae: above or equal (unsigned >=) */

loc_0026E4A5: ;
    ecx = MEM32(ebx + 0x3C);
    ebp = MEM32(ecx + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026E4DA; /* je: equal / zero */

loc_0026E4AF: ;
    edx = MEM32(esp + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0026E4DA; /* jl: less (signed <) */

loc_0026E4B7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026E4DA; /* jge: greater or equal (signed >=) */

loc_0026E4BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0026E4DA; /* jl: less (signed <) */

loc_0026E4BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026E4DA; /* jge: greater or equal (signed >=) */

loc_0026E4C3: ;
    ecx = MEM32(ecx + 0x10);
    ebp = MEM32(ecx + edx * 4);
    MEM32(esp + 0x18) = ebp;
    ebp = MEM32(ecx + eax * 4);
    MEM32(ecx + edx * 4) = ebp;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + eax * 4) = edx;

loc_0026E4DA: ;
    ecx = MEM32(ebx + 0x3C);
    ecx = MEM32(ecx + 0x10);
    edx = MEM32(0x5BDECC);
    ebp = MEM32(ecx + edi * 4);
    edx = MEM32(edx + 0x10);
    ebp = MEM32(edx + ebp * 4);
    ecx = MEM32(ecx + eax * 4);
    edx = MEM32(edx + ecx * 4);
    ecx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0x14) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0026E526; /* jbe: below or equal (unsigned <=) */

loc_0026E4FD: ;
    ecx = MEM32(ebx + 0x3C);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026E526; /* je: equal / zero */

loc_0026E507: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0026E526; /* jl: less (signed <) */

loc_0026E50B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026E526; /* jge: greater or equal (signed >=) */

loc_0026E50F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0026E526; /* jl: less (signed <) */

loc_0026E513: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026E526; /* jge: greater or equal (signed >=) */

loc_0026E517: ;
    ecx = MEM32(ecx + 0x10);
    ebp = MEM32(ecx + eax * 4);
    edx = MEM32(ecx + edi * 4);
    MEM32(ecx + edi * 4) = ebp;
    MEM32(ecx + eax * 4) = edx;

loc_0026E526: ;
    ebx = MEM32(ebx + 0x3C);
    edi = MEM32(ebx + 0x10);
    edx = MEM32(0x5BDECC);
    eax = MEM32(edi + eax * 4);
    ecx = MEM32(edx + 0x10);
    edx = MEM32(ecx + eax * 4);
    eax = MEM32(esp + 0x24);
    edx = MEM32(edx + 0x14);
    eax = edi + eax * 4;

loc_0026E545: ;
    ebp = MEM32(eax + -4);
    ebp = MEM32(ecx + ebp * 4);
    eax = eax - 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0026E545; /* jb: below (unsigned <) */

loc_0026E554: ;
    eax = MEM32(esp + 0x20);
    ebp = MEM32(esp + 0x10);
    eax = edi + eax * 4;
    /* nop */

loc_0026E560: ;
    edi = MEM32(eax + 4);
    edi = MEM32(ecx + edi * 4);
    eax = eax + 4;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 0x14) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0026E560; /* ja: above (unsigned >) */

loc_0026E56F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_GE(_fas, _fbs)) goto loc_0026E5E7; /* jge: greater or equal (signed >=) */

loc_0026E577: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026E59D; /* je: equal / zero */

loc_0026E57E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0026E59D; /* jl: less (signed <) */

loc_0026E582: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026E59D; /* jge: greater or equal (signed >=) */

loc_0026E586: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0026E59D; /* jl: less (signed <) */

loc_0026E58A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026E59D; /* jge: greater or equal (signed >=) */

loc_0026E58E: ;
    eax = MEM32(ebx + 0x10);
    edi = MEM32(eax + esi * 4);
    ecx = MEM32(eax + ebp * 4);
    MEM32(eax + ebp * 4) = edi;
    MEM32(eax + esi * 4) = ecx;

loc_0026E59D: ;
    ecx = MEM32(esp + 0x14);
    ebx = MEM32(ecx + 0x3C);
    eax = MEM32(0x5BDECC);
    edi = MEM32(ebx + 0x10);
    ecx = MEM32(eax + 0x10);
    eax = edi + esi * 4;

loc_0026E5B2: ;
    ebp = MEM32(eax + -4);
    ebp = MEM32(ecx + ebp * 4);
    eax = eax - 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0026E5B2; /* jb: below (unsigned <) */

loc_0026E5C1: ;
    ebp = MEM32(esp + 0x10);
    eax = edi + ebp * 4;
    goto loc_0026E5D0;

    /* nop */

loc_0026E5D0: ;
    edi = MEM32(eax + 4);
    edi = MEM32(ecx + edi * 4);
    eax = eax + 4;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 0x14) (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0026E5D0; /* ja: above (unsigned >) */

loc_0026E5DF: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_0026E577; /* jl: less (signed <) */

loc_0026E5E7: ;
    ecx = MEM32(esp + 0x20);
    ebx = MEM32(esp + 0x14);
    eax = esi + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026E601; /* jge: greater or equal (signed >=) */

loc_0026E5F6: ;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0026E5FFu); RECOMP_ABI_CALL(0x0026E410u, sub_0026E410); /* call 0x0026E410 */

loc_0026E5FF: ;
    goto loc_0026E64F;

loc_0026E601: ;
    if (CMP_NE(_fa, _fb)) goto loc_0026E64F; /* jne: not equal / not zero */

loc_0026E603: ;
    edx = MEM32(ebx + 0x3C);
    eax = MEM32(edx + 0x10);
    edx = MEM32(0x5BDECC);
    edi = MEM32(eax + esi * 4);
    edx = MEM32(edx + 0x10);
    edi = MEM32(edx + edi * 4);
    eax = MEM32(eax + ecx * 4);
    edx = MEM32(edx + eax * 4);
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x14) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0026E64F; /* jae: above or equal (unsigned >=) */

loc_0026E626: ;
    eax = MEM32(ebx + 0x3C);
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026E64F; /* je: equal / zero */

loc_0026E630: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0026E64F; /* jl: less (signed <) */

loc_0026E634: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026E64F; /* jge: greater or equal (signed >=) */

loc_0026E638: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0026E64F; /* jl: less (signed <) */

loc_0026E63C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026E64F; /* jge: greater or equal (signed >=) */

loc_0026E640: ;
    eax = MEM32(eax + 0x10);
    edi = MEM32(eax + esi * 4);
    edx = MEM32(eax + ecx * 4);
    MEM32(eax + ecx * 4) = edi;
    MEM32(eax + esi * 4) = edx;

loc_0026E64F: ;
    eax = MEM32(esp + 0x24);
    ecx = eax + -2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026E666; /* jge: greater or equal (signed >=) */

loc_0026E65A: ;
    edi = esi + 1;
    MEM32(esp + 0x20) = edi;
    goto loc_0026E425;

loc_0026E666: ;
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_0026E6B7; /* jne: not equal / not zero */

loc_0026E669: ;
    ecx = MEM32(ebx + 0x3C);
    ecx = MEM32(ecx + 0x10);
    edx = MEM32(0x5BDECC);
    edx = MEM32(edx + 0x10);
    edi = MEM32(ecx + esi * 4 + 4);
    ecx = MEM32(ecx + eax * 4);
    edi = MEM32(edx + edi * 4);
    edx = MEM32(edx + ecx * 4);
    ecx = MEM32(edx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x14) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0026E6B7; /* jae: above or equal (unsigned >=) */

loc_0026E68D: ;
    ebx = MEM32(ebx + 0x3C);
    ecx = MEM32(ebx + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026E6B7; /* je: equal / zero */

loc_0026E698: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0026E6B7; /* jl: less (signed <) */

loc_0026E69C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026E6B7; /* jge: greater or equal (signed >=) */

loc_0026E6A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0026E6B7; /* jl: less (signed <) */

loc_0026E6A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026E6B7; /* jge: greater or equal (signed >=) */

loc_0026E6A8: ;
    ecx = MEM32(ebx + 0x10);
    edi = MEM32(ecx + eax * 4);
    edx = MEM32(ecx + esi * 4);
    MEM32(ecx + esi * 4) = edi;
    MEM32(ecx + eax * 4) = edx;

loc_0026E6B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0026E6C0
 * Original: 0x0026E6C0 - 0x0026E715 (85 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026E6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026E6C0: ;
    edx = MEM32(ecx + 0x3C);
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0026E6D5; /* jle: less or equal (signed <=) */

loc_0026E6CB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0026E6D4u); RECOMP_ABI_CALL(0x0026E410u, sub_0026E410); /* call 0x0026E410 */

loc_0026E6D4: ;
    esp += 4; return; /* ret */

loc_0026E6D5: ;
    if (CMP_NE(_fa, _fb)) goto loc_0026E714; /* jne: not equal / not zero */

loc_0026E6D7: ;
    eax = MEM32(ecx + 0x3C);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(0x5BDECC);
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    esi = MEM32(ecx + esi * 4);
    eax = MEM32(eax);
    ecx = MEM32(ecx + eax * 4);
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x14) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_0026E714; /* jae: above or equal (unsigned >=) */

loc_0026E6FB: ;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0026E714; /* jle: less or equal (signed <=) */

loc_0026E702: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0026E714; /* jle: less or equal (signed <=) */

loc_0026E707: ;
    eax = MEM32(edx + 0x10);
    edx = MEM32(eax + 4);
    ecx = MEM32(eax);
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;

loc_0026E714: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0026E720
 * Original: 0x0026E720 - 0x0026E7F0 (208 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026E720(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026E720: ;
    esp = esp - 8;
    eax = MEM32(ecx + 0x3C);
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    PUSH32(esp, ebx);
    MEM32(esp + 4) = ecx;
    ebx = 1;
    MEM32(esp + 8) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0026E7EB; /* jl: less (signed <) */

loc_0026E740: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_0026E750;

loc_0026E745: ;
    ecx = MEM32(esp + 0x10);
    /* nop */

loc_0026E750: ;
    eax = MEM32(ecx + 0x3C);
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + ebx * 4 + -4);
    esi = MEM32(0x5BDECC);
    esi = MEM32(esi + 0x10);
    eax = MEM32(esi + eax * 4);
    esi = MEM32(eax + 0x14);
    eax = ebx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026E7E8; /* jge: greater or equal (signed >=) */

loc_0026E771: ;
    ebp = eax + -1;
    goto loc_0026E780;

loc_0026E776: ;
    ecx = MEM32(esp + 0x10);
    /* nop */

loc_0026E780: ;
    edx = MEM32(ecx + 0x3C);
    ecx = MEM32(edx + 0x10);
    edi = MEM32(0x5BDECC);
    edi = MEM32(edi + 0x10);
    ecx = MEM32(ecx + eax * 4);
    ecx = MEM32(edi + ecx * 4);
    edi = MEM32(ecx + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0026E7D4; /* jbe: below or equal (unsigned <=) */

loc_0026E79C: ;
    esi = MEM32(edx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026E7C4; /* je: equal / zero */

loc_0026E7A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0026E7C4; /* jl: less (signed <) */

loc_0026E7A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026E7C4; /* jge: greater or equal (signed >=) */

loc_0026E7AB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0026E7C4; /* jl: less (signed <) */

loc_0026E7AF: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026E7C4; /* jge: greater or equal (signed >=) */

loc_0026E7B3: ;
    edx = MEM32(edx + 0x10);
    ecx = MEM32(edx + eax * 4 + -4);
    esi = MEM32(edx + eax * 4);
    MEM32(edx + eax * 4) = ecx;
    MEM32(edx + eax * 4 + -4) = esi;

loc_0026E7C4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0026E7D4; /* jne: not equal / not zero */

loc_0026E7C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    ebx = ebp;
    if (CMP_G(_fas, _fbs)) goto loc_0026E7D4; /* jg: greater (signed >) */

loc_0026E7CF: ;
    ebx = 1;

loc_0026E7D4: ;
    edx = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    esi = edi;
    if (CMP_L(_fas, _fbs)) goto loc_0026E776; /* jl: less (signed <) */

loc_0026E7E0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_G(_fas & _fbs, 0)) goto loc_0026E745; /* jg: greater (signed >) */

loc_0026E7E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0026E7EB: ;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0026E7F0
 * Original: 0x0026E7F0 - 0x0026E85C (108 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026E7F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026E7F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    esi = MEM32(eax + 0xC);
    ebx = MEM32(esi + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0xC) (32-bit) */
    ebp = MEM32(edi + 0x24);
    if (CMP_GE(_fas, _fbs)) goto loc_0026E80F; /* jge: greater or equal (signed >=) */

loc_0026E807: ;
    ecx = ebx + 1;
    MEM32(esi + 8) = ecx;
    goto loc_0026E81C;

loc_0026E80F: ;
    PUSH32(esp, 4);
    edx = ebx + 1;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0026E81Cu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0026E81C: ;
    eax = MEM32(esi + 0x10);
    MEM32(eax + ebx * 4) = ebp;
    ecx = MEM32(edi + 8);
    esi = MEM32(ecx + 0xC);
    ebx = MEM32(edi + 0x28);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026E844; /* jge: greater or equal (signed >=) */

loc_0026E833: ;
    eax = MEM32(esi + 0x10);
    edx = edi + 1;
    MEM32(esi + 8) = edx;
    MEM32(eax + edi * 4) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0026E844: ;
    PUSH32(esp, 4);
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0026E851u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0026E851: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + edi * 4) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026E860
 * Original: 0x0026E860 - 0x0026E916 (182 bytes, 71 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026E860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026E860: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x70));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0026E871; /* je: equal / zero */

loc_0026E86E: ;
    MEM8(esi + 0x70) = LO8(ebx);

loc_0026E871: ;
    eax = MEM32(esi + 0x20);
    MEM8(esi + 0x80) = LO8(ebx);
    MEM32(eax + 8) = ebx;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + 8) = ebx;
    edx = MEM32(esi + 0x1C);
    MEM32(edx + 8) = ebx;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0026E8BE; /* jle: less or equal (signed <=) */

loc_0026E895: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + edi * 4);
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026E8AB; /* jl: less (signed <) */

loc_0026E8A6: ;
    MEM32(ecx + 8) = ebx;
    goto loc_0026E8B3;

loc_0026E8AB: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0026E8B3u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0026E8B3: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026E895; /* jl: less (signed <) */

loc_0026E8BE: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + 0x14) = ebx;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0026E8CCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0026E8CC: ;
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0026E8D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0026E8D4: ;
    ecx = MEM32(esi + 0x30);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0026E8DCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0026E8DC: ;
    ecx = MEM32(esi + 0x5C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0026E8E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0026E8E4: ;
    ecx = MEM32(esi + 0x60);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0026E8ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0026E8EC: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0026E8F4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0026E8F4: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0026E8FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0026E8FC: ;
    ecx = esi;
    PUSH32(esp, 0x0026E903u); RECOMP_ABI_CALL(0x0026E7F0u, sub_0026E7F0); /* call 0x0026E7F0 */

loc_0026E903: ;
    ecx = MEM32(esi + 0x68);
    MEM32(ecx + 8) = ebx;
    edx = MEM32(esi + 0x6C);
    MEM32(edx + 8) = ebx;
    POP32(esp, edi);
    MEM32(esi + 0x7C) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026E920
 * Original: 0x0026E920 - 0x0026E9F2 (210 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026E920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026E920: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(eax + 0x14)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x14), 0xC (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0026E99C; /* je: equal / zero */

loc_0026E92C: ;
    ecx = MEM32(0x5BDD70);
    edx = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + edx);
    ecx = MEM32(ebx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0026E969; /* jne: not equal / not zero */

loc_0026E940: ;
    esi = MEM32(eax + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026E94A; /* je: equal / zero */

loc_0026E947: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0026E94A: ;
    ecx = MEM32(ebx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026E966; /* je: equal / zero */

loc_0026E951: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0026E966; /* jne: not equal / not zero */

loc_0026E961: ;
    PUSH32(esp, 0x0026E966u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0026E966: ;
    MEM32(ebx + 0x14) = esi;

loc_0026E969: ;
    esi = MEM32(esp + 0x10);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026E985; /* jge: greater or equal (signed >=) */

loc_0026E975: ;
    edx = MEM32(esi + 0x10);
    eax = edi + 1;
    MEM32(esi + 8) = eax;
    MEM32(edx + edi * 4) = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026E985: ;
    PUSH32(esp, 4);
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0026E992u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0026E992: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + edi * 4) = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026E99C: ;
    esi = MEM32(eax + 0x20);
    eax = MEM32(esi + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0026E9E0; /* je: equal / zero */

loc_0026E9A5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0026E9BE; /* je: equal / zero */

loc_0026E9A8: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 8);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x0026E9BBu); RECOMP_ABI_CALL(0x00200CC0u, sub_00200CC0); /* call 0x00200CC0 */

loc_0026E9BB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026E9BE: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(edx);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0026E9CFu); RECOMP_ABI_CALL(0x0025E1D0u, sub_0025E1D0); /* call 0x0025E1D0 */

loc_0026E9CF: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0026E9DDu); RECOMP_ABI_CALL(0x0025E1D0u, sub_0025E1D0); /* call 0x0025E1D0 */

loc_0026E9DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0026E9E0: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x0026E9EFu); RECOMP_ABI_CALL(0x0025E1D0u, sub_0025E1D0); /* call 0x0025E1D0 */

loc_0026E9EF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0026EA00
 * Original: 0x0026EA00 - 0x0026EABF (191 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026EA00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026EA00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x78);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026EABC; /* je: equal / zero */

loc_0026EA11: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x78) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_0026EABC; /* jg: greater (signed >) */

loc_0026EA1D: ;
    eax = MEM32(esi + 0x74);
    MEM8(esi + 0x70) = LO8(ebx);
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026EABC; /* je: equal / zero */

loc_0026EA2F: ;
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026EA42; /* jl: less (signed <) */

loc_0026EA3D: ;
    MEM32(ecx + 8) = ebx;
    goto loc_0026EA4A;

loc_0026EA42: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0026EA4Au); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0026EA4A: ;
    edx = MEM32(esi + 0x74);
    ecx = MEM32(edx + 8);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026EA5A; /* jl: less (signed <) */

loc_0026EA55: ;
    MEM32(ecx + 8) = ebx;
    goto loc_0026EA62;

loc_0026EA5A: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0026EA62u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0026EA62: ;
    eax = MEM32(esi + 0x74);
    ecx = MEM32(edi + 0x14);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(edi + 0x18);
    edx = MEM32(esi + 0x74);
    MEM32(edx + 0x18) = eax;
    _fa = (uint32_t)(MEM8(esi + 0x71)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x71), LO8(ebx) (8-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0026EA83; /* je: equal / zero */

loc_0026EA7A: ;
    ecx = MEM32(esi + 0x74);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x18);
    goto loc_0026EA98;

loc_0026EA83: ;
    _fa = (uint32_t)(MEM8(esi + 0x72)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x72), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026EA91; /* je: equal / zero */

loc_0026EA88: ;
    edx = MEM32(esi + 0x74);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edx);
    goto loc_0026EA98;

loc_0026EA91: ;
    eax = MEM32(esi + 0x74);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, eax);

loc_0026EA98: ;
    PUSH32(esp, 0x0026EA9Du); RECOMP_ABI_CALL(0x0025E1D0u, sub_0025E1D0); /* call 0x0025E1D0 */

loc_0026EA9D: ;
    ecx = MEM32(esi + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026EAB9; /* je: equal / zero */

loc_0026EAA4: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0026EAB9; /* jne: not equal / not zero */

loc_0026EAB4: ;
    PUSH32(esp, 0x0026EAB9u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0026EAB9: ;
    MEM32(esi + 0x74) = ebx;

loc_0026EABC: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0026EAC0
 * Original: 0x0026EAC0 - 0x0026EBA4 (228 bytes, 70 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0026EAC0(void)
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

loc_0026EAC0: ;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0026EACFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0026EACF: ;
    MEM32(esp + 0x10) = eax;
    eax = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x3C) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0026EB0Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0026EB0A: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esi + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(0x5BE338);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0xC) = edx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    edx = MEM32(esi + 0x10);
    edx = edx - eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = fp_top() * MEMF(esi + 0x30); /* fmul dword ptr [esi + 0x30] */
    MEM32(esp + 0xC) = edx;
    edx = MEM32(esi + 0x18);
    eax = esp + 0x18;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    ecx = ecx + edx;
    fp_top() = fp_top() * MEMF(esi + 0x34); /* fmul dword ptr [esi + 0x34] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0026EB58u); RECOMP_ABI_CALL(0x0023E460u, sub_0023E460); /* call 0x0023E460 */

loc_0026EB58: ;
    SET_LO8(eax, MEM8(esi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026EB9D; /* je: equal / zero */

loc_0026EB5F: ;
    edx = MEM32(0x5BE338);
    eax = MEM32(edx + 8);
    edx = MEM32(esi + 0x1C);
    ecx = MEM32(esp + 8);
    eax = eax + edx;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0026EB7Au); RECOMP_ABI_CALL(0x0025CD00u, sub_0025CD00); /* call 0x0025CD00 */

loc_0026EB7A: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    esi = MEM32(esi + 0x24);
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    edx = MEM32(esp + 0x2C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    esi = esi + 0xC;
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi) = edx;
    MEM32(esi + 0xC) = 0x3F800000;
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0026EB9D: ;
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0026EBB0
 * Original: 0x0026EBB0 - 0x0026EC01 (81 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0026EBB0(void)
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

loc_0026EBB0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebp + -1;
    esi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0026EBE3; /* jle: less or equal (signed <=) */

loc_0026EBBF: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x10);

loc_0026EBC3: ;
    fp_push(MEMD(esp + 0x14)); /* fld double */
    edx = edi + esi + 1;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(ebx + edx * 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [ebx + edx*8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0026EBDC; /* jp: parity */

loc_0026EBD7: ;
    edi = edx + -1;
    goto loc_0026EBDE;

loc_0026EBDC: ;
    esi = edx;

loc_0026EBDE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026EBC3; /* jl: less (signed <) */

loc_0026EBE2: ;
    POP32(esp, ebx);

loc_0026EBE3: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026EBF9; /* je: equal / zero */

loc_0026EBE7: ;
    eax = MEM32(ecx + 0x10);
    fp_push(MEMD(eax + esi * 8)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0026EBF9; /* jp: parity */

loc_0026EBF8: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0026EBF9: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0026EC10
 * Original: 0x0026EC10 - 0x0026ECE3 (211 bytes, 72 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026EC10(void)
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

loc_0026EC10: ;
    eax = MEM32(0x5BD8AC);
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026ECD0; /* jne: not equal / not zero */

loc_0026EC25: ;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0026ECA5; /* je: equal / zero */

loc_0026EC2D: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0026EC9A; /* jle: less or equal (signed <=) */

loc_0026EC37: ;
    PUSH32(esp, edi);
    goto loc_0026EC40;

    /* nop */

loc_0026EC40: ;
    ecx = MEM32(ebx + 0x14);
    edx = MEM32(ecx + 0x10);
    fp_push(MEMD(edx + ebp * 8)); /* fld double */
    fp_top() = fp_top() * MEMD(0x3DA5F0); /* fmul qword ptr [0x3da5f0] */
    PUSH32(esp, 0x0026EC54u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0026EC54: ;
    esi = MEM32(ebx + 0x38);
    edi = MEM32(esi + 8);
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0026EC6F; /* jge: greater or equal (signed >=) */

loc_0026EC67: ;
    eax = edi + 1;
    MEM32(esi + 8) = eax;
    goto loc_0026EC7C;

loc_0026EC6F: ;
    PUSH32(esp, 8);
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0026EC7Cu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0026EC7C: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    MEM32(edx + edi * 8) = eax;
    MEM32(edx + edi * 8 + 4) = ecx;
    edx = MEM32(ebx + 0x14);
    eax = MEM32(edx + 8);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0026EC40; /* jl: less (signed <) */

loc_0026EC99: ;
    POP32(esp, edi);

loc_0026EC9A: ;
    eax = MEM32(ebx + 0x14);
    MEM32(eax + 8) = 0;
    POP32(esp, ebp);

loc_0026ECA5: ;
    fp_push(MEMD(ebx + 0x18)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x3DCF30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x3dcf30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0026ECCF; /* jne: not equal / not zero */

loc_0026ECB5: ;
    fp_push(MEMD(ebx + 0x18)); /* fld double */
    esi = MEM32(ebx);
    fp_top() = fp_top() * MEMD(0x3DA5F0); /* fmul qword ptr [0x3da5f0] */
    PUSH32(esp, 0x0026ECC5u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0026ECC5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(esi + 0xF0); PUSH32(esp, 0x0026ECCFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0026ECCF: ;
    POP32(esp, esi);

loc_0026ECD0: ;
    SET_LO8(eax, 1);
    MEM8(ebx + 0x49) = LO8(eax);
    MEM8(ebx + 0x4A) = 3;
    MEM8(ebx + 0x4B) = LO8(eax);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0026ECF0
 * Original: 0x0026ECF0 - 0x0026EE9F (431 bytes, 148 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026ECF0(void)
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

loc_0026ECF0: ;
    esp = esp - 0x4C;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x58);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x48)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x48), 1 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x5C);
    if (TEST_Z(_fa, _fb)) goto loc_0026ED23; /* je: equal / zero */

loc_0026ED06: ;
    eax = MEM32(esi + 8);
    edx = MEM32(eax + 0x10);
    ecx = edi + edi * 2;
    eax = edx + ecx * 4;
    ecx = MEM32(ebp + 0x30);
    MEM32(eax) = ecx;
    edx = MEM32(ebp + 0x34);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ebp + 0x38);
    MEM32(eax + 8) = ecx;

loc_0026ED23: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x0026ED2Cu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0026ED2C: ;
    _fa = (uint32_t)(MEM8(esi + 0x48)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x48), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026EDE3; /* je: equal / zero */

loc_0026ED36: ;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(edx + 0x10);
    eax = edi + edi * 2;
    PUSH32(esp, ebx);
    ebx = ecx + eax * 4;
    ecx = 0; /* xor self */
    eax = ebp + 4;

loc_0026ED48: ;
    fp_push(MEMF(eax + 4)); /* fld float */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_push(MEMF(eax)); /* fld float */
    eax = eax + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    fp_push(MEMF(eax + -20)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEMF(ebx + ecx * 4 + -4) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_0026ED48; /* jl: less (signed <) */

loc_0026ED75: ;
    edx = esp + 0x1C;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0026ED80u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0026ED80: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0026ED86u); RECOMP_ABI_CALL(0x0023EE30u, sub_0023EE30); /* call 0x0023EE30 */

loc_0026ED86: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    esp = esp + 0xC;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0026EDAC; /* jp: parity */

loc_0026ED96: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ebx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 8)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ebx + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0026EDAC: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    eax = esp + 0x10;
    fp_top() = fp_top() / MEMF(ebx); /* fdiv dword ptr [ebx] */
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(ebx + 4); /* fdiv dword ptr [ebx + 4] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(ebx + 8); /* fdiv dword ptr [ebx + 8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0026EDE0u); RECOMP_ABI_CALL(0x0023E5B0u, sub_0023E5B0); /* call 0x0023E5B0 */

loc_0026EDE0: ;
    POP32(esp, ebx);
    goto loc_0026EDF1;

loc_0026EDE3: ;
    ecx = esp + 0x18;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0026EDEEu); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0026EDEE: ;
    esp = esp + 8;

loc_0026EDF1: ;
    SET_LO8(eax, MEM8(esi + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026EE18; /* je: equal / zero */

loc_0026EDF8: ;
    eax = MEM32(esi + 0xC);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x10);
    ecx = edi;
    ecx = ecx << 4;
    ecx = ecx + edx;
    PUSH32(esp, 0x0026EE0Fu); RECOMP_ABI_CALL(0x0023F330u, sub_0023F330); /* call 0x0023F330 */

loc_0026EE0F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x4C;
    esp += 12; return; /* ret 8 */

loc_0026EE18: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026EE96; /* je: equal / zero */

loc_0026EE1C: ;
    edx = MEM32(esi + 0xC);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x10);
    edi = edi << 4;
    ecx = ecx + edi;
    PUSH32(esp, 0x0026EE31u); RECOMP_ABI_CALL(0x0023F330u, sub_0023F330); /* call 0x0023F330 */

loc_0026EE31: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x10);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = ecx + edi;
    PUSH32(esp, 0x0026EE4Du); RECOMP_ABI_CALL(0x00244E00u, sub_00244E00); /* call 0x00244E00 */

loc_0026EE4D: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CB460); /* fmul dword ptr [0x3cb460] */
    ecx = MEM32(esi + 0xC);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0xC);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CB460); /* fmul dword ptr [0x3cb460] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3CB460); /* fmul dword ptr [0x3cb460] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    eax = MEM32(ecx + 0x10);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = eax + edi;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax) = edx;
    MEM32(eax + 0xC) = 0;
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0026EE96: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x4C;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0026EEA0
 * Original: 0x0026EEA0 - 0x0026F0BE (542 bytes, 185 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026EEA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026EEA0: ;
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x38);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(eax + esi * 8);
    MEM32(esp + 0xC) = edx;
    eax = MEM32(eax + esi * 8 + 4);
    PUSH32(esp, 8);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x0026EED0u); RECOMP_ABI_CALL(0x00200C30u, sub_00200C30); /* call 0x00200C30 */

loc_0026EED0: ;
    _fa = (uint32_t)(MEM8(edi + 0x48)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x48), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026EF6F; /* je: equal / zero */

loc_0026EEDA: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(ecx + 0x10);
    eax = esi + esi * 2;
    eax = edx + eax * 4;
    edx = MEM32(eax);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x18) = edx;
    eax = MEM32(eax + 8);
    PUSH32(esp, 0xC);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x0026EF09u); RECOMP_ABI_CALL(0x00200C30u, sub_00200C30); /* call 0x00200C30 */

loc_0026EF09: ;
    ecx = MEM32(edi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026EF6F; /* je: equal / zero */

loc_0026EF10: ;
    eax = MEM32(ecx + 0x10);
    edx = esi + esi * 2;
    edx = edx << 3;
    ebx = MEM32(eax + edx);
    eax = eax + edx;
    MEM32(esp + 0x30) = ebx;
    ebx = MEM32(eax + 4);
    MEM32(esp + 0x34) = ebx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x38) = eax;
    eax = MEM32(ecx + 0x10);
    eax = eax + edx + 0xC;
    edx = MEM32(eax);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x28) = edx;
    eax = MEM32(eax + 8);
    PUSH32(esp, 0xC);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    ebx = esi + esi;
    PUSH32(esp, ebx);
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0x0026EF5Du); RECOMP_ABI_CALL(0x00200C30u, sub_00200C30); /* call 0x00200C30 */

loc_0026EF5D: ;
    ecx = MEM32(edi + 0x3C);
    PUSH32(esp, 0xC);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0026EF6Fu); RECOMP_ABI_CALL(0x00200C30u, sub_00200C30); /* call 0x00200C30 */

loc_0026EF6F: ;
    _fa = (uint32_t)(MEM8(edi + 0x48)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x48), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F00E; /* je: equal / zero */

loc_0026EF79: ;
    ecx = MEM32(edi + 0x10);
    eax = MEM32(ecx + 0x10);
    edx = esi + esi * 2;
    eax = eax + edx * 4;
    edx = MEM32(eax);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x34) = edx;
    eax = MEM32(eax + 8);
    PUSH32(esp, 0xC);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, 0x0026EFA8u); RECOMP_ABI_CALL(0x00200C30u, sub_00200C30); /* call 0x00200C30 */

loc_0026EFA8: ;
    ecx = MEM32(edi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F00E; /* je: equal / zero */

loc_0026EFAF: ;
    eax = MEM32(ecx + 0x10);
    edx = esi + esi * 2;
    edx = edx << 3;
    ebx = MEM32(eax + edx);
    eax = eax + edx;
    MEM32(esp + 0x14) = ebx;
    ebx = MEM32(eax + 4);
    MEM32(esp + 0x18) = ebx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ecx + 0x10);
    eax = eax + edx + 0xC;
    edx = MEM32(eax);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x28) = edx;
    eax = MEM32(eax + 8);
    PUSH32(esp, 0xC);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    ebx = esi + esi;
    PUSH32(esp, ebx);
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0x0026EFFCu); RECOMP_ABI_CALL(0x00200C30u, sub_00200C30); /* call 0x00200C30 */

loc_0026EFFC: ;
    ecx = MEM32(edi + 0x44);
    PUSH32(esp, 0xC);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0026F00Eu); RECOMP_ABI_CALL(0x00200C30u, sub_00200C30); /* call 0x00200C30 */

loc_0026F00E: ;
    _fa = (uint32_t)(MEM8(edi + 0x48)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x48), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F0B5; /* je: equal / zero */

loc_0026F018: ;
    ecx = MEM32(edi + 0xC);
    ebx = MEM32(ecx + 0x10);
    eax = esi;
    eax = eax << 4;
    edx = MEM32(eax + ebx);
    eax = eax + ebx;
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x1C) = edx;
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 0x10);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x0026F050u); RECOMP_ABI_CALL(0x00200C30u, sub_00200C30); /* call 0x00200C30 */

loc_0026F050: ;
    ecx = MEM32(edi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F0B5; /* je: equal / zero */

loc_0026F057: ;
    eax = MEM32(ecx + 0x10);
    edx = esi + esi * 2;
    edx = edx << 3;
    ebx = MEM32(eax + edx);
    eax = eax + edx;
    MEM32(esp + 0x24) = ebx;
    ebx = MEM32(eax + 4);
    MEM32(esp + 0x28) = ebx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(ecx + 0x10);
    eax = eax + edx + 0xC;
    edx = MEM32(eax);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x34) = edx;
    eax = MEM32(eax + 8);
    PUSH32(esp, 0xC);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    esi = esi + esi;
    PUSH32(esp, esi);
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, 0x0026F0A3u); RECOMP_ABI_CALL(0x00200C30u, sub_00200C30); /* call 0x00200C30 */

loc_0026F0A3: ;
    ecx = MEM32(edi + 0x40);
    PUSH32(esp, 0xC);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0026F0B5u); RECOMP_ABI_CALL(0x00200C30u, sub_00200C30); /* call 0x00200C30 */

loc_0026F0B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0026F0C0
 * Original: 0x0026F0C0 - 0x0026F1FC (316 bytes, 101 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F0C0(void)
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

loc_0026F0C0: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    PUSH32(esp, 0x0026F0D3u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0026F0D3: ;
    SET_LO8(eax, MEM8(edi + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    ebx = MEM32(esp + 0x28);
    if (TEST_Z(_fa, _fb)) goto loc_0026F0F3; /* je: equal / zero */

loc_0026F0DE: ;
    eax = MEM32(edi + 0xC);
    edx = MEM32(eax + 0x10);
    ecx = ebx;
    ecx = ecx << 4;
    PUSH32(esp, esi);
    ecx = ecx + edx;
    PUSH32(esp, 0x0026F0F1u); RECOMP_ABI_CALL(0x0023F4A0u, sub_0023F4A0); /* call 0x0023F4A0 */

loc_0026F0F1: ;
    goto loc_0026F138;

loc_0026F0F3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F187; /* je: equal / zero */

loc_0026F0FB: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(ecx + 0x10);
    eax = ebx;
    eax = eax << 4;
    fp_push(MEMF(eax + edx + 8)); /* fld float */
    eax = eax + edx;
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    esp = esp - 0xC;
    ecx = esi;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0026F138u); RECOMP_ABI_CALL(0x0023E770u, sub_0023E770); /* call 0x0023E770 */

loc_0026F138: ;
    edx = MEM32(edi + 0x2C);
    ecx = MEM32(edi + 0x34);
    eax = MEM32(edi + 0x30);
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, esi);
    edx = esp + 0x10;
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x0026F15Cu); RECOMP_ABI_CALL(0x0023FC90u, sub_0023FC90); /* call 0x0023FC90 */

loc_0026F15C: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x18); /* fsub dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x1C); /* fsub dword ptr [esp + 0x1c] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x20); /* fsub dword ptr [esp + 0x20] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 0x38) = eax;
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */

loc_0026F187: ;
    _fa = (uint32_t)(MEM8(edi + 0x48)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x48), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F1C0; /* je: equal / zero */

loc_0026F18D: ;
    ecx = MEM32(edi + 8);
    eax = MEM32(ecx + 0x10);
    edx = ebx + ebx * 2;
    fp_push(MEMF(eax + edx * 4)); /* fld float */
    ecx = MEM32(eax + edx * 4 + 8);
    fp_push(MEMF(eax + edx * 4 + 4)); /* fld float */
    eax = eax + edx * 4;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x20) = ecx;
    fp_top() = fp_top() + MEMF(esi + 0x30); /* fadd dword ptr [esi + 0x30] */
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() + MEMF(esi + 0x34); /* fadd dword ptr [esi + 0x34] */
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() + MEMF(esi + 0x38); /* fadd dword ptr [esi + 0x38] */
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */

loc_0026F1C0: ;
    _fa = (uint32_t)(MEM8(edi + 0x48)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x48), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F1F3; /* je: equal / zero */

loc_0026F1C6: ;
    edx = MEM32(edi + 0x10);
    ecx = MEM32(edx + 0x10);
    eax = ebx + ebx * 2;
    edx = MEM32(ecx + eax * 4);
    eax = ecx + eax * 4;
    MEM32(esp + 0x18) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x1C) = ecx;
    edx = MEM32(eax + 8);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, 0x0026F1F3u); RECOMP_ABI_CALL(0x0023E5B0u, sub_0023E5B0); /* call 0x0023E5B0 */

loc_0026F1F3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0026F200
 * Original: 0x0026F200 - 0x0026F3B4 (436 bytes, 143 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F200(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026F200: ;
    eax = MEM32(esp + 4);
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x48)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x48), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F3AD; /* je: equal / zero */

loc_0026F213: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0026F3AD; /* ja: above (unsigned >) */

loc_0026F21D: ;
    PUSH32(esp, edi);
    { uint32_t _jt = MEM32(eax * 4 + 0x26F3B4); /* switch: 8 entries, 5 targets */
    if (_jt == 0x0026F225u) goto loc_0026F225;
    if (_jt == 0x0026F2B3u) goto loc_0026F2B3;
    if (_jt == 0x0026F2F7u) goto loc_0026F2F7;
    if (_jt == 0x0026F342u) goto loc_0026F342;
    if (_jt == 0x0026F3ACu) goto loc_0026F3AC;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0026F225: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F23B; /* je: equal / zero */

loc_0026F22D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F23B; /* je: equal / zero */

loc_0026F232: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026F3AC; /* jne: not equal / not zero */

loc_0026F23B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM8(esi + 0x49) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0026F288; /* jne: not equal / not zero */

loc_0026F243: ;
    ecx = esi;
    PUSH32(esp, 0x0026F24Au); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0026F24A: ;
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    edi = esi + 0x3C;
    PUSH32(esp, 0x0026F25Fu); RECOMP_ABI_CALL(0x001B7760u, sub_001B7760); /* call 0x001B7760 */

loc_0026F25F: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0026F267u); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_0026F267: ;
    ecx = esp + 0x14;

loc_0026F26B: ;
    PUSH32(esp, 0x0026F270u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0026F270: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edi);
    edx = edx << 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0026F280u); RECOMP_ABI_CALL(0x001B6CE0u, sub_001B6CE0); /* call 0x001B6CE0 */

loc_0026F280: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

loc_0026F288: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F2A4; /* je: equal / zero */

loc_0026F28F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0026F2A4; /* jne: not equal / not zero */

loc_0026F29F: ;
    PUSH32(esp, 0x0026F2A4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0026F2A4: ;
    POP32(esp, edi);
    MEM32(esi + 0x3C) = 0;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

loc_0026F2B3: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F2C9; /* je: equal / zero */

loc_0026F2BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F2C9; /* je: equal / zero */

loc_0026F2C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026F3AC; /* jne: not equal / not zero */

loc_0026F2C9: ;
    MEM8(esi + 0x4A) = LO8(eax);

loc_0026F2CC: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F2E8; /* je: equal / zero */

loc_0026F2D3: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0026F2E8; /* jne: not equal / not zero */

loc_0026F2E3: ;
    PUSH32(esp, 0x0026F2E8u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0026F2E8: ;
    POP32(esp, edi);
    MEM32(esi + 0x40) = 0;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

loc_0026F2F7: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F30D; /* je: equal / zero */

loc_0026F2FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F30D; /* je: equal / zero */

loc_0026F304: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026F3AC; /* jne: not equal / not zero */

loc_0026F30D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM8(esi + 0x4A) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0026F2CC; /* jne: not equal / not zero */

loc_0026F315: ;
    ecx = esi;
    PUSH32(esp, 0x0026F31Cu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0026F31C: ;
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    edi = esi + 0x40;
    PUSH32(esp, 0x0026F331u); RECOMP_ABI_CALL(0x001B7760u, sub_001B7760); /* call 0x001B7760 */

loc_0026F331: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0026F339u); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_0026F339: ;
    ecx = esp + 8;
    goto loc_0026F26B;

loc_0026F342: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F354; /* je: equal / zero */

loc_0026F34A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0026F354; /* je: equal / zero */

loc_0026F34F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026F3AC; /* jne: not equal / not zero */

loc_0026F354: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM8(esi + 0x4B) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0026F389; /* jne: not equal / not zero */

loc_0026F35C: ;
    ecx = esi;
    PUSH32(esp, 0x0026F363u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0026F363: ;
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    edi = esi + 0x44;
    PUSH32(esp, 0x0026F378u); RECOMP_ABI_CALL(0x001B7760u, sub_001B7760); /* call 0x001B7760 */

loc_0026F378: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0026F380u); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_0026F380: ;
    ecx = esp + 0xC;
    goto loc_0026F26B;

loc_0026F389: ;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F3A5; /* je: equal / zero */

loc_0026F390: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0026F3A5; /* jne: not equal / not zero */

loc_0026F3A0: ;
    PUSH32(esp, 0x0026F3A5u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0026F3A5: ;
    MEM32(esi + 0x44) = 0;

loc_0026F3AC: ;
    POP32(esp, edi);

loc_0026F3AD: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0026F3E0
 * Original: 0x0026F3E0 - 0x0026F750 (880 bytes, 330 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F3E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0026F3E0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) & 2);
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(esp + 0x14) = LO8(eax);
    if ((LO8(eax) == 0)) goto loc_0026F3FE; /* je: equal / zero */

loc_0026F3F5: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0026F688; /* jne: not equal / not zero */

loc_0026F3FE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    SET_LO8(eax, MEM8(esi + 0x48));
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM8(esp + 0x13) = LO8(eax);
    MEM8(esi + 0x48) = LO8(ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0026F4B2; /* je: equal / zero */

loc_0026F413: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    MEM8(esi + 0x49) = 1;
    if (TEST_NZ(_fa, _fb)) goto loc_0026F4D5; /* jne: not equal / not zero */

loc_0026F41F: ;
    ecx = esi;
    PUSH32(esp, 0x0026F426u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0026F426: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026F42Cu); RECOMP_ABI_CALL(0x00246660u, sub_00246660); /* call 0x00246660 */

loc_0026F42C: ;
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F438; /* je: equal / zero */

loc_0026F435: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0026F438: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    ebp = 0x7FFFFF;
    if (TEST_Z(_fa, _fb)) goto loc_0026F456; /* je: equal / zero */

loc_0026F444: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0026F456; /* jne: not equal / not zero */

loc_0026F451: ;
    PUSH32(esp, 0x0026F456u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0026F456: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esi + 8) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0026F471; /* je: equal / zero */

loc_0026F45D: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0026F471; /* jne: not equal / not zero */

loc_0026F46A: ;
    ecx = edi;
    PUSH32(esp, 0x0026F471u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0026F471: ;
    eax = MEM32(esi + 0x38);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(esi + 8);
    if (TEST_S(_fas, _fbs)) goto loc_0026F490; /* jl: less (signed <) */

loc_0026F47E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0026F488; /* jg: greater (signed >) */

loc_0026F483: ;
    MEM32(ecx + 8) = eax;
    goto loc_0026F490;

loc_0026F488: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026F490u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0026F490: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F4A9; /* je: equal / zero */

loc_0026F497: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0026F4A9; /* jne: not equal / not zero */

loc_0026F4A4: ;
    PUSH32(esp, 0x0026F4A9u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0026F4A9: ;
    MEM32(esi + 0x3C) = 0;
    goto loc_0026F4DA;

loc_0026F4B2: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F4CE; /* je: equal / zero */

loc_0026F4B9: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0026F4CE; /* jne: not equal / not zero */

loc_0026F4C9: ;
    PUSH32(esp, 0x0026F4CEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0026F4CE: ;
    MEM32(esi + 8) = 0;

loc_0026F4D5: ;
    ebp = 0x7FFFFF;

loc_0026F4DA: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F4F3; /* je: equal / zero */

loc_0026F4E1: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0026F4F3; /* jne: not equal / not zero */

loc_0026F4EE: ;
    PUSH32(esp, 0x0026F4F3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0026F4F3: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esi + 0x3C) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_0026F529; /* jne: not equal / not zero */

loc_0026F502: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0026F529; /* jne: not equal / not zero */

loc_0026F507: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F520; /* je: equal / zero */

loc_0026F50E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0026F520; /* jne: not equal / not zero */

loc_0026F51B: ;
    PUSH32(esp, 0x0026F520u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0026F520: ;
    MEM32(esi + 0xC) = 0;
    goto loc_0026F5A4;

loc_0026F529: ;
    _fa = (uint32_t)(MEM8(esp + 0x13)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x13), 6 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0026F594; /* jne: not equal / not zero */

loc_0026F530: ;
    ecx = esi;
    PUSH32(esp, 0x0026F537u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0026F537: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026F53Du); RECOMP_ABI_CALL(0x00240E20u, sub_00240E20); /* call 0x00240E20 */

loc_0026F53D: ;
    esp = esp + 4;
    ecx = esp + 0x14;
    edi = eax;
    ebp = esi + 0xC;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x0026F555u); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_0026F555: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F570; /* je: equal / zero */

loc_0026F559: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0026F570; /* jne: not equal / not zero */

loc_0026F569: ;
    ecx = edi;
    PUSH32(esp, 0x0026F570u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0026F570: ;
    edx = MEM32(esi + 0x38);
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(ebp);
    if (TEST_S(_fas, _fbs)) goto loc_0026F58F; /* jl: less (signed <) */

loc_0026F57D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0026F587; /* jg: greater (signed >) */

loc_0026F582: ;
    MEM32(ecx + 8) = eax;
    goto loc_0026F58F;

loc_0026F587: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026F58Fu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0026F58F: ;
    ebp = 0x7FFFFF;

loc_0026F594: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    eax = eax + eax + 1;
    MEM8(esi + 0x4A) = LO8(eax);

loc_0026F5A4: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F5BD; /* je: equal / zero */

loc_0026F5AB: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0026F5BD; /* jne: not equal / not zero */

loc_0026F5B8: ;
    PUSH32(esp, 0x0026F5BDu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0026F5BD: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    MEM32(esi + 0x40) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0026F646; /* je: equal / zero */

loc_0026F5C9: ;
    _fa = (uint32_t)(MEM8(esp + 0x13)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x13), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0026F640; /* jne: not equal / not zero */

loc_0026F5D0: ;
    ecx = esi;
    PUSH32(esp, 0x0026F5D7u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0026F5D7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026F5DDu); RECOMP_ABI_CALL(0x00246660u, sub_00246660); /* call 0x00246660 */

loc_0026F5DD: ;
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F5E9; /* je: equal / zero */

loc_0026F5E6: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0026F5E9: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F602; /* je: equal / zero */

loc_0026F5F0: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0026F602; /* jne: not equal / not zero */

loc_0026F5FD: ;
    PUSH32(esp, 0x0026F602u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0026F602: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esi + 0x10) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0026F61D; /* je: equal / zero */

loc_0026F609: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0026F61D; /* jne: not equal / not zero */

loc_0026F616: ;
    ecx = edi;
    PUSH32(esp, 0x0026F61Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0026F61D: ;
    ecx = MEM32(esi + 0x38);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(esi + 0x10);
    if (TEST_S(_fas, _fbs)) goto loc_0026F640; /* jl: less (signed <) */

loc_0026F62A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0026F638; /* jg: greater (signed >) */

loc_0026F62F: ;
    MEM32(ecx + 8) = eax;
    MEM8(esi + 0x4B) = 1;
    goto loc_0026F666;

loc_0026F638: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026F640u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0026F640: ;
    MEM8(esi + 0x4B) = 1;
    goto loc_0026F666;

loc_0026F646: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F65F; /* je: equal / zero */

loc_0026F64D: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0026F65F; /* jne: not equal / not zero */

loc_0026F65A: ;
    PUSH32(esp, 0x0026F65Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0026F65F: ;
    MEM32(esi + 0x10) = 0;

loc_0026F666: ;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F67F; /* je: equal / zero */

loc_0026F66D: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0026F67F; /* jne: not equal / not zero */

loc_0026F67A: ;
    PUSH32(esp, 0x0026F67Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0026F67F: ;
    POP32(esp, edi);
    MEM32(esi + 0x44) = 0;
    POP32(esp, ebp);

loc_0026F688: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F6A9; /* je: equal / zero */

loc_0026F6A4: ;
    esi = MEM32(ecx + 0x3C);
    goto loc_0026F6B9;

loc_0026F6A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 6 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0026F6B6; /* jne: not equal / not zero */

loc_0026F6AD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F6B9; /* je: equal / zero */

loc_0026F6B1: ;
    esi = MEM32(ecx + 0x44);
    goto loc_0026F6B9;

loc_0026F6B6: ;
    esi = MEM32(ecx + 0x40);

loc_0026F6B9: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0026F6E0; /* jne: not equal / not zero */

loc_0026F6C0: ;
    eax = MEM32(ecx + 0x38);
    eax = MEM32(eax + 8);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0026F6E0; /* jl: less (signed <) */

loc_0026F6CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0026F6D6; /* jg: greater (signed >) */

loc_0026F6D1: ;
    MEM32(esi + 8) = eax;
    goto loc_0026F6E0;

loc_0026F6D6: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0026F6E0u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0026F6E0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esi + 8);
    eax = eax + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F714; /* je: equal / zero */

loc_0026F6ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0026F714; /* jl: less (signed <) */

loc_0026F6F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026F714; /* jge: greater or equal (signed >=) */

loc_0026F6F5: ;
    edx = MEM32(esi + 0x10);
    ecx = eax + eax * 2;
    ecx = edx + ecx * 4;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(edx);
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    POP32(esp, edi);

loc_0026F714: ;
    ecx = MEM32(esi + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F741; /* je: equal / zero */

loc_0026F71C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0026F741; /* jl: less (signed <) */

loc_0026F720: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026F741; /* jge: greater or equal (signed >=) */

loc_0026F724: ;
    ecx = MEM32(esi + 0x10);
    eax = eax + eax * 2;
    eax = ecx + eax * 4;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;

loc_0026F741: ;
    POP32(esp, esi);

loc_0026F742: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0026F690
 * Original: 0x0026F690 - 0x0026F750 (192 bytes, 84 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026F690: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(MEM8(ecx + 0x48)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x48), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F742; /* je: equal / zero */

loc_0026F69D: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F6A9; /* je: equal / zero */

loc_0026F6A4: ;
    esi = MEM32(ecx + 0x3C);
    goto loc_0026F6B9;

loc_0026F6A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 6 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0026F6B6; /* jne: not equal / not zero */

loc_0026F6AD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F6B9; /* je: equal / zero */

loc_0026F6B1: ;
    esi = MEM32(ecx + 0x44);
    goto loc_0026F6B9;

loc_0026F6B6: ;
    esi = MEM32(ecx + 0x40);

loc_0026F6B9: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0026F6E0; /* jne: not equal / not zero */

loc_0026F6C0: ;
    eax = MEM32(ecx + 0x38);
    eax = MEM32(eax + 8);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0026F6E0; /* jl: less (signed <) */

loc_0026F6CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0026F6D6; /* jg: greater (signed >) */

loc_0026F6D1: ;
    MEM32(esi + 8) = eax;
    goto loc_0026F6E0;

loc_0026F6D6: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0026F6E0u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0026F6E0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esi + 8);
    eax = eax + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F714; /* je: equal / zero */

loc_0026F6ED: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0026F714; /* jl: less (signed <) */

loc_0026F6F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026F714; /* jge: greater or equal (signed >=) */

loc_0026F6F5: ;
    edx = MEM32(esi + 0x10);
    ecx = eax + eax * 2;
    ecx = edx + ecx * 4;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(edx);
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    POP32(esp, edi);

loc_0026F714: ;
    ecx = MEM32(esi + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0026F741; /* je: equal / zero */

loc_0026F71C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0026F741; /* jl: less (signed <) */

loc_0026F720: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0026F741; /* jge: greater or equal (signed >=) */

loc_0026F724: ;
    ecx = MEM32(esi + 0x10);
    eax = eax + eax * 2;
    eax = ecx + eax * 4;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;

loc_0026F741: ;
    POP32(esp, esi);

loc_0026F742: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0026F750
 * Original: 0x0026F750 - 0x0026F7EF (159 bytes, 57 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026F750: ;
    SET_LO8(eax, MEM8(ecx + 0x49));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0026F77E; /* jne: not equal / not zero */

loc_0026F757: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(esp + 8);
    edx = eax + eax * 2;
    eax = MEM32(ecx + 0x10);
    ecx = MEM32(esp + 4);
    eax = eax + edx * 4;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 20; return; /* ret 16 */

loc_0026F77E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026F7AF; /* jne: not equal / not zero */

loc_0026F782: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = ecx + ecx * 2;
    ecx = eax + edx * 4;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    edx = ecx + ecx * 2;
    ecx = MEM32(esp + 0x14);
    eax = eax + edx * 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x0026F7ACu); RECOMP_ABI_CALL(0x0023FC50u, sub_0023FC50); /* call 0x0023FC50 */

loc_0026F7AC: ;
    esp += 20; return; /* ret 16 */

loc_0026F7AF: ;
    edx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0x3C);
    eax = MEM32(esp + 8);
    ecx = MEM32(ecx + 0x10);
    edx = MEM32(edx + 0x10);
    PUSH32(esp, esi);
    esi = eax + eax * 2;
    ecx = ecx + esi * 8;
    esi = MEM32(esp + 0x10);
    esi = esi + esi * 2;
    esi = edx + esi * 4;
    PUSH32(esp, esi);
    esi = ecx + 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = eax + eax * 2;
    ecx = edx + eax * 4;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0026F7EBu); RECOMP_ABI_CALL(0x0023FDC0u, sub_0023FDC0); /* call 0x0023FDC0 */

loc_0026F7EB: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0026F7F0
 * Original: 0x0026F7F0 - 0x0026F87D (141 bytes, 50 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026F7F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0026F7F0: ;
    SET_LO8(eax, MEM8(ecx + 0x4A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0026F823; /* jne: not equal / not zero */

loc_0026F7F7: ;
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = eax << 4;
    eax = eax + edx;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    esp += 20; return; /* ret 16 */

loc_0026F823: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0026F852; /* jne: not equal / not zero */

loc_0026F827: ;
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = edx << 4;
    edx = edx + eax;
    ecx = ecx << 4;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0026F84Fu); RECOMP_ABI_CALL(0x0023F650u, sub_0023F650); /* call 0x0023F650 */

loc_0026F84F: ;
    esp += 20; return; /* ret 16 */

loc_0026F852: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    ecx = ecx << 4;
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    edx = edx << 4;
    edx = edx + eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026F87Au); RECOMP_ABI_CALL(0x0023F910u, sub_0023F910); /* call 0x0023F910 */

loc_0026F87A: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0026F880
 * Original: 0x0026F880 - 0x0026F983 (259 bytes, 95 insns)
 * CC: cdecl, 6 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0026F880(void)
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

loc_0026F880: ;
    edx = MEM32(ecx + 0x38);
    edx = MEM32(edx + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = edx + eax * 8;
    eax = MEM32(edi + 4);
    edx = MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(esp + 0x14);
    if (CMP_L(_fas, _fbs)) goto loc_0026F8C2; /* jl: less (signed <) */

loc_0026F8A2: ;
    if (CMP_G(_fas, _fbs)) goto loc_0026F8A8; /* jg: greater (signed >) */

loc_0026F8A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0026F8C2; /* jbe: below or equal (unsigned <=) */

loc_0026F8A8: ;
    edi = MEM32(esi);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = edi;
    ebx = MEM32(ecx + 0x38);
    ebx = MEM32(ebx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + edi * 8 + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx + edi * 8 + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0026F8A8; /* jg: greater (signed >) */

loc_0026F8B9: ;
    if (CMP_L(_fas, _fbs)) goto loc_0026F8E9; /* jl: less (signed <) */

loc_0026F8BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + edi * 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + edi * 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0026F8A8; /* ja: above (unsigned >) */

loc_0026F8C0: ;
    goto loc_0026F8E9;

loc_0026F8C2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + -4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0026F8E9; /* jg: greater (signed >) */

loc_0026F8C7: ;
    if (CMP_L(_fas, _fbs)) goto loc_0026F8D0; /* jl: less (signed <) */

loc_0026F8C9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + -8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0026F8E9; /* jae: above or equal (unsigned >=) */

loc_0026F8CE: ;
    edi = edi;

loc_0026F8D0: ;
    edi = MEM32(esi);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = edi;
    ebx = MEM32(ecx + 0x38);
    ebx = MEM32(ebx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + edi * 8 + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx + edi * 8 + -4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0026F8D0; /* jl: less (signed <) */

loc_0026F8E1: ;
    if (CMP_G(_fas, _fbs)) goto loc_0026F8E9; /* jg: greater (signed >) */

loc_0026F8E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + edi * 8 + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + edi * 8 + -8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0026F8D0; /* jb: below (unsigned <) */

loc_0026F8E9: ;
    edi = MEM32(esi);
    ebp = MEM32(esp + 0x20);
    MEM32(ebp) = edi;
    esi = MEM32(esi);
    edi = esi + -1;
    esi = MEM32(esp + 0x1C);
    MEM32(esi) = edi;
    ecx = MEM32(ecx + 0x38);
    esi = MEM32(ecx + 0x10);
    ebx = MEM32(esi + edi * 8);
    edi = MEM32(esi + edi * 8 + 4);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(edi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x0026F915u); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_0026F915: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x28) = eax;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0026F927; /* jge: greater or equal (signed >=) */

loc_0026F921: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0026F927: ;
    edx = MEM32(ebp);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + edx * 8);
    edx = MEM32(esi + edx * 8 + 4);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(edi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x0026F940u); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_0026F940: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x20) = eax;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0026F952; /* jge: greater or equal (signed >=) */

loc_0026F94C: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0026F952: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C89C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c89c0] */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0026F972; /* jp: parity */

loc_0026F963: ;
    eax = MEM32(esp + 0x14);
    fp_pop(); /* fstp st(0) */
    MEM32(eax) = 0;
    esp += 28; return; /* ret 24 */

loc_0026F972: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ecx = MEM32(esp + 0x14);
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0026F990
 * Original: 0x0026F990 - 0x0026FA25 (149 bytes, 44 insns)
 * CC: cdecl, 5 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0026F990(void)
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

loc_0026F990: ;
    esp = esp - 8;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x0026F9A5u); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_0026F9A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0026F9B7; /* jge: greater or equal (signed >=) */

loc_0026F9B1: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0026F9B7: ;
    eax = MEM32(esi + 0x38);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x0026F9CDu); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_0026F9CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0026F9DF; /* jge: greater or equal (signed >=) */

loc_0026F9D9: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0026F9DF: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 4); /* fdiv dword ptr [esp + 4] */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    PUSH32(esp, 0x0026F9FAu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0026F9FA: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edx = MEM32(esp + 0x18);
    fp_push(MEMF(esp + 4)); /* fld float */
    ecx = MEM32(esp + 0x1C);
    MEM32(edx) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;
    PUSH32(esp, 0x0026FA14u); RECOMP_ABI_CALL(0x00341916u, sub_00341916); /* call 0x00341916 */

loc_0026FA14: ;
    edx = MEM32(esp + 0x20);
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    POP32(esp, esi);
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    esp = esp + 8;
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0026FA30
 * Original: 0x0026FA30 - 0x0026FD8D (861 bytes, 298 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FA30(void)
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

loc_0026FA30: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x50);
    ecx = MEM32(esi + 0x54);
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(edx));
    ebx = ebx - edx;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, MEM8(esi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_0026FA96; /* jne: not equal / not zero */

loc_0026FA5A: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax + 0x10);
    edi = MEM32(ecx);
    ebp = MEM32(ecx + 4);
    edx = MEM32(eax + 8);
    eax = ecx;
    ecx = MEM32(eax + edx * 8 + -8);
    edx = MEM32(eax + edx * 8 + -4);
    eax = MEM32(esi + 0x58);
    MEM32(esp + 0x20) = ecx;
    ecx = eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esi + 0x5C);
    MEM32(esp + 0x18) = ecx;
    ecx = edx;
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(ebp) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x38) = edx;
    goto loc_0026FAD4;

loc_0026FA96: ;
    ecx = MEM32(esi + 0x38);
    ecx = MEM32(ecx + 0x10);
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 8);
    ebx = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    PUSH32(esp, ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026FAB6u); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_0026FAB6: ;
    ecx = MEM32(esi + 0x5C);
    ebx = MEM32(esp + 0x10);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi + 0x58);
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x38) = ecx;

loc_0026FAD4: ;
    MEM32(esp + 0x34) = eax;
    edx = MEM32(esp + 0x34);
    _cf = 0; /* logical op clears CF */
    edx = edx | MEM32(esp + 0x38);
    eax = MEM32(esp + 0x14);
    if ((edx != 0)) goto loc_0026FAF7; /* jne: not equal / not zero */

loc_0026FAE6: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x0026FAF2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0026FAF2: ;
    goto loc_0026FD01;

loc_0026FAF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0026FBC6; /* jl: less (signed <) */

loc_0026FAFF: ;
    if (CMP_G(_fas, _fbs)) goto loc_0026FB0B; /* jg: greater (signed >) */

loc_0026FB01: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0026FBC6; /* jbe: below or equal (unsigned <=) */

loc_0026FB0B: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0026FAE6; /* ja: above (unsigned >) */

loc_0026FB13: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x26FD90); /* switch: 4 entries, 3 targets */
    if (_jt == 0x0026FB1Au) goto loc_0026FB1A;
    if (_jt == 0x0026FB31u) goto loc_0026FB31;
    if (_jt == 0x0026FB81u) goto loc_0026FB81;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0026FB1A: ;
    ecx = MEM32(esi + 0x38);
    eax = MEM32(ecx + 8);
    edx = MEM32(esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0026FB2Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0026FB2C: ;
    goto loc_0026FD01;

loc_0026FB31: ;
    edx = MEM32(esp + 0x38);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(edi));
    ebx = ebx - edi;
    PUSH32(esp, ecx);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ebp) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0026FB4Bu); RECOMP_ABI_CALL(0x0024ECA0u, sub_0024ECA0); /* call 0x0024ECA0 */

loc_0026FB4B: ;
    ebx = MEM32(esp + 0x48);
    edx = MEM32(esp + 0x50);
    eax = MEM32(edx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edi)) >> 32) & 1);
    ebx = ebx + edi;
    edi = MEM32(esp + 0x38);
    { uint64_t _t = (uint64_t)(edi) + (uint64_t)(ebp) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edi = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0026FBE3; /* je: equal / zero */

loc_0026FB65: ;
    ecx = MEM32(esi + 0x38);
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + eax * 8 + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + eax * 8 + -4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0026FBE3; /* jg: greater (signed >) */

loc_0026FB71: ;
    if (CMP_L(_fas, _fbs)) goto loc_0026FB79; /* jl: less (signed <) */

loc_0026FB73: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + eax * 8 + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + eax * 8 + -8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0026FBE3; /* jae: above or equal (unsigned >=) */

loc_0026FB79: ;
    MEM32(edx) = 1;
    goto loc_0026FBE3;

loc_0026FB81: ;
    ecx = MEM32(esp + 0x38);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(edi));
    ebx = ebx - edi;
    PUSH32(esp, edx);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ebp) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0026FB9Bu); RECOMP_ABI_CALL(0x0024ECA0u, sub_0024ECA0); /* call 0x0024ECA0 */

loc_0026FB9B: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0026FBB8; /* je: equal / zero */

loc_0026FBA2: ;
    ebx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x34);
    edi = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x38);
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(ecx));
    ebx = ebx - ecx;
    { uint64_t _t = (uint64_t)(edi) - (uint64_t)(eax) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edi = (uint32_t)_t; }  /* sbb */
    goto loc_0026FBE3;

loc_0026FBB8: ;
    ebx = MEM32(esp + 0x34);
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edi)) >> 32) & 1);
    ebx = ebx + edi;
    edi = MEM32(esp + 0x38);
    { uint64_t _t = (uint64_t)(edi) + (uint64_t)(ebp) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edi = (uint32_t)_t; }  /* adc */
    goto loc_0026FBE3;

loc_0026FBC6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0026FBE1; /* jg: greater (signed >) */

loc_0026FBCA: ;
    if (CMP_L(_fas, _fbs)) goto loc_0026FBD0; /* jl: less (signed <) */

loc_0026FBCC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0026FBE1; /* jae: above or equal (unsigned >=) */

loc_0026FBD0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0026FBDCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0026FBDC: ;
    goto loc_0026FD01;

loc_0026FBE1: ;
    edi = eax;

loc_0026FBE3: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0026FD21; /* jl: less (signed <) */

loc_0026FBEF: ;
    if (CMP_G(_fas, _fbs)) goto loc_0026FBFB; /* jg: greater (signed >) */

loc_0026FBF1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x20) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0026FD21; /* jbe: below or equal (unsigned <=) */

loc_0026FBFB: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0026FCED; /* jne: not equal / not zero */

loc_0026FC05: ;
    eax = MEM32(esi + 0x38);
    ebp = MEM32(eax + 8);
    SET_LO8(edx, MEM8(esi + 0x20));
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x10) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_0026FC75; /* jne: not equal / not zero */

loc_0026FC1B: ;
    eax = ebx;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esp + 0x20)));
    eax = eax - MEM32(esp + 0x20);
    edx = edi;
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x0026FC2Cu); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_0026FC2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x3C) = eax;
    fp_push((double)SMEM32(esp + 0x3C)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0026FC3E; /* jge: greater or equal (signed >=) */

loc_0026FC38: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0026FC3E: ;
    edx = MEM32(esp + 0x20);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x24);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    edx = MEM32(esp + 0x1C);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x0026FC5Du); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_0026FC5D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x3C) = eax;
    fp_push((double)SMEM32(esp + 0x3C)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0026FC6F; /* jge: greater or equal (signed >=) */

loc_0026FC69: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0026FC6F: ;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0026FCC4;

loc_0026FC75: ;
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x0026FC84u); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_0026FC84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x3C) = eax;
    fp_push((double)SMEM32(esp + 0x3C)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0026FC96; /* jge: greater or equal (signed >=) */

loc_0026FC90: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0026FC96: ;
    eax = ebx;
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = edi;
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x0026FCA5u); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_0026FCA5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x34) = eax;
    fp_push((double)SMEM32(esp + 0x34)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0026FCB7; /* jge: greater or equal (signed >=) */

loc_0026FCB1: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0026FCB7: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    PUSH32(esp, 0x0026FCC0u); RECOMP_ABI_CALL(0x00341916u, sub_00341916); /* call 0x00341916 */

loc_0026FCC0: ;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */

loc_0026FCC4: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C89C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c89c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0026FCDF; /* jp: parity */

loc_0026FCD5: ;
    MEM32(esp + 0x3C) = 0;
    goto loc_0026FD5B;

loc_0026FCDF: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 0x3C); /* fdiv dword ptr [esp + 0x3c] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0026FD5B;

loc_0026FCED: ;
    edi = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edi + 0x94); PUSH32(esp, 0x0026FCF7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0026FCF7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0xA0); PUSH32(esp, 0x0026FD01u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0026FD01: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x30);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    POP32(esp, ebp);
    MEM32(ecx + 8) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    esp += 28; return; /* ret 24 */

loc_0026FD21: ;
    SET_LO8(eax, MEM8(esi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    edx = esp + 0x3C;
    eax = esp + 0x10;
    if (TEST_NZ(_fa, _fb)) goto loc_0026FD47; /* jne: not equal / not zero */

loc_0026FD30: ;
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0026FD45u); RECOMP_ABI_CALL(0x0026F880u, sub_0026F880); /* call 0x0026F880 */

loc_0026FD45: ;
    goto loc_0026FD57;

loc_0026FD47: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0026FD57u); RECOMP_ABI_CALL(0x0026F990u, sub_0026F990); /* call 0x0026F990 */

loc_0026FD57: ;
    ebp = MEM32(esp + 0x34);

loc_0026FD5B: ;
    edi = MEM32(esp + 0x3C);
    ebx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0026FD72u); RECOMP_ABI_CALL(0x0026F750u, sub_0026F750); /* call 0x0026F750 */

loc_0026FD72: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0026FD81u); RECOMP_ABI_CALL(0x0026F7F0u, sub_0026F7F0); /* call 0x0026F7F0 */

loc_0026FD81: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0026FDA0
 * Original: 0x0026FDA0 - 0x00270170 (976 bytes, 352 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0026FDA0(void)
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

loc_0026FDA0: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x50);
    ecx = MEM32(esi + 0x54);
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(edx));
    ebx = ebx - edx;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, MEM8(esi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_0026FE06; /* jne: not equal / not zero */

loc_0026FDCA: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax + 0x10);
    edi = MEM32(ecx);
    ebp = MEM32(ecx + 4);
    edx = MEM32(eax + 8);
    eax = ecx;
    ecx = MEM32(eax + edx * 8 + -8);
    edx = MEM32(eax + edx * 8 + -4);
    eax = MEM32(esi + 0x58);
    MEM32(esp + 0x20) = ecx;
    ecx = eax;
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edi)) >> 32) & 1);
    ecx = ecx + edi;
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esi + 0x5C);
    MEM32(esp + 0x18) = ecx;
    ecx = edx;
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(ebp) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x34) = edx;
    goto loc_0026FE44;

loc_0026FE06: ;
    ecx = MEM32(esi + 0x38);
    ecx = MEM32(ecx + 0x10);
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 8);
    ebx = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    PUSH32(esp, ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026FE26u); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_0026FE26: ;
    ecx = MEM32(esi + 0x5C);
    ebx = MEM32(esp + 0x10);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi + 0x58);
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x34) = ecx;

loc_0026FE44: ;
    MEM32(esp + 0x30) = eax;
    edx = MEM32(esp + 0x30);
    _cf = 0; /* logical op clears CF */
    edx = edx | MEM32(esp + 0x34);
    eax = MEM32(esp + 0x14);
    if ((edx != 0)) goto loc_0026FE67; /* jne: not equal / not zero */

loc_0026FE56: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xAC); PUSH32(esp, 0x0026FE62u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0026FE62: ;
    goto loc_00270085;

loc_0026FE67: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0026FF47; /* jl: less (signed <) */

loc_0026FE6F: ;
    if (CMP_G(_fas, _fbs)) goto loc_0026FE7B; /* jg: greater (signed >) */

loc_0026FE71: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0026FF47; /* jbe: below or equal (unsigned <=) */

loc_0026FE7B: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0026FE56; /* ja: above (unsigned >) */

loc_0026FE83: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x270108); /* switch: 4 entries, 3 targets */
    if (_jt == 0x0026FE8Au) goto loc_0026FE8A;
    if (_jt == 0x0026FEB2u) goto loc_0026FEB2;
    if (_jt == 0x0026FF02u) goto loc_0026FF02;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0026FE8A: ;
    ecx = MEM32(esi + 0x38);
    eax = MEM32(ecx + 8);
    edx = MEM32(esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x0026FE9Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0026FE9C: ;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0026FEA6u); RECOMP_ABI_CALL(0x0023B160u, sub_0023B160); /* call 0x0023B160 */

loc_0026FEA6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    esp += 24; return; /* ret 20 */

loc_0026FEB2: ;
    edx = MEM32(esp + 0x34);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(edi));
    ebx = ebx - edi;
    PUSH32(esp, ecx);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ebp) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0026FECCu); RECOMP_ABI_CALL(0x0024ECA0u, sub_0024ECA0); /* call 0x0024ECA0 */

loc_0026FECC: ;
    ebx = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x4C);
    eax = MEM32(edx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edi)) >> 32) & 1);
    ebx = ebx + edi;
    edi = MEM32(esp + 0x34);
    { uint64_t _t = (uint64_t)(edi) + (uint64_t)(ebp) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edi = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0026FF64; /* je: equal / zero */

loc_0026FEE6: ;
    ecx = MEM32(esi + 0x38);
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + eax * 8 + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + eax * 8 + -4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0026FF64; /* jg: greater (signed >) */

loc_0026FEF2: ;
    if (CMP_L(_fas, _fbs)) goto loc_0026FEFA; /* jl: less (signed <) */

loc_0026FEF4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + eax * 8 + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + eax * 8 + -8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0026FF64; /* jae: above or equal (unsigned >=) */

loc_0026FEFA: ;
    MEM32(edx) = 1;
    goto loc_0026FF64;

loc_0026FF02: ;
    ecx = MEM32(esp + 0x34);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(edi));
    ebx = ebx - edi;
    PUSH32(esp, edx);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ebp) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0026FF1Cu); RECOMP_ABI_CALL(0x0024ECA0u, sub_0024ECA0); /* call 0x0024ECA0 */

loc_0026FF1C: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0026FF39; /* je: equal / zero */

loc_0026FF23: ;
    ebx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x30);
    edi = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x34);
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(ecx));
    ebx = ebx - ecx;
    { uint64_t _t = (uint64_t)(edi) - (uint64_t)(eax) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edi = (uint32_t)_t; }  /* sbb */
    goto loc_0026FF64;

loc_0026FF39: ;
    ebx = MEM32(esp + 0x30);
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edi)) >> 32) & 1);
    ebx = ebx + edi;
    edi = MEM32(esp + 0x34);
    { uint64_t _t = (uint64_t)(edi) + (uint64_t)(ebp) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edi = (uint32_t)_t; }  /* adc */
    goto loc_0026FF64;

loc_0026FF47: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0026FF62; /* jg: greater (signed >) */

loc_0026FF4B: ;
    if (CMP_L(_fas, _fbs)) goto loc_0026FF51; /* jl: less (signed <) */

loc_0026FF4D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0026FF62; /* jae: above or equal (unsigned >=) */

loc_0026FF51: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x0026FF5Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0026FF5D: ;
    goto loc_00270085;

loc_0026FF62: ;
    edi = eax;

loc_0026FF64: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_002700AB; /* jl: less (signed <) */

loc_0026FF70: ;
    if (CMP_G(_fas, _fbs)) goto loc_0026FF7C; /* jg: greater (signed >) */

loc_0026FF72: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x20) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_002700AB; /* jbe: below or equal (unsigned <=) */

loc_0026FF7C: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00270071; /* jne: not equal / not zero */

loc_0026FF86: ;
    eax = MEM32(esi + 0x38);
    ebp = MEM32(eax + 8);
    SET_LO8(edx, MEM8(esi + 0x20));
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x10) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_0026FFF6; /* jne: not equal / not zero */

loc_0026FF9C: ;
    eax = ebx;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esp + 0x20)));
    eax = eax - MEM32(esp + 0x20);
    edx = edi;
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x0026FFADu); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_0026FFAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x38) = eax;
    fp_push((double)SMEM32(esp + 0x38)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0026FFBF; /* jge: greater or equal (signed >=) */

loc_0026FFB9: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0026FFBF: ;
    edx = MEM32(esp + 0x20);
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x24);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    edx = MEM32(esp + 0x1C);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x0026FFDEu); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_0026FFDE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x38) = eax;
    fp_push((double)SMEM32(esp + 0x38)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0026FFF0; /* jge: greater or equal (signed >=) */

loc_0026FFEA: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0026FFF0: ;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00270045;

loc_0026FFF6: ;
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x00270005u); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_00270005: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x38) = eax;
    fp_push((double)SMEM32(esp + 0x38)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00270017; /* jge: greater or equal (signed >=) */

loc_00270011: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00270017: ;
    eax = ebx;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    edx = edi;
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x00270026u); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_00270026: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x30) = eax;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00270038; /* jge: greater or equal (signed >=) */

loc_00270032: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00270038: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    PUSH32(esp, 0x00270041u); RECOMP_ABI_CALL(0x00341916u, sub_00341916); /* call 0x00341916 */

loc_00270041: ;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */

loc_00270045: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C89C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c89c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00270063; /* jp: parity */

loc_00270056: ;
    MEM32(esp + 0x38) = 0;
    goto loc_002700E5;

loc_00270063: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 0x38); /* fdiv dword ptr [esp + 0x38] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_002700E5;

loc_00270071: ;
    edi = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edi + 0x94); PUSH32(esp, 0x0027007Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027007B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0xAC); PUSH32(esp, 0x00270085u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270085: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x2C);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    POP32(esp, ebp);
    MEM32(ecx + 0xC) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    esp += 24; return; /* ret 20 */

loc_002700AB: ;
    SET_LO8(eax, MEM8(esi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    edx = esp + 0x38;
    eax = esp + 0x10;
    if (TEST_NZ(_fa, _fb)) goto loc_002700D1; /* jne: not equal / not zero */

loc_002700BA: ;
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x002700CFu); RECOMP_ABI_CALL(0x0026F880u, sub_0026F880); /* call 0x0026F880 */

loc_002700CF: ;
    goto loc_002700E1;

loc_002700D1: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x002700E1u); RECOMP_ABI_CALL(0x0026F990u, sub_0026F990); /* call 0x0026F990 */

loc_002700E1: ;
    ebp = MEM32(esp + 0x30);

loc_002700E5: ;
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002700FCu); RECOMP_ABI_CALL(0x0026F7F0u, sub_0026F7F0); /* call 0x0026F7F0 */

loc_002700FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    esp += 24; return; /* ret 20 */

    _cf = (int)((((uint64_t)(MEM8(edx + -872405250)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(edx + -872405250) = MEM8(edx + -872405250) + HI8(edx);
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0027012Eu); RECOMP_ABI_CALL(0x0015FDF0u, sub_0015FDF0); /* call 0x0015FDF0 */

loc_0027012E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00270161; /* jne: not equal / not zero */

loc_00270132: ;
    eax = MEM32(0x5BDED0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00270141; /* je: equal / zero */

loc_0027013E: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00270141: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0027015D; /* je: equal / zero */

loc_00270148: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027015D; /* jne: not equal / not zero */

loc_00270158: ;
    PUSH32(esp, 0x0027015Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027015D: ;
    MEM32(esi + 0x1C) = edi;
    POP32(esp, edi);

loc_00270161: ;
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
 * sub_00270007
 * Original: 0x00270007 - 0x00270170 (361 bytes, 142 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270007(void)
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

loc_00270007: ;
    MEM32(esp + 0x38) = eax;
    fp_push((double)SMEM32(esp + 0x38)); /* fild */
    if (_flags /* jge: greater or equal (signed >=) */) goto loc_00270017;

loc_00270011: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00270017: ;
    eax = ebx;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    edx = edi;
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x00270026u); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_00270026: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x30) = eax;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00270038; /* jge: greater or equal (signed >=) */

loc_00270032: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00270038: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    PUSH32(esp, 0x00270041u); RECOMP_ABI_CALL(0x00341916u, sub_00341916); /* call 0x00341916 */

loc_00270041: ;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C89C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c89c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00270063; /* jp: parity */

loc_00270056: ;
    MEM32(esp + 0x38) = 0;
    goto loc_002700E5;

loc_00270063: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 0x38); /* fdiv dword ptr [esp + 0x38] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_002700E5;

    edi = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edi + 0x94); PUSH32(esp, 0x0027007Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027007B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0xAC); PUSH32(esp, 0x00270085u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270085: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x2C);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    POP32(esp, ebp);
    MEM32(ecx + 0xC) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 24; return; /* ret 20 */

    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x002700CFu); RECOMP_ABI_CALL(0x0026F880u, sub_0026F880); /* call 0x0026F880 */

loc_002700CF: ;
    goto loc_002700E1;

loc_002700D1: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x002700E1u); RECOMP_ABI_CALL(0x0026F990u, sub_0026F990); /* call 0x0026F990 */

loc_002700E1: ;
    ebp = MEM32(esp + 0x30);

loc_002700E5: ;
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002700FCu); RECOMP_ABI_CALL(0x0026F7F0u, sub_0026F7F0); /* call 0x0026F7F0 */

loc_002700FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 24; return; /* ret 20 */

    MEM8(edx + -872405250) = MEM8(edx + -872405250) + HI8(edx);
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0027012Eu); RECOMP_ABI_CALL(0x0015FDF0u, sub_0015FDF0); /* call 0x0015FDF0 */

loc_0027012E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00270161; /* jne: not equal / not zero */

loc_00270132: ;
    eax = MEM32(0x5BDED0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00270141; /* je: equal / zero */

loc_0027013E: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00270141: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027015D; /* je: equal / zero */

loc_00270148: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027015D; /* jne: not equal / not zero */

loc_00270158: ;
    PUSH32(esp, 0x0027015Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027015D: ;
    MEM32(esi + 0x1C) = edi;
    POP32(esp, edi);

loc_00270161: ;
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
 * sub_0027001F
 * Original: 0x0027001F - 0x00270170 (337 bytes, 135 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027001F(void)
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

loc_0027001F: ;
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x00270026u); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_00270026: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x30) = eax;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00270038; /* jge: greater or equal (signed >=) */

loc_00270032: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00270038: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    PUSH32(esp, 0x00270041u); RECOMP_ABI_CALL(0x00341916u, sub_00341916); /* call 0x00341916 */

loc_00270041: ;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C89C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c89c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00270063; /* jp: parity */

loc_00270056: ;
    MEM32(esp + 0x38) = 0;
    goto loc_002700E5;

loc_00270063: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 0x38); /* fdiv dword ptr [esp + 0x38] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_002700E5;

    edi = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edi + 0x94); PUSH32(esp, 0x0027007Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027007B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0xAC); PUSH32(esp, 0x00270085u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270085: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x2C);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    POP32(esp, ebp);
    MEM32(ecx + 0xC) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 24; return; /* ret 20 */

    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x002700CFu); RECOMP_ABI_CALL(0x0026F880u, sub_0026F880); /* call 0x0026F880 */

loc_002700CF: ;
    goto loc_002700E1;

loc_002700D1: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x002700E1u); RECOMP_ABI_CALL(0x0026F990u, sub_0026F990); /* call 0x0026F990 */

loc_002700E1: ;
    ebp = MEM32(esp + 0x30);

loc_002700E5: ;
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002700FCu); RECOMP_ABI_CALL(0x0026F7F0u, sub_0026F7F0); /* call 0x0026F7F0 */

loc_002700FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 24; return; /* ret 20 */

    MEM8(edx + -872405250) = MEM8(edx + -872405250) + HI8(edx);
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0027012Eu); RECOMP_ABI_CALL(0x0015FDF0u, sub_0015FDF0); /* call 0x0015FDF0 */

loc_0027012E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00270161; /* jne: not equal / not zero */

loc_00270132: ;
    eax = MEM32(0x5BDED0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00270141; /* je: equal / zero */

loc_0027013E: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00270141: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027015D; /* je: equal / zero */

loc_00270148: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027015D; /* jne: not equal / not zero */

loc_00270158: ;
    PUSH32(esp, 0x0027015Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027015D: ;
    MEM32(esi + 0x1C) = edi;
    POP32(esp, edi);

loc_00270161: ;
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
 * sub_00270028
 * Original: 0x00270028 - 0x00270170 (328 bytes, 132 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270028(void)
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

loc_00270028: ;
    MEM32(esp + 0x30) = eax;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    if (_flags /* jge: greater or equal (signed >=) */) goto loc_00270038;

loc_00270032: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00270038: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    PUSH32(esp, 0x00270041u); RECOMP_ABI_CALL(0x00341916u, sub_00341916); /* call 0x00341916 */

loc_00270041: ;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C89C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c89c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00270063; /* jp: parity */

loc_00270056: ;
    MEM32(esp + 0x38) = 0;
    goto loc_002700E5;

loc_00270063: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 0x38); /* fdiv dword ptr [esp + 0x38] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_002700E5;

    edi = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edi + 0x94); PUSH32(esp, 0x0027007Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027007B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0xAC); PUSH32(esp, 0x00270085u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270085: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x2C);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    POP32(esp, ebp);
    MEM32(ecx + 0xC) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 24; return; /* ret 20 */

    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x002700CFu); RECOMP_ABI_CALL(0x0026F880u, sub_0026F880); /* call 0x0026F880 */

loc_002700CF: ;
    goto loc_002700E1;

loc_002700D1: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x002700E1u); RECOMP_ABI_CALL(0x0026F990u, sub_0026F990); /* call 0x0026F990 */

loc_002700E1: ;
    ebp = MEM32(esp + 0x30);

loc_002700E5: ;
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002700FCu); RECOMP_ABI_CALL(0x0026F7F0u, sub_0026F7F0); /* call 0x0026F7F0 */

loc_002700FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 24; return; /* ret 20 */

    MEM8(edx + -872405250) = MEM8(edx + -872405250) + HI8(edx);
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0027012Eu); RECOMP_ABI_CALL(0x0015FDF0u, sub_0015FDF0); /* call 0x0015FDF0 */

loc_0027012E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00270161; /* jne: not equal / not zero */

loc_00270132: ;
    eax = MEM32(0x5BDED0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00270141; /* je: equal / zero */

loc_0027013E: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00270141: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027015D; /* je: equal / zero */

loc_00270148: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027015D; /* jne: not equal / not zero */

loc_00270158: ;
    PUSH32(esp, 0x0027015Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027015D: ;
    MEM32(esi + 0x1C) = edi;
    POP32(esp, edi);

loc_00270161: ;
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
 * sub_002700D7
 * Original: 0x002700D7 - 0x00270170 (153 bytes, 72 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002700D7(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002700D7: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x002700E1u); RECOMP_ABI_CALL(0x0026F990u, sub_0026F990); /* call 0x0026F990 */

loc_002700E1: ;
    ebp = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002700FCu); RECOMP_ABI_CALL(0x0026F7F0u, sub_0026F7F0); /* call 0x0026F7F0 */

loc_002700FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 24; return; /* ret 20 */

    MEM8(edx + -872405250) = MEM8(edx + -872405250) + HI8(edx);
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0027012Eu); RECOMP_ABI_CALL(0x0015FDF0u, sub_0015FDF0); /* call 0x0015FDF0 */

loc_0027012E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00270161; /* jne: not equal / not zero */

loc_00270132: ;
    eax = MEM32(0x5BDED0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00270141; /* je: equal / zero */

loc_0027013E: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00270141: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027015D; /* je: equal / zero */

loc_00270148: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027015D; /* jne: not equal / not zero */

loc_00270158: ;
    PUSH32(esp, 0x0027015Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027015D: ;
    MEM32(esi + 0x1C) = edi;
    POP32(esp, edi);

loc_00270161: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00270120
 * Original: 0x00270120 - 0x00270170 (80 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270120: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0027012Eu); RECOMP_ABI_CALL(0x0015FDF0u, sub_0015FDF0); /* call 0x0015FDF0 */

loc_0027012E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00270161; /* jne: not equal / not zero */

loc_00270132: ;
    eax = MEM32(0x5BDED0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00270141; /* je: equal / zero */

loc_0027013E: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00270141: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027015D; /* je: equal / zero */

loc_00270148: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027015D; /* jne: not equal / not zero */

loc_00270158: ;
    PUSH32(esp, 0x0027015Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027015D: ;
    MEM32(esi + 0x1C) = edi;
    POP32(esp, edi);

loc_00270161: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00270170
 * Original: 0x00270170 - 0x002701D6 (102 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00270170: ;
    eax = MEM32(0x5BD9C8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00270182u); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_00270182: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002701D4; /* je: equal / zero */

loc_00270186: ;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00270199; /* jge: greater or equal (signed >=) */

loc_00270193: ;
    esi = MEM32(edi + 8);
    MEM32(ebx + 8) = esi;

loc_00270199: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002701B9; /* jl: less (signed <) */

loc_0027019E: ;
    eax = esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_002701B9; /* jl: less (signed <) */

loc_002701A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002701AF; /* jg: greater (signed >) */

loc_002701AA: ;
    MEM32(edi + 8) = eax;
    goto loc_002701B9;

loc_002701AF: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x002701B9u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_002701B9: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002701D2; /* je: equal / zero */

loc_002701C0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_002701D2; /* jl: less (signed <) */

loc_002701C4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002701D2; /* jge: greater or equal (signed >=) */

loc_002701C8: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(esp + 0x18);
    MEM32(ecx + esi * 4) = edx;

loc_002701D2: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002701D4: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002701E0
 * Original: 0x002701E0 - 0x002702CF (239 bytes, 92 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002701E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002701E0: ;
    esp = esp - 0xC;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x10);
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_002702C7; /* je: equal / zero */

loc_002701FD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002702C7; /* je: equal / zero */

loc_00270205: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0027020Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027020C: ;
    ecx = MEM32(ebx + 0x10);
    edi = eax;
    MEM32(esp + 0x10) = ecx;
    ecx = ebp;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0x00270220u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00270220: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270226u); RECOMP_ABI_CALL(0x001DECD0u, sub_001DECD0); /* call 0x001DECD0 */

loc_00270226: ;
    ecx = MEM32(esp + 0x14);
    esp = esp + 4;
    esi = eax;
    eax = MEM32(ebx + 0x18);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0027023Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027023E: ;
    eax = MEM32(esp + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00270271; /* jbe: below or equal (unsigned <=) */

loc_00270248: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x00270253u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270253: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00270268u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270268: ;
    eax = MEM32(esp + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00270248; /* jb: below (unsigned <) */

loc_00270271: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x0027027Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027027B: ;
    ecx = MEM32(esi + 4);
    edi = MEM32(esp + 0x20);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ecx;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002702A2; /* je: equal / zero */

loc_0027028D: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002702A2; /* jne: not equal / not zero */

loc_0027029D: ;
    PUSH32(esp, 0x002702A2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002702A2: ;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(edi + 0xC) = esi;
    PUSH32(esp, 0x002702AEu); RECOMP_ABI_CALL(0x0029C1C0u, sub_0029C1C0); /* call 0x0029C1C0 */

loc_002702AE: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002702C5; /* jne: not equal / not zero */

loc_002702BE: ;
    ecx = esi;
    PUSH32(esp, 0x002702C5u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002702C5: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002702C7: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002702D0
 * Original: 0x002702D0 - 0x002705A0 (720 bytes, 245 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002702D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002702D0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(0x5BDA90);
    ecx = ebp;
    MEM32(esp + 0x14) = esi;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x002702EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002702EE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270597; /* jne: not equal / not zero */

loc_002702F6: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x002702FEu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_002702FE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270304u); RECOMP_ABI_CALL(0x0029FF60u, sub_0029FF60); /* call 0x0029FF60 */

loc_00270304: ;
    edi = eax;
    esp = esp + 4;
    ecx = esi;
    MEM32(esp + 0x20) = edi;
    PUSH32(esp, 0x00270314u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00270314: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027031Au); RECOMP_ABI_CALL(0x00297A00u, sub_00297A00); /* call 0x00297A00 */

loc_0027031A: ;
    ecx = MEM32(ebp + 0x20);
    ebx = eax;
    eax = MEM32(ecx + 8);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x14) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_00270487; /* je: equal / zero */

loc_00270331: ;
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x0027033Au); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_0027033A: ;
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(eax + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0027043A; /* jle: less or equal (signed <=) */

loc_00270352: ;
    edx = MEM32(eax + 0x10);
    esi = MEM32(edx + edi * 4);
    eax = MEM32(0x5BE600);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00270365u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00270365: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002704B0; /* je: equal / zero */

loc_0027036D: ;
    ecx = MEM32(ebp + 0x20);
    edx = MEM32(ecx + 0x10);
    esi = MEM32(edx + edi * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027037D; /* je: equal / zero */

loc_0027037A: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027037D: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002703D2; /* jne: not equal / not zero */

loc_00270384: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002703D2; /* jne: not equal / not zero */

loc_0027038A: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002703C0; /* je: equal / zero */

loc_00270392: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0027039Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027039A: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002703C0; /* je: equal / zero */

loc_002703A2: ;
    ecx = MEM32(esi + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027042E; /* jne: not equal / not zero */

loc_002703B7: ;
    ecx = esi;
    PUSH32(esp, 0x002703BEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002703BE: ;
    goto loc_0027042E;

loc_002703C0: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x002703C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002703C8: ;
    eax = MEM32(eax);
    MEM32(esp + 0x10) = eax;
    ecx = ebx;
    goto loc_002703D6;

loc_002703D2: ;
    ecx = MEM32(esp + 0x20);

loc_002703D6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002703DCu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_002703DC: ;
    ebx = MEM32(ebp + 0x20);
    ecx = MEM32(ebx + 0x10);
    ecx = MEM32(ecx + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002703FE; /* je: equal / zero */

loc_002703E9: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002703FE; /* jne: not equal / not zero */

loc_002703F9: ;
    PUSH32(esp, 0x002703FEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002703FE: ;
    ecx = ebx;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00270406u); RECOMP_ABI_CALL(0x001E7BB0u, sub_001E7BB0); /* call 0x001E7BB0 */

loc_00270406: ;
    eax = MEM32(ebx + 0x10);
    edx = MEM32(ebx + 8);
    MEM32(eax + edx * 4) = 0;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027042A; /* jne: not equal / not zero */

loc_00270423: ;
    ecx = esi;
    PUSH32(esp, 0x0027042Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027042A: ;
    ebx = MEM32(esp + 0x14);

loc_0027042E: ;
    eax = MEM32(ebp + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00270352; /* jl: less (signed <) */

loc_0027043A: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00270475; /* jle: less or equal (signed <=) */

loc_00270441: ;
    ecx = MEM32(ebx + 0x10);
    edi = MEM32(ecx);
    esi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0027046B; /* jle: less or equal (signed <=) */

loc_0027044F: ;
    /* nop */

loc_00270450: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(esp + 0x18);
    eax = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00270463u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270463: ;
    eax = MEM32(ebx + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00270450; /* jl: less (signed <) */

loc_0027046B: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00270475u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00270475: ;
    ecx = MEM32(ebp + 0x20);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00270331; /* jne: not equal / not zero */

loc_00270483: ;
    edi = MEM32(esp + 0x20);

loc_00270487: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00270564; /* je: equal / zero */

loc_00270492: ;
    edx = MEM32(edi + 0x10);
    esi = MEM32(edx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002704AC; /* je: equal / zero */

loc_0027049B: ;
    eax = MEM32(0x5BE600);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002704A8u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_002704A8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002704F6; /* jne: not equal / not zero */

loc_002704AC: ;
    esi = 0; /* xor self */
    goto loc_00270502;

loc_002704B0: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002704BAu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_002704BA: ;
    esi = MEM32(ebp + 0x20);
    ecx = MEM32(esi + 0x10);
    ecx = MEM32(ecx + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002704DC; /* je: equal / zero */

loc_002704C7: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002704DC; /* jne: not equal / not zero */

loc_002704D7: ;
    PUSH32(esp, 0x002704DCu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002704DC: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002704E4u); RECOMP_ABI_CALL(0x001E7BB0u, sub_001E7BB0); /* call 0x001E7BB0 */

loc_002704E4: ;
    edx = MEM32(esi + 8);
    eax = MEM32(esi + 0x10);
    MEM32(eax + edx * 4) = 0;
    goto loc_0027042E;

loc_002704F6: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00270502u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00270502: ;
    edi = MEM32(esp + 0x20);
    ecx = MEM32(edi + 0x10);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00270524; /* je: equal / zero */

loc_0027050F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00270524; /* jne: not equal / not zero */

loc_0027051F: ;
    PUSH32(esp, 0x00270524u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00270524: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0027052Du); RECOMP_ABI_CALL(0x001E7BB0u, sub_001E7BB0); /* call 0x001E7BB0 */

loc_0027052D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edx = MEM32(edi + 8);
    eax = MEM32(edi + 0x10);
    MEM32(eax + edx * 4) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00270555; /* je: equal / zero */

loc_0027053E: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00270555; /* jne: not equal / not zero */

loc_0027054E: ;
    ecx = esi;
    PUSH32(esp, 0x00270555u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00270555: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = MEM32(esp + 0x20);
    if (TEST_NZ(_fa, _fb)) goto loc_00270492; /* jne: not equal / not zero */

loc_00270564: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027057F; /* je: equal / zero */

loc_00270568: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027057F; /* jne: not equal / not zero */

loc_00270578: ;
    ecx = ebx;
    PUSH32(esp, 0x0027057Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027057F: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_00270597; /* jne: not equal / not zero */

loc_00270590: ;
    ecx = edi;
    PUSH32(esp, 0x00270597u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00270597: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002705A0
 * Original: 0x002705A0 - 0x0027084B (683 bytes, 234 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002705A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002705A0: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00270842; /* je: equal / zero */

loc_002705B6: ;
    ecx = MEM32(esp + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270842; /* je: equal / zero */

loc_002705C2: ;
    eax = MEM32(esp + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270842; /* je: equal / zero */

loc_002705CE: ;
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x14), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270842; /* jne: not equal / not zero */

loc_002705D8: ;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270842; /* jne: not equal / not zero */

loc_002705E2: ;
    edx = MEM32(eax + 8);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x28) = edx;
    if (CMP_BE(_fa & _fb, 0)) goto loc_00270628; /* jbe: below or equal (unsigned <=) */

loc_002705F4: ;
    goto loc_00270600;

loc_002705F6: ;
    eax = MEM32(esp + 0x44);
    /* nop */

loc_00270600: ;
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + ebp * 4);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00270611u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270611: ;
    ecx = edi + eax + -2;
    eax = MEM32(esp + 0x28);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x20) = ecx;
    edi = ecx;
    if (CMP_B(_fa, _fb)) goto loc_002705F6; /* jb: below (unsigned <) */

loc_00270624: ;
    ecx = MEM32(esp + 0x40);

loc_00270628: ;
    eax = MEM32(ecx + 0x18);
    ecx = MEM32(ebx + 0xC);
    edx = MEM32(ecx);
    edi = edi + eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x20) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0027063Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027063D: ;
    eax = MEM32(eax);
    ecx = esi;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0027064Au); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027064A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270650u); RECOMP_ABI_CALL(0x001DECD0u, sub_001DECD0); /* call 0x001DECD0 */

loc_00270650: ;
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ebp = eax;
    edx = MEM32(ebp);
    PUSH32(esp, 0);
    eax = edi + edi * 2;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0027066Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027066A: ;
    edx = MEM32(esp + 0x40);
    eax = MEM32(edx + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x2C);
    eax = eax + eax * 2;
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_BE(_fa & _fb, 0)) goto loc_002706A3; /* jbe: below or equal (unsigned <=) */

loc_00270686: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0027069Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027069A: ;
    eax = MEM32(esp + 0x24);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00270686; /* jb: below (unsigned <) */

loc_002706A3: ;
    edx = MEM32(ebx + 0x1C);
    edi = eax;
    eax = MEM32(ebx + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x28);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x24) = ecx;
    if (CMP_BE(_fa & _fb, 0)) goto loc_002707E2; /* jbe: below or equal (unsigned <=) */

loc_002706C5: ;
    goto loc_002706D0;

loc_002706C7: ;
    ecx = MEM32(esp + 0x30);
    goto loc_002706D0;

    /* nop */

loc_002706D0: ;
    edx = MEM32(esp + 0x44);
    eax = MEM32(edx + 0x10);
    edx = MEM32(esp + 0x24);
    eax = MEM32(eax + edx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x10) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_0027071C; /* jae: above or equal (unsigned >=) */

loc_002706EA: ;
    /* nop */

loc_002706F0: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x002706FFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002706FF: ;
    ecx = MEM32(esp + 0x18);
    ecx = ecx + eax;
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esp + 0x2C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_B(_fa, _fb)) goto loc_002706F0; /* jb: below (unsigned <) */

loc_0027071A: ;
    eax = ecx;

loc_0027071C: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x34) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x0027072Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027072B: ;
    eax = eax - 2;
    MEM32(esp + 0x34) = eax;
    eax = 0;
    MEM32(esp + 0x10) = eax;
    if ((eax == 0)) goto loc_002707CD; /* je: equal / zero */

loc_00270741: ;
    goto loc_00270747;

loc_00270743: ;
    eax = MEM32(esp + 0x10);

loc_00270747: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00270783; /* jne: not equal / not zero */

loc_0027074B: ;
    ecx = MEM32(esp + 0x18);
    ebx = ecx + eax;
    MEM32(esp + 0x2C) = 3;
    /* nop */

loc_00270760: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00270774u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270774: ;
    eax = MEM32(esp + 0x2C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = eax;
    if ((_fa != 0)) goto loc_00270760; /* jne: not equal / not zero */

loc_00270781: ;
    goto loc_002707B4;

loc_00270783: ;
    edx = MEM32(esp + 0x18);
    ebx = edx + eax + 2;
    MEM32(esp + 0x2C) = 3;

loc_00270793: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x002707A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002707A7: ;
    eax = MEM32(esp + 0x2C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = eax;
    if ((_fa != 0)) goto loc_00270793; /* jne: not equal / not zero */

loc_002707B4: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x34);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00270743; /* jb: below (unsigned <) */

loc_002707C9: ;
    ebx = MEM32(esp + 0x3C);

loc_002707CD: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_B(_fa, _fb)) goto loc_002706C7; /* jb: below (unsigned <) */

loc_002707E2: ;
    ecx = MEM32(ebp + 4);
    esi = MEM32(esp + 0x40);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 4) = ecx;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00270809; /* je: equal / zero */

loc_002707F4: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00270809; /* jne: not equal / not zero */

loc_00270804: ;
    PUSH32(esp, 0x00270809u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00270809: ;
    ecx = MEM32(esp + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEM32(esi + 0xC) = ebp;
    eax = MEM32(esi);
    PUSH32(esp, 3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x0027081Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027081F: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x0027082Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027082A: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00270841; /* jne: not equal / not zero */

loc_0027083A: ;
    ecx = ebp;
    PUSH32(esp, 0x00270841u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00270841: ;
    POP32(esp, ebp);

loc_00270842: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00270850
 * Original: 0x00270850 - 0x00270A1C (460 bytes, 175 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270850(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00270850: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00270A15; /* je: equal / zero */

loc_00270862: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00270A14; /* je: equal / zero */

loc_0027086F: ;
    edx = MEM32(ecx + 0x14);
    eax = 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270A14; /* jne: not equal / not zero */

loc_0027087F: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270A14; /* jne: not equal / not zero */

loc_00270888: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00270A14; /* jne: not equal / not zero */

loc_00270893: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00270A14; /* jne: not equal / not zero */

loc_0027089E: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002708AE; /* je: equal / zero */

loc_002708A6: ;
    eax = MEM32(eax + 8);
    eax = eax + eax * 2;
    goto loc_002708B4;

loc_002708AE: ;
    eax = MEM32(ecx + 0xC);
    eax = MEM32(eax + 0xC);

loc_002708B4: ;
    edx = MEM32(esi + 0xC);
    ecx = MEM32(ecx + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = MEM32(edx + 0xC);
    edx = MEM32(ecx);
    eax = eax + ebp;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x002708CAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002708CA: ;
    eax = MEM32(eax);
    ecx = ebx;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x002708D7u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_002708D7: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x002708E9u); RECOMP_ABI_CALL(0x0013D3D0u, sub_0013D3D0); /* call 0x0013D3D0 */

loc_002708E9: ;
    eax = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x1C);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00270902u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270902: ;
    edx = MEM32(esi + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x1C) = edx;
    if (CMP_BE(_fa & _fb, 0)) goto loc_00270929; /* jbe: below or equal (unsigned <=) */

loc_0027090F: ;
    /* nop */

loc_00270910: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(ebx);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x00270924u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270924: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00270910; /* jb: below (unsigned <) */

loc_00270929: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(esp + 0x14);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x24) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_002709CB; /* jae: above or equal (unsigned >=) */

loc_00270946: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00270967; /* je: equal / zero */

loc_0027094E: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(esp + 0x18);
    eax = MEM32(edx + eax * 4);
    eax = eax + eax * 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00270967; /* je: equal / zero */

loc_0027095F: ;
    /* nop */

loc_00270960: ;
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270960; /* jne: not equal / not zero */

loc_00270967: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(ebx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0027097Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027097B: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(ebx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00270991u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270991: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(ebx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x002709A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002709A7: ;
    eax = MEM32(esp + 0x2C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002709C1; /* je: equal / zero */

loc_002709B1: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(eax + 8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002709CB; /* je: equal / zero */

loc_002709C1: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00270946; /* jb: below (unsigned <) */

loc_002709CB: ;
    esi = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002709D7u); RECOMP_ABI_CALL(0x002997A0u, sub_002997A0); /* call 0x002997A0 */

loc_002709D7: ;
    ebx = MEM32(esi);
    eax = 0xAAAAAAABu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x14);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x94); PUSH32(esp, 0x002709F1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002709F1: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x002709FBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002709FB: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00270A12; /* jne: not equal / not zero */

loc_00270A0B: ;
    ecx = edi;
    PUSH32(esp, 0x00270A12u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00270A12: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00270A14: ;
    POP32(esp, esi);

loc_00270A15: ;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00270A20
 * Original: 0x00270A20 - 0x00270B77 (343 bytes, 124 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270A20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00270A20: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    MEM32(esp + 0x14) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00270B6F; /* je: equal / zero */

loc_00270A37: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00270B6F; /* je: equal / zero */

loc_00270A43: ;
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270B6F; /* jne: not equal / not zero */

loc_00270A4D: ;
    ecx = MEM32(edi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 8);
    eax = MEM32(ecx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00270A5Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270A5A: ;
    ecx = MEM32(eax);
    eax = MEM32(edi + 0x18);
    edx = MEM32(edi + 0xC);
    MEM32(esp + 0x2C) = ecx;
    ebp = MEM32(edx + 0xC);
    eax = eax - ebx;
    ecx = esi;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x00270A76u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00270A76: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270A7Cu); RECOMP_ABI_CALL(0x001DECD0u, sub_001DECD0); /* call 0x001DECD0 */

loc_00270A7C: ;
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebx + ebx * 2;
    PUSH32(esp, 0);
    ebp = ebp - ecx;
    esi = eax;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00270A97u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270A97: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(edi + 0x18);
    ebx = MEM32(edi + 0x1C);
    eax = 0; /* xor self */
    MEM32(esp + 0x20) = ecx;
    ecx = 0; /* xor self */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    if (CMP_BE(_fa & _fb, 0)) goto loc_00270B17; /* jbe: below or equal (unsigned <=) */

loc_00270AB6: ;
    edx = MEM32(esp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00270AD1; /* jae: above or equal (unsigned >=) */

loc_00270ABF: ;
    edx = MEM32(edx + 0x10);
    _fa = (uint32_t)(MEM32(edx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270AD1; /* jne: not equal / not zero */

loc_00270AC7: ;
    ebx = ebx + 3;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    goto loc_00270B0B;

loc_00270AD1: ;
    MEM32(esp + 0x10) = 3;
    /* nop */

loc_00270AE0: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx);
    edx = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x00270AF6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270AF6: ;
    eax = MEM32(esp + 0x10);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_00270AE0; /* jne: not equal / not zero */

loc_00270B03: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);

loc_00270B0B: ;
    edx = MEM32(edi + 0x18);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_00270AB6; /* jb: below (unsigned <) */

loc_00270B17: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00270B38; /* je: equal / zero */

loc_00270B23: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00270B38; /* jne: not equal / not zero */

loc_00270B33: ;
    PUSH32(esp, 0x00270B38u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00270B38: ;
    ecx = MEM32(esp + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEM32(edi + 0xC) = esi;
    eax = MEM32(edi);
    PUSH32(esp, 3);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x00270B4Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270B4E: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x00270B58u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270B58: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00270B6F; /* jne: not equal / not zero */

loc_00270B68: ;
    ecx = esi;
    PUSH32(esp, 0x00270B6Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00270B6F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00270B80
 * Original: 0x00270B80 - 0x00270D37 (439 bytes, 157 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270B80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00270B80: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00270D30; /* je: equal / zero */

loc_00270B94: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00270D30; /* je: equal / zero */

loc_00270BA0: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270D30; /* jne: not equal / not zero */

loc_00270BAA: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00270D30; /* jne: not equal / not zero */

loc_00270BB5: ;
    ecx = MEM32(esi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 8);
    eax = MEM32(ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00270BC3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270BC3: ;
    ecx = MEM32(eax);
    edx = MEM32(esi + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    ebp = MEM32(edx + 0xC);
    if (CMP_BE(_fa & _fb, 0)) goto loc_00270BF1; /* jbe: below or equal (unsigned <=) */

loc_00270BD5: ;
    eax = MEM32(esp + 0x30);
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + edi * 4);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00270BEAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270BEA: ;
    ebp = ebp - eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00270BD5; /* jb: below (unsigned <) */

loc_00270BF1: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esp + 0x18);
    eax = eax - ebx;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x00270C03u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00270C03: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270C09u); RECOMP_ABI_CALL(0x001DECD0u, sub_001DECD0); /* call 0x001DECD0 */

loc_00270C09: ;
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edi = eax;
    edx = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00270C1Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270C1F: ;
    ecx = MEM32(esi + 0xC);
    ebx = MEM32(esi + 0x1C);
    eax = 0; /* xor self */
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esi + 0x18);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x2C) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00270CD7; /* jbe: below or equal (unsigned <=) */

loc_00270C40: ;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00270C4Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270C4F: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00270C79; /* jae: above or equal (unsigned >=) */

loc_00270C62: ;
    ecx = MEM32(ecx + 0x10);
    edx = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x2C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00270C79; /* jne: not equal / not zero */

loc_00270C6E: ;
    ebx = ebx + MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    goto loc_00270CC3;

loc_00270C79: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    ecx = ecx - eax;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x98); PUSH32(esp, 0x00270C8Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270C8F: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00270CC3; /* jbe: below or equal (unsigned <=) */

loc_00270C97: ;
    MEM32(esp + 0x10) = eax;
    goto loc_00270CA0;

    /* nop */

loc_00270CA0: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00270CB6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270CB6: ;
    eax = MEM32(esp + 0x10);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_00270CA0; /* jne: not equal / not zero */

loc_00270CC3: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esi + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x2C) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00270C40; /* jb: below (unsigned <) */

loc_00270CD7: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00270CF6; /* je: equal / zero */

loc_00270CE1: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00270CF6; /* jne: not equal / not zero */

loc_00270CF1: ;
    PUSH32(esp, 0x00270CF6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00270CF6: ;
    eax = MEM32(esp + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi + 0xC) = edi;
    edx = MEM32(esi);
    PUSH32(esp, 4);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00270D0Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270D0C: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x00270D16u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270D16: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00270D2D; /* jne: not equal / not zero */

loc_00270D26: ;
    ecx = edi;
    PUSH32(esp, 0x00270D2Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00270D2D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00270D30: ;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00270D40
 * Original: 0x00270D40 - 0x00271105 (965 bytes, 357 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00270D40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00270D40: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x30);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    ebp = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002710FC; /* je: equal / zero */

loc_00270D56: ;
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x14), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002710FC; /* jne: not equal / not zero */

loc_00270D60: ;
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002710FC; /* jne: not equal / not zero */

loc_00270D69: ;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    MEM32(esp + 0x2C) = edi;
    if (CMP_G(_fas, _fbs)) goto loc_00270D8A; /* jg: greater (signed >) */

loc_00270D76: ;
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00270D80u); RECOMP_ABI_CALL(0x001C2500u, sub_001C2500); /* call 0x001C2500 */

loc_00270D80: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 12; return; /* ret 8 */

loc_00270D8A: ;
    ecx = ebp;
    PUSH32(esp, 0x00270D91u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00270D91: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270D97u); RECOMP_ABI_CALL(0x0021F0E0u, sub_0021F0E0); /* call 0x0021F0E0 */

loc_00270D97: ;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x1C) = esi;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00270DCE; /* jle: less or equal (signed <=) */

loc_00270DA6: ;
    ecx = MEM32(esp + 0x28);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270DB4u); RECOMP_ABI_CALL(0x001358C0u, sub_001358C0); /* call 0x001358C0 */

loc_00270DB4: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00270DBFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270DBF: ;
    edx = MEM32(esp + 0x1C);
    edx = edx + eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(esp + 0x1C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00270DA6; /* jl: less (signed <) */

loc_00270DCE: ;
    ecx = ebp;
    PUSH32(esp, 0x00270DD5u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00270DD5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270DDBu); RECOMP_ABI_CALL(0x0021F0E0u, sub_0021F0E0); /* call 0x0021F0E0 */

loc_00270DDB: ;
    esi = eax;
    eax = 0; /* xor self */
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x30) = esi;
    MEM32(esp + 0x18) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00270E55; /* jle: less or equal (signed <=) */

loc_00270DEE: ;
    edi = edi;

loc_00270DF0: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00270DFBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270DFB: ;
    eax = eax & 0x80000001u;
    if (((int32_t)eax >= 0)) goto loc_00270E07; /* jns: not sign (positive) */

loc_00270E02: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00270E07: ;
    if (_flags /* jne: not equal / not zero */) goto loc_00270E1B;

loc_00270E09: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00270E19u); RECOMP_ABI_CALL(0x00200E60u, sub_00200E60); /* call 0x00200E60 */

loc_00270E19: ;
    goto loc_00270E48;

loc_00270E1B: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC) (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00270E2F; /* jge: greater or equal (signed >=) */

loc_00270E27: ;
    ecx = eax + 1;
    MEM32(esi + 8) = ecx;
    goto loc_00270E3E;

loc_00270E2F: ;
    PUSH32(esp, 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00270E3Au); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00270E3A: ;
    eax = MEM32(esp + 0x24);

loc_00270E3E: ;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(esp + 0x18);
    MEM32(edx + eax * 4) = ecx;

loc_00270E48: ;
    eax = MEM32(esp + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00270DF0; /* jl: less (signed <) */

loc_00270E55: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = MEM32(eax + 0xC);
    esi = edx + edi * 2 + -2;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x20) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00270E6E; /* je: equal / zero */

loc_00270E6B: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00270E6E: ;
    ecx = MEM32(ebx + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00270E76u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270E76: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x14) = ecx;
    ecx = ebp;
    PUSH32(esp, 0x00270E83u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00270E83: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00270E89u); RECOMP_ABI_CALL(0x001DECD0u, sub_001DECD0); /* call 0x001DECD0 */

loc_00270E89: ;
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edi = eax;
    edx = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00270E9Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270E9F: ;
    ecx = ebp;
    PUSH32(esp, 0x00270EA6u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00270EA6: ;
    esi = MEM32(esp + 0x40);
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00270EC9; /* je: equal / zero */

loc_00270EB4: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00270EC9; /* jne: not equal / not zero */

loc_00270EC4: ;
    PUSH32(esp, 0x00270EC9u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00270EC9: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00270ED3u); RECOMP_ABI_CALL(0x002A0680u, sub_002A0680); /* call 0x002A0680 */

loc_00270ED3: ;
    MEM32(esi) = eax;
    ecx = MEM32(edi + 4);
    esp = esp + 4;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 4) = ecx;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x40) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00270F02; /* je: equal / zero */

loc_00270EEA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00270F02; /* jne: not equal / not zero */

loc_00270EF9: ;
    PUSH32(esp, 0x00270EFEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00270EFE: ;
    eax = MEM32(esp + 0x40);

loc_00270F02: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(eax + 0xC) = edi;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00270F15u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270F15: ;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x98); PUSH32(esp, 0x00270F26u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270F26: ;
    eax = MEM32(esp + 0x2C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esp + 0x13) = 1;
    MEM8(esp + 0x40) = 1;
    MEM32(esp + 0x24) = esi;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00271094; /* jle: less or equal (signed <=) */

loc_00270F42: ;
    goto loc_00270F50;

loc_00270F44: ;
    ebx = MEM32(esp + 0x3C);
    goto loc_00270F50;

    /* nop */

loc_00270F50: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(esp + 0x24);
    eax = MEM32(ecx + edx * 4);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x24) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00270F6Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270F6D: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(esp + 0x20);
    ebx = MEM32(edx + ecx * 4);
    ecx = ebx + eax + -1;
    eax = eax & 0x80000001u;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x1C) = ecx;
    if (((int32_t)eax >= 0)) goto loc_00270F93; /* jns: not sign (positive) */

loc_00270F8E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00270F93: ;
    MEM32(esp + 0x34) = eax;
    if (_flags /* je: equal / zero */) goto loc_0027100A;

loc_00270F99: ;
    SET_LO8(eax, MEM8(esp + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027100A; /* jne: not equal / not zero */

loc_00270FA1: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00270FDC; /* jne: not equal / not zero */

loc_00270FA9: ;
    edx = MEM32(ebp);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esi + -1;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00270FBDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270FBD: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ebp);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00270FD7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270FD7: ;
    ecx = MEM32(esp + 0x1C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00270FDC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x20) (32-bit) */
    ebx = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00271003; /* jl: less (signed <) */

loc_00270FE4: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ebp);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00270FF9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00270FF9: ;
    eax = MEM32(esp + 0x20);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00270FE4; /* jge: greater or equal (signed >=) */

loc_00271003: ;
    MEM8(esp + 0x40) = 1;
    goto loc_0027107A;

loc_0027100A: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027103D; /* jne: not equal / not zero */

loc_00271012: ;
    edx = MEM32(ebp);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esi + -1;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00271026u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00271026: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ebp);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0027103Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027103C: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027103D: ;
    edx = MEM32(esp + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0027106F; /* jg: greater (signed >) */

loc_00271047: ;
    goto loc_00271050;

    /* nop */

loc_00271050: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(ebp);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x00271065u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00271065: ;
    eax = MEM32(esp + 0x1C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00271050; /* jle: less or equal (signed <=) */

loc_0027106F: ;
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esp + 0x40) = (TEST_Z(_fa, _fb)) ? 1 : 0; /* sete */

loc_0027107A: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x2C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM8(esp + 0x13) = 0;
    MEM32(esp + 0x24) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00270F44; /* jl: less (signed <) */

loc_00271094: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = 0x7FFFFF;
    eax = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, eax (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002710AD; /* jne: not equal / not zero */

loc_002710A6: ;
    ecx = edi;
    PUSH32(esp, 0x002710ADu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002710AD: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002710C7; /* je: equal / zero */

loc_002710B5: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002710C7; /* jne: not equal / not zero */

loc_002710C2: ;
    PUSH32(esp, 0x002710C7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002710C7: ;
    ecx = MEM32(esp + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002710E1; /* je: equal / zero */

loc_002710CF: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002710E1; /* jne: not equal / not zero */

loc_002710DC: ;
    PUSH32(esp, 0x002710E1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002710E1: ;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002710FB; /* je: equal / zero */

loc_002710E9: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002710FB; /* jne: not equal / not zero */

loc_002710F6: ;
    PUSH32(esp, 0x002710FBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002710FB: ;
    POP32(esp, edi);

loc_002710FC: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00271110
 * Original: 0x00271110 - 0x00271311 (513 bytes, 177 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271110(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00271110: ;
    esp = esp - 0x14;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x20);
    esi = ecx;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0x0027112Du); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027112D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271133u); RECOMP_ABI_CALL(0x0029FF60u, sub_0029FF60); /* call 0x0029FF60 */

loc_00271133: ;
    ecx = MEM32(edi + 8);
    ebp = eax;
    MEM32(esp + 0x14) = ecx;
    esp = esp + 4;
    ecx = esi;
    MEM32(esp + 0x1C) = ebp;
    PUSH32(esp, 0x0027114Au); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027114A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271150u); RECOMP_ABI_CALL(0x00214B60u, sub_00214B60); /* call 0x00214B60 */

loc_00271150: ;
    ecx = MEM32(esp + 0x14);
    ebx = eax;
    eax = 0; /* xor self */
    esp = esp + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x28) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002712C9; /* jle: less or equal (signed <=) */

loc_00271167: ;
    edx = MEM32(edi + 0x10);
    esi = MEM32(edx + eax * 4);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002712AC; /* je: equal / zero */

loc_00271177: ;
    eax = MEM32(0x5BE600);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00271184u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00271184: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002712AC; /* je: equal / zero */

loc_0027118C: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002712AC; /* jne: not equal / not zero */

loc_00271195: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002712AC; /* jne: not equal / not zero */

loc_0027119F: ;
    MEM32(ebx + 8) = ebp;
    edi = MEM32(esi + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x20) = edi;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002711F2; /* jle: less or equal (signed <=) */

loc_002711AD: ;
    /* nop */

loc_002711B0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x002711BBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002711BB: ;
    ecx = MEM32(esp + 0x2C);
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002711ED; /* jge: greater or equal (signed >=) */

loc_002711C6: ;
    edi = MEM32(ebx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002711D6; /* jge: greater or equal (signed >=) */

loc_002711CE: ;
    eax = edi + 1;
    MEM32(ebx + 8) = eax;
    goto loc_002711E3;

loc_002711D6: ;
    PUSH32(esp, 4);
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x002711E3u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_002711E3: ;
    edx = MEM32(ebx + 0x10);
    MEM32(edx + edi * 4) = ebp;
    edi = MEM32(esp + 0x20);

loc_002711ED: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002711B0; /* jl: less (signed <) */

loc_002711F2: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002712AC; /* jle: less or equal (signed <=) */

loc_002711FD: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x00271206u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00271206: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027120Cu); RECOMP_ABI_CALL(0x002A0680u, sub_002A0680); /* call 0x002A0680 */

loc_0027120C: ;
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edi = eax;
    eax = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x00271221u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00271221: ;
    ebp = MEM32(esp + 0x18);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00271230u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00271230: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0027123Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027123A: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027128B; /* jne: not equal / not zero */

loc_00271241: ;
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x10);
    ebp = MEM32(esp + 0x28);
    ecx = MEM32(ecx + ebp * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00271268; /* je: equal / zero */

loc_00271253: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00271268; /* jne: not equal / not zero */

loc_00271263: ;
    PUSH32(esp, 0x00271268u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00271268: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00271270u); RECOMP_ABI_CALL(0x001E7BB0u, sub_001E7BB0); /* call 0x001E7BB0 */

loc_00271270: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(esi + 8);
    MEM32(eax + edx * 4) = 0;
    eax = MEM32(esp + 0x10);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = ebp;
    MEM32(esp + 0x10) = eax;

loc_0027128B: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00271295u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00271295: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002712AC; /* jne: not equal / not zero */

loc_002712A5: ;
    ecx = edi;
    PUSH32(esp, 0x002712ACu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002712AC: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x28) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00271167; /* jl: less (signed <) */

loc_002712C5: ;
    ebp = MEM32(esp + 0x1C);

loc_002712C9: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x002712D1u); RECOMP_ABI_CALL(0x002098A0u, sub_002098A0); /* call 0x002098A0 */

loc_002712D1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002712EC; /* je: equal / zero */

loc_002712D5: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002712EC; /* jne: not equal / not zero */

loc_002712E5: ;
    ecx = ebx;
    PUSH32(esp, 0x002712ECu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002712EC: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00271307; /* je: equal / zero */

loc_002712F0: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00271307; /* jne: not equal / not zero */

loc_00271300: ;
    ecx = ebp;
    PUSH32(esp, 0x00271307u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00271307: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00271320
 * Original: 0x00271320 - 0x00271350 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271320(void)
{

loc_00271320: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    eax = MEM32(0x5BCFF0);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + edx * 4);
    edx = MEM32(esp + 0xC);
    MEM32(esp) = ecx;
    ecx = MEM32(edx);
    edx = MEM32(eax + ecx * 4);
    ecx = esp + 8;
    eax = esp;
    MEM32(esp + 8) = edx;
    PUSH32(esp, 0x0027134Eu); RECOMP_ABI_CALL(0x0024EFE0u, sub_0024EFE0); /* call 0x0024EFE0 */

loc_0027134E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00271350
 * Original: 0x00271350 - 0x0027147E (302 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00271350: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x5BDED4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0027138E; /* jne: not equal / not zero */

loc_00271360: ;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027136Bu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0027136B: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x9C1C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x0027137Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027137D: ;
    edi = eax;
    ecx = 0x2707;
    eax = 0; /* xor self */
    MEM32(0x5BDED4) = edi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_0027138E: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esi);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x10);
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(ecx + edx * 4);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x002713A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002713A9: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    esi = MEM32(esp + 8);
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    eax = eax ^ edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    edi = esi;
    edi = edi << 5;
    eax = eax ^ edi;
    eax = eax ^ ecx;
    eax = eax ^ edx;
    eax = eax ^ esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x2707;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_002713DC; /* jge: greater or equal (signed >=) */

loc_002713DA: ;
    esi = (uint32_t)(-(int32_t)esi);

loc_002713DC: ;
    edx = MEM32(0x5BDED4);
    ecx = MEM32(edx + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00271408; /* jne: not equal / not zero */

loc_002713E9: ;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002713F4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002713F4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002713FAu); RECOMP_ABI_CALL(0x0021F0E0u, sub_0021F0E0); /* call 0x0021F0E0 */

loc_002713FA: ;
    ecx = MEM32(0x5BDED4);
    esp = esp + 8;
    MEM32(ecx + esi * 4) = eax;
    goto loc_0027141E;

loc_00271408: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x271320);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00271419u); RECOMP_ABI_CALL(0x001E7B00u, sub_001E7B00); /* call 0x001E7B00 */

loc_00271419: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00271469; /* jne: not equal / not zero */

loc_0027141E: ;
    eax = MEM32(0x5BDED4);
    esi = MEM32(eax + esi * 4);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00271448; /* jge: greater or equal (signed >=) */

loc_0027142E: ;
    eax = MEM32(esi + 0x10);
    ecx = edi + 1;
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + edi * 4) = ecx;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00271448: ;
    PUSH32(esp, 4);
    edx = edi + 1;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00271455u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00271455: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esp + 0x18);
    MEM32(eax + edi * 4) = ecx;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00271469: ;
    edx = MEM32(0x5BDED4);
    ecx = MEM32(edx + esi * 4);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + eax * 4);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00271480
 * Original: 0x00271480 - 0x002715A4 (292 bytes, 99 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271480(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00271480: ;
    esp = esp - 0xC;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x20);
    ebp = ecx;
    ecx = MEM32(edi + 8);
    ebx = 0; /* xor self */
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0027159B; /* jle: less or equal (signed <=) */

loc_002714A6: ;
    PUSH32(esp, esi);

loc_002714A7: ;
    ecx = MEM32(edi + 0x10);
    esi = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00271586; /* je: equal / zero */

loc_002714B5: ;
    edx = MEM32(0x5BE600);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002714C3u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_002714C3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00271586; /* je: equal / zero */

loc_002714CB: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00271586; /* jne: not equal / not zero */

loc_002714D4: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00271586; /* je: equal / zero */

loc_002714DF: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00271586; /* je: equal / zero */

loc_002714E8: ;
    edx = MEM32(ebp);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x2C) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00271506u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00271506: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00271513; /* je: equal / zero */

loc_00271510: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00271513: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027152F; /* je: equal / zero */

loc_0027151A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027152F; /* jne: not equal / not zero */

loc_0027152A: ;
    PUSH32(esp, 0x0027152Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027152F: ;
    MEM32(esi + 0xC) = edi;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0027153Eu); RECOMP_ABI_CALL(0x0029C1C0u, sub_0029C1C0); /* call 0x0029C1C0 */

loc_0027153E: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00271560; /* je: equal / zero */

loc_00271548: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00271560; /* jne: not equal / not zero */

loc_0027155B: ;
    PUSH32(esp, 0x00271560u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00271560: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00271582; /* je: equal / zero */

loc_0027156A: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00271582; /* jne: not equal / not zero */

loc_0027157D: ;
    PUSH32(esp, 0x00271582u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00271582: ;
    edi = MEM32(esp + 0x14);

loc_00271586: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(edi + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002714A7; /* jl: less (signed <) */

loc_0027159A: ;
    POP32(esp, esi);

loc_0027159B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002715B0
 * Original: 0x002715B0 - 0x0027181B (619 bytes, 236 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002715B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002715B0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    ebx = MEM32(edi + 0xC);
    esi = ecx;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0x002715C9u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_002715C9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002715CFu); RECOMP_ABI_CALL(0x0021F0E0u, sub_0021F0E0); /* call 0x0021F0E0 */

loc_002715CF: ;
    esp = esp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (TEST_S(_fas, _fbs)) goto loc_002715EE; /* jl: less (signed <) */

loc_002715DA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002715E4; /* jg: greater (signed >) */

loc_002715DF: ;
    MEM32(eax + 8) = ebx;
    goto loc_002715EE;

loc_002715E4: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x002715EEu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_002715EE: ;
    ecx = esi;
    PUSH32(esp, 0x002715F5u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_002715F5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002715FBu); RECOMP_ABI_CALL(0x0021F0E0u, sub_0021F0E0); /* call 0x0021F0E0 */

loc_002715FB: ;
    esi = eax;
    eax = MEM32(esi + 8);
    esp = esp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00271611; /* jl: less (signed <) */

loc_00271607: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00271611u); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_00271611: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(0x5BD3F0) = edi;
    MEM32(0x5BD3EC) = edi;
    MEM32(0x5BCFF0) = esi;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00271699; /* jle: less or equal (signed <=) */

loc_00271629: ;
    /* nop */

loc_00271630: ;
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00271640; /* jge: greater or equal (signed >=) */

loc_00271638: ;
    eax = edi + 1;
    MEM32(esi + 8) = eax;
    goto loc_0027164D;

loc_00271640: ;
    PUSH32(esp, 4);
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0027164Du); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0027164D: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esp + 0x20);
    MEM32(edx + edi * 4) = ebp;
    edi = MEM32(esi + 8);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00271662u); RECOMP_ABI_CALL(0x00271350u, sub_00271350); /* call 0x00271350 */

loc_00271662: ;
    esp = esp + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00271677; /* je: equal / zero */

loc_00271669: ;
    edi = eax;
    eax = MEM32(esi + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00271677u); RECOMP_ABI_CALL(0x001E7BB0u, sub_001E7BB0); /* call 0x001E7BB0 */

loc_00271677: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00271690; /* je: equal / zero */

loc_00271682: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00271690; /* jl: less (signed <) */

loc_00271686: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00271690; /* jge: greater or equal (signed >=) */

loc_0027168A: ;
    ecx = MEM32(ecx + 0x10);
    MEM32(ecx + ebp * 4) = edi;

loc_00271690: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00271630; /* jl: less (signed <) */

loc_00271695: ;
    edi = MEM32(esp + 0x20);

loc_00271699: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x002716A0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002716A0: ;
    eax = MEM32(eax);
    ecx = MEM32(esp + 0x14);
    edi = MEM32(edi + 0x14);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x002716B2u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_002716B2: ;
    ecx = MEM32(esp + 0x24);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    ebp = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002716D3; /* je: equal / zero */

loc_002716BE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002716D3; /* jne: not equal / not zero */

loc_002716CE: ;
    PUSH32(esp, 0x002716D3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002716D3: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002716D9u); RECOMP_ABI_CALL(0x001DECD0u, sub_001DECD0); /* call 0x001DECD0 */

loc_002716D9: ;
    edx = MEM32(esp + 0x28);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(edx) = eax;
    ecx = MEM32(esi + 8);
    edx = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x002716F5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002716F5: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x002716FEu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_002716FE: ;
    ebp = MEM32(esp + 0x28);
    ecx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00271722; /* je: equal / zero */

loc_0027170D: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00271722; /* jne: not equal / not zero */

loc_0027171D: ;
    PUSH32(esp, 0x00271722u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00271722: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027172Cu); RECOMP_ABI_CALL(0x001B8EB0u, sub_001B8EB0); /* call 0x001B8EB0 */

loc_0027172C: ;
    esp = esp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10000 (32-bit) */
    ecx = eax;
    MEM32(ebp) = ecx;
    PUSH32(esp, 0);
    if (CMP_GE(_fas, _fbs)) goto loc_0027176C; /* jge: greater or equal (signed >=) */

loc_0027173E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00271747u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00271747: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00271799; /* jle: less or equal (signed <=) */

loc_0027174D: ;
    /* nop */

loc_00271750: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 0x10);
    eax = ZX16(MEM16(eax + edi * 4));
    ecx = MEM32(ebp);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00271765u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00271765: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00271750; /* jl: less (signed <) */

loc_0027176A: ;
    goto loc_00271799;

loc_0027176C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00271775u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00271775: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00271799; /* jle: less or equal (signed <=) */

loc_0027177B: ;
    goto loc_00271780;

    /* nop */

loc_00271780: ;
    edx = MEM32(esp + 0x10);
    edx = MEM32(edx + 0x10);
    edx = MEM32(edx + edi * 4);
    ecx = MEM32(ebp);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x00271794u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00271794: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00271780; /* jl: less (signed <) */

loc_00271799: ;
    eax = MEM32(esi + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002717CB; /* jle: less or equal (signed <=) */

loc_002717A2: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + edi * 4);
    ecx = MEM32(esp + 0x24);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002717C0u); RECOMP_ABI_CALL(0x001BAFE0u, sub_001BAFE0); /* call 0x001BAFE0 */

loc_002717C0: ;
    eax = MEM32(esi + 8);
    esp = esp + 0x14;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002717A2; /* jl: less (signed <) */

loc_002717CB: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x002717D9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002717D9: ;
    PUSH32(esp, 0x002717DEu); RECOMP_ABI_CALL(0x0024F510u, sub_0024F510); /* call 0x0024F510 */

loc_002717DE: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = 0x7FFFFF;
    eax = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002717F7; /* jne: not equal / not zero */

loc_002717F0: ;
    ecx = esi;
    PUSH32(esp, 0x002717F7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002717F7: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00271811; /* je: equal / zero */

loc_002717FF: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00271811; /* jne: not equal / not zero */

loc_0027180C: ;
    PUSH32(esp, 0x00271811u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00271811: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00271820
 * Original: 0x00271820 - 0x002719FF (479 bytes, 181 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271820(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00271820: ;
    esp = esp - 0x14;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_002719F9; /* je: equal / zero */

loc_00271833: ;
    ecx = MEM32(eax + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0027183Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027183E: ;
    edi = MEM32(eax);
    ebp = MEM32(esp + 0x2C);
    eax = edi;
    ecx = ebp;
    eax = eax >> 0x10;
    ecx = ecx >> 0x10;
    SET_LO8(eax, LO8(eax) & 0xF);
    SET_LO8(ecx, LO8(ecx) & 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    MEM32(esp + 0x14) = edi;
    SET_LO8(ebx, LO8(eax));
    if (CMP_B(_fa, _fb)) goto loc_0027185F; /* jb: below (unsigned <) */

loc_0027185D: ;
    SET_LO8(ebx, LO8(ecx));

loc_0027185F: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    edx = esi;
    edx = edx >> 0x10;
    SET_LO8(edx, LO8(edx) & 0xF);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(edx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00271880; /* jbe: below or equal (unsigned <=) */

loc_00271870: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027187A; /* jae: above or equal (unsigned >=) */

loc_00271874: ;
    MEM8(esp + 0x12) = LO8(eax);
    goto loc_00271884;

loc_0027187A: ;
    MEM8(esp + 0x12) = LO8(ecx);
    goto loc_00271884;

loc_00271880: ;
    MEM8(esp + 0x12) = LO8(edx);

loc_00271884: ;
    eax = edi;
    ecx = ebp;
    eax = eax >> 4;
    ecx = ecx >> 4;
    SET_LO8(eax, LO8(eax) & 0xF);
    SET_LO8(ecx, LO8(ecx) & 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    SET_LO8(ebx, LO8(eax));
    if (CMP_B(_fa, _fb)) goto loc_0027189B; /* jb: below (unsigned <) */

loc_00271899: ;
    SET_LO8(ebx, LO8(ecx));

loc_0027189B: ;
    edx = esi;
    edx = edx >> 4;
    SET_LO8(edx, LO8(edx) & 0xF);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(edx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002718B7; /* jbe: below or equal (unsigned <=) */

loc_002718A7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002718B1; /* jae: above or equal (unsigned >=) */

loc_002718AB: ;
    MEM8(esp + 0x13) = LO8(eax);
    goto loc_002718BB;

loc_002718B1: ;
    MEM8(esp + 0x13) = LO8(ecx);
    goto loc_002718BB;

loc_002718B7: ;
    MEM8(esp + 0x13) = LO8(edx);

loc_002718BB: ;
    eax = edi;
    ecx = ebp;
    eax = eax >> 8;
    ecx = ecx >> 8;
    SET_LO8(eax, LO8(eax) & 0xF);
    SET_LO8(ecx, LO8(ecx) & 0xF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    SET_LO8(ebx, LO8(eax));
    if (CMP_B(_fa, _fb)) goto loc_002718D2; /* jb: below (unsigned <) */

loc_002718D0: ;
    SET_LO8(ebx, LO8(ecx));

loc_002718D2: ;
    edx = esi;
    edx = edx >> 8;
    SET_LO8(edx, LO8(edx) & 0xF);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(edx) (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002718EA; /* jbe: below or equal (unsigned <=) */

loc_002718DE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002718E6; /* jae: above or equal (unsigned >=) */

loc_002718E2: ;
    SET_LO8(ebx, LO8(eax));
    goto loc_002718EC;

loc_002718E6: ;
    SET_LO8(ebx, LO8(ecx));
    goto loc_002718EC;

loc_002718EA: ;
    SET_LO8(ebx, LO8(edx));

loc_002718EC: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00271909u); RECOMP_ABI_CALL(0x001AD830u, sub_001AD830); /* call 0x001AD830 */

loc_00271909: ;
    ecx = eax;
    PUSH32(esp, 0x00271910u); RECOMP_ABI_CALL(0x001AD7B0u, sub_001AD7B0); /* call 0x001AD7B0 */

loc_00271910: ;
    eax = ZX8(MEM8(esp + 0x12));
    edx = ZX8(MEM8(esp + 0x13));
    ecx = MEM32(esp + 0x14);
    eax = eax << 0xC;
    eax = eax | edx;
    edx = 0; /* xor self */
    eax = eax << 4;
    ecx = ecx & 0xFFF0FF0Fu;
    SET_HI8(edx, LO8(ebx));
    eax = eax | ecx;
    ecx = MEM32(esp + 0x18);
    eax = eax & 0xFFFFF0FFu;
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002719F5; /* je: equal / zero */

loc_00271949: ;
    eax = MEM32(esp + 0x28);
    ebx = MEM32(eax + 0xC);
    ecx = MEM32(esp + 0x1C);
    ebp = MEM32(ebx + 0xC);
    edi = MEM32(ebx + 0x14);
    PUSH32(esp, 0x0027195Fu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027195F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271965u); RECOMP_ABI_CALL(0x001DECD0u, sub_001DECD0); /* call 0x001DECD0 */

loc_00271965: ;
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    esi = eax;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0027197Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027197A: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0027198Du); RECOMP_ABI_CALL(0x001AD830u, sub_001AD830); /* call 0x001AD830 */

loc_0027198D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_002719AA; /* jbe: below or equal (unsigned <=) */

loc_00271993: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(ecx);
    edx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x002719A5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002719A5: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00271993; /* jb: below (unsigned <) */

loc_002719AA: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xB4); PUSH32(esp, 0x002719B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002719B4: ;
    ecx = MEM32(esi + 4);
    edi = MEM32(esp + 0x28);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ecx;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002719DB; /* je: equal / zero */

loc_002719C6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002719DB; /* jne: not equal / not zero */

loc_002719D6: ;
    PUSH32(esp, 0x002719DBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002719DB: ;
    MEM32(edi + 0xC) = esi;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002719F5; /* jne: not equal / not zero */

loc_002719EE: ;
    ecx = esi;
    PUSH32(esp, 0x002719F5u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002719F5: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_002719F9: ;
    esp = esp + 0x14;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00271A00
 * Original: 0x00271A00 - 0x00271B43 (323 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271A00(void)
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

loc_00271A00: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00271A14; /* jle: less or equal (signed <=) */

loc_00271A0C: ;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;

loc_00271A14: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebx = MEM32(edi + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00271A86; /* jle: less or equal (signed <=) */

loc_00271A29: ;
    ecx = MEM32(edi + 0x10);
    /* nop */

loc_00271A30: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00271A7C; /* jne: not equal / not zero */

loc_00271A38: ;
    edx = MEM32(esp + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00271A7C; /* jne: not equal / not zero */

loc_00271A41: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00271AB3; /* je: equal / zero */

loc_00271A45: ;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = MEM32(ebp + 0x10);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = eax + eax * 2;
    eax = edx + eax * 4;
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax + 8)); /* fld float */
    eax = MEM32(esp + 0x24);
    fp_top() = fp_top() * MEMF(eax + 8); /* fmul dword ptr [eax + 8] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(eax + 4); /* fmul dword ptr [eax + 4] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00271A93; /* je: equal / zero */

loc_00271A7C: ;
    esi = esi + 2;
    ecx = ecx + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00271A30; /* jl: less (signed <) */

loc_00271A86: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00271AC2; /* jge: greater or equal (signed >=) */

loc_00271A8B: ;
    eax = ebx + 1;
    MEM32(edi + 8) = eax;
    goto loc_00271ACF;

loc_00271A93: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00271A9Du); RECOMP_ABI_CALL(0x001E7B50u, sub_001E7B50); /* call 0x001E7B50 */

loc_00271A9D: ;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    PUSH32(esp, 0xC);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00271AAEu); RECOMP_ABI_CALL(0x001E7A30u, sub_001E7A30); /* call 0x001E7A30 */

loc_00271AAE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00271AB3: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00271ABDu); RECOMP_ABI_CALL(0x001E7B50u, sub_001E7B50); /* call 0x001E7B50 */

loc_00271ABD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00271AC2: ;
    PUSH32(esp, 4);
    ecx = ebx + 1;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00271ACFu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00271ACF: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(edi + 0x10);
    MEM32(edx + ebx * 4) = eax;
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00271AE9; /* jge: greater or equal (signed >=) */

loc_00271AE1: ;
    ecx = esi + 1;
    MEM32(edi + 8) = ecx;
    goto loc_00271AF6;

loc_00271AE9: ;
    PUSH32(esp, 4);
    edx = esi + 1;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00271AF6u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00271AF6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    eax = MEM32(edi + 0x10);
    ecx = MEM32(esp + 0x20);
    MEM32(eax + esi * 4) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00271B3E; /* je: equal / zero */

loc_00271B04: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00271B14; /* jge: greater or equal (signed >=) */

loc_00271B0C: ;
    edx = esi + 1;
    MEM32(ebp + 8) = edx;
    goto loc_00271B21;

loc_00271B14: ;
    PUSH32(esp, 0xC);
    eax = esi + 1;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00271B21u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00271B21: ;
    edx = MEM32(ebp + 0x10);
    ecx = esi + esi * 2;
    eax = edx + ecx * 4;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;

loc_00271B3E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00271B50
 * Original: 0x00271B50 - 0x0027224F (1791 bytes, 632 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00271B50(void)
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

loc_00271B50: ;
    esp = esp - 0x4C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x60);
    ebx = ecx;
    ecx = MEM32(edi + 0x10);
    ebp = 0; /* xor self */
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_00271B8E; /* jne: not equal / not zero */

loc_00271B74: ;
    eax = MEM32(ebx);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0xC);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00271B8Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00271B8C: ;
    goto loc_00271BEA;

loc_00271B8E: ;
    esi = MEM32(edi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00271B9C; /* je: equal / zero */

loc_00271B95: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 0x14);

loc_00271B9C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00271BB8; /* je: equal / zero */

loc_00271BA2: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00271BB8; /* jne: not equal / not zero */

loc_00271BB3: ;
    PUSH32(esp, 0x00271BB8u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00271BB8: ;
    MEM32(esp + 0x14) = esi;
    esi = MEM32(edi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00271BC6; /* je: equal / zero */

loc_00271BC3: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00271BC6: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00271BE6; /* je: equal / zero */

loc_00271BD0: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00271BE6; /* jne: not equal / not zero */

loc_00271BE1: ;
    PUSH32(esp, 0x00271BE6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00271BE6: ;
    MEM32(esp + 0x10) = esi;

loc_00271BEA: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00271BF3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00271BF3: ;
    esi = MEM32(edi + 0x18);
    ecx = ebx;
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 0x00271C01u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00271C01: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271C07u); RECOMP_ABI_CALL(0x0021F0E0u, sub_0021F0E0); /* call 0x0021F0E0 */

loc_00271C07: ;
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    MEM32(esp + 0x20) = eax;
    esp = esp + 4;
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x18) = 0xBF800000u;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00271C4F; /* jne: not equal / not zero */

loc_00271C2B: ;
    ecx = ebx;
    PUSH32(esp, 0x00271C32u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00271C32: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271C38u); RECOMP_ABI_CALL(0x00246660u, sub_00246660); /* call 0x00246660 */

loc_00271C38: ;
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    esp = esp + 4;
    MEM32(esp + 0x20) = eax;
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_00271C4F: ;
    edi = MEM32(edi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    eax = MEM32(0x46D194);
    ecx = MEM32(0x46D198);
    edx = MEM32(0x46D19C);
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x4C) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00271DB0; /* jne: not equal / not zero */

loc_00271C78: ;
    eax = esi + esi * 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00271FA9; /* jle: less or equal (signed <=) */

loc_00271C83: ;
    ecx = eax + -1;
    eax = 0xAAAAAAABu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx >> 1;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = 2;
    MEM32(esp + 0x60) = edx;
    /* nop */

loc_00271CA0: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 0x14);
    ebp = 0; /* xor self */
    edi = 0; /* xor self */
    ebx = 0; /* xor self */
    eax = eax - ebp;
    if ((eax == 0)) goto loc_00271CE0; /* je: equal / zero */

loc_00271CB1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00271D46; /* jne: not equal / not zero */

loc_00271CB8: ;
    edx = MEM32(ecx);
    eax = esi + -2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x00271CC1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00271CC1: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    edi = eax;
    eax = esi + -1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x00271CD0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00271CD0: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ebx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x00271CDCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00271CDC: ;
    ebp = eax;
    goto loc_00271D09;

loc_00271CE0: ;
    eax = MEM32(ecx);
    edx = esi + -2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00271CE9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00271CE9: ;
    ecx = MEM32(esp + 0x10);
    edx = esi + -1;
    edi = ZX16(LO16(eax));
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00271CF9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00271CF9: ;
    ecx = MEM32(esp + 0x10);
    ebx = ZX16(LO16(eax));
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00271D06u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00271D06: ;
    ebp = ZX16(LO16(eax));

loc_00271D09: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00271D46; /* je: equal / zero */

loc_00271D0D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00271D46; /* je: equal / zero */

loc_00271D11: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00271D46; /* je: equal / zero */

loc_00271D15: ;
    fp_push(MEMF(esp + 0x68)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00271D46; /* jne: not equal / not zero */

loc_00271D26: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00271D38u); RECOMP_ABI_CALL(0x0024F580u, sub_0024F580); /* call 0x0024F580 */

loc_00271D38: ;
    esp = esp + 0x14;
    ecx = esp + 0x44;
    PUSH32(esp, 0x00271D44u); RECOMP_ABI_CALL(0x000129C0u, sub_000129C0); /* call 0x000129C0 */

loc_00271D44: ;
    fp_pop(); /* fstp st(0) */

loc_00271D46: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271D61u); RECOMP_ABI_CALL(0x00271A00u, sub_00271A00); /* call 0x00271A00 */

loc_00271D61: ;
    ecx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x48);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271D7Cu); RECOMP_ABI_CALL(0x00271A00u, sub_00271A00); /* call 0x00271A00 */

loc_00271D7C: ;
    ecx = MEM32(esp + 0x48);
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, ecx);
    edx = esp + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271D93u); RECOMP_ABI_CALL(0x00271A00u, sub_00271A00); /* call 0x00271A00 */

loc_00271D93: ;
    eax = MEM32(esp + 0xA8);
    esp = esp + 0x48;
    esi = esi + 3;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x60) = eax;
    if ((_fa != 0)) goto loc_00271CA0; /* jne: not equal / not zero */

loc_00271DAB: ;
    goto loc_00271FA9;

loc_00271DB0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00271FA9; /* jne: not equal / not zero */

loc_00271DB9: ;
    ecx = MEM32(esp + 0x60);
    eax = MEM32(ecx + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00271FA9; /* jle: less or equal (signed <=) */

loc_00271DD6: ;
    ecx = MEM32(esp + 0x60);
    eax = MEM32(esp + 0x28);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00271DE7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00271DE7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esp + 0x30) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00271F86; /* jle: less or equal (signed <=) */

loc_00271DF4: ;
    esi = MEM32(esp + 0x24);
    eax = 2;
    eax = eax - esi;
    MEM32(esp + 0x2C) = eax;

loc_00271E03: ;
    ecx = MEM32(esp + 0x2C);
    ecx = ecx + esi;
    edi = 0; /* xor self */
    ebx = 0; /* xor self */
    ebp = 0; /* xor self */
    ecx = ecx & 0x80000001u;
    if (((int32_t)ecx >= 0)) goto loc_00271E1C; /* jns: not sign (positive) */

loc_00271E17: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFFEu;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00271E1C: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 0x14);
    if (_flags /* jne: not equal / not zero */) goto loc_00271E71;

loc_00271E25: ;
    eax = eax - 0;
    if ((eax == 0)) goto loc_00271E59; /* je: equal / zero */

loc_00271E2A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00271EB9; /* jne: not equal / not zero */

loc_00271E31: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x00271E37u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00271E37: ;
    ecx = MEM32(esp + 0x10);
    edx = esi + 1;
    edi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00271E46u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00271E46: ;
    ecx = MEM32(esp + 0x10);
    edx = esi + 2;
    ebx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00271E55u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00271E55: ;
    ebp = eax;
    goto loc_00271EB9;

loc_00271E59: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00271E5Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00271E5F: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    edi = ZX16(LO16(eax));
    eax = esi + 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00271E6Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00271E6F: ;
    goto loc_00271EA6;

loc_00271E71: ;
    eax = eax - 0;
    if ((eax == 0)) goto loc_00271E90; /* je: equal / zero */

loc_00271E76: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00271EB9; /* jne: not equal / not zero */

loc_00271E79: ;
    edx = MEM32(ecx);
    eax = esi + 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x00271E82u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00271E82: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    edi = eax;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x00271E8Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00271E8E: ;
    goto loc_00271E46;

loc_00271E90: ;
    eax = MEM32(ecx);
    edx = esi + 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00271E99u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00271E99: ;
    ecx = MEM32(esp + 0x10);
    edi = ZX16(LO16(eax));
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00271EA6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00271EA6: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    ebx = ZX16(LO16(eax));
    eax = esi + 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00271EB6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00271EB6: ;
    ebp = ZX16(LO16(eax));

loc_00271EB9: ;
    fp_push(MEMF(esp + 0x68)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00271F23; /* jne: not equal / not zero */

loc_00271ECA: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00271EDCu); RECOMP_ABI_CALL(0x0024F580u, sub_0024F580); /* call 0x0024F580 */

loc_00271EDC: ;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x58); /* fmul dword ptr [esp + 0x58] */
    esp = esp + 0x14;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x4C); /* fmul dword ptr [esp + 0x4c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x48); /* fmul dword ptr [esp + 0x48] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_00271F23: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271F3Eu); RECOMP_ABI_CALL(0x00271A00u, sub_00271A00); /* call 0x00271A00 */

loc_00271F3E: ;
    ecx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x48);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271F59u); RECOMP_ABI_CALL(0x00271A00u, sub_00271A00); /* call 0x00271A00 */

loc_00271F59: ;
    ecx = MEM32(esp + 0x48);
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, ecx);
    edx = esp + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00271F70u); RECOMP_ABI_CALL(0x00271A00u, sub_00271A00); /* call 0x00271A00 */

loc_00271F70: ;
    ecx = MEM32(esp + 0x74);
    eax = MEM32(esp + 0x78);
    esp = esp + 0x48;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00271E03; /* jl: less (signed <) */

loc_00271F86: ;
    esi = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x38);
    esi = esi + edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0x28) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00271DD6; /* jl: less (signed <) */

loc_00271FA9: ;
    ebx = MEM32(esp + 0x1C);
    edi = MEM32(ebx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x68) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_00272040; /* jne: not equal / not zero */

loc_00271FBC: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00271FD9; /* je: equal / zero */

loc_00271FC4: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00271FD9; /* jne: not equal / not zero */

loc_00271FD4: ;
    PUSH32(esp, 0x00271FD9u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00271FD9: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00271FF0; /* jne: not equal / not zero */

loc_00271FE9: ;
    ecx = ebx;
    PUSH32(esp, 0x00271FF0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00271FF0: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00272012; /* je: equal / zero */

loc_00271FFA: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00272012; /* jne: not equal / not zero */

loc_0027200D: ;
    PUSH32(esp, 0x00272012u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00272012: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00272034; /* je: equal / zero */

loc_0027201C: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00272034; /* jne: not equal / not zero */

loc_0027202F: ;
    PUSH32(esp, 0x00272034u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00272034: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 16; return; /* ret 12 */

loc_00272040: ;
    ecx = MEM32(esp + 0x34);
    MEM32(esp + 0x3C) = 5;
    PUSH32(esp, 0x00272051u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00272051: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00272057u); RECOMP_ABI_CALL(0x001DECD0u, sub_001DECD0); /* call 0x001DECD0 */

loc_00272057: ;
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = eax;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0027206Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027206D: ;
    edx = MEM32(esp + 0x40);
    eax = MEM32(edx);
    eax = eax >> 1;
    edi = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    eax = MEM32(ebx + 8);
    if (TEST_NZ(_fa, _fb)) goto loc_002720BC; /* jne: not equal / not zero */

loc_0027207E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00272150; /* jle: less or equal (signed <=) */

loc_00272086: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF000000u);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00272096u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272096: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(eax + edi * 4);
    edx = MEM32(ecx);
    ebp = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x002720A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002720A8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebp + 0x6C); PUSH32(esp, 0x002720AFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002720AF: ;
    eax = MEM32(ebx + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00272086; /* jl: less (signed <) */

loc_002720B7: ;
    goto loc_00272150;

loc_002720BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00272150; /* jle: less or equal (signed <=) */

loc_002720C4: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFF000000u);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x002720D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002720D4: ;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(eax + edi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x002720E4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002720E4: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    ebp = eax;
    eax = MEM32(ebx + 0x10);
    eax = MEM32(eax + edi * 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x002720F6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002720F6: ;
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = fp_top() * MEMF(eax); /* fmul dword ptr [eax] */
    edx = MEM32(esi);
    ecx = esi;
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 4); /* fmul dword ptr [eax + 4] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_top() = fp_top() * MEMF(eax + 8); /* fmul dword ptr [eax + 8] */
    eax = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp); /* fadd dword ptr [ebp] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp + 4); /* fadd dword ptr [ebp + 4] */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp + 8); /* fadd dword ptr [ebp + 8] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00272144u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272144: ;
    eax = MEM32(ebx + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002720C4; /* jl: less (signed <) */

loc_00272150: ;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, 0x00272159u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00272159: ;
    SET_LO8(ecx, MEM8(0x5BC548));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00272172; /* jne: not equal / not zero */

loc_00272163: ;
    ecx = MEM32(0x46A6E0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027216Fu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0027216F: ;
    esp = esp + 4;

loc_00272172: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00272178u); RECOMP_ABI_CALL(0x002A0680u, sub_002A0680); /* call 0x002A0680 */

loc_00272178: ;
    ecx = MEM32(esi + 4);
    esp = esp + 4;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = eax;
    MEM32(esi + 4) = ecx;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    ebp = 0x7FFFFF;
    if (TEST_Z(_fa, _fb)) goto loc_002721A2; /* je: equal / zero */

loc_00272190: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002721A2; /* jne: not equal / not zero */

loc_0027219D: ;
    PUSH32(esp, 0x002721A2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002721A2: ;
    MEM32(edi + 0xC) = esi;
    eax = MEM32(edi);
    MEM32(esp + 0x60) = eax;
    eax = MEM32(esp + 0x68);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x68);
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x94); PUSH32(esp, 0x002721C5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002721C5: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002721D9; /* jne: not equal / not zero */

loc_002721D2: ;
    ecx = esi;
    PUSH32(esp, 0x002721D9u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002721D9: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002721F3; /* je: equal / zero */

loc_002721E1: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002721F3; /* jne: not equal / not zero */

loc_002721EE: ;
    PUSH32(esp, 0x002721F3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002721F3: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00272207; /* jne: not equal / not zero */

loc_00272200: ;
    ecx = ebx;
    PUSH32(esp, 0x00272207u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00272207: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00272225; /* je: equal / zero */

loc_00272211: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, edx (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00272225; /* jne: not equal / not zero */

loc_00272220: ;
    PUSH32(esp, 0x00272225u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00272225: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00272243; /* je: equal / zero */

loc_0027222F: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, edx (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00272243; /* jne: not equal / not zero */

loc_0027223E: ;
    PUSH32(esp, 0x00272243u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00272243: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00272250
 * Original: 0x00272250 - 0x00272517 (711 bytes, 302 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272250(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00272250: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x2C;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00272510; /* jne: not equal / not zero */

loc_00272265: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xC);
    eax = edi + 9;
    MEM32(esp + 0x18) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0027227Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027227A: ;
    eax = MEM32(eax);
    ecx = esi;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00272287u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00272287: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027228Du); RECOMP_ABI_CALL(0x002A0680u, sub_002A0680); /* call 0x002A0680 */

loc_0027228D: ;
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ebx = eax;
    edx = MEM32(ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    ecx = ebx;
    MEM32(esp + 0x2C) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x002722A6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002722A6: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x002722B8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002722B8: ;
    ecx = esi;
    PUSH32(esp, 0x002722BFu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_002722BF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002722C5u); RECOMP_ABI_CALL(0x00214B60u, sub_00214B60); /* call 0x00214B60 */

loc_002722C5: ;
    ebp = eax;
    eax = 0xAAAAAAABu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx >> 1;
    esp = esp + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x14) = edx;
    if (TEST_S(_fas, _fbs)) goto loc_002722F7; /* jl: less (signed <) */

loc_002722DF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002722E9; /* jg: greater (signed >) */

loc_002722E4: ;
    MEM32(ebp + 8) = edx;
    goto loc_002722F7;

loc_002722E9: ;
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x002722F3u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_002722F3: ;
    edx = MEM32(esp + 0x14);

loc_002722F7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0027231A; /* jbe: below or equal (unsigned <=) */

loc_002722FD: ;
    /* nop */

loc_00272300: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00272315; /* je: equal / zero */

loc_00272307: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00272315; /* jl: less (signed <) */

loc_0027230B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00272315; /* jge: greater or equal (signed >=) */

loc_0027230F: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx + eax * 4) = eax;

loc_00272315: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00272300; /* jb: below (unsigned <) */

loc_0027231A: ;
    eax = 0xAAAAAAABu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x44);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx >> 1;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0027232Du); RECOMP_ABI_CALL(0x001E7BB0u, sub_001E7BB0); /* call 0x001E7BB0 */

loc_0027232D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x44);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0027233Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027233B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xAC); PUSH32(esp, 0x00272348u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272348: ;
    ebx = MEM32(ebx + 0xC);
    ebp = MEM32(ebp + 0xC);
    edx = MEM32(esi);
    eax = edi + -3;
    ecx = edi + -2;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x2C) = edi;
    edi = eax;
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x4C);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x54);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00272385u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272385: ;
    ecx = MEM32(esp + 0x4C);
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    ecx = eax + 2;
    PUSH32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x002723A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002723A7: ;
    ecx = MEM32(esp + 0x50);
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = eax + 2;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x002723C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002723C8: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x002723DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002723DD: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x002723F3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002723F3: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00272408u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272408: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0027241Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027241D: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    eax = eax + 2;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00272435u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272435: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0027244Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027244A: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0027245Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027245F: ;
    ecx = MEM32(esp + 0x44);
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00272474u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272474: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00272489u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272489: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00272490; /* je: equal / zero */

loc_0027248D: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00272490: ;
    esi = MEM32(esp + 0x40);
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002724B0; /* je: equal / zero */

loc_0027249B: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002724B0; /* jne: not equal / not zero */

loc_002724AB: ;
    PUSH32(esp, 0x002724B0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002724B0: ;
    eax = 0xAAAAAAABu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x18);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = edx >> 1;
    PUSH32(esp, edx);
    MEM32(esi + 0xC) = ebx;
    edi = MEM32(esi);
    PUSH32(esp, 3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x94); PUSH32(esp, 0x002724CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002724CD: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x002724D7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002724D7: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_002724F7; /* je: equal / zero */

loc_002724E2: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002724F7; /* jne: not equal / not zero */

loc_002724F2: ;
    PUSH32(esp, 0x002724F7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002724F7: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00272510; /* jne: not equal / not zero */

loc_0027250B: ;
    PUSH32(esp, 0x00272510u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00272510: ;
    POP32(esp, esi);
    esp = esp + 0x2C;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00272520
 * Original: 0x00272520 - 0x00272699 (377 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272520(void)
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

loc_00272520: ;
    eax = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x3C);
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    edx = edx + ecx;
    PUSH32(esp, edx);
    edx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    edx = edx + ecx;
    PUSH32(esp, edx);
    eax = eax + ecx;
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x54);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    edx = edx + ecx;
    PUSH32(esp, edx);
    edx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    edx = (uint32_t)((int32_t)edx * (int32_t)esi);
    edx = edx + ecx;
    PUSH32(esp, edx);
    eax = eax + ecx;
    PUSH32(esp, eax);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027257Du); RECOMP_ABI_CALL(0x0025D1E0u, sub_0025D1E0); /* call 0x0025D1E0 */

loc_0027257D: ;
    ecx = MEM32(esp + 0x8C);
    eax = MEM32(ecx + 0x10);
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    edx = ebx + ebx * 2;
    edx = edx << 2;
    eax = eax + edx;
    esi = esi + esi * 2;
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    esi = esi << 2;
    ebx = MEM32(esp + 0x90);
    edi = edi + edi * 2;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    edi = edi << 2;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    esp = esp + 0x20;
    fp_top() = fp_top() + MEMF(eax + 4); /* fadd dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 8); /* fadd dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx + 0x10);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = eax + esi;
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 4); /* fadd dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 8); /* fadd dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx + 0x10);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = eax + edi;
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 4); /* fadd dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 8); /* fadd dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebx + 0x10);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = eax + edx;
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 4); /* fadd dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 8); /* fadd dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebx + 0x10);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = eax + esi;
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 4); /* fadd dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 8); /* fadd dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebx + 0x10);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = eax + edi;
    fp_top() = fp_top() + MEMF(eax); /* fadd dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 4); /* fadd dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() + MEMF(eax + 8); /* fadd dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(ecx + 4);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0027267B; /* jne: not equal / not zero */

loc_00272676: ;
    PUSH32(esp, 0x0027267Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027267B: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00272692; /* jne: not equal / not zero */

loc_0027268B: ;
    ecx = ebx;
    PUSH32(esp, 0x00272692u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00272692: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002726A0
 * Original: 0x002726A0 - 0x00272DFA (1882 bytes, 628 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002726A0(void)
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

loc_002726A0: ;
    esp = esp - 0x94;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xA8);
    esi = MEM32(edi + 0xC);
    ebx = MEM32(edi + 0x10);
    MEM32(esp + 0x10) = ecx;
    ecx = esp + 0x6C;
    PUSH32(esp, 0x002726C4u); RECOMP_ABI_CALL(0x001ACE60u, sub_001ACE60); /* call 0x001ACE60 */

loc_002726C4: ;
    ebp = 0; /* xor self */
    ecx = esp + 0x88;
    MEM32(esp + 0x70) = ebp;
    MEM32(esp + 0x6C) = ebp;
    MEM32(esp + 0x74) = ebp;
    MEM32(esp + 0x78) = ebp;
    PUSH32(esp, 0x002726E2u); RECOMP_ABI_CALL(0x001ACE60u, sub_001ACE60); /* call 0x001ACE60 */

loc_002726E2: ;
    ecx = esp + 0x50;
    MEM32(esp + 0x8C) = 1;
    MEM32(esp + 0x88) = ebp;
    MEM32(esp + 0x90) = ebp;
    MEM32(esp + 0x94) = ebp;
    PUSH32(esp, 0x0027270Bu); RECOMP_ABI_CALL(0x001ACE60u, sub_001ACE60); /* call 0x001ACE60 */

loc_0027270B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    eax = MEM32(esp + 0xAC);
    MEM32(esp + 0x54) = 3;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x58) = ebp;
    MEM32(esp + 0x5C) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_002727E9; /* jne: not equal / not zero */

loc_0027272E: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    eax = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esp + 0x30) = ebp;
    MEM32(esp + 0x34) = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0027274Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027274D: ;
    esi = MEM32(esp + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272758; /* je: equal / zero */

loc_00272755: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00272758: ;
    ebx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    MEM32(esp + 0x30) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00272767; /* je: equal / zero */

loc_00272764: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00272767: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(esi);
    eax = eax | 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x18) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00272779u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272779: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272798; /* je: equal / zero */

loc_00272783: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00272798; /* jne: not equal / not zero */

loc_00272793: ;
    PUSH32(esp, 0x00272798u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00272798: ;
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(edi + 0xC) = esi;
    PUSH32(esp, 0x002727A3u); RECOMP_ABI_CALL(0x0029C1C0u, sub_0029C1C0); /* call 0x0029C1C0 */

loc_002727A3: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002727C5; /* je: equal / zero */

loc_002727AD: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_002727C5; /* jne: not equal / not zero */

loc_002727C0: ;
    PUSH32(esp, 0x002727C5u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002727C5: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002727FF; /* je: equal / zero */

loc_002727CF: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_002727FF; /* jne: not equal / not zero */

loc_002727E2: ;
    PUSH32(esp, 0x002727E7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002727E7: ;
    goto loc_002727FF;

loc_002727E9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002727F0; /* je: equal / zero */

loc_002727ED: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002727F0: ;
    eax = MEM32(ebx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x30) = esi;
    MEM32(ebx + 4) = eax;
    MEM32(esp + 0x14) = ebx;

loc_002727FF: ;
    eax = MEM32(esi);
    ebx = MEM32(esi + 0xC);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00272809u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272809: ;
    eax = MEM32(eax);
    ecx = eax;
    ecx = ecx >> 0x16;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00272823; /* je: equal / zero */

loc_00272815: ;
    edx = eax;
    edx = edx >> 0x17;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00272823; /* je: equal / zero */

loc_0027281F: ;
    SET_LO8(ecx, 0); /* xor self */
    goto loc_00272825;

loc_00272823: ;
    SET_LO8(ecx, 1);

loc_00272825: ;
    eax = eax | 0xC00000;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    MEM32(esp + 0x40) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0027284B; /* je: equal / zero */

loc_00272832: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xE8); PUSH32(esp, 0x00272847u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272847: ;
    eax = MEM32(esp + 0x40);

loc_0027284B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00272DB9; /* je: equal / zero */

loc_00272853: ;
    edx = MEM32(esp + 0xAC);
    ecx = eax;
    ecx = ecx >> 0x10;
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00272DB9; /* jle: less or equal (signed <=) */

loc_0027286A: ;
    eax = eax >> 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00272DB9; /* je: equal / zero */

loc_00272874: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00272881u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272881: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    eax = esp + 0x8C;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00272891u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272891: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x0027289Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027289E: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x002728A7u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_002728A7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002728ADu); RECOMP_ABI_CALL(0x00246660u, sub_00246660); /* call 0x00246660 */

loc_002728AD: ;
    esp = esp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    edi = eax;
    MEM32(esp + 0x18) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_002728CE; /* jl: less (signed <) */

loc_002728BA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002728C4; /* jg: greater (signed >) */

loc_002728BF: ;
    MEM32(edi + 8) = ebx;
    goto loc_002728CE;

loc_002728C4: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x002728CEu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_002728CE: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x002728D7u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_002728D7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002728DDu); RECOMP_ABI_CALL(0x00246660u, sub_00246660); /* call 0x00246660 */

loc_002728DD: ;
    esp = esp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    ebp = eax;
    MEM32(esp + 0x10) = ebp;
    if (TEST_S(_fas, _fbs)) goto loc_002728FE; /* jl: less (signed <) */

loc_002728EA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002728F4; /* jg: greater (signed >) */

loc_002728EF: ;
    MEM32(ebp + 8) = ebx;
    goto loc_002728FE;

loc_002728F4: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x002728FEu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_002728FE: ;
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x48) = 0;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x50) = 0;
    PUSH32(esp, 0x00272922u); RECOMP_ABI_CALL(0x0025E130u, sub_0025E130); /* call 0x0025E130 */

loc_00272922: ;
    edx = esp + 0x44;
    PUSH32(esp, edx);
    ecx = ebp;
    MEM32(esp + 0x48) = 0;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x50) = 0;
    PUSH32(esp, 0x00272946u); RECOMP_ABI_CALL(0x0025E130u, sub_0025E130); /* call 0x0025E130 */

loc_00272946: ;
    eax = MEM32(esp + 0xA8);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00272A26; /* jne: not equal / not zero */

loc_00272959: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00272968u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272968: ;
    ebx = eax;
    eax = MEM32(esp + 0xA8);
    eax = MEM32(eax + 0x18);
    ecx = eax + eax * 2;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00272A1A; /* jbe: below or equal (unsigned <=) */

loc_00272981: ;
    edx = MEM32(esp + 0xA8);
    eax = MEM32(edx + 0x1C);
    ecx = eax + ebp;
    edx = ZX16(MEM16(ebx + ecx * 2));
    ecx = eax + ebp;
    ecx = ZX16(MEM16(ebx + ecx * 2 + 2));
    eax = eax + ebp;
    eax = ZX16(MEM16(ebx + eax * 2 + 4));
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x20) = eax;
    eax = esp;
    MEM32(eax) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_002729B9; /* je: equal / zero */

loc_002729B6: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002729B9: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002729C9; /* je: equal / zero */

loc_002729C6: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002729C9: ;
    eax = MEM32(esp + 0x28);
    esp = esp - 0x1C;
    edi = esp;
    esp = esp - 0x1C;
    ecx = 7;
    esi = esp + 0x90;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    edi = esp;
    ecx = 7;
    esi = esp + 0xAC;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x5C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002729FFu); RECOMP_ABI_CALL(0x00272520u, sub_00272520); /* call 0x00272520 */

loc_002729FF: ;
    ecx = MEM32(esp + 0xF4);
    eax = MEM32(ecx + 0x18);
    ebp = ebp + 3;
    edx = eax + eax * 2;
    esp = esp + 0x4C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00272981; /* jb: below (unsigned <) */

loc_00272A1A: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    goto loc_00272BA8;

loc_00272A26: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00272BBD; /* jne: not equal / not zero */

loc_00272A2F: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00272A3Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272A3E: ;
    ebp = eax;
    eax = MEM32(esp + 0xA8);
    ecx = MEM32(eax + 0x18);
    edi = MEM32(eax + 0x1C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x1C) = ebx;
    if (CMP_BE(_fa & _fb, 0)) goto loc_00272BA1; /* jbe: below or equal (unsigned <=) */

loc_00272A5F: ;
    /* nop */

loc_00272A60: ;
    ecx = MEM32(esp + 0xA8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x9C); PUSH32(esp, 0x00272A70u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272A70: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x34) = 2;
    if (CMP_BE(_fa, _fb)) goto loc_00272B84; /* jbe: below or equal (unsigned <=) */

loc_00272A87: ;
    ecx = edi + edi + 4;
    ebx = edi + edi + 2;
    eax = edi + edi;
    MEM32(esp + 0x3C) = ecx;
    goto loc_00272AA0;

    /* nop */
    /* nop */

loc_00272AA0: ;
    ecx = ZX16(MEM16(ecx + ebp));
    eax = ZX16(MEM16(eax + ebp));
    edx = ZX16(MEM16(ebx + ebp));
    MEM32(esp + 0x38) = ecx;
    _fa = (uint32_t)(MEM8(esp + 0x34)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x34), 1 (8-bit) */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    esi = esp;
    MEM32(esi) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00272B06; /* je: equal / zero */

loc_00272AC0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00272AC7; /* je: equal / zero */

loc_00272AC4: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00272AC7: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    esi = esp;
    MEM32(esi) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00272AD7; /* je: equal / zero */

loc_00272AD4: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00272AD7: ;
    esp = esp - 0x1C;
    edi = esp;
    esp = esp - 0x1C;
    ecx = 7;
    esi = esp + 0x90;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    edi = esp;
    ecx = 7;
    esi = esp + 0xAC;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x78);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    goto loc_00272B4A;

loc_00272B06: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00272B0D; /* je: equal / zero */

loc_00272B0A: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00272B0D: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    esi = esp;
    MEM32(esi) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00272B1D; /* je: equal / zero */

loc_00272B1A: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00272B1D: ;
    esp = esp - 0x1C;
    edi = esp;
    esp = esp - 0x1C;
    ecx = 7;
    esi = esp + 0x90;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    edi = esp;
    ecx = 7;
    esi = esp + 0xAC;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x78);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);

loc_00272B4A: ;
    PUSH32(esp, 0x00272B4Fu); RECOMP_ABI_CALL(0x00272520u, sub_00272520); /* call 0x00272520 */

loc_00272B4F: ;
    ecx = MEM32(esp + 0x88);
    edx = MEM32(esp + 0x80);
    esi = MEM32(esp + 0x78);
    esp = esp + 0x4C;
    eax = ebx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ecx;
    ecx = ecx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x3C) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_00272AA0; /* jb: below (unsigned <) */

loc_00272B7C: ;
    ebx = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x20);

loc_00272B84: ;
    edx = MEM32(esp + 0xA8);
    eax = MEM32(edx + 0x18);
    edi = edi + esi;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x1C) = ebx;
    if (CMP_B(_fa, _fb)) goto loc_00272A60; /* jb: below (unsigned <) */

loc_00272BA1: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);

loc_00272BA8: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x00272BB1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272BB1: ;
    ebp = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x30);

loc_00272BBD: ;
    eax = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00272D09; /* jbe: below or equal (unsigned <=) */

loc_00272BCA: ;
    edx = 0; /* xor self */
    /* nop */

loc_00272BD0: ;
    ecx = MEM32(edi + 0x10);
    fp_push(MEMF(ecx + edx + 8)); /* fld float */
    ecx = ecx + edx;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x401650)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x401650] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00272C3F; /* jne: not equal / not zero */

loc_00272C03: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ecx + 4); /* fmul dword ptr [ecx + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(ecx + 8); /* fmul dword ptr [ecx + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00272C65;

loc_00272C3F: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00272C65; /* je: equal / zero */

loc_00272C46: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00272C65; /* jl: less (signed <) */

loc_00272C4A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00272C65; /* jge: greater or equal (signed >=) */

loc_00272C4E: ;
    eax = MEM32(0x46D194);
    MEM32(ecx) = eax;
    eax = MEM32(0x46D198);
    MEM32(ecx + 4) = eax;
    eax = MEM32(0x46D19C);
    MEM32(ecx + 8) = eax;

loc_00272C65: ;
    ecx = MEM32(ebp + 0x10);
    fp_push(MEMF(ecx + edx + 8)); /* fld float */
    ecx = ecx + edx;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x401650)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x401650] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00272CD4; /* jne: not equal / not zero */

loc_00272C98: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 3) & 7]; /* fmul st(3) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = fp_top() * g_fp_stack[(g_fp_top + 4) & 7]; /* fmul st(4) */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ecx); /* fmul dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ecx + 4); /* fmul dword ptr [ecx + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = fp_top() * MEMF(ecx + 8); /* fmul dword ptr [ecx + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00272CFA;

loc_00272CD4: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00272CFA; /* je: equal / zero */

loc_00272CDB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00272CFA; /* jl: less (signed <) */

loc_00272CDF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00272CFA; /* jge: greater or equal (signed >=) */

loc_00272CE3: ;
    eax = MEM32(0x46D194);
    MEM32(ecx) = eax;
    eax = MEM32(0x46D198);
    MEM32(ecx + 4) = eax;
    eax = MEM32(0x46D19C);
    MEM32(ecx + 8) = eax;

loc_00272CFA: ;
    eax = MEM32(esi + 0xC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00272BD0; /* jb: below (unsigned <) */

loc_00272D09: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00272D17u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272D17: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x8C;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00272D28u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272D28: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00272D36u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272D36: ;
    ebx = MEM32(esp + 0xA8);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00272D4Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272D4D: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00272D5Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272D5D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    ebx = 0x7FFFFF;
    if (TEST_Z(_fa, _fb)) goto loc_00272D7A; /* je: equal / zero */

loc_00272D66: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00272D7A; /* jne: not equal / not zero */

loc_00272D73: ;
    ecx = ebp;
    PUSH32(esp, 0x00272D7Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00272D7A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00272D92; /* je: equal / zero */

loc_00272D7E: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00272D92; /* jne: not equal / not zero */

loc_00272D8B: ;
    ecx = edi;
    PUSH32(esp, 0x00272D92u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00272D92: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00272DAC; /* je: equal / zero */

loc_00272D9A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00272DAC; /* jne: not equal / not zero */

loc_00272DA7: ;
    PUSH32(esp, 0x00272DACu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00272DAC: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    MEM32(esi + 4) = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    goto loc_00272DE4;

loc_00272DB9: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00272DD6; /* je: equal / zero */

loc_00272DC1: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00272DD6; /* jne: not equal / not zero */

loc_00272DD1: ;
    PUSH32(esp, 0x00272DD6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00272DD6: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    MEM32(esi + 4) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */

loc_00272DE4: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00272DED; /* jne: not equal / not zero */

loc_00272DE6: ;
    ecx = esi;
    PUSH32(esp, 0x00272DEDu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00272DED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x94;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00272E00
 * Original: 0x00272E00 - 0x00273015 (533 bytes, 191 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00272E00(void)
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

loc_00272E00: ;
    esp = esp - 0x2C;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x38);
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), 3 (32-bit) */
    esi = ecx;
    MEM32(esp + 0xC) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0027300D; /* jne: not equal / not zero */

loc_00272E19: ;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00272E26; /* je: equal / zero */

loc_00272E20: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00272E26u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272E26: ;
    edi = MEM32(edi + 0xC);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = MEM32(edi + 0xC);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00272E34u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272E34: ;
    eax = MEM32(eax);
    ecx = eax;
    ecx = ecx >> 1;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027300C; /* jne: not equal / not zero */

loc_00272E43: ;
    eax = eax | 2;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00272E52u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00272E52: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00272E58u); RECOMP_ABI_CALL(0x001DECD0u, sub_001DECD0); /* call 0x001DECD0 */

loc_00272E58: ;
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    esi = eax;
    edx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00272E6Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272E6E: ;
    ecx = MEM32(esp + 0x10);
    ecx = ecx & 0xFFFFFFFDu;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_BE(_fa & _fb, 0)) goto loc_00272E97; /* jbe: below or equal (unsigned <=) */

loc_00272E7F: ;
    /* nop */

loc_00272E80: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00272E92u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272E92: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00272E80; /* jb: below (unsigned <) */

loc_00272E97: ;
    ebx = MEM32(esp + 0x40);
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00272FD2; /* jle: less or equal (signed <=) */

loc_00272EA6: ;
    ebp = 2;
    MEM32(esp + 0x14) = eax;
    /* nop */

loc_00272EB0: ;
    edx = MEM32(edi);
    eax = ebp + -2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x00272EBBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272EBB: ;
    edx = MEM32(edi);
    ebx = eax;
    eax = ebp + -1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x00272EC8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272EC8: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x30) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x34) = edx;
    eax = MEM32(eax + 8);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    MEM32(esp + 0x3C) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x00272EE4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272EE4: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x24) = ecx;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    edx = MEM32(eax + 4);
    MEM32(esp + 0x28) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x2C) = eax;
    fp_top() = fp_top() - MEMF(ebx); /* fsub dword ptr [ebx] */
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esp + 0x34;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    PUSH32(esp, edx);
    fp_top() = fp_top() - MEMF(ebx + 4); /* fsub dword ptr [ebx + 4] */
    ecx = esp + 0x20;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = fp_top() - MEMF(ebx + 8); /* fsub dword ptr [ebx + 8] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = fp_top() - MEMF(ebx); /* fsub dword ptr [ebx] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fp_top() - MEMF(ebx + 4); /* fsub dword ptr [ebx + 4] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() - MEMF(ebx + 8); /* fsub dword ptr [ebx + 8] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00272F4Bu); RECOMP_ABI_CALL(0x0023FB50u, sub_0023FB50); /* call 0x0023FB50 */

loc_00272F4B: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    eax = esp + 0x18;
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x20); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x1C); /* fmul dword ptr [esp + 0x1c] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = MEMF(0x3C6E40) / fp_top(); /* fdivr dword ptr [0x3c6e40] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() * fp_st1(); /* fmul st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    fp_pop(); /* fstp st(0) */
    eax = ebp + -2;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00272F9Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272F9F: ;
    edx = MEM32(esi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -1;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00272FAFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272FAF: ;
    edx = MEM32(esi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00272FBCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00272FBC: ;
    eax = MEM32(esp + 0x14);
    ebp = ebp + 3;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_00272EB0; /* jne: not equal / not zero */

loc_00272FCE: ;
    ebx = MEM32(esp + 0x40);

loc_00272FD2: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00272FF1; /* je: equal / zero */

loc_00272FDC: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00272FF1; /* jne: not equal / not zero */

loc_00272FEC: ;
    PUSH32(esp, 0x00272FF1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00272FF1: ;
    MEM32(ebx + 0xC) = esi;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_0027300C; /* jne: not equal / not zero */

loc_00273005: ;
    ecx = esi;
    PUSH32(esp, 0x0027300Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027300C: ;
    POP32(esp, ebp);

loc_0027300D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x2C;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00273020
 * Original: 0x00273020 - 0x00273245 (549 bytes, 205 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273020(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00273020: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), 3 (32-bit) */
    ebp = ecx;
    MEM32(esp + 0x10) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_0027323D; /* jne: not equal / not zero */

loc_00273039: ;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027323D; /* jne: not equal / not zero */

loc_00273044: ;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027323D; /* je: equal / zero */

loc_0027304F: ;
    edx = MEM32(ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0027305Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027305B: ;
    ecx = MEM32(edi + 0x10);
    esi = MEM32(edi);
    eax = 0xAAAAAAABu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(ecx + 0x10);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    ecx = edi;
    { uint32_t _icall_target = MEM32(esi + 0x94); PUSH32(esp, 0x00273077u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00273077: ;
    esi = MEM32(edi + 0x10);
    edi = MEM32(edi + 0xC);
    edx = MEM32(esi + 0x10);
    ebx = MEM32(edi + 0xC);
    ecx = ebp;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x24) = ebx;
    PUSH32(esp, 0x00273096u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00273096: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027309Cu); RECOMP_ABI_CALL(0x00214B60u, sub_00214B60); /* call 0x00214B60 */

loc_0027309C: ;
    ebp = 0; /* xor self */
    esp = esp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    edi = eax;
    MEM32(esp + 0x28) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_002730BF; /* jl: less (signed <) */

loc_002730AB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002730B5; /* jg: greater (signed >) */

loc_002730B0: ;
    MEM32(edi + 8) = ebx;
    goto loc_002730BF;

loc_002730B5: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x002730BFu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_002730BF: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0x002730CFu); RECOMP_ABI_CALL(0x00200140u, sub_00200140); /* call 0x00200140 */

loc_002730CF: ;
    ecx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_BE(_fa & _fb, 0)) goto loc_0027310F; /* jbe: below or equal (unsigned <=) */

loc_002730DD: ;
    /* nop */

loc_002730E0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x002730EBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002730EB: ;
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00273102; /* je: equal / zero */

loc_002730F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00273102; /* jl: less (signed <) */

loc_002730F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00273102; /* jge: greater or equal (signed >=) */

loc_002730FA: ;
    ecx = MEM32(edi + 0x10);
    eax = ecx + eax * 4;
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00273102: ;
    eax = MEM32(esp + 0x10);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002730E0; /* jb: below (unsigned <) */

loc_0027310B: ;
    eax = MEM32(esp + 0x14);

loc_0027310F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00273126; /* jbe: below or equal (unsigned <=) */

loc_00273113: ;
    edi = MEM32(edi + 0x10);

loc_00273116: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0027311C; /* jbe: below or equal (unsigned <=) */

loc_0027311B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027311C: ;
    edi = edi + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00273116; /* jne: not equal / not zero */

loc_00273122: ;
    MEM32(esp + 0x14) = eax;

loc_00273126: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x0027312Fu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027312F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00273135u); RECOMP_ABI_CALL(0x001DECD0u, sub_001DECD0); /* call 0x001DECD0 */

loc_00273135: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(ecx);
    esp = esp + 4;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00273143u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00273143: ;
    eax = MEM32(eax);
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi + 0x18);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00273160u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00273160: ;
    eax = MEM32(esp + 0x24);
    ebx = 0; /* xor self */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x14) = ebx;
    if (CMP_BE(_fa & _fb, 0)) goto loc_002731D3; /* jbe: below or equal (unsigned <=) */

loc_00273170: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(MEM32(edx + ebx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + ebx * 4), 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00273196; /* jbe: below or equal (unsigned <=) */

loc_0027317D: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ecx);
    edx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x00273193u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00273193: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002731C6;

loc_00273196: ;
    eax = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_002731C2; /* jbe: below or equal (unsigned <=) */

loc_002731A0: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x002731ABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002731AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002731B9; /* jbe: below or equal (unsigned <=) */

loc_002731AF: ;
    edx = MEM32(esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x002731B9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002731B9: ;
    eax = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002731A0; /* jb: below (unsigned <) */

loc_002731C2: ;
    ebx = MEM32(esp + 0x14);

loc_002731C6: ;
    eax = MEM32(esp + 0x24);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x14) = ebx;
    if (CMP_B(_fa, _fb)) goto loc_00273170; /* jb: below (unsigned <) */

loc_002731D3: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xB4); PUSH32(esp, 0x002731DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002731DD: ;
    ecx = MEM32(edi + 4);
    esi = MEM32(esp + 0x30);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 4) = ecx;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00273204; /* je: equal / zero */

loc_002731EF: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00273204; /* jne: not equal / not zero */

loc_002731FF: ;
    PUSH32(esp, 0x00273204u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273204: ;
    MEM32(esi + 0xC) = edi;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    POP32(esp, esi);
    MEM32(edi + 4) = ecx;
    POP32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_00273220; /* jne: not equal / not zero */

loc_00273219: ;
    ecx = edi;
    PUSH32(esp, 0x00273220u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273220: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027323D; /* je: equal / zero */

loc_00273228: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027323D; /* jne: not equal / not zero */

loc_00273238: ;
    PUSH32(esp, 0x0027323Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027323D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00273250
 * Original: 0x00273250 - 0x00273277 (39 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273250(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00273250: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0027325Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027325A: ;
    ecx = eax;
    PUSH32(esp, 0x00273261u); RECOMP_ABI_CALL(0x001EA440u, sub_001EA440); /* call 0x001EA440 */

loc_00273261: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027326F; /* jne: not equal / not zero */

loc_00273265: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x0027326Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027326F: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00268400(); return; /* tail jmp 0x00268400 */

}

/**
 * sub_00273280
 * Original: 0x00273280 - 0x002732D5 (85 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273280(void)
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

loc_00273280: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002732B4; /* je: equal / zero */

loc_0027328A: ;
    _fa = (uint32_t)(MEM8(esi + 0x7C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x7C), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002732B4; /* je: equal / zero */

loc_00273290: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(esp + 8);
    fp_top() = fp_top() * MEMF(0x3FEDF0); /* fmul dword ptr [0x3fedf0] */
    MEM32(esi + 0x2C) = eax;
    PUSH32(esp, 0x002732A6u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_002732A6: ;
    ecx = esi;
    MEM8(esi + 0x7C) = LO8(eax);
    PUSH32(esp, 0x002732B0u); RECOMP_ABI_CALL(0x0025E0F0u, sub_0025E0F0); /* call 0x0025E0F0 */

loc_002732B0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_002732B4: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    ecx = MEM32(esp + 8);
    fp_top() = fp_top() * MEMF(0x3FEDF0); /* fmul dword ptr [0x3fedf0] */
    MEM32(esi + 0x2C) = ecx;
    PUSH32(esp, 0x002732CAu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_002732CA: ;
    MEM8(esi + 0x7C) = LO8(eax);
    MEM8(esi + 0x3C) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002732E0
 * Original: 0x002732E0 - 0x00273928 (1608 bytes, 555 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002732E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002732E0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002732EBu); RECOMP_ABI_CALL(0x00259780u, sub_00259780); /* call 0x00259780 */

loc_002732EB: ;
    eax = MEM32(0x5BDF28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00273924; /* jne: not equal / not zero */

loc_002732F8: ;
    eax = MEM32(0x46A680);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00273306u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00273306: ;
    esi = eax;
    eax = MEM32(0x5BDF28);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    ebp = 0x7FFFFF;
    if (TEST_Z(_fa, _fb)) goto loc_0027332F; /* je: equal / zero */

loc_0027331B: ;
    ebx = MEM32(eax + 4);
    eax = eax + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, edx (32-bit) */
    MEM32(eax) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027332F; /* jne: not equal / not zero */

loc_0027332A: ;
    PUSH32(esp, 0x0027332Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027332F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00273335u); RECOMP_ABI_CALL(0x00295770u, sub_00295770); /* call 0x00295770 */

loc_00273335: ;
    esp = esp + 4;
    MEM32(0x5BDF28) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00273346u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00273346: ;
    ecx = MEM32(0x5BDF28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00273353u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00273353: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027335Fu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0027335F: ;
    esi = eax;
    eax = MEM32(0x5BDF54);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00273383; /* je: equal / zero */

loc_0027336F: ;
    ebx = MEM32(eax + 4);
    eax = eax + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, edx (32-bit) */
    MEM32(eax) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_00273383; /* jne: not equal / not zero */

loc_0027337E: ;
    PUSH32(esp, 0x00273383u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273383: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00273389u); RECOMP_ABI_CALL(0x00295770u, sub_00295770); /* call 0x00295770 */

loc_00273389: ;
    esp = esp + 4;
    MEM32(0x5BDF54) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0027339Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027339A: ;
    ecx = MEM32(0x5BDF54);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x002733A7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002733A7: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002733B3u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002733B3: ;
    esi = eax;
    eax = MEM32(0x5BDF48);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002733D7; /* je: equal / zero */

loc_002733C3: ;
    ebx = MEM32(eax + 4);
    eax = eax + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, edx (32-bit) */
    MEM32(eax) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_002733D7; /* jne: not equal / not zero */

loc_002733D2: ;
    PUSH32(esp, 0x002733D7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002733D7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002733DDu); RECOMP_ABI_CALL(0x00295770u, sub_00295770); /* call 0x00295770 */

loc_002733DD: ;
    esp = esp + 4;
    MEM32(0x5BDF48) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x002733EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002733EE: ;
    ecx = MEM32(0x5BDF48);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x002733FBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002733FB: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00273407u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00273407: ;
    esi = eax;
    eax = MEM32(0x5BDF4C);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0027342B; /* je: equal / zero */

loc_00273417: ;
    ebx = MEM32(eax + 4);
    eax = eax + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, edx (32-bit) */
    MEM32(eax) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027342B; /* jne: not equal / not zero */

loc_00273426: ;
    PUSH32(esp, 0x0027342Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027342B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00273431u); RECOMP_ABI_CALL(0x00295770u, sub_00295770); /* call 0x00295770 */

loc_00273431: ;
    esp = esp + 4;
    MEM32(0x5BDF4C) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00273442u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00273442: ;
    ecx = MEM32(0x5BDF4C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0027344Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027344F: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027345Bu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0027345B: ;
    esi = eax;
    eax = MEM32(0x5BDF68);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0027347F; /* je: equal / zero */

loc_0027346B: ;
    ebx = MEM32(eax + 4);
    eax = eax + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, edx (32-bit) */
    MEM32(eax) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027347F; /* jne: not equal / not zero */

loc_0027347A: ;
    PUSH32(esp, 0x0027347Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027347F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00273485u); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_00273485: ;
    esp = esp + 4;
    MEM32(0x5BDF68) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00273496u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00273496: ;
    ecx = MEM32(0x5BDF68);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x002734A3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002734A3: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002734AFu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002734AF: ;
    esi = eax;
    eax = MEM32(0x5BDF60);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002734D3; /* je: equal / zero */

loc_002734BF: ;
    ebx = MEM32(eax + 4);
    eax = eax + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, edx (32-bit) */
    MEM32(eax) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_002734D3; /* jne: not equal / not zero */

loc_002734CE: ;
    PUSH32(esp, 0x002734D3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002734D3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002734D9u); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_002734D9: ;
    esp = esp + 4;
    MEM32(0x5BDF60) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x002734EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002734EA: ;
    ecx = MEM32(0x5BDF60);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x002734F7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002734F7: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00273503u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00273503: ;
    esi = eax;
    eax = MEM32(0x5BDF5C);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00273527; /* je: equal / zero */

loc_00273513: ;
    ebx = MEM32(eax + 4);
    eax = eax + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, edx (32-bit) */
    MEM32(eax) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_00273527; /* jne: not equal / not zero */

loc_00273522: ;
    PUSH32(esp, 0x00273527u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273527: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027352Du); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_0027352D: ;
    esp = esp + 4;
    MEM32(0x5BDF5C) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0027353Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027353E: ;
    ecx = MEM32(0x5BDF5C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0027354Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027354B: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00273557u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00273557: ;
    esi = eax;
    eax = MEM32(0x5BDF40);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0027357B; /* je: equal / zero */

loc_00273567: ;
    ebx = MEM32(eax + 4);
    eax = eax + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, edx (32-bit) */
    MEM32(eax) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027357B; /* jne: not equal / not zero */

loc_00273576: ;
    PUSH32(esp, 0x0027357Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027357B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00273581u); RECOMP_ABI_CALL(0x002956F0u, sub_002956F0); /* call 0x002956F0 */

loc_00273581: ;
    esp = esp + 4;
    MEM32(0x5BDF40) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00273592u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00273592: ;
    ecx = MEM32(0x5BDF40);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0027359Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027359F: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002735ABu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002735AB: ;
    esi = eax;
    eax = MEM32(0x5BDF3C);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002735CF; /* je: equal / zero */

loc_002735BB: ;
    ebx = MEM32(eax + 4);
    eax = eax + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, edx (32-bit) */
    MEM32(eax) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_002735CF; /* jne: not equal / not zero */

loc_002735CA: ;
    PUSH32(esp, 0x002735CFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002735CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002735D5u); RECOMP_ABI_CALL(0x002968D0u, sub_002968D0); /* call 0x002968D0 */

loc_002735D5: ;
    esp = esp + 4;
    MEM32(0x5BDF3C) = eax;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x002735E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002735E6: ;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002735F1u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002735F1: ;
    esi = eax;
    eax = MEM32(0x5BDF2C);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00273615; /* je: equal / zero */

loc_00273601: ;
    ebx = MEM32(eax + 4);
    eax = eax + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, edx (32-bit) */
    MEM32(eax) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_00273615; /* jne: not equal / not zero */

loc_00273610: ;
    PUSH32(esp, 0x00273615u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273615: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027361Bu); RECOMP_ABI_CALL(0x00297410u, sub_00297410); /* call 0x00297410 */

loc_0027361B: ;
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(0x5BDF2C) = eax;
    edx = MEM32(eax);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00273632u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00273632: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0027363Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027363B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00273921; /* je: equal / zero */

loc_00273643: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027364Fu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0027364F: ;
    esi = eax;
    eax = MEM32(0x5BDEDC);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00273673; /* je: equal / zero */

loc_0027365F: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, edx (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_00273673; /* jne: not equal / not zero */

loc_0027366E: ;
    PUSH32(esp, 0x00273673u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273673: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00273679u); RECOMP_ABI_CALL(0x00296360u, sub_00296360); /* call 0x00296360 */

loc_00273679: ;
    MEM32(0x5BDEDC) = eax;
    MEM32(eax + 0xC) = 2;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00273691u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00273691: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00273697u); RECOMP_ABI_CALL(0x00296280u, sub_00296280); /* call 0x00296280 */

loc_00273697: ;
    esp = esp + 0xC;
    edi = eax;
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0x46DBC8);
    ecx = edi;
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0x002736B1u); RECOMP_ABI_CALL(0x00293FD0u, sub_00293FD0); /* call 0x00293FD0 */

loc_002736B1: ;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002736BCu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002736BC: ;
    esi = eax;
    eax = MEM32(0x5BDF44);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002736E0; /* je: equal / zero */

loc_002736CC: ;
    ebx = MEM32(eax + 4);
    eax = eax + 4;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, edx (32-bit) */
    MEM32(eax) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_002736E0; /* jne: not equal / not zero */

loc_002736DB: ;
    PUSH32(esp, 0x002736E0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002736E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002736E6u); RECOMP_ABI_CALL(0x002961E0u, sub_002961E0); /* call 0x002961E0 */

loc_002736E6: ;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(0x5BDF44) = eax;
    esi = eax + 0xC;
    if (TEST_Z(_fa, _fb)) goto loc_002736F8; /* je: equal / zero */

loc_002736F5: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002736F8: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00273710; /* je: equal / zero */

loc_002736FE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00273710; /* jne: not equal / not zero */

loc_0027370B: ;
    PUSH32(esp, 0x00273710u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273710: ;
    MEM32(esi) = edi;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027371Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0027371E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00273724u); RECOMP_ABI_CALL(0x00296280u, sub_00296280); /* call 0x00296280 */

loc_00273724: ;
    esp = esp + 8;
    ebx = eax;
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0x46DAD8);
    ecx = ebx;
    PUSH32(esp, 0x0027373Au); RECOMP_ABI_CALL(0x00293FD0u, sub_00293FD0); /* call 0x00293FD0 */

loc_0027373A: ;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00273746u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00273746: ;
    esi = eax;
    eax = MEM32(0x5BDF30);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0027376A; /* je: equal / zero */

loc_00273756: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, edx (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_0027376A; /* jne: not equal / not zero */

loc_00273765: ;
    PUSH32(esp, 0x0027376Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027376A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00273770u); RECOMP_ABI_CALL(0x002961E0u, sub_002961E0); /* call 0x002961E0 */

loc_00273770: ;
    esp = esp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(0x5BDF30) = eax;
    esi = eax + 0xC;
    if (TEST_Z(_fa, _fb)) goto loc_00273782; /* je: equal / zero */

loc_0027377F: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00273782: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027379A; /* je: equal / zero */

loc_00273788: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027379A; /* jne: not equal / not zero */

loc_00273795: ;
    PUSH32(esp, 0x0027379Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027379A: ;
    MEM32(esi) = ebx;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002737A7u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002737A7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002737ADu); RECOMP_ABI_CALL(0x00296280u, sub_00296280); /* call 0x00296280 */

loc_002737AD: ;
    esp = esp + 8;
    edi = eax;
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0x46DCB8);
    ecx = edi;
    PUSH32(esp, 0x002737C3u); RECOMP_ABI_CALL(0x00293FD0u, sub_00293FD0); /* call 0x00293FD0 */

loc_002737C3: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002737CFu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002737CF: ;
    esi = eax;
    eax = MEM32(0x5BDF50);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002737F1; /* je: equal / zero */

loc_002737DF: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, edx (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002737F1; /* jne: not equal / not zero */

loc_002737EC: ;
    PUSH32(esp, 0x002737F1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002737F1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002737F7u); RECOMP_ABI_CALL(0x002961E0u, sub_002961E0); /* call 0x002961E0 */

loc_002737F7: ;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(0x5BDF50) = eax;
    esi = eax + 0xC;
    if (TEST_Z(_fa, _fb)) goto loc_00273809; /* je: equal / zero */

loc_00273806: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00273809: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00273821; /* je: equal / zero */

loc_0027380F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00273821; /* jne: not equal / not zero */

loc_0027381C: ;
    PUSH32(esp, 0x00273821u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273821: ;
    MEM32(esi) = edi;
    edx = MEM32(0x46A680);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027382Fu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0027382F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00273835u); RECOMP_ABI_CALL(0x00296280u, sub_00296280); /* call 0x00296280 */

loc_00273835: ;
    esp = esp + 8;
    esi = eax;
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0x46DDA8);
    ecx = esi;
    PUSH32(esp, 0x0027384Bu); RECOMP_ABI_CALL(0x00293FD0u, sub_00293FD0); /* call 0x00293FD0 */

loc_0027384B: ;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00273856u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00273856: ;
    ebp = eax;
    eax = MEM32(0x5BDF24);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0027387C; /* je: equal / zero */

loc_00273866: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027387C; /* jne: not equal / not zero */

loc_00273877: ;
    PUSH32(esp, 0x0027387Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027387C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00273882u); RECOMP_ABI_CALL(0x002961E0u, sub_002961E0); /* call 0x002961E0 */

loc_00273882: ;
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(0x5BDF24) = eax;
    ebp = eax + 0xC;
    if (TEST_Z(_fa, _fb)) goto loc_00273894; /* je: equal / zero */

loc_00273891: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00273894: ;
    ecx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002738B0; /* je: equal / zero */

loc_0027389B: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002738B0; /* jne: not equal / not zero */

loc_002738AB: ;
    PUSH32(esp, 0x002738B0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002738B0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(ebp) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_002738CE; /* je: equal / zero */

loc_002738B7: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002738CE; /* jne: not equal / not zero */

loc_002738C7: ;
    ecx = esi;
    PUSH32(esp, 0x002738CEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002738CE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002738E9; /* je: equal / zero */

loc_002738D2: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002738E9; /* jne: not equal / not zero */

loc_002738E2: ;
    ecx = edi;
    PUSH32(esp, 0x002738E9u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002738E9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00273904; /* je: equal / zero */

loc_002738ED: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00273904; /* jne: not equal / not zero */

loc_002738FD: ;
    ecx = ebx;
    PUSH32(esp, 0x00273904u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273904: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00273921; /* je: equal / zero */

loc_0027390C: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00273921; /* jne: not equal / not zero */

loc_0027391C: ;
    PUSH32(esp, 0x00273921u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273921: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00273924: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00273930
 * Original: 0x00273930 - 0x00273B88 (600 bytes, 188 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273930(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00273930: ;
    eax = MEM32(0x5BDF28);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00273957; /* je: equal / zero */

loc_00273941: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00273957; /* jne: not equal / not zero */

loc_00273952: ;
    PUSH32(esp, 0x00273957u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273957: ;
    eax = MEM32(0x5BDF54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x5BDF28) = esi;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0027397E; /* je: equal / zero */

loc_00273968: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027397E; /* jne: not equal / not zero */

loc_00273979: ;
    PUSH32(esp, 0x0027397Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027397E: ;
    eax = MEM32(0x5BDF48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x5BDF54) = esi;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002739A5; /* je: equal / zero */

loc_0027398F: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002739A5; /* jne: not equal / not zero */

loc_002739A0: ;
    PUSH32(esp, 0x002739A5u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002739A5: ;
    eax = MEM32(0x5BDF4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x5BDF48) = esi;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002739CC; /* je: equal / zero */

loc_002739B6: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002739CC; /* jne: not equal / not zero */

loc_002739C7: ;
    PUSH32(esp, 0x002739CCu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002739CC: ;
    eax = MEM32(0x5BDF68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x5BDF4C) = esi;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002739F3; /* je: equal / zero */

loc_002739DD: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002739F3; /* jne: not equal / not zero */

loc_002739EE: ;
    PUSH32(esp, 0x002739F3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002739F3: ;
    eax = MEM32(0x5BDF60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x5BDF68) = esi;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00273A1A; /* je: equal / zero */

loc_00273A04: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00273A1A; /* jne: not equal / not zero */

loc_00273A15: ;
    PUSH32(esp, 0x00273A1Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273A1A: ;
    eax = MEM32(0x5BDF5C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x5BDF60) = esi;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00273A41; /* je: equal / zero */

loc_00273A2B: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00273A41; /* jne: not equal / not zero */

loc_00273A3C: ;
    PUSH32(esp, 0x00273A41u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273A41: ;
    eax = MEM32(0x5BDF40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x5BDF5C) = esi;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00273A68; /* je: equal / zero */

loc_00273A52: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00273A68; /* jne: not equal / not zero */

loc_00273A63: ;
    PUSH32(esp, 0x00273A68u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273A68: ;
    eax = MEM32(0x5BDF3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x5BDF40) = esi;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00273A8F; /* je: equal / zero */

loc_00273A79: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00273A8F; /* jne: not equal / not zero */

loc_00273A8A: ;
    PUSH32(esp, 0x00273A8Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273A8F: ;
    eax = MEM32(0x5BDF2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x5BDF3C) = esi;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00273AB6; /* je: equal / zero */

loc_00273AA0: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00273AB6; /* jne: not equal / not zero */

loc_00273AB1: ;
    PUSH32(esp, 0x00273AB6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273AB6: ;
    eax = MEM32(0x5BDEDC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x5BDF2C) = esi;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00273ADD; /* je: equal / zero */

loc_00273AC7: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00273ADD; /* jne: not equal / not zero */

loc_00273AD8: ;
    PUSH32(esp, 0x00273ADDu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273ADD: ;
    eax = MEM32(0x5BDF44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x5BDEDC) = esi;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00273B04; /* je: equal / zero */

loc_00273AEE: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00273B04; /* jne: not equal / not zero */

loc_00273AFF: ;
    PUSH32(esp, 0x00273B04u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273B04: ;
    eax = MEM32(0x5BDF30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x5BDF44) = esi;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00273B2B; /* je: equal / zero */

loc_00273B15: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00273B2B; /* jne: not equal / not zero */

loc_00273B26: ;
    PUSH32(esp, 0x00273B2Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273B2B: ;
    eax = MEM32(0x5BDF50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x5BDF30) = esi;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00273B52; /* je: equal / zero */

loc_00273B3C: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00273B52; /* jne: not equal / not zero */

loc_00273B4D: ;
    PUSH32(esp, 0x00273B52u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273B52: ;
    eax = MEM32(0x5BDF24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(0x5BDF50) = esi;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00273B79; /* je: equal / zero */

loc_00273B63: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00273B79; /* jne: not equal / not zero */

loc_00273B74: ;
    PUSH32(esp, 0x00273B79u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273B79: ;
    ecx = edi;
    POP32(esp, edi);
    MEM32(0x5BDF24) = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00268490(); return; /* tail jmp 0x00268490 */

}

/**
 * sub_00273B90
 * Original: 0x00273B90 - 0x00273C52 (194 bytes, 65 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00273B90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00273B99u); RECOMP_ABI_CALL(0x00268940u, sub_00268940); /* call 0x00268940 */

loc_00273B99: ;
    ebx = 0; /* xor self */
    MEM8(esi + 0x70) = LO8(ebx);
    ecx = MEM32(esi + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273BBA; /* je: equal / zero */

loc_00273BA5: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00273BBA; /* jne: not equal / not zero */

loc_00273BB5: ;
    PUSH32(esp, 0x00273BBAu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273BBA: ;
    MEM32(esi + 0x74) = ebx;
    ecx = MEM32(esi + 0x78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273BD9; /* je: equal / zero */

loc_00273BC4: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00273BD9; /* jne: not equal / not zero */

loc_00273BD4: ;
    PUSH32(esp, 0x00273BD9u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273BD9: ;
    MEM32(esi + 0x78) = ebx;
    MEM8(esi + 0x7C) = 0xFF;
    ecx = MEM32(esi + 0x80);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273BFF; /* je: equal / zero */

loc_00273BEA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00273BFF; /* jne: not equal / not zero */

loc_00273BFA: ;
    PUSH32(esp, 0x00273BFFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273BFF: ;
    MEM32(esi + 0x80) = ebx;
    ecx = MEM32(esi + 0x84);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273C24; /* je: equal / zero */

loc_00273C0F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00273C24; /* jne: not equal / not zero */

loc_00273C1F: ;
    PUSH32(esp, 0x00273C24u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273C24: ;
    MEM32(esi + 0x84) = ebx;
    ecx = MEM32(esi + 0x88);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00273C49; /* je: equal / zero */

loc_00273C34: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00273C49; /* jne: not equal / not zero */

loc_00273C44: ;
    PUSH32(esp, 0x00273C49u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273C49: ;
    MEM32(esi + 0x88) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00273C60
 * Original: 0x00273C60 - 0x00273F9D (829 bytes, 287 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273C60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00273C60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x58) (32-bit) */
    PUSH32(esp, edi);
    MEM8(esi + 0x48) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00273CDB; /* jne: not equal / not zero */

loc_00273C72: ;
    ecx = esi;
    PUSH32(esp, 0x00273C79u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00273C79: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00273C7Fu); RECOMP_ABI_CALL(0x00295A60u, sub_00295A60); /* call 0x00295A60 */

loc_00273C7F: ;
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00273C8B; /* je: equal / zero */

loc_00273C88: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00273C8B: ;
    ecx = MEM32(esi + 0x68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00273CA7; /* je: equal / zero */

loc_00273C92: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00273CA7; /* jne: not equal / not zero */

loc_00273CA2: ;
    PUSH32(esp, 0x00273CA7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273CA7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esi + 0x68) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_00273CC5; /* je: equal / zero */

loc_00273CAE: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00273CC5; /* jne: not equal / not zero */

loc_00273CBE: ;
    ecx = edi;
    PUSH32(esp, 0x00273CC5u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273CC5: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00273CCFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00273CCF: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(esi + 0x38);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00273CDBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00273CDB: ;
    ecx = esi;
    PUSH32(esp, 0x00273CE2u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00273CE2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00273CE8u); RECOMP_ABI_CALL(0x0029FF60u, sub_0029FF60); /* call 0x0029FF60 */

loc_00273CE8: ;
    esp = esp + 4;
    ecx = esi;
    ebp = eax;
    PUSH32(esp, 0x00273CF4u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00273CF4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00273CFAu); RECOMP_ABI_CALL(0x0029FF60u, sub_0029FF60); /* call 0x0029FF60 */

loc_00273CFA: ;
    ecx = MEM32(esi + 0x40);
    esp = esp + 4;
    PUSH32(esp, ebp);
    edi = eax;
    PUSH32(esp, 0x00273D08u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273D08: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00273D11u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273D11: ;
    eax = MEM32(0x5BDED8);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00273D1Eu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273D1E: ;
    ecx = MEM32(0x5BDED8);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00273D2Cu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273D2C: ;
    edx = MEM32(0x5BDEDC);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x00273D3Au); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273D3A: ;
    eax = MEM32(0x5BDEDC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00273D47u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273D47: ;
    ecx = MEM32(0x5BDD60);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00273D55u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273D55: ;
    edx = MEM32(0x5BDD60);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00273D63u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273D63: ;
    eax = MEM32(0x5BDF60);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00273D70u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273D70: ;
    ecx = MEM32(0x5BDF60);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00273D7Eu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273D7E: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_00273E5D; /* je: equal / zero */

loc_00273D8B: ;
    edx = MEM32(esi + 0x60);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00273D94u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273D94: ;
    eax = MEM32(esi + 0x60);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00273D9Fu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273D9F: ;
    ecx = MEM32(esi + 0x58);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00273DAAu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273DAA: ;
    edx = MEM32(esi + 0x58);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00273DB5u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273DB5: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00273DC0u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273DC0: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00273DCBu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273DCB: ;
    edx = MEM32(0x5BDF44);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x00273DD9u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273DD9: ;
    eax = MEM32(0x5BDF44);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00273DE6u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273DE6: ;
    ecx = MEM32(0x5BDF5C);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00273DF4u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273DF4: ;
    edx = MEM32(0x5BDF5C);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00273E02u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273E02: ;
    ecx = MEM32(esi + 0x64);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00273E0Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00273E0C: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00273E16u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00273E16: ;
    ecx = MEM32(esi + 0x4C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00273E20u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00273E20: ;
    ecx = MEM32(esi + 0x50);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00273E2Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00273E2A: ;
    SET_LO8(eax, MEM8(esi + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00273ECB; /* je: equal / zero */

loc_00273E35: ;
    ecx = MEM32(esi + 0x78);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00273E3Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00273E3F: ;
    ecx = MEM32(0x5BDF48);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00273E4Du); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273E4D: ;
    edx = MEM32(0x5BDF48);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00273E5Bu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273E5B: ;
    goto loc_00273ECB;

loc_00273E5D: ;
    eax = MEM32(0x5BDF30);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00273E68u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273E68: ;
    ecx = MEM32(0x5BDF30);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00273E76u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273E76: ;
    ecx = MEM32(esi + 0x64);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00273E80u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00273E80: ;
    ecx = MEM32(esi + 0x68);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00273E8Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00273E8A: ;
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00273E94u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00273E94: ;
    ecx = MEM32(esi + 0x50);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00273E9Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00273E9E: ;
    SET_LO8(eax, MEM8(esi + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00273ECB; /* je: equal / zero */

loc_00273EA5: ;
    ecx = MEM32(0x5BDF54);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00273EB3u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273EB3: ;
    edx = MEM32(0x5BDF54);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00273EC1u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273EC1: ;
    ecx = MEM32(esi + 0x78);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00273ECBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00273ECB: ;
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00273ED6u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273ED6: ;
    edx = MEM32(esi + 0x68);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00273EE1u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273EE1: ;
    eax = MEM32(esi + 0x64);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00273EECu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273EEC: ;
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00273EF7u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273EF7: ;
    edx = MEM32(esi + 0x4C);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x00273F02u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273F02: ;
    eax = MEM32(esi + 0x4C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00273F0Du); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273F0D: ;
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00273F18u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273F18: ;
    edx = MEM32(esi + 0x50);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00273F23u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273F23: ;
    SET_LO8(eax, MEM8(esi + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00273F40; /* je: equal / zero */

loc_00273F2A: ;
    eax = MEM32(esi + 0x78);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00273F35u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273F35: ;
    ecx = MEM32(esi + 0x78);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00273F40u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00273F40: ;
    SET_LO8(edx, MEM8(esi + 0x8C));
    eax = MEM32(esi);
    MEM8(esp + 0xC) = LO8(edx);
    ecx = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(esi + 0x8C) = 0;
    { uint32_t _icall_target = MEM32(eax + 0xB0); PUSH32(esp, 0x00273F60u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00273F60: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00273F7B; /* je: equal / zero */

loc_00273F64: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00273F7B; /* jne: not equal / not zero */

loc_00273F74: ;
    ecx = edi;
    PUSH32(esp, 0x00273F7Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273F7B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00273F96; /* je: equal / zero */

loc_00273F7F: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00273F96; /* jne: not equal / not zero */

loc_00273F8F: ;
    ecx = ebp;
    PUSH32(esp, 0x00273F96u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273F96: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00273FA0
 * Original: 0x00273FA0 - 0x0027400D (109 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00273FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00273FA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    edx = MEM32(edi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00273FC3; /* jle: less or equal (signed <=) */

loc_00273FB0: ;
    ecx = MEM32(edi + 0x10);
    esi = MEM32(esp + 0x14);

loc_00273FB7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00274009; /* je: equal / zero */

loc_00273FBB: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00273FB7; /* jl: less (signed <) */

loc_00273FC3: ;
    esi = esi | 0xFFFFFFFFu;

loc_00273FC6: ;
    ebx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00273FD1; /* je: equal / zero */

loc_00273FCE: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00273FD1: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00273FF0; /* je: equal / zero */

loc_00273FDB: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00273FF0; /* jne: not equal / not zero */

loc_00273FEB: ;
    PUSH32(esp, 0x00273FF0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00273FF0: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00274005; /* je: equal / zero */

loc_00273FF7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00274005; /* jl: less (signed <) */

loc_00273FFB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00274005; /* jge: greater or equal (signed >=) */

loc_00273FFF: ;
    ecx = MEM32(edi + 0x10);
    MEM32(ecx + esi * 4) = ebx;

loc_00274005: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00274009: ;
    esi = eax;
    goto loc_00273FC6;

}

/**
 * sub_00274010
 * Original: 0x00274010 - 0x002742FD (749 bytes, 248 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274010(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00274010: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x3C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002742F9; /* je: equal / zero */

loc_0027401E: ;
    SET_LO8(eax, MEM8(esi + 0x8C));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002742F8; /* je: equal / zero */

loc_00274031: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002742F8; /* je: equal / zero */

loc_0027403C: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002742F8; /* jne: not equal / not zero */

loc_00274049: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    eax = MEM32(eax + 0x10);
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(edx);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    eax = MEM32(esi + 0x24);
    if (TEST_Z(_fa, _fb)) goto loc_002741A9; /* je: equal / zero */

loc_00274063: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027411D; /* je: equal / zero */

loc_0027406B: ;
    eax = MEM32(0x5BDF50);
    ecx = MEM32(0x5BDF44);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027407Eu); RECOMP_ABI_CALL(0x00273FA0u, sub_00273FA0); /* call 0x00273FA0 */

loc_0027407E: ;
    edx = MEM32(0x5BDF50);
    eax = MEM32(0x5BDF44);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00274091u); RECOMP_ABI_CALL(0x00273FA0u, sub_00273FA0); /* call 0x00273FA0 */

loc_00274091: ;
    ecx = MEM32(0x5BDF40);
    edx = MEM32(0x5BDF60);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002740A5u); RECOMP_ABI_CALL(0x00273FA0u, sub_00273FA0); /* call 0x00273FA0 */

loc_002740A5: ;
    eax = MEM32(0x5BDF40);
    ecx = MEM32(0x5BDF60);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002740B8u); RECOMP_ABI_CALL(0x00273FA0u, sub_00273FA0); /* call 0x00273FA0 */

loc_002740B8: ;
    ecx = MEM32(esi + 0x64);
    edx = MEM32(ecx);
    esp = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x002740C5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002740C5: ;
    ecx = MEM32(esi + 0x68);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x002740CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002740CF: ;
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x002740D9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002740D9: ;
    ecx = MEM32(esi + 0x50);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x002740E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002740E3: ;
    SET_LO8(eax, MEM8(esi + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002742F0; /* je: equal / zero */

loc_002740EE: ;
    ecx = MEM32(esi + 0x78);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x002740F8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002740F8: ;
    eax = MEM32(0x5BDF4C);
    ecx = MEM32(0x5BDF48);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027410Bu); RECOMP_ABI_CALL(0x00273FA0u, sub_00273FA0); /* call 0x00273FA0 */

loc_0027410B: ;
    edx = MEM32(0x5BDF4C);
    eax = MEM32(0x5BDF48);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    goto loc_002742E7;

loc_0027411D: ;
    ecx = MEM32(0x5BDF24);
    edx = MEM32(0x5BDF30);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00274131u); RECOMP_ABI_CALL(0x00273FA0u, sub_00273FA0); /* call 0x00273FA0 */

loc_00274131: ;
    eax = MEM32(0x5BDF24);
    ecx = MEM32(0x5BDF30);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00274144u); RECOMP_ABI_CALL(0x00273FA0u, sub_00273FA0); /* call 0x00273FA0 */

loc_00274144: ;
    ecx = MEM32(esi + 0x64);
    edx = MEM32(ecx);
    esp = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00274151u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00274151: ;
    ecx = MEM32(esi + 0x68);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0027415Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027415B: ;
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00274165u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00274165: ;
    ecx = MEM32(esi + 0x50);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0027416Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027416F: ;
    SET_LO8(eax, MEM8(esi + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002742F0; /* je: equal / zero */

loc_0027417A: ;
    ecx = MEM32(esi + 0x78);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00274184u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00274184: ;
    eax = MEM32(0x5BDF48);
    ecx = MEM32(0x5BDF54);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00274197u); RECOMP_ABI_CALL(0x00273FA0u, sub_00273FA0); /* call 0x00273FA0 */

loc_00274197: ;
    edx = MEM32(0x5BDF48);
    eax = MEM32(0x5BDF54);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    goto loc_002742E7;

loc_002741A9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00274263; /* je: equal / zero */

loc_002741B1: ;
    ecx = MEM32(0x5BDF44);
    edx = MEM32(0x5BDF50);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002741C5u); RECOMP_ABI_CALL(0x00273FA0u, sub_00273FA0); /* call 0x00273FA0 */

loc_002741C5: ;
    eax = MEM32(0x5BDF44);
    ecx = MEM32(0x5BDF50);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002741D8u); RECOMP_ABI_CALL(0x00273FA0u, sub_00273FA0); /* call 0x00273FA0 */

loc_002741D8: ;
    edx = MEM32(0x5BDF60);
    eax = MEM32(0x5BDF40);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002741EBu); RECOMP_ABI_CALL(0x00273FA0u, sub_00273FA0); /* call 0x00273FA0 */

loc_002741EB: ;
    ecx = MEM32(0x5BDF60);
    edx = MEM32(0x5BDF40);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002741FFu); RECOMP_ABI_CALL(0x00273FA0u, sub_00273FA0); /* call 0x00273FA0 */

loc_002741FF: ;
    ecx = MEM32(esi + 0x64);
    eax = MEM32(ecx);
    esp = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0027420Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027420C: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00274216u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00274216: ;
    ecx = MEM32(esi + 0x4C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00274220u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00274220: ;
    ecx = MEM32(esi + 0x50);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0027422Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027422A: ;
    SET_LO8(eax, MEM8(esi + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002742F0; /* je: equal / zero */

loc_00274235: ;
    ecx = MEM32(esi + 0x78);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0027423Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027423F: ;
    ecx = MEM32(0x5BDF48);
    edx = MEM32(0x5BDF4C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00274253u); RECOMP_ABI_CALL(0x00273FA0u, sub_00273FA0); /* call 0x00273FA0 */

loc_00274253: ;
    eax = MEM32(0x5BDF48);
    ecx = MEM32(0x5BDF4C);
    goto loc_002742E5;

loc_00274263: ;
    edx = MEM32(0x5BDF30);
    eax = MEM32(0x5BDF24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00274276u); RECOMP_ABI_CALL(0x00273FA0u, sub_00273FA0); /* call 0x00273FA0 */

loc_00274276: ;
    ecx = MEM32(0x5BDF30);
    edx = MEM32(0x5BDF24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0027428Au); RECOMP_ABI_CALL(0x00273FA0u, sub_00273FA0); /* call 0x00273FA0 */

loc_0027428A: ;
    ecx = MEM32(esi + 0x64);
    eax = MEM32(ecx);
    esp = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00274297u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00274297: ;
    ecx = MEM32(esi + 0x68);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x002742A1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002742A1: ;
    ecx = MEM32(esi + 0x4C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x002742ABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002742AB: ;
    ecx = MEM32(esi + 0x50);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x002742B5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002742B5: ;
    SET_LO8(eax, MEM8(esi + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002742F0; /* je: equal / zero */

loc_002742BC: ;
    ecx = MEM32(esi + 0x78);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x002742C6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002742C6: ;
    ecx = MEM32(0x5BDF54);
    edx = MEM32(0x5BDF48);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002742DAu); RECOMP_ABI_CALL(0x00273FA0u, sub_00273FA0); /* call 0x00273FA0 */

loc_002742DA: ;
    eax = MEM32(0x5BDF54);
    ecx = MEM32(0x5BDF48);

loc_002742E5: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);

loc_002742E7: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002742EDu); RECOMP_ABI_CALL(0x00273FA0u, sub_00273FA0); /* call 0x00273FA0 */

loc_002742ED: ;
    esp = esp + 0x18;

loc_002742F0: ;
    POP32(esp, edi);
    MEM8(esi + 0x8C) = LO8(ebx);
    POP32(esp, ebp);

loc_002742F8: ;
    POP32(esp, ebx);

loc_002742F9: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00274300
 * Original: 0x00274300 - 0x00274330 (48 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274300(void)
{

loc_00274300: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00274318u); RECOMP_ABI_CALL(0x001B7700u, sub_001B7700); /* call 0x001B7700 */

loc_00274318: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    edi = eax;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00274329u); RECOMP_ABI_CALL(0x00200E60u, sub_00200E60); /* call 0x00200E60 */

loc_00274329: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00274330
 * Original: 0x00274330 - 0x0027437C (76 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274330(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00274330: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ecx + ebp * 4);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00274355; /* jge: greater or equal (signed >=) */

loc_0027434D: ;
    edx = edi + 1;
    MEM32(esi + 8) = edx;
    goto loc_00274362;

loc_00274355: ;
    PUSH32(esp, 4);
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00274362u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00274362: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    MEM32(ecx + edi * 4) = edx;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00274375u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_00274375: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00274380
 * Original: 0x00274380 - 0x002743D7 (87 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274380(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00274380: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ecx + ebp * 4);
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_GE(_fas & _fbs, 0)) goto loc_002743A0; /* jge: greater or equal (signed >=) */

loc_0027439A: ;
    edx = MEM32(esi + 8);
    MEM32(esi + 0x18) = edx;

loc_002743A0: ;
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002743B0; /* jge: greater or equal (signed >=) */

loc_002743A8: ;
    eax = edi + 1;
    MEM32(esi + 8) = eax;
    goto loc_002743BD;

loc_002743B0: ;
    PUSH32(esp, 4);
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002743BDu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_002743BD: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(edx + edi * 4) = eax;
    PUSH32(esp, 0x002743D0u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_002743D0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002743E0
 * Original: 0x002743E0 - 0x00274439 (89 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002743E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002743E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + 0x10);
    esi = MEM32(ecx + ebx * 4);
    eax = MEM32(esi + 0x10);
    edx = MEM32(esi + 8);
    ecx = MEM32(eax + edx * 4 + -4);
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00274413; /* je: equal / zero */

loc_00274403: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00274413; /* jne: not equal / not zero */

loc_00274409: ;
    edx = MEM32(edi + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00274410u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00274410: ;
    esp = esp + 8;

loc_00274413: ;
    edx = MEM32(esi + 8);
    ecx = MEM32(esi + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0027442A; /* jne: not equal / not zero */

loc_00274423: ;
    MEM32(esi + 0x18) = 0xFFFFFFFFu;

loc_0027442A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00274433u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_00274433: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00274440
 * Original: 0x00274440 - 0x00274470 (48 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00274440: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 8);
    eax = MEM32(ecx + 0x44);
    edx = MEM32(eax + edx * 4);
    edx = edx + MEM32(esp + 8);
    eax = MEM32(ecx + 0x10);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + edx * 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00274466; /* jne: not equal / not zero */

loc_00274461: ;
    eax = 0; /* xor self */
    esp += 12; return; /* ret 8 */

loc_00274466: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + ecx * 4 + -4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00274470
 * Original: 0x00274470 - 0x002744AD (61 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00274470: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 8);
    eax = MEM32(ecx + 0x44);
    edx = MEM32(eax + edx * 4);
    eax = MEM32(ecx + 0x10);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + edx * 4);
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00274496; /* jl: less (signed <) */

loc_0027448D: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + ecx * 4);
    esp += 8; return; /* ret 4 */

loc_00274496: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002744A7; /* je: equal / zero */

loc_0027449D: ;
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + ecx * 4 + -4);
    esp += 8; return; /* ret 4 */

loc_002744A7: ;
    eax = MEM32(eax + 0x14);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002744B0
 * Original: 0x002744B0 - 0x002744F6 (70 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002744B0(void)
{

loc_002744B0: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x002744BDu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_002744BD: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x4016C0;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x002744EFu); RECOMP_ABI_CALL(0x00254530u, sub_00254530); /* call 0x00254530 */

loc_002744EF: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00274500
 * Original: 0x00274500 - 0x0027455A (90 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274500(void)
{

loc_00274500: ;
    esp = esp - 0x68;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0027450Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027450D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x64) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x401720;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x00274553u); RECOMP_ABI_CALL(0x0025EE50u, sub_0025EE50); /* call 0x0025EE50 */

loc_00274553: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x68;
    esp += 4; return; /* ret */

}

/**
 * sub_00274560
 * Original: 0x00274560 - 0x00274566 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274560(void)
{

loc_00274560: ;
    eax = MEM32(0x5BD8B8);
    esp += 4; return; /* ret */

}

/**
 * sub_00274570
 * Original: 0x00274570 - 0x00274594 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274570(void)
{

loc_00274570: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0027457Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027457B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x401830;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_002745A0
 * Original: 0x002745A0 - 0x002745A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002745A0(void)
{

loc_002745A0: ;
    eax = MEM32(0x5BD8C0);
    esp += 4; return; /* ret */

}

/**
 * sub_002745B0
 * Original: 0x002745B0 - 0x002745B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002745B0(void)
{

loc_002745B0: ;
    eax = MEM32(0x5BD8C8);
    esp += 4; return; /* ret */

}

/**
 * sub_002745C0
 * Original: 0x002745C0 - 0x002745CA (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002745C0(void)
{

loc_002745C0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x60) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002745D0
 * Original: 0x002745D0 - 0x002745F1 (33 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002745D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002745D0: ;
    eax = MEM32(ecx + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002745EE; /* je: equal / zero */

loc_002745D7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = ecx + 0x20;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x002745EDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002745ED: ;
    POP32(esp, esi);

loc_002745EE: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00274600
 * Original: 0x00274600 - 0x0027465F (95 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274600(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00274600: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027461F; /* je: equal / zero */

loc_0027460A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027461F; /* jne: not equal / not zero */

loc_0027461A: ;
    PUSH32(esp, 0x0027461Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027461F: ;
    ecx = MEM32(esi + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027463B; /* je: equal / zero */

loc_00274626: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027463B; /* jne: not equal / not zero */

loc_00274636: ;
    PUSH32(esp, 0x0027463Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027463B: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00274657; /* je: equal / zero */

loc_00274642: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00274657; /* jne: not equal / not zero */

loc_00274652: ;
    PUSH32(esp, 0x00274657u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00274657: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0019C0A0(); return; /* tail jmp 0x0019C0A0 */

}

/**
 * sub_00274660
 * Original: 0x00274660 - 0x00274666 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274660(void)
{

loc_00274660: ;
    eax = MEM32(0x5BD8D8);
    esp += 4; return; /* ret */

}

/**
 * sub_00274670
 * Original: 0x00274670 - 0x00274694 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274670(void)
{

loc_00274670: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0027467Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027467B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4018A8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_002746A0
 * Original: 0x002746A0 - 0x002746E4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002746A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002746A0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002746B0; /* jne: not equal / not zero */

loc_002746A9: ;
    MEM8(0x5BDF6C) = 1;

loc_002746B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2493E0);
    PUSH32(esp, 0x274670);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x403A7C);
    PUSH32(esp, 0x24FEB0);
    PUSH32(esp, 0x1A43D0);
    PUSH32(esp, 0x22A930);
    PUSH32(esp, 0x5BD8DC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002746E0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002746E0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002746F0
 * Original: 0x002746F0 - 0x00274737 (71 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002746F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002746F0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00274700; /* jne: not equal / not zero */

loc_002746F9: ;
    MEM8(0x5BDF6C) = 1;

loc_00274700: ;
    PUSH32(esp, 0x470FD4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2520D0);
    PUSH32(esp, 0x25F070);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x403A90);
    PUSH32(esp, 0x24FF10);
    PUSH32(esp, 0x249450);
    PUSH32(esp, 0x25F4B0);
    PUSH32(esp, 0x5BD8E0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00274733u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00274733: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00274740
 * Original: 0x00274740 - 0x00274746 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274740(void)
{

loc_00274740: ;
    eax = MEM32(0x5BD8E8);
    esp += 4; return; /* ret */

}

/**
 * sub_00274750
 * Original: 0x00274750 - 0x00274756 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274750(void)
{

loc_00274750: ;
    eax = MEM32(0x5BD900);
    esp += 4; return; /* ret */

}

/**
 * sub_00274760
 * Original: 0x00274760 - 0x00274784 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274760(void)
{

loc_00274760: ;
    esp = esp - 0x20;
    ecx = esp;
    PUSH32(esp, 0x0027476Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027476B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x401930;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00274790
 * Original: 0x00274790 - 0x002747B4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274790(void)
{

loc_00274790: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0027479Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027479B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x401990;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_002747C0
 * Original: 0x002747C0 - 0x002747CC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002747C0(void)
{

loc_002747C0: ;
    PUSH32(esp, 0x25F350);
    PUSH32(esp, 0x002747CAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002747CA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002747D0
 * Original: 0x002747D0 - 0x002747F4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002747D0(void)
{

loc_002747D0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x002747DBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_002747DB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4019F8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00274800
 * Original: 0x00274800 - 0x0027482E (46 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274800(void)
{

loc_00274800: ;
    esp = esp - 0x1C;
    ecx = esp;
    PUSH32(esp, 0x0027480Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027480B: ;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x401A58;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00274830
 * Original: 0x00274830 - 0x00274854 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274830(void)
{

loc_00274830: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0027483Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027483B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x401AD0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00274860
 * Original: 0x00274860 - 0x0027486C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274860(void)
{

loc_00274860: ;
    PUSH32(esp, 0x25F460);
    PUSH32(esp, 0x0027486Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027486A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00274870
 * Original: 0x00274870 - 0x0027489E (46 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274870(void)
{

loc_00274870: ;
    esp = esp - 0x18;
    ecx = esp;
    PUSH32(esp, 0x0027487Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027487B: ;
    eax = 0; /* xor self */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x401B58;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_002748A0
 * Original: 0x002748A0 - 0x0027491B (123 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002748A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002748A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BD930);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002748B0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002748B0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x470FEC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x002748C0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002748C0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002748C8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002748C8: ;
    ebx = eax;
    eax = MEM32(0x5BD938);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002748EC; /* jne: not equal / not zero */

loc_002748D3: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002748DEu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002748DE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002748E4u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002748E4: ;
    esp = esp + 8;
    MEM32(0x5BD938) = eax;

loc_002748EC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x470FE8);
    PUSH32(esp, 0x470FE4);
    PUSH32(esp, 0x470FE0);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x0027490Au); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0027490A: ;
    PUSH32(esp, 0x25F510);
    PUSH32(esp, 0x00274914u); RECOMP_ABI_CALL(0x00204190u, sub_00204190); /* call 0x00204190 */

loc_00274914: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00274920
 * Original: 0x00274920 - 0x00274944 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274920(void)
{

loc_00274920: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0027492Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027492B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x401BB8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00274950
 * Original: 0x00274950 - 0x0027495C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274950(void)
{

loc_00274950: ;
    PUSH32(esp, 0x25F5C0);
    PUSH32(esp, 0x0027495Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027495A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00274960
 * Original: 0x00274960 - 0x00274966 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274960(void)
{

loc_00274960: ;
    eax = MEM32(0x5BD950);
    esp += 4; return; /* ret */

}

/**
 * sub_00274970
 * Original: 0x00274970 - 0x00274973 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274970(void)
{

loc_00274970: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00274980
 * Original: 0x00274980 - 0x002749A4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274980(void)
{

loc_00274980: ;
    esp = esp - 0x20;
    ecx = esp;
    PUSH32(esp, 0x0027498Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027498B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x401C28;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_002749B0
 * Original: 0x002749B0 - 0x002749F4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002749B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002749B0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002749C0; /* jne: not equal / not zero */

loc_002749B9: ;
    MEM8(0x5BDF6C) = 1;

loc_002749C0: ;
    PUSH32(esp, 0x470FF0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x274980);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x403C44);
    PUSH32(esp, 0x24FC70);
    PUSH32(esp, 0x19C350);
    PUSH32(esp, 0x25F0F0);
    PUSH32(esp, 0x5BD954);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002749F0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002749F0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00274A00
 * Original: 0x00274A00 - 0x00274A24 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274A00(void)
{

loc_00274A00: ;
    esp = esp - 0x20;
    ecx = esp;
    PUSH32(esp, 0x00274A0Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00274A0B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x401C88;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00274A30
 * Original: 0x00274A30 - 0x00274A74 (68 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00274A30: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00274A40; /* jne: not equal / not zero */

loc_00274A39: ;
    MEM8(0x5BDF6C) = 1;

loc_00274A40: ;
    PUSH32(esp, 0x470FF8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x274A00);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x403C5C);
    PUSH32(esp, 0x24FC40);
    PUSH32(esp, 0x19C350);
    PUSH32(esp, 0x25F0F0);
    PUSH32(esp, 0x5BD958);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00274A70u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00274A70: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00274A80
 * Original: 0x00274A80 - 0x00274AA4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274A80(void)
{

loc_00274A80: ;
    esp = esp - 0x20;
    ecx = esp;
    PUSH32(esp, 0x00274A8Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00274A8B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x401CE8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00274AB0
 * Original: 0x00274AB0 - 0x00274AF4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00274AB0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00274AC0; /* jne: not equal / not zero */

loc_00274AB9: ;
    MEM8(0x5BDF6C) = 1;

loc_00274AC0: ;
    PUSH32(esp, 0x471000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x274A80);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x403C74);
    PUSH32(esp, 0x24FC10);
    PUSH32(esp, 0x19C350);
    PUSH32(esp, 0x25F0F0);
    PUSH32(esp, 0x5BD95C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00274AF0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00274AF0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00274B00
 * Original: 0x00274B00 - 0x00274B24 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274B00(void)
{

loc_00274B00: ;
    esp = esp - 0x20;
    ecx = esp;
    PUSH32(esp, 0x00274B0Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00274B0B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x401D48;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00274B30
 * Original: 0x00274B30 - 0x00274B74 (68 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00274B30: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00274B40; /* jne: not equal / not zero */

loc_00274B39: ;
    MEM8(0x5BDF6C) = 1;

loc_00274B40: ;
    PUSH32(esp, 0x471008);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x274B00);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x403C88);
    PUSH32(esp, 0x24FBE0);
    PUSH32(esp, 0x19C350);
    PUSH32(esp, 0x25F0F0);
    PUSH32(esp, 0x5BD960);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00274B70u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00274B70: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00274B80
 * Original: 0x00274B80 - 0x00274BA4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274B80(void)
{

loc_00274B80: ;
    esp = esp - 0x20;
    ecx = esp;
    PUSH32(esp, 0x00274B8Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00274B8B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x401DA8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00274BB0
 * Original: 0x00274BB0 - 0x00274BF4 (68 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00274BB0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00274BC0; /* jne: not equal / not zero */

loc_00274BB9: ;
    MEM8(0x5BDF6C) = 1;

loc_00274BC0: ;
    PUSH32(esp, 0x471010);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x274B80);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x403CA8);
    PUSH32(esp, 0x24FBB0);
    PUSH32(esp, 0x19C350);
    PUSH32(esp, 0x25F0F0);
    PUSH32(esp, 0x5BD964);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00274BF0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00274BF0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00274C00
 * Original: 0x00274C00 - 0x00274C24 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274C00(void)
{

loc_00274C00: ;
    esp = esp - 0x20;
    ecx = esp;
    PUSH32(esp, 0x00274C0Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00274C0B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x401E08;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00274C30
 * Original: 0x00274C30 - 0x00274C74 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00274C30: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00274C40; /* jne: not equal / not zero */

loc_00274C39: ;
    MEM8(0x5BDF6C) = 1;

loc_00274C40: ;
    PUSH32(esp, 0x471018);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x274C00);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x403CC4);
    PUSH32(esp, 0x24FB80);
    PUSH32(esp, 0x19C350);
    PUSH32(esp, 0x25F0F0);
    PUSH32(esp, 0x5BD968);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00274C70u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00274C70: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00274C80
 * Original: 0x00274C80 - 0x00274CA4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274C80(void)
{

loc_00274C80: ;
    esp = esp - 0x20;
    ecx = esp;
    PUSH32(esp, 0x00274C8Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00274C8B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x401E68;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00274CB0
 * Original: 0x00274CB0 - 0x00274CF4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00274CB0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00274CC0; /* jne: not equal / not zero */

loc_00274CB9: ;
    MEM8(0x5BDF6C) = 1;

loc_00274CC0: ;
    PUSH32(esp, 0x471020);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x274C80);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x403CE0);
    PUSH32(esp, 0x24FB50);
    PUSH32(esp, 0x19C350);
    PUSH32(esp, 0x25F0F0);
    PUSH32(esp, 0x5BD96C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00274CF0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00274CF0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00274D00
 * Original: 0x00274D00 - 0x00274D24 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274D00(void)
{

loc_00274D00: ;
    esp = esp - 0x20;
    ecx = esp;
    PUSH32(esp, 0x00274D0Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00274D0B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x401EC8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00274D30
 * Original: 0x00274D30 - 0x00274D74 (68 bytes, 18 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00274D30: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00274D40; /* jne: not equal / not zero */

loc_00274D39: ;
    MEM8(0x5BDF6C) = 1;

loc_00274D40: ;
    PUSH32(esp, 0x471028);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x274D00);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x403CF0);
    PUSH32(esp, 0x24FB20);
    PUSH32(esp, 0x19C350);
    PUSH32(esp, 0x25F0F0);
    PUSH32(esp, 0x5BD970);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00274D70u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00274D70: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00274D80
 * Original: 0x00274D80 - 0x00274DA4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274D80(void)
{

loc_00274D80: ;
    esp = esp - 0x20;
    ecx = esp;
    PUSH32(esp, 0x00274D8Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00274D8B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x401F28;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00274DB0
 * Original: 0x00274DB0 - 0x00274DF4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00274DB0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00274DC0; /* jne: not equal / not zero */

loc_00274DB9: ;
    MEM8(0x5BDF6C) = 1;

loc_00274DC0: ;
    PUSH32(esp, 0x471030);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x274D80);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x403D0C);
    PUSH32(esp, 0x24FAF0);
    PUSH32(esp, 0x19C350);
    PUSH32(esp, 0x25F0F0);
    PUSH32(esp, 0x5BD974);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00274DF0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00274DF0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00274E00
 * Original: 0x00274E00 - 0x00274E06 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274E00(void)
{

loc_00274E00: ;
    eax = MEM32(0x5BD978);
    esp += 4; return; /* ret */

}

/**
 * sub_00274E10
 * Original: 0x00274E10 - 0x00274E16 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274E10(void)
{

loc_00274E10: ;
    eax = MEM32(0x5BD97C);
    esp += 4; return; /* ret */

}

/**
 * sub_00274E20
 * Original: 0x00274E20 - 0x00274EB8 (152 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274E20(void)
{

loc_00274E20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00274E28u); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00274E28: ;
    eax = 0; /* xor self */
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi) = 0x403DD8;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x64) = eax;
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0xA0) = eax;
    MEM32(esi + 0xA4) = eax;
    MEM32(esi + 0xA8) = eax;
    MEM32(esi + 0xAC) = eax;
    MEM32(esi + 0xB0) = eax;
    MEM32(esi + 0xB4) = eax;
    MEM32(esi + 0xB8) = eax;
    MEM32(esi + 0xBC) = eax;
    MEM32(esi + 0xC0) = eax;
    MEM32(esi + 0xC4) = eax;
    MEM32(esi + 0xC8) = eax;
    MEM32(esi + 0xCC) = eax;
    MEM32(esi + 0xE4) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00274EC0
 * Original: 0x00274EC0 - 0x00274EC6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274EC0(void)
{

loc_00274EC0: ;
    eax = MEM32(0x5BD980);
    esp += 4; return; /* ret */

}

/**
 * sub_00274ED0
 * Original: 0x00274ED0 - 0x002751AE (734 bytes, 245 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00274ED0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00274ED0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xE4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00274EF2; /* je: equal / zero */

loc_00274EDD: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00274EF2; /* jne: not equal / not zero */

loc_00274EED: ;
    PUSH32(esp, 0x00274EF2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00274EF2: ;
    ecx = MEM32(esi + 0xCC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00274F11; /* je: equal / zero */

loc_00274EFC: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00274F11; /* jne: not equal / not zero */

loc_00274F0C: ;
    PUSH32(esp, 0x00274F11u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00274F11: ;
    ecx = MEM32(esi + 0xC8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00274F30; /* je: equal / zero */

loc_00274F1B: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00274F30; /* jne: not equal / not zero */

loc_00274F2B: ;
    PUSH32(esp, 0x00274F30u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00274F30: ;
    ecx = MEM32(esi + 0xC4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00274F4F; /* je: equal / zero */

loc_00274F3A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00274F4F; /* jne: not equal / not zero */

loc_00274F4A: ;
    PUSH32(esp, 0x00274F4Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00274F4F: ;
    ecx = MEM32(esi + 0xC0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00274F6E; /* je: equal / zero */

loc_00274F59: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00274F6E; /* jne: not equal / not zero */

loc_00274F69: ;
    PUSH32(esp, 0x00274F6Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00274F6E: ;
    ecx = MEM32(esi + 0xBC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00274F8D; /* je: equal / zero */

loc_00274F78: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00274F8D; /* jne: not equal / not zero */

loc_00274F88: ;
    PUSH32(esp, 0x00274F8Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00274F8D: ;
    ecx = MEM32(esi + 0xB8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00274FAC; /* je: equal / zero */

loc_00274F97: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00274FAC; /* jne: not equal / not zero */

loc_00274FA7: ;
    PUSH32(esp, 0x00274FACu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00274FAC: ;
    ecx = MEM32(esi + 0xB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00274FCB; /* je: equal / zero */

loc_00274FB6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00274FCB; /* jne: not equal / not zero */

loc_00274FC6: ;
    PUSH32(esp, 0x00274FCBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00274FCB: ;
    ecx = MEM32(esi + 0xB0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00274FEA; /* je: equal / zero */

loc_00274FD5: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00274FEA; /* jne: not equal / not zero */

loc_00274FE5: ;
    PUSH32(esp, 0x00274FEAu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00274FEA: ;
    ecx = MEM32(esi + 0xAC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275009; /* je: equal / zero */

loc_00274FF4: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275009; /* jne: not equal / not zero */

loc_00275004: ;
    PUSH32(esp, 0x00275009u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275009: ;
    ecx = MEM32(esi + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275028; /* je: equal / zero */

loc_00275013: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275028; /* jne: not equal / not zero */

loc_00275023: ;
    PUSH32(esp, 0x00275028u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275028: ;
    ecx = MEM32(esi + 0xA4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275047; /* je: equal / zero */

loc_00275032: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275047; /* jne: not equal / not zero */

loc_00275042: ;
    PUSH32(esp, 0x00275047u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275047: ;
    ecx = MEM32(esi + 0xA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275066; /* je: equal / zero */

loc_00275051: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275066; /* jne: not equal / not zero */

loc_00275061: ;
    PUSH32(esp, 0x00275066u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275066: ;
    ecx = MEM32(esi + 0x9C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275085; /* je: equal / zero */

loc_00275070: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275085; /* jne: not equal / not zero */

loc_00275080: ;
    PUSH32(esp, 0x00275085u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275085: ;
    ecx = MEM32(esi + 0x98);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002750A4; /* je: equal / zero */

loc_0027508F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002750A4; /* jne: not equal / not zero */

loc_0027509F: ;
    PUSH32(esp, 0x002750A4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002750A4: ;
    ecx = MEM32(esi + 0x94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002750C3; /* je: equal / zero */

loc_002750AE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002750C3; /* jne: not equal / not zero */

loc_002750BE: ;
    PUSH32(esp, 0x002750C3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002750C3: ;
    ecx = MEM32(esi + 0x90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002750E2; /* je: equal / zero */

loc_002750CD: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002750E2; /* jne: not equal / not zero */

loc_002750DD: ;
    PUSH32(esp, 0x002750E2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002750E2: ;
    ecx = MEM32(esi + 0x68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002750FE; /* je: equal / zero */

loc_002750E9: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002750FE; /* jne: not equal / not zero */

loc_002750F9: ;
    PUSH32(esp, 0x002750FEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002750FE: ;
    ecx = MEM32(esi + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027511A; /* je: equal / zero */

loc_00275105: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027511A; /* jne: not equal / not zero */

loc_00275115: ;
    PUSH32(esp, 0x0027511Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027511A: ;
    ecx = MEM32(esi + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275136; /* je: equal / zero */

loc_00275121: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275136; /* jne: not equal / not zero */

loc_00275131: ;
    PUSH32(esp, 0x00275136u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275136: ;
    ecx = MEM32(esi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275152; /* je: equal / zero */

loc_0027513D: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275152; /* jne: not equal / not zero */

loc_0027514D: ;
    PUSH32(esp, 0x00275152u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275152: ;
    ecx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027516E; /* je: equal / zero */

loc_00275159: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027516E; /* jne: not equal / not zero */

loc_00275169: ;
    PUSH32(esp, 0x0027516Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027516E: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027518A; /* je: equal / zero */

loc_00275175: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027518A; /* jne: not equal / not zero */

loc_00275185: ;
    PUSH32(esp, 0x0027518Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027518A: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002751A6; /* je: equal / zero */

loc_00275191: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002751A6; /* jne: not equal / not zero */

loc_002751A1: ;
    PUSH32(esp, 0x002751A6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002751A6: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0019C0A0(); return; /* tail jmp 0x0019C0A0 */

}

/**
 * sub_002751B0
 * Original: 0x002751B0 - 0x002751B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002751B0(void)
{

loc_002751B0: ;
    eax = MEM32(0x5BD984);
    esp += 4; return; /* ret */

}

/**
 * sub_002751C0
 * Original: 0x002751C0 - 0x002751C3 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002751C0(void)
{

loc_002751C0: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002751D0
 * Original: 0x002751D0 - 0x002751F4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002751D0(void)
{

loc_002751D0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x002751DBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_002751DB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x401F88;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00275200
 * Original: 0x00275200 - 0x0027520C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275200(void)
{

loc_00275200: ;
    PUSH32(esp, 0x25F750);
    PUSH32(esp, 0x0027520Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027520A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00275210
 * Original: 0x00275210 - 0x002752B4 (164 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275210(void)
{

loc_00275210: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00275218u); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00275218: ;
    eax = 0; /* xor self */
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi) = 0x403EF8;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x64) = eax;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0x9C) = eax;
    MEM32(esi + 0xA0) = eax;
    MEM32(esi + 0xA4) = eax;
    MEM32(esi + 0xA8) = eax;
    MEM32(esi + 0xAC) = eax;
    MEM32(esi + 0xB0) = eax;
    MEM32(esi + 0xB4) = eax;
    MEM32(esi + 0xB8) = eax;
    MEM32(esi + 0xBC) = eax;
    MEM32(esi + 0xC0) = eax;
    MEM32(esi + 0xC4) = eax;
    MEM32(esi + 0xC8) = eax;
    MEM32(esi + 0xCC) = eax;
    MEM32(esi + 0xE4) = eax;
    MEM32(esi + 0xE8) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002752C0
 * Original: 0x002752C0 - 0x002752C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002752C0(void)
{

loc_002752C0: ;
    eax = MEM32(0x5BD9A0);
    esp += 4; return; /* ret */

}

/**
 * sub_002752D0
 * Original: 0x002752D0 - 0x0027561E (846 bytes, 285 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002752D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002752D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xE8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002752F2; /* je: equal / zero */

loc_002752DD: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002752F2; /* jne: not equal / not zero */

loc_002752ED: ;
    PUSH32(esp, 0x002752F2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002752F2: ;
    ecx = MEM32(esi + 0xE4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275311; /* je: equal / zero */

loc_002752FC: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275311; /* jne: not equal / not zero */

loc_0027530C: ;
    PUSH32(esp, 0x00275311u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275311: ;
    ecx = MEM32(esi + 0xCC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275330; /* je: equal / zero */

loc_0027531B: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275330; /* jne: not equal / not zero */

loc_0027532B: ;
    PUSH32(esp, 0x00275330u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275330: ;
    ecx = MEM32(esi + 0xC8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027534F; /* je: equal / zero */

loc_0027533A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027534F; /* jne: not equal / not zero */

loc_0027534A: ;
    PUSH32(esp, 0x0027534Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027534F: ;
    ecx = MEM32(esi + 0xC4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027536E; /* je: equal / zero */

loc_00275359: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027536E; /* jne: not equal / not zero */

loc_00275369: ;
    PUSH32(esp, 0x0027536Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027536E: ;
    ecx = MEM32(esi + 0xC0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027538D; /* je: equal / zero */

loc_00275378: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027538D; /* jne: not equal / not zero */

loc_00275388: ;
    PUSH32(esp, 0x0027538Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027538D: ;
    ecx = MEM32(esi + 0xBC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002753AC; /* je: equal / zero */

loc_00275397: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002753AC; /* jne: not equal / not zero */

loc_002753A7: ;
    PUSH32(esp, 0x002753ACu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002753AC: ;
    ecx = MEM32(esi + 0xB8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002753CB; /* je: equal / zero */

loc_002753B6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002753CB; /* jne: not equal / not zero */

loc_002753C6: ;
    PUSH32(esp, 0x002753CBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002753CB: ;
    ecx = MEM32(esi + 0xB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002753EA; /* je: equal / zero */

loc_002753D5: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002753EA; /* jne: not equal / not zero */

loc_002753E5: ;
    PUSH32(esp, 0x002753EAu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002753EA: ;
    ecx = MEM32(esi + 0xB0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275409; /* je: equal / zero */

loc_002753F4: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275409; /* jne: not equal / not zero */

loc_00275404: ;
    PUSH32(esp, 0x00275409u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275409: ;
    ecx = MEM32(esi + 0xAC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275428; /* je: equal / zero */

loc_00275413: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275428; /* jne: not equal / not zero */

loc_00275423: ;
    PUSH32(esp, 0x00275428u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275428: ;
    ecx = MEM32(esi + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275447; /* je: equal / zero */

loc_00275432: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275447; /* jne: not equal / not zero */

loc_00275442: ;
    PUSH32(esp, 0x00275447u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275447: ;
    ecx = MEM32(esi + 0xA4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275466; /* je: equal / zero */

loc_00275451: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275466; /* jne: not equal / not zero */

loc_00275461: ;
    PUSH32(esp, 0x00275466u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275466: ;
    ecx = MEM32(esi + 0xA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275485; /* je: equal / zero */

loc_00275470: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275485; /* jne: not equal / not zero */

loc_00275480: ;
    PUSH32(esp, 0x00275485u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275485: ;
    ecx = MEM32(esi + 0x9C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002754A4; /* je: equal / zero */

loc_0027548F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002754A4; /* jne: not equal / not zero */

loc_0027549F: ;
    PUSH32(esp, 0x002754A4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002754A4: ;
    ecx = MEM32(esi + 0x98);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002754C3; /* je: equal / zero */

loc_002754AE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002754C3; /* jne: not equal / not zero */

loc_002754BE: ;
    PUSH32(esp, 0x002754C3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002754C3: ;
    ecx = MEM32(esi + 0x90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002754E2; /* je: equal / zero */

loc_002754CD: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002754E2; /* jne: not equal / not zero */

loc_002754DD: ;
    PUSH32(esp, 0x002754E2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002754E2: ;
    ecx = MEM32(esi + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002754FE; /* je: equal / zero */

loc_002754E9: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002754FE; /* jne: not equal / not zero */

loc_002754F9: ;
    PUSH32(esp, 0x002754FEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002754FE: ;
    ecx = MEM32(esi + 0x70);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027551A; /* je: equal / zero */

loc_00275505: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027551A; /* jne: not equal / not zero */

loc_00275515: ;
    PUSH32(esp, 0x0027551Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027551A: ;
    ecx = MEM32(esi + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275536; /* je: equal / zero */

loc_00275521: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275536; /* jne: not equal / not zero */

loc_00275531: ;
    PUSH32(esp, 0x00275536u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275536: ;
    ecx = MEM32(esi + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275552; /* je: equal / zero */

loc_0027553D: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275552; /* jne: not equal / not zero */

loc_0027554D: ;
    PUSH32(esp, 0x00275552u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275552: ;
    ecx = MEM32(esi + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027556E; /* je: equal / zero */

loc_00275559: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027556E; /* jne: not equal / not zero */

loc_00275569: ;
    PUSH32(esp, 0x0027556Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027556E: ;
    ecx = MEM32(esi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027558A; /* je: equal / zero */

loc_00275575: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027558A; /* jne: not equal / not zero */

loc_00275585: ;
    PUSH32(esp, 0x0027558Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027558A: ;
    ecx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002755A6; /* je: equal / zero */

loc_00275591: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002755A6; /* jne: not equal / not zero */

loc_002755A1: ;
    PUSH32(esp, 0x002755A6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002755A6: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002755C2; /* je: equal / zero */

loc_002755AD: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002755C2; /* jne: not equal / not zero */

loc_002755BD: ;
    PUSH32(esp, 0x002755C2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002755C2: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002755DE; /* je: equal / zero */

loc_002755C9: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002755DE; /* jne: not equal / not zero */

loc_002755D9: ;
    PUSH32(esp, 0x002755DEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002755DE: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002755FA; /* je: equal / zero */

loc_002755E5: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002755FA; /* jne: not equal / not zero */

loc_002755F5: ;
    PUSH32(esp, 0x002755FAu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002755FA: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275616; /* je: equal / zero */

loc_00275601: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275616; /* jne: not equal / not zero */

loc_00275611: ;
    PUSH32(esp, 0x00275616u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275616: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0019C0A0(); return; /* tail jmp 0x0019C0A0 */

}

/**
 * sub_00275620
 * Original: 0x00275620 - 0x00275626 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275620(void)
{

loc_00275620: ;
    eax = MEM32(0x5BD9AC);
    esp += 4; return; /* ret */

}

/**
 * sub_00275630
 * Original: 0x00275630 - 0x0027567E (78 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275630(void)
{

loc_00275630: ;
    esp = esp - 0x28;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0027563Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027563D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x402028;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x00275677u); RECOMP_ABI_CALL(0x0025F8F0u, sub_0025F8F0); /* call 0x0025F8F0 */

loc_00275677: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_00275680
 * Original: 0x00275680 - 0x002756C7 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275680: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00275690; /* jne: not equal / not zero */

loc_00275689: ;
    MEM8(0x5BDF6C) = 1;

loc_00275690: ;
    PUSH32(esp, 0x471038);
    PUSH32(esp, 0);
    PUSH32(esp, 0x249900);
    PUSH32(esp, 0x275630);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x40401C);
    PUSH32(esp, 0x250930);
    PUSH32(esp, 0x1A4470);
    PUSH32(esp, 0x1A7570);
    PUSH32(esp, 0x5BD9B0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002756C3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002756C3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002756D0
 * Original: 0x002756D0 - 0x002756F4 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002756D0(void)
{

loc_002756D0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x002756DBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_002756DB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x402080;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00275700
 * Original: 0x00275700 - 0x00275706 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275700(void)
{

loc_00275700: ;
    eax = MEM32(0x5BD9B8);
    esp += 4; return; /* ret */

}

/**
 * sub_00275710
 * Original: 0x00275710 - 0x00275734 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275710(void)
{

loc_00275710: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0027571Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027571B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4020E0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00275740
 * Original: 0x00275740 - 0x00275784 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275740: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00275750; /* jne: not equal / not zero */

loc_00275749: ;
    MEM8(0x5BDF6C) = 1;

loc_00275750: ;
    PUSH32(esp, 0x471040);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x275710);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x40408C);
    PUSH32(esp, 0x24F950);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BD9C0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00275780u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00275780: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00275790
 * Original: 0x00275790 - 0x00275796 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275790(void)
{

loc_00275790: ;
    eax = MEM32(0x5BD9CC);
    esp += 4; return; /* ret */

}

/**
 * sub_002757A0
 * Original: 0x002757A0 - 0x002757C4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002757A0(void)
{

loc_002757A0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x002757ABu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_002757AB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x402140;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_002757D0
 * Original: 0x002757D0 - 0x002757F4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002757D0(void)
{

loc_002757D0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x002757DBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_002757DB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4021A0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00275800
 * Original: 0x00275800 - 0x0027580C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275800(void)
{

loc_00275800: ;
    PUSH32(esp, 0x25FA40);
    PUSH32(esp, 0x0027580Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027580A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00275810
 * Original: 0x00275810 - 0x00275834 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275810(void)
{

loc_00275810: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0027581Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027581B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x402208;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00275840
 * Original: 0x00275840 - 0x0027584C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275840(void)
{

loc_00275840: ;
    PUSH32(esp, 0x25FB40);
    PUSH32(esp, 0x0027584Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027584A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00275850
 * Original: 0x00275850 - 0x00275874 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275850(void)
{

loc_00275850: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0027585Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027585B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x402280;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00275880
 * Original: 0x00275880 - 0x0027588C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275880(void)
{

loc_00275880: ;
    PUSH32(esp, 0x25FC20);
    PUSH32(esp, 0x0027588Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027588A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00275890
 * Original: 0x00275890 - 0x00275896 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275890(void)
{

loc_00275890: ;
    eax = MEM32(0x5BDA10);
    esp += 4; return; /* ret */

}

/**
 * sub_002758A0
 * Original: 0x002758A0 - 0x002758A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002758A0(void)
{

loc_002758A0: ;
    eax = MEM32(0x5BDA14);
    esp += 4; return; /* ret */

}

/**
 * sub_002758B0
 * Original: 0x002758B0 - 0x002759B7 (263 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002758B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002758B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002758CF; /* je: equal / zero */

loc_002758BA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002758CF; /* jne: not equal / not zero */

loc_002758CA: ;
    PUSH32(esp, 0x002758CFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002758CF: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002758EB; /* je: equal / zero */

loc_002758D6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002758EB; /* jne: not equal / not zero */

loc_002758E6: ;
    PUSH32(esp, 0x002758EBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002758EB: ;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275907; /* je: equal / zero */

loc_002758F2: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275907; /* jne: not equal / not zero */

loc_00275902: ;
    PUSH32(esp, 0x00275907u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275907: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275923; /* je: equal / zero */

loc_0027590E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275923; /* jne: not equal / not zero */

loc_0027591E: ;
    PUSH32(esp, 0x00275923u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275923: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027593F; /* je: equal / zero */

loc_0027592A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027593F; /* jne: not equal / not zero */

loc_0027593A: ;
    PUSH32(esp, 0x0027593Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027593F: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027595B; /* je: equal / zero */

loc_00275946: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027595B; /* jne: not equal / not zero */

loc_00275956: ;
    PUSH32(esp, 0x0027595Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027595B: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275977; /* je: equal / zero */

loc_00275962: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275977; /* jne: not equal / not zero */

loc_00275972: ;
    PUSH32(esp, 0x00275977u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275977: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275993; /* je: equal / zero */

loc_0027597E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275993; /* jne: not equal / not zero */

loc_0027598E: ;
    PUSH32(esp, 0x00275993u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275993: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002759AF; /* je: equal / zero */

loc_0027599A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002759AF; /* jne: not equal / not zero */

loc_002759AA: ;
    PUSH32(esp, 0x002759AFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002759AF: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0019C7F0(); return; /* tail jmp 0x0019C7F0 */

}

/**
 * sub_002759C0
 * Original: 0x002759C0 - 0x002759CC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002759C0(void)
{

loc_002759C0: ;
    PUSH32(esp, 0x25FCD0);
    PUSH32(esp, 0x002759CAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002759CA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002759D0
 * Original: 0x002759D0 - 0x002759F4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002759D0(void)
{

loc_002759D0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x002759DBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_002759DB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x402300;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00275A00
 * Original: 0x00275A00 - 0x00275A06 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275A00(void)
{

loc_00275A00: ;
    eax = MEM32(0x5BDA20);
    esp += 4; return; /* ret */

}

/**
 * sub_00275A10
 * Original: 0x00275A10 - 0x00275A16 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275A10(void)
{

loc_00275A10: ;
    eax = MEM32(0x5BDA24);
    esp += 4; return; /* ret */

}

/**
 * sub_00275A20
 * Original: 0x00275A20 - 0x00275A2F (15 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275A20: ;
    eax = MEM32(ecx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00275A2B; /* jne: not equal / not zero */

loc_00275A27: ;
    eax = eax | 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_00275A2B: ;
    eax = MEM32(ecx + 0x28);
    esp += 4; return; /* ret */

}

/**
 * sub_00275A30
 * Original: 0x00275A30 - 0x00275AAB (123 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275A30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00275A30: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275A4F; /* je: equal / zero */

loc_00275A3A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275A4F; /* jne: not equal / not zero */

loc_00275A4A: ;
    PUSH32(esp, 0x00275A4Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275A4F: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275A6B; /* je: equal / zero */

loc_00275A56: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275A6B; /* jne: not equal / not zero */

loc_00275A66: ;
    PUSH32(esp, 0x00275A6Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275A6B: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275A87; /* je: equal / zero */

loc_00275A72: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275A87; /* jne: not equal / not zero */

loc_00275A82: ;
    PUSH32(esp, 0x00275A87u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275A87: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275AA3; /* je: equal / zero */

loc_00275A8E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275AA3; /* jne: not equal / not zero */

loc_00275A9E: ;
    PUSH32(esp, 0x00275AA3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275AA3: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0019C0A0(); return; /* tail jmp 0x0019C0A0 */

}

/**
 * sub_00275AB0
 * Original: 0x00275AB0 - 0x00275AB6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275AB0(void)
{

loc_00275AB0: ;
    eax = MEM32(0x5BDA28);
    esp += 4; return; /* ret */

}

/**
 * sub_00275AC0
 * Original: 0x00275AC0 - 0x00275B06 (70 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275AC0(void)
{

loc_00275AC0: ;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x00275ACDu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00275ACD: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x3E134C;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x00275AFFu); RECOMP_ABI_CALL(0x0019C0A0u, sub_0019C0A0); /* call 0x0019C0A0 */

loc_00275AFF: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00275B10
 * Original: 0x00275B10 - 0x00275B16 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275B10(void)
{

loc_00275B10: ;
    eax = MEM32(0x5BDA30);
    esp += 4; return; /* ret */

}

/**
 * sub_00275B20
 * Original: 0x00275B20 - 0x00275B66 (70 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275B20(void)
{

loc_00275B20: ;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x00275B2Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00275B2D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x402360;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x00275B5Fu); RECOMP_ABI_CALL(0x0019C0A0u, sub_0019C0A0); /* call 0x0019C0A0 */

loc_00275B5F: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00275B70
 * Original: 0x00275B70 - 0x00275B94 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275B70(void)
{

loc_00275B70: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x00275B7Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00275B7B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4023E8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00275BA0
 * Original: 0x00275BA0 - 0x00275C0B (107 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275BA0(void)
{

loc_00275BA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00275BA9u); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00275BA9: ;
    edi = 0; /* xor self */
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x1C) = edi;
    ecx = esi + 0x20;
    MEM32(esi) = 0x403958;
    PUSH32(esp, 0x00275BC5u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00275BC5: ;
    MEM32(esi + 0x64) = edi;
    MEM32(esi + 0x68) = edi;
    ecx = esi + 0x6C;
    MEM32(esi) = 0x404408;
    PUSH32(esp, 0x00275BD9u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00275BD9: ;
    MEM32(esi + 0xAC) = edi;
    ecx = esi + 0xB0;
    MEM32(esi) = 0x4044A0;
    PUSH32(esp, 0x00275BF0u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00275BF0: ;
    ecx = esi + 0xF0;
    PUSH32(esp, 0x00275BFBu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00275BFB: ;
    ecx = esi + 0x130;
    PUSH32(esp, 0x00275C06u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00275C06: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00275C10
 * Original: 0x00275C10 - 0x00275C16 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275C10(void)
{

loc_00275C10: ;
    eax = MEM32(0x5BDA40);
    esp += 4; return; /* ret */

}

/**
 * sub_00275C20
 * Original: 0x00275C20 - 0x00275C28 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275C20(void)
{

loc_00275C20: ;
    PUSH32(esp, 0x00275C25u); RECOMP_ABI_CALL(0x0025A4B0u, sub_0025A4B0); /* call 0x0025A4B0 */

loc_00275C25: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00275C30
 * Original: 0x00275C30 - 0x00275C54 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275C30(void)
{

loc_00275C30: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x00275C3Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00275C3B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x402478;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00275C60
 * Original: 0x00275C60 - 0x00275C66 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275C60(void)
{

loc_00275C60: ;
    eax = MEM32(0x5BDA48);
    esp += 4; return; /* ret */

}

/**
 * sub_00275C70
 * Original: 0x00275C70 - 0x00275CCF (95 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275C70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00275C70: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275C8F; /* je: equal / zero */

loc_00275C7A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275C8F; /* jne: not equal / not zero */

loc_00275C8A: ;
    PUSH32(esp, 0x00275C8Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275C8F: ;
    ecx = MEM32(esi + 0x70);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275CAB; /* je: equal / zero */

loc_00275C96: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275CAB; /* jne: not equal / not zero */

loc_00275CA6: ;
    PUSH32(esp, 0x00275CABu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275CAB: ;
    ecx = MEM32(esi + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275CC7; /* je: equal / zero */

loc_00275CB2: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275CC7; /* jne: not equal / not zero */

loc_00275CC2: ;
    PUSH32(esp, 0x00275CC7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275CC7: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00274600(); return; /* tail jmp 0x00274600 */

}

/**
 * sub_00275CD0
 * Original: 0x00275CD0 - 0x00275D30 (96 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275CD0(void)
{

loc_00275CD0: ;
    esp = esp - 0xB0;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x00275CE0u); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00275CE0: ;
    esi = 0; /* xor self */
    ecx = esp + 0x44;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x3C) = esi;
    MEM32(esp + 4) = 0x4024D8;
    PUSH32(esp, 0x00275D07u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00275D07: ;
    eax = MEM32(0x5BC508);
    MEM32(esp + 0xA0) = esi;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x00275D26u); RECOMP_ABI_CALL(0x00254C10u, sub_00254C10); /* call 0x00254C10 */

loc_00275D26: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0xB0;
    esp += 4; return; /* ret */

}

/**
 * sub_00275D30
 * Original: 0x00275D30 - 0x00275D40 (16 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275D30(void)
{

loc_00275D30: ;
    PUSH32(esp, 0x2602E0);
    PUSH32(esp, 0x00275D3Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00275D3A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00275D40
 * Original: 0x00275D40 - 0x00275D8E (78 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275D40(void)
{

loc_00275D40: ;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x00275D4Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00275D4D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x402670;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x00275D87u); RECOMP_ABI_CALL(0x00254530u, sub_00254530); /* call 0x00254530 */

loc_00275D87: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00275D90
 * Original: 0x00275D90 - 0x00275DBC (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275D90: ;
    eax = MEM32(0x5BDF34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00275DB1; /* je: equal / zero */

loc_00275D9B: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275DB1; /* jne: not equal / not zero */

loc_00275DAC: ;
    PUSH32(esp, 0x00275DB1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275DB1: ;
    MEM32(0x5BDF34) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00275DC0
 * Original: 0x00275DC0 - 0x00275DE4 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275DC0(void)
{

loc_00275DC0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x00275DCBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00275DCB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4026D0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00275DF0
 * Original: 0x00275DF0 - 0x00275E34 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275DF0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00275E00; /* jne: not equal / not zero */

loc_00275DF9: ;
    MEM8(0x5BDF6C) = 1;

loc_00275E00: ;
    PUSH32(esp, 0x471048);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x275DC0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x4045D0);
    PUSH32(esp, 0x2509C0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BDA74);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00275E30u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00275E30: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00275E40
 * Original: 0x00275E40 - 0x00275E46 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275E40(void)
{

loc_00275E40: ;
    eax = MEM32(0x5BDA7C);
    esp += 4; return; /* ret */

}

/**
 * sub_00275E50
 * Original: 0x00275E50 - 0x00275EAF (95 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275E50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00275E50: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275E6F; /* je: equal / zero */

loc_00275E5A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275E6F; /* jne: not equal / not zero */

loc_00275E6A: ;
    PUSH32(esp, 0x00275E6Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275E6F: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275E8B; /* je: equal / zero */

loc_00275E76: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275E8B; /* jne: not equal / not zero */

loc_00275E86: ;
    PUSH32(esp, 0x00275E8Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275E8B: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00275EA7; /* je: equal / zero */

loc_00275E92: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275EA7; /* jne: not equal / not zero */

loc_00275EA2: ;
    PUSH32(esp, 0x00275EA7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275EA7: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0019C0A0(); return; /* tail jmp 0x0019C0A0 */

}

/**
 * sub_00275EB0
 * Original: 0x00275EB0 - 0x00275EF6 (70 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275EB0(void)
{

loc_00275EB0: ;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x00275EBDu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00275EBD: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x3E0F44;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x00275EEFu); RECOMP_ABI_CALL(0x0019C0A0u, sub_0019C0A0); /* call 0x0019C0A0 */

loc_00275EEF: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00275F00
 * Original: 0x00275F00 - 0x00275F24 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275F00(void)
{

loc_00275F00: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x00275F0Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00275F0B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x402730;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00275F30
 * Original: 0x00275F30 - 0x00275F7E (78 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275F30(void)
{

loc_00275F30: ;
    esp = esp - 0x2C;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x00275F3Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00275F3D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x3E160C;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x00275F77u); RECOMP_ABI_CALL(0x0019C7F0u, sub_0019C7F0); /* call 0x0019C7F0 */

loc_00275F77: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00275F80
 * Original: 0x00275F80 - 0x00275FFF (127 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00275F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00275F80: ;
    esp = esp - 0x230;
    PUSH32(esp, edi);
    ecx = esp + 4;
    PUSH32(esp, 0x00275F90u); RECOMP_ABI_CALL(0x002550D0u, sub_002550D0); /* call 0x002550D0 */

loc_00275F90: ;
    ecx = esp + 0x1E0;
    MEM32(esp + 4) = 0x402790;
    MEM32(esp + 0x1DC) = 0;
    PUSH32(esp, 0x00275FAFu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00275FAF: ;
    eax = MEM32(0x5BC508);
    MEM32(esp + 0x228) = 0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x1DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = MEM32(esp + ecx + 4);
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00275FEC; /* je: equal / zero */

loc_00275FD6: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00275FEC; /* jne: not equal / not zero */

loc_00275FE7: ;
    PUSH32(esp, 0x00275FECu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00275FEC: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00275FF5u); RECOMP_ABI_CALL(0x002552B0u, sub_002552B0); /* call 0x002552B0 */

loc_00275FF5: ;
    eax = edi;
    POP32(esp, edi);
    esp = esp + 0x230;
    esp += 4; return; /* ret */

}

/**
 * sub_00276000
 * Original: 0x00276000 - 0x00276024 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276000(void)
{

loc_00276000: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0027600Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027600B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x402888;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00276030
 * Original: 0x00276030 - 0x00276078 (72 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276030(void)
{

loc_00276030: ;
    esp = esp - 0xA8;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x00276040u); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00276040: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x7C) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x4028F8;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0027606Eu); RECOMP_ABI_CALL(0x00255690u, sub_00255690); /* call 0x00255690 */

loc_0027606E: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0xA8;
    esp += 4; return; /* ret */

}

/**
 * sub_00276080
 * Original: 0x00276080 - 0x002760C7 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276080: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00276090; /* jne: not equal / not zero */

loc_00276089: ;
    MEM8(0x5BDF6C) = 1;

loc_00276090: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x255720);
    PUSH32(esp, 0x260710);
    PUSH32(esp, 0x2556F0);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x404678);
    PUSH32(esp, 0x2512F0);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BDABC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002760C3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002760C3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002760D0
 * Original: 0x002760D0 - 0x002760D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002760D0(void)
{

loc_002760D0: ;
    eax = MEM32(0x5BDAC0);
    esp += 4; return; /* ret */

}

/**
 * sub_002760E0
 * Original: 0x002760E0 - 0x002760EC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002760E0(void)
{

loc_002760E0: ;
    PUSH32(esp, 0x260840);
    PUSH32(esp, 0x002760EAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002760EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002760F0
 * Original: 0x002760F0 - 0x00276136 (70 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002760F0(void)
{

loc_002760F0: ;
    esp = esp - 0x50;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x002760FDu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_002760FD: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x44) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x4029C0;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0027612Fu); RECOMP_ABI_CALL(0x00297A30u, sub_00297A30); /* call 0x00297A30 */

loc_0027612F: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_00276140
 * Original: 0x00276140 - 0x00276187 (71 bytes, 18 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276140: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00276150; /* jne: not equal / not zero */

loc_00276149: ;
    MEM8(0x5BDF6C) = 1;

loc_00276150: ;
    PUSH32(esp, 0x471050);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24AAC0);
    PUSH32(esp, 0x2557D0);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x404720);
    PUSH32(esp, 0x251530);
    PUSH32(esp, 0x249250);
    PUSH32(esp, 0x261980);
    PUSH32(esp, 0x5BDACC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00276183u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00276183: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00276190
 * Original: 0x00276190 - 0x00276196 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276190(void)
{

loc_00276190: ;
    eax = MEM32(0x5BDAD8);
    esp += 4; return; /* ret */

}

/**
 * sub_002761A0
 * Original: 0x002761A0 - 0x00276317 (375 bytes, 135 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002761A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002761A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002761BF; /* je: equal / zero */

loc_002761AA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002761BF; /* jne: not equal / not zero */

loc_002761BA: ;
    PUSH32(esp, 0x002761BFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002761BF: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002761DB; /* je: equal / zero */

loc_002761C6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002761DB; /* jne: not equal / not zero */

loc_002761D6: ;
    PUSH32(esp, 0x002761DBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002761DB: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002761F7; /* je: equal / zero */

loc_002761E2: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002761F7; /* jne: not equal / not zero */

loc_002761F2: ;
    PUSH32(esp, 0x002761F7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002761F7: ;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00276213; /* je: equal / zero */

loc_002761FE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00276213; /* jne: not equal / not zero */

loc_0027620E: ;
    PUSH32(esp, 0x00276213u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00276213: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027622F; /* je: equal / zero */

loc_0027621A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027622F; /* jne: not equal / not zero */

loc_0027622A: ;
    PUSH32(esp, 0x0027622Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027622F: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027624B; /* je: equal / zero */

loc_00276236: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027624B; /* jne: not equal / not zero */

loc_00276246: ;
    PUSH32(esp, 0x0027624Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027624B: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00276267; /* je: equal / zero */

loc_00276252: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00276267; /* jne: not equal / not zero */

loc_00276262: ;
    PUSH32(esp, 0x00276267u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00276267: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00276283; /* je: equal / zero */

loc_0027626E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00276283; /* jne: not equal / not zero */

loc_0027627E: ;
    PUSH32(esp, 0x00276283u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00276283: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027629F; /* je: equal / zero */

loc_0027628A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027629F; /* jne: not equal / not zero */

loc_0027629A: ;
    PUSH32(esp, 0x0027629Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027629F: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002762BB; /* je: equal / zero */

loc_002762A6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002762BB; /* jne: not equal / not zero */

loc_002762B6: ;
    PUSH32(esp, 0x002762BBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002762BB: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002762D7; /* je: equal / zero */

loc_002762C2: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002762D7; /* jne: not equal / not zero */

loc_002762D2: ;
    PUSH32(esp, 0x002762D7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002762D7: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002762F3; /* je: equal / zero */

loc_002762DE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002762F3; /* jne: not equal / not zero */

loc_002762EE: ;
    PUSH32(esp, 0x002762F3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002762F3: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027630F; /* je: equal / zero */

loc_002762FA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027630F; /* jne: not equal / not zero */

loc_0027630A: ;
    PUSH32(esp, 0x0027630Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027630F: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0019C0A0(); return; /* tail jmp 0x0019C0A0 */

}

/**
 * sub_00276320
 * Original: 0x00276320 - 0x00276344 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276320(void)
{

loc_00276320: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0027632Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027632B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x402A80;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00276350
 * Original: 0x00276350 - 0x0027635C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276350(void)
{

loc_00276350: ;
    PUSH32(esp, 0x2608E0);
    PUSH32(esp, 0x0027635Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027635A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00276360
 * Original: 0x00276360 - 0x00276384 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276360(void)
{

loc_00276360: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0027636Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027636B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x402B58;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00276390
 * Original: 0x00276390 - 0x0027639C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276390(void)
{

loc_00276390: ;
    PUSH32(esp, 0x260B90);
    PUSH32(esp, 0x0027639Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027639A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002763A0
 * Original: 0x002763A0 - 0x002763FA (90 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002763A0(void)
{

loc_002763A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x002763A9u); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_002763A9: ;
    edi = 0; /* xor self */
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi) = 0x4047D0;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = edi;
    ecx = esi + 0x48;
    MEM32(esi + 0x2C) = edi;
    PUSH32(esp, 0x002763D1u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_002763D1: ;
    MEM32(esi + 0x88) = edi;
    MEM32(esi + 0x8C) = edi;
    MEM32(esi + 0x90) = edi;
    MEM32(esi + 0x94) = edi;
    MEM32(esi + 0x98) = edi;
    MEM32(esi + 0x9C) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00276400
 * Original: 0x00276400 - 0x00276406 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276400(void)
{

loc_00276400: ;
    eax = MEM32(0x5BDAFC);
    esp += 4; return; /* ret */

}

/**
 * sub_00276410
 * Original: 0x00276410 - 0x00276443 (51 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276410: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0027641F; /* je: equal / zero */

loc_0027641C: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027641F: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027643B; /* je: equal / zero */

loc_00276426: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027643B; /* jne: not equal / not zero */

loc_00276436: ;
    PUSH32(esp, 0x0027643Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027643B: ;
    MEM32(esi + 0x20) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00276450
 * Original: 0x00276450 - 0x002765A1 (337 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276450(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00276450: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x9C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00276472; /* je: equal / zero */

loc_0027645D: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00276472; /* jne: not equal / not zero */

loc_0027646D: ;
    PUSH32(esp, 0x00276472u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00276472: ;
    ecx = MEM32(esi + 0x98);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00276491; /* je: equal / zero */

loc_0027647C: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00276491; /* jne: not equal / not zero */

loc_0027648C: ;
    PUSH32(esp, 0x00276491u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00276491: ;
    ecx = MEM32(esi + 0x94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002764B0; /* je: equal / zero */

loc_0027649B: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002764B0; /* jne: not equal / not zero */

loc_002764AB: ;
    PUSH32(esp, 0x002764B0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002764B0: ;
    ecx = MEM32(esi + 0x90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002764CF; /* je: equal / zero */

loc_002764BA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002764CF; /* jne: not equal / not zero */

loc_002764CA: ;
    PUSH32(esp, 0x002764CFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002764CF: ;
    ecx = MEM32(esi + 0x8C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002764EE; /* je: equal / zero */

loc_002764D9: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002764EE; /* jne: not equal / not zero */

loc_002764E9: ;
    PUSH32(esp, 0x002764EEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002764EE: ;
    ecx = MEM32(esi + 0x88);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027650D; /* je: equal / zero */

loc_002764F8: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027650D; /* jne: not equal / not zero */

loc_00276508: ;
    PUSH32(esp, 0x0027650Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027650D: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00276529; /* je: equal / zero */

loc_00276514: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00276529; /* jne: not equal / not zero */

loc_00276524: ;
    PUSH32(esp, 0x00276529u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00276529: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00276545; /* je: equal / zero */

loc_00276530: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00276545; /* jne: not equal / not zero */

loc_00276540: ;
    PUSH32(esp, 0x00276545u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00276545: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00276561; /* je: equal / zero */

loc_0027654C: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00276561; /* jne: not equal / not zero */

loc_0027655C: ;
    PUSH32(esp, 0x00276561u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00276561: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027657D; /* je: equal / zero */

loc_00276568: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027657D; /* jne: not equal / not zero */

loc_00276578: ;
    PUSH32(esp, 0x0027657Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027657D: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00276599; /* je: equal / zero */

loc_00276584: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00276599; /* jne: not equal / not zero */

loc_00276594: ;
    PUSH32(esp, 0x00276599u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00276599: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0019C0A0(); return; /* tail jmp 0x0019C0A0 */

}

/**
 * sub_002765B0
 * Original: 0x002765B0 - 0x002765B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002765B0(void)
{

loc_002765B0: ;
    eax = MEM32(0x5BDB00);
    esp += 4; return; /* ret */

}

/**
 * sub_002765C0
 * Original: 0x002765C0 - 0x0027663E (126 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002765C0(void)
{

loc_002765C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x002765C9u); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_002765C9: ;
    edi = 0; /* xor self */
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x1C) = edi;
    MEM32(esi) = 0x404900;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x24) = edi;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 0x2C) = edi;
    MEM32(esi + 0x38) = edi;
    ecx = esi + 0x50;
    MEM32(esi + 0x3C) = edi;
    PUSH32(esp, 0x002765F7u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_002765F7: ;
    MEM32(esi + 0x90) = edi;
    MEM32(esi + 0xA0) = edi;
    MEM32(esi + 0xA4) = edi;
    MEM32(esi + 0xA8) = edi;
    MEM32(esi + 0xAC) = edi;
    MEM32(esi + 0xB0) = edi;
    MEM32(esi + 0xB4) = edi;
    MEM32(esi + 0xB8) = edi;
    MEM32(esi + 0xBC) = edi;
    MEM32(esi + 0xC0) = edi;
    MEM32(esi + 0xC4) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00276640
 * Original: 0x00276640 - 0x00276646 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276640(void)
{

loc_00276640: ;
    eax = MEM32(0x5BDB0C);
    esp += 4; return; /* ret */

}

/**
 * sub_00276650
 * Original: 0x00276650 - 0x0027665A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276650(void)
{

loc_00276650: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x34) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00276660
 * Original: 0x00276660 - 0x00276693 (51 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276660: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0027666F; /* je: equal / zero */

loc_0027666C: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027666F: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027668B; /* je: equal / zero */

loc_00276676: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027668B; /* jne: not equal / not zero */

loc_00276686: ;
    PUSH32(esp, 0x0027668Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027668B: ;
    MEM32(esi + 0x24) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002766A0
 * Original: 0x002766A0 - 0x002768C4 (548 bytes, 185 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002766A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002766A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002766C2; /* je: equal / zero */

loc_002766AD: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002766C2; /* jne: not equal / not zero */

loc_002766BD: ;
    PUSH32(esp, 0x002766C2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002766C2: ;
    ecx = MEM32(esi + 0xC0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002766E1; /* je: equal / zero */

loc_002766CC: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002766E1; /* jne: not equal / not zero */

loc_002766DC: ;
    PUSH32(esp, 0x002766E1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002766E1: ;
    ecx = MEM32(esi + 0xBC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00276700; /* je: equal / zero */

loc_002766EB: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00276700; /* jne: not equal / not zero */

loc_002766FB: ;
    PUSH32(esp, 0x00276700u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00276700: ;
    ecx = MEM32(esi + 0xB8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027671F; /* je: equal / zero */

loc_0027670A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027671F; /* jne: not equal / not zero */

loc_0027671A: ;
    PUSH32(esp, 0x0027671Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027671F: ;
    ecx = MEM32(esi + 0xB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027673E; /* je: equal / zero */

loc_00276729: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027673E; /* jne: not equal / not zero */

loc_00276739: ;
    PUSH32(esp, 0x0027673Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027673E: ;
    ecx = MEM32(esi + 0xB0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027675D; /* je: equal / zero */

loc_00276748: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027675D; /* jne: not equal / not zero */

loc_00276758: ;
    PUSH32(esp, 0x0027675Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027675D: ;
    ecx = MEM32(esi + 0xAC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027677C; /* je: equal / zero */

loc_00276767: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027677C; /* jne: not equal / not zero */

loc_00276777: ;
    PUSH32(esp, 0x0027677Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027677C: ;
    ecx = MEM32(esi + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027679B; /* je: equal / zero */

loc_00276786: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027679B; /* jne: not equal / not zero */

loc_00276796: ;
    PUSH32(esp, 0x0027679Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027679B: ;
    ecx = MEM32(esi + 0xA4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002767BA; /* je: equal / zero */

loc_002767A5: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002767BA; /* jne: not equal / not zero */

loc_002767B5: ;
    PUSH32(esp, 0x002767BAu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002767BA: ;
    ecx = MEM32(esi + 0xA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002767D9; /* je: equal / zero */

loc_002767C4: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002767D9; /* jne: not equal / not zero */

loc_002767D4: ;
    PUSH32(esp, 0x002767D9u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002767D9: ;
    ecx = MEM32(esi + 0x90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002767F8; /* je: equal / zero */

loc_002767E3: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002767F8; /* jne: not equal / not zero */

loc_002767F3: ;
    PUSH32(esp, 0x002767F8u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002767F8: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00276814; /* je: equal / zero */

loc_002767FF: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00276814; /* jne: not equal / not zero */

loc_0027680F: ;
    PUSH32(esp, 0x00276814u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00276814: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00276830; /* je: equal / zero */

loc_0027681B: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00276830; /* jne: not equal / not zero */

loc_0027682B: ;
    PUSH32(esp, 0x00276830u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00276830: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027684C; /* je: equal / zero */

loc_00276837: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027684C; /* jne: not equal / not zero */

loc_00276847: ;
    PUSH32(esp, 0x0027684Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027684C: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00276868; /* je: equal / zero */

loc_00276853: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00276868; /* jne: not equal / not zero */

loc_00276863: ;
    PUSH32(esp, 0x00276868u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00276868: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00276884; /* je: equal / zero */

loc_0027686F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00276884; /* jne: not equal / not zero */

loc_0027687F: ;
    PUSH32(esp, 0x00276884u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00276884: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002768A0; /* je: equal / zero */

loc_0027688B: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002768A0; /* jne: not equal / not zero */

loc_0027689B: ;
    PUSH32(esp, 0x002768A0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002768A0: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002768BC; /* je: equal / zero */

loc_002768A7: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002768BC; /* jne: not equal / not zero */

loc_002768B7: ;
    PUSH32(esp, 0x002768BCu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002768BC: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0019C0A0(); return; /* tail jmp 0x0019C0A0 */

}

/**
 * sub_002768D0
 * Original: 0x002768D0 - 0x002768D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002768D0(void)
{

loc_002768D0: ;
    eax = MEM32(0x5BDB14);
    esp += 4; return; /* ret */

}

/**
 * sub_002768E0
 * Original: 0x002768E0 - 0x0027693F (95 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002768E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002768E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002768FF; /* je: equal / zero */

loc_002768EA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002768FF; /* jne: not equal / not zero */

loc_002768FA: ;
    PUSH32(esp, 0x002768FFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002768FF: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027691B; /* je: equal / zero */

loc_00276906: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027691B; /* jne: not equal / not zero */

loc_00276916: ;
    PUSH32(esp, 0x0027691Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027691B: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00276937; /* je: equal / zero */

loc_00276922: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00276937; /* jne: not equal / not zero */

loc_00276932: ;
    PUSH32(esp, 0x00276937u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00276937: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0019C0A0(); return; /* tail jmp 0x0019C0A0 */

}

/**
 * sub_00276940
 * Original: 0x00276940 - 0x00276964 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276940(void)
{

loc_00276940: ;
    esp = esp - 0x18;
    ecx = esp;
    PUSH32(esp, 0x0027694Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027694B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x402EE8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00276970
 * Original: 0x00276970 - 0x002769B4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276970: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00276980; /* jne: not equal / not zero */

loc_00276979: ;
    MEM8(0x5BDF6C) = 1;

loc_00276980: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24AFB0);
    PUSH32(esp, 0x276940);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x404A34);
    PUSH32(esp, 0x250060);
    PUSH32(esp, 0x1A43C0);
    PUSH32(esp, 0x229260);
    PUSH32(esp, 0x5BDB18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002769B0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002769B0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002769C0
 * Original: 0x002769C0 - 0x002769C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002769C0(void)
{

loc_002769C0: ;
    eax = MEM32(0x5BDB28);
    esp += 4; return; /* ret */

}

/**
 * sub_002769D0
 * Original: 0x002769D0 - 0x002769D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002769D0(void)
{

loc_002769D0: ;
    eax = MEM32(0x5BDB2C);
    esp += 4; return; /* ret */

}

/**
 * sub_002769E0
 * Original: 0x002769E0 - 0x00276A04 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002769E0(void)
{

loc_002769E0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x002769EBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_002769EB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x403080;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00276A10
 * Original: 0x00276A10 - 0x00276A3C (44 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276A10(void)
{

loc_00276A10: ;
    esp = esp - 0x34;
    ecx = esp;
    PUSH32(esp, 0x00276A1Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00276A1B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4030E0;
    MEM32(esp + 0x14) = 0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_00276A40
 * Original: 0x00276A40 - 0x00276A46 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276A40(void)
{

loc_00276A40: ;
    eax = MEM32(0x5BDB3C);
    esp += 4; return; /* ret */

}

/**
 * sub_00276A50
 * Original: 0x00276A50 - 0x00276A9A (74 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276A50(void)
{

loc_00276A50: ;
    esp = esp - 0x28;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x00276A5Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00276A5D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x3E1434;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x00276A93u); RECOMP_ABI_CALL(0x0019C0A0u, sub_0019C0A0); /* call 0x0019C0A0 */

loc_00276A93: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_00276AA0
 * Original: 0x00276AA0 - 0x00276AC4 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276AA0(void)
{

loc_00276AA0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x00276AABu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00276AAB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x403138;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00276AD0
 * Original: 0x00276AD0 - 0x00276B14 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276AD0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00276AE0; /* jne: not equal / not zero */

loc_00276AD9: ;
    MEM8(0x5BDF6C) = 1;

loc_00276AE0: ;
    PUSH32(esp, 0x471058);
    PUSH32(esp, 0);
    PUSH32(esp, 0x256710);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x404B8C);
    PUSH32(esp, 0x2517D0);
    PUSH32(esp, 0x1A4460);
    PUSH32(esp, 0x226510);
    PUSH32(esp, 0x5BDB4C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00276B10u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00276B10: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00276B20
 * Original: 0x00276B20 - 0x00276B44 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276B20(void)
{

loc_00276B20: ;
    esp = esp - 0x20;
    ecx = esp;
    PUSH32(esp, 0x00276B2Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00276B2B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x403198;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00276B50
 * Original: 0x00276B50 - 0x00276B74 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276B50(void)
{

loc_00276B50: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x00276B5Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00276B5B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4031F8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00276B80
 * Original: 0x00276B80 - 0x00276B8C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276B80(void)
{

loc_00276B80: ;
    PUSH32(esp, 0x261930);
    PUSH32(esp, 0x00276B8Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00276B8A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00276B90
 * Original: 0x00276B90 - 0x00276BB4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276B90(void)
{

loc_00276B90: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x00276B9Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00276B9B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x403280;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00276BC0
 * Original: 0x00276BC0 - 0x00276BCC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276BC0(void)
{

loc_00276BC0: ;
    PUSH32(esp, 0x261A30);
    PUSH32(esp, 0x00276BCAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00276BCA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00276BD0
 * Original: 0x00276BD0 - 0x00276BF4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276BD0(void)
{

loc_00276BD0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x00276BDBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00276BDB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4032F0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00276C00
 * Original: 0x00276C00 - 0x00276C24 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276C00(void)
{

loc_00276C00: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x00276C0Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00276C0B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x403350;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00276C30
 * Original: 0x00276C30 - 0x00276C54 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276C30(void)
{

loc_00276C30: ;
    esp = esp - 0x20;
    ecx = esp;
    PUSH32(esp, 0x00276C3Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00276C3B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4033B0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00276C60
 * Original: 0x00276C60 - 0x00276C84 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276C60(void)
{

loc_00276C60: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x00276C6Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00276C6B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x403410;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00276C90
 * Original: 0x00276C90 - 0x00276CB4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276C90(void)
{

loc_00276C90: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x00276C9Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00276C9B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x403470;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00276CC0
 * Original: 0x00276CC0 - 0x00276D07 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276CC0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00276CD0; /* jne: not equal / not zero */

loc_00276CC9: ;
    MEM8(0x5BDF6C) = 1;

loc_00276CD0: ;
    PUSH32(esp, 0x471060);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24B4D0);
    PUSH32(esp, 0x261B60);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x404BA0);
    PUSH32(esp, 0x251380);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BDBA4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00276D03u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00276D03: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00276D10
 * Original: 0x00276D10 - 0x00276D5A (74 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276D10(void)
{

loc_00276D10: ;
    esp = esp - 0x60;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x00276D1Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00276D1D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x4034D0;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x00276D53u); RECOMP_ABI_CALL(0x00261C10u, sub_00261C10); /* call 0x00261C10 */

loc_00276D53: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x60;
    esp += 4; return; /* ret */

}

/**
 * sub_00276D60
 * Original: 0x00276D60 - 0x00276D65 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276D60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00276D60: ;
    g_seh_ebp = ebp; sub_00262340(); return; /* tail jmp 0x00262340 */

}

/**
 * sub_00276D70
 * Original: 0x00276D70 - 0x00276D94 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276D70(void)
{

loc_00276D70: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x00276D7Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00276D7B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x403548;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00276DA0
 * Original: 0x00276DA0 - 0x00276DC4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276DA0(void)
{

loc_00276DA0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x00276DABu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00276DAB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4035A8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00276DD0
 * Original: 0x00276DD0 - 0x00276E14 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276DD0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00276DE0; /* jne: not equal / not zero */

loc_00276DD9: ;
    MEM8(0x5BDF6C) = 1;

loc_00276DE0: ;
    PUSH32(esp, 0x47106C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x276DA0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x404BBC);
    PUSH32(esp, 0x250F30);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BDBBC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00276E10u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00276E10: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00276E20
 * Original: 0x00276E20 - 0x00276E44 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276E20(void)
{

loc_00276E20: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x00276E2Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00276E2B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x403608;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00276E50
 * Original: 0x00276E50 - 0x00276E74 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276E50(void)
{

loc_00276E50: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x00276E5Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00276E5B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x403668;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00276E80
 * Original: 0x00276E80 - 0x00276EC7 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276E80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00276E80: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00276E90; /* jne: not equal / not zero */

loc_00276E89: ;
    MEM8(0x5BDF6C) = 1;

loc_00276E90: ;
    PUSH32(esp, 0x471074);
    PUSH32(esp, 0);
    PUSH32(esp, 0x256F90);
    PUSH32(esp, 0x261D60);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x404BCC);
    PUSH32(esp, 0x250E70);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BDBD0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00276EC3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00276EC3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00276ED0
 * Original: 0x00276ED0 - 0x00276EF4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276ED0(void)
{

loc_00276ED0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x00276EDBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00276EDB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4036C8;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00276F00
 * Original: 0x00276F00 - 0x00276F0C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276F00(void)
{

loc_00276F00: ;
    PUSH32(esp, 0x261DE0);
    PUSH32(esp, 0x00276F0Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00276F0A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00276F10
 * Original: 0x00276F10 - 0x00276F34 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276F10(void)
{

loc_00276F10: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x00276F1Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00276F1B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x403738;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00276F40
 * Original: 0x00276F40 - 0x00276F46 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276F40(void)
{

loc_00276F40: ;
    eax = MEM32(0x5BDBEC);
    esp += 4; return; /* ret */

}

/**
 * sub_00276F50
 * Original: 0x00276F50 - 0x00276FE7 (151 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276F50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00276F50: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00276F6F; /* je: equal / zero */

loc_00276F5A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00276F6F; /* jne: not equal / not zero */

loc_00276F6A: ;
    PUSH32(esp, 0x00276F6Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00276F6F: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00276F8B; /* je: equal / zero */

loc_00276F76: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00276F8B; /* jne: not equal / not zero */

loc_00276F86: ;
    PUSH32(esp, 0x00276F8Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00276F8B: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00276FA7; /* je: equal / zero */

loc_00276F92: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00276FA7; /* jne: not equal / not zero */

loc_00276FA2: ;
    PUSH32(esp, 0x00276FA7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00276FA7: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00276FC3; /* je: equal / zero */

loc_00276FAE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00276FC3; /* jne: not equal / not zero */

loc_00276FBE: ;
    PUSH32(esp, 0x00276FC3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00276FC3: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00276FDF; /* je: equal / zero */

loc_00276FCA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00276FDF; /* jne: not equal / not zero */

loc_00276FDA: ;
    PUSH32(esp, 0x00276FDFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00276FDF: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0019C0A0(); return; /* tail jmp 0x0019C0A0 */

}

/**
 * sub_00276FF0
 * Original: 0x00276FF0 - 0x00276FF5 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00276FF0(void)
{

loc_00276FF0: ;
    MEM8(ecx + 0x3C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00277000
 * Original: 0x00277000 - 0x002771AF (431 bytes, 155 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277000(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00277000: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027701F; /* je: equal / zero */

loc_0027700A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027701F; /* jne: not equal / not zero */

loc_0027701A: ;
    PUSH32(esp, 0x0027701Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027701F: ;
    ecx = MEM32(esi + 0x68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027703B; /* je: equal / zero */

loc_00277026: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027703B; /* jne: not equal / not zero */

loc_00277036: ;
    PUSH32(esp, 0x0027703Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027703B: ;
    ecx = MEM32(esi + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00277057; /* je: equal / zero */

loc_00277042: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00277057; /* jne: not equal / not zero */

loc_00277052: ;
    PUSH32(esp, 0x00277057u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00277057: ;
    ecx = MEM32(esi + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00277073; /* je: equal / zero */

loc_0027705E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00277073; /* jne: not equal / not zero */

loc_0027706E: ;
    PUSH32(esp, 0x00277073u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00277073: ;
    ecx = MEM32(esi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027708F; /* je: equal / zero */

loc_0027707A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027708F; /* jne: not equal / not zero */

loc_0027708A: ;
    PUSH32(esp, 0x0027708Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027708F: ;
    ecx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002770AB; /* je: equal / zero */

loc_00277096: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002770AB; /* jne: not equal / not zero */

loc_002770A6: ;
    PUSH32(esp, 0x002770ABu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002770AB: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002770C7; /* je: equal / zero */

loc_002770B2: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002770C7; /* jne: not equal / not zero */

loc_002770C2: ;
    PUSH32(esp, 0x002770C7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002770C7: ;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002770E3; /* je: equal / zero */

loc_002770CE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002770E3; /* jne: not equal / not zero */

loc_002770DE: ;
    PUSH32(esp, 0x002770E3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002770E3: ;
    ecx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002770FF; /* je: equal / zero */

loc_002770EA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002770FF; /* jne: not equal / not zero */

loc_002770FA: ;
    PUSH32(esp, 0x002770FFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002770FF: ;
    ecx = MEM32(esi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027711B; /* je: equal / zero */

loc_00277106: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027711B; /* jne: not equal / not zero */

loc_00277116: ;
    PUSH32(esp, 0x0027711Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027711B: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00277137; /* je: equal / zero */

loc_00277122: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00277137; /* jne: not equal / not zero */

loc_00277132: ;
    PUSH32(esp, 0x00277137u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00277137: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00277153; /* je: equal / zero */

loc_0027713E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00277153; /* jne: not equal / not zero */

loc_0027714E: ;
    PUSH32(esp, 0x00277153u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00277153: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027716F; /* je: equal / zero */

loc_0027715A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027716F; /* jne: not equal / not zero */

loc_0027716A: ;
    PUSH32(esp, 0x0027716Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027716F: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027718B; /* je: equal / zero */

loc_00277176: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027718B; /* jne: not equal / not zero */

loc_00277186: ;
    PUSH32(esp, 0x0027718Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027718B: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002771A7; /* je: equal / zero */

loc_00277192: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002771A7; /* jne: not equal / not zero */

loc_002771A2: ;
    PUSH32(esp, 0x002771A7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002771A7: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0019C0A0(); return; /* tail jmp 0x0019C0A0 */

}

/**
 * sub_002771B0
 * Original: 0x002771B0 - 0x0027724B (155 bytes, 63 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002771B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002771B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ecx = MEM32(ebx + 0xC);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x002771BFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002771BF: ;
    edi = MEM32(esp + 0x18);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00277218; /* jle: less or equal (signed <=) */

loc_002771CD: ;
    /* nop */

loc_002771D0: ;
    ecx = MEM32(ebx + 0x30);
    edx = MEM32(ecx + 0x10);
    esi = MEM32(edx + ebp * 4);
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027720F; /* jl: less (signed <) */

loc_002771E1: ;
    edx = ecx + -1;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0027720F; /* jl: less (signed <) */

loc_002771EA: ;
    /* nop */

loc_002771F0: ;
    ecx = MEM32(esi + 0x10);
    ecx = MEM32(ecx + edx * 4);
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00277201; /* jne: not equal / not zero */

loc_002771FD: ;
    SET_LO8(eax, 1);
    goto loc_0027720C;

loc_00277201: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027720C; /* je: equal / zero */

loc_00277205: ;
    MEM32(ecx + 0x14) = 3;

loc_0027720C: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_002771F0; /* jns: not sign (positive) */

loc_0027720F: ;
    eax = MEM32(esp + 0x10);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002771D0; /* jl: less (signed <) */

loc_00277218: ;
    esi = 0; /* xor self */
    MEM32(edi + 0xC) = esi;
    ecx = MEM32(edi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00277239; /* je: equal / zero */

loc_00277224: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00277239; /* jne: not equal / not zero */

loc_00277234: ;
    PUSH32(esp, 0x00277239u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00277239: ;
    ecx = ebx;
    MEM32(edi + 0x18) = esi;
    PUSH32(esp, 0x00277243u); RECOMP_ABI_CALL(0x00262510u, sub_00262510); /* call 0x00262510 */

loc_00277243: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00277250
 * Original: 0x00277250 - 0x00277A06 (1974 bytes, 624 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277250(void)
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

loc_00277250: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x58));
    esp = esp - 0x58;
    eax = MEM32(ecx + 0x38);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0x10) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_00277273; /* jne: not equal / not zero */

loc_0027726A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x58)) >> 32) & 1);
    esp = esp + 0x58;
    esp += 12; return; /* ret 8 */

loc_00277273: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x64);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x70);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002772A8; /* jle: less or equal (signed <=) */

loc_00277284: ;
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + esi * 4);
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00277298; /* je: equal / zero */

loc_00277291: ;
    SET_LO8(edx, MEM8(ecx + 0x1C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_002772A3; /* je: equal / zero */

loc_00277298: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0027729Fu); RECOMP_ABI_CALL(0x0024B7B0u, sub_0024B7B0); /* call 0x0024B7B0 */

loc_0027729F: ;
    eax = MEM32(esp + 0x14);

loc_002772A3: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00277284; /* jl: less (signed <) */

loc_002772A8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x28) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00277840; /* jle: less or equal (signed <=) */

loc_002772B8: ;
    goto loc_002772C0;

    /* nop */

loc_002772C0: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(esp + 0x28);
    esi = MEM32(eax + ecx * 4);
    ebx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x10);
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x34) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0027781F; /* je: equal / zero */

loc_002772EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0027781F; /* je: equal / zero */

loc_002772F4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002772FE; /* je: equal / zero */

loc_002772F9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00277310; /* jne: not equal / not zero */

loc_002772FE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0027781F; /* je: equal / zero */

loc_00277307: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0027781F; /* je: equal / zero */

loc_00277310: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00277668; /* je: equal / zero */

loc_0027731B: ;
    edx = MEM32(esi + 0x48);
    _cf = 0; /* logical op clears CF */
    edx = edx | MEM32(esi + 0x4C);
    if ((edx == 0)) goto loc_002773C1; /* je: equal / zero */

loc_00277327: ;
    eax = ebp;
    edx = edi;
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x00277332u); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_00277332: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x30) = eax;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00277344; /* jge: greater or equal (signed >=) */

loc_0027733E: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00277344: ;
    fp_top() = fp_top() * MEMF(esi + 0x38); /* fmul dword ptr [esi + 0x38] */
    PUSH32(esp, 0x0027734Cu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0027734C: ;
    ecx = MEM32(esi + 0x60);
    edx = (edx << 0x12) | (eax >> (32 - 0x12)); /* shld */
    if (0x12) _cf = (int)(((eax) >> (32 - (0x12))) & 1);
    eax = eax << 0x12;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    eax = MEM32(esi + 0x64);
    PUSH32(esp, edi);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    MEM32(esi + 0x40) = ecx;
    PUSH32(esp, ebp);
    ecx = esi;
    MEM32(esi + 0x44) = eax;
    PUSH32(esp, 0x0027736Cu); RECOMP_ABI_CALL(0x0024B7B0u, sub_0024B7B0); /* call 0x0024B7B0 */

loc_0027736C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x48) = ebp;
    MEM32(esi + 0x4C) = edi;
    MEM32(esi + 0x14) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00277664; /* jne: not equal / not zero */

loc_00277382: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00277391u); RECOMP_ABI_CALL(0x002623C0u, sub_002623C0); /* call 0x002623C0 */

loc_00277391: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x20) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_002773A5; /* jne: not equal / not zero */

loc_00277399: ;
    MEM32(esi + 0xC) = 1;
    goto loc_00277668;

loc_002773A5: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002773B1u); RECOMP_ABI_CALL(0x002097E0u, sub_002097E0); /* call 0x002097E0 */

loc_002773B1: ;
    eax = MEM32(esp + 0x20);
    MEM32(eax + 0x14) = 1;
    goto loc_00277668;

loc_002773C1: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002773D0u); RECOMP_ABI_CALL(0x002623C0u, sub_002623C0); /* call 0x002623C0 */

loc_002773D0: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x30) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_00277433; /* jne: not equal / not zero */

loc_002773DA: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, ebx);
    MEM32(esi + 0x60) = ebx;
    MEM32(esi + 0x64) = ebx;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = 0x3F800000;
    eax = MEM32(edx + 0x34);
    ecx = MEM32(edx + 0x30);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002773FDu); RECOMP_ABI_CALL(0x00342E20u, sub_00342E20); /* call 0x00342E20 */

loc_002773FD: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x5C) = edx;
    PUSH32(esp, 0x0027740Eu); RECOMP_ABI_CALL(0x00138820u, sub_00138820); /* call 0x00138820 */

loc_0027740E: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00277417u); RECOMP_ABI_CALL(0x0024B7B0u, sub_0024B7B0); /* call 0x0024B7B0 */

loc_00277417: ;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x2C), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x48) = ebp;
    MEM32(esi + 0x4C) = edi;
    MEM32(esi + 0x14) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0027782B; /* jne: not equal / not zero */

loc_0027742B: ;
    MEM32(esi + 0x14) = ebx;
    goto loc_0027782B;

loc_00277433: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0027743Bu); RECOMP_ABI_CALL(0x002097E0u, sub_002097E0); /* call 0x002097E0 */

loc_0027743B: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(edx + 0xC);
    ecx = MEM32(ebx + 0x28);
    edx = MEM32(ebx + 0x2C);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x20) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002775FE; /* jle: less or equal (signed <=) */

loc_0027745B: ;
    MEM32(esi + 0x14) = 2;
    eax = MEM32(ebx + 8);
    edi = MEM32(eax + 0x20);
    ebp = MEM32(eax + 0x2C);
    MEM32(esp + 0x58) = edi;
    edi = MEM32(eax + 0x24);
    ebx = eax;
    MEM32(esp + 0x5C) = edi;
    edi = MEM32(eax + 0x28);
    eax = MEM32(ebx + 0x30);
    ebx = MEM32(ebx + 0x34);
    MEM32(esp + 0x54) = ebx;
    ebx = esp + 0x38;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x58);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x60);
    PUSH32(esp, eax);
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(esp + 0x68);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(ebx));
    ecx = ecx - ebx;
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(eax) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edi));
    ecx = ecx - edi;
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(ebp) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002774ABu); RECOMP_ABI_CALL(0x0024ECA0u, sub_0024ECA0); /* call 0x0024ECA0 */

loc_002774AB: ;
    edx = MEM32(esp + 0x4C);
    ecx = MEM32(esp + 0x50);
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(esp + 0x40);
    ebx = MEM32(eax + 0x10);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(edi)) >> 32) & 1);
    edx = edx + edi;
    edi = MEM32(ebx);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(ebp) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(edi + 8);
    MEM32(esp + 0x38) = edx;
    eax = MEM32(esp + 0x38);
    edx = MEM32(edi + 0xC);
    ebp = ecx;
    _cf = (int)((uint32_t)(ebp) < (uint32_t)(eax));
    ebp = ebp - eax;
    eax = edx;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(esp + 0x3C)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x44) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_00277578; /* jle: less or equal (signed <=) */

loc_002774FC: ;
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(4)) >> 32) & 1);
    ebx = ebx + 4;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x2C) = ecx;
    goto loc_00277510;

    /* nop */

loc_00277510: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ecx);
    ebx = MEM32(esp + 0x38);
    ecx = MEM32(edx + 8);
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(ebx));
    ecx = ecx - ebx;
    ebx = MEM32(edx + 0xC);
    { uint64_t _t = (uint64_t)(ebx) - (uint64_t)(MEM32(esp + 0x3C)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ebx = (uint32_t)_t; }  /* sbb */
    if (((int32_t)ebx < 0)) goto loc_0027753E; /* js: sign (negative) */

loc_00277528: ;
    if (_flags /* jg: greater (signed >) */) goto loc_0027752E;

loc_0027752A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_B(_fa & _fb, 0)) goto loc_0027753E; /* jb: below (unsigned <) */

loc_0027752E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0027753E; /* jg: greater (signed >) */

loc_00277532: ;
    if (CMP_L(_fas, _fbs)) goto loc_00277538; /* jl: less (signed <) */

loc_00277534: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0027753E; /* jae: above or equal (unsigned >=) */

loc_00277538: ;
    ebp = ecx;
    eax = ebx;
    goto loc_00277560;

loc_0027753E: ;
    ecx = MEM32(edx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x44) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00277562; /* jg: greater (signed >) */

loc_00277547: ;
    if (CMP_L(_fas, _fbs)) goto loc_00277552; /* jl: less (signed <) */

loc_00277549: ;
    ecx = MEM32(edx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x40) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00277562; /* jae: above or equal (unsigned >=) */

loc_00277552: ;
    ecx = MEM32(edx + 8);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(edx + 0xC);
    MEM32(esp + 0x44) = ecx;

loc_00277560: ;
    edi = edx;

loc_00277562: ;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x2C);
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(4)) >> 32) & 1);
    edx = edx + 4;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x2C) = ecx;
    if ((_fa != 0)) goto loc_00277510; /* jne: not equal / not zero */

loc_00277578: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_G(_fas & _fbs, 0)) goto loc_00277592; /* jg: greater (signed >) */

loc_0027757C: ;
    if (TEST_S(_fas, _fbs)) goto loc_00277582; /* jl: less (signed <) */

loc_0027757E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_AE(_fa & _fb, 0)) goto loc_00277592; /* jae: above or equal (unsigned >=) */

loc_00277582: ;
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x4C);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(1)) >> 32) & 1);
    eax = eax + 1;
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    goto loc_0027759A;

loc_00277592: ;
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x4C);

loc_0027759A: ;
    edx = MEM32(esp + 0x54);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x54);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002775ABu); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_002775AB: ;
    ecx = MEM32(esp + 0x30);
    ecx = MEM32(ecx + 8);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(ecx + 0x20))) >> 32) & 1);
    eax = eax + MEM32(ecx + 0x20);
    ebp = MEM32(ecx + 0x24);
    ebx = MEM32(edi + 8);
    ecx = MEM32(edi + 0xC);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(ebp) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    ebp = MEM32(esp + 0x6C);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    MEM32(esi + 0x30) = eax;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    MEM32(esi + 0x34) = edx;
    edi = MEM32(edi + 0x10);
    edx = MEM32(edi + 0x18);
    MEM32(esi + 0x60) = edx;
    eax = MEM32(edi + 0x1C);
    MEM32(esi + 0x64) = eax;
    ecx = MEM32(edi + 8);
    MEM32(esi + 0x50) = ecx;
    fp_push(MEMF(edi + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(edi + 8); /* fsub dword ptr [edi + 8] */
    MEMF(esi + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(edi + 0x10);
    MEM32(esi + 0x58) = edx;
    eax = MEM32(edi + 0x14);
    edi = MEM32(esp + 0x70);
    MEM32(esi + 0x5C) = eax;
    goto loc_00277664;

loc_002775FE: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(ecx + 0x10);
    edx = MEM32(eax + 0x18);
    MEM32(esi + 0x60) = edx;
    ecx = MEM32(eax + 0x1C);
    MEM32(esi + 0x64) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 0x50) = edx;
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = fp_top() - MEMF(eax + 8); /* fsub dword ptr [eax + 8] */
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    MEMF(esi + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax + 0x10);
    MEM32(esi + 0x58) = ecx;
    edx = MEM32(eax + 0x14);
    eax = MEM32(esi + 0x64);
    ecx = MEM32(esi + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esi + 0x5C) = edx;
    PUSH32(esp, 0x0027763Du); RECOMP_ABI_CALL(0x00138820u, sub_00138820); /* call 0x00138820 */

loc_0027763D: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00277646u); RECOMP_ABI_CALL(0x0024B7B0u, sub_0024B7B0); /* call 0x0024B7B0 */

loc_00277646: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x48) = ebp;
    MEM32(esi + 0x4C) = edi;
    MEM32(esi + 0x14) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00277664; /* jne: not equal / not zero */

loc_0027765A: ;
    edx = MEM32(esi + 0x18);
    MEM32(edx + 0x14) = 1;

loc_00277664: ;
    ebx = MEM32(esp + 0x18);

loc_00277668: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002776F3; /* jne: not equal / not zero */

loc_00277672: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x34);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(eax + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_002776F3; /* jl: less (signed <) */

loc_00277683: ;
    if (CMP_G(_fas, _fbs)) goto loc_00277691; /* jg: greater (signed >) */

loc_00277685: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(ecx + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x30) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_002776F3; /* jb: below (unsigned <) */

loc_00277691: ;
    eax = ebp;
    edx = edi;
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x0027769Cu); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_0027769C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x30) = eax;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_002776AE; /* jge: greater or equal (signed >=) */

loc_002776A8: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_002776AE: ;
    fp_top() = fp_top() * MEMF(esi + 0x38); /* fmul dword ptr [esi + 0x38] */
    PUSH32(esp, 0x002776B6u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_002776B6: ;
    ecx = MEM32(esi + 0x60);
    edx = (edx << 0x12) | (eax >> (32 - 0x12)); /* shld */
    if (0x12) _cf = (int)(((eax) >> (32 - (0x12))) & 1);
    eax = eax << 0x12;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    eax = MEM32(esi + 0x64);
    PUSH32(esp, edi);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    MEM32(esi + 0x40) = ecx;
    PUSH32(esp, ebp);
    ecx = esi;
    MEM32(esi + 0x44) = eax;
    PUSH32(esp, 0x002776D6u); RECOMP_ABI_CALL(0x0024B7B0u, sub_0024B7B0); /* call 0x0024B7B0 */

loc_002776D6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x48) = ebp;
    MEM32(esi + 0x4C) = edi;
    MEM32(esi + 0x14) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_002776F3; /* jne: not equal / not zero */

loc_002776E8: ;
    ecx = MEM32(esp + 0x2C);
    MEM32(ecx + 0x14) = 1;

loc_002776F3: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0027782B; /* jne: not equal / not zero */

loc_002776FE: ;
    ebx = MEM32(esi + 0x48);
    ecx = MEM32(esi + 0x4C);
    edx = ebp;
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ebx));
    edx = edx - ebx;
    eax = edi;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    MEM32(esp + 0x64) = eax;
    MEM32(esp + 0x60) = edx;
    fp_push((double)SMEM64(esp + 0x60)); /* fild */
    fp_push((double)SMEM64(esi + 0x58)); /* fild */
    fp_st1() = fp_st1() / fp_top(); fp_pop(); /* fdivp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00277732; /* jne: not equal / not zero */

loc_0027772A: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x3C6E40)); /* fld float */

loc_00277732: ;
    fp_top() = fp_top() * MEMF(esi + 0x54); /* fmul dword ptr [esi + 0x54] */
    ecx = MEM32(esp + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    fp_top() = fp_top() + MEMF(esi + 0x50); /* fadd dword ptr [esi + 0x50] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_0027779A; /* jne: not equal / not zero */

loc_00277745: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x18); /* fsub dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6DE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6de4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00277816; /* jp: parity */

loc_00277764: ;
    MEM32(esi + 0x14) = 3;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00277787; /* je: equal / zero */

loc_00277772: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00277787; /* jne: not equal / not zero */

loc_00277782: ;
    PUSH32(esp, 0x00277787u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00277787: ;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x18) = 0;
    MEM32(esi + 0x20) = edx;
    goto loc_0027782B;

loc_0027779A: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C6E40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c6e40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00277816; /* jne: not equal / not zero */

loc_002777AB: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002777BF; /* jne: not equal / not zero */

loc_002777B1: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0xC) = ebx;
    PUSH32(esp, 0x002777BDu); RECOMP_ABI_CALL(0x00262510u, sub_00262510); /* call 0x00262510 */

loc_002777BD: ;
    goto loc_002777DF;

loc_002777BF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00277807; /* jne: not equal / not zero */

loc_002777C4: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_00277810; /* je: equal / zero */

loc_002777CD: ;
    MEM32(esi + 0xC) = ebx;
    PUSH32(esp, 0x002777D5u); RECOMP_ABI_CALL(0x00262510u, sub_00262510); /* call 0x00262510 */

loc_002777D5: ;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + 0x14) = 3;

loc_002777DF: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002777FB; /* je: equal / zero */

loc_002777E6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = edx;
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_002777FB; /* jne: not equal / not zero */

loc_002777F6: ;
    PUSH32(esp, 0x002777FBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002777FB: ;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x20) = edx;
    goto loc_0027782B;

loc_00277807: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00277816; /* jne: not equal / not zero */

loc_0027780C: ;
    ecx = MEM32(esp + 0x10);

loc_00277810: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00277816u); RECOMP_ABI_CALL(0x002771B0u, sub_002771B0); /* call 0x002771B0 */

loc_00277816: ;
    edx = MEM32(esp + 0x18);
    MEM32(esi + 0x20) = edx;
    goto loc_0027782B;

loc_0027781F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0027782B; /* jne: not equal / not zero */

loc_00277824: ;
    MEM32(esi + 0x14) = 0;

loc_0027782B: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x28) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002772C0; /* jl: less (signed <) */

loc_00277840: ;
    eax = MEM32(esp + 0x1C);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00277897; /* jle: less or equal (signed <=) */

loc_0027784A: ;
    /* nop */

loc_00277850: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0x10);
    esi = MEM32(ecx + ebx * 4);
    SET_LO8(eax, MEM8(esi + 0x7C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0027788E; /* je: equal / zero */

loc_00277861: ;
    SET_LO8(eax, MEM8(esi + 0x7E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0027788E; /* jne: not equal / not zero */

loc_00277868: ;
    fp_push((double)SMEM64(esi + 0x88)); /* fild */
    fp_top() = fp_top() * MEMF(esi + 0x20); /* fmul dword ptr [esi + 0x20] */
    PUSH32(esp, 0x00277876u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00277876: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(esi + 0x80))) >> 32) & 1);
    eax = eax + MEM32(esi + 0x80);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(MEM32(esi + 0x84)) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x94) = edx;

loc_0027788E: ;
    eax = MEM32(esp + 0x1C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00277850; /* jl: less (signed <) */

loc_00277897: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx + 8);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002779F8; /* jle: less or equal (signed <=) */

loc_002778A8: ;
    goto loc_002778B0;

    /* nop */

loc_002778B0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0x10);
    esi = MEM32(ecx + ebx * 4);
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002778CF; /* jne: not equal / not zero */

loc_002778C0: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002778CAu); RECOMP_ABI_CALL(0x002627E0u, sub_002627E0); /* call 0x002627E0 */

loc_002778CA: ;
    goto loc_002779EB;

loc_002778CF: ;
    SET_LO8(eax, MEM8(esi + 0x7C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0027795B; /* je: equal / zero */

loc_002778DA: ;
    edx = MEM32(esi + 8);
    fp_push((double)SMEM64(edx + 0x30)); /* fild */
    eax = ebp;
    fp_push((double)SMEM64(esi + 0x90)); /* fild */
    edx = edi;
    SET_LO8(ecx, 0x12);
    fp_st1() = fp_st1() / fp_top(); fp_pop(); /* fdivp st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x002778F7u); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_002778F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x6C) = eax;
    fp_push((double)SMEM32(esp + 0x6C)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00277909; /* jge: greater or equal (signed >=) */

loc_00277903: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00277909: ;
    MEMF(esp + 0x6C) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(esi + 0x38); /* fmul dword ptr [esi + 0x38] */
    PUSH32(esp, 0x00277915u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00277915: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00277923u); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_00277923: ;
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    ecx = MEM32(esi + 0x40);
    fp_top() = fp_top() * MEMF(esp + 0x2C); /* fmul dword ptr [esp + 0x2c] */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    eax = MEM32(esi + 0x44);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(esi + 0x40) = ecx;
    MEM32(esi + 0x44) = eax;
    PUSH32(esp, 0x00277940u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00277940: ;
    ecx = MEM32(esi + 0x40);
    edx = (edx << 0x12) | (eax >> (32 - 0x12)); /* shld */
    if (0x12) _cf = (int)(((eax) >> (32 - (0x12))) & 1);
    eax = eax << 0x12;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    { uint64_t _t = (uint64_t)(MEM32(esi + 0x44)) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(esi + 0x44) = (uint32_t)_t; }  /* sbb */
    eax = MEM32(esp + 0x2C);
    MEM32(esi + 0x38) = eax;
    goto loc_002779E7;

loc_0027795B: ;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_002779EA; /* je: equal / zero */

loc_00277966: ;
    ecx = MEM32(esi + 8);
    fp_push((double)SMEM64(ecx + 0x30)); /* fild */
    edx = edi;
    fp_push((double)SMEM64(eax + 0x90)); /* fild */
    eax = ebp;
    SET_LO8(ecx, 0x12);
    fp_st1() = fp_st1() / fp_top(); fp_pop(); /* fdivp st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00277983u); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_00277983: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x6C) = eax;
    fp_push((double)SMEM32(esp + 0x6C)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00277995; /* jge: greater or equal (signed >=) */

loc_0027798F: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00277995: ;
    MEMF(esp + 0x6C) = (float)fp_top(); /* fst */
    fp_top() = fp_top() * MEMF(esi + 0x38); /* fmul dword ptr [esi + 0x38] */
    PUSH32(esp, 0x002779A1u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_002779A1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002779AFu); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_002779AF: ;
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    ecx = MEM32(esi + 0x40);
    fp_top() = fp_top() * MEMF(esp + 0x2C); /* fmul dword ptr [esp + 0x2c] */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    eax = MEM32(esi + 0x44);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(esi + 0x40) = ecx;
    MEM32(esi + 0x44) = eax;
    PUSH32(esp, 0x002779CCu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_002779CC: ;
    ecx = MEM32(esi + 0x40);
    edx = (edx << 0x12) | (eax >> (32 - 0x12)); /* shld */
    if (0x12) _cf = (int)(((eax) >> (32 - (0x12))) & 1);
    eax = eax << 0x12;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    eax = MEM32(esi + 0x44);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(edx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    edx = MEM32(esp + 0x2C);
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x38) = edx;

loc_002779E7: ;
    MEM32(esi + 0x40) = ecx;

loc_002779EA: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002779EB: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_002778B0; /* jl: less (signed <) */

loc_002779F8: ;
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x58)) >> 32) & 1);
    esp = esp + 0x58;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00277A10
 * Original: 0x00277A10 - 0x00277B34 (292 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277A10(void)
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

loc_00277A10: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(edi + 0x14);
    esi = MEM32(edi + 0x18);
    ebx = MEM32(edi + 0x1C);
    edx = eax;
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00277A36; /* je: equal / zero */

loc_00277A2E: ;
    edx = ecx;
    MEM32(esp + 0x18) = edx;
    goto loc_00277A45;

loc_00277A36: ;
    ecx = MEM32(0x5BC568);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00277A41u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00277A41: ;
    MEM32(esp + 0x18) = edx;

loc_00277A45: ;
    ebp = eax;
    ecx = ebp;
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(esi));
    ecx = ecx - esi;
    esi = MEM32(edi + 0x24);
    eax = edx;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ebx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(edi + 0x18) = ebp;
    MEM32(edi + 0x1C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00277B2C; /* jl: less (signed <) */

loc_00277A60: ;
    if (CMP_G(_fas, _fbs)) goto loc_00277A6B; /* jg: greater (signed >) */

loc_00277A62: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x20) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00277B2C; /* jb: below (unsigned <) */

loc_00277A6B: ;
    eax = MEM32(edi + 0x38);
    ebx = MEM32(eax + 8);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fas < 0)) goto loc_00277B2C; /* js: sign (negative) */

loc_00277A7C: ;
    goto loc_00277A90;

loc_00277A7E: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x10);
    goto loc_00277A90;

    /* nop */
    /* nop */

loc_00277A90: ;
    ecx = MEM32(eax + 0x10);
    esi = MEM32(ecx + ebx * 4);
    ecx = MEM32(esi + 0x98);
    eax = ebp;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(MEM32(esi + 0x9C)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = edx;
    fp_push((double)SMEM64(esp + 0x1C)); /* fild */
    fp_top() = fp_top() * MEMF(esi + 0x38); /* fmul dword ptr [esi + 0x38] */
    PUSH32(esp, 0x00277ABAu); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00277ABA: ;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esi + 0x58)));
    eax = eax - MEM32(esi + 0x58);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(MEM32(esi + 0x5C)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 0x2C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00277B25; /* jl: less (signed <) */

loc_00277AC5: ;
    if (CMP_G(_fas, _fbs)) goto loc_00277ACC; /* jg: greater (signed >) */

loc_00277AC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x28) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00277B25; /* jbe: below or equal (unsigned <=) */

loc_00277ACC: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00277B1D; /* je: equal / zero */

loc_00277AD4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00277B25; /* jne: not equal / not zero */

loc_00277AD9: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00277B1D; /* je: equal / zero */

loc_00277AE0: ;
    ecx = edi;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x00277AEEu); RECOMP_ABI_CALL(0x00262510u, sub_00262510); /* call 0x00262510 */

loc_00277AEE: ;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + 0x14) = 3;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00277B14; /* je: equal / zero */

loc_00277AFF: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00277B14; /* jne: not equal / not zero */

loc_00277B0F: ;
    PUSH32(esp, 0x00277B14u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00277B14: ;
    MEM32(esi + 0x18) = 0;
    goto loc_00277B25;

loc_00277B1D: ;
    ecx = edi;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00277B25u); RECOMP_ABI_CALL(0x002771B0u, sub_002771B0); /* call 0x002771B0 */

loc_00277B25: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00277A7E; /* jns: not sign (positive) */

loc_00277B2C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00277B40
 * Original: 0x00277B40 - 0x00277F48 (1032 bytes, 360 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277B40(void)
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

loc_00277B40: ;
    esp = esp - 0x3C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(esp + 0x48);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00277B56u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00277B56: ;
    ecx = MEM32(ebp + 0xC);
    ebx = edx;
    edx = MEM32(ecx);
    edi = eax;
    MEM32(esp + 0x34) = edi;
    MEM32(esp + 0x38) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00277B6Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00277B6A: ;
    esi = eax;
    SET_LO8(eax, MEM8(ebp + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esp + 0x2C) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00277B85; /* je: equal / zero */

loc_00277B77: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x48) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00277B85; /* jne: not equal / not zero */

loc_00277B7C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x4C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x4C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00277F3B; /* je: equal / zero */

loc_00277B85: ;
    SET_LO8(eax, MEM8(0x5BD2B0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00277B95; /* je: equal / zero */

loc_00277B8E: ;
    ecx = ebp;
    PUSH32(esp, 0x00277B95u); RECOMP_ABI_CALL(0x00277A10u, sub_00277A10); /* call 0x00277A10 */

loc_00277B95: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x00277B9Eu); RECOMP_ABI_CALL(0x00277250u, sub_00277250); /* call 0x00277250 */

loc_00277B9E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00277F3B; /* je: equal / zero */

loc_00277BA6: ;
    eax = MEM32(ebp + 0x38);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00277CBC; /* jne: not equal / not zero */

loc_00277BB3: ;
    ecx = MEM32(ebp + 0x30);
    ecx = MEM32(ecx + 0x10);
    /* nop */

loc_00277BC0: ;
    eax = MEM32(ecx);
    edx = MEM32(eax + 8);
    ecx = ecx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00277BC0; /* je: equal / zero */

loc_00277BCC: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx);
    ebx = MEM32(eax + 0xC);
    SET_LO8(eax, MEM8(ebx + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    edi = MEM32(ebp + 0x40);
    MEM32(esp + 0x50) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_00277BED; /* jne: not equal / not zero */

loc_00277BE2: ;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00277CB3; /* jne: not equal / not zero */

loc_00277BED: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00277BF4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00277BF4: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00277CAC; /* jle: less or equal (signed <=) */

loc_00277C02: ;
    eax = MEM32(ebp + 0x30);
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + ecx * 4);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00277C98; /* jl: less (signed <) */

loc_00277C15: ;
    eax = MEM32(eax + 0x10);
    esi = MEM32(eax);
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00277C75; /* je: equal / zero */

loc_00277C21: ;
    SET_LO8(eax, MEM8(esi + 0x34));
    edx = MEM32(ecx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, 0);
    eax = esi + 8;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x2C);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x28);
    edi = esi + 0x14;
    PUSH32(esp, eax);
    if (TEST_NZ(_fa, _fb)) goto loc_00277C41; /* jne: not equal / not zero */

loc_00277C3B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00277C3Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00277C3F: ;
    goto loc_00277C49;

loc_00277C41: ;
    eax = esi + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00277C49u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00277C49: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00277C71; /* je: equal / zero */

loc_00277C51: ;
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + eax * 4 + 0x14)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + eax * 4 + 0x14) = (float)fp_top(); fp_pop(); /* fstp */

loc_00277C71: ;
    edi = MEM32(esp + 0x50);

loc_00277C75: ;
    PUSH32(esp, edi);
    ecx = esi + 0x14;
    PUSH32(esp, 0x00277C7Eu); RECOMP_ABI_CALL(0x0023F580u, sub_0023F580); /* call 0x0023F580 */

loc_00277C7E: ;
    ecx = MEM32(esi + 0x24);
    MEM32(edi + 0x30) = ecx;
    edx = MEM32(esi + 0x28);
    ecx = MEM32(esp + 0x10);
    MEM32(edi + 0x34) = edx;
    eax = MEM32(esi + 0x2C);
    esi = MEM32(esp + 0x2C);
    MEM32(edi + 0x38) = eax;

loc_00277C98: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x50) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00277C02; /* jl: less (signed <) */

loc_00277CAC: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00277CB3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00277CB3: ;
    MEM8(ebx + 0x1C) = 0;
    goto loc_00277F1F;

loc_00277CBC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00277F1F; /* jle: less or equal (signed <=) */

loc_00277CCA: ;
    ecx = 0; /* xor self */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x24) = ecx;

loc_00277CD4: ;
    ecx = MEM32(ebp + 0x30);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(edx + eax * 4);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x28) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00277EFC; /* jl: less (signed <) */

loc_00277CF1: ;
    edx = MEM32(ebp + 0x34);
    edx = MEM32(edx + 0x10);
    ebx = MEM32(edx + eax * 4);
    eax = MEM32(ecx + 0x10);
    esi = MEM32(eax + ebx * 4);
    edi = MEM32(esi + 0xC);
    ecx = MEM32(edi + 0x14);
    edx = MEM32(edi);
    MEM32(esp + 0x18) = ecx;
    ecx = edi;
    MEM8(edi + 0x1C) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00277D15u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00277D15: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00277D73; /* je: equal / zero */

loc_00277D1C: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00277D73; /* jne: not equal / not zero */

loc_00277D24: ;
    SET_LO8(eax, MEM8(esi + 0x34));
    edx = MEM32(ecx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = MEM32(edi + 0x2C);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x28);
    PUSH32(esp, eax);
    if (TEST_NZ(_fa, _fb)) goto loc_00277D3E; /* jne: not equal / not zero */

loc_00277D35: ;
    eax = esi + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00277D3Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00277D3C: ;
    goto loc_00277D49;

loc_00277D3E: ;
    eax = esi + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00277D49u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00277D49: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00277D73; /* je: equal / zero */

loc_00277D51: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + eax * 4 + 0x14)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + eax * 4 + 0x14) = (float)fp_top(); fp_pop(); /* fstp */

loc_00277D73: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00277D7Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00277D7A: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    eax = MEM32(esi + 0x1C);
    fp_push(MEMF(esi + 0x18)); /* fld float */
    ecx = MEM32(esi + 0x20);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    edi = MEM32(esp + 0x14);
    MEM32(esp + 0x44) = eax;
    eax = MEM32(ebp + 0x3C);
    MEMF(eax + edi) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x44);
    eax = eax + edi;
    MEM32(eax + 8) = edx;
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x24);
    MEM32(eax + 0xC) = ecx;
    ebp = MEM32(ebp + 0x40);
    ebp = ebp + edx;
    edx = MEM32(esi + 0x24);
    MEM32(ebp + 0x30) = edx;
    eax = MEM32(esi + 0x28);
    MEM32(ebp + 0x34) = eax;
    eax = MEM32(esp + 0x28);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(esi + 0x2C);
    MEM32(ebp + 0x38) = ecx;
    MEM32(esp + 0x1C) = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_00277EDD; /* jge: greater or equal (signed >=) */

loc_00277DD5: ;
    edx = MEM32(esp + 0x30);
    eax = MEM32(edx + 0x10);
    esi = MEM32(eax + ebx * 4);
    edi = MEM32(esi + 0xC);
    ecx = MEM32(edi + 0x14);
    edx = MEM32(edi);
    MEM32(esp + 0x18) = ecx;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00277DF0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00277DF0: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00277E59; /* je: equal / zero */

loc_00277DF7: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00277E0B; /* je: equal / zero */

loc_00277DFF: ;
    SET_LO8(edx, MEM8(edi + 0x1C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00277E59; /* je: equal / zero */

loc_00277E06: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00277E59; /* jne: not equal / not zero */

loc_00277E0B: ;
    edx = MEM32(edi + 0x2C);
    SET_LO8(eax, MEM8(esi + 0x34));
    PUSH32(esp, edx);
    edx = MEM32(edi + 0x28);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = MEM32(ecx);
    ebx = esi + 0x14;
    PUSH32(esp, edx);
    if (TEST_NZ(_fa, _fb)) goto loc_00277E25; /* jne: not equal / not zero */

loc_00277E1F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00277E23u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00277E23: ;
    goto loc_00277E2D;

loc_00277E25: ;
    edx = esi + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x00277E2Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00277E2D: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00277E55; /* je: equal / zero */

loc_00277E35: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + eax * 4 + 0x14)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + eax * 4 + 0x14) = (float)fp_top(); fp_pop(); /* fstp */

loc_00277E55: ;
    ebx = MEM32(esp + 0x1C);

loc_00277E59: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00277EC1; /* je: equal / zero */

loc_00277E60: ;
    eax = MEM32(edi + 0x20);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ecx + 0x3C);
    MEM32(esp + 0x50) = eax;
    eax = MEM32(esp + 0x14);
    ecx = edx + eax;
    eax = MEM32(esp + 0x50);
    edx = esi + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00277E84u); RECOMP_ABI_CALL(0x0023F650u, sub_0023F650); /* call 0x0023F650 */

loc_00277E84: ;
    fp_push(MEMF(0x3C6E40)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x50); /* fsub dword ptr [esp + 0x50] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fp_top() * MEMF(ebp + 0x30); /* fmul dword ptr [ebp + 0x30] */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x24); /* fmul dword ptr [esi + 0x24] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(ebp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x28); /* fmul dword ptr [esi + 0x28] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = fp_top() * MEMF(ebp + 0x34); /* fmul dword ptr [ebp + 0x34] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(ebp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = fp_top() * MEMF(esi + 0x2C); /* fmul dword ptr [esi + 0x2c] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = fp_top() * MEMF(ebp + 0x38); /* fmul dword ptr [ebp + 0x38] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(ebp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */

loc_00277EC1: ;
    edx = MEM32(edi);
    ecx = edi;
    MEM8(edi + 0x1C) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00277ECCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00277ECC: ;
    eax = MEM32(esp + 0x28);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x1C) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_00277DD5; /* jl: less (signed <) */

loc_00277EDD: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax + 0x3C);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ecx = ecx + eax;
    PUSH32(esp, 0x00277EF0u); RECOMP_ABI_CALL(0x0023F580u, sub_0023F580); /* call 0x0023F580 */

loc_00277EF0: ;
    ebp = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x2C);

loc_00277EFC: ;
    edi = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi + 0x40;
    edx = edx + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00277CD4; /* jl: less (signed <) */

loc_00277F1F: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x38);
    eax = MEM32(ebp);
    MEM32(ebp + 0x48) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebp;
    MEM32(ebp + 0x4C) = edx;
    MEM8(ebp + 0x50) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00277F3Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00277F3B: ;
    eax = MEM32(ebp + 0x40);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x3C;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00277F50
 * Original: 0x00277F50 - 0x00277FE8 (152 bytes, 54 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277F50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, 0x00277F59u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00277F59: ;
    SET_LO8(ecx, MEM8(0x5BC548));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00277F71; /* jne: not equal / not zero */

loc_00277F63: ;
    eax = MEM32(0x46A694);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00277F6Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00277F6E: ;
    esp = esp + 4;

loc_00277F71: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00277F78u); RECOMP_ABI_CALL(0x0022A440u, sub_0022A440); /* call 0x0022A440 */

loc_00277F78: ;
    ecx = MEM32(esp + 0x14);
    esp = esp + 4;
    esi = eax;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00277F89u); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_00277F89: ;
    ecx = esi;
    PUSH32(esp, 0x00277F90u); RECOMP_ABI_CALL(0x001EB710u, sub_001EB710); /* call 0x001EB710 */

loc_00277F90: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = MEM32(ebx + 0x18);
    MEM32(esp + 0x10) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00277F9E; /* je: equal / zero */

loc_00277F9B: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00277F9E: ;
    PUSH32(esp, 0x24BB70);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00277FAFu); RECOMP_ABI_CALL(0x001E7C80u, sub_001E7C80); /* call 0x001E7C80 */

loc_00277FAF: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00277FBEu); RECOMP_ABI_CALL(0x00200E60u, sub_00200E60); /* call 0x00200E60 */

loc_00277FBE: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_00277FD6; /* jne: not equal / not zero */

loc_00277FCF: ;
    ecx = esi;
    PUSH32(esp, 0x00277FD6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00277FD6: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(ebx + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00277FE3u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00277FE3: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}
