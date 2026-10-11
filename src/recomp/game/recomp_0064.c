/**
 * X-Men Legends - Recompiled code chunk 64
 * Functions: 250 (0x0028E1E0 - 0x002934B0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0028E1E0
 * Original: 0x0028E1E0 - 0x0028E22D (77 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028E1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028E1E0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028E1F0; /* jne: not equal / not zero */

loc_0028E1E9: ;
    MEM8(0x5BDF6C) = 1;

loc_0028E1F0: ;
    PUSH32(esp, 0x471920);
    PUSH32(esp, 0x28DF00);
    PUSH32(esp, 0x2609A0);
    PUSH32(esp, 0x260930);
    PUSH32(esp, 0x208);
    PUSH32(esp, 0x4060A8);
    PUSH32(esp, 0x250360);
    PUSH32(esp, 0x255190);
    PUSH32(esp, 0x28F910);
    PUSH32(esp, 0x5BDAE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028E229u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0028E229: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0028E230
 * Original: 0x0028E230 - 0x0028E23C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028E230(void)
{

loc_0028E230: ;
    PUSH32(esp, 0x28DF40);
    PUSH32(esp, 0x0028E23Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028E23A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0028E240
 * Original: 0x0028E240 - 0x0028E24C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028E240(void)
{

loc_0028E240: ;
    PUSH32(esp, 0x28DFA0);
    PUSH32(esp, 0x0028E24Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028E24A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0028E250
 * Original: 0x0028E250 - 0x0028E5C1 (881 bytes, 294 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028E250(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028E250: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2874F0);
    PUSH32(esp, 0x0028E261u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028E261: ;
    esp = esp + 4;
    PUSH32(esp, 0x0028E269u); RECOMP_ABI_CALL(0x0022F4E0u, sub_0022F4E0); /* call 0x0022F4E0 */

loc_0028E269: ;
    PUSH32(esp, 0x0028E26Eu); RECOMP_ABI_CALL(0x002299E0u, sub_002299E0); /* call 0x002299E0 */

loc_0028E26E: ;
    ecx = MEM32(0x5BC50C);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, 0x404C98);
    PUSH32(esp, 0x3ED140);
    PUSH32(esp, 0x0028E286u); RECOMP_ABI_CALL(0x00238410u, sub_00238410); /* call 0x00238410 */

loc_0028E286: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0028E5B9; /* je: equal / zero */

loc_0028E292: ;
    ecx = MEM32(0x5BD930);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0028E2A0u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0028E2A0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028E5B9; /* je: equal / zero */

loc_0028E2A8: ;
    edx = MEM32(0x5BC508);
    ebx = MEM32(edx + 0x38);
    PUSH32(esp, esi);
    PUSH32(esp, 0x4060E4);
    ecx = ebx;
    PUSH32(esp, 0x0028E2BEu); RECOMP_ABI_CALL(0x0022CF20u, sub_0022CF20); /* call 0x0022CF20 */

loc_0028E2BE: ;
    edi = eax;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028E2CBu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0028E2CB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028E2D1u); RECOMP_ABI_CALL(0x0022A440u, sub_0022A440); /* call 0x0022A440 */

loc_0028E2D1: ;
    esp = esp + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0028E300; /* jl: less (signed <) */

loc_0028E2DC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x3C806C);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4060D4);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0028E2F4u); RECOMP_ABI_CALL(0x00230C80u, sub_00230C80); /* call 0x00230C80 */

loc_0028E2F4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028E3B2; /* jne: not equal / not zero */

loc_0028E2FC: ;
    eax = MEM32(esp + 0x10);

loc_0028E300: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0028E31E; /* je: equal / zero */

loc_0028E306: ;
    ebp = MEM32(eax + 4);
    eax = eax + 4;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = ebp;
    if (TEST_NZ(_fa, _fb)) goto loc_0028E31E; /* jne: not equal / not zero */

loc_0028E319: ;
    PUSH32(esp, 0x0028E31Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028E31E: ;
    ecx = MEM32(0x5BC508);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x0028E32Du); RECOMP_ABI_CALL(0x001E7320u, sub_001E7320); /* call 0x001E7320 */

loc_0028E32D: ;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0028E338u); RECOMP_ABI_CALL(0x002696B0u, sub_002696B0); /* call 0x002696B0 */

loc_0028E338: ;
    esp = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0028E345u); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_0028E345: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0028E367; /* je: equal / zero */

loc_0028E34F: ;
    ebp = MEM32(eax + 4);
    eax = eax + 4;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = ebp;
    if (TEST_NZ(_fa, _fb)) goto loc_0028E367; /* jne: not equal / not zero */

loc_0028E362: ;
    PUSH32(esp, 0x0028E367u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028E367: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028E3B8; /* jne: not equal / not zero */

loc_0028E36D: ;
    ecx = MEM32(0x5BC508);
    PUSH32(esp, 0x0028E378u); RECOMP_ABI_CALL(0x001E7330u, sub_001E7330); /* call 0x001E7330 */

loc_0028E378: ;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028E383u); RECOMP_ABI_CALL(0x002696B0u, sub_002696B0); /* call 0x002696B0 */

loc_0028E383: ;
    esp = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0028E390u); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_0028E390: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0028E3B2; /* je: equal / zero */

loc_0028E39A: ;
    ebp = MEM32(eax + 4);
    eax = eax + 4;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = ebp;
    if (TEST_NZ(_fa, _fb)) goto loc_0028E3B2; /* jne: not equal / not zero */

loc_0028E3AD: ;
    PUSH32(esp, 0x0028E3B2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028E3B2: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028E3FB; /* je: equal / zero */

loc_0028E3B8: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0028E3C4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0028E3C4: ;
    esp = esp + 4;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = 0x5BDF34;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x0028E3DAu); RECOMP_ABI_CALL(0x0024F780u, sub_0024F780); /* call 0x0024F780 */

loc_0028E3DA: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028E3EA; /* jne: not equal / not zero */

loc_0028E3E5: ;
    eax = MEM32(0x46A3C8);

loc_0028E3EA: ;
    ecx = MEM32(0x5BDF34);
    PUSH32(esp, eax);
    ecx = ecx + 8;
    PUSH32(esp, 0x0028E3F9u); RECOMP_ABI_CALL(0x00123E50u, sub_00123E50); /* call 0x00123E50 */

loc_0028E3F9: ;
    goto loc_0028E424;

loc_0028E3FB: ;
    eax = MEM32(0x5BDF34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0028E41E; /* je: equal / zero */

loc_0028E406: ;
    ebp = MEM32(eax + 4);
    eax = eax + 4;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = ebp;
    if (TEST_NZ(_fa, _fb)) goto loc_0028E41E; /* jne: not equal / not zero */

loc_0028E419: ;
    PUSH32(esp, 0x0028E41Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028E41E: ;
    MEM32(0x5BDF34) = esi;

loc_0028E424: ;
    ecx = MEM32(0x46A680);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0028E430u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0028E430: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028E436u); RECOMP_ABI_CALL(0x002209B0u, sub_002209B0); /* call 0x002209B0 */

loc_0028E436: ;
    esp = esp + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    ebp = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0028E456; /* jl: less (signed <) */

loc_0028E43F: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x4060C4);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0028E44Eu); RECOMP_ABI_CALL(0x00230E70u, sub_00230E70); /* call 0x00230E70 */

loc_0028E44E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028E563; /* jne: not equal / not zero */

loc_0028E456: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x0028E462u); RECOMP_ABI_CALL(0x00212550u, sub_00212550); /* call 0x00212550 */

loc_0028E462: ;
    MEM32(ebp + 8) = esi;
    ecx = MEM32(0x5BDF34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028E563; /* je: equal / zero */

loc_0028E473: ;
    eax = MEM32(ecx);
    edx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0028E47Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028E47D: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028E545; /* je: equal / zero */

loc_0028E489: ;
    eax = MEM32(0x46A680);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028E494u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0028E494: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028E49Au); RECOMP_ABI_CALL(0x0022A440u, sub_0022A440); /* call 0x0022A440 */

loc_0028E49A: ;
    edi = eax;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 8);
    esp = esp + 8;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0028E526; /* jle: less or equal (signed <=) */

loc_0028E4AC: ;
    /* nop */

loc_0028E4B0: ;
    ecx = MEM32(eax + 0x10);
    esi = MEM32(ecx + ebx * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028E4BD; /* je: equal / zero */

loc_0028E4BA: ;
    MEM32(esi + -4) = MEM32(esi + -4) + 1;
    _fa = (uint32_t)(MEM32(esi + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0028E4BD: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0028E4C5u); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_0028E4C5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028E4DD; /* je: equal / zero */

loc_0028E4C9: ;
    ecx = MEM32(esi + -4);
    eax = esi + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_0028E4DD; /* jne: not equal / not zero */

loc_0028E4D5: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028E4DDu); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_0028E4DD: ;
    ecx = edi;
    PUSH32(esp, 0x0028E4E4u); RECOMP_ABI_CALL(0x002046E0u, sub_002046E0); /* call 0x002046E0 */

loc_0028E4E4: ;
    ecx = edi;
    PUSH32(esp, 0x0028E4EBu); RECOMP_ABI_CALL(0x001EB710u, sub_001EB710); /* call 0x001EB710 */

loc_0028E4EB: ;
    PUSH32(esp, 0x4060BC);
    ecx = edi;
    PUSH32(esp, 0x0028E4F7u); RECOMP_ABI_CALL(0x001E6820u, sub_001E6820); /* call 0x001E6820 */

loc_0028E4F7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028E518; /* je: equal / zero */

loc_0028E4FB: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx + 0x10);
    eax = MEM32(eax + ebx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0028E511; /* je: equal / zero */

loc_0028E50E: ;
    MEM32(eax + -4) = MEM32(eax + -4) + 1;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0028E511: ;
    ecx = ebp;
    PUSH32(esp, 0x0028E518u); RECOMP_ABI_CALL(0x00219480u, sub_00219480); /* call 0x00219480 */

loc_0028E518: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 8);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028E4B0; /* jl: less (signed <) */

loc_0028E524: ;
    esi = 0; /* xor self */

loc_0028E526: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028E545; /* je: equal / zero */

loc_0028E52A: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028E541; /* jne: not equal / not zero */

loc_0028E53A: ;
    ecx = edi;
    PUSH32(esp, 0x0028E541u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028E541: ;
    eax = MEM32(esp + 0x14);

loc_0028E545: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0028E563; /* je: equal / zero */

loc_0028E54B: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_0028E563; /* jne: not equal / not zero */

loc_0028E55E: ;
    PUSH32(esp, 0x0028E563u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028E563: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0028E56F; /* je: equal / zero */

loc_0028E56C: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0028E56F: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0028E579u); RECOMP_ABI_CALL(0x0028E030u, sub_0028E030); /* call 0x0028E030 */

loc_0028E579: ;
    esp = esp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028E597; /* je: equal / zero */

loc_0028E580: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028E597; /* jne: not equal / not zero */

loc_0028E590: ;
    ecx = ebp;
    PUSH32(esp, 0x0028E597u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028E597: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0028E5B9; /* je: equal / zero */

loc_0028E5A1: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0028E5B9; /* jne: not equal / not zero */

loc_0028E5B4: ;
    PUSH32(esp, 0x0028E5B9u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028E5B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0028E5D0
 * Original: 0x0028E5D0 - 0x0028E614 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028E5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028E5D0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028E5E0; /* jne: not equal / not zero */

loc_0028E5D9: ;
    MEM8(0x5BDF6C) = 1;

loc_0028E5E0: ;
    PUSH32(esp, 0x471940);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x27C1B0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x4060EC);
    PUSH32(esp, 0x250120);
    PUSH32(esp, 0x1A43F0);
    PUSH32(esp, 0x223F30);
    PUSH32(esp, 0x5BDB2C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028E610u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0028E610: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0028E620
 * Original: 0x0028E620 - 0x0028E667 (71 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028E620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028E620: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028E630; /* jne: not equal / not zero */

loc_0028E629: ;
    MEM8(0x5BDF6C) = 1;

loc_0028E630: ;
    PUSH32(esp, 0x471948);
    PUSH32(esp, 0);
    PUSH32(esp, 0x256B40);
    PUSH32(esp, 0x261AE0);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x406110);
    PUSH32(esp, 0x251890);
    PUSH32(esp, 0x1A4510);
    PUSH32(esp, 0x2371D0);
    PUSH32(esp, 0x5BDB94);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028E663u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0028E663: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0028E670
 * Original: 0x0028E670 - 0x0028E675 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028E670(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028E670: ;
    g_seh_ebp = ebp; sub_0028E250(); return; /* tail jmp 0x0028E250 */

}

/**
 * sub_0028E680
 * Original: 0x0028E680 - 0x0028E68C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028E680(void)
{

loc_0028E680: ;
    PUSH32(esp, 0x28E620);
    PUSH32(esp, 0x0028E68Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028E68A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0028E690
 * Original: 0x0028E690 - 0x0028E6DA (74 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028E690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028E690: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028E6A0; /* jne: not equal / not zero */

loc_0028E699: ;
    MEM8(0x5BDF6C) = 1;

loc_0028E6A0: ;
    PUSH32(esp, 0x471960);
    PUSH32(esp, 0);
    PUSH32(esp, 0x261E90);
    PUSH32(esp, 0x27C5C0);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x406124);
    PUSH32(esp, 0x2519B0);
    PUSH32(esp, 0x19C140);
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x5BDBEC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028E6D6u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0028E6D6: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0028E6E0
 * Original: 0x0028E6E0 - 0x0028EA9B (955 bytes, 341 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028E6E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028E6E0: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x20);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0028E6FA; /* jle: less or equal (signed <=) */

loc_0028E6F3: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0028E6FAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028E6FA: ;
    ebx = MEM32(esp + 0x54);
    ecx = ebx;
    PUSH32(esp, 0x0028E705u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0028E705: ;
    PUSH32(esp, 0x28E1E0);
    esi = eax;
    PUSH32(esp, 0x0028E711u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028E711: ;
    ecx = MEM32(0x5BDAE4);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0028E720u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0028E720: ;
    esi = eax;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0028E72Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028E72A: ;
    ecx = MEM32(esi + 0xE8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0028E737u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028E737: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028E740; /* je: equal / zero */

loc_0028E73D: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0028E740: ;
    ecx = MEM32(edi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    ebp = 0x7FFFFF;
    if (TEST_Z(_fa, _fb)) goto loc_0028E75E; /* je: equal / zero */

loc_0028E74C: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028E75E; /* jne: not equal / not zero */

loc_0028E759: ;
    PUSH32(esp, 0x0028E75Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028E75E: ;
    ecx = ebx;
    MEM32(edi + 0x54) = ebx;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028E775; /* jne: not equal / not zero */

loc_0028E770: ;
    PUSH32(esp, 0x0028E775u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028E775: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0028E77Eu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0028E77E: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0028E787u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0028E787: ;
    ecx = esi;
    PUSH32(esp, 0x0028E78Eu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0028E78E: ;
    PUSH32(esp, 0x281670);
    ebx = eax;
    PUSH32(esp, 0x0028E79Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028E79A: ;
    ecx = MEM32(0x5BDA80);
    esp = esp + 4;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0028E7A9u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0028E7A9: ;
    ebx = eax;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028E7BD; /* je: equal / zero */

loc_0028E7B2: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x54) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0028E7F7; /* jne: not equal / not zero */

loc_0028E7BD: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028E7D1; /* jne: not equal / not zero */

loc_0028E7CA: ;
    ecx = ebx;
    PUSH32(esp, 0x0028E7D1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028E7D1: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028E7E5; /* jne: not equal / not zero */

loc_0028E7DE: ;
    ecx = esi;
    PUSH32(esp, 0x0028E7E5u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028E7E5: ;
    eax = 1;
    MEM32(edi + 0x50) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 8; return; /* ret 4 */

loc_0028E7F7: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0028E82C; /* jle: less or equal (signed <=) */

loc_0028E7FD: ;
    /* nop */

loc_0028E800: ;
    eax = MEM32(edi + 0x1C);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(ecx + ebp * 4);
    if (TEST_Z(_fa, _fb)) goto loc_0028E815; /* je: equal / zero */

loc_0028E810: ;
    eax = MEM32(eax + 8);
    goto loc_0028E817;

loc_0028E815: ;
    eax = 0; /* xor self */

loc_0028E817: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0028E823u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028E823: ;
    eax = MEM32(esp + 0x54);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028E800; /* jl: less (signed <) */

loc_0028E82C: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi + 0x64;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0028E83Au); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0028E83A: ;
    esp = esp + 8;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    ecx = esi + 0xA4;
    PUSH32(esp, 0x0028E852u); RECOMP_ABI_CALL(0x00242F50u, sub_00242F50); /* call 0x00242F50 */

loc_0028E852: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0028E85Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028E85A: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x0028E861u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028E861: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = eax;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028E87A; /* jne: not equal / not zero */

loc_0028E873: ;
    ecx = ebx;
    PUSH32(esp, 0x0028E87Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028E87A: ;
    SET_LO8(eax, MEM8(esi + 0x1E4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028E8AD; /* je: equal / zero */

loc_0028E884: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028E89B; /* jne: not equal / not zero */

loc_0028E894: ;
    ecx = esi;
    PUSH32(esp, 0x0028E89Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028E89B: ;
    eax = 3;
    MEM32(edi + 0x50) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 8; return; /* ret 4 */

loc_0028E8AD: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0028E8B5u); RECOMP_ABI_CALL(0x00266CF0u, sub_00266CF0); /* call 0x00266CF0 */

loc_0028E8B5: ;
    ecx = MEM32(edi + 0x20);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028E8E8; /* jne: not equal / not zero */

loc_0028E8BF: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028E8D6; /* jne: not equal / not zero */

loc_0028E8CF: ;
    ecx = esi;
    PUSH32(esp, 0x0028E8D6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028E8D6: ;
    eax = 4;
    MEM32(edi + 0x50) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 8; return; /* ret 4 */

loc_0028E8E8: ;
    edx = MEM32(esi + 0x1D8);
    ebp = MEM32(edx + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0028E91A; /* jle: less or equal (signed <=) */

loc_0028E8F7: ;
    goto loc_0028E900;

    /* nop */

loc_0028E900: ;
    eax = MEM32(esi + 0x1D8);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + ebx * 4);
    ecx = MEM32(edi + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0028E915u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0028E915: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028E900; /* jl: less (signed <) */

loc_0028E91A: ;
    eax = MEM32(esi + 0x1DC);
    ebp = MEM32(eax + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0028E94A; /* jle: less or equal (signed <=) */

loc_0028E929: ;
    /* nop */

loc_0028E930: ;
    ecx = MEM32(esi + 0x1DC);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + ebx * 4);
    ecx = MEM32(edi + 0x48);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028E945u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0028E945: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028E930; /* jl: less (signed <) */

loc_0028E94A: ;
    ecx = MEM32(esi + 0x1E0);
    edx = MEM32(ecx + 8);
    MEM32(edi + 0x4C) = edx;
    SET_LO8(eax, MEM8(0x46D8AC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028EA01; /* je: equal / zero */

loc_0028E963: ;
    eax = MEM32(esi + 0x1E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028EA01; /* je: equal / zero */

loc_0028E971: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028EA01; /* jne: not equal / not zero */

loc_0028E97C: ;
    ecx = esi;
    PUSH32(esp, 0x0028E983u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0028E983: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028E989u); RECOMP_ABI_CALL(0x00246D40u, sub_00246D40); /* call 0x00246D40 */

loc_0028E989: ;
    ebx = eax;
    eax = MEM32(esi + 0x1E8);
    ecx = MEM32(eax + 8);
    eax = eax + 8;
    MEM32(ebx + 8) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebx + 0xC) = edx;
    eax = MEM32(eax + 8);
    MEM32(ebx + 0x10) = eax;
    eax = MEM32(esi + 0x1E8);
    ecx = MEM32(eax + 0x14);
    eax = eax + 0x14;
    MEM32(ebx + 0x14) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebx + 0x18) = edx;
    eax = MEM32(eax + 8);
    esp = esp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(ebx + 0x1C) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0028E9CB; /* je: equal / zero */

loc_0028E9C8: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0028E9CB: ;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028E9E7; /* je: equal / zero */

loc_0028E9D2: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028E9E7; /* jne: not equal / not zero */

loc_0028E9E2: ;
    PUSH32(esp, 0x0028E9E7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028E9E7: ;
    MEM32(edi + 0xC) = ebx;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028EA01; /* jne: not equal / not zero */

loc_0028E9FA: ;
    ecx = ebx;
    PUSH32(esp, 0x0028EA01u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028EA01: ;
    ecx = MEM32(esi + 0x1F4);
    ebp = MEM32(ecx + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0028EA2A; /* jle: less or equal (signed <=) */

loc_0028EA10: ;
    edx = MEM32(esi + 0x1F4);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + ebx * 4);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x58);
    PUSH32(esp, 0x0028EA25u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0028EA25: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028EA10; /* jl: less (signed <) */

loc_0028EA2A: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0028EA32u); RECOMP_ABI_CALL(0x00266D80u, sub_00266D80); /* call 0x00266D80 */

loc_0028EA32: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0028EA3Au); RECOMP_ABI_CALL(0x00266FF0u, sub_00266FF0); /* call 0x00266FF0 */

loc_0028EA3A: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0028EA42u); RECOMP_ABI_CALL(0x0027DA60u, sub_0027DA60); /* call 0x0027DA60 */

loc_0028EA42: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(edi + 0x50) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_0028EA78; /* je: equal / zero */

loc_0028EA4B: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0028EA52u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028EA52: ;
    MEM32(edi + 0x50) = ebx;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028EA6C; /* jne: not equal / not zero */

loc_0028EA65: ;
    ecx = esi;
    PUSH32(esp, 0x0028EA6Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028EA6C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 8; return; /* ret 4 */

loc_0028EA78: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028EA8F; /* jne: not equal / not zero */

loc_0028EA88: ;
    ecx = esi;
    PUSH32(esp, 0x0028EA8Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028EA8F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0028EAA0
 * Original: 0x0028EAA0 - 0x0028F0FA (1626 bytes, 543 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028EAA0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028EAA0: ;
    esp = esp - 0x28;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x50);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028F0F2; /* jne: not equal / not zero */

loc_0028EAB4: ;
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), ebp (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x38);
    if (CMP_G(_fas, _fbs)) goto loc_0028EAD4; /* jg: greater (signed >) */

loc_0028EAC1: ;
    eax = MEM32(ebx + 0x3C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0028EACCu); RECOMP_ABI_CALL(0x0028E6E0u, sub_0028E6E0); /* call 0x0028E6E0 */

loc_0028EACC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028F0F1; /* jne: not equal / not zero */

loc_0028EAD4: ;
    ecx = MEM32(0x5BE5B8);
    edx = MEM32(ecx + 8);
    eax = MEM32(ebx + 0x34);
    ecx = MEM32(eax + 0x44);
    edx = MEM32(ecx + edx * 4);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + edx * 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028EAFA; /* jne: not equal / not zero */

loc_0028EAF6: ;
    eax = 0; /* xor self */
    goto loc_0028EB01;

loc_0028EAFA: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + ecx * 4 + -4);

loc_0028EB01: ;
    eax = eax + 0xC;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0028EB10u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028EB10: ;
    ecx = MEM32(edi + 0x2C);
    MEM32(ecx + 8) = ebp;
    MEM32(esp + 0x34) = edx;
    edx = MEM32(edi + 0x38);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x28) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0028EB9B; /* jle: less or equal (signed <=) */

loc_0028EB2C: ;
    /* nop */

loc_0028EB30: ;
    eax = MEM32(edi + 0x3C);
    ecx = MEM32(eax + 0x10);
    esi = MEM32(ecx + ebp * 4);
    edx = MEM32(0x5BE5E0);
    eax = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x2C) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0028EB4Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028EB4A: ;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x2C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028EB92; /* je: equal / zero */

loc_0028EB50: ;
    ecx = MEM32(ebx + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0028EB59u); RECOMP_ABI_CALL(0x0025E590u, sub_0025E590); /* call 0x0025E590 */

loc_0028EB59: ;
    ecx = MEM32(ebx + 0x34);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(edx + 0x10);
    edx = MEM32(edi + 0x38);
    eax = MEM32(ecx + eax * 4);
    ecx = MEM32(edx + 0x10);
    edx = MEM32(ecx + ebp * 4);
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0028EB7D; /* jl: less (signed <) */

loc_0028EB75: ;
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + ecx * 4);
    goto loc_0028EB90;

loc_0028EB7D: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028EB8D; /* je: equal / zero */

loc_0028EB84: ;
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + ecx * 4 + -4);
    goto loc_0028EB90;

loc_0028EB8D: ;
    eax = MEM32(eax + 0x14);

loc_0028EB90: ;
    MEM32(edx) = eax;

loc_0028EB92: ;
    eax = MEM32(esp + 0x28);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028EB30; /* jl: less (signed <) */

loc_0028EB9B: ;
    ecx = MEM32(edi + 0x58);
    ebp = MEM32(ecx + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0028EBBE; /* jle: less or equal (signed <=) */

loc_0028EBA7: ;
    edx = MEM32(edi + 0x58);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xAC); PUSH32(esp, 0x0028EBB9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028EBB9: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028EBA7; /* jl: less (signed <) */

loc_0028EBBE: ;
    eax = MEM32(ebx + 0xF8);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0028EBD4; /* jle: less or equal (signed <=) */

loc_0028EBCB: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + ecx * 4 + -4);
    goto loc_0028EBD6;

loc_0028EBD4: ;
    eax = 0; /* xor self */

loc_0028EBD6: ;
    ecx = MEM32(edi + 0x24);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edi + 0x44);
    ecx = MEM32(ecx + 8);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0028EF2B; /* jne: not equal / not zero */

loc_0028EBF8: ;
    esi = MEM32(ebx + 0xF4);
    MEM32(esi + 8) = ebp;
    ecx = MEM32(edi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = MEM32(ebx + 0x5C);
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x18) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0028EC84; /* jle: less or equal (signed <=) */

loc_0028EC13: ;
    MEM32(esp + 0x14) = ecx;
    goto loc_0028EC20;

loc_0028EC19: ;
    eax = MEM32(esp + 0x18);
    /* nop */

loc_0028EC20: ;
    edx = MEM32(eax + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028EC3A; /* jl: less (signed <) */

loc_0028EC28: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x1A5E80);
    PUSH32(esp, 0x0028EC36u); RECOMP_ABI_CALL(0x0025CB20u, sub_0025CB20); /* call 0x0025CB20 */

loc_0028EC36: ;
    eax = MEM32(esp + 0x18);

loc_0028EC3A: ;
    ecx = MEM32(eax + 0x14);
    edx = ecx + 1;
    MEM32(eax + 0x14) = edx;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + ecx * 4);
    eax = MEM32(esi + 8);
    MEM32(esp + 0x28) = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC) (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0028EC61; /* jge: greater or equal (signed >=) */

loc_0028EC59: ;
    edx = eax + 1;
    MEM32(esi + 8) = edx;
    goto loc_0028EC74;

loc_0028EC61: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028EC70u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0028EC70: ;
    eax = MEM32(esp + 0x1C);

loc_0028EC74: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esp + 0x28);
    MEM32(ecx + eax * 4) = edx;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0028EC19; /* jne: not equal / not zero */

loc_0028EC84: ;
    ebx = MEM32(ebx + 0x48);
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028EC9B; /* jl: less (signed <) */

loc_0028EC8F: ;
    PUSH32(esp, 0x29FFE0);
    ecx = ebx;
    PUSH32(esp, 0x0028EC9Bu); RECOMP_ABI_CALL(0x0025CB20u, sub_0025CB20); /* call 0x0025CB20 */

loc_0028EC9B: ;
    eax = MEM32(ebx + 0x14);
    edx = MEM32(ebx + 0x10);
    ecx = eax + 1;
    MEM32(ebx + 0x14) = ecx;
    esi = MEM32(edi + 0x2C);
    ebx = MEM32(esi + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0xC) (32-bit) */
    eax = MEM32(edx + eax * 4);
    MEM32(esp + 0x1C) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0028ECC1; /* jge: greater or equal (signed >=) */

loc_0028ECB9: ;
    ecx = ebx + 1;
    MEM32(esi + 8) = ecx;
    goto loc_0028ECD2;

loc_0028ECC1: ;
    PUSH32(esp, 4);
    edx = ebx + 1;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028ECCEu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0028ECCE: ;
    eax = MEM32(esp + 0x1C);

loc_0028ECD2: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esp + 0x10);
    MEM32(ecx + ebx * 4) = eax;
    PUSH32(esp, edx);
    eax = eax + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028ECE6u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0028ECE6: ;
    eax = MEM32(esp + 0x28);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0028ED11; /* jle: less or equal (signed <=) */

loc_0028ECF1: ;
    ecx = MEM32(edi + 0x24);
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(MEM32(edx + ebp * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + ebp * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028ED11; /* jne: not equal / not zero */

loc_0028ECFD: ;
    ecx = MEM32(edi + 0x28);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(edx + ebp * 4);
    edx = MEM32(esp + 0x1C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(ecx) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0028ECF1; /* jl: less (signed <) */

loc_0028ED11: ;
    ecx = MEM32(esp + 0x24);
    eax = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0028EE72; /* jle: less or equal (signed <=) */

loc_0028ED26: ;
    eax = MEM32(edi + 0x44);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(esp + 0x10);
    edx = MEM32(ecx + eax * 4);
    ecx = MEM32(edi + 0x48);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + eax * 4);
    ecx = MEM32(esp + 0x3C);
    esi = MEM32(ecx + 0x48);
    edx = MEM32(esi + 0x14);
    MEM32(esp + 0x14) = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028ED5F; /* jl: less (signed <) */

loc_0028ED53: ;
    PUSH32(esp, 0x29FFE0);
    ecx = esi;
    PUSH32(esp, 0x0028ED5Fu); RECOMP_ABI_CALL(0x0025CB20u, sub_0025CB20); /* call 0x0025CB20 */

loc_0028ED5F: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x10);
    ecx = eax + 1;
    MEM32(esi + 0x14) = ecx;
    eax = MEM32(edx + eax * 4);
    esi = MEM32(edi + 0x2C);
    ebx = MEM32(esi + 8);
    MEM32(esp + 0x18) = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0028ED85; /* jge: greater or equal (signed >=) */

loc_0028ED7D: ;
    ecx = ebx + 1;
    MEM32(esi + 8) = ecx;
    goto loc_0028ED92;

loc_0028ED85: ;
    PUSH32(esp, 4);
    edx = ebx + 1;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0028ED92u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0028ED92: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esi + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(eax + ebx * 4) = ecx;
    ecx = MEM32(edx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028EDBE; /* je: equal / zero */

loc_0028EDA7: ;
    edx = MEM32(esp + 0x34);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    edx = edx + 0xC;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0028EDBEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028EDBE: ;
    eax = MEM32(esp + 0x14);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = MEM32(esp + 0x18);
    if (TEST_S(_fas, _fbs)) goto loc_0028EDF2; /* jl: less (signed <) */

loc_0028EDCD: ;
    ecx = MEM32(edi + 0x2C);
    edx = MEM32(ecx + 0x10);
    ebx = MEM32(edx + eax * 4);
    eax = MEM32(esp + 0x1C);
    esi = esi + 0xC;
    ebx = ebx + 0xC;
    eax = eax + 0xC;
    MEM32(esp + 0x28) = esi;
    PUSH32(esp, 0x0028EDECu); RECOMP_ABI_CALL(0x0024BD30u, sub_0024BD30); /* call 0x0024BD30 */

loc_0028EDEC: ;
    esi = MEM32(esp + 0x18);
    goto loc_0028EE0A;

loc_0028EDF2: ;
    ecx = MEM32(esp + 0x1C);
    ecx = ecx + 0xC;
    eax = esi + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x0028EE07u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0028EE07: ;
    esp = esp + 8;

loc_0028EE0A: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0028EE31; /* jge: greater or equal (signed >=) */

loc_0028EE12: ;
    edx = MEM32(edi + 0x24);
    ecx = MEM32(edx + 0x10);
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + ebp * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + ebp * 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028EE31; /* jne: not equal / not zero */

loc_0028EE21: ;
    ecx = MEM32(edi + 0x28);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(edx + ebp * 4);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(ecx) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0028EE12; /* jl: less (signed <) */

loc_0028EE31: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028EE5D; /* je: equal / zero */

loc_0028EE3C: ;
    ebx = MEM32(esp + 0x28);
    ecx = edx;
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(esp + 0x2C);
    ecx = MEM32(ecx + 0x10);
    esi = MEM32(ecx + edx * 4);
    edx = MEM32(0x5BA824);
    esi = esi + MEM32(edx + 8);
    PUSH32(esp, 0x0028EE5Du); RECOMP_ABI_CALL(0x0024BD30u, sub_0024BD30); /* call 0x0024BD30 */

loc_0028EE5D: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x24);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0028ED26; /* jl: less (signed <) */

loc_0028EE72: ;
    eax = MEM32(edi + 0x30);
    eax = MEM32(eax + 8);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0028F0EE; /* jle: less or equal (signed <=) */

loc_0028EE86: ;
    ecx = MEM32(edi + 0x30);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + ebp * 4);
    ecx = MEM32(esp + 0x3C);
    esi = MEM32(ecx + 0x10C);
    edx = MEM32(esi + 0x14);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x28) = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028EEB8; /* jl: less (signed <) */

loc_0028EEAC: ;
    PUSH32(esp, 0x2977C0);
    ecx = esi;
    PUSH32(esp, 0x0028EEB8u); RECOMP_ABI_CALL(0x0025CB20u, sub_0025CB20); /* call 0x0025CB20 */

loc_0028EEB8: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x10);
    ecx = eax + 1;
    MEM32(esi + 0x14) = ecx;
    esi = MEM32(edx + eax * 4);
    eax = MEM32(esp + 0x28);
    ebx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x14) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0028EEF7; /* jbe: below or equal (unsigned <=) */

loc_0028EED3: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028EEE2; /* je: equal / zero */

loc_0028EEDA: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028EEE2u); RECOMP_ABI_CALL(0x001F7FC0u, sub_001F7FC0); /* call 0x001F7FC0 */

loc_0028EEE2: ;
    ecx = ebx;
    ecx = ecx << 6;
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028EEF1u); RECOMP_ABI_CALL(0x001F7F00u, sub_001F7F00); /* call 0x001F7F00 */

loc_0028EEF1: ;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x14) = ebx;

loc_0028EEF7: ;
    edx = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEM32(esi + 0x10) = ebx;
    PUSH32(esp, 0x0028EF09u); RECOMP_ABI_CALL(0x0025E860u, sub_0025E860); /* call 0x0025E860 */

loc_0028EF09: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax + 0xC);
    eax = MEM32(esp + 0x20);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(ecx) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0028EE86; /* jl: less (signed <) */

loc_0028EF1F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x28;
    esp += 8; return; /* ret 4 */

loc_0028EF2B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_0028F01F; /* jle: less or equal (signed <=) */

loc_0028EF37: ;
    goto loc_0028EF40;

    /* nop */

loc_0028EF40: ;
    edx = MEM32(edi + 0x48);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax + ecx * 4);
    eax = MEM32(esp + 0x3C);
    esi = MEM32(eax + 0x48);
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 8) (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0028EF6C; /* jl: less (signed <) */

loc_0028EF60: ;
    PUSH32(esp, 0x29FFE0);
    ecx = esi;
    PUSH32(esp, 0x0028EF6Cu); RECOMP_ABI_CALL(0x0025CB20u, sub_0025CB20); /* call 0x0025CB20 */

loc_0028EF6C: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x10);
    edx = eax + 1;
    MEM32(esi + 0x14) = edx;
    esi = MEM32(edi + 0x2C);
    edx = MEM32(ecx + eax * 4);
    ebx = MEM32(esi + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0xC) (32-bit) */
    MEM32(esp + 0x18) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0028EF92; /* jge: greater or equal (signed >=) */

loc_0028EF8A: ;
    eax = ebx + 1;
    MEM32(esi + 8) = eax;
    goto loc_0028EF9F;

loc_0028EF92: ;
    PUSH32(esp, 4);
    ecx = ebx + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0028EF9Fu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0028EF9F: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esi + 0x10);
    ecx = MEM32(esp + 0x14);
    MEM32(edx + ebx * 4) = eax;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0028EFCC; /* jge: greater or equal (signed >=) */

loc_0028EFB5: ;
    edx = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028EFC7u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0028EFC7: ;
    esp = esp + 8;
    goto loc_0028EFE7;

loc_0028EFCC: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    eax = eax << 6;
    eax = eax + ecx;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    ecx = ecx + 0xC;
    PUSH32(esp, 0x0028EFE3u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0028EFE3: ;
    esi = MEM32(esp + 0x18);

loc_0028EFE7: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    ecx = MEM32(esp + 0x10);
    if (CMP_GE(_fas, _fbs)) goto loc_0028F00E; /* jge: greater or equal (signed >=) */

loc_0028EFF3: ;
    edx = MEM32(edi + 0x24);
    edx = MEM32(edx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + ebp * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + ebp * 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0028F00E; /* jne: not equal / not zero */

loc_0028EFFE: ;
    edx = MEM32(edi + 0x28);
    edx = MEM32(edx + 0x10);
    edx = MEM32(edx + ebp * 4);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(edx) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0028EFF3; /* jl: less (signed <) */

loc_0028F00E: ;
    eax = MEM32(esp + 0x24);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0028EF40; /* jl: less (signed <) */

loc_0028F01F: ;
    eax = MEM32(edi + 0x30);
    edx = MEM32(esp + 0x3C);
    ecx = MEM32(eax + 8);
    eax = MEM32(edx + 0xFC);
    edx = MEM32(eax + 8);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    MEM32(esp + 0x20) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0028F049; /* jle: less or equal (signed <=) */

loc_0028F03C: ;
    eax = MEM32(eax + 0x10);
    edx = MEM32(eax + edx * 4 + -4);
    MEM32(esp + 0x2C) = edx;
    goto loc_0028F04D;

loc_0028F049: ;
    MEM32(esp + 0x2C) = ebp;

loc_0028F04D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0028F0EE; /* jle: less or equal (signed <=) */

loc_0028F055: ;
    eax = MEM32(edi + 0x30);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + ebp * 4);
    edx = MEM32(eax + 8);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x3C);
    esi = MEM32(eax + 0x10C);
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 8) (32-bit) */
    MEM32(esp + 0x28) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0028F087; /* jl: less (signed <) */

loc_0028F07B: ;
    PUSH32(esp, 0x2977C0);
    ecx = esi;
    PUSH32(esp, 0x0028F087u); RECOMP_ABI_CALL(0x0025CB20u, sub_0025CB20); /* call 0x0025CB20 */

loc_0028F087: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x10);
    edx = eax + 1;
    MEM32(esi + 0x14) = edx;
    esi = MEM32(ecx + eax * 4);
    edx = MEM32(esp + 0x28);
    ebx = MEM32(edx + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x14) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0028F0C6; /* jbe: below or equal (unsigned <=) */

loc_0028F0A2: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028F0B1; /* je: equal / zero */

loc_0028F0A9: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028F0B1u); RECOMP_ABI_CALL(0x001F7FC0u, sub_001F7FC0); /* call 0x001F7FC0 */

loc_0028F0B1: ;
    eax = ebx;
    PUSH32(esp, 0x10);
    eax = eax << 6;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028F0C0u); RECOMP_ABI_CALL(0x001F7F00u, sub_001F7F00); /* call 0x001F7F00 */

loc_0028F0C0: ;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x14) = ebx;

loc_0028F0C6: ;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    MEM32(esi + 0x10) = ebx;
    PUSH32(esp, 0x0028F0D8u); RECOMP_ABI_CALL(0x00249260u, sub_00249260); /* call 0x00249260 */

loc_0028F0D8: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(edx + 0xC);
    MEM32(eax) = esi;
    eax = MEM32(esp + 0x20);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028F055; /* jl: less (signed <) */

loc_0028F0EE: ;
    eax = 0; /* xor self */
    POP32(esp, esi);

loc_0028F0F1: ;
    POP32(esp, ebx);

loc_0028F0F2: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 0x28;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0028F100
 * Original: 0x0028F100 - 0x0028F147 (71 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028F100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028F100: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028F110; /* jne: not equal / not zero */

loc_0028F109: ;
    MEM8(0x5BDF6C) = 1;

loc_0028F110: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x28E670);
    PUSH32(esp, 0x27BD50);
    PUSH32(esp, 0x254DD0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x40612C);
    PUSH32(esp, 0x251170);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BDA68);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028F143u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0028F143: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0028F150
 * Original: 0x0028F150 - 0x0028F194 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028F150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028F150: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028F160; /* jne: not equal / not zero */

loc_0028F159: ;
    MEM8(0x5BDF6C) = 1;

loc_0028F160: ;
    PUSH32(esp, 0x471974);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x276C00);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x406140);
    PUSH32(esp, 0x2518C0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BDB90);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028F190u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0028F190: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0028F1A0
 * Original: 0x0028F1A0 - 0x0028F1AC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028F1A0(void)
{

loc_0028F1A0: ;
    PUSH32(esp, 0x28E690);
    PUSH32(esp, 0x0028F1AAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028F1AA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0028F1B0
 * Original: 0x0028F1B0 - 0x0028F266 (182 bytes, 60 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028F1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028F1B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0028F1BEu); RECOMP_ABI_CALL(0x0015FDF0u, sub_0015FDF0); /* call 0x0015FDF0 */

loc_0028F1BE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028F261; /* jne: not equal / not zero */

loc_0028F1C6: ;
    eax = MEM32(0x5BDBF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0028F20F; /* jne: not equal / not zero */

loc_0028F1D0: ;
    ecx = esi;
    PUSH32(esp, 0x0028F1D7u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0028F1D7: ;
    SET_LO8(ecx, MEM8(0x5BC548));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028F1EF; /* jne: not equal / not zero */

loc_0028F1E1: ;
    eax = MEM32(0x46A6E0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028F1ECu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0028F1EC: ;
    esp = esp + 4;

loc_0028F1EF: ;
    PUSH32(esp, 0x28E5D0);
    edi = eax;
    PUSH32(esp, 0x0028F1FBu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028F1FB: ;
    ecx = MEM32(0x5BDB2C);
    esp = esp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028F20Au); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0028F20A: ;
    MEM32(0x5BDBF8) = eax;

loc_0028F20F: ;
    edi = MEM32(eax + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0xC) (32-bit) */
    ebx = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0028F221; /* jge: greater or equal (signed >=) */

loc_0028F219: ;
    ecx = edi + 1;
    MEM32(eax + 8) = ecx;
    goto loc_0028F22E;

loc_0028F221: ;
    PUSH32(esp, 4);
    edx = edi + 1;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0028F22Eu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0028F22E: ;
    eax = MEM32(ebx + 0x10);
    PUSH32(esp, 0);
    MEM32(eax + edi * 4) = esi;
    ecx = MEM32(0x5BC508);
    SET_LO8(edx, MEM8(esi + 0x3C));
    ecx = MEM32(ecx + 0x38);
    PUSH32(esp, 0);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x406158);
    PUSH32(esp, 7);
    MEM8(esp + 0x24) = LO8(edx);
    PUSH32(esp, 0x0028F259u); RECOMP_ABI_CALL(0x002311C0u, sub_002311C0); /* call 0x002311C0 */

loc_0028F259: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM8(esi + 0x3C) = LO8(ecx);
    POP32(esp, edi);

loc_0028F261: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0028F270
 * Original: 0x0028F270 - 0x0028F2DD (109 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028F270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028F270: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x44);
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, 0x0028F289u); RECOMP_ABI_CALL(0x00263110u, sub_00263110); /* call 0x00263110 */

loc_0028F289: ;
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0028F295u); RECOMP_ABI_CALL(0x0028EAA0u, sub_0028EAA0); /* call 0x0028EAA0 */

loc_0028F295: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028F2B7; /* jne: not equal / not zero */

loc_0028F299: ;
    eax = MEM32(ebx + 0x20);
    edx = MEM32(eax + 0x10);
    eax = MEM32(eax + 8);
    ecx = MEM32(edi + 8);
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028F2B1u); RECOMP_ABI_CALL(0x00200CC0u, sub_00200CC0); /* call 0x00200CC0 */

loc_0028F2B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0028F2B7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028F2B1; /* je: equal / zero */

loc_0028F2BC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028F2B1; /* je: equal / zero */

loc_0028F2C1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0028F2C8u); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0028F2C8: ;
    esp = esp + 8;
    edx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 2;
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0028F2E0
 * Original: 0x0028F2E0 - 0x0028F32A (74 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028F2E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028F2E0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028F2F0; /* jne: not equal / not zero */

loc_0028F2E9: ;
    MEM8(0x5BDF6C) = 1;

loc_0028F2F0: ;
    PUSH32(esp, 0x47197C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x25FEC0);
    PUSH32(esp, 0x275CD0);
    PUSH32(esp, 0xB0);
    PUSH32(esp, 0x406174);
    PUSH32(esp, 0x250F60);
    PUSH32(esp, 0x256D10);
    PUSH32(esp, 0x28DCE0);
    PUSH32(esp, 0x5BDA4C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028F326u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0028F326: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0028F330
 * Original: 0x0028F330 - 0x0028F374 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028F330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028F330: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028F340; /* jne: not equal / not zero */

loc_0028F339: ;
    MEM8(0x5BDF6C) = 1;

loc_0028F340: ;
    PUSH32(esp, 0x471988);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x281A30);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x406194);
    PUSH32(esp, 0x2519E0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BDBE8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028F370u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0028F370: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0028F380
 * Original: 0x0028F380 - 0x0028F39E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028F380(void)
{

loc_0028F380: ;
    PUSH32(esp, 0x28E690);
    PUSH32(esp, 0x0028F38Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028F38A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BDBEC);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028F39Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0028F39D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0028F3A0
 * Original: 0x0028F3A0 - 0x0028F70F (879 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028F3A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028F3A0: ;
    esp = esp - 0x110;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x11C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x11C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0028F3BDu); RECOMP_ABI_CALL(0x00280EA0u, sub_00280EA0); /* call 0x00280EA0 */

loc_0028F3BD: ;
    eax = MEM32(0x5BD9C8);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028F3D4; /* je: equal / zero */

loc_0028F3C9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028F3E6; /* jne: not equal / not zero */

loc_0028F3D4: ;
    PUSH32(esp, 0x281490);
    PUSH32(esp, 0x0028F3DEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028F3DE: ;
    eax = MEM32(0x5BD9C8);
    esp = esp + 4;

loc_0028F3E6: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0028F3EEu); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_0028F3EE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028F706; /* je: equal / zero */

loc_0028F3F6: ;
    edx = MEM32(0x5BDBEC);
    eax = MEM32(0x5BD9A0);
    ecx = MEM32(0x5BD980);
    MEM32(esp + 8) = edx;
    edx = MEM32(0x5BDAC0);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x5BD984);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(0x5BDAA0);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(0x5BDA48);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(0x5BDA38);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(0x5BDA40);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(0x5BD9CC);
    MEM32(esp + 0x40) = eax;
    eax = MEM32(0x5BD9EC);
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(0x5BDAFC);
    MEM32(esp + 0x50) = edx;
    edx = MEM32(0x5BDB0C);
    MEM32(esp + 0x58) = eax;
    eax = MEM32(0x5BDA30);
    MEM32(esp + 0x60) = ecx;
    ecx = MEM32(0x5BDA14);
    MEM32(esp + 0x68) = edx;
    edx = MEM32(0x5BDA10);
    MEM32(esp + 0x70) = eax;
    eax = MEM32(0x5BDA24);
    MEM32(esp + 0x78) = ecx;
    ecx = MEM32(0x5BDA28);
    MEM32(esp + 0x80) = edx;
    edx = MEM32(0x5BDA2C);
    MEM32(esp + 0x88) = eax;
    eax = MEM32(0x5BDA90);
    MEM32(esp + 0x90) = ecx;
    ecx = MEM32(0x5BD9A4);
    MEM32(esp + 0x98) = edx;
    edx = MEM32(0x5BD950);
    MEM32(esp + 0xA0) = eax;
    eax = MEM32(0x5BD948);
    MEM32(esp + 0xA8) = ecx;
    ecx = MEM32(0x5BDB14);
    MEM32(esp + 0xB0) = edx;
    edx = MEM32(0x5BD9AC);
    MEM32(esp + 0xB8) = eax;
    eax = MEM32(0x5BDB40);
    PUSH32(esp, esi);
    MEM32(esp + 0xC4) = ecx;
    ecx = MEM32(0x5BD8C8);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = 0x24BBD0;
    MEM32(esp + 0x1C) = 0x28E010;
    MEM32(esp + 0x24) = 0x28DD30;
    MEM32(esp + 0x2C) = 0x28D120;
    MEM32(esp + 0x34) = 0x2825C0;
    MEM32(esp + 0x3C) = 0x24BBF0;
    MEM32(esp + 0x44) = 0x27CFD0;
    MEM32(esp + 0x4C) = 0x286CE0;
    MEM32(esp + 0x54) = 0x286C50;
    MEM32(esp + 0x5C) = 0x28B660;
    MEM32(esp + 0x64) = 0x28CFC0;
    MEM32(esp + 0x6C) = 0x28B640;
    MEM32(esp + 0x74) = 0x28D100;
    MEM32(esp + 0x7C) = 0x286BD0;
    MEM32(esp + 0x84) = 0x28CF00;
    MEM32(esp + 0x8C) = 0x28CF50;
    MEM32(esp + 0x94) = 0x27D340;
    MEM32(esp + 0x9C) = 0x27D2D0;
    MEM32(esp + 0xA4) = 0x27D1C0;
    MEM32(esp + 0xAC) = 0x28B440;
    MEM32(esp + 0xB4) = 0x286E40;
    MEM32(esp + 0xBC) = 0x281FB0;
    MEM32(esp + 0xC4) = 0x28B870;
    MEM32(esp + 0xCC) = 0x282440;
    MEM32(esp + 0xD0) = edx;
    MEM32(esp + 0xD4) = 0x27D010;
    MEM32(esp + 0xD8) = eax;
    MEM32(esp + 0xDC) = 0x281E50;
    edx = MEM32(0x5BDB28);
    eax = MEM32(0x5BD8E8);
    MEM32(esp + 0xE0) = ecx;
    ecx = MEM32(0x5BD8B0);
    MEM32(esp + 0xE8) = edx;
    edx = MEM32(0x5BD8D0);
    MEM32(esp + 0xF0) = eax;
    eax = MEM32(0x5BDAD8);
    MEM32(esp + 0xF8) = ecx;
    ecx = MEM32(0x5BDA20);
    MEM32(esp + 0x100) = edx;
    edx = MEM32(0x5BD8D8);
    MEM32(esp + 0xE4) = 0x27D1A0;
    MEM32(esp + 0xEC) = 0x281D40;
    MEM32(esp + 0xF4) = 0x27CCB0;
    MEM32(esp + 0xFC) = 0x27D410;
    MEM32(esp + 0x104) = 0x282390;
    MEM32(esp + 0x108) = eax;
    MEM32(esp + 0x10C) = 0x28F270;
    MEM32(esp + 0x110) = ecx;
    MEM32(esp + 0x114) = 0x27D4F0;
    MEM32(esp + 0x118) = edx;
    MEM32(esp + 0x11C) = 0x27D5B0;
    edi = 0; /* xor self */
    esi = esp + 0x10;
    /* nop */

loc_0028F6D0: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028F6E2; /* je: equal / zero */

loc_0028F6D6: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0028F6DEu); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_0028F6DE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028F6F6; /* jne: not equal / not zero */

loc_0028F6E2: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x22) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x22 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028F6D0; /* jl: less (signed <) */

loc_0028F6EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x110;
    esp += 4; return; /* ret */

loc_0028F6F6: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0028F701u); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_0028F701: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0028F706: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x110;
    esp += 4; return; /* ret */

}

/**
 * sub_0028F710
 * Original: 0x0028F710 - 0x0028F7A9 (153 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028F710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028F710: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028F721u); RECOMP_ABI_CALL(0x0028F3A0u, sub_0028F3A0); /* call 0x0028F3A0 */

loc_0028F721: ;
    eax = MEM32(0x5BD9C8);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028F738; /* je: equal / zero */

loc_0028F72D: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028F74A; /* jne: not equal / not zero */

loc_0028F738: ;
    PUSH32(esp, 0x281490);
    PUSH32(esp, 0x0028F742u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028F742: ;
    eax = MEM32(0x5BD9C8);
    esp = esp + 4;

loc_0028F74A: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028F752u); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_0028F752: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028F765; /* je: equal / zero */

loc_0028F756: ;
    PUSH32(esp, 0x269110);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028F762u); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_0028F762: ;
    esp = esp + 0xC;

loc_0028F765: ;
    eax = MEM32(0x5BD9A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028F779; /* je: equal / zero */

loc_0028F76E: ;
    edx = MEM32(eax + 0x24);
    edx = edx >> 2;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028F78B; /* jne: not equal / not zero */

loc_0028F779: ;
    PUSH32(esp, 0x28C900);
    PUSH32(esp, 0x0028F783u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028F783: ;
    eax = MEM32(0x5BD9A4);
    esp = esp + 4;

loc_0028F78B: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0028F793u); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_0028F793: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028F7A6; /* je: equal / zero */

loc_0028F797: ;
    PUSH32(esp, 0x2691A0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028F7A3u); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_0028F7A3: ;
    esp = esp + 0xC;

loc_0028F7A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0028F7B0
 * Original: 0x0028F7B0 - 0x0028F7BC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028F7B0(void)
{

loc_0028F7B0: ;
    PUSH32(esp, 0x28F2E0);
    PUSH32(esp, 0x0028F7BAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028F7BA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0028F7C0
 * Original: 0x0028F7C0 - 0x0028F7CC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028F7C0(void)
{

loc_0028F7C0: ;
    PUSH32(esp, 0x28F330);
    PUSH32(esp, 0x0028F7CAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028F7CA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0028F7D0
 * Original: 0x0028F7D0 - 0x0028F7E5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028F7D0(void)
{

loc_0028F7D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x5BDC9C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0028F7E1u); RECOMP_ABI_CALL(0x0028F3A0u, sub_0028F3A0); /* call 0x0028F3A0 */

loc_0028F7E1: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0028F7F0
 * Original: 0x0028F7F0 - 0x0028F805 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028F7F0(void)
{

loc_0028F7F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x5BDD6C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0028F801u); RECOMP_ABI_CALL(0x0028F710u, sub_0028F710); /* call 0x0028F710 */

loc_0028F801: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0028F810
 * Original: 0x0028F810 - 0x0028F857 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028F810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028F810: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028F820; /* jne: not equal / not zero */

loc_0028F819: ;
    MEM8(0x5BDF6C) = 1;

loc_0028F820: ;
    PUSH32(esp, 0x471990);
    PUSH32(esp, 0);
    PUSH32(esp, 0x254B20);
    PUSH32(esp, 0x25FD30);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x4061A0);
    PUSH32(esp, 0x250F90);
    PUSH32(esp, 0x249250);
    PUSH32(esp, 0x261980);
    PUSH32(esp, 0x5BDA34);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028F853u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0028F853: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0028F860
 * Original: 0x0028F860 - 0x0028F89B (59 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028F860(void)
{

loc_0028F860: ;
    eax = MEM32(0x46A680);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028F86Cu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0028F86C: ;
    PUSH32(esp, 0x27B3C0);
    esi = eax;
    PUSH32(esp, 0x0028F878u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028F878: ;
    ecx = MEM32(0x5BD97C);
    esp = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0028F887u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0028F887: ;
    PUSH32(esp, 0x28F7F0);
    MEM32(0x5BDD6C) = eax;
    PUSH32(esp, 0x0028F896u); RECOMP_ABI_CALL(0x002041B0u, sub_002041B0); /* call 0x002041B0 */

loc_0028F896: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0028F8A0
 * Original: 0x0028F8A0 - 0x0028F8B1 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028F8A0(void)
{

loc_0028F8A0: ;
    PUSH32(esp, 0x0028F8A5u); RECOMP_ABI_CALL(0x00286B80u, sub_00286B80); /* call 0x00286B80 */

loc_0028F8A5: ;
    PUSH32(esp, 0x28F7D0);
    PUSH32(esp, 0x0028F8AFu); RECOMP_ABI_CALL(0x002041B0u, sub_002041B0); /* call 0x002041B0 */

loc_0028F8AF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0028F8C0
 * Original: 0x0028F8C0 - 0x0028F907 (71 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028F8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028F8C0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028F8D0; /* jne: not equal / not zero */

loc_0028F8C9: ;
    MEM8(0x5BDF6C) = 1;

loc_0028F8D0: ;
    PUSH32(esp, 0x471998);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2570A0);
    PUSH32(esp, 0x261E40);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x4061BC);
    PUSH32(esp, 0x251950);
    PUSH32(esp, 0x1A4510);
    PUSH32(esp, 0x2371D0);
    PUSH32(esp, 0x5BDBE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028F903u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0028F903: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0028F910
 * Original: 0x0028F910 - 0x0028F95D (77 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028F910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028F910: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028F920; /* jne: not equal / not zero */

loc_0028F919: ;
    MEM8(0x5BDF6C) = 1;

loc_0028F920: ;
    PUSH32(esp, 0x4719B0);
    PUSH32(esp, 0x28F8A0);
    PUSH32(esp, 0x260BE0);
    PUSH32(esp, 0x255BB0);
    PUSH32(esp, 0x1D8);
    PUSH32(esp, 0x4061C8);
    PUSH32(esp, 0x2502D0);
    PUSH32(esp, 0x251B10);
    PUSH32(esp, 0x288000);
    PUSH32(esp, 0x5BDAF4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028F959u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0028F959: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0028F960
 * Original: 0x0028F960 - 0x0028F96C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028F960(void)
{

loc_0028F960: ;
    PUSH32(esp, 0x28F8C0);
    PUSH32(esp, 0x0028F96Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028F96A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0028F970
 * Original: 0x0028F970 - 0x0028F9BD (77 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028F970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028F970: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028F980; /* jne: not equal / not zero */

loc_0028F979: ;
    MEM8(0x5BDF6C) = 1;

loc_0028F980: ;
    PUSH32(esp, 0x471A14);
    PUSH32(esp, 0x28F860);
    PUSH32(esp, 0x2604B0);
    PUSH32(esp, 0x275F80);
    PUSH32(esp, 0x230);
    PUSH32(esp, 0x4061DC);
    PUSH32(esp, 0x251260);
    PUSH32(esp, 0x255190);
    PUSH32(esp, 0x28F910);
    PUSH32(esp, 0x5BDA98);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028F9B9u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0028F9B9: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0028F9C0
 * Original: 0x0028F9C0 - 0x0028FA04 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028F9C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0028F9C0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0028F9D0; /* jne: not equal / not zero */

loc_0028F9C9: ;
    MEM8(0x5BDF6C) = 1;

loc_0028F9D0: ;
    PUSH32(esp, 0x471A20);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x276F10);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x4061F4);
    PUSH32(esp, 0x251980);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BDBE0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0028FA00u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0028FA00: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0028FA10
 * Original: 0x0028FA10 - 0x0028FA2E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028FA10(void)
{

loc_0028FA10: ;
    PUSH32(esp, 0x28F910);
    PUSH32(esp, 0x0028FA1Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FA1A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BDAF4);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028FA2Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0028FA2D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0028FA30
 * Original: 0x0028FA30 - 0x0028FD5D (813 bytes, 263 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028FA30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028FA30: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi + 0x98) = ebx;
    PUSH32(esp, 0x0028FA48u); RECOMP_ABI_CALL(0x0024DD60u, sub_0024DD60); /* call 0x0024DD60 */

loc_0028FA48: ;
    eax = MEM32(esi + 0x84);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028FA63; /* je: equal / zero */

loc_0028FA54: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028FA5Au); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_0028FA5A: ;
    esp = esp + 4;
    MEM32(esi + 0x84) = edi;

loc_0028FA63: ;
    eax = MEM32(esi + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028FA7C; /* je: equal / zero */

loc_0028FA6D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028FA73u); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_0028FA73: ;
    esp = esp + 4;
    MEM32(esi + 0x90) = edi;

loc_0028FA7C: ;
    eax = MEM32(esi + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028FA95; /* je: equal / zero */

loc_0028FA86: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028FA8Cu); RECOMP_ABI_CALL(0x001F52B0u, sub_001F52B0); /* call 0x001F52B0 */

loc_0028FA8C: ;
    esp = esp + 4;
    MEM32(esi + 0x94) = edi;

loc_0028FA95: ;
    ecx = esi;
    PUSH32(esp, 0x0028FA9Cu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0028FA9C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0028FAA4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028FAA4: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BD6B0);
    PUSH32(esp, 0x0028FAB6u); RECOMP_ABI_CALL(0x001F7560u, sub_001F7560); /* call 0x001F7560 */

loc_0028FAB6: ;
    ecx = esi;
    PUSH32(esp, 0x0028FABDu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0028FABD: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0028FAC5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028FAC5: ;
    ecx = MEM32(0x5BD7A0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028FAD7u); RECOMP_ABI_CALL(0x001F7560u, sub_001F7560); /* call 0x001F7560 */

loc_0028FAD7: ;
    ecx = esi;
    PUSH32(esp, 0x0028FADEu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0028FADE: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0028FAE6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028FAE6: ;
    ecx = MEM32(0x5BCEC4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028FAF8u); RECOMP_ABI_CALL(0x001F7560u, sub_001F7560); /* call 0x001F7560 */

loc_0028FAF8: ;
    ebp = MEM32(esi + 0x14);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = ebp;
    MEM32(esp + 0x24) = ebp;
    PUSH32(esp, 0x0028FB0Bu); RECOMP_ABI_CALL(0x00144F50u, sub_00144F50); /* call 0x00144F50 */

loc_0028FB0B: ;
    ecx = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0028FB1F; /* jle: less or equal (signed <=) */

loc_0028FB14: ;
    edx = MEM32(ebp + 0x10);
    MEM32(edx + eax * 4) = edi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028FB14; /* jl: less (signed <) */

loc_0028FB1F: ;
    MEM32(ebp + 8) = edi;
    eax = MEM32(ebx + 0x20);
    ebp = MEM32(eax + 0xC);
    eax = MEM32(esp + 0x2C);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0028FB39u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028FB39: ;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi);
    ebx = 0; /* xor self */
    ecx = esi;
    MEM32(esp + 0x2C) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0028FB4Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028FB4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0028FD53; /* jbe: below or equal (unsigned <=) */

loc_0028FB52: ;
    MEM32(esp + 0x28) = ebx;
    goto loc_0028FB60;

    /* nop */
    /* nop */

loc_0028FB60: ;
    ecx = MEM32(esi + 0x90);
    eax = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x20) = 0;
    MEM32(ecx + eax * 4) = edx;
    ecx = MEM32(esi + 0x94);
    edx = MEM32(esp + 0x18);
    MEM32(ecx + eax * 4) = edx;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(ebp + 0xC);
    eax = eax + eax * 2;
    edx = ecx + eax * 4;
    ecx = MEM32(esi + 0x84);
    MEM32(esp + 0x14) = edx;
    ecx = ecx + MEM32(esp + 0x28);
    PUSH32(esp, 0x0028FBA6u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0028FBA6: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x84);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    ecx = ecx + edx;
    PUSH32(esp, 0x0028FBBCu); RECOMP_ABI_CALL(0x0023E460u, sub_0023E460); /* call 0x0023E460 */

loc_0028FBBC: ;
    ecx = MEM32(esi + 0x88);
    ecx = ecx + MEM32(esp + 0x28);
    PUSH32(esp, 0x0028FBCBu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0028FBCB: ;
    ecx = MEM32(esi + 0x8C);
    ecx = ecx + MEM32(esp + 0x28);
    PUSH32(esp, 0x0028FBDAu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0028FBDA: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x8C);
    ecx = ecx + edx;
    PUSH32(esp, 0x0028FBF0u); RECOMP_ABI_CALL(0x0023E460u, sub_0023E460); /* call 0x0023E460 */

loc_0028FBF0: ;
    ecx = esi;
    PUSH32(esp, 0x0028FBF7u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0028FBF7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0028FC16; /* je: equal / zero */

loc_0028FBFF: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028FC16; /* jne: not equal / not zero */

loc_0028FC0F: ;
    ecx = edi;
    PUSH32(esp, 0x0028FC16u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028FC16: ;
    PUSH32(esp, 0x28F810);
    PUSH32(esp, 0x0028FC20u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FC20: ;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(0x5BDA34);
    esp = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0028FC33u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0028FC33: ;
    edi = eax;
    eax = MEM32(esp + 0x2C);
    ecx = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 0xC) = eax;
    PUSH32(esp, 0x0028FC46u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0028FC46: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0028FC65; /* je: equal / zero */

loc_0028FC4E: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028FC65; /* jne: not equal / not zero */

loc_0028FC5E: ;
    ecx = ebx;
    PUSH32(esp, 0x0028FC65u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028FC65: ;
    PUSH32(esp, 0x261DE0);
    PUSH32(esp, 0x0028FC6Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FC6F: ;
    ecx = MEM32(esp + 0x18);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BDBDC);
    PUSH32(esp, 0x0028FC82u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0028FC82: ;
    edx = MEM32(ebp);
    ebx = eax;
    eax = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0028FC91u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028FC91: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0028FC99u); RECOMP_ABI_CALL(0x002127B0u, sub_002127B0); /* call 0x002127B0 */

loc_0028FC99: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028FCB8; /* je: equal / zero */

loc_0028FCA3: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028FCB8; /* jne: not equal / not zero */

loc_0028FCB3: ;
    PUSH32(esp, 0x0028FCB8u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028FCB8: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    MEM32(ebx + 0xC) = edi;
    PUSH32(esp, 0x0028FCC5u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0028FCC5: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0028FCCCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028FCCC: ;
    ecx = MEM32(esp + 0x2C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0028FCF8; /* jae: above or equal (unsigned >=) */

loc_0028FCD5: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(ebp);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x0028FCE7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028FCE7: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x14) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0028FCF4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028FCF4: ;
    MEM32(esp + 0x18) = eax;

loc_0028FCF8: ;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esi);
    edx = edx + 0x40;
    ecx = esi;
    MEM32(esp + 0x28) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0028FD13u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028FD13: ;
    _fa = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x2C), eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0028FB60; /* jb: below (unsigned <) */

loc_0028FD1D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028FD38; /* je: equal / zero */

loc_0028FD21: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028FD38; /* jne: not equal / not zero */

loc_0028FD31: ;
    ecx = ebx;
    PUSH32(esp, 0x0028FD38u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028FD38: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028FD53; /* je: equal / zero */

loc_0028FD3C: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028FD53; /* jne: not equal / not zero */

loc_0028FD4C: ;
    ecx = edi;
    PUSH32(esp, 0x0028FD53u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028FD53: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0028FD60
 * Original: 0x0028FD60 - 0x002904D3 (1907 bytes, 387 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028FD60(void)
{

loc_0028FD60: ;
    PUSH32(esp, 0x251A40);
    PUSH32(esp, 0x0028FD6Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FD6A: ;
    PUSH32(esp, 0x285B60);
    PUSH32(esp, 0x0028FD74u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FD74: ;
    PUSH32(esp, 0x288000);
    PUSH32(esp, 0x0028FD7Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FD7E: ;
    PUSH32(esp, 0x288050);
    PUSH32(esp, 0x0028FD88u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FD88: ;
    PUSH32(esp, 0x251D40);
    PUSH32(esp, 0x0028FD92u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FD92: ;
    PUSH32(esp, 0x251D80);
    PUSH32(esp, 0x0028FD9Cu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FD9C: ;
    PUSH32(esp, 0x27AD30);
    PUSH32(esp, 0x0028FDA6u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FDA6: ;
    PUSH32(esp, 0x2880A0);
    PUSH32(esp, 0x0028FDB0u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FDB0: ;
    PUSH32(esp, 0x285BB0);
    PUSH32(esp, 0x0028FDBAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FDBA: ;
    PUSH32(esp, 0x285C00);
    PUSH32(esp, 0x0028FDC4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FDC4: ;
    PUSH32(esp, 0x288190);
    PUSH32(esp, 0x0028FDCEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FDCE: ;
    PUSH32(esp, 0x288140);
    PUSH32(esp, 0x0028FDD8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FDD8: ;
    PUSH32(esp, 0x28C880);
    PUSH32(esp, 0x0028FDE2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FDE2: ;
    PUSH32(esp, 0x2880F0);
    PUSH32(esp, 0x0028FDECu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FDEC: ;
    PUSH32(esp, 0x2811A0);
    PUSH32(esp, 0x0028FDF6u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FDF6: ;
    PUSH32(esp, 0x289200);
    PUSH32(esp, 0x0028FE00u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FE00: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x2746A0);
    PUSH32(esp, 0x0028FE0Du); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FE0D: ;
    PUSH32(esp, 0x285C50);
    PUSH32(esp, 0x0028FE17u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FE17: ;
    PUSH32(esp, 0x2746F0);
    PUSH32(esp, 0x0028FE21u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FE21: ;
    PUSH32(esp, 0x25F0F0);
    PUSH32(esp, 0x0028FE2Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FE2B: ;
    PUSH32(esp, 0x285CA0);
    PUSH32(esp, 0x0028FE35u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FE35: ;
    PUSH32(esp, 0x25F170);
    PUSH32(esp, 0x0028FE3Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FE3F: ;
    PUSH32(esp, 0x25F1F0);
    PUSH32(esp, 0x0028FE49u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FE49: ;
    PUSH32(esp, 0x281200);
    PUSH32(esp, 0x0028FE53u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FE53: ;
    PUSH32(esp, 0x287420);
    PUSH32(esp, 0x0028FE5Du); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FE5D: ;
    PUSH32(esp, 0x27B000);
    PUSH32(esp, 0x0028FE67u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FE67: ;
    PUSH32(esp, 0x289250);
    PUSH32(esp, 0x0028FE71u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FE71: ;
    PUSH32(esp, 0x25F350);
    PUSH32(esp, 0x0028FE7Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FE7B: ;
    PUSH32(esp, 0x27B050);
    PUSH32(esp, 0x0028FE85u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FE85: ;
    PUSH32(esp, 0x25F460);
    PUSH32(esp, 0x0028FE8Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FE8F: ;
    PUSH32(esp, 0x27B0A0);
    PUSH32(esp, 0x0028FE99u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FE99: ;
    PUSH32(esp, 0x285D00);
    PUSH32(esp, 0x0028FEA3u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FEA3: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x288270);
    PUSH32(esp, 0x0028FEB0u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FEB0: ;
    PUSH32(esp, 0x285D50);
    PUSH32(esp, 0x0028FEBAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FEBA: ;
    PUSH32(esp, 0x2874A0);
    PUSH32(esp, 0x0028FEC4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FEC4: ;
    PUSH32(esp, 0x25F4B0);
    PUSH32(esp, 0x0028FECEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FECE: ;
    PUSH32(esp, 0x2874F0);
    PUSH32(esp, 0x0028FED8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FED8: ;
    PUSH32(esp, 0x252C40);
    PUSH32(esp, 0x0028FEE2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FEE2: ;
    PUSH32(esp, 0x25F5C0);
    PUSH32(esp, 0x0028FEECu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FEEC: ;
    PUSH32(esp, 0x27B1D0);
    PUSH32(esp, 0x0028FEF6u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FEF6: ;
    PUSH32(esp, 0x287540);
    PUSH32(esp, 0x0028FF00u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FF00: ;
    PUSH32(esp, 0x285DB0);
    PUSH32(esp, 0x0028FF0Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FF0A: ;
    PUSH32(esp, 0x285E00);
    PUSH32(esp, 0x0028FF14u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FF14: ;
    PUSH32(esp, 0x27B3C0);
    PUSH32(esp, 0x0028FF1Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FF1E: ;
    PUSH32(esp, 0x27B340);
    PUSH32(esp, 0x0028FF28u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FF28: ;
    PUSH32(esp, 0x274DB0);
    PUSH32(esp, 0x0028FF32u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FF32: ;
    PUSH32(esp, 0x274D30);
    PUSH32(esp, 0x0028FF3Cu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FF3C: ;
    PUSH32(esp, 0x274CB0);
    PUSH32(esp, 0x0028FF46u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FF46: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x274C30);
    PUSH32(esp, 0x0028FF53u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FF53: ;
    PUSH32(esp, 0x274BB0);
    PUSH32(esp, 0x0028FF5Du); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FF5D: ;
    PUSH32(esp, 0x274B30);
    PUSH32(esp, 0x0028FF67u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FF67: ;
    PUSH32(esp, 0x274AB0);
    PUSH32(esp, 0x0028FF71u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FF71: ;
    PUSH32(esp, 0x274A30);
    PUSH32(esp, 0x0028FF7Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FF7B: ;
    PUSH32(esp, 0x2749B0);
    PUSH32(esp, 0x0028FF85u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FF85: ;
    PUSH32(esp, 0x285E50);
    PUSH32(esp, 0x0028FF8Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FF8F: ;
    PUSH32(esp, 0x285EA0);
    PUSH32(esp, 0x0028FF99u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FF99: ;
    PUSH32(esp, 0x2882C0);
    PUSH32(esp, 0x0028FFA3u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FFA3: ;
    PUSH32(esp, 0x2535A0);
    PUSH32(esp, 0x0028FFADu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FFAD: ;
    PUSH32(esp, 0x2535E0);
    PUSH32(esp, 0x0028FFB7u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FFB7: ;
    PUSH32(esp, 0x25F750);
    PUSH32(esp, 0x0028FFC1u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FFC1: ;
    PUSH32(esp, 0x27B4A0);
    PUSH32(esp, 0x0028FFCBu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FFCB: ;
    PUSH32(esp, 0x25F7F0);
    PUSH32(esp, 0x0028FFD5u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FFD5: ;
    PUSH32(esp, 0x288310);
    PUSH32(esp, 0x0028FFDFu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FFDF: ;
    PUSH32(esp, 0x28C900);
    PUSH32(esp, 0x0028FFE9u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FFE9: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x25F890);
    PUSH32(esp, 0x0028FFF6u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028FFF6: ;
    PUSH32(esp, 0x285EF0);
    PUSH32(esp, 0x00290000u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290000: ;
    PUSH32(esp, 0x275680);
    PUSH32(esp, 0x0029000Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029000A: ;
    PUSH32(esp, 0x281490);
    PUSH32(esp, 0x00290014u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290014: ;
    PUSH32(esp, 0x275740);
    PUSH32(esp, 0x0029001Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029001E: ;
    PUSH32(esp, 0x281420);
    PUSH32(esp, 0x00290028u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290028: ;
    PUSH32(esp, 0x27B7C0);
    PUSH32(esp, 0x00290032u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290032: ;
    PUSH32(esp, 0x2813C0);
    PUSH32(esp, 0x0029003Cu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029003C: ;
    PUSH32(esp, 0x285F50);
    PUSH32(esp, 0x00290046u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290046: ;
    PUSH32(esp, 0x2875A0);
    PUSH32(esp, 0x00290050u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290050: ;
    PUSH32(esp, 0x2892C0);
    PUSH32(esp, 0x0029005Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029005A: ;
    PUSH32(esp, 0x25FA40);
    PUSH32(esp, 0x00290064u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290064: ;
    PUSH32(esp, 0x27B8D0);
    PUSH32(esp, 0x0029006Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029006E: ;
    PUSH32(esp, 0x27B880);
    PUSH32(esp, 0x00290078u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290078: ;
    PUSH32(esp, 0x285FA0);
    PUSH32(esp, 0x00290082u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290082: ;
    PUSH32(esp, 0x25FB40);
    PUSH32(esp, 0x0029008Cu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029008C: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x2875F0);
    PUSH32(esp, 0x00290099u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290099: ;
    PUSH32(esp, 0x25FC20);
    PUSH32(esp, 0x002900A3u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002900A3: ;
    PUSH32(esp, 0x27B9B0);
    PUSH32(esp, 0x002900ADu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002900AD: ;
    PUSH32(esp, 0x285FF0);
    PUSH32(esp, 0x002900B7u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002900B7: ;
    PUSH32(esp, 0x287650);
    PUSH32(esp, 0x002900C1u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002900C1: ;
    PUSH32(esp, 0x2876A0);
    PUSH32(esp, 0x002900CBu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002900CB: ;
    PUSH32(esp, 0x25FCD0);
    PUSH32(esp, 0x002900D5u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002900D5: ;
    PUSH32(esp, 0x286040);
    PUSH32(esp, 0x002900DFu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002900DF: ;
    PUSH32(esp, 0x288370);
    PUSH32(esp, 0x002900E9u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002900E9: ;
    PUSH32(esp, 0x286090);
    PUSH32(esp, 0x002900F3u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002900F3: ;
    PUSH32(esp, 0x2860E0);
    PUSH32(esp, 0x002900FDu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002900FD: ;
    PUSH32(esp, 0x281570);
    PUSH32(esp, 0x00290107u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290107: ;
    PUSH32(esp, 0x286130);
    PUSH32(esp, 0x00290111u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290111: ;
    PUSH32(esp, 0x28F810);
    PUSH32(esp, 0x0029011Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029011B: ;
    PUSH32(esp, 0x28E190);
    PUSH32(esp, 0x00290125u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290125: ;
    PUSH32(esp, 0x288400);
    PUSH32(esp, 0x0029012Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029012F: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x286180);
    PUSH32(esp, 0x0029013Cu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029013C: ;
    PUSH32(esp, 0x28DBB0);
    PUSH32(esp, 0x00290146u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290146: ;
    PUSH32(esp, 0x289330);
    PUSH32(esp, 0x00290150u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290150: ;
    PUSH32(esp, 0x28F2E0);
    PUSH32(esp, 0x0029015Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029015A: ;
    PUSH32(esp, 0x2602E0);
    PUSH32(esp, 0x00290164u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290164: ;
    PUSH32(esp, 0x288450);
    PUSH32(esp, 0x0029016Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029016E: ;
    PUSH32(esp, 0x260330);
    PUSH32(esp, 0x00290178u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290178: ;
    PUSH32(esp, 0x2884A0);
    PUSH32(esp, 0x00290182u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290182: ;
    PUSH32(esp, 0x287780);
    PUSH32(esp, 0x0029018Cu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029018C: ;
    PUSH32(esp, 0x28F100);
    PUSH32(esp, 0x00290196u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290196: ;
    PUSH32(esp, 0x289390);
    PUSH32(esp, 0x002901A0u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002901A0: ;
    PUSH32(esp, 0x254F90);
    PUSH32(esp, 0x002901AAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002901AA: ;
    PUSH32(esp, 0x275DF0);
    PUSH32(esp, 0x002901B4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002901B4: ;
    PUSH32(esp, 0x281620);
    PUSH32(esp, 0x002901BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002901BE: ;
    PUSH32(esp, 0x2861D0);
    PUSH32(esp, 0x002901C8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002901C8: ;
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x002901D2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002901D2: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x27BDC0);
    PUSH32(esp, 0x002901DFu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002901DF: ;
    PUSH32(esp, 0x286220);
    PUSH32(esp, 0x002901E9u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002901E9: ;
    PUSH32(esp, 0x286290);
    PUSH32(esp, 0x002901F3u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002901F3: ;
    PUSH32(esp, 0x288510);
    PUSH32(esp, 0x002901FDu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002901FD: ;
    PUSH32(esp, 0x28F970);
    PUSH32(esp, 0x00290207u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290207: ;
    PUSH32(esp, 0x2893F0);
    PUSH32(esp, 0x00290211u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290211: ;
    PUSH32(esp, 0x28DC00);
    PUSH32(esp, 0x0029021Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029021B: ;
    PUSH32(esp, 0x281700);
    PUSH32(esp, 0x00290225u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290225: ;
    PUSH32(esp, 0x2606B0);
    PUSH32(esp, 0x0029022Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029022F: ;
    PUSH32(esp, 0x288760);
    PUSH32(esp, 0x00290239u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290239: ;
    PUSH32(esp, 0x276080);
    PUSH32(esp, 0x00290243u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290243: ;
    PUSH32(esp, 0x281750);
    PUSH32(esp, 0x0029024Du); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029024D: ;
    PUSH32(esp, 0x260840);
    PUSH32(esp, 0x00290257u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290257: ;
    PUSH32(esp, 0x27BE80);
    PUSH32(esp, 0x00290261u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290261: ;
    PUSH32(esp, 0x276140);
    PUSH32(esp, 0x0029026Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029026B: ;
    PUSH32(esp, 0x2608E0);
    PUSH32(esp, 0x00290275u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290275: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x27BF50);
    PUSH32(esp, 0x00290282u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290282: ;
    PUSH32(esp, 0x28DEB0);
    PUSH32(esp, 0x0029028Cu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029028C: ;
    PUSH32(esp, 0x260B90);
    PUSH32(esp, 0x00290296u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290296: ;
    PUSH32(esp, 0x27BFA0);
    PUSH32(esp, 0x002902A0u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002902A0: ;
    PUSH32(esp, 0x28E1E0);
    PUSH32(esp, 0x002902AAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002902AA: ;
    PUSH32(esp, 0x28F910);
    PUSH32(esp, 0x002902B4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002902B4: ;
    PUSH32(esp, 0x261480);
    PUSH32(esp, 0x002902BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002902BE: ;
    PUSH32(esp, 0x289440);
    PUSH32(esp, 0x002902C8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002902C8: ;
    PUSH32(esp, 0x2817C0);
    PUSH32(esp, 0x002902D2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002902D2: ;
    PUSH32(esp, 0x286310);
    PUSH32(esp, 0x002902DCu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002902DC: ;
    PUSH32(esp, 0x289490);
    PUSH32(esp, 0x002902E6u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002902E6: ;
    PUSH32(esp, 0x261580);
    PUSH32(esp, 0x002902F0u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002902F0: ;
    PUSH32(esp, 0x286360);
    PUSH32(esp, 0x002902FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002902FA: ;
    PUSH32(esp, 0x276970);
    PUSH32(esp, 0x00290304u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290304: ;
    PUSH32(esp, 0x261610);
    PUSH32(esp, 0x0029030Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029030E: ;
    PUSH32(esp, 0x281810);
    PUSH32(esp, 0x00290318u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290318: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x2863B0);
    PUSH32(esp, 0x00290325u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290325: ;
    PUSH32(esp, 0x2887B0);
    PUSH32(esp, 0x0029032Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029032F: ;
    PUSH32(esp, 0x28DF40);
    PUSH32(esp, 0x00290339u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290339: ;
    PUSH32(esp, 0x28E5D0);
    PUSH32(esp, 0x00290343u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290343: ;
    PUSH32(esp, 0x281860);
    PUSH32(esp, 0x0029034Du); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029034D: ;
    PUSH32(esp, 0x287890);
    PUSH32(esp, 0x00290357u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290357: ;
    PUSH32(esp, 0x2894F0);
    PUSH32(esp, 0x00290361u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290361: ;
    PUSH32(esp, 0x28DC60);
    PUSH32(esp, 0x0029036Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029036B: ;
    PUSH32(esp, 0x276AD0);
    PUSH32(esp, 0x00290375u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290375: ;
    PUSH32(esp, 0x261930);
    PUSH32(esp, 0x0029037Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029037F: ;
    PUSH32(esp, 0x27C270);
    PUSH32(esp, 0x00290389u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290389: ;
    PUSH32(esp, 0x27C220);
    PUSH32(esp, 0x00290393u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290393: ;
    PUSH32(esp, 0x261980);
    PUSH32(esp, 0x0029039Du); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029039D: ;
    PUSH32(esp, 0x261A30);
    PUSH32(esp, 0x002903A7u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002903A7: ;
    PUSH32(esp, 0x27C2E0);
    PUSH32(esp, 0x002903B1u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002903B1: ;
    PUSH32(esp, 0x286410);
    PUSH32(esp, 0x002903BBu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002903BB: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x287900);
    PUSH32(esp, 0x002903C8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002903C8: ;
    PUSH32(esp, 0x289540);
    PUSH32(esp, 0x002903D2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002903D2: ;
    PUSH32(esp, 0x256A20);
    PUSH32(esp, 0x002903DCu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002903DC: ;
    PUSH32(esp, 0x28E620);
    PUSH32(esp, 0x002903E6u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002903E6: ;
    PUSH32(esp, 0x28F150);
    PUSH32(esp, 0x002903F0u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002903F0: ;
    PUSH32(esp, 0x276CC0);
    PUSH32(esp, 0x002903FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002903FA: ;
    PUSH32(esp, 0x281920);
    PUSH32(esp, 0x00290404u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290404: ;
    PUSH32(esp, 0x287950);
    PUSH32(esp, 0x0029040Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029040E: ;
    PUSH32(esp, 0x2818D0);
    PUSH32(esp, 0x00290418u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290418: ;
    PUSH32(esp, 0x28C990);
    PUSH32(esp, 0x00290422u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290422: ;
    PUSH32(esp, 0x28DFA0);
    PUSH32(esp, 0x0029042Cu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029042C: ;
    PUSH32(esp, 0x27C4F0);
    PUSH32(esp, 0x00290436u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290436: ;
    PUSH32(esp, 0x286470);
    PUSH32(esp, 0x00290440u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290440: ;
    PUSH32(esp, 0x261DE0);
    PUSH32(esp, 0x0029044Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029044A: ;
    PUSH32(esp, 0x27C560);
    PUSH32(esp, 0x00290454u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290454: ;
    PUSH32(esp, 0x257030);
    PUSH32(esp, 0x0029045Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029045E: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x276E80);
    PUSH32(esp, 0x0029046Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029046B: ;
    PUSH32(esp, 0x2819D0);
    PUSH32(esp, 0x00290475u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290475: ;
    PUSH32(esp, 0x2879B0);
    PUSH32(esp, 0x0029047Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029047F: ;
    PUSH32(esp, 0x2895A0);
    PUSH32(esp, 0x00290489u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290489: ;
    PUSH32(esp, 0x28DCE0);
    PUSH32(esp, 0x00290493u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290493: ;
    PUSH32(esp, 0x276DD0);
    PUSH32(esp, 0x0029049Du); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029049D: ;
    PUSH32(esp, 0x28F8C0);
    PUSH32(esp, 0x002904A7u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002904A7: ;
    PUSH32(esp, 0x28F9C0);
    PUSH32(esp, 0x002904B1u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002904B1: ;
    PUSH32(esp, 0x28E690);
    PUSH32(esp, 0x002904BBu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002904BB: ;
    PUSH32(esp, 0x28F330);
    PUSH32(esp, 0x002904C5u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002904C5: ;
    PUSH32(esp, 0x281AA0);
    PUSH32(esp, 0x002904CFu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002904CF: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00290023
 * Original: 0x00290023 - 0x002904D3 (1200 bytes, 244 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290023(void)
{

loc_00290023: ;
    PUSH32(esp, 0x00290028u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290028: ;
    PUSH32(esp, 0x27B7C0);
    PUSH32(esp, 0x00290032u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290032: ;
    PUSH32(esp, 0x2813C0);
    PUSH32(esp, 0x0029003Cu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029003C: ;
    PUSH32(esp, 0x285F50);
    PUSH32(esp, 0x00290046u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290046: ;
    PUSH32(esp, 0x2875A0);
    PUSH32(esp, 0x00290050u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290050: ;
    PUSH32(esp, 0x2892C0);
    PUSH32(esp, 0x0029005Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029005A: ;
    PUSH32(esp, 0x25FA40);
    PUSH32(esp, 0x00290064u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290064: ;
    PUSH32(esp, 0x27B8D0);
    PUSH32(esp, 0x0029006Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029006E: ;
    PUSH32(esp, 0x27B880);
    PUSH32(esp, 0x00290078u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290078: ;
    PUSH32(esp, 0x285FA0);
    PUSH32(esp, 0x00290082u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290082: ;
    PUSH32(esp, 0x25FB40);
    PUSH32(esp, 0x0029008Cu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029008C: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x2875F0);
    PUSH32(esp, 0x00290099u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290099: ;
    PUSH32(esp, 0x25FC20);
    PUSH32(esp, 0x002900A3u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002900A3: ;
    PUSH32(esp, 0x27B9B0);
    PUSH32(esp, 0x002900ADu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002900AD: ;
    PUSH32(esp, 0x285FF0);
    PUSH32(esp, 0x002900B7u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002900B7: ;
    PUSH32(esp, 0x287650);
    PUSH32(esp, 0x002900C1u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002900C1: ;
    PUSH32(esp, 0x2876A0);
    PUSH32(esp, 0x002900CBu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002900CB: ;
    PUSH32(esp, 0x25FCD0);
    PUSH32(esp, 0x002900D5u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002900D5: ;
    PUSH32(esp, 0x286040);
    PUSH32(esp, 0x002900DFu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002900DF: ;
    PUSH32(esp, 0x288370);
    PUSH32(esp, 0x002900E9u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002900E9: ;
    PUSH32(esp, 0x286090);
    PUSH32(esp, 0x002900F3u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002900F3: ;
    PUSH32(esp, 0x2860E0);
    PUSH32(esp, 0x002900FDu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002900FD: ;
    PUSH32(esp, 0x281570);
    PUSH32(esp, 0x00290107u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290107: ;
    PUSH32(esp, 0x286130);
    PUSH32(esp, 0x00290111u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290111: ;
    PUSH32(esp, 0x28F810);
    PUSH32(esp, 0x0029011Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029011B: ;
    PUSH32(esp, 0x28E190);
    PUSH32(esp, 0x00290125u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290125: ;
    PUSH32(esp, 0x288400);
    PUSH32(esp, 0x0029012Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029012F: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x286180);
    PUSH32(esp, 0x0029013Cu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029013C: ;
    PUSH32(esp, 0x28DBB0);
    PUSH32(esp, 0x00290146u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290146: ;
    PUSH32(esp, 0x289330);
    PUSH32(esp, 0x00290150u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290150: ;
    PUSH32(esp, 0x28F2E0);
    PUSH32(esp, 0x0029015Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029015A: ;
    PUSH32(esp, 0x2602E0);
    PUSH32(esp, 0x00290164u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290164: ;
    PUSH32(esp, 0x288450);
    PUSH32(esp, 0x0029016Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029016E: ;
    PUSH32(esp, 0x260330);
    PUSH32(esp, 0x00290178u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290178: ;
    PUSH32(esp, 0x2884A0);
    PUSH32(esp, 0x00290182u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290182: ;
    PUSH32(esp, 0x287780);
    PUSH32(esp, 0x0029018Cu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029018C: ;
    PUSH32(esp, 0x28F100);
    PUSH32(esp, 0x00290196u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290196: ;
    PUSH32(esp, 0x289390);
    PUSH32(esp, 0x002901A0u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002901A0: ;
    PUSH32(esp, 0x254F90);
    PUSH32(esp, 0x002901AAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002901AA: ;
    PUSH32(esp, 0x275DF0);
    PUSH32(esp, 0x002901B4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002901B4: ;
    PUSH32(esp, 0x281620);
    PUSH32(esp, 0x002901BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002901BE: ;
    PUSH32(esp, 0x2861D0);
    PUSH32(esp, 0x002901C8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002901C8: ;
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x002901D2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002901D2: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x27BDC0);
    PUSH32(esp, 0x002901DFu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002901DF: ;
    PUSH32(esp, 0x286220);
    PUSH32(esp, 0x002901E9u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002901E9: ;
    PUSH32(esp, 0x286290);
    PUSH32(esp, 0x002901F3u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002901F3: ;
    PUSH32(esp, 0x288510);
    PUSH32(esp, 0x002901FDu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002901FD: ;
    PUSH32(esp, 0x28F970);
    PUSH32(esp, 0x00290207u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290207: ;
    PUSH32(esp, 0x2893F0);
    PUSH32(esp, 0x00290211u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290211: ;
    PUSH32(esp, 0x28DC00);
    PUSH32(esp, 0x0029021Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029021B: ;
    PUSH32(esp, 0x281700);
    PUSH32(esp, 0x00290225u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290225: ;
    PUSH32(esp, 0x2606B0);
    PUSH32(esp, 0x0029022Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029022F: ;
    PUSH32(esp, 0x288760);
    PUSH32(esp, 0x00290239u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290239: ;
    PUSH32(esp, 0x276080);
    PUSH32(esp, 0x00290243u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290243: ;
    PUSH32(esp, 0x281750);
    PUSH32(esp, 0x0029024Du); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029024D: ;
    PUSH32(esp, 0x260840);
    PUSH32(esp, 0x00290257u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290257: ;
    PUSH32(esp, 0x27BE80);
    PUSH32(esp, 0x00290261u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290261: ;
    PUSH32(esp, 0x276140);
    PUSH32(esp, 0x0029026Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029026B: ;
    PUSH32(esp, 0x2608E0);
    PUSH32(esp, 0x00290275u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290275: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x27BF50);
    PUSH32(esp, 0x00290282u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290282: ;
    PUSH32(esp, 0x28DEB0);
    PUSH32(esp, 0x0029028Cu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029028C: ;
    PUSH32(esp, 0x260B90);
    PUSH32(esp, 0x00290296u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290296: ;
    PUSH32(esp, 0x27BFA0);
    PUSH32(esp, 0x002902A0u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002902A0: ;
    PUSH32(esp, 0x28E1E0);
    PUSH32(esp, 0x002902AAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002902AA: ;
    PUSH32(esp, 0x28F910);
    PUSH32(esp, 0x002902B4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002902B4: ;
    PUSH32(esp, 0x261480);
    PUSH32(esp, 0x002902BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002902BE: ;
    PUSH32(esp, 0x289440);
    PUSH32(esp, 0x002902C8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002902C8: ;
    PUSH32(esp, 0x2817C0);
    PUSH32(esp, 0x002902D2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002902D2: ;
    PUSH32(esp, 0x286310);
    PUSH32(esp, 0x002902DCu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002902DC: ;
    PUSH32(esp, 0x289490);
    PUSH32(esp, 0x002902E6u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002902E6: ;
    PUSH32(esp, 0x261580);
    PUSH32(esp, 0x002902F0u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002902F0: ;
    PUSH32(esp, 0x286360);
    PUSH32(esp, 0x002902FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002902FA: ;
    PUSH32(esp, 0x276970);
    PUSH32(esp, 0x00290304u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290304: ;
    PUSH32(esp, 0x261610);
    PUSH32(esp, 0x0029030Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029030E: ;
    PUSH32(esp, 0x281810);
    PUSH32(esp, 0x00290318u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290318: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x2863B0);
    PUSH32(esp, 0x00290325u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290325: ;
    PUSH32(esp, 0x2887B0);
    PUSH32(esp, 0x0029032Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029032F: ;
    PUSH32(esp, 0x28DF40);
    PUSH32(esp, 0x00290339u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290339: ;
    PUSH32(esp, 0x28E5D0);
    PUSH32(esp, 0x00290343u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290343: ;
    PUSH32(esp, 0x281860);
    PUSH32(esp, 0x0029034Du); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029034D: ;
    PUSH32(esp, 0x287890);
    PUSH32(esp, 0x00290357u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290357: ;
    PUSH32(esp, 0x2894F0);
    PUSH32(esp, 0x00290361u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290361: ;
    PUSH32(esp, 0x28DC60);
    PUSH32(esp, 0x0029036Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029036B: ;
    PUSH32(esp, 0x276AD0);
    PUSH32(esp, 0x00290375u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290375: ;
    PUSH32(esp, 0x261930);
    PUSH32(esp, 0x0029037Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029037F: ;
    PUSH32(esp, 0x27C270);
    PUSH32(esp, 0x00290389u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290389: ;
    PUSH32(esp, 0x27C220);
    PUSH32(esp, 0x00290393u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290393: ;
    PUSH32(esp, 0x261980);
    PUSH32(esp, 0x0029039Du); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029039D: ;
    PUSH32(esp, 0x261A30);
    PUSH32(esp, 0x002903A7u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002903A7: ;
    PUSH32(esp, 0x27C2E0);
    PUSH32(esp, 0x002903B1u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002903B1: ;
    PUSH32(esp, 0x286410);
    PUSH32(esp, 0x002903BBu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002903BB: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x287900);
    PUSH32(esp, 0x002903C8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002903C8: ;
    PUSH32(esp, 0x289540);
    PUSH32(esp, 0x002903D2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002903D2: ;
    PUSH32(esp, 0x256A20);
    PUSH32(esp, 0x002903DCu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002903DC: ;
    PUSH32(esp, 0x28E620);
    PUSH32(esp, 0x002903E6u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002903E6: ;
    PUSH32(esp, 0x28F150);
    PUSH32(esp, 0x002903F0u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002903F0: ;
    PUSH32(esp, 0x276CC0);
    PUSH32(esp, 0x002903FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002903FA: ;
    PUSH32(esp, 0x281920);
    PUSH32(esp, 0x00290404u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290404: ;
    PUSH32(esp, 0x287950);
    PUSH32(esp, 0x0029040Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029040E: ;
    PUSH32(esp, 0x2818D0);
    PUSH32(esp, 0x00290418u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290418: ;
    PUSH32(esp, 0x28C990);
    PUSH32(esp, 0x00290422u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290422: ;
    PUSH32(esp, 0x28DFA0);
    PUSH32(esp, 0x0029042Cu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029042C: ;
    PUSH32(esp, 0x27C4F0);
    PUSH32(esp, 0x00290436u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290436: ;
    PUSH32(esp, 0x286470);
    PUSH32(esp, 0x00290440u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290440: ;
    PUSH32(esp, 0x261DE0);
    PUSH32(esp, 0x0029044Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029044A: ;
    PUSH32(esp, 0x27C560);
    PUSH32(esp, 0x00290454u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290454: ;
    PUSH32(esp, 0x257030);
    PUSH32(esp, 0x0029045Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029045E: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x276E80);
    PUSH32(esp, 0x0029046Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029046B: ;
    PUSH32(esp, 0x2819D0);
    PUSH32(esp, 0x00290475u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290475: ;
    PUSH32(esp, 0x2879B0);
    PUSH32(esp, 0x0029047Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029047F: ;
    PUSH32(esp, 0x2895A0);
    PUSH32(esp, 0x00290489u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290489: ;
    PUSH32(esp, 0x28DCE0);
    PUSH32(esp, 0x00290493u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290493: ;
    PUSH32(esp, 0x276DD0);
    PUSH32(esp, 0x0029049Du); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029049D: ;
    PUSH32(esp, 0x28F8C0);
    PUSH32(esp, 0x002904A7u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002904A7: ;
    PUSH32(esp, 0x28F9C0);
    PUSH32(esp, 0x002904B1u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002904B1: ;
    PUSH32(esp, 0x28E690);
    PUSH32(esp, 0x002904BBu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002904BB: ;
    PUSH32(esp, 0x28F330);
    PUSH32(esp, 0x002904C5u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002904C5: ;
    PUSH32(esp, 0x281AA0);
    PUSH32(esp, 0x002904CFu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002904CF: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00290028
 * Original: 0x00290028 - 0x002904D3 (1195 bytes, 243 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290028(void)
{

loc_00290028: ;
    PUSH32(esp, 0x27B7C0);
    PUSH32(esp, 0x00290032u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290032: ;
    PUSH32(esp, 0x2813C0);
    PUSH32(esp, 0x0029003Cu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029003C: ;
    PUSH32(esp, 0x285F50);
    PUSH32(esp, 0x00290046u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290046: ;
    PUSH32(esp, 0x2875A0);
    PUSH32(esp, 0x00290050u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290050: ;
    PUSH32(esp, 0x2892C0);
    PUSH32(esp, 0x0029005Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029005A: ;
    PUSH32(esp, 0x25FA40);
    PUSH32(esp, 0x00290064u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290064: ;
    PUSH32(esp, 0x27B8D0);
    PUSH32(esp, 0x0029006Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029006E: ;
    PUSH32(esp, 0x27B880);
    PUSH32(esp, 0x00290078u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290078: ;
    PUSH32(esp, 0x285FA0);
    PUSH32(esp, 0x00290082u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290082: ;
    PUSH32(esp, 0x25FB40);
    PUSH32(esp, 0x0029008Cu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029008C: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x2875F0);
    PUSH32(esp, 0x00290099u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290099: ;
    PUSH32(esp, 0x25FC20);
    PUSH32(esp, 0x002900A3u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002900A3: ;
    PUSH32(esp, 0x27B9B0);
    PUSH32(esp, 0x002900ADu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002900AD: ;
    PUSH32(esp, 0x285FF0);
    PUSH32(esp, 0x002900B7u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002900B7: ;
    PUSH32(esp, 0x287650);
    PUSH32(esp, 0x002900C1u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002900C1: ;
    PUSH32(esp, 0x2876A0);
    PUSH32(esp, 0x002900CBu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002900CB: ;
    PUSH32(esp, 0x25FCD0);
    PUSH32(esp, 0x002900D5u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002900D5: ;
    PUSH32(esp, 0x286040);
    PUSH32(esp, 0x002900DFu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002900DF: ;
    PUSH32(esp, 0x288370);
    PUSH32(esp, 0x002900E9u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002900E9: ;
    PUSH32(esp, 0x286090);
    PUSH32(esp, 0x002900F3u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002900F3: ;
    PUSH32(esp, 0x2860E0);
    PUSH32(esp, 0x002900FDu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002900FD: ;
    PUSH32(esp, 0x281570);
    PUSH32(esp, 0x00290107u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290107: ;
    PUSH32(esp, 0x286130);
    PUSH32(esp, 0x00290111u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290111: ;
    PUSH32(esp, 0x28F810);
    PUSH32(esp, 0x0029011Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029011B: ;
    PUSH32(esp, 0x28E190);
    PUSH32(esp, 0x00290125u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290125: ;
    PUSH32(esp, 0x288400);
    PUSH32(esp, 0x0029012Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029012F: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x286180);
    PUSH32(esp, 0x0029013Cu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029013C: ;
    PUSH32(esp, 0x28DBB0);
    PUSH32(esp, 0x00290146u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290146: ;
    PUSH32(esp, 0x289330);
    PUSH32(esp, 0x00290150u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290150: ;
    PUSH32(esp, 0x28F2E0);
    PUSH32(esp, 0x0029015Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029015A: ;
    PUSH32(esp, 0x2602E0);
    PUSH32(esp, 0x00290164u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290164: ;
    PUSH32(esp, 0x288450);
    PUSH32(esp, 0x0029016Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029016E: ;
    PUSH32(esp, 0x260330);
    PUSH32(esp, 0x00290178u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290178: ;
    PUSH32(esp, 0x2884A0);
    PUSH32(esp, 0x00290182u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290182: ;
    PUSH32(esp, 0x287780);
    PUSH32(esp, 0x0029018Cu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029018C: ;
    PUSH32(esp, 0x28F100);
    PUSH32(esp, 0x00290196u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290196: ;
    PUSH32(esp, 0x289390);
    PUSH32(esp, 0x002901A0u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002901A0: ;
    PUSH32(esp, 0x254F90);
    PUSH32(esp, 0x002901AAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002901AA: ;
    PUSH32(esp, 0x275DF0);
    PUSH32(esp, 0x002901B4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002901B4: ;
    PUSH32(esp, 0x281620);
    PUSH32(esp, 0x002901BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002901BE: ;
    PUSH32(esp, 0x2861D0);
    PUSH32(esp, 0x002901C8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002901C8: ;
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x002901D2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002901D2: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x27BDC0);
    PUSH32(esp, 0x002901DFu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002901DF: ;
    PUSH32(esp, 0x286220);
    PUSH32(esp, 0x002901E9u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002901E9: ;
    PUSH32(esp, 0x286290);
    PUSH32(esp, 0x002901F3u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002901F3: ;
    PUSH32(esp, 0x288510);
    PUSH32(esp, 0x002901FDu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002901FD: ;
    PUSH32(esp, 0x28F970);
    PUSH32(esp, 0x00290207u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290207: ;
    PUSH32(esp, 0x2893F0);
    PUSH32(esp, 0x00290211u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290211: ;
    PUSH32(esp, 0x28DC00);
    PUSH32(esp, 0x0029021Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029021B: ;
    PUSH32(esp, 0x281700);
    PUSH32(esp, 0x00290225u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290225: ;
    PUSH32(esp, 0x2606B0);
    PUSH32(esp, 0x0029022Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029022F: ;
    PUSH32(esp, 0x288760);
    PUSH32(esp, 0x00290239u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290239: ;
    PUSH32(esp, 0x276080);
    PUSH32(esp, 0x00290243u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290243: ;
    PUSH32(esp, 0x281750);
    PUSH32(esp, 0x0029024Du); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029024D: ;
    PUSH32(esp, 0x260840);
    PUSH32(esp, 0x00290257u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290257: ;
    PUSH32(esp, 0x27BE80);
    PUSH32(esp, 0x00290261u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290261: ;
    PUSH32(esp, 0x276140);
    PUSH32(esp, 0x0029026Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029026B: ;
    PUSH32(esp, 0x2608E0);
    PUSH32(esp, 0x00290275u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290275: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x27BF50);
    PUSH32(esp, 0x00290282u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290282: ;
    PUSH32(esp, 0x28DEB0);
    PUSH32(esp, 0x0029028Cu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029028C: ;
    PUSH32(esp, 0x260B90);
    PUSH32(esp, 0x00290296u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290296: ;
    PUSH32(esp, 0x27BFA0);
    PUSH32(esp, 0x002902A0u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002902A0: ;
    PUSH32(esp, 0x28E1E0);
    PUSH32(esp, 0x002902AAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002902AA: ;
    PUSH32(esp, 0x28F910);
    PUSH32(esp, 0x002902B4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002902B4: ;
    PUSH32(esp, 0x261480);
    PUSH32(esp, 0x002902BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002902BE: ;
    PUSH32(esp, 0x289440);
    PUSH32(esp, 0x002902C8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002902C8: ;
    PUSH32(esp, 0x2817C0);
    PUSH32(esp, 0x002902D2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002902D2: ;
    PUSH32(esp, 0x286310);
    PUSH32(esp, 0x002902DCu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002902DC: ;
    PUSH32(esp, 0x289490);
    PUSH32(esp, 0x002902E6u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002902E6: ;
    PUSH32(esp, 0x261580);
    PUSH32(esp, 0x002902F0u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002902F0: ;
    PUSH32(esp, 0x286360);
    PUSH32(esp, 0x002902FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002902FA: ;
    PUSH32(esp, 0x276970);
    PUSH32(esp, 0x00290304u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290304: ;
    PUSH32(esp, 0x261610);
    PUSH32(esp, 0x0029030Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029030E: ;
    PUSH32(esp, 0x281810);
    PUSH32(esp, 0x00290318u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290318: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x2863B0);
    PUSH32(esp, 0x00290325u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290325: ;
    PUSH32(esp, 0x2887B0);
    PUSH32(esp, 0x0029032Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029032F: ;
    PUSH32(esp, 0x28DF40);
    PUSH32(esp, 0x00290339u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290339: ;
    PUSH32(esp, 0x28E5D0);
    PUSH32(esp, 0x00290343u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290343: ;
    PUSH32(esp, 0x281860);
    PUSH32(esp, 0x0029034Du); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029034D: ;
    PUSH32(esp, 0x287890);
    PUSH32(esp, 0x00290357u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290357: ;
    PUSH32(esp, 0x2894F0);
    PUSH32(esp, 0x00290361u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290361: ;
    PUSH32(esp, 0x28DC60);
    PUSH32(esp, 0x0029036Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029036B: ;
    PUSH32(esp, 0x276AD0);
    PUSH32(esp, 0x00290375u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290375: ;
    PUSH32(esp, 0x261930);
    PUSH32(esp, 0x0029037Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029037F: ;
    PUSH32(esp, 0x27C270);
    PUSH32(esp, 0x00290389u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290389: ;
    PUSH32(esp, 0x27C220);
    PUSH32(esp, 0x00290393u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290393: ;
    PUSH32(esp, 0x261980);
    PUSH32(esp, 0x0029039Du); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029039D: ;
    PUSH32(esp, 0x261A30);
    PUSH32(esp, 0x002903A7u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002903A7: ;
    PUSH32(esp, 0x27C2E0);
    PUSH32(esp, 0x002903B1u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002903B1: ;
    PUSH32(esp, 0x286410);
    PUSH32(esp, 0x002903BBu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002903BB: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x287900);
    PUSH32(esp, 0x002903C8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002903C8: ;
    PUSH32(esp, 0x289540);
    PUSH32(esp, 0x002903D2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002903D2: ;
    PUSH32(esp, 0x256A20);
    PUSH32(esp, 0x002903DCu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002903DC: ;
    PUSH32(esp, 0x28E620);
    PUSH32(esp, 0x002903E6u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002903E6: ;
    PUSH32(esp, 0x28F150);
    PUSH32(esp, 0x002903F0u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002903F0: ;
    PUSH32(esp, 0x276CC0);
    PUSH32(esp, 0x002903FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002903FA: ;
    PUSH32(esp, 0x281920);
    PUSH32(esp, 0x00290404u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290404: ;
    PUSH32(esp, 0x287950);
    PUSH32(esp, 0x0029040Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029040E: ;
    PUSH32(esp, 0x2818D0);
    PUSH32(esp, 0x00290418u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290418: ;
    PUSH32(esp, 0x28C990);
    PUSH32(esp, 0x00290422u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290422: ;
    PUSH32(esp, 0x28DFA0);
    PUSH32(esp, 0x0029042Cu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029042C: ;
    PUSH32(esp, 0x27C4F0);
    PUSH32(esp, 0x00290436u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290436: ;
    PUSH32(esp, 0x286470);
    PUSH32(esp, 0x00290440u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290440: ;
    PUSH32(esp, 0x261DE0);
    PUSH32(esp, 0x0029044Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029044A: ;
    PUSH32(esp, 0x27C560);
    PUSH32(esp, 0x00290454u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290454: ;
    PUSH32(esp, 0x257030);
    PUSH32(esp, 0x0029045Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029045E: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x276E80);
    PUSH32(esp, 0x0029046Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029046B: ;
    PUSH32(esp, 0x2819D0);
    PUSH32(esp, 0x00290475u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290475: ;
    PUSH32(esp, 0x2879B0);
    PUSH32(esp, 0x0029047Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029047F: ;
    PUSH32(esp, 0x2895A0);
    PUSH32(esp, 0x00290489u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290489: ;
    PUSH32(esp, 0x28DCE0);
    PUSH32(esp, 0x00290493u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290493: ;
    PUSH32(esp, 0x276DD0);
    PUSH32(esp, 0x0029049Du); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029049D: ;
    PUSH32(esp, 0x28F8C0);
    PUSH32(esp, 0x002904A7u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002904A7: ;
    PUSH32(esp, 0x28F9C0);
    PUSH32(esp, 0x002904B1u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002904B1: ;
    PUSH32(esp, 0x28E690);
    PUSH32(esp, 0x002904BBu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002904BB: ;
    PUSH32(esp, 0x28F330);
    PUSH32(esp, 0x002904C5u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002904C5: ;
    PUSH32(esp, 0x281AA0);
    PUSH32(esp, 0x002904CFu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002904CF: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002904E0
 * Original: 0x002904E0 - 0x002904FE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002904E0(void)
{

loc_002904E0: ;
    PUSH32(esp, 0x28F970);
    PUSH32(esp, 0x002904EAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002904EA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BDA98);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002904FDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002904FD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00290500
 * Original: 0x00290500 - 0x00290514 (20 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290500(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00290500: ;
    PUSH32(esp, 0x00290505u); RECOMP_ABI_CALL(0x001E62D0u, sub_001E62D0); /* call 0x001E62D0 */

loc_00290505: ;
    PUSH32(esp, 0x0029050Au); RECOMP_ABI_CALL(0x002A0900u, sub_002A0900); /* call 0x002A0900 */

loc_0029050A: ;
    PUSH32(esp, 0x0029050Fu); RECOMP_ABI_CALL(0x0028FD60u, sub_0028FD60); /* call 0x0028FD60 */

loc_0029050F: ;
    g_seh_ebp = ebp; sub_001A9C20(); return; /* tail jmp 0x001A9C20 */

}

/**
 * sub_00290520
 * Original: 0x00290520 - 0x00290526 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290520(void)
{

loc_00290520: ;
    eax = MEM32(0x5BE690);
    esp += 4; return; /* ret */

}

/**
 * sub_00290530
 * Original: 0x00290530 - 0x00290536 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290530(void)
{

loc_00290530: ;
    eax = MEM32(0x5BE4D0);
    esp += 4; return; /* ret */

}

/**
 * sub_00290540
 * Original: 0x00290540 - 0x00290546 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290540(void)
{

loc_00290540: ;
    eax = MEM32(0x5BE63C);
    esp += 4; return; /* ret */

}

/**
 * sub_00290550
 * Original: 0x00290550 - 0x002905A9 (89 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00290550(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */

loc_00290550: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE4CC);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00290560u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00290560: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x471A50);
    ecx = esi;
    ebp = eax;
    PUSH32(esp, 0x00290570u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00290570: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00290578u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00290578: ;
    edi = eax;
    PUSH32(esp, 0x0029057Fu); RECOMP_ABI_CALL(0x001AA8A0u, sub_001AA8A0); /* call 0x001AA8A0 */

loc_0029057F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x471A4C);
    PUSH32(esp, 0x471A48);
    PUSH32(esp, 0x471A44);
    ecx = esi;
    MEM32(edi + 0x38) = eax;
    MEM8(edi + 0x26) = 0;
    MEM8(edi + 0x28) = 1;
    MEM8(edi + 0x27) = 1;
    PUSH32(esp, 0x002905A5u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002905A5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002905B0
 * Original: 0x002905B0 - 0x002905D3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002905B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002905B0: ;
    eax = MEM32(0x5BE4D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002905D2; /* jne: not equal / not zero */

loc_002905B9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002905C4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002905C4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002905CAu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002905CA: ;
    esp = esp + 8;
    MEM32(0x5BE4D0) = eax;

loc_002905D2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002905E0
 * Original: 0x002905E0 - 0x002905EC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002905E0(void)
{

loc_002905E0: ;
    PUSH32(esp, 0x29E190);
    PUSH32(esp, 0x002905EAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002905EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002905F0
 * Original: 0x002905F0 - 0x00290613 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002905F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002905F0: ;
    eax = MEM32(0x5BE4D4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00290612; /* jne: not equal / not zero */

loc_002905F9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00290604u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00290604: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029060Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0029060A: ;
    esp = esp + 8;
    MEM32(0x5BE4D4) = eax;

loc_00290612: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00290620
 * Original: 0x00290620 - 0x00290625 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290620(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00290620: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x54)); return; /* indirect tail jmp */

}

/**
 * sub_00290630
 * Original: 0x00290630 - 0x00290638 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290630(void)
{

loc_00290630: ;
    eax = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00290640
 * Original: 0x00290640 - 0x0029064C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290640(void)
{

loc_00290640: ;
    PUSH32(esp, 0x29E1D0);
    PUSH32(esp, 0x0029064Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029064A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00290650
 * Original: 0x00290650 - 0x002906F5 (165 bytes, 54 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290650(void)
{

loc_00290650: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE4D4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00290660u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00290660: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x471AA8);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00290670u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00290670: ;
    eax = edi + 2;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0029067Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029067B: ;
    PUSH32(esp, 0x27F);
    ecx = eax;
    PUSH32(esp, 0x00290687u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00290687: ;
    ecx = edi + 3;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00290692u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00290692: ;
    PUSH32(esp, 0x1BF);
    ecx = eax;
    PUSH32(esp, 0x0029069Eu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0029069E: ;
    edx = edi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002906A9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002906A9: ;
    ebx = eax;
    PUSH32(esp, 0x002906B0u); RECOMP_ABI_CALL(0x001AABF0u, sub_001AABF0); /* call 0x001AABF0 */

loc_002906B0: ;
    MEM32(ebx + 0x38) = eax;
    SET_LO8(eax, 1);
    MEM8(ebx + 0x28) = LO8(eax);
    MEM8(ebx + 0x27) = LO8(eax);
    eax = edi + 6;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebx + 0x26) = 0;
    MEM8(ebx + 0x2C) = 3;
    PUSH32(esp, 0x002906CEu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002906CE: ;
    PUSH32(esp, 0x3F800000);
    ecx = eax;
    PUSH32(esp, 0x002906DAu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002906DA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x471A8C);
    PUSH32(esp, 0x471A70);
    PUSH32(esp, 0x471A54);
    ecx = esi;
    PUSH32(esp, 0x002906F1u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002906F1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00290700
 * Original: 0x00290700 - 0x0029070C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290700(void)
{

loc_00290700: ;
    PUSH32(esp, 0x29E270);
    PUSH32(esp, 0x0029070Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029070A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00290710
 * Original: 0x00290710 - 0x00290864 (340 bytes, 114 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290710(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00290710: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE4DC);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00290721u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00290721: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x471B54);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00290731u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00290731: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00290739u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00290739: ;
    ebx = eax;
    PUSH32(esp, 0x00290740u); RECOMP_ABI_CALL(0x00223090u, sub_00223090); /* call 0x00223090 */

loc_00290740: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0029074Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029074E: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x00290757u); RECOMP_ABI_CALL(0x00217FA0u, sub_00217FA0); /* call 0x00217FA0 */

loc_00290757: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00290762u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00290762: ;
    PUSH32(esp, 0x3C6EAC);
    ecx = eax;
    PUSH32(esp, 0x0029076Eu); RECOMP_ABI_CALL(0x00217FA0u, sub_00217FA0); /* call 0x00217FA0 */

loc_0029076E: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00290779u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00290779: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x00290782u); RECOMP_ABI_CALL(0x00217FA0u, sub_00217FA0); /* call 0x00217FA0 */

loc_00290782: ;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0029078Du); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029078D: ;
    ebp = eax;
    PUSH32(esp, 0x00290794u); RECOMP_ABI_CALL(0x00223090u, sub_00223090); /* call 0x00223090 */

loc_00290794: ;
    ecx = edi + 5;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    PUSH32(esp, 0x002907A2u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002907A2: ;
    ebp = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ebp;
    PUSH32(esp, 0x002907ADu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002907AD: ;
    edx = edi + 7;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(ebp + 0x26) = 0;
    MEM8(ebp + 0x28) = 4;
    MEM8(ebp + 0x27) = 4;
    MEM8(ebp + 0x2C) = 3;
    PUSH32(esp, 0x002907C8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002907C8: ;
    ebp = eax;
    PUSH32(esp, 0x002907CFu); RECOMP_ABI_CALL(0x001AB110u, sub_001AB110); /* call 0x001AB110 */

loc_002907CF: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 8;
    SET_LO8(ebx, 1);
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x002907E2u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002907E2: ;
    ebp = eax;
    PUSH32(esp, 0x002907E9u); RECOMP_ABI_CALL(0x001AB290u, sub_001AB290); /* call 0x001AB290 */

loc_002907E9: ;
    ecx = edi + 9;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x002907FAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002907FA: ;
    ebp = eax;
    PUSH32(esp, 0x00290801u); RECOMP_ABI_CALL(0x001AA9E0u, sub_001AA9E0); /* call 0x001AA9E0 */

loc_00290801: ;
    edx = edi + 0xA;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00290812u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00290812: ;
    ebp = eax;
    PUSH32(esp, 0x00290819u); RECOMP_ABI_CALL(0x001AB2C0u, sub_001AB2C0); /* call 0x001AB2C0 */

loc_00290819: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 0xB;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x0029082Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029082A: ;
    ebp = eax;
    PUSH32(esp, 0x00290831u); RECOMP_ABI_CALL(0x001AA8A0u, sub_001AA8A0); /* call 0x001AA8A0 */

loc_00290831: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x471B24);
    PUSH32(esp, 0x471AF4);
    PUSH32(esp, 0x471AC4);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x3C) = 0;
    MEM8(ebp + 0x26) = 0;
    MEM8(ebp + 0x28) = 4;
    MEM8(ebp + 0x27) = 4;
    MEM8(ebp + 0x2C) = 3;
    PUSH32(esp, 0x0029085Fu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0029085F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00290870
 * Original: 0x00290870 - 0x002908D2 (98 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290870(void)
{

loc_00290870: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE4E0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00290881u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00290881: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x471B90);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00290891u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00290891: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00290899u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00290899: ;
    ebx = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x002908AFu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_002908AF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x471B8C);
    PUSH32(esp, 0x471B88);
    PUSH32(esp, 0x471B84);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x1AA290;
    PUSH32(esp, 0x002908CDu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002908CD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002908E0
 * Original: 0x002908E0 - 0x002908EC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002908E0(void)
{

loc_002908E0: ;
    PUSH32(esp, 0x29E310);
    PUSH32(esp, 0x002908EAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002908EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002908F0
 * Original: 0x002908F0 - 0x00290929 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002908F0(void)
{

loc_002908F0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE4E4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002908FFu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002908FF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x471BA0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0029090Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0029090F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x471B9C);
    PUSH32(esp, 0x471B98);
    PUSH32(esp, 0x471B94);
    ecx = esi;
    PUSH32(esp, 0x00290926u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00290926: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00290930
 * Original: 0x00290930 - 0x0029093C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290930(void)
{

loc_00290930: ;
    PUSH32(esp, 0x29E360);
    PUSH32(esp, 0x0029093Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029093A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00290940
 * Original: 0x00290940 - 0x002909DC (156 bytes, 56 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290940(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00290940: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE4E8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00290951u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00290951: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x471BF8);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00290961u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00290961: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00290969u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00290969: ;
    ebx = eax;
    PUSH32(esp, 0x00290970u); RECOMP_ABI_CALL(0x001A4D50u, sub_001A4D50); /* call 0x001A4D50 */

loc_00290970: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 3;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x00290982u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00290982: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    SET_LO8(ebx, 0); /* xor self */
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    MEM8(eax + 0x2C) = 3;
    PUSH32(esp, 0x00290996u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00290996: ;
    edx = edi + 5;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002909A4u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002909A4: ;
    MEM8(eax + 0x26) = LO8(ebx);
    eax = edi + 6;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002909B2u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002909B2: ;
    ebp = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ebp;
    PUSH32(esp, 0x002909BDu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002909BD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x471BDC);
    PUSH32(esp, 0x471BC0);
    PUSH32(esp, 0x471BA4);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002909D7u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002909D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002909E0
 * Original: 0x002909E0 - 0x002909EC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002909E0(void)
{

loc_002909E0: ;
    PUSH32(esp, 0x29E430);
    PUSH32(esp, 0x002909EAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002909EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002909F0
 * Original: 0x002909F0 - 0x00290A13 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002909F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002909F0: ;
    eax = MEM32(0x5BE4F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00290A12; /* jne: not equal / not zero */

loc_002909F9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00290A04u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00290A04: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00290A0Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00290A0A: ;
    esp = esp + 8;
    MEM32(0x5BE4F4) = eax;

loc_00290A12: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00290A20
 * Original: 0x00290A20 - 0x00290A2C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290A20(void)
{

loc_00290A20: ;
    PUSH32(esp, 0x29FB90);
    PUSH32(esp, 0x00290A2Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290A2A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00290A30
 * Original: 0x00290A30 - 0x00290A53 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00290A30: ;
    eax = MEM32(0x5BE4F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00290A52; /* jne: not equal / not zero */

loc_00290A39: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00290A44u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00290A44: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00290A4Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00290A4A: ;
    esp = esp + 8;
    MEM32(0x5BE4F8) = eax;

loc_00290A52: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00290A60
 * Original: 0x00290A60 - 0x00290A6C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290A60(void)
{

loc_00290A60: ;
    PUSH32(esp, 0x29E480);
    PUSH32(esp, 0x00290A6Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290A6A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00290A70
 * Original: 0x00290A70 - 0x00290ABC (76 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290A70(void)
{

loc_00290A70: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE4F8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00290A7Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00290A7F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x471C20);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00290A8Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00290A8F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00290A97u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00290A97: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x00290AA2u); RECOMP_ABI_CALL(0x001E7D60u, sub_001E7D60); /* call 0x001E7D60 */

loc_00290AA2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x471C1C);
    PUSH32(esp, 0x471C18);
    PUSH32(esp, 0x471C14);
    ecx = esi;
    PUSH32(esp, 0x00290AB9u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00290AB9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00290AC0
 * Original: 0x00290AC0 - 0x00290AE3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00290AC0: ;
    eax = MEM32(0x5BE4FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00290AE2; /* jne: not equal / not zero */

loc_00290AC9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00290AD4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00290AD4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00290ADAu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00290ADA: ;
    esp = esp + 8;
    MEM32(0x5BE4FC) = eax;

loc_00290AE2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00290AF0
 * Original: 0x00290AF0 - 0x00290B13 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00290AF0: ;
    eax = MEM32(0x5BE50C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00290B12; /* jne: not equal / not zero */

loc_00290AF9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00290B04u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00290B04: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00290B0Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00290B0A: ;
    esp = esp + 8;
    MEM32(0x5BE50C) = eax;

loc_00290B12: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00290B20
 * Original: 0x00290B20 - 0x00290B2C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290B20(void)
{

loc_00290B20: ;
    PUSH32(esp, 0x29E5C0);
    PUSH32(esp, 0x00290B2Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290B2A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00290B30
 * Original: 0x00290B30 - 0x00290B53 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00290B30: ;
    eax = MEM32(0x5BE518);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00290B52; /* jne: not equal / not zero */

loc_00290B39: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00290B44u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00290B44: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00290B4Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00290B4A: ;
    esp = esp + 8;
    MEM32(0x5BE518) = eax;

loc_00290B52: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00290B60
 * Original: 0x00290B60 - 0x00290B6C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290B60(void)
{

loc_00290B60: ;
    PUSH32(esp, 0x29E610);
    PUSH32(esp, 0x00290B6Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290B6A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00290B70
 * Original: 0x00290B70 - 0x00290B98 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00290B70: ;
    eax = MEM32(0x5BE51C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00290B97; /* jne: not equal / not zero */

loc_00290B79: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x471C30);
    PUSH32(esp, 0x471C24);
    PUSH32(esp, 0x406360);
    PUSH32(esp, 0x00290B8Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_00290B8F: ;
    esp = esp + 0x10;
    MEM32(0x5BE51C) = eax;

loc_00290B97: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00290BA0
 * Original: 0x00290BA0 - 0x00290BC3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00290BA0: ;
    eax = MEM32(0x5BE524);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00290BC2; /* jne: not equal / not zero */

loc_00290BA9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00290BB4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00290BB4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00290BBAu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00290BBA: ;
    esp = esp + 8;
    MEM32(0x5BE524) = eax;

loc_00290BC2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00290BD0
 * Original: 0x00290BD0 - 0x00290BDC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290BD0(void)
{

loc_00290BD0: ;
    PUSH32(esp, 0x2A04E0);
    PUSH32(esp, 0x00290BDAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290BDA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00290BE0
 * Original: 0x00290BE0 - 0x00290C5E (126 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290BE0(void)
{

loc_00290BE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE524);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00290BF1u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00290BF1: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x471C60);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00290C01u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00290C01: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00290C09u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00290C09: ;
    ebx = eax;
    PUSH32(esp, 0x00290C10u); RECOMP_ABI_CALL(0x001AB0E0u, sub_001AB0E0); /* call 0x001AB0E0 */

loc_00290C10: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(ebx + 0x44) = 6;
    PUSH32(esp, 0x00290C25u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00290C25: ;
    ecx = esp + 0xC;
    ebx = eax;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00290C3Bu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00290C3B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x471C54);
    PUSH32(esp, 0x471C48);
    PUSH32(esp, 0x471C3C);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x290B70;
    PUSH32(esp, 0x00290C59u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00290C59: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00290C60
 * Original: 0x00290C60 - 0x00290C83 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00290C60: ;
    eax = MEM32(0x5BE528);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00290C82; /* jne: not equal / not zero */

loc_00290C69: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00290C74u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00290C74: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00290C7Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00290C7A: ;
    esp = esp + 8;
    MEM32(0x5BE528) = eax;

loc_00290C82: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00290C90
 * Original: 0x00290C90 - 0x00290C9C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290C90(void)
{

loc_00290C90: ;
    PUSH32(esp, 0x29E660);
    PUSH32(esp, 0x00290C9Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290C9A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00290CA0
 * Original: 0x00290CA0 - 0x00290CC3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00290CA0: ;
    eax = MEM32(0x5BE52C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00290CC2; /* jne: not equal / not zero */

loc_00290CA9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00290CB4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00290CB4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00290CBAu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00290CBA: ;
    esp = esp + 8;
    MEM32(0x5BE52C) = eax;

loc_00290CC2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00290CD0
 * Original: 0x00290CD0 - 0x00290CF3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00290CD0: ;
    eax = MEM32(0x5BE530);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00290CF2; /* jne: not equal / not zero */

loc_00290CD9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00290CE4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00290CE4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00290CEAu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00290CEA: ;
    esp = esp + 8;
    MEM32(0x5BE530) = eax;

loc_00290CF2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00290D00
 * Original: 0x00290D00 - 0x00290D76 (118 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290D00(void)
{

loc_00290D00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE538);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00290D11u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00290D11: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x471C84);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00290D21u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00290D21: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00290D29u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00290D29: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x00290D32u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00290D32: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00290D3Du); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00290D3D: ;
    ecx = esp + 0xC;
    ebx = eax;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x10) = 1;
    PUSH32(esp, 0x00290D53u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00290D53: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x471C7C);
    PUSH32(esp, 0x471C74);
    PUSH32(esp, 0x471C6C);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x1AA320;
    PUSH32(esp, 0x00290D71u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00290D71: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00290D80
 * Original: 0x00290D80 - 0x00290DA3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00290D80: ;
    eax = MEM32(0x5BE53C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00290DA2; /* jne: not equal / not zero */

loc_00290D89: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00290D94u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00290D94: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00290D9Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00290D9A: ;
    esp = esp + 8;
    MEM32(0x5BE53C) = eax;

loc_00290DA2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00290DB0
 * Original: 0x00290DB0 - 0x00290DBC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290DB0(void)
{

loc_00290DB0: ;
    PUSH32(esp, 0x29E710);
    PUSH32(esp, 0x00290DBAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290DBA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00290DC0
 * Original: 0x00290DC0 - 0x00290E4A (138 bytes, 44 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290DC0(void)
{

loc_00290DC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE540);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00290DD1u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00290DD1: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x471CD4);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00290DE1u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00290DE1: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00290DE9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00290DE9: ;
    ebx = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x10) = 1;
    PUSH32(esp, 0x00290DFFu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00290DFF: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x1AA320;
    PUSH32(esp, 0x00290E11u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00290E11: ;
    ebx = eax;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = ebx;
    MEM32(esp + 0x10) = 1;
    PUSH32(esp, 0x00290E27u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00290E27: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x471CBC);
    PUSH32(esp, 0x471CA4);
    PUSH32(esp, 0x471C8C);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x1AA320;
    PUSH32(esp, 0x00290E45u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00290E45: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00290E50
 * Original: 0x00290E50 - 0x00290E73 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00290E50: ;
    eax = MEM32(0x5BE544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00290E72; /* jne: not equal / not zero */

loc_00290E59: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00290E64u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00290E64: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00290E6Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00290E6A: ;
    esp = esp + 8;
    MEM32(0x5BE544) = eax;

loc_00290E72: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00290E80
 * Original: 0x00290E80 - 0x00290E8C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290E80(void)
{

loc_00290E80: ;
    PUSH32(esp, 0x29E760);
    PUSH32(esp, 0x00290E8Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00290E8A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00290E90
 * Original: 0x00290E90 - 0x00290EC9 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290E90(void)
{

loc_00290E90: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE544);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00290E9Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00290E9F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x471CF8);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00290EAFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00290EAF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x471CF4);
    PUSH32(esp, 0x471CF0);
    PUSH32(esp, 0x471CEC);
    ecx = esi;
    PUSH32(esp, 0x00290EC6u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00290EC6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00290ED0
 * Original: 0x00290ED0 - 0x00290FD5 (261 bytes, 81 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290ED0(void)
{

loc_00290ED0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE548);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00290EE1u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00290EE1: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x471D50);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00290EF1u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00290EF1: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00290EFCu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00290EFC: ;
    ecx = esp + 0xC;
    ebx = eax;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x10) = 7;
    PUSH32(esp, 0x00290F12u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00290F12: ;
    edx = edi + 2;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x1AA080;
    PUSH32(esp, 0x00290F24u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00290F24: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x00290F2Du); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00290F2D: ;
    eax = edi + 3;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00290F38u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00290F38: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x00290F41u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00290F41: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00290F4Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00290F4C: ;
    ebx = eax;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = ebx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00290F62u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00290F62: ;
    eax = edi + 5;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x1AA050;
    PUSH32(esp, 0x00290F74u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00290F74: ;
    ecx = esp + 0xC;
    ebx = eax;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00290F8Au); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00290F8A: ;
    edx = edi + 6;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x1AA050;
    PUSH32(esp, 0x00290F9Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00290F9C: ;
    ebx = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00290FB2u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00290FB2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x471D34);
    PUSH32(esp, 0x471D18);
    PUSH32(esp, 0x471CFC);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x1AA050;
    PUSH32(esp, 0x00290FD0u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00290FD0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00290FE0
 * Original: 0x00290FE0 - 0x0029107F (159 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00290FE0(void)
{

loc_00290FE0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE54C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00290FF1u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00290FF1: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x471DA8);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00291001u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00291001: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00291009u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00291009: ;
    ebx = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0029101Fu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_0029101F: ;
    ecx = edi + 3;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x1AACE0;
    PUSH32(esp, 0x00291031u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00291031: ;
    ebx = eax;
    PUSH32(esp, 0x00291038u); RECOMP_ABI_CALL(0x001AABC0u, sub_001AABC0); /* call 0x001AABC0 */

loc_00291038: ;
    edx = edi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00291046u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00291046: ;
    ebx = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0029105Cu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_0029105C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x471D94);
    PUSH32(esp, 0x471D80);
    PUSH32(esp, 0x471D6C);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x1AAD10;
    PUSH32(esp, 0x0029107Au); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0029107A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00291080
 * Original: 0x00291080 - 0x002910E2 (98 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291080(void)
{

loc_00291080: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE550);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00291091u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00291091: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x471DC8);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x002910A1u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002910A1: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002910A9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002910A9: ;
    ebx = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x10) = 1;
    PUSH32(esp, 0x002910BFu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_002910BF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x471DC4);
    PUSH32(esp, 0x471DC0);
    PUSH32(esp, 0x471DBC);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x1AA170;
    PUSH32(esp, 0x002910DDu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002910DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002910F0
 * Original: 0x002910F0 - 0x00291113 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002910F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002910F0: ;
    eax = MEM32(0x5BE554);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00291112; /* jne: not equal / not zero */

loc_002910F9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00291104u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00291104: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029110Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0029110A: ;
    esp = esp + 8;
    MEM32(0x5BE554) = eax;

loc_00291112: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00291120
 * Original: 0x00291120 - 0x0029112C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291120(void)
{

loc_00291120: ;
    PUSH32(esp, 0x2A0820);
    PUSH32(esp, 0x0029112Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029112A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00291130
 * Original: 0x00291130 - 0x00291192 (98 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291130(void)
{

loc_00291130: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE558);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00291141u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00291141: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x471DD8);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00291151u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00291151: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00291159u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00291159: ;
    ebx = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0029116Fu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_0029116F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x471DD4);
    PUSH32(esp, 0x471DD0);
    PUSH32(esp, 0x471DCC);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x1AA020;
    PUSH32(esp, 0x0029118Du); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0029118D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002911A0
 * Original: 0x002911A0 - 0x00291207 (103 bytes, 33 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002911A0(void)
{

loc_002911A0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE55C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002911AFu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002911AF: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x471E18);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x002911BFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002911BF: ;
    eax = edi + 3;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002911CAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002911CA: ;
    PUSH32(esp, 0x280);
    ecx = eax;
    PUSH32(esp, 0x002911D6u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002911D6: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002911E1u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002911E1: ;
    PUSH32(esp, 0x1E0);
    ecx = eax;
    PUSH32(esp, 0x002911EDu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002911ED: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x471E04);
    PUSH32(esp, 0x471DF0);
    PUSH32(esp, 0x471DDC);
    ecx = esi;
    PUSH32(esp, 0x00291204u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00291204: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00291210
 * Original: 0x00291210 - 0x00291233 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00291210: ;
    eax = MEM32(0x5BE564);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00291232; /* jne: not equal / not zero */

loc_00291219: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00291224u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00291224: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029122Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0029122A: ;
    esp = esp + 8;
    MEM32(0x5BE564) = eax;

loc_00291232: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00291240
 * Original: 0x00291240 - 0x0029124C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291240(void)
{

loc_00291240: ;
    PUSH32(esp, 0x29E990);
    PUSH32(esp, 0x0029124Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029124A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00291250
 * Original: 0x00291250 - 0x002912C7 (119 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00291250(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */

loc_00291250: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE564);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00291260u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00291260: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x471E44);
    ecx = esi;
    ebp = eax;
    PUSH32(esp, 0x00291270u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00291270: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00291278u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00291278: ;
    edi = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = edi;
    PUSH32(esp, 0x00291283u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00291283: ;
    eax = ebp + 1;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(edi + 0x26) = 0;
    PUSH32(esp, 0x00291292u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00291292: ;
    edi = eax;
    PUSH32(esp, 0x00291299u); RECOMP_ABI_CALL(0x001AA8A0u, sub_001AA8A0); /* call 0x001AA8A0 */

loc_00291299: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x471E3C);
    MEM32(edi + 0x38) = eax;
    SET_LO8(eax, 1);
    PUSH32(esp, 0x471E34);
    PUSH32(esp, 0x471E2C);
    ecx = esi;
    MEM8(edi + 0x26) = 0;
    MEM8(edi + 0x28) = LO8(eax);
    MEM8(edi + 0x27) = LO8(eax);
    MEM8(edi + 0x2C) = 3;
    PUSH32(esp, 0x002912C3u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002912C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002912D0
 * Original: 0x002912D0 - 0x002912F8 (40 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002912D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002912D0: ;
    eax = MEM32(0x5BE568);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002912F7; /* jne: not equal / not zero */

loc_002912D9: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x471E54);
    PUSH32(esp, 0x471E4C);
    PUSH32(esp, 0x406480);
    PUSH32(esp, 0x002912EFu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_002912EF: ;
    esp = esp + 0x10;
    MEM32(0x5BE568) = eax;

loc_002912F7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00291300
 * Original: 0x00291300 - 0x00291328 (40 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00291300: ;
    eax = MEM32(0x5BE56C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00291327; /* jne: not equal / not zero */

loc_00291309: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x471E68);
    PUSH32(esp, 0x471E5C);
    PUSH32(esp, 0x406528);
    PUSH32(esp, 0x0029131Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_0029131F: ;
    esp = esp + 0x10;
    MEM32(0x5BE56C) = eax;

loc_00291327: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00291330
 * Original: 0x00291330 - 0x00291353 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00291330: ;
    eax = MEM32(0x5BE570);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00291352; /* jne: not equal / not zero */

loc_00291339: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00291344u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00291344: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029134Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0029134A: ;
    esp = esp + 8;
    MEM32(0x5BE570) = eax;

loc_00291352: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00291360
 * Original: 0x00291360 - 0x00291550 (496 bytes, 169 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291360(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00291360: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE570);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00291372u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00291372: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x471F1C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00291382u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00291382: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029138Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029138A: ;
    ebp = eax;
    eax = esp + 0x10;
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x0029139Eu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_0029139E: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    MEM32(ebp + 0x34) = 0x291300;
    PUSH32(esp, 0x002913B3u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002913B3: ;
    ebp = eax;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = ebp;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x002913C5u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_002913C5: ;
    eax = edi + 2;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    MEM32(ebp + 0x34) = 0x2912D0;
    PUSH32(esp, 0x002913DAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002913DA: ;
    ebp = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ebp;
    PUSH32(esp, 0x002913E5u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002913E5: ;
    ecx = edi + 3;
    SET_LO8(eax, 4);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    MEM8(ebp + 0x28) = LO8(eax);
    MEM8(ebp + 0x27) = LO8(eax);
    MEM8(ebp + 0x2C) = 3;
    PUSH32(esp, 0x002913FFu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002913FF: ;
    edx = edi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0029140Du); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029140D: ;
    ebp = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ebp;
    PUSH32(esp, 0x00291418u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00291418: ;
    eax = edi + 5;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00291426u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00291426: ;
    ebp = eax;
    eax = MEM32(0x5BE530);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029144B; /* jne: not equal / not zero */

loc_00291431: ;
    ecx = MEM32(0x46A684);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0029143Du); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0029143D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00291443u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00291443: ;
    esp = esp + 8;
    MEM32(0x5BE530) = eax;

loc_0029144B: ;
    edx = edi + 6;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0029145Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029145C: ;
    ebp = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x14) = 1;
    PUSH32(esp, 0x00291472u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00291472: ;
    ecx = edi + 7;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x34) = 0x1AA440;
    PUSH32(esp, 0x00291484u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00291484: ;
    ebp = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ebp;
    PUSH32(esp, 0x0029148Fu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0029148F: ;
    edx = edi + 8;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0029149Du); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029149D: ;
    ebp = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ebp;
    PUSH32(esp, 0x002914A8u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002914A8: ;
    eax = edi + 9;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002914B6u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002914B6: ;
    ebp = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ebp;
    PUSH32(esp, 0x002914C1u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002914C1: ;
    ecx = edi + 0xA;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002914CFu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002914CF: ;
    ebp = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ebp;
    PUSH32(esp, 0x002914DAu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002914DA: ;
    edx = edi + 0xB;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002914E8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002914E8: ;
    ebp = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ebp;
    PUSH32(esp, 0x002914F3u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002914F3: ;
    eax = edi + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00291501u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00291501: ;
    ebp = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ebp;
    PUSH32(esp, 0x0029150Cu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0029150C: ;
    ecx = edi + 0xD;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0029151Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029151A: ;
    ebp = eax;
    PUSH32(esp, 0x00291521u); RECOMP_ABI_CALL(0x001AA8A0u, sub_001AA8A0); /* call 0x001AA8A0 */

loc_00291521: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x471EE4);
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    MEM8(ebp + 0x28) = 1;
    MEM8(ebp + 0x27) = 1;
    MEM8(ebp + 0x2C) = 3;
    PUSH32(esp, 0x471EAC);
    PUSH32(esp, 0x471E74);
    ecx = esi;
    PUSH32(esp, 0x0029154Au); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0029154A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00291550
 * Original: 0x00291550 - 0x00291573 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00291550: ;
    eax = MEM32(0x5BE578);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00291572; /* jne: not equal / not zero */

loc_00291559: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00291564u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00291564: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029156Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0029156A: ;
    esp = esp + 8;
    MEM32(0x5BE578) = eax;

loc_00291572: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00291580
 * Original: 0x00291580 - 0x0029158C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291580(void)
{

loc_00291580: ;
    PUSH32(esp, 0x29EA30);
    PUSH32(esp, 0x0029158Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029158A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00291590
 * Original: 0x00291590 - 0x002915F2 (98 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291590(void)
{

loc_00291590: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE57C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002915A1u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002915A1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x471F60);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x002915B1u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002915B1: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002915B9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002915B9: ;
    ebx = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x002915CFu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_002915CF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x471F5C);
    PUSH32(esp, 0x471F58);
    PUSH32(esp, 0x471F54);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x1AA0E0;
    PUSH32(esp, 0x002915EDu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002915ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00291600
 * Original: 0x00291600 - 0x0029164D (77 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291600(void)
{

loc_00291600: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE580);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029160Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0029160F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x471F70);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0029161Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0029161F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00291627u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00291627: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = eax;
    PUSH32(esp, 0x00291633u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00291633: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x471F6C);
    PUSH32(esp, 0x471F68);
    PUSH32(esp, 0x471F64);
    ecx = esi;
    PUSH32(esp, 0x0029164Au); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0029164A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00291650
 * Original: 0x00291650 - 0x0029165C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291650(void)
{

loc_00291650: ;
    PUSH32(esp, 0x29EB70);
    PUSH32(esp, 0x0029165Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029165A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00291660
 * Original: 0x00291660 - 0x00291778 (280 bytes, 96 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291660(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00291660: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE588);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00291671u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00291671: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x471FEC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00291681u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00291681: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00291689u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00291689: ;
    ebp = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ebp;
    PUSH32(esp, 0x00291694u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00291694: ;
    eax = edi + 1;
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    MEM8(ebp + 0x28) = 4;
    MEM8(ebp + 0x27) = 4;
    MEM8(ebp + 0x2C) = 3;
    PUSH32(esp, 0x002916B0u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002916B0: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002916BEu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002916BE: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x002916CCu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002916CC: ;
    ebp = eax;
    PUSH32(esp, 0x002916D3u); RECOMP_ABI_CALL(0x001AA8A0u, sub_001AA8A0); /* call 0x001AA8A0 */

loc_002916D3: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 5;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x3C) = LO8(ebx);
    MEM8(ebp + 0x26) = LO8(ebx);
    MEM8(ebp + 0x28) = 4;
    MEM8(ebp + 0x27) = 4;
    MEM8(ebp + 0x2C) = 3;
    PUSH32(esp, 0x002916F3u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002916F3: ;
    PUSH32(esp, 0x3C6EAC);
    ecx = eax;
    PUSH32(esp, 0x002916FFu); RECOMP_ABI_CALL(0x00217FA0u, sub_00217FA0); /* call 0x00217FA0 */

loc_002916FF: ;
    ecx = edi + 6;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0029170Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029170A: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x00291712u); RECOMP_ABI_CALL(0x00217FA0u, sub_00217FA0); /* call 0x00217FA0 */

loc_00291712: ;
    edx = edi + 7;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0029171Du); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029171D: ;
    ebp = eax;
    PUSH32(esp, 0x00291724u); RECOMP_ABI_CALL(0x001AB350u, sub_001AB350); /* call 0x001AB350 */

loc_00291724: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 8;
    SET_LO8(ebx, 1);
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00291737u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00291737: ;
    ebp = eax;
    PUSH32(esp, 0x0029173Eu); RECOMP_ABI_CALL(0x001AB290u, sub_001AB290); /* call 0x001AB290 */

loc_0029173E: ;
    ecx = edi + 9;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x0029174Fu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029174F: ;
    ebp = eax;
    PUSH32(esp, 0x00291756u); RECOMP_ABI_CALL(0x001AB2C0u, sub_001AB2C0); /* call 0x001AB2C0 */

loc_00291756: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x471FC4);
    PUSH32(esp, 0x471F9C);
    PUSH32(esp, 0x471F74);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00291773u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00291773: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00291780
 * Original: 0x00291780 - 0x002917E2 (98 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291780(void)
{

loc_00291780: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE58C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00291791u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00291791: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x472020);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x002917A1u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002917A1: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002917A9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002917A9: ;
    ebx = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x002917BFu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_002917BF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x47201C);
    PUSH32(esp, 0x472018);
    PUSH32(esp, 0x472014);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x1AA260;
    PUSH32(esp, 0x002917DDu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002917DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002917F0
 * Original: 0x002917F0 - 0x002917FC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002917F0(void)
{

loc_002917F0: ;
    PUSH32(esp, 0x29EC20);
    PUSH32(esp, 0x002917FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002917FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00291800
 * Original: 0x00291800 - 0x0029187D (125 bytes, 46 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291800(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00291800: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE594);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00291811u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00291811: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x472078);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00291821u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00291821: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0029182Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029182C: ;
    ebx = eax;
    PUSH32(esp, 0x00291833u); RECOMP_ABI_CALL(0x001AAD70u, sub_001AAD70); /* call 0x001AAD70 */

loc_00291833: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00291841u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00291841: ;
    ebp = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ebp;
    PUSH32(esp, 0x0029184Eu); RECOMP_ABI_CALL(0x001E7D60u, sub_001E7D60); /* call 0x001E7D60 */

loc_0029184E: ;
    edx = edi + 5;
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    PUSH32(esp, 0x0029185Eu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029185E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x47205C);
    PUSH32(esp, 0x472040);
    PUSH32(esp, 0x472024);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00291878u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00291878: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00291880
 * Original: 0x00291880 - 0x002918A3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00291880: ;
    eax = MEM32(0x5BE598);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002918A2; /* jne: not equal / not zero */

loc_00291889: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00291894u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00291894: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029189Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0029189A: ;
    esp = esp + 8;
    MEM32(0x5BE598) = eax;

loc_002918A2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002918B0
 * Original: 0x002918B0 - 0x002918BC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002918B0(void)
{

loc_002918B0: ;
    PUSH32(esp, 0x29EC70);
    PUSH32(esp, 0x002918BAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002918BA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002918C0
 * Original: 0x002918C0 - 0x002918F9 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002918C0(void)
{

loc_002918C0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE598);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002918CFu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002918CF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x4720A0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x002918DFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002918DF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x47209C);
    PUSH32(esp, 0x472098);
    PUSH32(esp, 0x472094);
    ecx = esi;
    PUSH32(esp, 0x002918F6u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002918F6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00291900
 * Original: 0x00291900 - 0x00291939 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291900(void)
{

loc_00291900: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE59C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029190Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0029190F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x4720B0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0029191Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0029191F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4720AC);
    PUSH32(esp, 0x4720A8);
    PUSH32(esp, 0x4720A4);
    ecx = esi;
    PUSH32(esp, 0x00291936u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00291936: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00291940
 * Original: 0x00291940 - 0x00291963 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00291940: ;
    eax = MEM32(0x5BE5A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00291962; /* jne: not equal / not zero */

loc_00291949: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00291954u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00291954: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029195Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0029195A: ;
    esp = esp + 8;
    MEM32(0x5BE5A0) = eax;

loc_00291962: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00291970
 * Original: 0x00291970 - 0x0029197C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291970(void)
{

loc_00291970: ;
    PUSH32(esp, 0x2A0590);
    PUSH32(esp, 0x0029197Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029197A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00291980
 * Original: 0x00291980 - 0x0029198C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291980(void)
{

loc_00291980: ;
    PUSH32(esp, 0x29ED40);
    PUSH32(esp, 0x0029198Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029198A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00291990
 * Original: 0x00291990 - 0x0029199C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291990(void)
{

loc_00291990: ;
    PUSH32(esp, 0x29DD10);
    PUSH32(esp, 0x0029199Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029199A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002919A0
 * Original: 0x002919A0 - 0x002919AC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002919A0(void)
{

loc_002919A0: ;
    PUSH32(esp, 0x29B620);
    PUSH32(esp, 0x002919AAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002919AA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002919B0
 * Original: 0x002919B0 - 0x002919D3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002919B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002919B0: ;
    eax = MEM32(0x5BE5B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002919D2; /* jne: not equal / not zero */

loc_002919B9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002919C4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002919C4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002919CAu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002919CA: ;
    esp = esp + 8;
    MEM32(0x5BE5B4) = eax;

loc_002919D2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002919E0
 * Original: 0x002919E0 - 0x002919EC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002919E0(void)
{

loc_002919E0: ;
    PUSH32(esp, 0x29FF90);
    PUSH32(esp, 0x002919EAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002919EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002919F0
 * Original: 0x002919F0 - 0x00291A13 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002919F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002919F0: ;
    eax = MEM32(0x5BE5B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00291A12; /* jne: not equal / not zero */

loc_002919F9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00291A04u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00291A04: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00291A0Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00291A0A: ;
    esp = esp + 8;
    MEM32(0x5BE5B8) = eax;

loc_00291A12: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00291A20
 * Original: 0x00291A20 - 0x00291A47 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00291A20: ;
    eax = MEM32(0x5BE5B8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00291A34; /* je: equal / zero */

loc_00291A29: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00291A46; /* jne: not equal / not zero */

loc_00291A34: ;
    PUSH32(esp, 0x29ED90);
    PUSH32(esp, 0x00291A3Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00291A3E: ;
    eax = MEM32(0x5BE5B8);
    esp = esp + 4;

loc_00291A46: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00291A50
 * Original: 0x00291A50 - 0x00291AA0 (80 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291A50(void)
{

loc_00291A50: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE5BC);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00291A5Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00291A5F: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x4720CC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00291A6Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00291A6F: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00291A7Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00291A7A: ;
    PUSH32(esp, 0xC0800000u);
    ecx = eax;
    PUSH32(esp, 0x00291A86u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00291A86: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4720C4);
    PUSH32(esp, 0x4720BC);
    PUSH32(esp, 0x4720B4);
    ecx = esi;
    PUSH32(esp, 0x00291A9Du); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00291A9D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00291AA0
 * Original: 0x00291AA0 - 0x00291AC3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00291AA0: ;
    eax = MEM32(0x5BE5C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00291AC2; /* jne: not equal / not zero */

loc_00291AA9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00291AB4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00291AB4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00291ABAu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00291ABA: ;
    esp = esp + 8;
    MEM32(0x5BE5C0) = eax;

loc_00291AC2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00291AD0
 * Original: 0x00291AD0 - 0x00291ADC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291AD0(void)
{

loc_00291AD0: ;
    PUSH32(esp, 0x29EE30);
    PUSH32(esp, 0x00291ADAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00291ADA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00291AE0
 * Original: 0x00291AE0 - 0x00291B2A (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291AE0(void)
{

loc_00291AE0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE5C0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00291AEFu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00291AEF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x4720E0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00291AFFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00291AFF: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00291B07u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00291B07: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x00291B10u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00291B10: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4720DC);
    PUSH32(esp, 0x4720D8);
    PUSH32(esp, 0x4720D4);
    ecx = esi;
    PUSH32(esp, 0x00291B27u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00291B27: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00291B30
 * Original: 0x00291B30 - 0x00291B92 (98 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291B30(void)
{

loc_00291B30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE5C8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00291B41u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00291B41: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x4720F0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00291B51u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00291B51: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00291B59u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00291B59: ;
    ebx = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00291B6Fu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00291B6F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4720EC);
    PUSH32(esp, 0x4720E8);
    PUSH32(esp, 0x4720E4);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x1AA3B0;
    PUSH32(esp, 0x00291B8Du); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00291B8D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00291BA0
 * Original: 0x00291BA0 - 0x00291BAC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291BA0(void)
{

loc_00291BA0: ;
    PUSH32(esp, 0x29EED0);
    PUSH32(esp, 0x00291BAAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00291BAA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00291BB0
 * Original: 0x00291BB0 - 0x00291BE9 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291BB0(void)
{

loc_00291BB0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE5D0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00291BBFu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00291BBF: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x472124);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00291BCFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00291BCF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x472114);
    PUSH32(esp, 0x472104);
    PUSH32(esp, 0x4720F4);
    ecx = esi;
    PUSH32(esp, 0x00291BE6u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00291BE6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00291BF0
 * Original: 0x00291BF0 - 0x00291C3D (77 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291BF0(void)
{

loc_00291BF0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE5D4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00291BFFu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00291BFF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x472140);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00291C0Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00291C0F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00291C17u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00291C17: ;
    PUSH32(esp, 0x3F800000);
    ecx = eax;
    PUSH32(esp, 0x00291C23u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00291C23: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x47213C);
    PUSH32(esp, 0x472138);
    PUSH32(esp, 0x472134);
    ecx = esi;
    PUSH32(esp, 0x00291C3Au); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00291C3A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00291C40
 * Original: 0x00291C40 - 0x00291C79 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291C40(void)
{

loc_00291C40: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE5D8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00291C4Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00291C4F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x472150);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00291C5Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00291C5F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x47214C);
    PUSH32(esp, 0x472148);
    PUSH32(esp, 0x472144);
    ecx = esi;
    PUSH32(esp, 0x00291C76u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00291C76: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00291C80
 * Original: 0x00291C80 - 0x00291CA3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00291C80: ;
    eax = MEM32(0x5BE5DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00291CA2; /* jne: not equal / not zero */

loc_00291C89: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00291C94u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00291C94: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00291C9Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00291C9A: ;
    esp = esp + 8;
    MEM32(0x5BE5DC) = eax;

loc_00291CA2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00291CB0
 * Original: 0x00291CB0 - 0x00291CBC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291CB0(void)
{

loc_00291CB0: ;
    PUSH32(esp, 0x2A05E0);
    PUSH32(esp, 0x00291CBAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00291CBA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00291CC0
 * Original: 0x00291CC0 - 0x00291CE3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00291CC0: ;
    eax = MEM32(0x5BE5E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00291CE2; /* jne: not equal / not zero */

loc_00291CC9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00291CD4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00291CD4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00291CDAu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00291CDA: ;
    esp = esp + 8;
    MEM32(0x5BE5E4) = eax;

loc_00291CE2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00291CF0
 * Original: 0x00291CF0 - 0x00291CFC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291CF0(void)
{

loc_00291CF0: ;
    PUSH32(esp, 0x2A0050);
    PUSH32(esp, 0x00291CFAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00291CFA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00291D00
 * Original: 0x00291D00 - 0x00291D23 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00291D00: ;
    eax = MEM32(0x5BE5E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00291D22; /* jne: not equal / not zero */

loc_00291D09: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00291D14u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00291D14: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00291D1Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00291D1A: ;
    esp = esp + 8;
    MEM32(0x5BE5E8) = eax;

loc_00291D22: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00291D30
 * Original: 0x00291D30 - 0x00291D58 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00291D30: ;
    eax = MEM32(0x5BE5EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00291D57; /* jne: not equal / not zero */

loc_00291D39: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x472160);
    PUSH32(esp, 0x472154);
    PUSH32(esp, 0x40664C);
    PUSH32(esp, 0x00291D4Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_00291D4F: ;
    esp = esp + 0x10;
    MEM32(0x5BE5EC) = eax;

loc_00291D57: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00291D60
 * Original: 0x00291D60 - 0x00291DAA (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291D60(void)
{

loc_00291D60: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE5F4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00291D6Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00291D6F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x472178);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00291D7Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00291D7F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00291D87u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00291D87: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x00291D90u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00291D90: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x472174);
    PUSH32(esp, 0x472170);
    PUSH32(esp, 0x47216C);
    ecx = esi;
    PUSH32(esp, 0x00291DA7u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00291DA7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00291DB0
 * Original: 0x00291DB0 - 0x00291DFD (77 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291DB0(void)
{

loc_00291DB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE5FC);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00291DC0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00291DC0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x472188);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00291DD0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00291DD0: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00291DD8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00291DD8: ;
    ebx = eax;
    PUSH32(esp, 0x00291DDFu); RECOMP_ABI_CALL(0x001AACB0u, sub_001AACB0); /* call 0x001AACB0 */

loc_00291DDF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x472184);
    PUSH32(esp, 0x472180);
    PUSH32(esp, 0x47217C);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00291DF9u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00291DF9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00291E00
 * Original: 0x00291E00 - 0x00291E23 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00291E00: ;
    eax = MEM32(0x5BE600);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00291E22; /* jne: not equal / not zero */

loc_00291E09: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00291E14u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00291E14: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00291E1Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00291E1A: ;
    esp = esp + 8;
    MEM32(0x5BE600) = eax;

loc_00291E22: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00291E30
 * Original: 0x00291E30 - 0x00291E57 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00291E30: ;
    eax = MEM32(0x5BE600);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00291E44; /* je: equal / zero */

loc_00291E39: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00291E56; /* jne: not equal / not zero */

loc_00291E44: ;
    PUSH32(esp, 0x2A00C0);
    PUSH32(esp, 0x00291E4Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00291E4E: ;
    eax = MEM32(0x5BE600);
    esp = esp + 4;

loc_00291E56: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00291E60
 * Original: 0x00291E60 - 0x00291E66 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291E60(void)
{

loc_00291E60: ;
    eax = MEM32(0x5BE604);
    esp += 4; return; /* ret */

}

/**
 * sub_00291E70
 * Original: 0x00291E70 - 0x00291EA9 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291E70(void)
{

loc_00291E70: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE608);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00291E7Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00291E7F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x472198);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00291E8Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00291E8F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x472194);
    PUSH32(esp, 0x472190);
    PUSH32(esp, 0x47218C);
    ecx = esi;
    PUSH32(esp, 0x00291EA6u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00291EA6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00291EB0
 * Original: 0x00291EB0 - 0x00291EB6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291EB0(void)
{

loc_00291EB0: ;
    eax = MEM32(0x5BE614);
    esp += 4; return; /* ret */

}

/**
 * sub_00291EC0
 * Original: 0x00291EC0 - 0x00291F15 (85 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291EC0(void)
{

loc_00291EC0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE618);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00291ECFu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00291ECF: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x4721B4);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00291EDFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00291EDF: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00291EEAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00291EEA: ;
    PUSH32(esp, 0x40712635);
    PUSH32(esp, 0x71603524);
    ecx = eax;
    PUSH32(esp, 0x00291EFBu); RECOMP_ABI_CALL(0x001E7D60u, sub_001E7D60); /* call 0x001E7D60 */

loc_00291EFB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4721AC);
    PUSH32(esp, 0x4721A4);
    PUSH32(esp, 0x47219C);
    ecx = esi;
    PUSH32(esp, 0x00291F12u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00291F12: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00291F20
 * Original: 0x00291F20 - 0x00291F43 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00291F20: ;
    eax = MEM32(0x5BE61C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00291F42; /* jne: not equal / not zero */

loc_00291F29: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00291F34u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00291F34: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00291F3Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00291F3A: ;
    esp = esp + 8;
    MEM32(0x5BE61C) = eax;

loc_00291F42: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00291F50
 * Original: 0x00291F50 - 0x00291F5C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291F50(void)
{

loc_00291F50: ;
    PUSH32(esp, 0x29F240);
    PUSH32(esp, 0x00291F5Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00291F5A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00291F60
 * Original: 0x00291F60 - 0x00291FAA (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291F60(void)
{

loc_00291F60: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE620);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00291F6Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00291F6F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x4721C8);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00291F7Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00291F7F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00291F87u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00291F87: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x00291F90u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00291F90: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4721C4);
    PUSH32(esp, 0x4721C0);
    PUSH32(esp, 0x4721BC);
    ecx = esi;
    PUSH32(esp, 0x00291FA7u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00291FA7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00291FB0
 * Original: 0x00291FB0 - 0x00291FFD (77 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00291FB0(void)
{

loc_00291FB0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE624);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00291FBFu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00291FBF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x4721D8);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00291FCFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00291FCF: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00291FD7u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00291FD7: ;
    PUSH32(esp, 0x3F800000);
    ecx = eax;
    PUSH32(esp, 0x00291FE3u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00291FE3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4721D4);
    PUSH32(esp, 0x4721D0);
    PUSH32(esp, 0x4721CC);
    ecx = esi;
    PUSH32(esp, 0x00291FFAu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00291FFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00292000
 * Original: 0x00292000 - 0x00292050 (80 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292000(void)
{

loc_00292000: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE628);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029200Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0029200F: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x4721F4);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0029201Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0029201F: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0029202Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029202A: ;
    PUSH32(esp, 0xFF);
    ecx = eax;
    PUSH32(esp, 0x00292036u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00292036: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4721EC);
    PUSH32(esp, 0x4721E4);
    PUSH32(esp, 0x4721DC);
    ecx = esi;
    PUSH32(esp, 0x0029204Du); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0029204D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00292050
 * Original: 0x00292050 - 0x00292073 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00292050: ;
    eax = MEM32(0x5BE62C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00292072; /* jne: not equal / not zero */

loc_00292059: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00292064u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00292064: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029206Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0029206A: ;
    esp = esp + 8;
    MEM32(0x5BE62C) = eax;

loc_00292072: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00292080
 * Original: 0x00292080 - 0x0029208C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292080(void)
{

loc_00292080: ;
    PUSH32(esp, 0x29F380);
    PUSH32(esp, 0x0029208Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029208A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00292090
 * Original: 0x00292090 - 0x002920DA (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292090(void)
{

loc_00292090: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE62C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029209Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0029209F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x472208);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x002920AFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002920AF: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002920B7u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002920B7: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x002920C0u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002920C0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x472204);
    PUSH32(esp, 0x472200);
    PUSH32(esp, 0x4721FC);
    ecx = esi;
    PUSH32(esp, 0x002920D7u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002920D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002920E0
 * Original: 0x002920E0 - 0x0029212A (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002920E0(void)
{

loc_002920E0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE630);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002920EFu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002920EF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x472218);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x002920FFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002920FF: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00292107u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00292107: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x00292110u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00292110: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x472214);
    PUSH32(esp, 0x472210);
    PUSH32(esp, 0x47220C);
    ecx = esi;
    PUSH32(esp, 0x00292127u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00292127: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00292130
 * Original: 0x00292130 - 0x00292192 (98 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292130(void)
{

loc_00292130: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE634);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00292141u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00292141: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x472228);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00292151u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00292151: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00292159u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00292159: ;
    ebx = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x10) = 3;
    PUSH32(esp, 0x0029216Fu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_0029216F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x472224);
    PUSH32(esp, 0x472220);
    PUSH32(esp, 0x47221C);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x1AA110;
    PUSH32(esp, 0x0029218Du); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0029218D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002921A0
 * Original: 0x002921A0 - 0x002921D9 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002921A0(void)
{

loc_002921A0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE638);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002921AFu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002921AF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x472238);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x002921BFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002921BF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x472234);
    PUSH32(esp, 0x472230);
    PUSH32(esp, 0x47222C);
    ecx = esi;
    PUSH32(esp, 0x002921D6u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002921D6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002921E0
 * Original: 0x002921E0 - 0x00292203 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002921E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002921E0: ;
    eax = MEM32(0x5BE640);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00292202; /* jne: not equal / not zero */

loc_002921E9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002921F4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002921F4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002921FAu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002921FA: ;
    esp = esp + 8;
    MEM32(0x5BE640) = eax;

loc_00292202: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00292210
 * Original: 0x00292210 - 0x0029221C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292210(void)
{

loc_00292210: ;
    PUSH32(esp, 0x29F500);
    PUSH32(esp, 0x0029221Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029221A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00292220
 * Original: 0x00292220 - 0x00292285 (101 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292220(void)
{

loc_00292220: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE640);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00292231u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00292231: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x472254);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00292241u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00292241: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0029224Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029224C: ;
    ecx = esp + 0xC;
    ebx = eax;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00292262u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00292262: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x47224C);
    PUSH32(esp, 0x472244);
    PUSH32(esp, 0x47223C);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x1AA140;
    PUSH32(esp, 0x00292280u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00292280: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00292290
 * Original: 0x00292290 - 0x002922B8 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00292290: ;
    eax = MEM32(0x5BE644);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002922B7; /* jne: not equal / not zero */

loc_00292299: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x472270);
    PUSH32(esp, 0x47225C);
    PUSH32(esp, 0x3F8CA8);
    PUSH32(esp, 0x002922AFu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_002922AF: ;
    esp = esp + 0x10;
    MEM32(0x5BE644) = eax;

loc_002922B7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002922C0
 * Original: 0x002922C0 - 0x002922E3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002922C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002922C0: ;
    eax = MEM32(0x5BE648);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002922E2; /* jne: not equal / not zero */

loc_002922C9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002922D4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002922D4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002922DAu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002922DA: ;
    esp = esp + 8;
    MEM32(0x5BE648) = eax;

loc_002922E2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002922F0
 * Original: 0x002922F0 - 0x002922FC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002922F0(void)
{

loc_002922F0: ;
    PUSH32(esp, 0x2A07C0);
    PUSH32(esp, 0x002922FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002922FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00292300
 * Original: 0x00292300 - 0x002923DD (221 bytes, 72 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00292300: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE648);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00292311u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00292311: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x4722FC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00292321u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00292321: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00292329u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00292329: ;
    ebx = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0029233Fu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_0029233F: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x292290;
    PUSH32(esp, 0x00292351u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00292351: ;
    ebx = eax;
    eax = MEM32(0x5BE570);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00292376; /* jne: not equal / not zero */

loc_0029235C: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00292368u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00292368: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029236Eu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0029236E: ;
    esp = esp + 8;
    MEM32(0x5BE570) = eax;

loc_00292376: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 2;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00292384u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00292384: ;
    ebx = eax;
    PUSH32(esp, 0x0029238Bu); RECOMP_ABI_CALL(0x001AB0E0u, sub_001AB0E0); /* call 0x001AB0E0 */

loc_0029238B: ;
    ecx = edi + 3;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00292399u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00292399: ;
    ebx = eax;
    eax = MEM32(0x5BE530);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002923BE; /* jne: not equal / not zero */

loc_002923A4: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002923B0u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002923B0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002923B6u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002923B6: ;
    esp = esp + 8;
    MEM32(0x5BE530) = eax;

loc_002923BE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4722D4);
    PUSH32(esp, 0x4722AC);
    PUSH32(esp, 0x472284);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x002923D8u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002923D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002923E0
 * Original: 0x002923E0 - 0x00292442 (98 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002923E0(void)
{

loc_002923E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE64C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002923F1u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002923F1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x472330);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00292401u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00292401: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00292409u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00292409: ;
    ebx = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x10) = 1;
    PUSH32(esp, 0x0029241Fu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_0029241F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x47232C);
    PUSH32(esp, 0x472328);
    PUSH32(esp, 0x472324);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x221530;
    PUSH32(esp, 0x0029243Du); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0029243D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00292450
 * Original: 0x00292450 - 0x002924D6 (134 bytes, 46 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292450(void)
{

loc_00292450: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE650);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029245Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0029245F: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x472370);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0029246Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0029246F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00292477u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00292477: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x00292480u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00292480: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0029248Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029248B: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x00292494u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00292494: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0029249Fu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029249F: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x002924A8u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002924A8: ;
    edx = edi + 3;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002924B3u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002924B3: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x002924BCu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_002924BC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x47235C);
    PUSH32(esp, 0x472348);
    PUSH32(esp, 0x472334);
    ecx = esi;
    PUSH32(esp, 0x002924D3u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002924D3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002924E0
 * Original: 0x002924E0 - 0x00292503 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002924E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002924E0: ;
    eax = MEM32(0x5BE654);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00292502; /* jne: not equal / not zero */

loc_002924E9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002924F4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002924F4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002924FAu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002924FA: ;
    esp = esp + 8;
    MEM32(0x5BE654) = eax;

loc_00292502: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00292510
 * Original: 0x00292510 - 0x0029251C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292510(void)
{

loc_00292510: ;
    PUSH32(esp, 0x29F5F0);
    PUSH32(esp, 0x0029251Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029251A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00292520
 * Original: 0x00292520 - 0x00292543 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00292520: ;
    eax = MEM32(0x5BE658);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00292542; /* jne: not equal / not zero */

loc_00292529: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00292534u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00292534: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029253Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0029253A: ;
    esp = esp + 8;
    MEM32(0x5BE658) = eax;

loc_00292542: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00292550
 * Original: 0x00292550 - 0x0029255C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292550(void)
{

loc_00292550: ;
    PUSH32(esp, 0x29F640);
    PUSH32(esp, 0x0029255Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029255A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00292560
 * Original: 0x00292560 - 0x002925AA (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292560(void)
{

loc_00292560: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE658);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029256Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0029256F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x472390);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0029257Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0029257F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00292587u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00292587: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x00292590u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00292590: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x47238C);
    PUSH32(esp, 0x472388);
    PUSH32(esp, 0x472384);
    ecx = esi;
    PUSH32(esp, 0x002925A7u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002925A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002925B0
 * Original: 0x002925B0 - 0x002925E9 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002925B0(void)
{

loc_002925B0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE660);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002925BFu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002925BF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x4723A0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x002925CFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002925CF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x47239C);
    PUSH32(esp, 0x472398);
    PUSH32(esp, 0x472394);
    ecx = esi;
    PUSH32(esp, 0x002925E6u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002925E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002925F0
 * Original: 0x002925F0 - 0x00292629 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002925F0(void)
{

loc_002925F0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE664);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002925FFu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002925FF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x4723B0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0029260Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0029260F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4723AC);
    PUSH32(esp, 0x4723A8);
    PUSH32(esp, 0x4723A4);
    ecx = esi;
    PUSH32(esp, 0x00292626u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00292626: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00292630
 * Original: 0x00292630 - 0x00292653 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00292630: ;
    eax = MEM32(0x5BE668);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00292652; /* jne: not equal / not zero */

loc_00292639: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00292644u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00292644: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029264Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0029264A: ;
    esp = esp + 8;
    MEM32(0x5BE668) = eax;

loc_00292652: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00292660
 * Original: 0x00292660 - 0x0029266C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292660(void)
{

loc_00292660: ;
    PUSH32(esp, 0x29F780);
    PUSH32(esp, 0x0029266Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029266A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00292670
 * Original: 0x00292670 - 0x002926A9 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292670(void)
{

loc_00292670: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE668);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029267Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0029267F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x4723C0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0029268Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0029268F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4723BC);
    PUSH32(esp, 0x4723B8);
    PUSH32(esp, 0x4723B4);
    ecx = esi;
    PUSH32(esp, 0x002926A6u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002926A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002926B0
 * Original: 0x002926B0 - 0x002926D3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002926B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002926B0: ;
    eax = MEM32(0x5BE66C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002926D2; /* jne: not equal / not zero */

loc_002926B9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002926C4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002926C4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002926CAu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002926CA: ;
    esp = esp + 8;
    MEM32(0x5BE66C) = eax;

loc_002926D2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002926E0
 * Original: 0x002926E0 - 0x002926EC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002926E0(void)
{

loc_002926E0: ;
    PUSH32(esp, 0x29FEC0);
    PUSH32(esp, 0x002926EAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002926EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002926F0
 * Original: 0x002926F0 - 0x00292713 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002926F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002926F0: ;
    eax = MEM32(0x5BE670);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00292712; /* jne: not equal / not zero */

loc_002926F9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00292704u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00292704: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029270Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0029270A: ;
    esp = esp + 8;
    MEM32(0x5BE670) = eax;

loc_00292712: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00292720
 * Original: 0x00292720 - 0x0029272C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292720(void)
{

loc_00292720: ;
    PUSH32(esp, 0x29F7E0);
    PUSH32(esp, 0x0029272Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029272A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00292730
 * Original: 0x00292730 - 0x002927A8 (120 bytes, 43 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292730(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00292730: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE670);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00292741u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00292741: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x4723F4);
    ecx = esi;
    ebp = eax;
    PUSH32(esp, 0x00292751u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00292751: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00292759u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00292759: ;
    edi = eax;
    PUSH32(esp, 0x00292760u); RECOMP_ABI_CALL(0x002459E0u, sub_002459E0); /* call 0x002459E0 */

loc_00292760: ;
    MEM32(edi + 0x3C) = eax;
    SET_LO8(ebx, 1);
    eax = ebp + 1;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(edi + 0x35) = LO8(ebx);
    MEM8(edi + 0x40) = LO8(ebx);
    MEM8(edi + 0x41) = LO8(ebx);
    PUSH32(esp, 0x00292779u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00292779: ;
    edi = eax;
    PUSH32(esp, 0x00292780u); RECOMP_ABI_CALL(0x00224B80u, sub_00224B80); /* call 0x00224B80 */

loc_00292780: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x4723E4);
    PUSH32(esp, 0x4723D4);
    PUSH32(esp, 0x4723C4);
    ecx = esi;
    MEM32(edi + 0x3C) = eax;
    MEM8(edi + 0x35) = LO8(ebx);
    MEM8(edi + 0x40) = LO8(ebx);
    MEM8(edi + 0x41) = LO8(ebx);
    PUSH32(esp, 0x002927A3u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002927A3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002927B0
 * Original: 0x002927B0 - 0x002927BC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002927B0(void)
{

loc_002927B0: ;
    PUSH32(esp, 0x29F830);
    PUSH32(esp, 0x002927BAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002927BA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002927C0
 * Original: 0x002927C0 - 0x00292818 (88 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002927C0(void)
{

loc_002927C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE674);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002927D0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002927D0: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x472428);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x002927E0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002927E0: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x002927E8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002927E8: ;
    edi = eax;
    PUSH32(esp, 0x002927EFu); RECOMP_ABI_CALL(0x002459E0u, sub_002459E0); /* call 0x002459E0 */

loc_002927EF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x47241C);
    MEM32(edi + 0x3C) = eax;
    SET_LO8(eax, 1);
    PUSH32(esp, 0x472410);
    PUSH32(esp, 0x472404);
    ecx = esi;
    MEM8(edi + 0x35) = LO8(eax);
    MEM8(edi + 0x40) = LO8(eax);
    MEM8(edi + 0x41) = LO8(eax);
    PUSH32(esp, 0x00292814u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00292814: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00292820
 * Original: 0x00292820 - 0x00292848 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00292820: ;
    eax = MEM32(0x5BE678);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00292847; /* jne: not equal / not zero */

loc_00292829: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x472440);
    PUSH32(esp, 0x472434);
    PUSH32(esp, 0x4068D4);
    PUSH32(esp, 0x0029283Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_0029283F: ;
    esp = esp + 0x10;
    MEM32(0x5BE678) = eax;

loc_00292847: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00292850
 * Original: 0x00292850 - 0x00292878 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00292850: ;
    eax = MEM32(0x5BE67C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00292877; /* jne: not equal / not zero */

loc_00292859: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x472458);
    PUSH32(esp, 0x47244C);
    PUSH32(esp, 0x406948);
    PUSH32(esp, 0x0029286Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_0029286F: ;
    esp = esp + 0x10;
    MEM32(0x5BE67C) = eax;

loc_00292877: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00292880
 * Original: 0x00292880 - 0x002928A3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00292880: ;
    eax = MEM32(0x5BE680);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002928A2; /* jne: not equal / not zero */

loc_00292889: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00292894u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00292894: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029289Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0029289A: ;
    esp = esp + 8;
    MEM32(0x5BE680) = eax;

loc_002928A2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002928B0
 * Original: 0x002928B0 - 0x002928BC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002928B0(void)
{

loc_002928B0: ;
    PUSH32(esp, 0x29F880);
    PUSH32(esp, 0x002928BAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002928BA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002928C0
 * Original: 0x002928C0 - 0x002928E3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002928C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002928C0: ;
    eax = MEM32(0x5BE684);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002928E2; /* jne: not equal / not zero */

loc_002928C9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002928D4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002928D4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002928DAu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002928DA: ;
    esp = esp + 8;
    MEM32(0x5BE684) = eax;

loc_002928E2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002928F0
 * Original: 0x002928F0 - 0x002928FC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002928F0(void)
{

loc_002928F0: ;
    PUSH32(esp, 0x2A06A0);
    PUSH32(esp, 0x002928FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002928FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00292900
 * Original: 0x00292900 - 0x0029290C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292900(void)
{

loc_00292900: ;
    PUSH32(esp, 0x2A03D0);
    PUSH32(esp, 0x0029290Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029290A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00292910
 * Original: 0x00292910 - 0x00292933 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00292910: ;
    eax = MEM32(0x5BE690);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00292932; /* jne: not equal / not zero */

loc_00292919: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00292924u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00292924: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029292Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0029292A: ;
    esp = esp + 8;
    MEM32(0x5BE690) = eax;

loc_00292932: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00292940
 * Original: 0x00292940 - 0x0029294C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292940(void)
{

loc_00292940: ;
    PUSH32(esp, 0x29BEF0);
    PUSH32(esp, 0x0029294Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029294A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00292950
 * Original: 0x00292950 - 0x00292973 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00292950: ;
    eax = MEM32(0x5BE694);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00292972; /* jne: not equal / not zero */

loc_00292959: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00292964u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00292964: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029296Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0029296A: ;
    esp = esp + 8;
    MEM32(0x5BE694) = eax;

loc_00292972: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00292980
 * Original: 0x00292980 - 0x002929A3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00292980: ;
    eax = MEM32(0x5BE698);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002929A2; /* jne: not equal / not zero */

loc_00292989: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00292994u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00292994: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029299Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0029299A: ;
    esp = esp + 8;
    MEM32(0x5BE698) = eax;

loc_002929A2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002929B0
 * Original: 0x002929B0 - 0x002929BC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002929B0(void)
{

loc_002929B0: ;
    PUSH32(esp, 0x29E070);
    PUSH32(esp, 0x002929BAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002929BA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002929C0
 * Original: 0x002929C0 - 0x002929E3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002929C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002929C0: ;
    eax = MEM32(0x5BE69C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002929E2; /* jne: not equal / not zero */

loc_002929C9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002929D4u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002929D4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002929DAu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002929DA: ;
    esp = esp + 8;
    MEM32(0x5BE69C) = eax;

loc_002929E2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002929F0
 * Original: 0x002929F0 - 0x00292A13 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002929F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002929F0: ;
    eax = MEM32(0x5BE6A0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00292A12; /* jne: not equal / not zero */

loc_002929F9: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00292A04u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00292A04: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00292A0Au); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00292A0A: ;
    esp = esp + 8;
    MEM32(0x5BE6A0) = eax;

loc_00292A12: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00292A20
 * Original: 0x00292A20 - 0x00292A2C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292A20(void)
{

loc_00292A20: ;
    PUSH32(esp, 0x29E140);
    PUSH32(esp, 0x00292A2Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00292A2A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00292A30
 * Original: 0x00292A30 - 0x00292A85 (85 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292A30(void)
{

loc_00292A30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE6A0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00292A40u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00292A40: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x47247C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00292A50u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00292A50: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00292A5Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00292A5B: ;
    ebx = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ebx;
    PUSH32(esp, 0x00292A66u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00292A66: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x472474);
    PUSH32(esp, 0x47246C);
    PUSH32(esp, 0x472464);
    ecx = esi;
    MEM8(ebx + 0x26) = 0;
    PUSH32(esp, 0x00292A81u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00292A81: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00292A90
 * Original: 0x00292A90 - 0x00292AC9 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292A90(void)
{

loc_00292A90: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE6A4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00292A9Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00292A9F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x472490);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00292AAFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00292AAF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x47248C);
    PUSH32(esp, 0x472488);
    PUSH32(esp, 0x472484);
    ecx = esi;
    PUSH32(esp, 0x00292AC6u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00292AC6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00292AD0
 * Original: 0x00292AD0 - 0x00292B32 (98 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292AD0(void)
{

loc_00292AD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE6A8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00292AE1u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00292AE1: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x4724AC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00292AF1u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00292AF1: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00292AF9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00292AF9: ;
    ebx = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x10) = 6;
    PUSH32(esp, 0x00292B0Fu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00292B0F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4724A4);
    PUSH32(esp, 0x47249C);
    PUSH32(esp, 0x472494);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x1AA1A0;
    PUSH32(esp, 0x00292B2Du); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00292B2D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00292B40
 * Original: 0x00292B40 - 0x00292B79 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292B40(void)
{

loc_00292B40: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE6AC);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00292B4Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00292B4F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x4724C0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00292B5Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00292B5F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4724BC);
    PUSH32(esp, 0x4724B8);
    PUSH32(esp, 0x4724B4);
    ecx = esi;
    PUSH32(esp, 0x00292B76u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00292B76: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00292B80
 * Original: 0x00292B80 - 0x00292BC5 (69 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292B80(void)
{

loc_00292B80: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE6B4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00292B8Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00292B8F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x4724D0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00292B9Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00292B9F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00292BA7u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00292BA7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4724CC);
    PUSH32(esp, 0x4724C8);
    PUSH32(esp, 0x4724C4);
    ecx = esi;
    MEM8(eax + 0x26) = 0;
    PUSH32(esp, 0x00292BC2u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00292BC2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00292BD0
 * Original: 0x00292BD0 - 0x00292C1D (77 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292BD0(void)
{

loc_00292BD0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE6B8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00292BDFu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00292BDF: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x4724EC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00292BEFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00292BEF: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00292BFAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00292BFA: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x00292C03u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00292C03: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4724E4);
    PUSH32(esp, 0x4724DC);
    PUSH32(esp, 0x4724D4);
    ecx = esi;
    PUSH32(esp, 0x00292C1Au); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00292C1A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00292C20
 * Original: 0x00292C20 - 0x00292C48 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00292C20: ;
    eax = MEM32(0x5BE6BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00292C47; /* jne: not equal / not zero */

loc_00292C29: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x472514);
    PUSH32(esp, 0x4724F4);
    PUSH32(esp, 0x406A9C);
    PUSH32(esp, 0x00292C3Fu); RECOMP_ABI_CALL(0x00220C10u, sub_00220C10); /* call 0x00220C10 */

loc_00292C3F: ;
    esp = esp + 0x10;
    MEM32(0x5BE6BC) = eax;

loc_00292C47: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00292C50
 * Original: 0x00292C50 - 0x00292CB2 (98 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292C50(void)
{

loc_00292C50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE6C0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00292C61u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00292C61: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x472540);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00292C71u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00292C71: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00292C79u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00292C79: ;
    ebx = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00292C8Fu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00292C8F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x47253C);
    PUSH32(esp, 0x472538);
    PUSH32(esp, 0x472534);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x292C20;
    PUSH32(esp, 0x00292CADu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00292CAD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00292CC0
 * Original: 0x00292CC0 - 0x00292D21 (97 bytes, 33 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292CC0(void)
{

loc_00292CC0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE6C4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00292CCFu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00292CCF: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x472568);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00292CDFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00292CDF: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00292CEAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00292CEA: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x00292CF3u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00292CF3: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00292CFEu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00292CFE: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x00292D07u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00292D07: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x47255C);
    PUSH32(esp, 0x472550);
    PUSH32(esp, 0x472544);
    ecx = esi;
    PUSH32(esp, 0x00292D1Eu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00292D1E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00292D30
 * Original: 0x00292D30 - 0x00292D53 (35 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292D30(void)
{

loc_00292D30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00292D43u); RECOMP_ABI_CALL(0x001B3680u, sub_001B3680); /* call 0x001B3680 */

loc_00292D43: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00292D4Eu); RECOMP_ABI_CALL(0x001B36B0u, sub_001B36B0); /* call 0x001B36B0 */

loc_00292D4E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00292D60
 * Original: 0x00292D60 - 0x00292D96 (54 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292D60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00292D60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    esi = ecx;
    ebx = MEM32(esi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x374); PUSH32(esp, 0x00292D75u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00292D75: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x78); PUSH32(esp, 0x00292D7Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00292D7B: ;
    edx = MEM32(edi);
    ebx = MEM32(esi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x37C); PUSH32(esp, 0x00292D87u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00292D87: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(ebx + 0x7C); PUSH32(esp, 0x00292D90u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00292D90: ;
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
 * sub_00292DA0
 * Original: 0x00292DA0 - 0x00292DB2 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292DA0(void)
{

loc_00292DA0: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 0xC));
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00292DAFu); RECOMP_ABI_CALL(0x001B3640u, sub_001B3640); /* call 0x001B3640 */

loc_00292DAF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00292DC0
 * Original: 0x00292DC0 - 0x00292DDD (29 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292DC0(void)
{

loc_00292DC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x36C); PUSH32(esp, 0x00292DD2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00292DD2: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x78); PUSH32(esp, 0x00292DD8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00292DD8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00292DE0
 * Original: 0x00292DE0 - 0x00292DEC (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292DE0(void)
{

loc_00292DE0: ;
    SET_LO16(eax, MEM16(esp + 4));
    MEM16(ecx + 0xA) = LO16(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00292DF0
 * Original: 0x00292DF0 - 0x00292E0F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292DF0(void)
{

loc_00292DF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00292DF8u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00292DF8: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM16(esi + 0xA) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00292E05u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00292E05: ;
    SET_LO16(ecx, MEM16(eax + 8));
    MEM16(esi + 8) = LO16(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00292E10
 * Original: 0x00292E10 - 0x00292E30 (32 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292E10(void)
{

loc_00292E10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00292E1Du); RECOMP_ABI_CALL(0x0015FDF0u, sub_0015FDF0); /* call 0x0015FDF0 */

loc_00292E1D: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00292E24u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00292E24: ;
    SET_LO16(eax, MEM16(eax + 8));
    MEM16(esi + 8) = LO16(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00292E30
 * Original: 0x00292E30 - 0x00292E52 (34 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292E30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00292E30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00292E3Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00292E3A: ;
    ecx = eax;
    PUSH32(esp, 0x00292E41u); RECOMP_ABI_CALL(0x001EA440u, sub_001EA440); /* call 0x001EA440 */

loc_00292E41: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00292E4A; /* jne: not equal / not zero */

loc_00292E45: ;
    MEM32(0x5BE6CC) = eax;

loc_00292E4A: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

}

/**
 * sub_00292E60
 * Original: 0x00292E60 - 0x00292E92 (50 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00292E60: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x00292E74u); RECOMP_ABI_CALL(0x001B39E0u, sub_001B39E0); /* call 0x001B39E0 */

loc_00292E74: ;
    eax = MEM32(0x5BE6CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00292E8E; /* je: equal / zero */

loc_00292E7D: ;
    edx = MEM32(esi + 0x14);
    MEM32(eax + 0x14) = edx;
    ecx = MEM32(0x5BE6CC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x00292E8Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00292E8E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00292EA0
 * Original: 0x00292EA0 - 0x00292EED (77 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00292EA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    esi = ecx;
    ebx = MEM32(esi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x270); PUSH32(esp, 0x00292EB5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00292EB5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x78); PUSH32(esp, 0x00292EBBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00292EBB: ;
    edx = MEM32(edi);
    ebx = MEM32(esi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x278); PUSH32(esp, 0x00292EC7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00292EC7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x7C); PUSH32(esp, 0x00292ECDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00292ECD: ;
    eax = MEM32(0x5BE6CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00292EE7; /* jne: not equal / not zero */

loc_00292ED6: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E81B0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00292EE2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00292EE2: ;
    MEM32(0x5BE6CC) = eax;

loc_00292EE7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00292EF0
 * Original: 0x00292EF0 - 0x00292EFD (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292EF0(void)
{

loc_00292EF0: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(eax + 0x1E));
    MEM16(eax + 0xA) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00292F00
 * Original: 0x00292F00 - 0x00292F10 (16 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292F00(void)
{

loc_00292F00: ;
    SET_LO16(eax, MEM16(esp + 4));
    MEM16(ecx + 0x1E) = LO16(eax);
    MEM16(ecx + 0xA) = LO16(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00292F10
 * Original: 0x00292F10 - 0x00292F37 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292F10(void)
{

loc_00292F10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00292F18u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00292F18: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM16(esi + 0xA) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00292F25u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00292F25: ;
    SET_LO16(ecx, MEM16(eax + 8));
    SET_LO16(edx, MEM16(esi + 0x1E));
    MEM16(esi + 8) = LO16(ecx);
    MEM16(esi + 0xA) = LO16(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00292F40
 * Original: 0x00292F40 - 0x00292F58 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292F40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00292F40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C8360); /* fmul dword ptr [0x3c8360] */
    PUSH32(esp, 0x00292F53u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00292F53: ;
    MEM8(esi + 0x1C) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00292F60
 * Original: 0x00292F60 - 0x00292F74 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292F60(void)
{

loc_00292F60: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x00292F71u); RECOMP_ABI_CALL(0x001B6AE0u, sub_001B6AE0); /* call 0x001B6AE0 */

loc_00292F71: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00292F80
 * Original: 0x00292F80 - 0x00292F94 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292F80(void)
{

loc_00292F80: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x00292F91u); RECOMP_ABI_CALL(0x001B6AE0u, sub_001B6AE0); /* call 0x001B6AE0 */

loc_00292F91: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00292FA0
 * Original: 0x00292FA0 - 0x00292FB2 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292FA0(void)
{

loc_00292FA0: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 0xC));
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00292FAFu); RECOMP_ABI_CALL(0x001B3940u, sub_001B3940); /* call 0x001B3940 */

loc_00292FAF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00292FC0
 * Original: 0x00292FC0 - 0x00292FDD (29 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292FC0(void)
{

loc_00292FC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x268); PUSH32(esp, 0x00292FD2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00292FD2: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x78); PUSH32(esp, 0x00292FD8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00292FD8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00292FE0
 * Original: 0x00292FE0 - 0x0029301D (61 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00292FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00292FE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x40);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00292FF3u); RECOMP_ABI_CALL(0x001AFAF0u, sub_001AFAF0); /* call 0x001AFAF0 */

loc_00292FF3: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00292FFEu); RECOMP_ABI_CALL(0x001AFA90u, sub_001AFA90); /* call 0x001AFA90 */

loc_00292FFE: ;
    edx = MEM32(esi + 0x38);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00293009u); RECOMP_ABI_CALL(0x001AFB10u, sub_001AFB10); /* call 0x001AFB10 */

loc_00293009: ;
    esi = MEM32(esi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00293018; /* je: equal / zero */

loc_00293010: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00293018u); RECOMP_ABI_CALL(0x001BDBC0u, sub_001BDBC0); /* call 0x001BDBC0 */

loc_00293018: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293020
 * Original: 0x00293020 - 0x00293057 (55 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293020(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00293020: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2E4); PUSH32(esp, 0x00293032u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293032: ;
    MEM32(edi + 0x38) = eax;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2DC); PUSH32(esp, 0x0029303Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029303F: ;
    MEMD(edi + 0x30) = fp_top(); /* fst */
    MEMF(edi + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2D0); PUSH32(esp, 0x0029304Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029304F: ;
    MEM32(edi + 0x3C) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0029302C
 * Original: 0x0029302C - 0x00293057 (43 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029302C(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0029302C: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2E4); PUSH32(esp, 0x00293032u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293032: ;
    MEM32(edi + 0x38) = eax;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2DC); PUSH32(esp, 0x0029303Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029303F: ;
    MEMD(edi + 0x30) = fp_top(); /* fst */
    MEMF(edi + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x2D0); PUSH32(esp, 0x0029304Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029304F: ;
    MEM32(edi + 0x3C) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00293060
 * Original: 0x00293060 - 0x0029307D (29 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00293060(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00293060: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00293068u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00293068: ;
    PUSH32(esp, 1);
    ecx = esi + 0x10;
    PUSH32(esp, 0x00293072u); RECOMP_ABI_CALL(0x00243650u, sub_00243650); /* call 0x00243650 */

loc_00293072: ;
    fp_push(MEMD(esi + 0x30)); /* fld double */
    MEMF(esi + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x3C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00293080
 * Original: 0x00293080 - 0x002930B2 (50 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00293080(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00293080: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00293088u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00293088: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM16(esi + 0xA) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00293095u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293095: ;
    SET_LO16(ecx, MEM16(eax + 8));
    MEM16(esi + 8) = LO16(ecx);
    PUSH32(esp, 1);
    ecx = esi + 0x10;
    PUSH32(esp, 0x002930A7u); RECOMP_ABI_CALL(0x00243650u, sub_00243650); /* call 0x00243650 */

loc_002930A7: ;
    fp_push(MEMD(esi + 0x30)); /* fld double */
    MEMF(esi + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x3C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002930C0
 * Original: 0x002930C0 - 0x002930D2 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002930C0(void)
{

loc_002930C0: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 0xC));
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002930CFu); RECOMP_ABI_CALL(0x0015FDF0u, sub_0015FDF0); /* call 0x0015FDF0 */

loc_002930CF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002930E0
 * Original: 0x002930E0 - 0x002930FD (29 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002930E0(void)
{

loc_002930E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x384); PUSH32(esp, 0x002930F2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002930F2: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x78); PUSH32(esp, 0x002930F8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002930F8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293100
 * Original: 0x00293100 - 0x00293117 (23 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293100(void)
{

loc_00293100: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00293108u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00293108: ;
    PUSH32(esp, 1);
    ecx = esi + 0xC;
    PUSH32(esp, 0x00293112u); RECOMP_ABI_CALL(0x00243650u, sub_00243650); /* call 0x00243650 */

loc_00293112: ;
    MEM32(esi + 0x1C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00293120
 * Original: 0x00293120 - 0x0029314C (44 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293120(void)
{

loc_00293120: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00293128u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00293128: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM16(esi + 0xA) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00293135u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293135: ;
    SET_LO16(ecx, MEM16(eax + 8));
    MEM16(esi + 8) = LO16(ecx);
    PUSH32(esp, 1);
    ecx = esi + 0xC;
    PUSH32(esp, 0x00293147u); RECOMP_ABI_CALL(0x00243650u, sub_00243650); /* call 0x00243650 */

loc_00293147: ;
    MEM32(esi + 0x1C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00293150
 * Original: 0x00293150 - 0x00293160 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293150(void)
{

loc_00293150: ;
    eax = MEM32(ecx + 0x1C);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029315Du); RECOMP_ABI_CALL(0x001B3010u, sub_001B3010); /* call 0x001B3010 */

loc_0029315D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293160
 * Original: 0x00293160 - 0x00293176 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293160(void)
{

loc_00293160: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10C); PUSH32(esp, 0x0029316Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029316F: ;
    MEM32(esi + 0x1C) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293180
 * Original: 0x00293180 - 0x00293194 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293180(void)
{

loc_00293180: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 1);
    ecx = esi + 0xC;
    PUSH32(esp, 0x0029318Fu); RECOMP_ABI_CALL(0x00243650u, sub_00243650); /* call 0x00243650 */

loc_0029318F: ;
    MEM32(esi + 0x1C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002931A0
 * Original: 0x002931A0 - 0x002931BF (31 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002931A0(void)
{

loc_002931A0: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(edx, MEM8(esp + 8));
    MEM8(ecx + 0xC) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0xC));
    MEM8(ecx + 0xD) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM8(ecx + 0xE) = LO8(eax);
    MEM8(ecx + 0xF) = LO8(edx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002931C0
 * Original: 0x002931C0 - 0x002931E3 (35 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002931C0(void)
{

loc_002931C0: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 0xF));
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ecx + 0xE));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 0xD));
    ecx = ZX8(MEM8(ecx + 0xC));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x002931E0u); RECOMP_ABI_CALL(0x001B3700u, sub_001B3700); /* call 0x001B3700 */

loc_002931E0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002931F0
 * Original: 0x002931F0 - 0x00293235 (69 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002931F0(void)
{

loc_002931F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    edx = esp + 7;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 0xA;
    PUSH32(esp, edx);
    edx = esp + 0xD;
    PUSH32(esp, edx);
    esi = ecx;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x38C); PUSH32(esp, 0x00293214u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293214: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    SET_LO8(ecx, MEM8(esp + 5));
    SET_LO8(edx, MEM8(esp + 6));
    MEM8(esi + 0xC) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 7));
    MEM8(esi + 0xD) = LO8(ecx);
    MEM8(esi + 0xE) = LO8(edx);
    MEM8(esi + 0xF) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293240
 * Original: 0x00293240 - 0x00293273 (51 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293240(void)
{

loc_00293240: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    esi = ecx;
    ebx = MEM32(esi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x39C); PUSH32(esp, 0x00293255u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293255: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebx + 0x7C); PUSH32(esp, 0x0029325Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029325B: ;
    edx = MEM32(edi);
    ebx = MEM32(esi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3A4); PUSH32(esp, 0x00293267u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293267: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x78); PUSH32(esp, 0x0029326Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029326D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293280
 * Original: 0x00293280 - 0x002932A5 (37 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293280(void)
{

loc_00293280: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0xC));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00293295u); RECOMP_ABI_CALL(0x001B37E0u, sub_001B37E0); /* call 0x001B37E0 */

loc_00293295: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x002932A0u); RECOMP_ABI_CALL(0x001B3830u, sub_001B3830); /* call 0x001B3830 */

loc_002932A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002932B0
 * Original: 0x002932B0 - 0x002932D4 (36 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002932B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002932B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x002932BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002932BA: ;
    ecx = eax;
    PUSH32(esp, 0x002932C1u); RECOMP_ABI_CALL(0x001EA440u, sub_001EA440); /* call 0x001EA440 */

loc_002932C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002932CC; /* jne: not equal / not zero */

loc_002932C5: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x002932CCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002932CC: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

}

/**
 * sub_002932E0
 * Original: 0x002932E0 - 0x00293354 (116 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002932E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002932E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x002932EBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002932EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00293350; /* jne: not equal / not zero */

loc_002932F0: ;
    edx = MEM32(esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x002932FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002932FC: ;
    edi = MEM32(esp + 0x10);
    eax = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x0029330Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029330C: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x00293314u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293314: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0029331Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029331C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x420); PUSH32(esp, 0x00293325u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293325: ;
    edx = MEM32(esi);
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00293348; /* je: equal / zero */

loc_00293330: ;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x98); PUSH32(esp, 0x00293337u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293337: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x00293342u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293342: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00293348: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0029334Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029334E: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00293350: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293360
 * Original: 0x00293360 - 0x002933BE (94 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00293360: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x8C); PUSH32(esp, 0x0029336Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029336C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002933BB; /* je: equal / zero */

loc_00293371: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0029337Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029337C: ;
    edi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x0029338Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029338A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00293394u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293394: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x428); PUSH32(esp, 0x002933A4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002933A4: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x002933AEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002933AE: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x98); PUSH32(esp, 0x002933BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002933BA: ;
    POP32(esp, edi);

loc_002933BB: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002933C0
 * Original: 0x002933C0 - 0x002933E2 (34 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002933C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002933C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x002933CAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002933CA: ;
    ecx = eax;
    PUSH32(esp, 0x002933D1u); RECOMP_ABI_CALL(0x001EA440u, sub_001EA440); /* call 0x001EA440 */

loc_002933D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002933DA; /* jne: not equal / not zero */

loc_002933D5: ;
    MEM32(0x5BE6D0) = eax;

loc_002933DA: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

}

/**
 * sub_002933F0
 * Original: 0x002933F0 - 0x0029340A (26 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002933F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002933F0: ;
    eax = MEM32(0x5BE6D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00293407; /* je: equal / zero */

loc_002933F9: ;
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(eax);
    MEM32(esp + 4) = ecx;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x70)); return; /* indirect tail jmp */

loc_00293407: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293410
 * Original: 0x00293410 - 0x0029343D (45 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00293410: ;
    eax = MEM32(0x5BE6D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00293433; /* jne: not equal / not zero */

loc_0029341C: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E8A3C);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0029342Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029342A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(0x5BE6D0) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00293439; /* je: equal / zero */

loc_00293433: ;
    ecx = MEM32(eax + 0x14);
    MEM32(esi + 0xC) = ecx;

loc_00293439: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293440
 * Original: 0x00293440 - 0x0029345D (29 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293440(void)
{

loc_00293440: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3B4); PUSH32(esp, 0x00293452u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293452: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x78); PUSH32(esp, 0x00293458u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293458: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293460
 * Original: 0x00293460 - 0x00293470 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293460(void)
{

loc_00293460: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029346Du); RECOMP_ABI_CALL(0x001B38B0u, sub_001B38B0); /* call 0x001B38B0 */

loc_0029346D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293470
 * Original: 0x00293470 - 0x0029348D (29 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293470(void)
{

loc_00293470: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3AC); PUSH32(esp, 0x00293482u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293482: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x78); PUSH32(esp, 0x00293488u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293488: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293490
 * Original: 0x00293490 - 0x002934A2 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293490(void)
{

loc_00293490: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 0xC));
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029349Fu); RECOMP_ABI_CALL(0x001B3870u, sub_001B3870); /* call 0x001B3870 */

loc_0029349F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002934B0
 * Original: 0x002934B0 - 0x002934C2 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002934B0(void)
{

loc_002934B0: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 0xC));
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002934BFu); RECOMP_ABI_CALL(0x001B38E0u, sub_001B38E0); /* call 0x001B38E0 */

loc_002934BF: ;
    esp += 8; return; /* ret 4 */

}
