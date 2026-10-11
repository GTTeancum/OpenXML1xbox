/**
 * X-Men Legends - Recompiled code chunk 62
 * Functions: 250 (0x00277FF0 - 0x00281A60)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00277FF0
 * Original: 0x00277FF0 - 0x00278050 (96 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00277FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00277FF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0027804D; /* jle: less or equal (signed <=) */

loc_00277FFD: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0027802E; /* jle: less or equal (signed <=) */

loc_00278003: ;
    edx = edx | 0xFFFFFFFFu;
    PUSH32(esp, edi);

loc_00278007: ;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + ecx * 4);
    edi = MEM32(eax + 0x14);
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x24) = edi;
    MEM8(eax + 0x20) = LO8(ebx);
    MEM8(eax + 0x28) = LO8(ebx);
    MEM32(eax + 0x30) = ebx;
    eax = MEM32(esi + 0xC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00278007; /* jl: less (signed <) */

loc_0027802D: ;
    POP32(esp, edi);

loc_0027802E: ;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx + 8) = ebx;
    edx = MEM32(esi + 0x1C);
    ecx = esi;
    MEM32(edx + 8) = ebx;
    PUSH32(esp, 0x00278041u); RECOMP_ABI_CALL(0x00263420u, sub_00263420); /* call 0x00263420 */

loc_00278041: ;
    eax = MEM32(esi + 0x2C);
    MEM32(eax + 8) = ebx;
    ecx = MEM32(esi + 0x40);
    MEM32(ecx + 0x14) = ebx;

loc_0027804D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00278050
 * Original: 0x00278050 - 0x00278125 (213 bytes, 81 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278050(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00278050: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0027811F; /* je: equal / zero */

loc_00278064: ;
    _fa = (uint32_t)(MEM8(esi + 0x3C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x3C), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00278079; /* jne: not equal / not zero */

loc_0027806A: ;
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00278073u); RECOMP_ABI_CALL(0x0025E1D0u, sub_0025E1D0); /* call 0x0025E1D0 */

loc_00278073: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00278079: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x24);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x0027808Du); RECOMP_ABI_CALL(0x001F1920u, sub_001F1920); /* call 0x001F1920 */

loc_0027808D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002780A7; /* je: equal / zero */

loc_00278092: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    edi = MEM32(esi + 0x28);
    ebx = MEM32(edi + 0x10);
    edx = MEM32(esi + 0x44);
    edi = MEM32(edx + ecx * 4);
    edi = edi + MEM32(ebx + eax * 4);
    goto loc_00278101;

loc_002780A7: ;
    eax = MEM32(edi + 8);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x002780B3u); RECOMP_ABI_CALL(0x0024E830u, sub_0024E830); /* call 0x0024E830 */

loc_002780B3: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0027811E; /* jge: greater or equal (signed >=) */

loc_002780B9: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002780C2u); RECOMP_ABI_CALL(0x00274300u, sub_00274300); /* call 0x00274300 */

loc_002780C2: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002780D2u); RECOMP_ABI_CALL(0x00200E60u, sub_00200E60); /* call 0x00200E60 */

loc_002780D2: ;
    edx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = MEM32(esi + 0x44);
    edi = MEM32(eax + edx * 4);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x14);
    edi = edi + edx;
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(edx + edi * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002780F1u); RECOMP_ABI_CALL(0x0029C1C0u, sub_0029C1C0); /* call 0x0029C1C0 */

loc_002780F1: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + edi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00278101u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00278101: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, ebp);
    if (TEST_Z(_fa, _fb)) goto loc_00278119; /* je: equal / zero */

loc_0027810D: ;
    PUSH32(esp, 0x00278112u); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_00278112: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00278119: ;
    PUSH32(esp, 0x0027811Eu); RECOMP_ABI_CALL(0x00274330u, sub_00274330); /* call 0x00274330 */

loc_0027811E: ;
    POP32(esp, edi);

loc_0027811F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00278130
 * Original: 0x00278130 - 0x002781C1 (145 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00278130: ;
    esp = esp - 0x80;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x8C);
    eax = MEM32(ebx + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x5BE5B8);
    edx = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x44);
    edx = MEM32(ecx + edx * 4);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + edx * 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    esi = ebx + 0xA4;
    if (TEST_Z(_fa, _fb)) goto loc_00278171; /* je: equal / zero */

loc_0027816A: ;
    edx = MEM32(eax + 0x10);
    ecx = MEM32(edx + ecx * 4 + -4);

loc_00278171: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00278190; /* je: equal / zero */

loc_00278176: ;
    ecx = ecx + 0xC;
    PUSH32(esp, ecx);
    ecx = esp + 0x54;
    PUSH32(esp, 0x00278183u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_00278183: ;
    PUSH32(esp, esi);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    goto loc_0027819A;

loc_00278190: ;
    PUSH32(esp, 0x46D0A0);
    edx = esp + 0x14;
    PUSH32(esp, edx);

loc_0027819A: ;
    ecx = edi;
    PUSH32(esp, 0x002781A1u); RECOMP_ABI_CALL(0x00257A60u, sub_00257A60); /* call 0x00257A60 */

loc_002781A1: ;
    ecx = MEM32(edi + 0x24);
    ebx = ebx + 0x64;
    PUSH32(esp, ebx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ecx + 0xC;
    PUSH32(esp, 0x002781B5u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_002781B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x80;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002781D0
 * Original: 0x002781D0 - 0x002781FC (44 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002781D0(void)
{

loc_002781D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ebx;
    PUSH32(esp, 0x002781E0u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_002781E0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002781E6u); RECOMP_ABI_CALL(0x00246D40u, sub_00246D40); /* call 0x00246D40 */

loc_002781E6: ;
    esp = esp + 4;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x002781F4u); RECOMP_ABI_CALL(0x00264000u, sub_00264000); /* call 0x00264000 */

loc_002781F4: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00278200
 * Original: 0x00278200 - 0x002782B6 (182 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00278200: ;
    ecx = MEM32(0x5BE5B8);
    edx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x34);
    ecx = MEM32(eax + 0x44);
    edx = MEM32(ecx + edx * 4);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + edx * 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0027822C; /* jne: not equal / not zero */

loc_00278228: ;
    eax = 0; /* xor self */
    goto loc_00278233;

loc_0027822C: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + ecx * 4 + -4);

loc_00278233: ;
    ecx = MEM32(0x5BDC64);
    edi = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00278247u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00278247: ;
    esi = MEM32(esi + 0x34);
    PUSH32(esp, 0x0027824Fu); RECOMP_ABI_CALL(0x002A0DD0u, sub_002A0DD0); /* call 0x002A0DD0 */

loc_0027824F: ;
    eax = MEM32(eax + 8);
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx + eax * 4);
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00278273; /* je: equal / zero */

loc_00278265: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(esp + 0xC) = LO8(edx);
    goto loc_00278278;

loc_00278273: ;
    MEM8(esp + 0xC) = 0;

loc_00278278: ;
    eax = MEM32(0x5BDC64);
    ecx = MEM32(eax + 0xB8);
    esi = MEM32(ecx + 0x14);
    edx = esi + 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027828Fu); RECOMP_ABI_CALL(0x002635A0u, sub_002635A0); /* call 0x002635A0 */

loc_0027828F: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x5BDC64);
    ecx = MEM32(ecx + 0xB8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002782A6u); RECOMP_ABI_CALL(0x0025E520u, sub_0025E520); /* call 0x0025E520 */

loc_002782A6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    ecx = edi;
    PUSH32(esp, 0x002782B1u); RECOMP_ABI_CALL(0x00259B20u, sub_00259B20); /* call 0x00259B20 */

loc_002782B1: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002782C0
 * Original: 0x002782C0 - 0x00278308 (72 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002782C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002782C0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(0x5BE5B8);
    edx = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x44);
    edx = MEM32(ecx + edx * 4);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + edx * 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002782EA; /* jne: not equal / not zero */

loc_002782E6: ;
    eax = 0; /* xor self */
    goto loc_002782F1;

loc_002782EA: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + ecx * 4 + -4);

loc_002782F1: ;
    ecx = MEM32(0x5BDC98);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00278305u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00278305: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00278310
 * Original: 0x00278310 - 0x0027839A (138 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00278310: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0027831Eu); RECOMP_ABI_CALL(0x0015FDF0u, sub_0015FDF0); /* call 0x0015FDF0 */

loc_0027831E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00278395; /* jne: not equal / not zero */

loc_00278322: ;
    eax = MEM32(0x5BDED0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00278331; /* je: equal / zero */

loc_0027832E: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00278331: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027834D; /* je: equal / zero */

loc_00278338: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027834D; /* jne: not equal / not zero */

loc_00278348: ;
    PUSH32(esp, 0x0027834Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027834D: ;
    MEM32(esi + 0x1C) = edi;
    eax = MEM32(0x5BDC9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0027835E; /* je: equal / zero */

loc_0027835B: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027835E: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027837A; /* je: equal / zero */

loc_00278365: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027837A; /* jne: not equal / not zero */

loc_00278375: ;
    PUSH32(esp, 0x0027837Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027837A: ;
    MEM32(esi + 0x1C) = edi;
    ecx = MEM32(esi + 0xE8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0027838Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027838A: ;
    ecx = MEM32(esi + 0xEC);
    MEM8(ecx + 0xC) = 1;
    POP32(esp, edi);

loc_00278395: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002783A0
 * Original: 0x002783A0 - 0x0027841D (125 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002783A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002783A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x44);
    SET_LO8(ecx, MEM8(eax + 0x80));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002783C2; /* jne: not equal / not zero */

loc_002783B3: ;
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, 0x002783C2u); RECOMP_ABI_CALL(0x00263110u, sub_00263110); /* call 0x00263110 */

loc_002783C2: ;
    ecx = MEM32(esi + 0x34);
    MEM8(esi + 0x30) = LO8(ebx);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x002783CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002783CD: ;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x002783D5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002783D5: ;
    ecx = MEM32(esi + 0x48);
    MEM32(ecx + 0x14) = ebx;
    edx = MEM32(esi + 0x50);
    MEM32(edx + 0x14) = ebx;
    eax = MEM32(esi + 0x54);
    MEM32(eax + 0x14) = ebx;
    ecx = MEM32(esi + 0x58);
    MEM32(ecx + 0x14) = ebx;
    edx = MEM32(esi + 0x10C);
    MEM32(edx + 0x14) = ebx;
    eax = MEM32(esi + 0x5C);
    MEM32(eax + 0x14) = ebx;
    ecx = MEM32(esi + 0x60);
    MEM32(ecx + 0x14) = ebx;
    edx = MEM32(esi + 0x4C);
    MEM32(edx + 0x14) = ebx;
    eax = MEM32(esi + 0xF8);
    MEM32(eax + 8) = ebx;
    ecx = MEM32(esi + 0xFC);
    POP32(esp, esi);
    MEM32(ecx + 8) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00278420
 * Original: 0x00278420 - 0x00278466 (70 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00278420: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0027842Eu); RECOMP_ABI_CALL(0x00278310u, sub_00278310); /* call 0x00278310 */

loc_0027842E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00278461; /* jne: not equal / not zero */

loc_00278432: ;
    eax = MEM32(0x5BDCA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00278441; /* je: equal / zero */

loc_0027843E: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00278441: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027845D; /* je: equal / zero */

loc_00278448: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027845D; /* jne: not equal / not zero */

loc_00278458: ;
    PUSH32(esp, 0x0027845Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027845D: ;
    MEM32(esi + 0x1C) = edi;
    POP32(esp, edi);

loc_00278461: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00278470
 * Original: 0x00278470 - 0x002786AD (573 bytes, 206 insns)
 * Category: game_vtable
 * CC: thiscall, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278470(void)
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

loc_00278470: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM8(eax) = 0;
    PUSH32(esp, edi);
    MEM8(ecx) = 0;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00278493u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00278493: ;
    edi = eax;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = edx;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x1C) = edi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x002784ADu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002784AD: ;
    ecx = MEM32(esi + 0x28);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esi + 0x2C);
    ebx = ecx;
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edi)) >> 32) & 1);
    ebx = ebx + edi;
    edi = MEM32(esp + 0x48);
    eax = edx;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(ebp) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    MEM32(esp + 0x24) = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = MEM32(esp + 0x44);
    MEM32(esp + 0x20) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_002785B3; /* jl: less (signed <) */

loc_002784DB: ;
    if (CMP_G(_fas, _fbs)) goto loc_002784E5; /* jg: greater (signed >) */

loc_002784DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_002785B3; /* jbe: below or equal (unsigned <=) */

loc_002784E5: ;
    ebx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_002785A2; /* ja: above (unsigned >) */

loc_002784F1: ;
    { uint32_t _jt = MEM32(ebx * 4 + 0x2786B0); /* switch: 4 entries, 3 targets */
    if (_jt == 0x002784F8u) goto loc_002784F8;
    if (_jt == 0x00278509u) goto loc_00278509;
    if (_jt == 0x0027855Fu) goto loc_0027855F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002784F8: ;
    eax = MEM32(esp + 0x30);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(eax) = 1;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    esp += 36; return; /* ret 32 */

loc_00278509: ;
    ebx = esp + 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esp + 0x24)));
    eax = eax - MEM32(esp + 0x24);
    { uint64_t _t = (uint64_t)(edi) - (uint64_t)(ebp) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edi = (uint32_t)_t; }  /* sbb */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027851Du); RECOMP_ABI_CALL(0x0024ECA0u, sub_0024ECA0); /* call 0x0024ECA0 */

loc_0027851D: ;
    edi = MEM32(esp + 0x2C);
    ebx = MEM32(esp + 0x58);
    eax = MEM32(esi + 0x34);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edi)) >> 32) & 1);
    ebx = ebx + edi;
    edi = MEM32(esp + 0x48);
    { uint64_t _t = (uint64_t)(edi) + (uint64_t)(ebp) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edi = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002785D2; /* je: equal / zero */

loc_0027853C: ;
    edx = MEM32(esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00278548u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00278548: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_002785D2; /* jg: greater (signed >) */

loc_00278550: ;
    if (CMP_L(_fas, _fbs)) goto loc_00278556; /* jl: less (signed <) */

loc_00278552: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_002785D2; /* jae: above or equal (unsigned >=) */

loc_00278556: ;
    MEM32(esi + 0x34) = 1;
    goto loc_002785D2;

loc_0027855F: ;
    ebx = esp + 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esp + 0x20)));
    eax = eax - MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    { uint64_t _t = (uint64_t)(edi) - (uint64_t)(ebp) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edi = (uint32_t)_t; }  /* sbb */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00278573u); RECOMP_ABI_CALL(0x0024ECA0u, sub_0024ECA0); /* call 0x0024ECA0 */

loc_00278573: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00278590; /* je: equal / zero */

loc_0027857A: ;
    ebx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x44);
    edi = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x48);
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(ecx));
    ebx = ebx - ecx;
    { uint64_t _t = (uint64_t)(edi) - (uint64_t)(eax) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edi = (uint32_t)_t; }  /* sbb */
    goto loc_002785D2;

loc_00278590: ;
    ebx = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x48);
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(ecx)) >> 32) & 1);
    ebx = ebx + ecx;
    { uint64_t _t = (uint64_t)(edi) + (uint64_t)(ebp) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edi = (uint32_t)_t; }  /* adc */
    goto loc_002785D2;

loc_002785A2: ;
    eax = MEM32(esp + 0x2C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(eax) = 1;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    esp += 36; return; /* ret 32 */

loc_002785B3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_002785D0; /* jg: greater (signed >) */

loc_002785B7: ;
    if (CMP_L(_fas, _fbs)) goto loc_002785BF; /* jl: less (signed <) */

loc_002785B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_002785D0; /* jae: above or equal (unsigned >=) */

loc_002785BF: ;
    ecx = MEM32(esp + 0x2C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ecx) = 1;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    esp += 36; return; /* ret 32 */

loc_002785D0: ;
    ebx = eax;

loc_002785D2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x14) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00278686; /* jl: less (signed <) */

loc_002785DC: ;
    if (CMP_G(_fas, _fbs)) goto loc_002785E8; /* jg: greater (signed >) */

loc_002785DE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00278686; /* jbe: below or equal (unsigned <=) */

loc_002785E8: ;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00278675; /* jne: not equal / not zero */

loc_002785F2: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(edx + 8);
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x38);
    esi = MEM32(esp + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;
    eax = ebx;
    ebx = MEM32(esp + 0x10);
    MEM32(edx) = 0;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ebx));
    eax = eax - ebx;
    edx = edi;
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(esi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x00278620u); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_00278620: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x2C) = eax;
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00278632; /* jge: greater or equal (signed >=) */

loc_0027862C: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00278632: ;
    eax = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x10);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x14);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    edx = MEM32(esp + 0x24);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x00278653u); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_00278653: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x2C) = eax;
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00278665; /* jge: greater or equal (signed >=) */

loc_0027865F: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_00278665: ;
    ecx = MEM32(esp + 0x40);
    POP32(esp, edi);
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    esp += 36; return; /* ret 32 */

loc_00278675: ;
    edx = MEM32(esp + 0x30);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(edx) = 1;
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    esp += 36; return; /* ret 32 */

loc_00278686: ;
    eax = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x002786A3u); RECOMP_ABI_CALL(0x002673C0u, sub_002673C0); /* call 0x002673C0 */

loc_002786A3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002786C0
 * Original: 0x002786C0 - 0x00278850 (400 bytes, 149 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002786C0(void)
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

loc_002786C0: ;
    eax = MEM32(esp + 0xC);
    esp = esp - 0x30;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x23;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002786F6u); RECOMP_ABI_CALL(0x00278470u, sub_00278470); /* call 0x00278470 */

loc_002786F6: ;
    edi = MEM32(esp + 0x3C);
    ecx = edi;
    PUSH32(esp, 0x00278701u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00278701: ;
    SET_LO8(eax, MEM8(esp + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00278758; /* je: equal / zero */

loc_00278709: ;
    _fa = (uint32_t)(MEM8(esi + 0x38)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x38), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00278727; /* je: equal / zero */

loc_0027870F: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0027871Du); RECOMP_ABI_CALL(0x00258CE0u, sub_00258CE0); /* call 0x00258CE0 */

loc_0027871D: ;
    PUSH32(esp, edi);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x00278727u); RECOMP_ABI_CALL(0x0023F4A0u, sub_0023F4A0); /* call 0x0023F4A0 */

loc_00278727: ;
    _fa = (uint32_t)(MEM8(esi + 0x38)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x38), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027883F; /* je: equal / zero */

loc_00278731: ;
    eax = MEM32(esi);
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xAC); PUSH32(esp, 0x00278742u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00278742: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0027874Eu); RECOMP_ABI_CALL(0x0023E460u, sub_0023E460); /* call 0x0023E460 */

loc_0027874E: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x30;
    esp += 16; return; /* ret 12 */

loc_00278758: ;
    SET_LO8(eax, MEM8(esp + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_002787BF; /* je: equal / zero */

loc_00278761: ;
    _fa = (uint32_t)(MEM8(esi + 0x38)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x38), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00278785; /* je: equal / zero */

loc_00278767: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 8);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0027877Bu); RECOMP_ABI_CALL(0x00258CE0u, sub_00258CE0); /* call 0x00258CE0 */

loc_0027877B: ;
    PUSH32(esp, edi);
    ecx = esp + 0x30;
    PUSH32(esp, 0x00278785u); RECOMP_ABI_CALL(0x0023F4A0u, sub_0023F4A0); /* call 0x0023F4A0 */

loc_00278785: ;
    _fa = (uint32_t)(MEM8(esi + 0x38)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x38), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027883E; /* je: equal / zero */

loc_0027878F: ;
    ebx = MEM32(esi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x84); PUSH32(esp, 0x0027879Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027879E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0xAC); PUSH32(esp, 0x002787A8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002787A8: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x002787B4u); RECOMP_ABI_CALL(0x0023E460u, sub_0023E460); /* call 0x0023E460 */

loc_002787B4: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x30;
    esp += 16; return; /* ret 12 */

loc_002787BF: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C89C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c89c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002787DA; /* jp: parity */

loc_002787D0: ;
    MEM32(esp + 0x40) = 0;
    goto loc_002787E6;

loc_002787DA: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 0x10); /* fdiv dword ptr [esp + 0x10] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */

loc_002787E6: ;
    _fa = (uint32_t)(MEM8(esi + 0x38)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x38), 2 (8-bit) */
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    if (TEST_Z(_fa, _fb)) goto loc_00278815; /* je: equal / zero */

loc_002787F5: ;
    eax = MEM32(esp + 0x44);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xB8); PUSH32(esp, 0x0027880Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027880B: ;
    PUSH32(esp, edi);
    ecx = esp + 0x34;
    PUSH32(esp, 0x00278815u); RECOMP_ABI_CALL(0x0023F4A0u, sub_0023F4A0); /* call 0x0023F4A0 */

loc_00278815: ;
    _fa = (uint32_t)(MEM8(esi + 0x38)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x38), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027883D; /* je: equal / zero */

loc_0027881B: ;
    eax = MEM32(esp + 0x44);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x00278831u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00278831: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0027883Du); RECOMP_ABI_CALL(0x0023E460u, sub_0023E460); /* call 0x0023E460 */

loc_0027883D: ;
    POP32(esp, ebp);

loc_0027883E: ;
    POP32(esp, ebx);

loc_0027883F: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x30;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00278850
 * Original: 0x00278850 - 0x002788F7 (167 bytes, 65 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278850(void)
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

loc_00278850: ;
    eax = MEM32(esp + 0xC);
    esp = esp - 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x1F;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00278885u); RECOMP_ABI_CALL(0x00278470u, sub_00278470); /* call 0x00278470 */

loc_00278885: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002788A4; /* je: equal / zero */

loc_0027888D: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0027889Bu); RECOMP_ABI_CALL(0x00258CE0u, sub_00258CE0); /* call 0x00258CE0 */

loc_0027889B: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 16; return; /* ret 12 */

loc_002788A4: ;
    SET_LO8(eax, MEM8(esp + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002788C9; /* je: equal / zero */

loc_002788AC: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 8);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002788C0u); RECOMP_ABI_CALL(0x00258CE0u, sub_00258CE0); /* call 0x00258CE0 */

loc_002788C0: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 16; return; /* ret 12 */

loc_002788C9: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    edx = MEM32(esp + 0x14);
    fp_top() = fp_top() / MEMF(esp + 0xC); /* fdiv dword ptr [esp + 0xc] */
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xB8); PUSH32(esp, 0x002788EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002788EE: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00278900
 * Original: 0x00278900 - 0x00278A08 (264 bytes, 102 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278900(void)
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

loc_00278900: ;
    eax = MEM32(esp + 0x10);
    esp = esp - 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x1F;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00278935u); RECOMP_ABI_CALL(0x00278470u, sub_00278470); /* call 0x00278470 */

loc_00278935: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00278965; /* je: equal / zero */

loc_0027893D: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0027894Bu); RECOMP_ABI_CALL(0x00258CE0u, sub_00258CE0); /* call 0x00258CE0 */

loc_0027894B: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xAC); PUSH32(esp, 0x0027895Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027895C: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 20; return; /* ret 16 */

loc_00278965: ;
    SET_LO8(eax, MEM8(esp + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_002789A3; /* je: equal / zero */

loc_0027896E: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(esp + 0x20);
    ecx = MEM32(eax + 8);
    PUSH32(esp, edx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00278982u); RECOMP_ABI_CALL(0x00258CE0u, sub_00258CE0); /* call 0x00258CE0 */

loc_00278982: ;
    edx = MEM32(esp + 0x24);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(edi + 0x84); PUSH32(esp, 0x0027898Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027898F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0xAC); PUSH32(esp, 0x00278999u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00278999: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 20; return; /* ret 16 */

loc_002789A3: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C89C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c89c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002789BE; /* jp: parity */

loc_002789B4: ;
    MEM32(esp + 0x28) = 0;
    goto loc_002789CA;

loc_002789BE: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 0xC); /* fdiv dword ptr [esp + 0xc] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */

loc_002789CA: ;
    edi = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xB8); PUSH32(esp, 0x002789EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002789EA: ;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x002789FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002789FC: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00278A10
 * Original: 0x00278A10 - 0x00278A31 (33 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00278A10: ;
    eax = MEM32(ecx + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00278A30; /* je: equal / zero */

loc_00278A1A: ;
    ecx = MEM32(ecx + 8);
    edx = MEM32(ecx + 0x14);
    ecx = MEM32(edx + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BDF64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00278A30u); RECOMP_ABI_CALL(0x00268160u, sub_00268160); /* call 0x00268160 */

loc_00278A30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00278A40
 * Original: 0x00278A40 - 0x00278B60 (288 bytes, 101 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278A40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00278A40: ;
    eax = MEM32(esp + 4);
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ebx = ecx;
    PUSH32(esp, 0x00278A53u); RECOMP_ABI_CALL(0x0015FDF0u, sub_0015FDF0); /* call 0x0015FDF0 */

loc_00278A53: ;
    ecx = MEM32(0x5BC508);
    esi = MEM32(ecx + 0x38);
    ecx = ebx;
    PUSH32(esp, 0x00278A63u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00278A63: ;
    SET_LO8(ecx, MEM8(0x5BC548));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00278A7C; /* jne: not equal / not zero */

loc_00278A6D: ;
    edx = MEM32(0x46A694);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00278A79u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00278A79: ;
    esp = esp + 4;

loc_00278A7C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00278A82u); RECOMP_ABI_CALL(0x0022A440u, sub_0022A440); /* call 0x0022A440 */

loc_00278A82: ;
    esp = esp + 4;
    PUSH32(esp, 7);
    ecx = esi;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x00278A92u); RECOMP_ABI_CALL(0x001F82D0u, sub_001F82D0); /* call 0x001F82D0 */

loc_00278A92: ;
    ebp = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00278B34; /* jle: less or equal (signed <=) */

loc_00278A9E: ;
    edi = edi;

loc_00278AA0: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 7);
    ecx = esi;
    PUSH32(esp, 0x00278AAFu); RECOMP_ABI_CALL(0x0020ED10u, sub_0020ED10); /* call 0x0020ED10 */

loc_00278AAF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00278B2B; /* je: equal / zero */

loc_00278AB3: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x14) = 0;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00278ACB; /* jne: not equal / not zero */

loc_00278AC6: ;
    eax = MEM32(0x46A3C8);

loc_00278ACB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 7);
    ecx = esi;
    PUSH32(esp, 0x00278ADEu); RECOMP_ABI_CALL(0x00230B50u, sub_00230B50); /* call 0x00230B50 */

loc_00278ADE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00278B2B; /* je: equal / zero */

loc_00278AE2: ;
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0x10) = 0;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00278AFA; /* jne: not equal / not zero */

loc_00278AF5: ;
    eax = MEM32(0x46A3C8);

loc_00278AFA: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x404C78);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00278B0Au); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_00278B0A: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00278B2B; /* jne: not equal / not zero */

loc_00278B12: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00278B2B; /* jl: less (signed <) */

loc_00278B1A: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00278B2B; /* jl: less (signed <) */

loc_00278B22: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00278B2Bu); RECOMP_ABI_CALL(0x002683A0u, sub_002683A0); /* call 0x002683A0 */

loc_00278B2B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00278AA0; /* jl: less (signed <) */

loc_00278B34: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00278B56; /* je: equal / zero */

loc_00278B3E: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00278B56; /* jne: not equal / not zero */

loc_00278B51: ;
    PUSH32(esp, 0x00278B56u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00278B56: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00278B60
 * Original: 0x00278B60 - 0x00278BF7 (151 bytes, 64 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278B60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00278B60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0xC);
    ecx = MEM32(edx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00278B8C; /* jle: less or equal (signed <=) */

loc_00278B76: ;
    edx = MEM32(edx + 0x10);
    /* nop */

loc_00278B80: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00278B8F; /* je: equal / zero */

loc_00278B84: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00278B80; /* jl: less (signed <) */

loc_00278B8C: ;
    eax = eax | 0xFFFFFFFFu;

loc_00278B8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00278BA5; /* jne: not equal / not zero */

loc_00278B96: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00278B9Eu); RECOMP_ABI_CALL(0x00268230u, sub_00268230); /* call 0x00268230 */

loc_00278B9E: ;
    eax = MEM32(esi + 8);
    edi = MEM32(eax + 8);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00278BA5: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x10);
    ebx = MEM32(edx + edi * 4);
    edx = MEM32(ecx + edi * 4);
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00278BC8; /* jl: less (signed <) */

loc_00278BBE: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00278BC8u); RECOMP_ABI_CALL(0x002683A0u, sub_002683A0); /* call 0x002683A0 */

loc_00278BC8: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + edi * 4);
    esi = MEM32(esi + 0x10);
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = MEM32(edx + 0x10);
    eax = MEM32(eax + ebx * 4);
    if (TEST_Z(_fa, _fb)) goto loc_00278BF0; /* je: equal / zero */

loc_00278BE1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00278BF0; /* jl: less (signed <) */

loc_00278BE5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00278BF0; /* jge: greater or equal (signed >=) */

loc_00278BE9: ;
    ecx = MEM32(esi + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + edi * 4) = ebx;

loc_00278BF0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00278C00
 * Original: 0x00278C00 - 0x00278F47 (839 bytes, 308 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278C00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00278C00: ;
    esp = esp - 0x24;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, ebx);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x30);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, esi);
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x30) = eax;
    esi = 0; /* xor self */
    ebx = ebp + 0x48;
    /* nop */

loc_00278C30: ;
    edi = MEM32(ebx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00278C39; /* je: equal / zero */

loc_00278C36: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00278C39: ;
    ecx = MEM32(esp + esi * 4 + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00278C56; /* je: equal / zero */

loc_00278C41: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00278C56; /* jne: not equal / not zero */

loc_00278C51: ;
    PUSH32(esp, 0x00278C56u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00278C56: ;
    eax = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + esi * 4 + 0x1C) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_00278CFA; /* je: equal / zero */

loc_00278C64: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebx + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00278C30; /* jl: less (signed <) */

loc_00278C6D: ;
    ebx = MEM32(esp + 0x1C);
    eax = MEM32(ebx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00278D99; /* je: equal / zero */

loc_00278C7C: ;
    edi = 0; /* xor self */
    edi = edi;

loc_00278C80: ;
    ecx = ebp;
    PUSH32(esp, 0x00278C87u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00278C87: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00278C8Du); RECOMP_ABI_CALL(0x001E1C50u, sub_001E1C50); /* call 0x001E1C50 */

loc_00278C8D: ;
    ecx = MEM32(esp + edi * 4 + 0x20);
    esp = esp + 4;
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, 7);
    ecx = esi;
    PUSH32(esp, 0x00278CA0u); RECOMP_ABI_CALL(0x001E22E0u, sub_001E22E0); /* call 0x001E22E0 */

loc_00278CA0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00278D2D; /* je: equal / zero */

loc_00278CA8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00278CAF; /* je: equal / zero */

loc_00278CAC: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00278CAF: ;
    ecx = MEM32(esp + edi * 4 + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00278CCC; /* je: equal / zero */

loc_00278CB7: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00278CCC; /* jne: not equal / not zero */

loc_00278CC7: ;
    PUSH32(esp, 0x00278CCCu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00278CCC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + edi * 4 + 0x1C) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00278CEB; /* je: equal / zero */

loc_00278CD4: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00278CEB; /* jne: not equal / not zero */

loc_00278CE4: ;
    ecx = esi;
    PUSH32(esp, 0x00278CEBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00278CEB: ;
    ebx = MEM32(esp + 0x1C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00278C80; /* jl: less (signed <) */

loc_00278CF5: ;
    goto loc_00278D99;

loc_00278CFA: ;
    esi = esp + 0x34;
    edi = 6;

loc_00278D03: ;
    ecx = MEM32(esi + -4);
    esi = esi - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00278D22; /* je: equal / zero */

loc_00278D0D: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00278D22; /* jne: not equal / not zero */

loc_00278D1D: ;
    PUSH32(esp, 0x00278D22u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00278D22: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00278D03; /* jne: not equal / not zero */

loc_00278D25: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_00278D2D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00278D7E; /* jle: less or equal (signed <=) */

loc_00278D31: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebx = 0x7FFFFF;
    if (TEST_Z(_fa, _fb)) goto loc_00278D4E; /* je: equal / zero */

loc_00278D3A: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00278D4E; /* jne: not equal / not zero */

loc_00278D47: ;
    ecx = esi;
    PUSH32(esp, 0x00278D4Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00278D4E: ;
    esi = esp + 0x34;
    edi = 6;

loc_00278D57: ;
    ecx = MEM32(esi + -4);
    esi = esi - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00278D73; /* je: equal / zero */

loc_00278D61: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00278D73; /* jne: not equal / not zero */

loc_00278D6E: ;
    PUSH32(esp, 0x00278D73u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00278D73: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00278D57; /* jne: not equal / not zero */

loc_00278D76: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

loc_00278D7E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00278D99; /* je: equal / zero */

loc_00278D82: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00278D99; /* jne: not equal / not zero */

loc_00278D92: ;
    ecx = esi;
    PUSH32(esp, 0x00278D99u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00278D99: ;
    ebp = MEM32(ebx + 0x48);
    eax = MEM32(ebx + 0x54);
    esi = MEM32(ebx + 0x40);
    edx = MEM32(ebx + 0x28);
    edi = MEM32(ebx + 0xC);
    eax = eax + ebp;
    ebp = MEM32(ebx + 0x24);
    eax = eax + esi;
    esi = MEM32(ebx + 0x20);
    eax = eax + edx;
    edx = MEM32(ebx + 0x1C);
    ecx = MEM32(ebx + 8);
    eax = eax + ebp;
    eax = eax + esi;
    eax = eax + edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)edi);
    MEM32(esp + 0x18) = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx);
    SET_LO8(eax, MEM8(0x5BC548));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_00278DEF; /* je: equal / zero */

loc_00278DE6: ;
    edx = MEM32(0x46A674);
    PUSH32(esp, edx);
    goto loc_00278DF5;

loc_00278DEF: ;
    eax = MEM32(0x46A694);
    PUSH32(esp, eax);

loc_00278DF5: ;
    PUSH32(esp, 0x00278DFAu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00278DFA: ;
    edx = MEM32(eax);
    esp = esp + 4;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x00278E08u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00278E08: ;
    ebp = eax;
    ecx = esi;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    edi = ebp;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ebp);
    ecx = ecx & 3;
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00278E4Du); RECOMP_ABI_CALL(0x00268B40u, sub_00268B40); /* call 0x00268B40 */

loc_00278E4D: ;
    ecx = MEM32(esp + 0x60);
    esp = esp + 0x28;
    PUSH32(esp, 0x00278E59u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00278E59: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00278E5Fu); RECOMP_ABI_CALL(0x001E1C50u, sub_001E1C50); /* call 0x001E1C50 */

loc_00278E5F: ;
    esi = eax;
    eax = MEM32(0x5BC528);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = esp;
    if (TEST_NZ(_fa, _fb)) goto loc_00278E8A; /* jne: not equal / not zero */

loc_00278E6C: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x00278E73u); RECOMP_ABI_CALL(0x001F4E60u, sub_001F4E60); /* call 0x001F4E60 */

loc_00278E73: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00278E83; /* je: equal / zero */

loc_00278E7A: ;
    ecx = eax;
    PUSH32(esp, 0x00278E81u); RECOMP_ABI_CALL(0x00202CC0u, sub_00202CC0); /* call 0x00202CC0 */

loc_00278E81: ;
    goto loc_00278E85;

loc_00278E83: ;
    eax = 0; /* xor self */

loc_00278E85: ;
    MEM32(0x5BC528) = eax;

loc_00278E8A: ;
    PUSH32(esp, 0x404C8C);
    ecx = eax;
    PUSH32(esp, 0x00278E96u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00278E96: ;
    ecx = esi;
    MEM32(edi) = eax;
    PUSH32(esp, 0x00278E9Fu); RECOMP_ABI_CALL(0x001B9E70u, sub_001B9E70); /* call 0x001B9E70 */

loc_00278E9F: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(ebx + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00278EB5u); RECOMP_ABI_CALL(0x001C4AC0u, sub_001C4AC0); /* call 0x001C4AC0 */

loc_00278EB5: ;
    SET_LO8(eax, MEM8(0x5BC548));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00278EC7; /* je: equal / zero */

loc_00278EBE: ;
    edx = MEM32(0x46A674);
    PUSH32(esp, edx);
    goto loc_00278ECD;

loc_00278EC7: ;
    eax = MEM32(0x46A694);
    PUSH32(esp, eax);

loc_00278ECD: ;
    PUSH32(esp, 0x00278ED2u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00278ED2: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00278EE0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00278EE0: ;
    edi = MEM32(esp + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00278EEEu); RECOMP_ABI_CALL(0x0029D060u, sub_0029D060); /* call 0x0029D060 */

loc_00278EEE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi + 0x2C) = 0;
    ebx = 0x7FFFFF;
    if (TEST_Z(_fa, _fb)) goto loc_00278F12; /* je: equal / zero */

loc_00278EFE: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00278F12; /* jne: not equal / not zero */

loc_00278F0B: ;
    ecx = esi;
    PUSH32(esp, 0x00278F12u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00278F12: ;
    esi = esp + 0x34;
    edi = 6;
    goto loc_00278F20;

    /* nop */

loc_00278F20: ;
    ecx = MEM32(esi + -4);
    esi = esi - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00278F3C; /* je: equal / zero */

loc_00278F2A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00278F3C; /* jne: not equal / not zero */

loc_00278F37: ;
    PUSH32(esp, 0x00278F3Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00278F3C: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00278F20; /* jne: not equal / not zero */

loc_00278F3F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_00278F50
 * Original: 0x00278F50 - 0x00278F68 (24 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278F50(void)
{

loc_00278F50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00278F58u); RECOMP_ABI_CALL(0x002783A0u, sub_002783A0); /* call 0x002783A0 */

loc_00278F58: ;
    eax = 0; /* xor self */
    MEM32(esi + 0x21C) = eax;
    MEM32(esi + 0x220) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00278F70
 * Original: 0x00278F70 - 0x00278FDD (109 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278F70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00278F70: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x00278F7Eu); RECOMP_ABI_CALL(0x00278310u, sub_00278310); /* call 0x00278310 */

loc_00278F7E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00278FD8; /* jne: not equal / not zero */

loc_00278F82: ;
    eax = MEM32(0x5BDD6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00278F91; /* je: equal / zero */

loc_00278F8E: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00278F91: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00278FAD; /* je: equal / zero */

loc_00278F98: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00278FAD; /* jne: not equal / not zero */

loc_00278FA8: ;
    PUSH32(esp, 0x00278FADu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00278FAD: ;
    MEM32(esi + 0x1C) = edi;
    edi = MEM32(esi + 0xE4);
    ecx = MEM32(esi + 0x224);
    edi = edi | 0x200;
    MEM32(esi + 0xE4) = edi;
    eax = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x78)); return; /* indirect tail jmp */

loc_00278FD8: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00278FE0
 * Original: 0x00278FE0 - 0x00279029 (73 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00278FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00278FE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00278FE9u); RECOMP_ABI_CALL(0x00269280u, sub_00269280); /* call 0x00269280 */

loc_00278FE9: ;
    eax = MEM32(0x5BDD70);
    ecx = MEM32(eax + 8);
    edi = MEM32(esi + ecx);
    ecx = esi;
    PUSH32(esp, 0x00278FFBu); RECOMP_ABI_CALL(0x0025E5F0u, sub_0025E5F0); /* call 0x0025E5F0 */

loc_00278FFB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00279009; /* je: equal / zero */

loc_00278FFF: ;
    MEM32(edi + 0x18) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00279009: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027901A; /* je: equal / zero */

loc_00279010: ;
    MEM32(edi + 0x18) = 2;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0027901A: ;
    edx = SX8(LO8(eax));
    edx = edx & 4;
    edx = edx >> 2;
    MEM32(edi + 0x18) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00279030
 * Original: 0x00279030 - 0x00279087 (87 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00279030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00279030: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00279084; /* je: equal / zero */

loc_00279039: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0x10);
    ebx = MEM32(edx + ecx * 4 + -4);
    PUSH32(esp, edi);
    edi = ecx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00279069; /* je: equal / zero */

loc_00279054: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00279069; /* jne: not equal / not zero */

loc_00279064: ;
    PUSH32(esp, 0x00279069u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00279069: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00279071u); RECOMP_ABI_CALL(0x001E7BB0u, sub_001E7BB0); /* call 0x001E7BB0 */

loc_00279071: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    MEM32(edx + ecx * 4) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00279084: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00279090
 * Original: 0x00279090 - 0x00279328 (664 bytes, 234 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279090(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00279090: ;
    esp = esp - 0x14;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    ebp = ecx;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x10) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_002790BF; /* jne: not equal / not zero */

loc_002790B0: ;
    eax = MEM32(esp + 0x24);
    MEM32(eax) = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

loc_002790BF: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_002791A2; /* je: equal / zero */

loc_002790CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027913D; /* jne: not equal / not zero */

loc_002790D0: ;
    ecx = MEM32(0x5BC50C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x404C98);
    PUSH32(esp, 0x3ED140);
    PUSH32(esp, 0x002790E6u); RECOMP_ABI_CALL(0x00238410u, sub_00238410); /* call 0x00238410 */

loc_002790E6: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00279129; /* je: equal / zero */

loc_002790EC: ;
    eax = MEM32(0x5BD930);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002790F9u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_002790F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00279129; /* je: equal / zero */

loc_002790FD: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(0x5BCEEC);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00279110u); RECOMP_ABI_CALL(0x001EAC30u, sub_001EAC30); /* call 0x001EAC30 */

loc_00279110: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00279123; /* je: equal / zero */

loc_00279114: ;
    ecx = MEM32(eax + 0x38);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00279121u); RECOMP_ABI_CALL(0x001C2500u, sub_001C2500); /* call 0x001C2500 */

loc_00279121: ;
    goto loc_0027914A;

loc_00279123: ;
    edx = ebp + 0x38;
    PUSH32(esp, edx);
    goto loc_00279141;

loc_00279129: ;
    eax = MEM32(esp + 0x28);
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(eax) = 0;
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

loc_0027913D: ;
    eax = ebp + 0x38;
    PUSH32(esp, eax);

loc_00279141: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x0027914Au); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_0027914A: ;
    ecx = MEM32(esp + 0x2C);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0027915Au); RECOMP_ABI_CALL(0x0020A1A0u, sub_0020A1A0); /* call 0x0020A1A0 */

loc_0027915A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002791A2; /* je: equal / zero */

loc_00279160: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(0x5BC208);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00279171u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00279171: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00279183; /* je: equal / zero */

loc_00279175: ;
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0027917Fu); RECOMP_ABI_CALL(0x001C2500u, sub_001C2500); /* call 0x001C2500 */

loc_0027917F: ;
    ebx = MEM32(esp + 0x10);

loc_00279183: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027919A; /* jne: not equal / not zero */

loc_00279193: ;
    ecx = esi;
    PUSH32(esp, 0x0027919Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027919A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027927E; /* jne: not equal / not zero */

loc_002791A2: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002791B1u); RECOMP_ABI_CALL(0x00269890u, sub_00269890); /* call 0x00269890 */

loc_002791B1: ;
    esi = MEM32(esp + 0x24);
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002791ED; /* jne: not equal / not zero */

loc_002791BC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = MEM32(esp + 0x28);
    MEM32(esi) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_002791E1; /* je: equal / zero */

loc_002791CA: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002791E1; /* jne: not equal / not zero */

loc_002791DA: ;
    ecx = edi;
    PUSH32(esp, 0x002791E1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002791E1: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

loc_002791ED: ;
    ecx = ebp;
    PUSH32(esp, 0x002791F4u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_002791F4: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x00279206u); RECOMP_ABI_CALL(0x0024F740u, sub_0024F740); /* call 0x0024F740 */

loc_00279206: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00279212; /* jne: not equal / not zero */

loc_0027920D: ;
    eax = MEM32(0x46A3C8);

loc_00279212: ;
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, 0x3C806C);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00279223u); RECOMP_ABI_CALL(0x002330E0u, sub_002330E0); /* call 0x002330E0 */

loc_00279223: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00279261; /* jne: not equal / not zero */

loc_00279227: ;
    esi = MEM32(esp + 0x28);
    ecx = esp + 0x1C;
    MEM32(esi) = 0;
    PUSH32(esp, 0x0027923Au); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0027923A: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00279243u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_00279243: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0027924Cu); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0027924C: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x00279255u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_00279255: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

loc_00279261: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00279275; /* je: equal / zero */

loc_00279268: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00279275u); RECOMP_ABI_CALL(0x0021B0A0u, sub_0021B0A0); /* call 0x0021B0A0 */

loc_00279275: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0027927Eu); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0027927E: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00279299; /* jne: not equal / not zero */

loc_00279285: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00279293u); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_00279293: ;
    esi = MEM32(esp + 0x18);
    goto loc_002792C0;

loc_00279299: ;
    ecx = ebp;
    PUSH32(esp, 0x002792A0u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_002792A0: ;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x002792B2u); RECOMP_ABI_CALL(0x0024F740u, sub_0024F740); /* call 0x0024F740 */

loc_002792B2: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x002792C0u); RECOMP_ABI_CALL(0x00230A10u, sub_00230A10); /* call 0x00230A10 */

loc_002792C0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    eax = MEM32(esp + 0x28);
    MEM32(eax) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_002792CD; /* je: equal / zero */

loc_002792CA: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002792CD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ebp = 0x7FFFFF;
    if (TEST_Z(_fa, _fb)) goto loc_002792EA; /* je: equal / zero */

loc_002792D6: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002792EA; /* jne: not equal / not zero */

loc_002792E3: ;
    ecx = edi;
    PUSH32(esp, 0x002792EAu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002792EA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00279302; /* je: equal / zero */

loc_002792EE: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00279302; /* jne: not equal / not zero */

loc_002792FB: ;
    ecx = ebx;
    PUSH32(esp, 0x00279302u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00279302: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027931A; /* je: equal / zero */

loc_00279306: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, eax (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027931A; /* jne: not equal / not zero */

loc_00279313: ;
    ecx = esi;
    PUSH32(esp, 0x0027931Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027931A: ;
    eax = MEM32(esp + 0x28);
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00279330
 * Original: 0x00279330 - 0x002795B5 (645 bytes, 226 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279330(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00279330: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    esi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ebx = ecx;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0xC) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_002793B4; /* je: equal / zero */

loc_0027934E: ;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027940F; /* je: equal / zero */

loc_00279359: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002793C7; /* jne: not equal / not zero */

loc_0027935E: ;
    ecx = MEM32(0x5BC50C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x404C98);
    PUSH32(esp, 0x3ED140);
    PUSH32(esp, 0x00279374u); RECOMP_ABI_CALL(0x00238410u, sub_00238410); /* call 0x00238410 */

loc_00279374: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002793B4; /* je: equal / zero */

loc_0027937A: ;
    eax = MEM32(0x5BD930);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00279387u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00279387: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002793B4; /* je: equal / zero */

loc_0027938B: ;
    edx = MEM32(0x5BCEEC);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027939Bu); RECOMP_ABI_CALL(0x001EAC30u, sub_001EAC30); /* call 0x001EAC30 */

loc_0027939B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002793AE; /* je: equal / zero */

loc_0027939F: ;
    eax = MEM32(eax + 0x38);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x002793ACu); RECOMP_ABI_CALL(0x001C2500u, sub_001C2500); /* call 0x001C2500 */

loc_002793AC: ;
    goto loc_002793D4;

loc_002793AE: ;
    ecx = ebx + 0x38;
    PUSH32(esp, ecx);
    goto loc_002793CB;

loc_002793B4: ;
    eax = MEM32(esp + 0x20);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = 0;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_002793C7: ;
    edx = ebx + 0x38;
    PUSH32(esp, edx);

loc_002793CB: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x002793D4u); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_002793D4: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002793DEu); RECOMP_ABI_CALL(0x0020A1A0u, sub_0020A1A0); /* call 0x0020A1A0 */

loc_002793DE: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027940B; /* je: equal / zero */

loc_002793E4: ;
    eax = MEM32(0x5BC1D0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002793F1u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_002793F1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027940B; /* je: equal / zero */

loc_002793F5: ;
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    PUSH32(esp, 0x002793FFu); RECOMP_ABI_CALL(0x001C2500u, sub_001C2500); /* call 0x001C2500 */

loc_002793FF: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00279563; /* jne: not equal / not zero */

loc_0027940B: ;
    esi = MEM32(esp + 0xC);

loc_0027940F: ;
    ecx = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027941Au); RECOMP_ABI_CALL(0x00269890u, sub_00269890); /* call 0x00269890 */

loc_0027941A: ;
    edi = MEM32(esp + 0x1C);
    esp = esp + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00279455; /* jne: not equal / not zero */

loc_00279425: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = MEM32(esp + 0x20);
    MEM32(edi) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0027944A; /* je: equal / zero */

loc_00279433: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027944A; /* jne: not equal / not zero */

loc_00279443: ;
    ecx = esi;
    PUSH32(esp, 0x0027944Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027944A: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_00279455: ;
    ecx = ebx;
    PUSH32(esp, 0x0027945Cu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027945C: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0027946Eu); RECOMP_ABI_CALL(0x0022B6E0u, sub_0022B6E0); /* call 0x0022B6E0 */

loc_0027946E: ;
    ecx = ebx;
    PUSH32(esp, 0x00279475u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00279475: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027947Bu); RECOMP_ABI_CALL(0x00231770u, sub_00231770); /* call 0x00231770 */

loc_0027947B: ;
    esi = eax;
    eax = MEM32(edi + 8);
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00279490; /* jne: not equal / not zero */

loc_0027948B: ;
    eax = MEM32(0x46A3C8);

loc_00279490: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3DB1FC);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0027949Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027949D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002794D6; /* jne: not equal / not zero */

loc_002794A1: ;
    esi = MEM32(esp + 0x20);
    ecx = esp + 0x18;
    MEM32(esi) = eax;
    PUSH32(esp, 0x002794B0u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_002794B0: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x002794B9u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_002794B9: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x002794C2u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_002794C2: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x002794CBu); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_002794CB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

loc_002794D6: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x002794E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002794E5: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x002794EFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002794EF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ebp = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x90); PUSH32(esp, 0x002794FFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002794FF: ;
    ecx = ebp + 1;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0027950Au); RECOMP_ABI_CALL(0x001F7ED0u, sub_001F7ED0); /* call 0x001F7ED0 */

loc_0027950A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    edi = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00279517u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00279517: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0027951Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027951E: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    ecx = esi;
    MEM8(edi + ebp) = 0;
    PUSH32(esp, 0x0027952Eu); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_0027952E: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00279536u); RECOMP_ABI_CALL(0x001F7FC0u, sub_001F7FC0); /* call 0x001F7FC0 */

loc_00279536: ;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = MEM32(esp + 0x10);
    POP32(esp, ebp);
    if (TEST_Z(_fa, _fb)) goto loc_0027954F; /* je: equal / zero */

loc_00279542: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0027954Fu); RECOMP_ABI_CALL(0x0021B0A0u, sub_0021B0A0); /* call 0x0021B0A0 */

loc_0027954F: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x00279558u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_00279558: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00279561u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_00279561: ;
    goto loc_00279567;

loc_00279563: ;
    edi = MEM32(esp + 0xC);

loc_00279567: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebx = MEM32(esp + 0x20);
    MEM32(ebx) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_00279574; /* je: equal / zero */

loc_00279571: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00279574: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027958F; /* je: equal / zero */

loc_00279578: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027958F; /* jne: not equal / not zero */

loc_00279588: ;
    ecx = edi;
    PUSH32(esp, 0x0027958Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027958F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002795AA; /* je: equal / zero */

loc_00279593: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002795AA; /* jne: not equal / not zero */

loc_002795A3: ;
    ecx = esi;
    PUSH32(esp, 0x002795AAu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002795AA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002795C0
 * Original: 0x002795C0 - 0x002795F3 (51 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002795C0(void)
{

loc_002795C0: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002795EDu); RECOMP_ABI_CALL(0x00269A00u, sub_00269A00); /* call 0x00269A00 */

loc_002795ED: ;
    esp = esp + 0x20;
    esp += 36; return; /* ret 32 */

}

/**
 * sub_00279600
 * Original: 0x00279600 - 0x00279673 (115 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00279600: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x0027960Eu); RECOMP_ABI_CALL(0x0015FDF0u, sub_0015FDF0); /* call 0x0015FDF0 */

loc_0027960E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027966E; /* jne: not equal / not zero */

loc_00279612: ;
    eax = MEM32(0x5BDED0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00279621; /* je: equal / zero */

loc_0027961E: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00279621: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027963D; /* je: equal / zero */

loc_00279628: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027963D; /* jne: not equal / not zero */

loc_00279638: ;
    PUSH32(esp, 0x0027963Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027963D: ;
    MEM32(esi + 0x1C) = edi;
    eax = MEM32(0x5BDD74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0027964E; /* je: equal / zero */

loc_0027964B: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027964E: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027966A; /* je: equal / zero */

loc_00279655: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027966A; /* jne: not equal / not zero */

loc_00279665: ;
    PUSH32(esp, 0x0027966Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027966A: ;
    MEM32(esi + 0x1C) = edi;
    POP32(esp, edi);

loc_0027966E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00279680
 * Original: 0x00279680 - 0x00279A5D (989 bytes, 315 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279680(void)
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

loc_00279680: ;
    esp = esp - 0xA8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xB0);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002796A7; /* jne: not equal / not zero */

loc_00279699: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0xA8;
    esp += 8; return; /* ret 4 */

loc_002796A7: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 1 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_002796E9; /* jle: less or equal (signed <=) */

loc_002796B1: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x002796B9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002796B9: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(eax + 8);
    edi = MEM32(edx + eax * 4);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x002796CFu); RECOMP_ABI_CALL(0x001EAB70u, sub_001EAB70); /* call 0x001EAB70 */

loc_002796CF: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0x10);
    ecx = ecx << 6;
    eax = ecx + edx + -64;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x002796E7u); RECOMP_ABI_CALL(0x00244510u, sub_00244510); /* call 0x00244510 */

loc_002796E7: ;
    ebp = edi;

loc_002796E9: ;
    _fa = (uint32_t)(MEM8(esi + 0x2C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x2C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027974A; /* je: equal / zero */

loc_002796EF: ;
    ecx = MEM32(esi + 0x28);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002796FBu); RECOMP_ABI_CALL(0x00244440u, sub_00244440); /* call 0x00244440 */

loc_002796FB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027979A; /* je: equal / zero */

loc_00279703: ;
    edx = MEM32(esi + 0x24);
    eax = MEM32(esi + 0x20);
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x30) = 1;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0x10);
    ecx = ecx << 6;
    eax = ecx + edx + -64;
    ecx = MEM32(esi + 0x28);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x40) = ecx;
    { uint32_t _icall_target = MEM32(esi + 0x30); PUSH32(esp, 0x0027973Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027973F: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00279A50; /* jne: not equal / not zero */

loc_0027974A: ;
    _fa = (uint32_t)(MEM8(esi + 0x2C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x2C), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00279832; /* je: equal / zero */

loc_00279754: ;
    eax = MEM32(0x5BDA90);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00279761u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00279761: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027977B; /* jne: not equal / not zero */

loc_00279765: ;
    ecx = MEM32(0x5BDAD8);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00279773u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00279773: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00279832; /* je: equal / zero */

loc_0027977B: ;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 0xC);
    ecx = MEM32(eax + 8);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = 0;
    if (CMP_A(_fa & _fb, 0)) goto loc_002797B0; /* ja: above (unsigned >) */

loc_0027979A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0xA8;
    esp += 8; return; /* ret 4 */

loc_002797AC: ;
    eax = MEM32(esp + 0x18);

loc_002797B0: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(esp + 0x10);
    edi = MEM32(eax + ecx * 4);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x002797C2u); RECOMP_ABI_CALL(0x00244490u, sub_00244490); /* call 0x00244490 */

loc_002797C2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00279812; /* je: equal / zero */

loc_002797C6: ;
    edx = MEM32(esi + 0x24);
    eax = MEM32(esi + 0x20);
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x30) = 2;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0x10);
    ecx = ecx << 6;
    eax = ecx + edx + -64;
    ecx = MEM32(esi + 0x28);
    edx = esp + 0x30;
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(esp + 0xBC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    SET_LO8(ebx, 1);
    MEM32(esp + 0x4C) = edi;
    MEM32(esp + 0x40) = ecx;
    { uint32_t _icall_target = MEM32(esi + 0x30); PUSH32(esp, 0x00279807u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00279807: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00279A50; /* jne: not equal / not zero */

loc_00279812: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_B(_fa, _fb)) goto loc_002797AC; /* jb: below (unsigned <) */

loc_00279823: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027979A; /* je: equal / zero */

loc_0027982B: ;
    ebx = MEM32(esp + 0xBC);

loc_00279832: ;
    _fa = (uint32_t)(MEM8(esi + 0x2C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x2C), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00279A4E; /* je: equal / zero */

loc_0027983C: ;
    ecx = MEM32(0x5BDA90);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0027984Au); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0027984A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00279A4E; /* je: equal / zero */

loc_00279852: ;
    eax = MEM32(esi + 0x20);
    edx = MEM32(eax + 8);
    ecx = MEM32(eax + 0x10);
    edx = edx << 6;
    ebp = edx + ecx + -64;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0027987A; /* jle: less or equal (signed <=) */

loc_00279868: ;
    PUSH32(esp, ebp);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = esp + 0x80;
    PUSH32(esp, 0x0027987Au); RECOMP_ABI_CALL(0x00242F50u, sub_00242F50); /* call 0x00242F50 */

loc_0027987A: ;
    ecx = MEM32(ebx + 0x20);
    eax = MEM32(esi + 0x28);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(eax + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x20) = edi;
    if (CMP_BE(_fa & _fb, 0)) goto loc_00279A4E; /* jbe: below or equal (unsigned <=) */

loc_002798A7: ;
    goto loc_002798B0;

loc_002798A9: ;
    eax = MEM32(esp + 0x28);
    /* nop */

loc_002798B0: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + edi * 4);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(edx + 0x10);
    edx = MEM32(ecx + edi * 4);
    ecx = MEM32(esi + 0x20);
    MEM32(esp + 0x14) = edx;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 1 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_002798F2; /* jle: less or equal (signed <=) */

loc_002798D3: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002798DEu); RECOMP_ABI_CALL(0x001EAB70u, sub_001EAB70); /* call 0x001EAB70 */

loc_002798DE: ;
    ecx = MEM32(esi + 0x38);
    edx = esp + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002798EBu); RECOMP_ABI_CALL(0x00241D80u, sub_00241D80); /* call 0x00241D80 */

loc_002798EB: ;
    eax = MEM32(esi + 0x38);
    MEM32(esp + 0x10) = eax;

loc_002798F2: ;
    eax = MEM32(esp + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_00279A3D; /* jbe: below or equal (unsigned <=) */

loc_00279900: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(0x5BE600);
    ecx = MEM32(edx + ebx * 4);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0x00279919u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00279919: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00279935; /* jne: not equal / not zero */

loc_0027991D: ;
    ecx = MEM32(0x5BE5F8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x0027992Du); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0027992D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00279A30; /* je: equal / zero */

loc_00279935: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    eax = eax | 0xFFFFFFFFu;
    MEM32(esp + 0x78) = eax;
    MEM32(esp + 0x7C) = eax;
    eax = esp + 0x7C;
    PUSH32(esp, eax);
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    edx = esp + 0x70;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0027996Cu); RECOMP_ABI_CALL(0x0026A130u, sub_0026A130); /* call 0x0026A130 */

loc_0027996C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00279A30; /* je: equal / zero */

loc_00279974: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(eax + 0x10);
    edi = MEM32(ecx + edi * 4);
    edx = MEM32(esi + 0x24);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, ebp);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    ecx = esp + 0x50;
    MEM32(esp + 0x38) = 4;
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x74) = ebx;
    MEM32(esp + 0x44) = ebp;
    MEM32(esp + 0x48) = edi;
    MEM32(esp + 0x3C) = eax;
    PUSH32(esp, 0x002799AFu); RECOMP_ABI_CALL(0x0023FCF0u, sub_0023FCF0); /* call 0x0023FCF0 */

loc_002799AF: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x48); /* fsub dword ptr [esp + 0x48] */
    eax = MEM32(esp + 0xBC);
    fp_push(MEMF(edi + 0xC)); /* fld float */
    edx = esp + 0x30;
    fp_top() = fp_top() - MEMF(esp + 0x4C); /* fsub dword ptr [esp + 0x4c] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    fp_push(MEMF(edi + 0x10)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = fp_top() - MEMF(esp + 0x58); /* fsub dword ptr [esp + 0x58] */
    PUSH32(esp, esi);
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
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(esi + 0x30); PUSH32(esp, 0x002799F1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002799F1: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00279A50; /* jne: not equal / not zero */

loc_002799F8: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    edx = esp + 0x7C;
    PUSH32(esp, edx);
    eax = esp + 0x7C;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00279A24u); RECOMP_ABI_CALL(0x0026A130u, sub_0026A130); /* call 0x0026A130 */

loc_00279A24: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    edi = MEM32(esp + 0x20);
    if (TEST_NZ(_fa, _fb)) goto loc_00279974; /* jne: not equal / not zero */

loc_00279A30: ;
    eax = MEM32(esp + 0x18);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00279900; /* jb: below (unsigned <) */

loc_00279A3D: ;
    eax = MEM32(esp + 0x24);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x20) = edi;
    if (CMP_B(_fa, _fb)) goto loc_002798A9; /* jb: below (unsigned <) */

loc_00279A4E: ;
    eax = 0; /* xor self */

loc_00279A50: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xA8;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00279A60
 * Original: 0x00279A60 - 0x00279ACA (106 bytes, 41 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00279A60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00279A69u); RECOMP_ABI_CALL(0x00269280u, sub_00269280); /* call 0x00269280 */

loc_00279A69: ;
    eax = MEM32(0x5BDD70);
    ecx = MEM32(eax + 8);
    edi = MEM32(esi + ecx);
    ecx = esi;
    PUSH32(esp, 0x00279A7Bu); RECOMP_ABI_CALL(0x0025E5F0u, sub_0025E5F0); /* call 0x0025E5F0 */

loc_00279A7B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00279A94; /* je: equal / zero */

loc_00279A7F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    ecx = esi;
    MEM32(edi + 0x18) = 0;
    PUSH32(esp, 0x00279A91u); RECOMP_ABI_CALL(0x00259B20u, sub_00259B20); /* call 0x00259B20 */

loc_00279A91: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00279A94: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00279AB0; /* je: equal / zero */

loc_00279A9B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    ecx = esi;
    MEM32(edi + 0x18) = 2;
    PUSH32(esp, 0x00279AADu); RECOMP_ABI_CALL(0x00259B20u, sub_00259B20); /* call 0x00259B20 */

loc_00279AAD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00279AB0: ;
    edx = SX8(LO8(eax));
    edx = edx & 4;
    PUSH32(esp, 1);
    edx = edx >> 2;
    PUSH32(esp, 4);
    ecx = esi;
    MEM32(edi + 0x18) = edx;
    PUSH32(esp, 0x00279AC7u); RECOMP_ABI_CALL(0x00259B20u, sub_00259B20); /* call 0x00259B20 */

loc_00279AC7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00279AD0
 * Original: 0x00279AD0 - 0x00279B1F (79 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279AD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00279AD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x44);
    MEM16(edi + 0x3C) = 1;
    MEM8(edi + 0x40) = 0;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00279AEEu); RECOMP_ABI_CALL(0x00144F50u, sub_00144F50); /* call 0x00144F50 */

loc_00279AEE: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00279B0F; /* jle: less or equal (signed <=) */

loc_00279AF7: ;
    goto loc_00279B00;

    /* nop */

loc_00279B00: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + eax * 4) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00279B00; /* jl: less (signed <) */

loc_00279B0F: ;
    ecx = edi;
    POP32(esp, edi);
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0026D9C0(); return; /* tail jmp 0x0026D9C0 */

}

/**
 * sub_00279B20
 * Original: 0x00279B20 - 0x00279BBD (157 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00279B20: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0x30;
    if (TEST_Z(_fa, _fb)) goto loc_00279B43; /* je: equal / zero */

loc_00279B2E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00279B43; /* jne: not equal / not zero */

loc_00279B3E: ;
    PUSH32(esp, 0x00279B43u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00279B43: ;
    edx = MEM32(esp + 0xC);
    MEM32(edi) = 0;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00279B57u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00279B57: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM8(esi + 0x21) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_00279BB5; /* je: equal / zero */

loc_00279B5E: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 8);
    edx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(MEM32(edx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x14), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00279B7A; /* jge: greater or equal (signed >=) */

loc_00279B6F: ;
    PUSH32(esp, 1);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00279B7Au); RECOMP_ABI_CALL(0x0026DE00u, sub_0026DE00); /* call 0x0026DE00 */

loc_00279B7A: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00279BB5; /* je: equal / zero */

loc_00279B84: ;
    PUSH32(esp, 0x00279B89u); RECOMP_ABI_CALL(0x00117950u, sub_00117950); /* call 0x00117950 */

loc_00279B89: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00279BB5; /* jle: less or equal (signed <=) */

loc_00279B90: ;
    ecx = esi;
    PUSH32(esp, 0x00279B97u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_00279B97: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00279BA7u); RECOMP_ABI_CALL(0x0024F7C0u, sub_0024F7C0); /* call 0x0024F7C0 */

loc_00279BA7: ;
    edx = MEM32(esi + 0x24);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00279BB5u); RECOMP_ABI_CALL(0x001A6270u, sub_001A6270); /* call 0x001A6270 */

loc_00279BB5: ;
    SET_LO8(eax, MEM8(esi + 0x21));
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00279BC0
 * Original: 0x00279BC0 - 0x00279C71 (177 bytes, 68 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279BC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00279BC0: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00279C6D; /* jne: not equal / not zero */

loc_00279BCF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00279BD7u); RECOMP_ABI_CALL(0x0026E7F0u, sub_0026E7F0); /* call 0x0026E7F0 */

loc_00279BD7: ;
    ecx = MEM32(esi + 0x40);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00279BE1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00279BE1: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00279BEBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00279BEB: ;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00279BF5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00279BF5: ;
    ecx = MEM32(esi + 0x48);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00279BFFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00279BFF: ;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00279C09u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00279C09: ;
    eax = MEM32(esi + 0x50);
    ecx = MEM32(eax + 8);
    MEM32(eax + 0xC) = ecx;
    edi = MEM32(esi + 0x54);
    ebx = MEM32(edi + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0xC) (32-bit) */
    ebp = MEM32(esi + 0x50);
    if (CMP_GE(_fas, _fbs)) goto loc_00279C28; /* jge: greater or equal (signed >=) */

loc_00279C20: ;
    edx = ebx + 1;
    MEM32(edi + 8) = edx;
    goto loc_00279C35;

loc_00279C28: ;
    PUSH32(esp, 4);
    eax = ebx + 1;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00279C35u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00279C35: ;
    ecx = MEM32(edi + 0x10);
    MEM32(ecx + ebx * 4) = ebp;
    ecx = MEM32(esi + 0x58);
    edx = MEM32(ecx + 0xC);
    POP32(esp, edi);
    eax = 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_L(_fas, _fbs)) goto loc_00279C52; /* jl: less (signed <) */

loc_00279C4D: ;
    MEM32(ecx + 8) = eax;
    goto loc_00279C5A;

loc_00279C52: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00279C5Au); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00279C5A: ;
    esi = MEM32(esi + 0x58);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00279C6D; /* jle: less or equal (signed <=) */

loc_00279C64: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx) = 0;

loc_00279C6D: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00279C80
 * Original: 0x00279C80 - 0x00279CF6 (118 bytes, 36 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00279C80: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(0x5BDFE0));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00279CA2; /* jne: not equal / not zero */

loc_00279C92: ;
    MEM32(0x5BDFE0) = MEM32(0x5BDFE0) | eax;
    PUSH32(esp, 0x00279C9Du); RECOMP_ABI_CALL(0x002A0DD0u, sub_002A0DD0); /* call 0x002A0DD0 */

loc_00279C9D: ;
    MEM32(0x5BDFDC) = eax;

loc_00279CA2: ;
    eax = MEM32(0x5BDFDC);
    edx = MEM32(eax + 8);
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 0x44);
    edx = MEM32(eax + edx * 4);
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + edx * 4);
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00279CCB; /* je: equal / zero */

loc_00279CC4: ;
    eax = MEM32(eax + 0x10);
    edx = MEM32(eax + edx * 4 + -4);

loc_00279CCB: ;
    MEM32(esi + 0x14) = edx;
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00279CD7u); RECOMP_ABI_CALL(0x00263280u, sub_00263280); /* call 0x00263280 */

loc_00279CD7: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esp + 8);
    MEM32(eax + 8) = 0;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00279CEFu); RECOMP_ABI_CALL(0x0026E920u, sub_0026E920); /* call 0x0026E920 */

loc_00279CEF: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00279D00
 * Original: 0x00279D00 - 0x00279D7F (127 bytes, 50 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279D00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00279D00: ;
    eax = MEM32(0x5BE5B8);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(eax + 8);
    eax = MEM32(esp + 0xC);
    edx = MEM32(eax + 0x44);
    ecx = MEM32(edx + ecx * 4);
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + 0x10);
    eax = MEM32(eax + ecx * 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_00279D2C; /* jne: not equal / not zero */

loc_00279D28: ;
    ebp = 0; /* xor self */
    goto loc_00279D33;

loc_00279D2C: ;
    edx = MEM32(eax + 0x10);
    ebp = MEM32(edx + ecx * 4 + -4);

loc_00279D33: ;
    eax = MEM32(ebx + 0x24);
    esi = MEM32(eax + 0xC);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00279D49; /* jge: greater or equal (signed >=) */

loc_00279D41: ;
    ecx = edi + 1;
    MEM32(esi + 8) = ecx;
    goto loc_00279D56;

loc_00279D49: ;
    PUSH32(esp, 4);
    edx = edi + 1;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00279D56u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00279D56: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esp + 0x14);
    MEM32(eax + edi * 4) = ebp;
    eax = MEM32(ecx + 0x1C);
    edx = MEM32(eax + 0x10);
    eax = MEM32(eax + 8);
    ecx = MEM32(ebx + 0x24);
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00279D78u); RECOMP_ABI_CALL(0x00200CC0u, sub_00200CC0); /* call 0x00200CC0 */

loc_00279D78: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00279D80
 * Original: 0x00279D80 - 0x00279E74 (244 bytes, 84 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00279D80(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00279D80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMD(esi + 0x28)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x3DCF30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x3dcf30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00279DA2; /* jp: parity */

loc_00279D9C: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    MEMD(esi + 0x28) = fp_top(); fp_pop(); /* fstp */

loc_00279DA2: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00279DB5; /* jne: not equal / not zero */

loc_00279DAC: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00279DB5: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    fp_top() = fp_top() - MEMD(esi + 0x28); /* fsub qword ptr [esi + 0x28] */
    MEMD(esp + 0x10) = fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x3DCF30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x3dcf30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00279DD6; /* jp: parity */

loc_00279DCC: ;
    fp_push(MEMD(0x3DCF30)); /* fld double */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */

loc_00279DD6: ;
    edx = MEM32(esi + 0x20);
    eax = MEM32(edx + 0x10);
    fp_push(MEMD(eax + ecx * 8 + -8)); /* fld double */
    esp = esp - 8;
    MEMD(esp + 0x10) = fp_top(); /* fst */
    fp_push(MEMD(esp + 0x18)); /* fld double */
    fp_top() = fp_top() / fp_st1(); /* fdiv st(1) */
    MEMD(esp + 0x20) = fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMD(esp + 0x20)); /* fld double */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00279DFFu); RECOMP_ABI_CALL(0x003414FCu, sub_003414FC); /* call 0x003414FC */

loc_00279DFF: ;
    esp = esp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00279E07u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_00279E07: ;
    ecx = MEM32(esi + 0x30);
    ecx = ecx - 0;
    MEM32(esp + 4) = eax;
    if ((ecx == 0)) goto loc_00279E19; /* je: equal / zero */

loc_00279E13: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00279E43; /* je: equal / zero */

loc_00279E16: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00279E54; /* je: equal / zero */

loc_00279E19: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = MEMD(esp + 0x18) - fp_top(); /* fsubr qword ptr [esp + 0x18] */
    fp_top() = fp_top() * MEMD(esp + 8); /* fmul qword ptr [esp + 8] */

loc_00279E25: ;
    ecx = MEM32(esi + 0x20);
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00279E33u); RECOMP_ABI_CALL(0x0026EBB0u, sub_0026EBB0); /* call 0x0026EBB0 */

loc_00279E33: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + eax * 4);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00279E43: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00279E4E; /* jle: less or equal (signed <=) */

loc_00279E48: ;
    fp_push(MEMD(esp + 8)); /* fld double */
    goto loc_00279E58;

loc_00279E4E: ;
    fp_push(MEMD(esp + 0x10)); /* fld double */
    goto loc_00279E58;

loc_00279E54: ;
    fp_push(MEMD(esp + 0x18)); /* fld double */

loc_00279E58: ;
    eax = eax & 0x80000001u;
    if (((int32_t)eax >= 0)) goto loc_00279E64; /* jns: not sign (positive) */

loc_00279E5F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00279E64: ;
    fp_top() = fp_top() - (double)SMEM32(esp + 4); /* fisub dword ptr [esp + 4] */
    fp_top() = fp_top() * MEMD(esp + 8); /* fmul qword ptr [esp + 8] */
    if (_flags /* je: equal / zero */) goto loc_00279E25;

loc_00279E6E: ;
    fp_top() = MEMD(esp + 8) - fp_top(); /* fsubr qword ptr [esp + 8] */
    goto loc_00279E25;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00279E80
 * Original: 0x00279E80 - 0x0027A0C9 (585 bytes, 200 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00279E80(void)
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

loc_00279E80: ;
    esp = esp - 0x58;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x64);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x00279E94u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00279E94: ;
    SET_LO8(eax, MEM8(esi + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    ebx = MEM32(esp + 0x74);
    edi = MEM32(esp + 0x70);
    if (TEST_Z(_fa, _fb)) goto loc_00279EC5; /* je: equal / zero */

loc_00279EA3: ;
    eax = MEM32(esp + 0x78);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00279EB6u); RECOMP_ABI_CALL(0x0026F7F0u, sub_0026F7F0); /* call 0x0026F7F0 */

loc_00279EB6: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x5C;
    PUSH32(esp, 0x00279EC0u); RECOMP_ABI_CALL(0x0023F4A0u, sub_0023F4A0); /* call 0x0023F4A0 */

loc_00279EC0: ;
    goto loc_00279F8C;

loc_00279EC5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00279FEB; /* je: equal / zero */

loc_00279ECD: ;
    SET_LO8(eax, MEM8(esi + 0x4A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00279EF7; /* jne: not equal / not zero */

loc_00279ED4: ;
    edx = MEM32(esi + 0xC);
    ecx = MEM32(edx + 0x10);
    eax = edi;
    eax = eax << 4;
    eax = eax + ecx;
    ecx = MEM32(eax);
    MEM32(esp + 0x10) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x14) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x18) = eax;
    goto loc_00279F59;

loc_00279EF7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00279F21; /* jne: not equal / not zero */

loc_00279EFB: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 0x10);
    edx = ebx;
    edx = edx << 4;
    edx = edx + eax;
    ecx = edi;
    ecx = ecx << 4;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x7C);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00279F1Fu); RECOMP_ABI_CALL(0x0023FC50u, sub_0023FC50); /* call 0x0023FC50 */

loc_00279F1F: ;
    goto loc_00279F59;

loc_00279F21: ;
    ecx = MEM32(esi + 0x40);
    ecx = MEM32(ecx + 0x10);
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 0x10);
    edx = edi + edi * 2;
    ecx = ecx + edx * 8;
    edx = ebx;
    edx = edx << 4;
    edx = edx + eax;
    PUSH32(esp, edx);
    edx = ecx + 0xC;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x80);
    PUSH32(esp, ecx);
    ecx = edi;
    ecx = ecx << 4;
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00279F59u); RECOMP_ABI_CALL(0x0023FDC0u, sub_0023FDC0); /* call 0x0023FDC0 */

loc_00279F59: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    esp = esp - 0xC;
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    ecx = ebp;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3C7080); /* fmul dword ptr [0x3c7080] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00279F8Cu); RECOMP_ABI_CALL(0x0023E770u, sub_0023E770); /* call 0x0023E770 */

loc_00279F8C: ;
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    eax = MEM32(esi + 0x34);
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    ecx = eax;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    PUSH32(esp, ebp);
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    edx = esp + 0x20;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x34) = ecx;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    ecx = esp + 0x30;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x00279FC0u); RECOMP_ABI_CALL(0x0023FC90u, sub_0023FC90); /* call 0x0023FC90 */

loc_00279FC0: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x28); /* fsub dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x2C); /* fsub dword ptr [esp + 0x2c] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fp_top() - MEMF(esp + 0x30); /* fsub dword ptr [esp + 0x30] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x54);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(ebp + 0x38) = eax;
    MEMF(ebp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ebp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */

loc_00279FEB: ;
    _fa = (uint32_t)(MEM8(esi + 0x48)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x48), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027A022; /* je: equal / zero */

loc_00279FF1: ;
    ecx = MEM32(esp + 0x78);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0027A004u); RECOMP_ABI_CALL(0x0026F750u, sub_0026F750); /* call 0x0026F750 */

loc_0027A004: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp + 0x30); /* fadd dword ptr [ebp + 0x30] */
    MEMF(ebp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp + 0x34); /* fadd dword ptr [ebp + 0x34] */
    MEMF(ebp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = fp_top() + MEMF(ebp + 0x38); /* fadd dword ptr [ebp + 0x38] */
    MEMF(ebp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */

loc_0027A022: ;
    _fa = (uint32_t)(MEM8(esi + 0x48)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x48), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027A0BF; /* je: equal / zero */

loc_0027A02C: ;
    SET_LO8(eax, MEM8(esi + 0x4B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027A055; /* jne: not equal / not zero */

loc_0027A033: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(eax + 0x10);
    ecx = edi + edi * 2;
    eax = edx + ecx * 4;
    ecx = MEM32(eax);
    MEM32(esp + 0x34) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x38) = edx;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x3C) = eax;
    goto loc_0027A0B3;

loc_0027A055: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A07D; /* jne: not equal / not zero */

loc_0027A059: ;
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx + 0x10);
    edx = ebx + ebx * 2;
    ecx = eax + edx * 4;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x7C);
    edx = edi + edi * 2;
    eax = eax + edx * 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x40;
    PUSH32(esp, 0x0027A07Bu); RECOMP_ABI_CALL(0x0023FC50u, sub_0023FC50); /* call 0x0023FC50 */

loc_0027A07B: ;
    goto loc_0027A0B3;

loc_0027A07D: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(esi + 0x44);
    ecx = MEM32(ecx + 0x10);
    edx = edi + edi * 2;
    ecx = ecx + edx * 8;
    edx = ebx + ebx * 2;
    edx = eax + edx * 4;
    PUSH32(esp, edx);
    edx = ecx + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = edi + edi * 2;
    edx = eax + ecx * 4;
    eax = MEM32(esp + 0x84);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    PUSH32(esp, 0x0027A0B3u); RECOMP_ABI_CALL(0x0023FDC0u, sub_0023FDC0); /* call 0x0023FDC0 */

loc_0027A0B3: ;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0027A0BFu); RECOMP_ABI_CALL(0x0023E5B0u, sub_0023E5B0); /* call 0x0023E5B0 */

loc_0027A0BF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x58;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0027A0D0
 * Original: 0x0027A0D0 - 0x0027A445 (885 bytes, 306 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027A0D0(void)
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

loc_0027A0D0: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x20));
    esp = esp - 0x20;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
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
    edi = MEM32(esi + 0x38);
    MEM32(esp + 0x10) = ebx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027A136; /* jne: not equal / not zero */

loc_0027A0FD: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax);
    ebp = MEM32(eax + 4);
    edx = MEM32(edi + 8);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(eax + edx * 8 + -8);
    edx = MEM32(eax + edx * 8 + -4);
    eax = MEM32(esi + 0x5C);
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esi + 0x58);
    edx = ecx;
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(MEM32(esp + 0x18))) >> 32) & 1);
    edx = edx + MEM32(esp + 0x18);
    MEM32(esp + 0x20) = edx;
    edx = eax;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(ebp) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    MEM32(esp + 0x24) = edx;
    goto loc_0027A16F;

loc_0027A136: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + 8);
    ecx = MEM32(edi + 0x10);
    ebx = MEM32(ecx + 4);
    ecx = MEM32(ecx);
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
    MEM32(esp + 0x28) = ebp;
    PUSH32(esp, 0x0027A155u); RECOMP_ABI_CALL(0x00342DE0u, sub_00342DE0); /* call 0x00342DE0 */

loc_0027A155: ;
    ecx = MEM32(esi + 0x58);
    ebx = MEM32(esp + 0x10);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esi + 0x5C);
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = eax;

loc_0027A16F: ;
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(esp + 0x14);
    edx = ecx;
    _cf = 0; /* logical op clears CF */
    edx = edx | MEM32(esp + 0x3C);
    if ((edx == 0)) goto loc_0027A272; /* je: equal / zero */

loc_0027A183: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x24) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0027A28F; /* jl: less (signed <) */

loc_0027A18D: ;
    if (CMP_G(_fas, _fbs)) goto loc_0027A199; /* jg: greater (signed >) */

loc_0027A18F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x20) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0027A28F; /* jbe: below or equal (unsigned <=) */

loc_0027A199: ;
    edx = MEM32(esi + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0027A272; /* ja: above (unsigned >) */

loc_0027A1A5: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x27A448); /* switch: 4 entries, 3 targets */
    if (_jt == 0x0027A1ACu) goto loc_0027A1AC;
    if (_jt == 0x0027A1CCu) goto loc_0027A1CC;
    if (_jt == 0x0027A229u) goto loc_0027A229;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0027A1AC: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(edi + 8);
    edx = MEM32(esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0027A1C0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027A1C0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    esp += 16; return; /* ret 12 */

loc_0027A1CC: ;
    edi = MEM32(esp + 0x18);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x40);
    PUSH32(esp, edx);
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(edi));
    ebx = ebx - edi;
    PUSH32(esp, ecx);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ebp) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027A1E6u); RECOMP_ABI_CALL(0x0024ECA0u, sub_0024ECA0); /* call 0x0024ECA0 */

loc_0027A1E6: ;
    ebx = MEM32(esp + 0x4C);
    eax = MEM32(esi + 0x28);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edi)) >> 32) & 1);
    ebx = ebx + edi;
    edi = MEM32(esp + 0x3C);
    { uint64_t _t = (uint64_t)(edi) + (uint64_t)(ebp) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edi = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0027A2BA; /* je: equal / zero */

loc_0027A201: ;
    ecx = MEM32(esi + 0x38);
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + eax * 8 + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + eax * 8 + -4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0027A2BA; /* jg: greater (signed >) */

loc_0027A211: ;
    if (CMP_L(_fas, _fbs)) goto loc_0027A21D; /* jl: less (signed <) */

loc_0027A213: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + eax * 8 + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + eax * 8 + -8) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0027A2BA; /* jae: above or equal (unsigned >=) */

loc_0027A21D: ;
    MEM32(esi + 0x28) = 1;
    goto loc_0027A2BA;

loc_0027A229: ;
    edi = MEM32(esp + 0x18);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x40);
    PUSH32(esp, edx);
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(edi));
    ebx = ebx - edi;
    PUSH32(esp, ecx);
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(ebp) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027A243u); RECOMP_ABI_CALL(0x0024ECA0u, sub_0024ECA0); /* call 0x0024ECA0 */

loc_0027A243: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0027A260; /* je: equal / zero */

loc_0027A24A: ;
    ebx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x38);
    edi = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x3C);
    _cf = (int)((uint32_t)(ebx) < (uint32_t)(ecx));
    ebx = ebx - ecx;
    { uint64_t _t = (uint64_t)(edi) - (uint64_t)(eax) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edi = (uint32_t)_t; }  /* sbb */
    goto loc_0027A2BA;

loc_0027A260: ;
    ebx = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x3C);
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(ecx)) >> 32) & 1);
    ebx = ebx + ecx;
    { uint64_t _t = (uint64_t)(edi) + (uint64_t)(ebp) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edi = (uint32_t)_t; }  /* adc */
    goto loc_0027A2BA;

loc_0027A272: ;
    ecx = MEM32(esp + 0x34);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0027A283u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027A283: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    esp += 16; return; /* ret 12 */

loc_0027A28F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_0027A2B8; /* jg: greater (signed >) */

loc_0027A293: ;
    if (CMP_L(_fas, _fbs)) goto loc_0027A29B; /* jl: less (signed <) */

loc_0027A295: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x18) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0027A2B8; /* jae: above or equal (unsigned >=) */

loc_0027A29B: ;
    eax = MEM32(esp + 0x34);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0027A2ACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027A2AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    esp += 16; return; /* ret 12 */

loc_0027A2B8: ;
    edi = eax;

loc_0027A2BA: ;
    ecx = MEM32(esp + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0027A3E9; /* jl: less (signed <) */

loc_0027A2C6: ;
    if (CMP_G(_fas, _fbs)) goto loc_0027A2D2; /* jg: greater (signed >) */

loc_0027A2C8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x28) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0027A3E9; /* jbe: below or equal (unsigned <=) */

loc_0027A2D2: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0027A3C4; /* jne: not equal / not zero */

loc_0027A2DC: ;
    eax = MEM32(esi + 0x38);
    ebp = MEM32(eax + 8);
    SET_LO8(edx, MEM8(esi + 0x20));
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x18) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_0027A34C; /* jne: not equal / not zero */

loc_0027A2F2: ;
    eax = ebx;
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esp + 0x28)));
    eax = eax - MEM32(esp + 0x28);
    edx = edi;
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x0027A303u); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_0027A303: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x38) = eax;
    fp_push((double)SMEM32(esp + 0x38)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0027A315; /* jge: greater or equal (signed >=) */

loc_0027A30F: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0027A315: ;
    edx = MEM32(esp + 0x28);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x2C);
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    edx = MEM32(esp + 0x24);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(ecx) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x0027A334u); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_0027A334: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x38) = eax;
    fp_push((double)SMEM32(esp + 0x38)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0027A346; /* jge: greater or equal (signed >=) */

loc_0027A340: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0027A346: ;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0027A39B;

loc_0027A34C: ;
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x0027A35Bu); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_0027A35B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x38) = eax;
    fp_push((double)SMEM32(esp + 0x38)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0027A36D; /* jge: greater or equal (signed >=) */

loc_0027A367: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0027A36D: ;
    eax = ebx;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    edx = edi;
    SET_LO8(ecx, 0x12);
    PUSH32(esp, 0x0027A37Cu); RECOMP_ABI_CALL(0x00342ED0u, sub_00342ED0); /* call 0x00342ED0 */

loc_0027A37C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0027A38E; /* jge: greater or equal (signed >=) */

loc_0027A388: ;
    fp_top() = fp_top() + MEMF(0x3CAA68); /* fadd dword ptr [0x3caa68] */

loc_0027A38E: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    PUSH32(esp, 0x0027A397u); RECOMP_ABI_CALL(0x00341916u, sub_00341916); /* call 0x00341916 */

loc_0027A397: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_0027A39B: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C89C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c89c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0027A3B6; /* jp: parity */

loc_0027A3AC: ;
    MEM32(esp + 0x38) = 0;
    goto loc_0027A422;

loc_0027A3B6: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() / MEMF(esp + 0x38); /* fdiv dword ptr [esp + 0x38] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_0027A422;

loc_0027A3C4: ;
    edx = MEM32(esp + 0x34);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x94); PUSH32(esp, 0x0027A3D3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027A3D3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x84); PUSH32(esp, 0x0027A3DDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027A3DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    esp += 16; return; /* ret 12 */

loc_0027A3E9: ;
    SET_LO8(eax, MEM8(esi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    edx = esp + 0x18;
    ecx = esp + 0x38;
    if (TEST_NZ(_fa, _fb)) goto loc_0027A40E; /* jne: not equal / not zero */

loc_0027A3F8: ;
    eax = esi + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0027A40Cu); RECOMP_ABI_CALL(0x0026F880u, sub_0026F880); /* call 0x0026F880 */

loc_0027A40C: ;
    goto loc_0027A41E;

loc_0027A40E: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0027A41Eu); RECOMP_ABI_CALL(0x0026F990u, sub_0026F990); /* call 0x0026F990 */

loc_0027A41E: ;
    ebp = MEM32(esp + 0x10);

loc_0027A422: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0027A439u); RECOMP_ABI_CALL(0x00279E80u, sub_00279E80); /* call 0x00279E80 */

loc_0027A439: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0027A460
 * Original: 0x0027A460 - 0x0027A4D1 (113 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027A460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027A460: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_0027A4B9; /* je: equal / zero */

loc_0027A46F: ;
    eax = MEM32(esi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0027A476u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027A476: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027A4B9; /* je: equal / zero */

loc_0027A47D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A4B2; /* jne: not equal / not zero */

loc_0027A482: ;
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    ebx = MEM32(0x5BD9C8);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0027A490u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027A490: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0027A4B9; /* je: equal / zero */

loc_0027A495: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027A49Cu); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0027A49C: ;
    esp = esp + 8;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 2;
    eax = ecx;
    esp += 8; return; /* ret 4 */

loc_0027A4B2: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0027A4B9: ;
    eax = MEM32(esi + 0x1C);
    edx = MEM32(edi + 0x18);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + edx * 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0027A4C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027A4C9: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027A4E0
 * Original: 0x0027A4E0 - 0x0027A503 (35 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027A4E0(void)
{

loc_0027A4E0: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0027A4EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027A4EE: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0027A4F6u); RECOMP_ABI_CALL(0x0027A460u, sub_0027A460); /* call 0x0027A460 */

loc_0027A4F6: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0027A4FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027A4FE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027A510
 * Original: 0x0027A510 - 0x0027A529 (25 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027A510(void)
{

loc_0027A510: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027A523u); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_0027A523: ;
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027A530
 * Original: 0x0027A530 - 0x0027A57A (74 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027A530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027A530: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0027A56B; /* je: equal / zero */

loc_0027A53E: ;
    esi = MEM32(eax + 0x10);
    ecx = MEM32(eax + 8);
    edi = esi + ecx * 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027A56B; /* jae: above or equal (unsigned >=) */

loc_0027A54B: ;
    ebx = MEM32(esp + 0x10);
    /* nop */

loc_0027A550: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0027A55Au); RECOMP_ABI_CALL(0x0027A460u, sub_0027A460); /* call 0x0027A460 */

loc_0027A55A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A56B; /* je: equal / zero */

loc_0027A55F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A571; /* je: equal / zero */

loc_0027A564: ;
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027A550; /* jb: below (unsigned <) */

loc_0027A56B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0027A571: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 2;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027A580
 * Original: 0x0027A580 - 0x0027A8EB (875 bytes, 297 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027A580(void)
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

loc_0027A580: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0027A590u); RECOMP_ABI_CALL(0x00268540u, sub_00268540); /* call 0x00268540 */

loc_0027A590: ;
    ebx = 0; /* xor self */
    MEM8(esi + 0x70) = LO8(ebx);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x15);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0027A59Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027A59E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027A62B; /* je: equal / zero */

loc_0027A5A6: ;
    edx = MEM32(esi + 0x20);
    MEM8(esi + 0x70) = 1;
    eax = 0; /* xor self */
    ecx = edx + 0x48;

loc_0027A5B2: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A5C1; /* je: equal / zero */

loc_0027A5B6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027A5B2; /* jl: less (signed <) */

loc_0027A5BF: ;
    goto loc_0027A5C4;

loc_0027A5C1: ;
    MEM8(esi + 0x70) = LO8(ebx);

loc_0027A5C4: ;
    _fa = (uint32_t)(MEM8(esi + 0x70)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x70), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A630; /* je: equal / zero */

loc_0027A5C9: ;
    MEM32(edx + 0x60) = 1;
    _fa = (uint32_t)(MEM8(esi + 0x49)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x49), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A5DF; /* je: equal / zero */

loc_0027A5D5: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0027A5DFu); RECOMP_ABI_CALL(0x0029D210u, sub_0029D210); /* call 0x0029D210 */

loc_0027A5DF: ;
    ecx = MEM32(esi + 0x50);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0027A5E9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027A5E9: ;
    ecx = esi;
    PUSH32(esp, 0x0027A5F0u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027A5F0: ;
    ecx = MEM32(esi + 0x78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0027A60E; /* je: equal / zero */

loc_0027A5F9: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027A60E; /* jne: not equal / not zero */

loc_0027A609: ;
    PUSH32(esp, 0x0027A60Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027A60E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027A614u); RECOMP_ABI_CALL(0x002957F0u, sub_002957F0); /* call 0x002957F0 */

loc_0027A614: ;
    esp = esp + 4;
    ecx = eax;
    MEM32(esi + 0x78) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0027A622u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027A622: ;
    ecx = MEM32(esi + 0x78);
    MEM16(ecx + 0x50) = 3;

loc_0027A62B: ;
    _fa = (uint32_t)(MEM8(esi + 0x70)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x70), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027A66F; /* jne: not equal / not zero */

loc_0027A630: ;
    edx = MEM32(esi + 0x20);
    MEM32(edx + 0x60) = 2;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027A643u); RECOMP_ABI_CALL(0x00298FD0u, sub_00298FD0); /* call 0x00298FD0 */

loc_0027A643: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027A653; /* jne: not equal / not zero */

loc_0027A647: ;
    eax = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027A650u); RECOMP_ABI_CALL(0x00278C00u, sub_00278C00); /* call 0x00278C00 */

loc_0027A650: ;
    esp = esp + 4;

loc_0027A653: ;
    _fa = (uint32_t)(MEM8(esi + 0x49)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x49), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A662; /* je: equal / zero */

loc_0027A658: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0027A662u); RECOMP_ABI_CALL(0x0029D210u, sub_0029D210); /* call 0x0029D210 */

loc_0027A662: ;
    ecx = MEM32(esi + 0x50);
    MEM8(esi + 0x70) = LO8(ebx);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0027A66Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027A66F: ;
    ecx = esi;
    PUSH32(esp, 0x0027A676u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027A676: ;
    ecx = MEM32(esi + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0027A694; /* je: equal / zero */

loc_0027A67F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027A694; /* jne: not equal / not zero */

loc_0027A68F: ;
    PUSH32(esp, 0x0027A694u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027A694: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027A69Au); RECOMP_ABI_CALL(0x00297800u, sub_00297800); /* call 0x00297800 */

loc_0027A69A: ;
    esp = esp + 4;
    ecx = eax;
    MEM32(esi + 0x74) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0027A6A9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027A6A9: ;
    ecx = MEM32(esi + 0x74);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0027A6B3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027A6B3: ;
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    fp_top() = fp_top() * MEMF(0x3FEDF0); /* fmul dword ptr [0x3fedf0] */
    PUSH32(esp, 0x0027A6C1u); RECOMP_ABI_CALL(0x001A41F0u, sub_001A41F0); /* call 0x001A41F0 */

loc_0027A6C1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    MEM8(esi + 0x7C) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0027A8E4; /* je: equal / zero */

loc_0027A6CC: ;
    ecx = esi;
    PUSH32(esp, 0x0027A6D3u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027A6D3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027A6D9u); RECOMP_ABI_CALL(0x001E1C50u, sub_001E1C50); /* call 0x001E1C50 */

loc_0027A6D9: ;
    ebp = eax;
    eax = MEM32(0x5BC528);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edi = esp;
    if (CMP_NE(_fa, _fb)) goto loc_0027A704; /* jne: not equal / not zero */

loc_0027A6E6: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0027A6EDu); RECOMP_ABI_CALL(0x001F4E60u, sub_001F4E60); /* call 0x001F4E60 */

loc_0027A6ED: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A6FD; /* je: equal / zero */

loc_0027A6F4: ;
    ecx = eax;
    PUSH32(esp, 0x0027A6FBu); RECOMP_ABI_CALL(0x00202CC0u, sub_00202CC0); /* call 0x00202CC0 */

loc_0027A6FB: ;
    goto loc_0027A6FF;

loc_0027A6FD: ;
    eax = 0; /* xor self */

loc_0027A6FF: ;
    MEM32(0x5BC528) = eax;

loc_0027A704: ;
    PUSH32(esp, 0x404CA8);
    ecx = eax;
    PUSH32(esp, 0x0027A710u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_0027A710: ;
    ecx = ebp;
    MEM32(edi) = eax;
    PUSH32(esp, 0x0027A719u); RECOMP_ABI_CALL(0x001B9E70u, sub_001B9E70); /* call 0x001B9E70 */

loc_0027A719: ;
    ecx = esi;
    PUSH32(esp, 0x0027A720u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027A720: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027A726u); RECOMP_ABI_CALL(0x002A0740u, sub_002A0740); /* call 0x002A0740 */

loc_0027A726: ;
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A732; /* je: equal / zero */

loc_0027A72F: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027A732: ;
    ecx = MEM32(esi + 0x80);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A751; /* je: equal / zero */

loc_0027A73C: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027A751; /* jne: not equal / not zero */

loc_0027A74C: ;
    PUSH32(esp, 0x0027A751u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027A751: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 0x80) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0027A772; /* je: equal / zero */

loc_0027A75B: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027A772; /* jne: not equal / not zero */

loc_0027A76B: ;
    ecx = edi;
    PUSH32(esp, 0x0027A772u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027A772: ;
    ecx = MEM32(esi + 0x80);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0027A77Fu); RECOMP_ABI_CALL(0x0029D060u, sub_0029D060); /* call 0x0029D060 */

loc_0027A77F: ;
    ecx = MEM32(esi + 0x80);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0027A78Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027A78B: ;
    ecx = MEM32(esi + 0x80);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0027A797u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027A797: ;
    ecx = MEM32(esi + 0x80);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x0027A7A6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027A7A6: ;
    ecx = MEM32(esi + 0x80);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0027A7B5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027A7B5: ;
    ecx = esi;
    PUSH32(esp, 0x0027A7BCu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027A7BC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027A7C2u); RECOMP_ABI_CALL(0x002A0DB0u, sub_002A0DB0); /* call 0x002A0DB0 */

loc_0027A7C2: ;
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A7CE; /* je: equal / zero */

loc_0027A7CB: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027A7CE: ;
    ecx = MEM32(esi + 0x84);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A7ED; /* je: equal / zero */

loc_0027A7D8: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027A7ED; /* jne: not equal / not zero */

loc_0027A7E8: ;
    PUSH32(esp, 0x0027A7EDu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027A7ED: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 0x84) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0027A80E; /* je: equal / zero */

loc_0027A7F7: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027A80E; /* jne: not equal / not zero */

loc_0027A807: ;
    ecx = edi;
    PUSH32(esp, 0x0027A80Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027A80E: ;
    ecx = MEM32(esi + 0x84);
    edx = MEM32(esi + 0x80);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0027A820u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027A820: ;
    ecx = MEM32(esi + 0x84);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0027A82Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027A82C: ;
    ecx = esi;
    PUSH32(esp, 0x0027A833u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027A833: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027A839u); RECOMP_ABI_CALL(0x002958A0u, sub_002958A0); /* call 0x002958A0 */

loc_0027A839: ;
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A845; /* je: equal / zero */

loc_0027A842: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027A845: ;
    ecx = MEM32(esi + 0x88);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A864; /* je: equal / zero */

loc_0027A84F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027A864; /* jne: not equal / not zero */

loc_0027A85F: ;
    PUSH32(esp, 0x0027A864u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027A864: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 0x88) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0027A885; /* je: equal / zero */

loc_0027A86E: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027A885; /* jne: not equal / not zero */

loc_0027A87E: ;
    ecx = edi;
    PUSH32(esp, 0x0027A885u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027A885: ;
    ecx = MEM32(esi + 0x88);
    MEM32(ecx + 0xC) = ebx;
    ecx = MEM32(esi + 0x88);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0027A89Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027A89A: ;
    ecx = MEM32(esi + 0x80);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027A8A6u); RECOMP_ABI_CALL(0x00298FD0u, sub_00298FD0); /* call 0x00298FD0 */

loc_0027A8A6: ;
    SET_LO8(ecx, MEM8(esi + 0x7C));
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    edx = esp + 0x20;
    MEM8(esp + 0x20) = LO8(ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0027A8BEu); RECOMP_ABI_CALL(0x001C4AC0u, sub_001C4AC0); /* call 0x001C4AC0 */

loc_0027A8BE: ;
    ecx = MEM32(esi + 0x80);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x0027A8C9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027A8C9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027A8E4; /* je: equal / zero */

loc_0027A8CD: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027A8E4; /* jne: not equal / not zero */

loc_0027A8DD: ;
    ecx = ebp;
    PUSH32(esp, 0x0027A8E4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027A8E4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0027A8F0
 * Original: 0x0027A8F0 - 0x0027AC1C (812 bytes, 291 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027A8F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027A8F0: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    esi = ecx;
    PUSH32(esp, 8);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0027A901u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027A901: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0027A913; /* jge: greater or equal (signed >=) */

loc_0027A906: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0027A90Eu); RECOMP_ABI_CALL(0x0025D840u, sub_0025D840); /* call 0x0025D840 */

loc_0027A90E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0027A913: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0027A91Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027A91C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0027A92D; /* je: equal / zero */

loc_0027A922: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027A928u); RECOMP_ABI_CALL(0x00273C60u, sub_00273C60); /* call 0x00273C60 */

loc_0027A928: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0027A92D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM8(esi + 0x48) = 1;
    PUSH32(esp, 0x0027A938u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027A938: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027A93Eu); RECOMP_ABI_CALL(0x0029FF60u, sub_0029FF60); /* call 0x0029FF60 */

loc_0027A93E: ;
    esp = esp + 4;
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0027A94Au); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027A94A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027A950u); RECOMP_ABI_CALL(0x0029FF60u, sub_0029FF60); /* call 0x0029FF60 */

loc_0027A950: ;
    ecx = MEM32(esi + 0x40);
    esp = esp + 4;
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x0027A95Eu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027A95E: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027A967u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027A967: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027A9D3; /* je: equal / zero */

loc_0027A96E: ;
    eax = MEM32(0x5BDD60);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0027A97Bu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027A97B: ;
    ecx = MEM32(esi + 0x58);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0027A986u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027A986: ;
    edx = MEM32(esi + 0x58);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0027A991u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027A991: ;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0027A99Cu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027A99C: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0027A9A7u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027A9A7: ;
    edx = MEM32(esi + 0x5C);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0027A9B2u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027A9B2: ;
    eax = MEM32(esi + 0x5C);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0027A9BDu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027A9BD: ;
    ecx = MEM32(esi + 0x60);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0027A9C8u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027A9C8: ;
    edx = MEM32(esi + 0x60);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0027A9D3u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027A9D3: ;
    ecx = esi;
    PUSH32(esp, 0x0027A9DAu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027A9DA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ebp = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0027A9F7; /* je: equal / zero */

loc_0027A9E0: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027A9F7; /* jne: not equal / not zero */

loc_0027A9F0: ;
    ecx = edi;
    PUSH32(esp, 0x0027A9F7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027A9F7: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0027A9FDu); RECOMP_ABI_CALL(0x0029FF60u, sub_0029FF60); /* call 0x0029FF60 */

loc_0027A9FD: ;
    esp = esp + 4;
    ecx = esi;
    ebp = eax;
    PUSH32(esp, 0x0027AA09u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027AA09: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    edi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0027AA26; /* je: equal / zero */

loc_0027AA0F: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027AA26; /* jne: not equal / not zero */

loc_0027AA1F: ;
    ecx = ebx;
    PUSH32(esp, 0x0027AA26u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027AA26: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027AA2Cu); RECOMP_ABI_CALL(0x0029FF60u, sub_0029FF60); /* call 0x0029FF60 */

loc_0027AA2C: ;
    ecx = MEM32(esi + 0x40);
    esp = esp + 4;
    PUSH32(esp, ebp);
    edi = eax;
    PUSH32(esp, 0x0027AA3Au); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027AA3A: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027AA43u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027AA43: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027AA52; /* je: equal / zero */

loc_0027AA4A: ;
    eax = MEM32(0x5BDD60);
    PUSH32(esp, eax);
    goto loc_0027AA67;

loc_0027AA52: ;
    ecx = MEM32(0x5BDD60);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0027AA60u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027AA60: ;
    edx = MEM32(0x5BDD60);
    PUSH32(esp, edx);

loc_0027AA67: ;
    ecx = edi;
    PUSH32(esp, 0x0027AA6Eu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027AA6E: ;
    eax = MEM32(esi + 0x68);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0027AA79u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027AA79: ;
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0027AA84u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027AA84: ;
    edx = MEM32(esi + 0x74);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0027AA8Fu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027AA8F: ;
    eax = MEM32(esi + 0x74);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0027AA9Au); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027AA9A: ;
    ecx = MEM32(0x5BDD64);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0027AAA8u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027AAA8: ;
    edx = MEM32(0x5BDD64);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0027AAB6u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027AAB6: ;
    eax = MEM32(0x5BDED8);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0027AAC3u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027AAC3: ;
    ecx = MEM32(0x5BDED8);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0027AAD1u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027AAD1: ;
    edx = MEM32(0x5BDF3C);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0027AADFu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027AADF: ;
    eax = MEM32(0x5BDF3C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0027AAECu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027AAEC: ;
    ecx = MEM32(esi + 0x64);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0027AAF7u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027AAF7: ;
    edx = MEM32(esi + 0x64);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0027AB02u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027AB02: ;
    eax = MEM32(esi + 0x6C);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0027AB0Du); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027AB0D: ;
    ecx = MEM32(esi + 0x6C);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0027AB18u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027AB18: ;
    SET_LO8(eax, MEM8(esi + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027AB5A; /* je: equal / zero */

loc_0027AB1F: ;
    edx = MEM32(0x5BDF54);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0027AB2Du); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027AB2D: ;
    eax = MEM32(0x5BDF54);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0027AB3Au); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027AB3A: ;
    ecx = MEM32(esi + 0x78);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0027AB44u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027AB44: ;
    eax = MEM32(esi + 0x78);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0027AB4Fu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027AB4F: ;
    ecx = MEM32(esi + 0x78);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0027AB5Au); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027AB5A: ;
    edx = MEM32(0x5BDF60);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0027AB68u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027AB68: ;
    eax = MEM32(0x5BDF60);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0027AB75u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027AB75: ;
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0027AB7Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027AB7F: ;
    eax = MEM32(esi + 0x4C);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0027AB8Au); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027AB8A: ;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0027AB95u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027AB95: ;
    ecx = MEM32(esi + 0x54);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0027AB9Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027AB9F: ;
    eax = MEM32(esi + 0x54);
    MEM32(eax + 0xC) = 1;
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0027ABB4u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027ABB4: ;
    edx = MEM32(esi + 0x54);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0027ABBFu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027ABBF: ;
    ecx = MEM32(esi + 0x50);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0027ABC9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027ABC9: ;
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0027ABD4u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027ABD4: ;
    edx = MEM32(esi + 0x50);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0027ABDFu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027ABDF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027ABFA; /* je: equal / zero */

loc_0027ABE3: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027ABFA; /* jne: not equal / not zero */

loc_0027ABF3: ;
    ecx = edi;
    PUSH32(esp, 0x0027ABFAu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027ABFA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027AC15; /* je: equal / zero */

loc_0027ABFE: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027AC15; /* jne: not equal / not zero */

loc_0027AC0E: ;
    ecx = ebp;
    PUSH32(esp, 0x0027AC15u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027AC15: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027AC20
 * Original: 0x0027AC20 - 0x0027AC7A (90 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027AC20(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027AC20: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(ebp + 0x44);
    PUSH32(esp, esi);
    esi = MEM32(edx + ecx * 4);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ecx + 0x10);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edi = edi + esi;
    esi = MEM32(edx + edi * 4);
    ebx = MEM32(esi + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0027AC53; /* jge: greater or equal (signed >=) */

loc_0027AC4B: ;
    ecx = ebx + 1;
    MEM32(esi + 8) = ecx;
    goto loc_0027AC64;

loc_0027AC53: ;
    PUSH32(esp, 4);
    edx = ebx + 1;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0027AC60u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0027AC60: ;
    eax = MEM32(esp + 0x14);

loc_0027AC64: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    MEM32(ecx + ebx * 4) = eax;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x0027AC73u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0027AC73: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027AC80
 * Original: 0x0027AC80 - 0x0027ACC3 (67 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027AC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027AC80: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + 0x10);
    esi = MEM32(ecx + ebx * 4);
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027ACAD; /* je: equal / zero */

loc_0027AC99: ;
    edx = MEM32(edi + 0x30);
    ecx = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x10);
    ecx = MEM32(edx + ecx * 4 + -4);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0027ACAAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027ACAA: ;
    esp = esp + 8;

loc_0027ACAD: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, ebx);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 8) = edx;
    PUSH32(esp, 0x0027ACBDu); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0027ACBD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027ACD0
 * Original: 0x0027ACD0 - 0x0027AD22 (82 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027ACD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027ACD0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 8);
    edx = MEM32(edi + 0x44);
    ebx = MEM32(edx + ecx * 4);
    eax = MEM32(edi + 0x10);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0x10);
    ebx = ebx + edx;
    esi = MEM32(ecx + ebx * 4);
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027AD0C; /* je: equal / zero */

loc_0027ACF8: ;
    edx = MEM32(edi + 0x30);
    ecx = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x10);
    ecx = MEM32(edx + ecx * 4 + -4);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0027AD09u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027AD09: ;
    esp = esp + 8;

loc_0027AD0C: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, ebx);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 8) = edx;
    PUSH32(esp, 0x0027AD1Cu); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0027AD1C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027AD30
 * Original: 0x0027AD30 - 0x0027AD7A (74 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027AD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027AD30: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027AD40; /* jne: not equal / not zero */

loc_0027AD39: ;
    MEM8(0x5BDF6C) = 1;

loc_0027AD40: ;
    PUSH32(esp, 0x47107C);
    PUSH32(esp, 0x251F60);
    PUSH32(esp, 0x251E00);
    PUSH32(esp, 0x274500);
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x404CC0);
    PUSH32(esp, 0x287230);
    PUSH32(esp, 0x14A7D0);
    PUSH32(esp, 0x2880A0);
    PUSH32(esp, 0x5BD89C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0027AD76u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0027AD76: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0027AD80
 * Original: 0x0027AD80 - 0x0027AD86 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027AD80(void)
{

loc_0027AD80: ;
    eax = MEM32(0x5BD8B0);
    esp += 4; return; /* ret */

}

/**
 * sub_0027AD90
 * Original: 0x0027AD90 - 0x0027ADA4 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027AD90(void)
{

loc_0027AD90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    ecx = ecx + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027AD9Eu); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0027AD9E: ;
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027ADB0
 * Original: 0x0027ADB0 - 0x0027ADC4 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027ADB0(void)
{

loc_0027ADB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    ecx = ecx + 0x60;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027ADBEu); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0027ADBE: ;
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027ADD0
 * Original: 0x0027ADD0 - 0x0027ADD6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027ADD0(void)
{

loc_0027ADD0: ;
    eax = MEM32(0x5BD8B4);
    esp += 4; return; /* ret */

}

/**
 * sub_0027ADE0
 * Original: 0x0027ADE0 - 0x0027AE04 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027ADE0(void)
{

loc_0027ADE0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0027ADEBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027ADEB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x4038A0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0027AE10
 * Original: 0x0027AE10 - 0x0027AE34 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027AE10(void)
{

loc_0027AE10: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0027AE1Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027AE1B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x403900;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0027AE40
 * Original: 0x0027AE40 - 0x0027AE97 (87 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027AE40(void)
{

loc_0027AE40: ;
    esp = esp - 0x6C;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0027AE4Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027AE4D: ;
    esi = 0; /* xor self */
    ecx = esp + 0x24;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 4) = 0x403958;
    PUSH32(esp, 0x0027AE70u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0027AE70: ;
    eax = MEM32(0x5BC508);
    MEM32(esp + 0x68) = esi;
    MEM32(esp + 0x6C) = esi;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0027AE90u); RECOMP_ABI_CALL(0x00274600u, sub_00274600); /* call 0x00274600 */

loc_0027AE90: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x6C;
    esp += 4; return; /* ret */

}

/**
 * sub_0027AEA0
 * Original: 0x0027AEA0 - 0x0027AEA6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027AEA0(void)
{

loc_0027AEA0: ;
    eax = MEM32(0x5BD8CC);
    esp += 4; return; /* ret */

}

/**
 * sub_0027AEB0
 * Original: 0x0027AEB0 - 0x0027AEC1 (17 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027AEB0(void)
{

loc_0027AEB0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x38) = eax;
    MEM32(ecx + 0x3C) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027AED0
 * Original: 0x0027AED0 - 0x0027AED7 (7 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027AED0(void)
{

loc_0027AED0: ;
    eax = MEM32(ecx + 0x38);
    edx = MEM32(ecx + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_0027AEE0
 * Original: 0x0027AEE0 - 0x0027AEEA (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027AEE0(void)
{

loc_0027AEE0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x30) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027AEF0
 * Original: 0x0027AEF0 - 0x0027AEF4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027AEF0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0027AEF0: ;
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0027AF00
 * Original: 0x0027AF00 - 0x0027AF4A (74 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027AF00(void)
{

loc_0027AF00: ;
    esp = esp - 0x38;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0027AF0Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027AF0D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x4039F0;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0027AF43u); RECOMP_ABI_CALL(0x0019C0A0u, sub_0019C0A0); /* call 0x0019C0A0 */

loc_0027AF43: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_0027AF50
 * Original: 0x0027AF50 - 0x0027AF5C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027AF50(void)
{

loc_0027AF50: ;
    PUSH32(esp, 0x2746A0);
    PUSH32(esp, 0x0027AF5Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027AF5A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027AF60
 * Original: 0x0027AF60 - 0x0027AFAA (74 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027AF60(void)
{

loc_0027AF60: ;
    esp = esp - 0x24;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0027AF6Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027AF6D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x403AB8;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0027AFA3u); RECOMP_ABI_CALL(0x0019C0A0u, sub_0019C0A0); /* call 0x0019C0A0 */

loc_0027AFA3: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_0027AFB0
 * Original: 0x0027AFB0 - 0x0027AFCE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027AFB0(void)
{

loc_0027AFB0: ;
    PUSH32(esp, 0x25F1F0);
    PUSH32(esp, 0x0027AFBAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027AFBA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BD8F0);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027AFCDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0027AFCD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0027AFD0
 * Original: 0x0027AFD0 - 0x0027AFF4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027AFD0(void)
{

loc_0027AFD0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0027AFDBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027AFDB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x403B48;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0027B000
 * Original: 0x0027B000 - 0x0027B044 (68 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B000: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027B010; /* jne: not equal / not zero */

loc_0027B009: ;
    MEM8(0x5BDF6C) = 1;

loc_0027B010: ;
    PUSH32(esp, 0x47108C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x27AFD0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x404E70);
    PUSH32(esp, 0x250270);
    PUSH32(esp, 0x1A43F0);
    PUSH32(esp, 0x223F30);
    PUSH32(esp, 0x5BD900);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0027B040u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0027B040: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0027B050
 * Original: 0x0027B050 - 0x0027B094 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B050: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027B060; /* jne: not equal / not zero */

loc_0027B059: ;
    MEM8(0x5BDF6C) = 1;

loc_0027B060: ;
    PUSH32(esp, 0x471094);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x274790);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x404E84);
    PUSH32(esp, 0x2503F0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BD90C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0027B090u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0027B090: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0027B0A0
 * Original: 0x0027B0A0 - 0x0027B0E4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B0A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B0A0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027B0B0; /* jne: not equal / not zero */

loc_0027B0A9: ;
    MEM8(0x5BDF6C) = 1;

loc_0027B0B0: ;
    PUSH32(esp, 0x47109C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x274830);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x404E90);
    PUSH32(esp, 0x2504E0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BD91C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0027B0E0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0027B0E0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0027B0F0
 * Original: 0x0027B0F0 - 0x0027B0F6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B0F0(void)
{

loc_0027B0F0: ;
    eax = MEM32(0x5BD924);
    esp += 4; return; /* ret */

}

/**
 * sub_0027B100
 * Original: 0x0027B100 - 0x0027B106 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B100(void)
{

loc_0027B100: ;
    eax = MEM32(0x5BD928);
    esp += 4; return; /* ret */

}

/**
 * sub_0027B110
 * Original: 0x0027B110 - 0x0027B12F (31 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B110: ;
    eax = ecx;
    SET_LO8(ecx, MEM8(eax + 0x21));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027B129; /* je: equal / zero */

loc_0027B119: ;
    ecx = MEM32(eax + 0x28);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0027B122u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027B122: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027B129; /* jne: not equal / not zero */

loc_0027B126: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0027B129: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0027B130
 * Original: 0x0027B130 - 0x0027B1C7 (151 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B130(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027B130: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027B14F; /* je: equal / zero */

loc_0027B13A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027B14F; /* jne: not equal / not zero */

loc_0027B14A: ;
    PUSH32(esp, 0x0027B14Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027B14F: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027B16B; /* je: equal / zero */

loc_0027B156: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027B16B; /* jne: not equal / not zero */

loc_0027B166: ;
    PUSH32(esp, 0x0027B16Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027B16B: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027B187; /* je: equal / zero */

loc_0027B172: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027B187; /* jne: not equal / not zero */

loc_0027B182: ;
    PUSH32(esp, 0x0027B187u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027B187: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027B1A3; /* je: equal / zero */

loc_0027B18E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027B1A3; /* jne: not equal / not zero */

loc_0027B19E: ;
    PUSH32(esp, 0x0027B1A3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027B1A3: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027B1BF; /* je: equal / zero */

loc_0027B1AA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027B1BF; /* jne: not equal / not zero */

loc_0027B1BA: ;
    PUSH32(esp, 0x0027B1BFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027B1BF: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0019C0A0(); return; /* tail jmp 0x0019C0A0 */

}

/**
 * sub_0027B1D0
 * Original: 0x0027B1D0 - 0x0027B214 (68 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B1D0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027B1E0; /* jne: not equal / not zero */

loc_0027B1D9: ;
    MEM8(0x5BDF6C) = 1;

loc_0027B1E0: ;
    PUSH32(esp, 0x4710A4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x274920);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x404FF0);
    PUSH32(esp, 0x2506C0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BD938);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0027B210u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0027B210: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0027B220
 * Original: 0x0027B220 - 0x0027B276 (86 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B220(void)
{

loc_0027B220: ;
    esp = esp - 0x3C;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0027B22Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027B22D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x403BB8;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0027B26Fu); RECOMP_ABI_CALL(0x00276F50u, sub_00276F50); /* call 0x00276F50 */

loc_0027B26F: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_0027B280
 * Original: 0x0027B280 - 0x0027B28C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B280(void)
{

loc_0027B280: ;
    PUSH32(esp, 0x2749B0);
    PUSH32(esp, 0x0027B28Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027B28A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027B290
 * Original: 0x0027B290 - 0x0027B29C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B290(void)
{

loc_0027B290: ;
    PUSH32(esp, 0x274A30);
    PUSH32(esp, 0x0027B29Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027B29A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027B2A0
 * Original: 0x0027B2A0 - 0x0027B2AC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B2A0(void)
{

loc_0027B2A0: ;
    PUSH32(esp, 0x274AB0);
    PUSH32(esp, 0x0027B2AAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027B2AA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027B2B0
 * Original: 0x0027B2B0 - 0x0027B2BC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B2B0(void)
{

loc_0027B2B0: ;
    PUSH32(esp, 0x274B30);
    PUSH32(esp, 0x0027B2BAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027B2BA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027B2C0
 * Original: 0x0027B2C0 - 0x0027B2CC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B2C0(void)
{

loc_0027B2C0: ;
    PUSH32(esp, 0x274BB0);
    PUSH32(esp, 0x0027B2CAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027B2CA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027B2D0
 * Original: 0x0027B2D0 - 0x0027B2DC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B2D0(void)
{

loc_0027B2D0: ;
    PUSH32(esp, 0x274C30);
    PUSH32(esp, 0x0027B2DAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027B2DA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027B2E0
 * Original: 0x0027B2E0 - 0x0027B2EC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B2E0(void)
{

loc_0027B2E0: ;
    PUSH32(esp, 0x274CB0);
    PUSH32(esp, 0x0027B2EAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027B2EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027B2F0
 * Original: 0x0027B2F0 - 0x0027B2FC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B2F0(void)
{

loc_0027B2F0: ;
    PUSH32(esp, 0x274D30);
    PUSH32(esp, 0x0027B2FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027B2FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027B300
 * Original: 0x0027B300 - 0x0027B30C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B300(void)
{

loc_0027B300: ;
    PUSH32(esp, 0x274DB0);
    PUSH32(esp, 0x0027B30Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027B30A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027B310
 * Original: 0x0027B310 - 0x0027B334 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B310(void)
{

loc_0027B310: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0027B31Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027B31B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x403D28;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0027B340
 * Original: 0x0027B340 - 0x0027B381 (65 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B340: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027B350; /* jne: not equal / not zero */

loc_0027B349: ;
    MEM8(0x5BDF6C) = 1;

loc_0027B350: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x27B310);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x405004);
    PUSH32(esp, 0x24FAC0);
    PUSH32(esp, 0x1A4380);
    PUSH32(esp, 0x21EE90);
    PUSH32(esp, 0x5BD978);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0027B37Du); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0027B37D: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0027B390
 * Original: 0x0027B390 - 0x0027B3B4 (36 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B390(void)
{

loc_0027B390: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0027B39Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027B39B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x403D80;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0027B3C0
 * Original: 0x0027B3C0 - 0x0027B401 (65 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B3C0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027B3D0; /* jne: not equal / not zero */

loc_0027B3C9: ;
    MEM8(0x5BDF6C) = 1;

loc_0027B3D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x27B390);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x405028);
    PUSH32(esp, 0x24FA90);
    PUSH32(esp, 0x1A4380);
    PUSH32(esp, 0x21EE90);
    PUSH32(esp, 0x5BD97C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0027B3FDu); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0027B3FD: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0027B410
 * Original: 0x0027B410 - 0x0027B442 (50 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B410(void)
{

loc_0027B410: ;
    esp = esp - 0xE8;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0027B420u); RECOMP_ABI_CALL(0x00274E20u, sub_00274E20); /* call 0x00274E20 */

loc_0027B420: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0027B438u); RECOMP_ABI_CALL(0x00274ED0u, sub_00274ED0); /* call 0x00274ED0 */

loc_0027B438: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0xE8;
    esp += 4; return; /* ret */

}

/**
 * sub_0027B450
 * Original: 0x0027B450 - 0x0027B496 (70 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B450(void)
{

loc_0027B450: ;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0027B45Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027B45D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x403E68;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0027B48Fu); RECOMP_ABI_CALL(0x0019C0A0u, sub_0019C0A0); /* call 0x0019C0A0 */

loc_0027B48F: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0027B4A0
 * Original: 0x0027B4A0 - 0x0027B4E4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B4A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B4A0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027B4B0; /* jne: not equal / not zero */

loc_0027B4A9: ;
    MEM8(0x5BDF6C) = 1;

loc_0027B4B0: ;
    PUSH32(esp, 0x4710AC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2751D0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x405040);
    PUSH32(esp, 0x2507E0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BD994);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0027B4E0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0027B4E0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0027B4F0
 * Original: 0x0027B4F0 - 0x0027B522 (50 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B4F0(void)
{

loc_0027B4F0: ;
    esp = esp - 0xF0;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0027B500u); RECOMP_ABI_CALL(0x00275210u, sub_00275210); /* call 0x00275210 */

loc_0027B500: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0027B518u); RECOMP_ABI_CALL(0x002752D0u, sub_002752D0); /* call 0x002752D0 */

loc_0027B518: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0xF0;
    esp += 4; return; /* ret */

}

/**
 * sub_0027B530
 * Original: 0x0027B530 - 0x0027B536 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B530(void)
{

loc_0027B530: ;
    eax = MEM32(0x5BD9A4);
    esp += 4; return; /* ret */

}

/**
 * sub_0027B540
 * Original: 0x0027B540 - 0x0027B600 (192 bytes, 81 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B540: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x50);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0027B556u); RECOMP_ABI_CALL(0x00144F50u, sub_00144F50); /* call 0x00144F50 */

loc_0027B556: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0027B56B; /* jle: less or equal (signed <=) */

loc_0027B55F: ;
    /* nop */

loc_0027B560: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + eax * 4) = ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027B560; /* jl: less (signed <) */

loc_0027B56B: ;
    MEM32(esi + 8) = ebx;
    esi = MEM32(edi + 0x54);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0027B57Du); RECOMP_ABI_CALL(0x00144F50u, sub_00144F50); /* call 0x00144F50 */

loc_0027B57D: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0027B591; /* jle: less or equal (signed <=) */

loc_0027B586: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + eax * 4) = ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027B586; /* jl: less (signed <) */

loc_0027B591: ;
    MEM32(esi + 8) = ebx;
    esi = MEM32(edi + 0x58);
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0027B5A3u); RECOMP_ABI_CALL(0x00144F50u, sub_00144F50); /* call 0x00144F50 */

loc_0027B5A3: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0027B5BB; /* jle: less or equal (signed <=) */

loc_0027B5AC: ;
    /* nop */

loc_0027B5B0: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + eax * 4) = ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027B5B0; /* jl: less (signed <) */

loc_0027B5BB: ;
    MEM32(esi + 8) = ebx;
    ecx = MEM32(edi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027B5DA; /* je: equal / zero */

loc_0027B5C5: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027B5DA; /* jne: not equal / not zero */

loc_0027B5D5: ;
    PUSH32(esp, 0x0027B5DAu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027B5DA: ;
    MEM32(edi + 0x5C) = ebx;
    ecx = MEM32(edi + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027B5F9; /* je: equal / zero */

loc_0027B5E4: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027B5F9; /* jne: not equal / not zero */

loc_0027B5F4: ;
    PUSH32(esp, 0x0027B5F9u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027B5F9: ;
    MEM32(edi + 0x60) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027B600
 * Original: 0x0027B600 - 0x0027B73F (319 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B600(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027B600: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027B61F; /* je: equal / zero */

loc_0027B60A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027B61F; /* jne: not equal / not zero */

loc_0027B61A: ;
    PUSH32(esp, 0x0027B61Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027B61F: ;
    ecx = MEM32(esi + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027B63B; /* je: equal / zero */

loc_0027B626: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027B63B; /* jne: not equal / not zero */

loc_0027B636: ;
    PUSH32(esp, 0x0027B63Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027B63B: ;
    ecx = MEM32(esi + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027B657; /* je: equal / zero */

loc_0027B642: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027B657; /* jne: not equal / not zero */

loc_0027B652: ;
    PUSH32(esp, 0x0027B657u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027B657: ;
    ecx = MEM32(esi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027B673; /* je: equal / zero */

loc_0027B65E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027B673; /* jne: not equal / not zero */

loc_0027B66E: ;
    PUSH32(esp, 0x0027B673u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027B673: ;
    ecx = MEM32(esi + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027B68F; /* je: equal / zero */

loc_0027B67A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027B68F; /* jne: not equal / not zero */

loc_0027B68A: ;
    PUSH32(esp, 0x0027B68Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027B68F: ;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027B6AB; /* je: equal / zero */

loc_0027B696: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027B6AB; /* jne: not equal / not zero */

loc_0027B6A6: ;
    PUSH32(esp, 0x0027B6ABu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027B6AB: ;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027B6C7; /* je: equal / zero */

loc_0027B6B2: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027B6C7; /* jne: not equal / not zero */

loc_0027B6C2: ;
    PUSH32(esp, 0x0027B6C7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027B6C7: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027B6E3; /* je: equal / zero */

loc_0027B6CE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027B6E3; /* jne: not equal / not zero */

loc_0027B6DE: ;
    PUSH32(esp, 0x0027B6E3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027B6E3: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027B6FF; /* je: equal / zero */

loc_0027B6EA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027B6FF; /* jne: not equal / not zero */

loc_0027B6FA: ;
    PUSH32(esp, 0x0027B6FFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027B6FF: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027B71B; /* je: equal / zero */

loc_0027B706: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027B71B; /* jne: not equal / not zero */

loc_0027B716: ;
    PUSH32(esp, 0x0027B71Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027B71B: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027B737; /* je: equal / zero */

loc_0027B722: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027B737; /* jne: not equal / not zero */

loc_0027B732: ;
    PUSH32(esp, 0x0027B737u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027B737: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0019C0A0(); return; /* tail jmp 0x0019C0A0 */

}

/**
 * sub_0027B740
 * Original: 0x0027B740 - 0x0027B78A (74 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B740(void)
{

loc_0027B740: ;
    esp = esp - 0x28;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0027B74Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027B74D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x403F88;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0027B783u); RECOMP_ABI_CALL(0x0019C0A0u, sub_0019C0A0); /* call 0x0019C0A0 */

loc_0027B783: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_0027B790
 * Original: 0x0027B790 - 0x0027B7B4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B790(void)
{

loc_0027B790: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0027B79Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027B79B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x404030;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0027B7C0
 * Original: 0x0027B7C0 - 0x0027B804 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B7C0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027B7D0; /* jne: not equal / not zero */

loc_0027B7C9: ;
    MEM8(0x5BDF6C) = 1;

loc_0027B7D0: ;
    PUSH32(esp, 0x4710B4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x27B790);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x4050E8);
    PUSH32(esp, 0x24F9B0);
    PUSH32(esp, 0x1A43F0);
    PUSH32(esp, 0x223F30);
    PUSH32(esp, 0x5BD9B8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0027B800u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0027B800: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0027B810
 * Original: 0x0027B810 - 0x0027B81C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B810(void)
{

loc_0027B810: ;
    PUSH32(esp, 0x275740);
    PUSH32(esp, 0x0027B81Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027B81A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027B820
 * Original: 0x0027B820 - 0x0027B87A (90 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B820(void)
{

loc_0027B820: ;
    esp = esp - 0x48;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0027B82Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027B82D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x48) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x404098;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0027B873u); RECOMP_ABI_CALL(0x00276F50u, sub_00276F50); /* call 0x00276F50 */

loc_0027B873: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

}

/**
 * sub_0027B880
 * Original: 0x0027B880 - 0x0027B8C7 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B880: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027B890; /* jne: not equal / not zero */

loc_0027B889: ;
    MEM8(0x5BDF6C) = 1;

loc_0027B890: ;
    PUSH32(esp, 0x4710BC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x254100);
    PUSH32(esp, 0x25FA00);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x405100);
    PUSH32(esp, 0x250AE0);
    PUSH32(esp, 0x254F80);
    PUSH32(esp, 0x254F90);
    PUSH32(esp, 0x5BD9D4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0027B8C3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0027B8C3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0027B8D0
 * Original: 0x0027B8D0 - 0x0027B914 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B8D0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027B8E0; /* jne: not equal / not zero */

loc_0027B8D9: ;
    MEM8(0x5BDF6C) = 1;

loc_0027B8E0: ;
    PUSH32(esp, 0x4710C8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2757D0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x405108);
    PUSH32(esp, 0x250AB0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BD9D8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0027B910u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0027B910: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0027B920
 * Original: 0x0027B920 - 0x0027B926 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B920(void)
{

loc_0027B920: ;
    eax = MEM32(0x5BD9EC);
    esp += 4; return; /* ret */

}

/**
 * sub_0027B930
 * Original: 0x0027B930 - 0x0027B9AB (123 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B930(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027B930: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027B94F; /* je: equal / zero */

loc_0027B93A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027B94F; /* jne: not equal / not zero */

loc_0027B94A: ;
    PUSH32(esp, 0x0027B94Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027B94F: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027B96B; /* je: equal / zero */

loc_0027B956: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027B96B; /* jne: not equal / not zero */

loc_0027B966: ;
    PUSH32(esp, 0x0027B96Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027B96B: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027B987; /* je: equal / zero */

loc_0027B972: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027B987; /* jne: not equal / not zero */

loc_0027B982: ;
    PUSH32(esp, 0x0027B987u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027B987: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027B9A3; /* je: equal / zero */

loc_0027B98E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027B9A3; /* jne: not equal / not zero */

loc_0027B99E: ;
    PUSH32(esp, 0x0027B9A3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027B9A3: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0019C7F0(); return; /* tail jmp 0x0019C7F0 */

}

/**
 * sub_0027B9B0
 * Original: 0x0027B9B0 - 0x0027B9F4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027B9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027B9B0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027B9C0; /* jne: not equal / not zero */

loc_0027B9B9: ;
    MEM8(0x5BDF6C) = 1;

loc_0027B9C0: ;
    PUSH32(esp, 0x4710D0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x275850);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x4051B0);
    PUSH32(esp, 0x250C30);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BDA08);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0027B9F0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0027B9F0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0027BA00
 * Original: 0x0027BA00 - 0x0027BA5E (94 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BA00(void)
{

loc_0027BA00: ;
    esp = esp - 0x3C;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0027BA0Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027BA0D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x404128;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0027BA57u); RECOMP_ABI_CALL(0x0027B930u, sub_0027B930); /* call 0x0027B930 */

loc_0027BA57: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_0027BA60
 * Original: 0x0027BA60 - 0x0027BAD2 (114 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BA60(void)
{

loc_0027BA60: ;
    esp = esp - 0x50;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0027BA6Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027BA6D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x4041C0;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0027BACBu); RECOMP_ABI_CALL(0x002758B0u, sub_002758B0); /* call 0x002758B0 */

loc_0027BACB: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_0027BAE0
 * Original: 0x0027BAE0 - 0x0027BB26 (70 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BAE0(void)
{

loc_0027BAE0: ;
    esp = esp - 0x24;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0027BAEDu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027BAED: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x404258;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0027BB1Fu); RECOMP_ABI_CALL(0x0019C0A0u, sub_0019C0A0); /* call 0x0019C0A0 */

loc_0027BB1F: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_0027BB30
 * Original: 0x0027BB30 - 0x0027BB82 (82 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BB30(void)
{

loc_0027BB30: ;
    esp = esp - 0x44;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0027BB3Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027BB3D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x44) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x4042E8;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0027BB7Bu); RECOMP_ABI_CALL(0x00275A30u, sub_00275A30); /* call 0x00275A30 */

loc_0027BB7B: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_0027BB90
 * Original: 0x0027BB90 - 0x0027BBDA (74 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BB90(void)
{

loc_0027BB90: ;
    esp = esp - 0x24;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0027BB9Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027BB9D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x404378;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0027BBD3u); RECOMP_ABI_CALL(0x0019C0A0u, sub_0019C0A0); /* call 0x0019C0A0 */

loc_0027BBD3: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_0027BBE0
 * Original: 0x0027BBE0 - 0x0027BC55 (117 bytes, 27 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BBE0(void)
{

loc_0027BBE0: ;
    esp = esp - 0xB0;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0027BBF0u); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027BBF0: ;
    esi = 0; /* xor self */
    ecx = esp + 0x24;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 4) = 0x403958;
    PUSH32(esp, 0x0027BC13u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0027BC13: ;
    ecx = esp + 0x70;
    MEM32(esp + 0x68) = esi;
    MEM32(esp + 0x6C) = esi;
    MEM32(esp + 4) = 0x404408;
    PUSH32(esp, 0x0027BC2Cu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0027BC2C: ;
    eax = MEM32(0x5BC508);
    MEM32(esp + 0xB0) = esi;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0027BC4Bu); RECOMP_ABI_CALL(0x00274600u, sub_00274600); /* call 0x00274600 */

loc_0027BC4B: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0xB0;
    esp += 4; return; /* ret */

}

/**
 * sub_0027BC60
 * Original: 0x0027BC60 - 0x0027BCB5 (85 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BC60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027BC60: ;
    esp = esp - 0x170;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0027BC70u); RECOMP_ABI_CALL(0x00275BA0u, sub_00275BA0); /* call 0x00275BA0 */

loc_0027BC70: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = MEM32(esp + ecx + 4);
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0027BCA2; /* je: equal / zero */

loc_0027BC8C: ;
    edx = MEM32(eax + 4);
    eax = eax + 4;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027BCA2; /* jne: not equal / not zero */

loc_0027BC9D: ;
    PUSH32(esp, 0x0027BCA2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027BCA2: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0027BCABu); RECOMP_ABI_CALL(0x00274600u, sub_00274600); /* call 0x00274600 */

loc_0027BCAB: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x170;
    esp += 4; return; /* ret */

}

/**
 * sub_0027BCC0
 * Original: 0x0027BCC0 - 0x0027BD3A (122 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BCC0(void)
{

loc_0027BCC0: ;
    esp = esp - 0xB8;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0027BCD0u); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027BCD0: ;
    esi = 0; /* xor self */
    ecx = esp + 0x24;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 4) = 0x403958;
    PUSH32(esp, 0x0027BCF3u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0027BCF3: ;
    ecx = esp + 0x7C;
    MEM32(esp + 0x68) = esi;
    MEM32(esp + 0x6C) = esi;
    MEM32(esp + 4) = 0x404538;
    MEM32(esp + 0x70) = esi;
    MEM32(esp + 0x74) = esi;
    MEM32(esp + 0x78) = esi;
    PUSH32(esp, 0x0027BD18u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0027BD18: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0027BD30u); RECOMP_ABI_CALL(0x00275C70u, sub_00275C70); /* call 0x00275C70 */

loc_0027BD30: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0xB8;
    esp += 4; return; /* ret */

}

/**
 * sub_0027BD40
 * Original: 0x0027BD40 - 0x0027BD46 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BD40(void)
{

loc_0027BD40: ;
    eax = MEM32(0x5BDA64);
    esp += 4; return; /* ret */

}

/**
 * sub_0027BD50
 * Original: 0x0027BD50 - 0x0027BD5C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BD50(void)
{

loc_0027BD50: ;
    PUSH32(esp, 0x275D90);
    PUSH32(esp, 0x0027BD5Au); RECOMP_ABI_CALL(0x00204190u, sub_00204190); /* call 0x00204190 */

loc_0027BD5A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027BD60
 * Original: 0x0027BD60 - 0x0027BD6C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BD60(void)
{

loc_0027BD60: ;
    PUSH32(esp, 0x275DF0);
    PUSH32(esp, 0x0027BD6Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027BD6A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027BD70
 * Original: 0x0027BD70 - 0x0027BDBE (78 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BD70(void)
{

loc_0027BD70: ;
    esp = esp - 0x28;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0027BD7Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027BD7D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x4045E0;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0027BDB7u); RECOMP_ABI_CALL(0x00275E50u, sub_00275E50); /* call 0x00275E50 */

loc_0027BDB7: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_0027BDC0
 * Original: 0x0027BDC0 - 0x0027BE07 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BDC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027BDC0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027BDD0; /* jne: not equal / not zero */

loc_0027BDC9: ;
    MEM8(0x5BDF6C) = 1;

loc_0027BDD0: ;
    PUSH32(esp, 0x4710D8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x255010);
    PUSH32(esp, 0x260460);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x405278);
    PUSH32(esp, 0x251200);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BDA88);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0027BE03u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0027BE03: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0027BE10
 * Original: 0x0027BE10 - 0x0027BE16 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BE10(void)
{

loc_0027BE10: ;
    eax = MEM32(0x5BDA8C);
    esp += 4; return; /* ret */

}

/**
 * sub_0027BE20
 * Original: 0x0027BE20 - 0x0027BE2C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BE20(void)
{

loc_0027BE20: ;
    PUSH32(esp, 0x276080);
    PUSH32(esp, 0x0027BE2Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027BE2A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027BE30
 * Original: 0x0027BE30 - 0x0027BE7A (74 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BE30(void)
{

loc_0027BE30: ;
    esp = esp - 0x50;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0027BE3Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027BE3D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x50) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x404690;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0027BE73u); RECOMP_ABI_CALL(0x0019C0A0u, sub_0019C0A0); /* call 0x0019C0A0 */

loc_0027BE73: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_0027BE80
 * Original: 0x0027BE80 - 0x0027BEC7 (71 bytes, 18 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027BE80: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027BE90; /* jne: not equal / not zero */

loc_0027BE89: ;
    MEM8(0x5BDF6C) = 1;

loc_0027BE90: ;
    PUSH32(esp, 0x4710E0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24AA70);
    PUSH32(esp, 0x2760F0);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x4052E4);
    PUSH32(esp, 0x251560);
    PUSH32(esp, 0x255740);
    PUSH32(esp, 0x276140);
    PUSH32(esp, 0x5BDAC8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0027BEC3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0027BEC3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0027BED0
 * Original: 0x0027BED0 - 0x0027BF46 (118 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BED0(void)
{

loc_0027BED0: ;
    esp = esp - 0x5C;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0027BEDDu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027BEDD: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x404740;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0027BF3Fu); RECOMP_ABI_CALL(0x002761A0u, sub_002761A0); /* call 0x002761A0 */

loc_0027BF3F: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x5C;
    esp += 4; return; /* ret */

}

/**
 * sub_0027BF50
 * Original: 0x0027BF50 - 0x0027BF94 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027BF50: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027BF60; /* jne: not equal / not zero */

loc_0027BF59: ;
    MEM8(0x5BDF6C) = 1;

loc_0027BF60: ;
    PUSH32(esp, 0x4710E8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x276320);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x40530C);
    PUSH32(esp, 0x2515C0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BDADC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0027BF90u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0027BF90: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0027BFA0
 * Original: 0x0027BFA0 - 0x0027BFE4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BFA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027BFA0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027BFB0; /* jne: not equal / not zero */

loc_0027BFA9: ;
    MEM8(0x5BDF6C) = 1;

loc_0027BFB0: ;
    PUSH32(esp, 0x4710F0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x276360);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x405324);
    PUSH32(esp, 0x250330);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BDAE8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0027BFE0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0027BFE0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0027BFF0
 * Original: 0x0027BFF0 - 0x0027C022 (50 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027BFF0(void)
{

loc_0027BFF0: ;
    esp = esp - 0xA0;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0027C000u); RECOMP_ABI_CALL(0x002763A0u, sub_002763A0); /* call 0x002763A0 */

loc_0027C000: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0027C018u); RECOMP_ABI_CALL(0x00276450u, sub_00276450); /* call 0x00276450 */

loc_0027C018: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0xA0;
    esp += 4; return; /* ret */

}

/**
 * sub_0027C030
 * Original: 0x0027C030 - 0x0027C072 (66 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C030(void)
{

loc_0027C030: ;
    esp = esp - 0x44;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0027C03Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027C03D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x404870;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0027C06Bu); RECOMP_ABI_CALL(0x0019C0A0u, sub_0019C0A0); /* call 0x0019C0A0 */

loc_0027C06B: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_0027C080
 * Original: 0x0027C080 - 0x0027C0B2 (50 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C080(void)
{

loc_0027C080: ;
    esp = esp - 0xC8;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0027C090u); RECOMP_ABI_CALL(0x002765C0u, sub_002765C0); /* call 0x002765C0 */

loc_0027C090: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0027C0A8u); RECOMP_ABI_CALL(0x002766A0u, sub_002766A0); /* call 0x002766A0 */

loc_0027C0A8: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0xC8;
    esp += 4; return; /* ret */

}

/**
 * sub_0027C0C0
 * Original: 0x0027C0C0 - 0x0027C0DE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C0C0(void)
{

loc_0027C0C0: ;
    PUSH32(esp, 0x261580);
    PUSH32(esp, 0x0027C0CAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027C0CA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BDB10);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027C0DDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0027C0DD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0027C0E0
 * Original: 0x0027C0E0 - 0x0027C146 (102 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C0E0(void)
{

loc_0027C0E0: ;
    esp = esp - 0xAC;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0027C0F0u); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027C0F0: ;
    eax = 0; /* xor self */
    ecx = esp + 0x30;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 4) = 0x4049A0;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x0027C11Bu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0027C11B: ;
    ecx = esp + 0x70;
    PUSH32(esp, 0x0027C124u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0027C124: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0027C13Cu); RECOMP_ABI_CALL(0x002768E0u, sub_002768E0); /* call 0x002768E0 */

loc_0027C13C: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0xAC;
    esp += 4; return; /* ret */

}

/**
 * sub_0027C150
 * Original: 0x0027C150 - 0x0027C15C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C150(void)
{

loc_0027C150: ;
    PUSH32(esp, 0x276970);
    PUSH32(esp, 0x0027C15Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027C15A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027C160
 * Original: 0x0027C160 - 0x0027C1AA (74 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C160(void)
{

loc_0027C160: ;
    esp = esp - 0x40;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0027C16Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027C16D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x40) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x404A40;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0027C1A3u); RECOMP_ABI_CALL(0x0019C0A0u, sub_0019C0A0); /* call 0x0019C0A0 */

loc_0027C1A3: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_0027C1B0
 * Original: 0x0027C1B0 - 0x0027C1D4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C1B0(void)
{

loc_0027C1B0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0027C1BBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027C1BB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x404AD0;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0027C1E0
 * Original: 0x0027C1E0 - 0x0027C204 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C1E0(void)
{

loc_0027C1E0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0027C1EBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027C1EB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x404B30;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0027C210
 * Original: 0x0027C210 - 0x0027C21C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C210(void)
{

loc_0027C210: ;
    PUSH32(esp, 0x276AD0);
    PUSH32(esp, 0x0027C21Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027C21A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027C220
 * Original: 0x0027C220 - 0x0027C264 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027C220: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027C230; /* jne: not equal / not zero */

loc_0027C229: ;
    MEM8(0x5BDF6C) = 1;

loc_0027C230: ;
    PUSH32(esp, 0x4710F8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x276B20);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x40533C);
    PUSH32(esp, 0x2514A0);
    PUSH32(esp, 0x19C350);
    PUSH32(esp, 0x25F0F0);
    PUSH32(esp, 0x5BDB50);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0027C260u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0027C260: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0027C270
 * Original: 0x0027C270 - 0x0027C2B4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027C270: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027C280; /* jne: not equal / not zero */

loc_0027C279: ;
    MEM8(0x5BDF6C) = 1;

loc_0027C280: ;
    PUSH32(esp, 0x471100);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x276B50);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x405354);
    PUSH32(esp, 0x251470);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BDB54);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0027C2B0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0027C2B0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0027C2C0
 * Original: 0x0027C2C0 - 0x0027C2DE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C2C0(void)
{

loc_0027C2C0: ;
    PUSH32(esp, 0x261930);
    PUSH32(esp, 0x0027C2CAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027C2CA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BDB64);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027C2DDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0027C2DD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0027C2E0
 * Original: 0x0027C2E0 - 0x0027C324 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C2E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027C2E0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027C2F0; /* jne: not equal / not zero */

loc_0027C2E9: ;
    MEM8(0x5BDF6C) = 1;

loc_0027C2F0: ;
    PUSH32(esp, 0x471108);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x276B90);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x40536C);
    PUSH32(esp, 0x251830);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BDB78);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0027C320u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0027C320: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0027C330
 * Original: 0x0027C330 - 0x0027C33C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C330(void)
{

loc_0027C330: ;
    PUSH32(esp, 0x276CC0);
    PUSH32(esp, 0x0027C33Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027C33A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027C340
 * Original: 0x0027C340 - 0x0027C346 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C340(void)
{

loc_0027C340: ;
    eax = MEM32(0x5BDBA8);
    esp += 4; return; /* ret */

}

/**
 * sub_0027C350
 * Original: 0x0027C350 - 0x0027C4EA (410 bytes, 137 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C350(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027C350: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDBAC);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0027C361u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0027C361: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x4711B8);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0027C371u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0027C371: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0027C379u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0027C379: ;
    ebp = eax;
    eax = MEM32(0x5BDB9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027C39D; /* jne: not equal / not zero */

loc_0027C384: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027C38Fu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0027C38F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027C395u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0027C395: ;
    esp = esp + 8;
    MEM32(0x5BDB9C) = eax;

loc_0027C39D: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    SET_LO8(ebx, 1);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x0027C3B0u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0027C3B0: ;
    ebp = eax;
    PUSH32(esp, 0x0027C3B7u); RECOMP_ABI_CALL(0x001F33C0u, sub_001F33C0); /* call 0x001F33C0 */

loc_0027C3B7: ;
    edx = edi + 2;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x0027C3C8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0027C3C8: ;
    ebp = eax;
    eax = MEM32(0x5BDB54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027C3EC; /* jne: not equal / not zero */

loc_0027C3D3: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027C3DEu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0027C3DE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027C3E4u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_0027C3E4: ;
    esp = esp + 8;
    MEM32(0x5BDB54) = eax;

loc_0027C3EC: ;
    ecx = edi + 3;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x0027C3FDu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0027C3FD: ;
    ebp = eax;
    PUSH32(esp, 0x0027C404u); RECOMP_ABI_CALL(0x002459A0u, sub_002459A0); /* call 0x002459A0 */

loc_0027C404: ;
    edx = edi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x3C) = eax;
    MEM8(ebp + 0x35) = LO8(ebx);
    MEM8(ebp + 0x40) = LO8(ebx);
    MEM8(ebp + 0x41) = LO8(ebx);
    PUSH32(esp, 0x0027C41Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0027C41B: ;
    ebp = eax;
    PUSH32(esp, 0x0027C422u); RECOMP_ABI_CALL(0x002459E0u, sub_002459E0); /* call 0x002459E0 */

loc_0027C422: ;
    MEM32(ebp + 0x3C) = eax;
    eax = edi + 7;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x35) = LO8(ebx);
    MEM8(ebp + 0x40) = LO8(ebx);
    MEM8(ebp + 0x41) = LO8(ebx);
    PUSH32(esp, 0x0027C439u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0027C439: ;
    ecx = edi + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(eax + 0x26) = 0;
    PUSH32(esp, 0x0027C448u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0027C448: ;
    ebp = eax;
    PUSH32(esp, 0x0027C44Fu); RECOMP_ABI_CALL(0x002459E0u, sub_002459E0); /* call 0x002459E0 */

loc_0027C44F: ;
    edx = edi + 9;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x3C) = eax;
    MEM8(ebp + 0x35) = LO8(ebx);
    MEM8(ebp + 0x40) = LO8(ebx);
    MEM8(ebp + 0x41) = LO8(ebx);
    PUSH32(esp, 0x0027C466u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0027C466: ;
    ebp = eax;
    PUSH32(esp, 0x0027C46Du); RECOMP_ABI_CALL(0x002459E0u, sub_002459E0); /* call 0x002459E0 */

loc_0027C46D: ;
    MEM32(ebp + 0x3C) = eax;
    eax = edi + 0xA;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x35) = LO8(ebx);
    MEM8(ebp + 0x40) = LO8(ebx);
    MEM8(ebp + 0x41) = LO8(ebx);
    PUSH32(esp, 0x0027C484u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0027C484: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x0027C48Fu); RECOMP_ABI_CALL(0x001E7D60u, sub_001E7D60); /* call 0x001E7D60 */

loc_0027C48F: ;
    ecx = edi + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0027C49Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0027C49A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5F5E100);
    ecx = eax;
    PUSH32(esp, 0x0027C4A8u); RECOMP_ABI_CALL(0x001E7D60u, sub_001E7D60); /* call 0x001E7D60 */

loc_0027C4A8: ;
    edx = edi + 0xD;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0027C4B3u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0027C4B3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFED260);
    ecx = eax;
    PUSH32(esp, 0x0027C4C1u); RECOMP_ABI_CALL(0x001E7D60u, sub_001E7D60); /* call 0x001E7D60 */

loc_0027C4C1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x471180);
    PUSH32(esp, 0x471148);
    PUSH32(esp, 0x471110);
    ecx = esi;
    PUSH32(esp, 0x0027C4D8u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0027C4D8: ;
    PUSH32(esp, 0x276D60);
    PUSH32(esp, 0x0027C4E2u); RECOMP_ABI_CALL(0x00204190u, sub_00204190); /* call 0x00204190 */

loc_0027C4E2: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027C4F0
 * Original: 0x0027C4F0 - 0x0027C537 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C4F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027C4F0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027C500; /* jne: not equal / not zero */

loc_0027C4F9: ;
    MEM8(0x5BDF6C) = 1;

loc_0027C500: ;
    PUSH32(esp, 0x4711F0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24B5B0);
    PUSH32(esp, 0x261CB0);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x405510);
    PUSH32(esp, 0x250D80);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BDBB8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0027C533u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0027C533: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0027C540
 * Original: 0x0027C540 - 0x0027C54C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C540(void)
{

loc_0027C540: ;
    PUSH32(esp, 0x276DD0);
    PUSH32(esp, 0x0027C54Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027C54A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027C550
 * Original: 0x0027C550 - 0x0027C55C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C550(void)
{

loc_0027C550: ;
    PUSH32(esp, 0x276E80);
    PUSH32(esp, 0x0027C55Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027C55A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027C560
 * Original: 0x0027C560 - 0x0027C5A4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027C560: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027C570; /* jne: not equal / not zero */

loc_0027C569: ;
    MEM8(0x5BDF6C) = 1;

loc_0027C570: ;
    PUSH32(esp, 0x471200);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x276ED0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x405524);
    PUSH32(esp, 0x250E10);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BDBD8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0027C5A0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0027C5A0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0027C5B0
 * Original: 0x0027C5B0 - 0x0027C5B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C5B0(void)
{

loc_0027C5B0: ;
    eax = MEM32(0x5BDBE8);
    esp += 4; return; /* ret */

}

/**
 * sub_0027C5C0
 * Original: 0x0027C5C0 - 0x0027C63D (125 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C5C0(void)
{

loc_0027C5C0: ;
    esp = esp - 0x100;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0027C5D0u); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027C5D0: ;
    eax = 0; /* xor self */
    ecx = esp + 0x3C;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 4) = 0x404BE8;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = eax;
    PUSH32(esp, 0x0027C603u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0027C603: ;
    ecx = esp + 0x80;
    PUSH32(esp, 0x0027C60Fu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0027C60F: ;
    ecx = esp + 0xC0;
    PUSH32(esp, 0x0027C61Bu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0027C61B: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0027C633u); RECOMP_ABI_CALL(0x00276F50u, sub_00276F50); /* call 0x00276F50 */

loc_0027C633: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x100;
    esp += 4; return; /* ret */

}

/**
 * sub_0027C640
 * Original: 0x0027C640 - 0x0027C6A2 (98 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C640(void)
{

loc_0027C640: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0027C648u); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0027C648: ;
    eax = 0; /* xor self */
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x64) = eax;
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi) = 0x4055A0;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x78) = eax;
    MEM32(esi + 0x80) = eax;
    MEM32(esi + 0x84) = eax;
    MEM32(esi + 0x88) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0027C6B0
 * Original: 0x0027C6B0 - 0x0027C6B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C6B0(void)
{

loc_0027C6B0: ;
    eax = MEM32(0x5BDBF0);
    esp += 4; return; /* ret */

}

/**
 * sub_0027C6C0
 * Original: 0x0027C6C0 - 0x0027C760 (160 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C6C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027C6C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x88);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027C6E2; /* je: equal / zero */

loc_0027C6CD: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027C6E2; /* jne: not equal / not zero */

loc_0027C6DD: ;
    PUSH32(esp, 0x0027C6E2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027C6E2: ;
    ecx = MEM32(esi + 0x84);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027C701; /* je: equal / zero */

loc_0027C6EC: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027C701; /* jne: not equal / not zero */

loc_0027C6FC: ;
    PUSH32(esp, 0x0027C701u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027C701: ;
    ecx = MEM32(esi + 0x80);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027C720; /* je: equal / zero */

loc_0027C70B: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027C720; /* jne: not equal / not zero */

loc_0027C71B: ;
    PUSH32(esp, 0x0027C720u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027C720: ;
    ecx = MEM32(esi + 0x78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027C73C; /* je: equal / zero */

loc_0027C727: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027C73C; /* jne: not equal / not zero */

loc_0027C737: ;
    PUSH32(esp, 0x0027C73Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027C73C: ;
    ecx = MEM32(esi + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027C758; /* je: equal / zero */

loc_0027C743: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027C758; /* jne: not equal / not zero */

loc_0027C753: ;
    PUSH32(esp, 0x0027C758u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027C758: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00277000(); return; /* tail jmp 0x00277000 */

}

/**
 * sub_0027C760
 * Original: 0x0027C760 - 0x0027C838 (216 bytes, 86 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C760(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027C760: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x30);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = MEM32(ecx + esi * 4);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027C7A7; /* jne: not equal / not zero */

loc_0027C778: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027C782u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027C782: ;
    eax = MEM32(ebx + 0x34);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027C79E; /* je: equal / zero */

loc_0027C78C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0027C79E; /* jl: less (signed <) */

loc_0027C790: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0027C79E; /* jge: greater or equal (signed >=) */

loc_0027C794: ;
    eax = MEM32(eax + 0x10);
    MEM32(eax + esi * 4) = 0;

loc_0027C79E: ;
    POP32(esp, esi);
    MEM8(ebx + 0x50) = 0;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0027C7A7: ;
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    edx = MEM32(edi + 0x30);
    esi = 0; /* xor self */

loc_0027C7B5: ;
    ebp = MEM32(eax);
    _fa = (uint32_t)(MEM32(ebp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x30), edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0027C7D3; /* jg: greater (signed >) */

loc_0027C7BC: ;
    ebp = MEM32(ecx + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C7B5; /* jne: not equal / not zero */

loc_0027C7C7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027C7CDu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027C7CD: ;
    ebp = MEM32(esp + 0x18);
    goto loc_0027C813;

loc_0027C7D3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027C7E4; /* jne: not equal / not zero */

loc_0027C7D8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027C7DEu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027C7DE: ;
    ebp = MEM32(esp + 0x18);
    goto loc_0027C813;

loc_0027C7E4: ;
    MEM32(esp + 0x14) = edi;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027C7F8u); RECOMP_ABI_CALL(0x00200E60u, sub_00200E60); /* call 0x00200E60 */

loc_0027C7F8: ;
    eax = MEM32(ebx + 0x34);
    ecx = MEM32(eax + 0x10);
    ebp = MEM32(esp + 0x18);
    eax = MEM32(ecx + ebp * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0027C813; /* jg: greater (signed >) */

loc_0027C809: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0027C813u); RECOMP_ABI_CALL(0x0025E8C0u, sub_0025E8C0); /* call 0x0025E8C0 */

loc_0027C813: ;
    edx = MEM32(edi + 0xC);
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027C831; /* jne: not equal / not zero */

loc_0027C81D: ;
    eax = MEM32(ebx + 0x34);
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + ebp * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + ebp * 4) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0027C831; /* jle: less or equal (signed <=) */

loc_0027C828: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0027C831u); RECOMP_ABI_CALL(0x0025E8C0u, sub_0025E8C0); /* call 0x0025E8C0 */

loc_0027C831: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027C840
 * Original: 0x0027C840 - 0x0027C917 (215 bytes, 83 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C840(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027C840: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0027C912; /* je: equal / zero */

loc_0027C853: ;
    _fa = (uint32_t)(MEM8(edi + 0x3C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x3C), 1 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0027C8CA; /* jne: not equal / not zero */

loc_0027C85A: ;
    esi = MEM32(edi + 0x40);
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027C871; /* jl: less (signed <) */

loc_0027C865: ;
    PUSH32(esp, 0x2A0630);
    ecx = esi;
    PUSH32(esp, 0x0027C871u); RECOMP_ABI_CALL(0x0025CB20u, sub_0025CB20); /* call 0x0025CB20 */

loc_0027C871: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x10);
    ecx = eax + 1;
    MEM32(esi + 0x14) = ecx;
    esi = MEM32(edx + eax * 4);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027C88B; /* je: equal / zero */

loc_0027C888: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027C88B: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027C8A7; /* je: equal / zero */

loc_0027C892: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027C8A7; /* jne: not equal / not zero */

loc_0027C8A2: ;
    PUSH32(esp, 0x0027C8A7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027C8A7: ;
    MEM32(esi + 0x10) = ebp;
    SET_LO8(ecx, MEM8(ebx + 0x14));
    eax = MEM32(esi);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    SET_LO8(ecx, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0027C8BAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027C8BA: ;
    ecx = MEM32(edi + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027C8C3u); RECOMP_ABI_CALL(0x0025E1D0u, sub_0025E1D0); /* call 0x0025E1D0 */

loc_0027C8C3: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0027C8CA: ;
    ecx = MEM32(edi + 0x24);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0027C8DBu); RECOMP_ABI_CALL(0x001F1920u, sub_001F1920); /* call 0x001F1920 */

loc_0027C8DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027C911; /* je: equal / zero */

loc_0027C8E0: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 8);
    edx = MEM32(edi + 0x44);
    esi = MEM32(edi + 0x28);
    ecx = MEM32(edx + ecx * 4);
    esi = MEM32(esi + 0x10);
    edx = MEM32(esi + eax * 4);
    SET_LO8(eax, MEM8(esp + 0x14));
    ecx = ecx + edx;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0027C90C; /* je: equal / zero */

loc_0027C901: ;
    PUSH32(esp, 0x0027C906u); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0027C906: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0027C90C: ;
    PUSH32(esp, 0x0027C911u); RECOMP_ABI_CALL(0x0027AC80u, sub_0027AC80); /* call 0x0027AC80 */

loc_0027C911: ;
    POP32(esp, esi);

loc_0027C912: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027C920
 * Original: 0x0027C920 - 0x0027C96C (76 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027C920: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 8);
    edx = MEM32(edi + 0x44);
    eax = MEM32(edi + 0x10);
    ebx = MEM32(edx + ecx * 4);
    ecx = MEM32(eax + 0x10);
    esi = MEM32(ecx + ebx * 4);
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027C956; /* je: equal / zero */

loc_0027C942: ;
    edx = MEM32(edi + 0x30);
    ecx = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x10);
    ecx = MEM32(edx + ecx * 4 + -4);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0027C953u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027C953: ;
    esp = esp + 8;

loc_0027C956: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, ebx);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 8) = edx;
    PUSH32(esp, 0x0027C966u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0027C966: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027C970
 * Original: 0x0027C970 - 0x0027C994 (36 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C970(void)
{

loc_0027C970: ;
    eax = MEM32(esp + 4);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x44);
    ebx = MEM32(esi + edx * 4);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edi = edi + ebx;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027C98Eu); RECOMP_ABI_CALL(0x00274380u, sub_00274380); /* call 0x00274380 */

loc_0027C98E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027C9A0
 * Original: 0x0027C9A0 - 0x0027C9C4 (36 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C9A0(void)
{

loc_0027C9A0: ;
    eax = MEM32(esp + 4);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x44);
    ebx = MEM32(esi + edx * 4);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edi = edi + ebx;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027C9BEu); RECOMP_ABI_CALL(0x002743E0u, sub_002743E0); /* call 0x002743E0 */

loc_0027C9BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027C9D0
 * Original: 0x0027C9D0 - 0x0027CBDA (522 bytes, 188 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027C9D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027C9D0: ;
    esp = esp - 0x8C;
    PUSH32(esp, ebx);
    ebx = MEM32(0x5BDC9C);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BDA90);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0x0027C9F7u); RECOMP_ABI_CALL(0x001EA500u, sub_001EA500); /* call 0x001EA500 */

loc_0027C9F7: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0027CA8B; /* jle: less or equal (signed <=) */

loc_0027CA05: ;
    goto loc_0027CA10;

loc_0027CA07: ;
    esi = MEM32(esp + 0x18);
    goto loc_0027CA10;

    /* nop */

loc_0027CA10: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0027CA18u); RECOMP_ABI_CALL(0x001F7A50u, sub_001F7A50); /* call 0x001F7A50 */

loc_0027CA18: ;
    ecx = MEM32(ebx + 0x10);
    edi = eax;
    eax = MEM32(edi + 8);
    edx = MEM32(ecx + eax * 4);
    eax = MEM32(0x5BD9C8);
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + ebp * 4 + 0x20) = edx;
    PUSH32(esp, 0x0027CA34u); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_0027CA34: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027CA7E; /* je: equal / zero */

loc_0027CA38: ;
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0027CA45; /* jge: greater or equal (signed >=) */

loc_0027CA3F: ;
    esi = MEM32(ebx + 8);
    MEM32(edi + 8) = esi;

loc_0027CA45: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027CA65; /* jl: less (signed <) */

loc_0027CA4A: ;
    eax = esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0027CA65; /* jl: less (signed <) */

loc_0027CA51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0027CA5B; /* jg: greater (signed >) */

loc_0027CA56: ;
    MEM32(ebx + 8) = eax;
    goto loc_0027CA65;

loc_0027CA5B: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0027CA65u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0027CA65: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027CA7E; /* je: equal / zero */

loc_0027CA6C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0027CA7E; /* jl: less (signed <) */

loc_0027CA70: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0027CA7E; /* jge: greater or equal (signed >=) */

loc_0027CA74: ;
    ecx = MEM32(ebx + 0x10);
    MEM32(ecx + esi * 4) = 0x278200;

loc_0027CA7E: ;
    eax = MEM32(esp + 0x10);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027CA07; /* jl: less (signed <) */

loc_0027CA87: ;
    edi = MEM32(esp + 0x14);

loc_0027CA8B: ;
    esi = MEM32(edi + 0x28);
    ebp = MEM32(esi + 8);
    MEM32(0x5BDC64) = edi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0027CAC4; /* jle: less or equal (signed <=) */

loc_0027CA9D: ;
    /* nop */

loc_0027CAA0: ;
    edx = MEM32(esi + 0x10);
    ecx = MEM32(edx + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027CABF; /* je: equal / zero */

loc_0027CAAA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027CABF; /* jne: not equal / not zero */

loc_0027CABA: ;
    PUSH32(esp, 0x0027CABFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027CABF: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027CAA0; /* jl: less (signed <) */

loc_0027CAC4: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0027CADF; /* jle: less or equal (signed <=) */

loc_0027CACD: ;
    /* nop */

loc_0027CAD0: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + eax * 4) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027CAD0; /* jl: less (signed <) */

loc_0027CADF: ;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 8) = 0;
    esi = MEM32(eax + 0x2C);
    ebp = MEM32(esi + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0027CB1A; /* jle: less or equal (signed <=) */

loc_0027CAF6: ;
    ecx = MEM32(esi + 0x10);
    ecx = MEM32(ecx + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027CB15; /* je: equal / zero */

loc_0027CB00: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027CB15; /* jne: not equal / not zero */

loc_0027CB10: ;
    PUSH32(esp, 0x0027CB15u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027CB15: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027CAF6; /* jl: less (signed <) */

loc_0027CB1A: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0027CB32; /* jle: less or equal (signed <=) */

loc_0027CB23: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + eax * 4) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027CB23; /* jl: less (signed <) */

loc_0027CB32: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esi + 8) = 0;
    PUSH32(esp, 0x0027CB4Bu); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0027CB4B: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 8;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0027CBCD; /* jle: less or equal (signed <=) */

loc_0027CB58: ;
    goto loc_0027CB60;

    /* nop */

loc_0027CB60: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0027CB6Au); RECOMP_ABI_CALL(0x001F7A50u, sub_001F7A50); /* call 0x001F7A50 */

loc_0027CB6A: ;
    edx = MEM32(0x5BD9C8);
    edi = eax;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0027CB7Au); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_0027CB7A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027CBC4; /* je: equal / zero */

loc_0027CB7E: ;
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0027CB8B; /* jge: greater or equal (signed >=) */

loc_0027CB85: ;
    esi = MEM32(ebx + 8);
    MEM32(edi + 8) = esi;

loc_0027CB8B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027CBAB; /* jl: less (signed <) */

loc_0027CB90: ;
    eax = esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0027CBAB; /* jl: less (signed <) */

loc_0027CB97: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0027CBA1; /* jg: greater (signed >) */

loc_0027CB9C: ;
    MEM32(ebx + 8) = eax;
    goto loc_0027CBAB;

loc_0027CBA1: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0027CBABu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0027CBAB: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027CBC4; /* je: equal / zero */

loc_0027CBB2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0027CBC4; /* jl: less (signed <) */

loc_0027CBB6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0027CBC4; /* jge: greater or equal (signed >=) */

loc_0027CBBA: ;
    ecx = MEM32(ebx + 0x10);
    eax = MEM32(esp + ebp * 4 + 0x1C);
    MEM32(ecx + esi * 4) = eax;

loc_0027CBC4: ;
    eax = MEM32(esp + 0x10);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027CB60; /* jl: less (signed <) */

loc_0027CBCD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x8C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027CBE0
 * Original: 0x0027CBE0 - 0x0027CCAE (206 bytes, 75 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027CBE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027CBE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0027CC37; /* je: equal / zero */

loc_0027CBEB: ;
    edi = MEM32(esi + 0x34);
    PUSH32(esp, 0x0027CBF3u); RECOMP_ABI_CALL(0x002975C0u, sub_002975C0); /* call 0x002975C0 */

loc_0027CBF3: ;
    eax = MEM32(eax + 8);
    ecx = MEM32(edi + 0x44);
    edx = MEM32(ecx + eax * 4);
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + edx * 4);
    ecx = MEM32(edx + 0x14);
    edx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x0027CC11u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027CC11: ;
    edi = MEM32(esi + 0x34);
    PUSH32(esp, 0x0027CC19u); RECOMP_ABI_CALL(0x00296160u, sub_00296160); /* call 0x00296160 */

loc_0027CC19: ;
    eax = MEM32(eax + 8);
    ecx = MEM32(edi + 0x44);
    edx = MEM32(ecx + eax * 4);
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + edx * 4);
    ecx = MEM32(edx + 0x14);
    edx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x0027CC37u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027CC37: ;
    edi = MEM32(esi + 0x48);
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027CC4E; /* jl: less (signed <) */

loc_0027CC42: ;
    PUSH32(esp, 0x29FFE0);
    ecx = edi;
    PUSH32(esp, 0x0027CC4Eu); RECOMP_ABI_CALL(0x0025CB20u, sub_0025CB20); /* call 0x0025CB20 */

loc_0027CC4E: ;
    eax = MEM32(edi + 0x14);
    edx = MEM32(edi + 0x10);
    ecx = eax + 1;
    MEM32(edi + 0x14) = ecx;
    edi = MEM32(edx + eax * 4);
    eax = MEM32(edi);
    ecx = esi + 0x64;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0027CC68u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027CC68: ;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027CC71u); RECOMP_ABI_CALL(0x0027AC20u, sub_0027AC20); /* call 0x0027AC20 */

loc_0027CC71: ;
    SET_LO8(eax, MEM8(esi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027CC87; /* je: equal / zero */

loc_0027CC78: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0027CC87u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027CC87: ;
    edx = MEM32(esi);
    edi = MEM32(esi + 0x150);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0027CC94u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027CC94: ;
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 0x14) = edx;
    eax = MEM32(esi + 0x150);
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027CCA9u); RECOMP_ABI_CALL(0x0027AC20u, sub_0027AC20); /* call 0x0027AC20 */

loc_0027CCA9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027CCB0
 * Original: 0x0027CCB0 - 0x0027CD2E (126 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027CCB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027CCB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = MEM32(edi + 0x20);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027CCCB; /* je: equal / zero */

loc_0027CCC6: ;
    ebp = MEM32(eax + 8);
    goto loc_0027CCCD;

loc_0027CCCB: ;
    ebp = 0; /* xor self */

loc_0027CCCD: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0027CD1D; /* jle: less or equal (signed <=) */

loc_0027CCD3: ;
    ebx = MEM32(esp + 0x14);
    goto loc_0027CCE0;

    /* nop */

loc_0027CCE0: ;
    ecx = esi;
    ecx = ecx & 0x1F;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = MEM32(esp + 0x18);
    ecx = MEM32(ecx + 0x10);
    eax = esi;
    eax = eax >> 5;
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + eax * 4), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027CD18; /* je: equal / zero */

loc_0027CCFD: ;
    edx = MEM32(edi + 0x1C);
    eax = MEM32(edx + 0x10);
    eax = MEM32(eax + esi * 4);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0027CD0Eu); RECOMP_ABI_CALL(0x0027A460u, sub_0027A460); /* call 0x0027A460 */

loc_0027CD0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027CD1D; /* je: equal / zero */

loc_0027CD13: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027CD24; /* je: equal / zero */

loc_0027CD18: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027CCE0; /* jl: less (signed <) */

loc_0027CD1D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0027CD24: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 2;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027CD30
 * Original: 0x0027CD30 - 0x0027CF53 (547 bytes, 203 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0027CD30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027CD30: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0027CD45u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027CD45: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edi + 0x94); PUSH32(esp, 0x0027CD4Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027CD4F: ;
    eax = MEM32(ebp + 0x60);
    ecx = MEM32(esi + 0x34);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0027CEAB; /* je: equal / zero */

loc_0027CD63: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_0027CDE6; /* jle: less or equal (signed <=) */

loc_0027CD69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0027CDE6; /* jg: greater (signed >) */

loc_0027CD6E: ;
    edx = MEM32(0x5BE50C);
    ebx = eax + -9;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027CD7Eu); RECOMP_ABI_CALL(0x00274440u, sub_00274440); /* call 0x00274440 */

loc_0027CD7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027CD85; /* je: equal / zero */

loc_0027CD82: ;
    edi = eax + 0xC;

loc_0027CD85: ;
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, 0x0027CD8Du); RECOMP_ABI_CALL(0x0025E270u, sub_0025E270); /* call 0x0025E270 */

loc_0027CD8D: ;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM16(esi + 0x50) = 0xFFFF;
    MEM8(esi + 0x52) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0027CDA1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027CDA1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ecx = ebp + 0x20;
    if (TEST_Z(_fa, _fb)) goto loc_0027CDBC; /* je: equal / zero */

loc_0027CDA8: ;
    edx = MEM32(0x5BE338);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 8);
    ecx = ecx + esi;
    PUSH32(esp, 0x0027CDBAu); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0027CDBA: ;
    goto loc_0027CDC4;

loc_0027CDBC: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0027CDC4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027CDC4: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027CDCEu); RECOMP_ABI_CALL(0x0027AC20u, sub_0027AC20); /* call 0x0027AC20 */

loc_0027CDCE: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x0027CDD6u); RECOMP_ABI_CALL(0x003048A0u, sub_003048A0); /* call 0x003048A0 */

loc_0027CDD6: ;
    edx = MEM32(0x5BE338);
    eax = MEM32(edx + 8);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = eax + esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0027CDE6: ;
    ebx = eax + -1;
    eax = MEM32(0x5BE4F0);
    edx = MEM32(eax + 8);
    eax = MEM32(ecx + 0x44);
    edx = MEM32(eax + edx * 4);
    eax = MEM32(ecx + 0x10);
    ecx = MEM32(eax + 0x10);
    edx = edx + ebx;
    eax = MEM32(ecx + edx * 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027CE10; /* je: equal / zero */

loc_0027CE09: ;
    edx = MEM32(eax + 0x10);
    ecx = MEM32(edx + ecx * 4 + -4);

loc_0027CE10: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027CE1E; /* je: equal / zero */

loc_0027CE14: ;
    eax = MEM32(0x5BE148);
    edi = MEM32(eax + 8);
    edi = edi + ecx;

loc_0027CE1E: ;
    esi = MEM32(esi + 0x50);
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027CE35; /* jl: less (signed <) */

loc_0027CE29: ;
    PUSH32(esp, 0x2955A0);
    ecx = esi;
    PUSH32(esp, 0x0027CE35u); RECOMP_ABI_CALL(0x0025CB20u, sub_0025CB20); /* call 0x0025CB20 */

loc_0027CE35: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x10);
    edx = eax + 1;
    MEM32(esi + 0x14) = edx;
    esi = MEM32(ecx + eax * 4);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0027CE4Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027CE4C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    eax = ebp + 0x20;
    if (TEST_Z(_fa, _fb)) goto loc_0027CE67; /* je: equal / zero */

loc_0027CE53: ;
    ecx = MEM32(0x5BE148);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = ecx + esi;
    PUSH32(esp, 0x0027CE65u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0027CE65: ;
    goto loc_0027CE6F;

loc_0027CE67: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0027CE6Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027CE6F: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027CE79u); RECOMP_ABI_CALL(0x0027AC20u, sub_0027AC20); /* call 0x0027AC20 */

loc_0027CE79: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027CE98; /* je: equal / zero */

loc_0027CE83: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027CE98; /* jne: not equal / not zero */

loc_0027CE93: ;
    PUSH32(esp, 0x0027CE98u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027CE98: ;
    MEM32(ebp + 0x64) = esi;
    ecx = MEM32(0x5BE148);
    eax = MEM32(ecx + 8);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = eax + esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0027CEAB: ;
    edx = MEM32(0x5BE5B8);
    eax = MEM32(edx + 8);
    edx = MEM32(ecx + 0x44);
    ecx = MEM32(ecx + 0x10);
    eax = MEM32(edx + eax * 4);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + eax * 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027CED1; /* je: equal / zero */

loc_0027CECA: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + ecx * 4 + -4);

loc_0027CED1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027CED8; /* je: equal / zero */

loc_0027CED5: ;
    edi = ecx + 0xC;

loc_0027CED8: ;
    esi = MEM32(esi + 0x48);
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027CEEF; /* jl: less (signed <) */

loc_0027CEE3: ;
    PUSH32(esp, 0x29FFE0);
    ecx = esi;
    PUSH32(esp, 0x0027CEEFu); RECOMP_ABI_CALL(0x0025CB20u, sub_0025CB20); /* call 0x0025CB20 */

loc_0027CEEF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x10);
    edx = eax + 1;
    MEM32(esi + 0x14) = edx;
    esi = MEM32(ecx + eax * 4);
    if (TEST_Z(_fa, _fb)) goto loc_0027CF11; /* je: equal / zero */

loc_0027CF02: ;
    PUSH32(esp, edi);
    edx = ebp + 0x20;
    PUSH32(esp, edx);
    ecx = esi + 0xC;
    PUSH32(esp, 0x0027CF0Fu); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0027CF0F: ;
    goto loc_0027CF1C;

loc_0027CF11: ;
    eax = MEM32(esi);
    ecx = ebp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0027CF1Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027CF1C: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027CF26u); RECOMP_ABI_CALL(0x0027AC20u, sub_0027AC20); /* call 0x0027AC20 */

loc_0027CF26: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027CF2D; /* je: equal / zero */

loc_0027CF2A: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027CF2D: ;
    ecx = MEM32(ebp + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027CF49; /* je: equal / zero */

loc_0027CF34: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027CF49; /* jne: not equal / not zero */

loc_0027CF44: ;
    PUSH32(esp, 0x0027CF49u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027CF49: ;
    POP32(esp, edi);
    MEM32(ebp + 0x64) = esi;
    eax = esi + 0xC;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0027CF60
 * Original: 0x0027CF60 - 0x0027CFC2 (98 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027CF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027CF60: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x60);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027CF78u); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0027CF78: ;
    ebx = eax;
    esp = esp + 8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027CFA3; /* je: equal / zero */

loc_0027CF83: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0027CF98; /* jle: less or equal (signed <=) */

loc_0027CF88: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0027CF98; /* jg: greater (signed >) */

loc_0027CF8D: ;
    ecx = MEM32(0x5BE50C);
    eax = esi + -9;
    goto loc_0027CFA9;

loc_0027CF98: ;
    ecx = MEM32(0x5BE4F0);
    eax = esi + -1;
    goto loc_0027CFA9;

loc_0027CFA3: ;
    ecx = MEM32(0x5BE5B8);

loc_0027CFA9: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0027CFB2u); RECOMP_ABI_CALL(0x0027ACD0u, sub_0027ACD0); /* call 0x0027ACD0 */

loc_0027CFB2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 2;
    esp += 4; return; /* ret */

}

/**
 * sub_0027CFD0
 * Original: 0x0027CFD0 - 0x0027D004 (52 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027CFD0(void)
{

loc_0027CFD0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027CFE2u); RECOMP_ABI_CALL(0x0027CD30u, sub_0027CD30); /* call 0x0027CD30 */

loc_0027CFE2: ;
    edi = eax;
    eax = MEM32(0x5BD438);
    ecx = MEM32(eax + 8);
    ecx = ecx + esi;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027CFF5u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0027CFF5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027CFFDu); RECOMP_ABI_CALL(0x0027CF60u, sub_0027CF60); /* call 0x0027CF60 */

loc_0027CFFD: ;
    esp = esp + 0x1C;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027D010
 * Original: 0x0027D010 - 0x0027D19D (397 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D010(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027D010: ;
    esp = esp - 0x10;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + 0x20);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x34);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(ecx + 8);
    ecx = esi + ecx * 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_0027D0B1; /* jae: above or equal (unsigned >=) */

loc_0027D03A: ;
    /* nop */

loc_0027D040: ;
    eax = MEM32(esi);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ecx = MEM32(ebx + 0x44);
    edi = MEM32(ecx + edx * 4);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(ebx + 0x10);
    ecx = MEM32(edx + 0x10);
    ebp = ebp + edi;
    edi = MEM32(ecx + ebp * 4);
    ecx = MEM32(edi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0027D06C; /* jge: greater or equal (signed >=) */

loc_0027D066: ;
    edx = MEM32(edi + 8);
    MEM32(edi + 0x18) = edx;

loc_0027D06C: ;
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0xC) (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_0027D080; /* jge: greater or equal (signed >=) */

loc_0027D078: ;
    edx = ecx + 1;
    MEM32(edi + 8) = edx;
    goto loc_0027D093;

loc_0027D080: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0027D08Bu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0027D08B: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);

loc_0027D093: ;
    edx = MEM32(edi + 0x10);
    PUSH32(esp, ebp);
    MEM32(edx + ecx * 4) = eax;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0027D0A2u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0027D0A2: ;
    eax = MEM32(esp + 0x10);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027D040; /* jb: below (unsigned <) */

loc_0027D0AD: ;
    eax = MEM32(esp + 0x24);

loc_0027D0B1: ;
    ecx = MEM32(esp + 0x28);
    SET_LO8(edx, MEM8(ecx + 0x24));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027D0F4; /* je: equal / zero */

loc_0027D0BC: ;
    edx = MEM32(eax + 0x40);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(edx + 8) = 0;
    PUSH32(esp, 0x0027D0D1u); RECOMP_ABI_CALL(0x00263110u, sub_00263110); /* call 0x00263110 */

loc_0027D0D1: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(ecx + 0x40);
    edx = MEM32(eax + 0x10);
    ecx = MEM32(ecx + 0x44);
    eax = MEM32(eax + 8);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027D0F0u); RECOMP_ABI_CALL(0x00200CC0u, sub_00200CC0); /* call 0x00200CC0 */

loc_0027D0F0: ;
    eax = MEM32(esp + 0x24);

loc_0027D0F4: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027D0FFu); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0027D0FF: ;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0027D185; /* je: equal / zero */

loc_0027D10A: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 0x10);
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0027D185; /* jb: below (unsigned <) */

loc_0027D11C: ;
    /* nop */

loc_0027D120: ;
    eax = MEM32(esi);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(ebx + 0x44);
    edi = MEM32(edx + ecx * 4);
    ebp = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ecx + 0x10);
    ebp = ebp + edi;
    edi = MEM32(edx + ebp * 4);
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 0x10);
    edx = MEM32(edx + ecx * 4 + -4);
    ecx = MEM32(edi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027D15A; /* je: equal / zero */

loc_0027D14C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D15A; /* jne: not equal / not zero */

loc_0027D150: ;
    eax = MEM32(ebx + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0027D157u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027D157: ;
    esp = esp + 8;

loc_0027D15A: ;
    edx = MEM32(edi + 8);
    ecx = MEM32(edi + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(edi + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0027D171; /* jne: not equal / not zero */

loc_0027D16A: ;
    MEM32(edi + 0x18) = 0xFFFFFFFFu;

loc_0027D171: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0027D17Au); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0027D17A: ;
    eax = MEM32(esp + 0x10);
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027D120; /* jae: above or equal (unsigned >=) */

loc_0027D185: ;
    esi = MEM32(esp + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 2;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0027D1A0
 * Original: 0x0027D1A0 - 0x0027D1BF (31 bytes, 15 insns)
 * Category: crt
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D1A0(void)
{

loc_0027D1A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027D1B1u); RECOMP_ABI_CALL(0x0027CD30u, sub_0027CD30); /* call 0x0027CD30 */

loc_0027D1B1: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027D1B9u); RECOMP_ABI_CALL(0x0027CF60u, sub_0027CF60); /* call 0x0027CF60 */

loc_0027D1B9: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0027D1C0
 * Original: 0x0027D1C0 - 0x0027D2CF (271 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027D1C0: ;
    esp = esp - 0x58;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x64);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x64);
    eax = MEM32(esi + 0x34);
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027D1DBu); RECOMP_ABI_CALL(0x00279D00u, sub_00279D00); /* call 0x00279D00 */

loc_0027D1DB: ;
    ecx = MEM32(0x5BE5B8);
    edx = MEM32(ecx + 8);
    eax = MEM32(esi + 0x34);
    ecx = MEM32(eax + 0x44);
    edx = MEM32(ecx + edx * 4);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + edx * 4);
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0027D205; /* jl: less (signed <) */

loc_0027D1FD: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + ecx * 4);
    goto loc_0027D218;

loc_0027D205: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027D215; /* je: equal / zero */

loc_0027D20C: ;
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + ecx * 4 + -4);
    goto loc_0027D218;

loc_0027D215: ;
    eax = MEM32(eax + 0x14);

loc_0027D218: ;
    esi = esi + 0xA4;
    PUSH32(esp, esi);
    eax = eax + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x0027D22Cu); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0027D22C: ;
    eax = MEM32(ebx + 0x1C);
    ecx = MEM32(eax + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0027D2C6; /* jle: less or equal (signed <=) */

loc_0027D23C: ;
    /* nop */

loc_0027D240: ;
    ecx = MEM32(eax + 0x10);
    esi = MEM32(ecx + edi * 4);
    eax = MEM32(0x5BE27C);
    ecx = MEM32(eax + 8);
    edx = esp + 0x24;
    ecx = ecx + esi;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0027D25Fu); RECOMP_ABI_CALL(0x0023FCF0u, sub_0023FCF0); /* call 0x0023FCF0 */

loc_0027D25F: ;
    edx = MEM32(esp + 0xC);
    MEM32(esi + 0x74) = edx;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x78) = eax;
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0x7C) = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027D280; /* je: equal / zero */

loc_0027D27B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D2B7; /* jne: not equal / not zero */

loc_0027D280: ;
    eax = MEM32(0x5BE4C8);
    ecx = MEM32(eax + 8);
    edx = esp + 0x24;
    ecx = ecx + esi;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0027D299u); RECOMP_ABI_CALL(0x0023FC90u, sub_0023FC90); /* call 0x0023FC90 */

loc_0027D299: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    MEM32(esi + 0x80) = edx;
    MEM32(esi + 0x84) = eax;
    MEM32(esi + 0x88) = ecx;

loc_0027D2B7: ;
    eax = MEM32(ebx + 0x1C);
    ecx = MEM32(eax + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027D240; /* jl: less (signed <) */

loc_0027D2C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x58;
    esp += 4; return; /* ret */

}

/**
 * sub_0027D2D0
 * Original: 0x0027D2D0 - 0x0027D33E (110 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D2D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027D2D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = MEM32(edi + 0x20);
    ebx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0027D309; /* jle: less or equal (signed <=) */

loc_0027D2E8: ;
    goto loc_0027D2F0;

    /* nop */

loc_0027D2F0: ;
    ecx = MEM32(edi + 0x20);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + esi * 4);
    ecx = MEM32(ebp + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027D304u); RECOMP_ABI_CALL(0x00278050u, sub_00278050); /* call 0x00278050 */

loc_0027D304: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027D2F0; /* jl: less (signed <) */

loc_0027D309: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0027D310u); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0027D310: ;
    esi = ebx + -1;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0027D337; /* jl: less (signed <) */

loc_0027D31A: ;
    /* nop */

loc_0027D320: ;
    ecx = MEM32(edi + 0x20);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + esi * 4);
    ecx = MEM32(ebp + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027D334u); RECOMP_ABI_CALL(0x0027C840u, sub_0027C840); /* call 0x0027C840 */

loc_0027D334: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0027D320; /* jns: not sign (positive) */

loc_0027D337: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027D340
 * Original: 0x0027D340 - 0x0027D405 (197 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D340(void)
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

loc_0027D340: ;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    ecx = MEM32(esi + 0x38);
    eax = MEM32(esi + 0x34);
    edx = MEM32(esi + 0x3C);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(0x5BE5B8);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = edx;
    edx = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 0x44);
    edx = MEM32(ecx + edx * 4);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + edx * 4);
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0027D38C; /* jl: less (signed <) */

loc_0027D384: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + ecx * 4);
    goto loc_0027D39F;

loc_0027D38C: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027D39C; /* je: equal / zero */

loc_0027D393: ;
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + ecx * 4 + -4);
    goto loc_0027D39F;

loc_0027D39C: ;
    eax = MEM32(eax + 0x14);

loc_0027D39F: ;
    eax = eax + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0027D3B1u); RECOMP_ABI_CALL(0x0023FCF0u, sub_0023FCF0); /* call 0x0023FCF0 */

loc_0027D3B1: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0x10); /* fmul dword ptr [esp + 0x10] */
    ecx = esi;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 0xC); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fp_top() * MEMF(esp + 8); /* fmul dword ptr [esp + 8] */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027D3DDu); RECOMP_ABI_CALL(0x0026A5E0u, sub_0026A5E0); /* call 0x0026A5E0 */

loc_0027D3DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027D3FD; /* je: equal / zero */

loc_0027D3E1: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0027D3E9u); RECOMP_ABI_CALL(0x0027A460u, sub_0027A460); /* call 0x0027A460 */

loc_0027D3E9: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 2;
    eax = ecx;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_0027D3FD: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0027D410
 * Original: 0x0027D410 - 0x0027D4E6 (214 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027D410: ;
    ecx = MEM32(0x5BE5B8);
    edx = MEM32(ecx + 8);
    esp = esp - 0x40;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x4C);
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 0x44);
    edx = MEM32(ecx + edx * 4);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + edx * 4);
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0027D443; /* jl: less (signed <) */

loc_0027D43B: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + ecx * 4);
    goto loc_0027D456;

loc_0027D443: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027D453; /* je: equal / zero */

loc_0027D44A: ;
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + ecx * 4 + -4);
    goto loc_0027D456;

loc_0027D453: ;
    eax = MEM32(eax + 0x14);

loc_0027D456: ;
    ecx = edi + 0xA4;
    PUSH32(esp, ecx);
    eax = eax + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x0027D46Au); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0027D46A: ;
    esi = MEM32(esp + 0x50);
    edx = MEM32(esi);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x0027D47Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027D47D: ;
    ecx = MEM32(0x5BE5B8);
    edx = MEM32(ecx + 8);
    eax = MEM32(edi + 0x34);
    ecx = MEM32(eax + 0x44);
    edx = MEM32(ecx + edx * 4);
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + edx * 4);
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0027D4A7; /* jl: less (signed <) */

loc_0027D49F: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + ecx * 4);
    goto loc_0027D4BA;

loc_0027D4A7: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027D4B7; /* je: equal / zero */

loc_0027D4AE: ;
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax + ecx * 4 + -4);
    goto loc_0027D4BA;

loc_0027D4B7: ;
    eax = MEM32(eax + 0x14);

loc_0027D4BA: ;
    edx = MEM32(esi);
    eax = eax + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x0027D4C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027D4C8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027D4CFu); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0027D4CF: ;
    esp = esp + 8;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 2;
    eax = ecx;
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_0027D4F0
 * Original: 0x0027D4F0 - 0x0027D5A3 (179 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D4F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027D4F0: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x54);
    esi = MEM32(edi + 0x48);
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    ebp = MEM32(edi + 0x34);
    if (CMP_L(_fas, _fbs)) goto loc_0027D515; /* jl: less (signed <) */

loc_0027D509: ;
    PUSH32(esp, 0x29FFE0);
    ecx = esi;
    PUSH32(esp, 0x0027D515u); RECOMP_ABI_CALL(0x0025CB20u, sub_0025CB20); /* call 0x0025CB20 */

loc_0027D515: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x10);
    ebx = MEM32(esp + 0x58);
    ecx = eax + 1;
    MEM32(esi + 0x14) = ecx;
    esi = MEM32(edx + eax * 4);
    ecx = MEM32(edi + 0xF8);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    eax = MEM32(ebx + 0x20);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0027D547; /* jle: less or equal (signed <=) */

loc_0027D538: ;
    ecx = MEM32(ecx + 0x10);
    ecx = MEM32(ecx + edx * 4 + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027D547; /* je: equal / zero */

loc_0027D543: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0027D551; /* jge: greater or equal (signed >=) */

loc_0027D547: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

loc_0027D551: ;
    eax = eax << 6;
    PUSH32(esp, ecx);
    eax = eax + ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0027D561u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0027D561: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0027D56Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027D56D: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x0027D575u); RECOMP_ABI_CALL(0x0027AC20u, sub_0027AC20); /* call 0x0027AC20 */

loc_0027D575: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027D57Cu); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0027D57C: ;
    ecx = MEM32(0x5BE5B8);
    esp = esp + 8;
    PUSH32(esp, ecx);
    ecx = ebp;
    esi = eax;
    PUSH32(esp, 0x0027D58Fu); RECOMP_ABI_CALL(0x0027C920u, sub_0027C920); /* call 0x0027C920 */

loc_0027D58F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 2;
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_0027D5B0
 * Original: 0x0027D5B0 - 0x0027D63E (142 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D5B0(void)
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

loc_0027D5B0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0027D5C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027D5C1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3B9ACA00);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027D5CFu); RECOMP_ABI_CALL(0x00343BF0u, sub_00343BF0); /* call 0x00343BF0 */

loc_0027D5CF: ;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(esp + 0x10) = ebx;
    fp_push((double)SMEM64(esp + 0xC)); /* fild */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = edx;
    esp = esp - 8;
    fp_top() = fp_top() * MEMD(0x3DA5F8); /* fmul qword ptr [0x3da5f8] */
    fp_push((double)SMEM64(esp + 0x1C)); /* fild */
    fp_st1() = fp_st1() + fp_top(); fp_pop(); /* faddp st(1) */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0027D5FEu); RECOMP_ABI_CALL(0x00279D80u, sub_00279D80); /* call 0x00279D80 */

loc_0027D5FE: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027D635; /* je: equal / zero */

loc_0027D604: ;
    eax = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x0027D613u); RECOMP_ABI_CALL(0x0027A460u, sub_0027A460); /* call 0x0027A460 */

loc_0027D613: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = eax;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027D62C; /* jne: not equal / not zero */

loc_0027D625: ;
    ecx = esi;
    PUSH32(esp, 0x0027D62Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027D62C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0027D635: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0027D640
 * Original: 0x0027D640 - 0x0027D6B2 (114 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D640(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027D640: ;
    eax = MEM32(0x5BE5B8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = MEM32(edi + 0x34);
    ecx = MEM32(eax + 8);
    edx = MEM32(ebx + 0x44);
    eax = MEM32(ebx + 0x10);
    ebp = MEM32(edx + ecx * 4);
    ecx = MEM32(eax + 0x10);
    esi = MEM32(ecx + ebp * 4);
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027D67B; /* je: equal / zero */

loc_0027D667: ;
    edx = MEM32(ebx + 0x30);
    ecx = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x10);
    ecx = MEM32(edx + ecx * 4 + -4);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0027D678u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027D678: ;
    esp = esp + 8;

loc_0027D67B: ;
    ecx = MEM32(esi + 8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    MEM32(esi + 8) = ecx;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0027D68Bu); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0027D68B: ;
    edx = MEM32(edi + 0x44);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x34);
    PUSH32(esp, 0x0027D69Du); RECOMP_ABI_CALL(0x00263110u, sub_00263110); /* call 0x00263110 */

loc_0027D69D: ;
    SET_LO8(eax, MEM8(edi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027D6AB; /* je: equal / zero */

loc_0027D6A4: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x0027D6ABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027D6AB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027D6C0
 * Original: 0x0027D6C0 - 0x0027D9BF (767 bytes, 263 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D6C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027D6C0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0027D6D6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027D6D6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edi + 0x94); PUSH32(esp, 0x0027D6E0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027D6E0: ;
    eax = MEM32(ebx + 0x60);
    edi = MEM32(esi + 0x34);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x18) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0027D8F1; /* jne: not equal / not zero */

loc_0027D6F4: ;
    ecx = MEM32(0x5BE5B8);
    edx = MEM32(ecx + 8);
    eax = MEM32(edi + 0x44);
    ecx = MEM32(eax + edx * 4);
    edx = MEM32(edi + 0x10);
    eax = MEM32(edx + 0x10);
    eax = MEM32(eax + ecx * 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D719; /* jne: not equal / not zero */

loc_0027D713: ;
    MEM32(esp + 0x14) = ebp;
    goto loc_0027D724;

loc_0027D719: ;
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + ecx * 4 + -4);
    MEM32(esp + 0x14) = eax;

loc_0027D724: ;
    ecx = esi;
    PUSH32(esp, 0x0027D72Bu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027D72B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027D731u); RECOMP_ABI_CALL(0x0029FFE0u, sub_0029FFE0); /* call 0x0029FFE0 */

loc_0027D731: ;
    esp = esp + 4;
    ecx = esi;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0027D73Fu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027D73F: ;
    PUSH32(esp, 0x260B90);
    edi = eax;
    PUSH32(esp, 0x0027D74Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027D74B: ;
    ecx = MEM32(0x5BDAEC);
    esp = esp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027D75Au); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0027D75A: ;
    edi = MEM32(esi + 0x1EC);
    ebp = MEM32(edi + 8);
    ebx = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0027D772; /* jge: greater or equal (signed >=) */

loc_0027D76A: ;
    ecx = ebp + 1;
    MEM32(edi + 8) = ecx;
    goto loc_0027D77F;

loc_0027D772: ;
    PUSH32(esp, 4);
    edx = ebp + 1;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0027D77Fu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0027D77F: ;
    eax = MEM32(edi + 0x10);
    edi = MEM32(esp + 0x20);
    MEM32(eax + ebp * 4) = edi;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027D799; /* jne: not equal / not zero */

loc_0027D790: ;
    eax = 0x3C806C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027D7A2; /* je: equal / zero */

loc_0027D799: ;
    ecx = MEM32(ebx + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027D7A2u); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_0027D7A2: ;
    ebp = MEM32(edi + 0x68);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027D7AC; /* je: equal / zero */

loc_0027D7A9: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027D7AC: ;
    ecx = MEM32(ebx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027D7C8; /* je: equal / zero */

loc_0027D7B3: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027D7C8; /* jne: not equal / not zero */

loc_0027D7C3: ;
    PUSH32(esp, 0x0027D7C8u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027D7C8: ;
    eax = ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ebx + 0xC) = ebp;
    ebp = MEM32(esp + 0x10);
    if (TEST_NZ(_fa, _fb)) goto loc_0027D7E1; /* jne: not equal / not zero */

loc_0027D7D5: ;
    edx = MEM32(ebp);
    eax = edi + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x0027D7E1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027D7E1: ;
    edx = MEM32(esi + 0x1D8);
    ecx = MEM32(edx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0027D80B; /* jle: less or equal (signed <=) */

loc_0027D7F0: ;
    edx = MEM32(edx + 0x10);

loc_0027D7F3: ;
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027D8E8; /* je: equal / zero */

loc_0027D7FF: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027D7F3; /* jl: less (signed <) */

loc_0027D807: ;
    edi = MEM32(esp + 0x20);

loc_0027D80B: ;
    eax = eax | 0xFFFFFFFFu;

loc_0027D80E: ;
    MEM32(ebx + 8) = eax;
    ecx = MEM32(esi + 0x204);
    MEM32(ebx + 0x20) = ecx;
    MEM32(esi + 0x204) = MEM32(esi + 0x204) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x204)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(0x5BDA30);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0027D82Eu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0027D82E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027D86F; /* je: equal / zero */

loc_0027D832: ;
    ecx = MEM32(esi + 0x1FC);
    eax = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027D844; /* jne: not equal / not zero */

loc_0027D841: ;
    MEM8(ebx + 0x1D) = LO8(eax);

loc_0027D844: ;
    eax = MEM32(0x5BD448);
    ecx = MEM32(eax + 8);
    ecx = ecx + edi;
    MEM32(ebx + 0x14) = ecx;
    edx = MEM32(esi + 0x1E0);
    eax = MEM32(edx + 8);
    MEM32(ebx + 0x10) = eax;
    ecx = MEM32(edi + 0xAC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1E0);
    PUSH32(esp, 0x0027D86Fu); RECOMP_ABI_CALL(0x0025E1D0u, sub_0025E1D0); /* call 0x0025E1D0 */

loc_0027D86F: ;
    ecx = MEM32(esi + 0x1D8);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0027D87Bu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027D87B: ;
    ecx = MEM32(esi + 0x1DC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027D887u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027D887: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = 0x7FFFFF;
    eax = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, eax (32-bit) */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027D8A0; /* jne: not equal / not zero */

loc_0027D899: ;
    ecx = ebp;
    PUSH32(esp, 0x0027D8A0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027D8A0: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, eax (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027D8B4; /* jne: not equal / not zero */

loc_0027D8AD: ;
    ecx = ebx;
    PUSH32(esp, 0x0027D8B4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027D8B4: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0027D8BEu); RECOMP_ABI_CALL(0x0027AC20u, sub_0027AC20); /* call 0x0027AC20 */

loc_0027D8BE: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(edi + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027D8DA; /* je: equal / zero */

loc_0027D8C8: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027D8DA; /* jne: not equal / not zero */

loc_0027D8D5: ;
    PUSH32(esp, 0x0027D8DAu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027D8DA: ;
    MEM32(edi + 0x64) = ebp;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp + 0xC;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0027D8E8: ;
    edi = MEM32(esp + 0x20);
    goto loc_0027D80E;

loc_0027D8F1: ;
    edx = eax + -1;
    eax = MEM32(0x5BE4F0);
    ecx = MEM32(eax + 8);
    eax = MEM32(edi + 0x44);
    ecx = MEM32(eax + ecx * 4);
    eax = MEM32(edi + 0x10);
    eax = MEM32(eax + 0x10);
    ecx = ecx + edx;
    eax = MEM32(eax + ecx * 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x20) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_0027D91F; /* je: equal / zero */

loc_0027D918: ;
    eax = MEM32(eax + 0x10);
    ecx = MEM32(eax + ecx * 4 + -4);

loc_0027D91F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027D92D; /* je: equal / zero */

loc_0027D923: ;
    eax = MEM32(0x5BE148);
    ebp = MEM32(eax + 8);
    ebp = ebp + ecx;

loc_0027D92D: ;
    esi = MEM32(esi + 0x50);
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027D948; /* jl: less (signed <) */

loc_0027D938: ;
    PUSH32(esp, 0x2955A0);
    ecx = esi;
    PUSH32(esp, 0x0027D944u); RECOMP_ABI_CALL(0x0025CB20u, sub_0025CB20); /* call 0x0025CB20 */

loc_0027D944: ;
    edx = MEM32(esp + 0x20);

loc_0027D948: ;
    eax = MEM32(esi + 0x14);
    ecx = eax + 1;
    MEM32(esi + 0x14) = ecx;
    ecx = MEM32(esi + 0x10);
    esi = MEM32(ecx + eax * 4);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0027D95Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027D95F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    ecx = ebx + 0x20;
    if (TEST_Z(_fa, _fb)) goto loc_0027D97A; /* je: equal / zero */

loc_0027D966: ;
    edx = MEM32(0x5BE148);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 8);
    ecx = ecx + esi;
    PUSH32(esp, 0x0027D978u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0027D978: ;
    goto loc_0027D982;

loc_0027D97A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0027D982u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027D982: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0027D98Au); RECOMP_ABI_CALL(0x0027AC20u, sub_0027AC20); /* call 0x0027AC20 */

loc_0027D98A: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebx + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027D9A9; /* je: equal / zero */

loc_0027D994: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027D9A9; /* jne: not equal / not zero */

loc_0027D9A4: ;
    PUSH32(esp, 0x0027D9A9u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027D9A9: ;
    MEM32(ebx + 0x64) = esi;
    edx = MEM32(0x5BE148);
    eax = MEM32(edx + 8);
    POP32(esp, edi);
    eax = eax + esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0027D9C0
 * Original: 0x0027D9C0 - 0x0027DA16 (86 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027D9C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027D9C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x60);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027D9D0u); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0027D9D0: ;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebx = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0027D9F6; /* jne: not equal / not zero */

loc_0027D9D9: ;
    eax = MEM32(0x5BE5B8);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0027D9E6u); RECOMP_ABI_CALL(0x0027C920u, sub_0027C920); /* call 0x0027C920 */

loc_0027D9E6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 2;
    esp += 4; return; /* ret */

loc_0027D9F6: ;
    ecx = MEM32(0x5BE4F0);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0027DA06u); RECOMP_ABI_CALL(0x0027ACD0u, sub_0027ACD0); /* call 0x0027ACD0 */

loc_0027DA06: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 2;
    esp += 4; return; /* ret */

}

/**
 * sub_0027DA20
 * Original: 0x0027DA20 - 0x0027DA54 (52 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027DA20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027DA20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0027DA36; /* jle: less or equal (signed <=) */

loc_0027DA2F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x0027DA36u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027DA36: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027DA41u); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0027DA41: ;
    ecx = 0; /* xor self */
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 2;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0027DA60
 * Original: 0x0027DA60 - 0x0027DD2A (714 bytes, 235 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027DA60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027DA60: ;
    esp = esp - 0x10;
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x20);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0xC) = ebp;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 4) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0027DC22; /* jle: less or equal (signed <=) */

loc_0027DA84: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_0027DA90;

    /* nop */

loc_0027DA90: ;
    ecx = MEM32(ebp + 0x20);
    ebx = MEM32(esp + 0x10);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(0x5BE4E8);
    ebx = ebx << 2;
    edi = MEM32(ebx + edx);
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x0027DAB1u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0027DAB1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027DC2B; /* je: equal / zero */

loc_0027DAB9: ;
    edi = MEM32(esp + 0x24);
    ecx = edi;
    PUSH32(esp, 0x0027DAC4u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027DAC4: ;
    PUSH32(esp, 0x2608E0);
    esi = eax;
    PUSH32(esp, 0x0027DAD0u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027DAD0: ;
    ecx = MEM32(0x5BDAE0);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027DADFu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0027DADF: ;
    ecx = MEM32(ebp + 0x30);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027DAEAu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027DAEA: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027DB01; /* jne: not equal / not zero */

loc_0027DAFA: ;
    ecx = esi;
    PUSH32(esp, 0x0027DB01u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027DB01: ;
    ecx = edi;
    PUSH32(esp, 0x0027DB08u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027DB08: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027DB0Eu); RECOMP_ABI_CALL(0x00297790u, sub_00297790); /* call 0x00297790 */

loc_0027DB0E: ;
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027DB1A; /* je: equal / zero */

loc_0027DB17: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027DB1A: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027DB36; /* je: equal / zero */

loc_0027DB21: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027DB36; /* jne: not equal / not zero */

loc_0027DB31: ;
    PUSH32(esp, 0x0027DB36u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027DB36: ;
    MEM32(esi + 8) = edi;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027DB50; /* jne: not equal / not zero */

loc_0027DB49: ;
    ecx = edi;
    PUSH32(esp, 0x0027DB50u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027DB50: ;
    ecx = MEM32(ebp + 0x20);
    edx = MEM32(ecx + 0x10);
    edx = edx + ebx;
    MEM32(esi + 0xC) = edx;
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027DB77; /* je: equal / zero */

loc_0027DB65: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0027DB77; /* jl: less (signed <) */

loc_0027DB6D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0027DB77; /* jge: greater or equal (signed >=) */

loc_0027DB71: ;
    eax = MEM32(eax + 0x10);
    MEM32(ebx + eax) = edi;

loc_0027DB77: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x18);
    ebp = MEM32(edx + 8);
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x18), ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0027DBB9; /* jae: above or equal (unsigned >=) */

loc_0027DB86: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027DB95; /* je: equal / zero */

loc_0027DB8D: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0027DB95u); RECOMP_ABI_CALL(0x001F7FC0u, sub_001F7FC0); /* call 0x001F7FC0 */

loc_0027DB95: ;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027DBA4; /* je: equal / zero */

loc_0027DB9C: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0027DBA4u); RECOMP_ABI_CALL(0x001F7FC0u, sub_001F7FC0); /* call 0x001F7FC0 */

loc_0027DBA4: ;
    eax = ebp * 4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0027DBB3u); RECOMP_ABI_CALL(0x001F7ED0u, sub_001F7ED0); /* call 0x001F7ED0 */

loc_0027DBB3: ;
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 0x18) = ebp;

loc_0027DBB9: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    MEM32(edi + 0x14) = ebp;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0027DC06; /* jle: less or equal (signed <=) */

loc_0027DBC2: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x14);
    edx = MEM32(ecx + 0x1E0);
    ecx = MEM32(eax + 0x18);
    eax = MEM32(ecx + 0x10);
    ebx = MEM32(eax + esi * 4);
    ecx = MEM32(edx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0027DBF1; /* jle: less or equal (signed <=) */

loc_0027DBE2: ;
    edx = MEM32(edx + 0x10);

loc_0027DBE5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027DBF4; /* je: equal / zero */

loc_0027DBE9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027DBE5; /* jl: less (signed <) */

loc_0027DBF1: ;
    eax = eax | 0xFFFFFFFFu;

loc_0027DBF4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027DBFB; /* jne: not equal / not zero */

loc_0027DBF9: ;
    eax = 0; /* xor self */

loc_0027DBFB: ;
    ecx = MEM32(edi + 0x10);
    MEM32(ecx + esi * 4) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027DBC2; /* jl: less (signed <) */

loc_0027DC06: ;
    ebp = MEM32(esp + 0x18);

loc_0027DC0A: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0027DA90; /* jl: less (signed <) */

loc_0027DC1F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0027DC22: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_0027DC2B: ;
    edx = MEM32(0x5BE670);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0027DC39u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0027DC39: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027DCE5; /* je: equal / zero */

loc_0027DC41: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0x0027DC4Au); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027DC4A: ;
    PUSH32(esp, 0x2608E0);
    esi = eax;
    PUSH32(esp, 0x0027DC56u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027DC56: ;
    ecx = MEM32(0x5BDAE0);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027DC65u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0027DC65: ;
    ecx = MEM32(ebp + 0x30);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027DC70u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027DC70: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027DC87; /* jne: not equal / not zero */

loc_0027DC80: ;
    ecx = esi;
    PUSH32(esp, 0x0027DC87u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027DC87: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027DC8E; /* je: equal / zero */

loc_0027DC8B: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027DC8E: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027DCAA; /* je: equal / zero */

loc_0027DC95: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027DCAA; /* jne: not equal / not zero */

loc_0027DCA5: ;
    PUSH32(esp, 0x0027DCAAu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027DCAA: ;
    MEM32(esi + 8) = edi;
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(eax + 0x10);
    ecx = ecx + ebx;
    MEM32(esi + 0xC) = ecx;
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027DC0A; /* je: equal / zero */

loc_0027DCC6: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0027DC0A; /* jl: less (signed <) */

loc_0027DCD2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0027DC0A; /* jge: greater or equal (signed >=) */

loc_0027DCDA: ;
    edx = MEM32(eax + 0x10);
    MEM32(ebx + edx) = edi;
    goto loc_0027DC0A;

loc_0027DCE5: ;
    eax = MEM32(edi);
    esi = MEM32(0x5BE5C0);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0027DCF2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027DCF2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027DC0A; /* jne: not equal / not zero */

loc_0027DCFA: ;
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027DC0A; /* je: equal / zero */

loc_0027DD08: ;
    edx = MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0027DC0A; /* jl: less (signed <) */

loc_0027DD14: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0027DC0A; /* jge: greater or equal (signed >=) */

loc_0027DD1C: ;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ebp + 0x54);
    MEM32(ebx + ecx) = edx;
    goto loc_0027DC0A;

}

/**
 * sub_0027DD30
 * Original: 0x0027DD30 - 0x0027DDDA (170 bytes, 67 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027DD30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027DD30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x14);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0027DDD5; /* jle: less or equal (signed <=) */

loc_0027DD4D: ;
    PUSH32(esp, edi);
    edi = edi;

loc_0027DD50: ;
    edx = MEM32(ebp + 0x10);
    eax = MEM32(edx + esi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027DD76; /* je: equal / zero */

loc_0027DD5A: ;
    edi = MEM32(eax + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027DD76; /* je: equal / zero */

loc_0027DD61: ;
    eax = MEM32(0x5BDAA4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0027DD6Eu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0027DD6E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027DD81; /* jne: not equal / not zero */

loc_0027DD72: ;
    ecx = MEM32(esp + 0x10);

loc_0027DD76: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027DD50; /* jl: less (signed <) */

loc_0027DD7B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0027DD81: ;
    ecx = MEM32(edi + 0xC);
    esi = MEM32(ecx + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027DDD4; /* je: equal / zero */

loc_0027DD8B: ;
    edx = MEM32(ebx + 8);
    eax = MEM32(edx + 0x14);
    eax = MEM32(eax + 8);
    ecx = MEM32(0x5BDF64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027DDA0u); RECOMP_ABI_CALL(0x00278B60u, sub_00278B60); /* call 0x00278B60 */

loc_0027DDA0: ;
    MEM32(ebx + 0xA0) = eax;
    SET_LO8(eax, MEM8(0x5BD4DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027DDB6; /* jne: not equal / not zero */

loc_0027DDAF: ;
    MEM8(ebx + 0xA4) = 0;

loc_0027DDB6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027DDBCu); RECOMP_ABI_CALL(0x0033C8A0u, sub_0033C8A0); /* call 0x0033C8A0 */

loc_0027DDBC: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 0xA4));
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027DDD4u); RECOMP_ABI_CALL(0x0033BDB0u, sub_0033BDB0); /* call 0x0033BDB0 */

loc_0027DDD4: ;
    POP32(esp, edi);

loc_0027DDD5: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027DDE0
 * Original: 0x0027DDE0 - 0x0027DE3A (90 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027DDE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027DDE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0027DDEF; /* je: equal / zero */

loc_0027DDEC: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027DDEF: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027DE0B; /* je: equal / zero */

loc_0027DDF6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027DE0B; /* jne: not equal / not zero */

loc_0027DE06: ;
    PUSH32(esp, 0x0027DE0Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027DE0B: ;
    MEM32(esi + 0x20) = edi;
    eax = edi;
    MEM32(eax + 0x60) = 0;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0027DE21u); RECOMP_ABI_CALL(0x00298FD0u, sub_00298FD0); /* call 0x00298FD0 */

loc_0027DE21: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027DE31; /* jne: not equal / not zero */

loc_0027DE25: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027DE2Eu); RECOMP_ABI_CALL(0x00278C00u, sub_00278C00); /* call 0x00278C00 */

loc_0027DE2E: ;
    esp = esp + 4;

loc_0027DE31: ;
    POP32(esp, edi);
    MEM8(esi + 0x3C) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027DE40
 * Original: 0x0027DE40 - 0x0027DE8C (76 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027DE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027DE40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0027DE85; /* je: equal / zero */

loc_0027DE4C: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0027DE54u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027DE54: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027DE85; /* je: equal / zero */

loc_0027DE58: ;
    ecx = MEM32(edi + 0x1C);
    eax = MEM32(esp + 0xC);
    MEM32(esp + 0x10) = esi;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027DE73u); RECOMP_ABI_CALL(0x00200E60u, sub_00200E60); /* call 0x00200E60 */

loc_0027DE73: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0027DE7Eu); RECOMP_ABI_CALL(0x0024E250u, sub_0024E250); /* call 0x0024E250 */

loc_0027DE7E: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0027DE85: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027DE90
 * Original: 0x0027DE90 - 0x0027DF48 (184 bytes, 69 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027DE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027DE90: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027DEA8; /* jne: not equal / not zero */

loc_0027DE9B: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027DEA8; /* je: equal / zero */

loc_0027DEA2: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0027DEA8: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0027DEBAu); RECOMP_ABI_CALL(0x00279090u, sub_00279090); /* call 0x00279090 */

loc_0027DEBA: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x1C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027DF1D; /* je: equal / zero */

loc_0027DEC3: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027DEDF; /* je: equal / zero */

loc_0027DECA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027DEDF; /* jne: not equal / not zero */

loc_0027DEDA: ;
    PUSH32(esp, 0x0027DEDFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027DEDF: ;
    PUSH32(esp, 0);
    ecx = esi + 0x24;
    MEM32(esi + 0x20) = 0;
    PUSH32(esp, 0x0027DEF0u); RECOMP_ABI_CALL(0x00123E50u, sub_00123E50); /* call 0x00123E50 */

loc_0027DEF0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esi + 0x28) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_0027DEFE; /* je: equal / zero */

loc_0027DEFB: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027DEFE: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027DF1A; /* je: equal / zero */

loc_0027DF05: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027DF1A; /* jne: not equal / not zero */

loc_0027DF15: ;
    PUSH32(esp, 0x0027DF1Au); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027DF1A: ;
    MEM32(esi + 0x1C) = edi;

loc_0027DF1D: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    SET_LO8(ebx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027DF40; /* je: equal / zero */

loc_0027DF29: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027DF40; /* jne: not equal / not zero */

loc_0027DF39: ;
    ecx = edi;
    PUSH32(esp, 0x0027DF40u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027DF40: ;
    POP32(esp, edi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027DF50
 * Original: 0x0027DF50 - 0x0027E203 (691 bytes, 240 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027DF50(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027DF50: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x14;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027DF6E; /* jne: not equal / not zero */

loc_0027DF5E: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027DF6E; /* je: equal / zero */

loc_0027DF65: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

loc_0027DF6E: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0027DF76u); RECOMP_ABI_CALL(0x0027DE90u, sub_0027DE90); /* call 0x0027DE90 */

loc_0027DF76: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027DF81; /* jne: not equal / not zero */

loc_0027DF7A: ;
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

loc_0027DF81: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, ebx);
    ebx = esi + 0x20;
    if (TEST_Z(_fa, _fb)) goto loc_0027DFA1; /* je: equal / zero */

loc_0027DF8C: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027DFA1; /* jne: not equal / not zero */

loc_0027DF9C: ;
    PUSH32(esp, 0x0027DFA1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027DFA1: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi + 0x24;
    PUSH32(esp, 0);
    MEM32(ebx) = 0;
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, 0x0027DFB7u); RECOMP_ABI_CALL(0x00123E50u, sub_00123E50); /* call 0x00123E50 */

loc_0027DFB7: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    ebp = esi + 0x1C;
    PUSH32(esp, 0x405680);
    MEM32(esi + 0x28) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0027DFD0u); RECOMP_ABI_CALL(0x0022CF20u, sub_0022CF20); /* call 0x0022CF20 */

loc_0027DFD0: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027E1B9; /* jl: less (signed <) */

loc_0027DFDC: ;
    ecx = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C806C);
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x405674);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027DFFDu); RECOMP_ABI_CALL(0x00230DA0u, sub_00230DA0); /* call 0x00230DA0 */

loc_0027DFFD: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027E018; /* jne: not equal / not zero */

loc_0027E00B: ;
    ecx = esi + 0x18;
    PUSH32(esp, ecx);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x0027E018u); RECOMP_ABI_CALL(0x001A5A10u, sub_001A5A10); /* call 0x001A5A10 */

loc_0027E018: ;
    ecx = MEM32(ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C806C);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x40566C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027E032u); RECOMP_ABI_CALL(0x00230DA0u, sub_00230DA0); /* call 0x00230DA0 */

loc_0027E032: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027E07A; /* jne: not equal / not zero */

loc_0027E036: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027E052; /* je: equal / zero */

loc_0027E03E: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_0027E052; /* jne: not equal / not zero */

loc_0027E04A: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027E052u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_0027E052: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027E06E; /* je: equal / zero */

loc_0027E05A: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_0027E06E; /* jne: not equal / not zero */

loc_0027E066: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027E06Eu); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_0027E06E: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

loc_0027E07A: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027E088u); RECOMP_ABI_CALL(0x00269890u, sub_00269890); /* call 0x00269890 */

loc_0027E088: ;
    esp = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0027E095u); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_0027E095: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0027E0B7; /* je: equal / zero */

loc_0027E09F: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_0027E0B7; /* jne: not equal / not zero */

loc_0027E0B2: ;
    PUSH32(esp, 0x0027E0B7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027E0B7: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027E0C6u); RECOMP_ABI_CALL(0x00269890u, sub_00269890); /* call 0x00269890 */

loc_0027E0C6: ;
    esp = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0027E0D3u); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_0027E0D3: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0027E0F5; /* je: equal / zero */

loc_0027E0DD: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_0027E0F5; /* jne: not equal / not zero */

loc_0027E0F0: ;
    PUSH32(esp, 0x0027E0F5u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027E0F5: ;
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027E195; /* je: equal / zero */

loc_0027E101: ;
    eax = MEM32(esp + 0x14);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = MEM32(0x46A3C8);
    ecx = edx;
    if (TEST_Z(_fa, _fb)) goto loc_0027E116; /* je: equal / zero */

loc_0027E114: ;
    ecx = eax;

loc_0027E116: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027E11F; /* jne: not equal / not zero */

loc_0027E11D: ;
    eax = edx;

loc_0027E11F: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027E126u); RECOMP_ABI_CALL(0x001EB7F0u, sub_001EB7F0); /* call 0x001EB7F0 */

loc_0027E126: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027E137; /* jne: not equal / not zero */

loc_0027E12D: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0027E135u); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_0027E135: ;
    goto loc_0027E15E;

loc_0027E137: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0027E148u); RECOMP_ABI_CALL(0x00279090u, sub_00279090); /* call 0x00279090 */

loc_0027E148: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0027E150u); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_0027E150: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0027E159u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0027E159: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027E195; /* je: equal / zero */

loc_0027E15E: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(ebx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027E16Cu); RECOMP_ABI_CALL(0x0022CF20u, sub_0022CF20); /* call 0x0022CF20 */

loc_0027E16C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 0x28) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0027E1C5; /* jne: not equal / not zero */

loc_0027E174: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027E18F; /* je: equal / zero */

loc_0027E17A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027E18F; /* jne: not equal / not zero */

loc_0027E18A: ;
    PUSH32(esp, 0x0027E18Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027E18F: ;
    MEM32(ebx) = 0;

loc_0027E195: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0027E19Eu); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0027E19E: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x0027E1A7u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0027E1A7: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0027E1B0u); RECOMP_ABI_CALL(0x00123E30u, sub_00123E30); /* call 0x00123E30 */

loc_0027E1B0: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x0027E1B9u); RECOMP_ABI_CALL(0x00123E30u, sub_00123E30); /* call 0x00123E30 */

loc_0027E1B9: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

loc_0027E1C5: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0x0027E1D3u); RECOMP_ABI_CALL(0x001A5A10u, sub_001A5A10); /* call 0x001A5A10 */

loc_0027E1D3: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0027E1DCu); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0027E1DC: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x0027E1E5u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0027E1E5: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0027E1EEu); RECOMP_ABI_CALL(0x00123E30u, sub_00123E30); /* call 0x00123E30 */

loc_0027E1EE: ;
    ecx = esp + 0x28;
    PUSH32(esp, 0x0027E1F7u); RECOMP_ABI_CALL(0x00123E30u, sub_00123E30); /* call 0x00123E30 */

loc_0027E1F7: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027E210
 * Original: 0x0027E210 - 0x0027E348 (312 bytes, 108 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027E210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027E210: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027E2BF; /* jne: not equal / not zero */

loc_0027E221: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0027E233u); RECOMP_ABI_CALL(0x00279090u, sub_00279090); /* call 0x00279090 */

loc_0027E233: ;
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x1C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027E296; /* je: equal / zero */

loc_0027E23C: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027E258; /* je: equal / zero */

loc_0027E243: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027E258; /* jne: not equal / not zero */

loc_0027E253: ;
    PUSH32(esp, 0x0027E258u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027E258: ;
    PUSH32(esp, 0);
    ecx = esi + 0x24;
    MEM32(esi + 0x20) = 0;
    PUSH32(esp, 0x0027E269u); RECOMP_ABI_CALL(0x00123E50u, sub_00123E50); /* call 0x00123E50 */

loc_0027E269: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esi + 0x28) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_0027E277; /* je: equal / zero */

loc_0027E274: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027E277: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027E293; /* je: equal / zero */

loc_0027E27E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027E293; /* jne: not equal / not zero */

loc_0027E28E: ;
    PUSH32(esp, 0x0027E293u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027E293: ;
    MEM32(esi + 0x1C) = edi;

loc_0027E296: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    SET_LO8(ebx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027E2B9; /* je: equal / zero */

loc_0027E2A2: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027E2B9; /* jne: not equal / not zero */

loc_0027E2B2: ;
    ecx = edi;
    PUSH32(esp, 0x0027E2B9u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027E2B9: ;
    POP32(esp, edi);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_0027E2D3; /* je: equal / zero */

loc_0027E2BF: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40568C);
    PUSH32(esp, 0x0027E2CEu); RECOMP_ABI_CALL(0x0022CF20u, sub_0022CF20); /* call 0x0022CF20 */

loc_0027E2CE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027E2E4; /* jne: not equal / not zero */

loc_0027E2D3: ;
    eax = MEM32(esp + 0x10);
    MEM32(eax) = 0;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_0027E2E4: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C806C);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x405674);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x0027E306u); RECOMP_ABI_CALL(0x00230DA0u, sub_00230DA0); /* call 0x00230DA0 */

loc_0027E306: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = MEM32(esp + 4);
    if (TEST_NZ(_fa, _fb)) goto loc_0027E31A; /* jne: not equal / not zero */

loc_0027E312: ;
    MEM32(esi) = 0;
    goto loc_0027E327;

loc_0027E31A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0027E33F; /* je: equal / zero */

loc_0027E320: ;
    MEM32(eax + -4) = MEM32(eax + -4) + 1;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esp + 4);

loc_0027E327: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027E33F; /* je: equal / zero */

loc_0027E32B: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_0027E33F; /* jne: not equal / not zero */

loc_0027E337: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027E33Fu); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_0027E33F: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0027E350
 * Original: 0x0027E350 - 0x0027E6F1 (929 bytes, 305 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027E350(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027E350: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebp = esi + 0x20;
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_0027E689; /* jne: not equal / not zero */

loc_0027E36F: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = esi + 0x1C;
    if (TEST_NZ(_fa, _fb)) goto loc_0027E41C; /* jne: not equal / not zero */

loc_0027E37D: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0027E38Du); RECOMP_ABI_CALL(0x00279090u, sub_00279090); /* call 0x00279090 */

loc_0027E38D: ;
    edi = MEM32(esp + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027E3ED; /* je: equal / zero */

loc_0027E395: ;
    ecx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027E3B1; /* je: equal / zero */

loc_0027E39C: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027E3B1; /* jne: not equal / not zero */

loc_0027E3AC: ;
    PUSH32(esp, 0x0027E3B1u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027E3B1: ;
    PUSH32(esp, 0);
    ecx = esi + 0x24;
    MEM32(ebp) = 0;
    PUSH32(esp, 0x0027E3C2u); RECOMP_ABI_CALL(0x00123E50u, sub_00123E50); /* call 0x00123E50 */

loc_0027E3C2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esi + 0x28) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_0027E3D0; /* je: equal / zero */

loc_0027E3CD: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027E3D0: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027E3EB; /* je: equal / zero */

loc_0027E3D6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027E3EB; /* jne: not equal / not zero */

loc_0027E3E6: ;
    PUSH32(esp, 0x0027E3EBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027E3EB: ;
    MEM32(ebx) = edi;

loc_0027E3ED: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    MEM8(esp + 0x13) = (CMP_NE(_fa, _fb)) ? 1 : 0; /* setne */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027E410; /* je: equal / zero */

loc_0027E3F9: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027E410; /* jne: not equal / not zero */

loc_0027E409: ;
    ecx = edi;
    PUSH32(esp, 0x0027E410u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027E410: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027E4FA; /* je: equal / zero */

loc_0027E41C: ;
    ecx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027E438; /* je: equal / zero */

loc_0027E423: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027E438; /* jne: not equal / not zero */

loc_0027E433: ;
    PUSH32(esp, 0x0027E438u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027E438: ;
    ecx = esi + 0x24;
    PUSH32(esp, 0);
    MEM32(ebp) = 0;
    PUSH32(esp, 0x0027E449u); RECOMP_ABI_CALL(0x00123E50u, sub_00123E50); /* call 0x00123E50 */

loc_0027E449: ;
    ecx = MEM32(ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x405680);
    MEM32(esi + 0x28) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0027E45Eu); RECOMP_ABI_CALL(0x0022CF20u, sub_0022CF20); /* call 0x0022CF20 */

loc_0027E45E: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027E4FA; /* jl: less (signed <) */

loc_0027E46A: ;
    ecx = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C806C);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x405674);
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x0027E48Au); RECOMP_ABI_CALL(0x00230DA0u, sub_00230DA0); /* call 0x00230DA0 */

loc_0027E48A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x1C) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027E4A5; /* jne: not equal / not zero */

loc_0027E498: ;
    eax = esi + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0027E4A5u); RECOMP_ABI_CALL(0x001A5A10u, sub_001A5A10); /* call 0x001A5A10 */

loc_0027E4A5: ;
    ecx = MEM32(ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C806C);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x40566C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027E4BEu); RECOMP_ABI_CALL(0x00230DA0u, sub_00230DA0); /* call 0x00230DA0 */

loc_0027E4BE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027E509; /* jne: not equal / not zero */

loc_0027E4C2: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027E4DE; /* je: equal / zero */

loc_0027E4CA: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_0027E4DE; /* jne: not equal / not zero */

loc_0027E4D6: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027E4DEu); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_0027E4DE: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027E4FA; /* je: equal / zero */

loc_0027E4E6: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_0027E4FA; /* jne: not equal / not zero */

loc_0027E4F2: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027E4FAu); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_0027E4FA: ;
    esi = MEM32(esp + 0x38);
    MEM32(esi) = 0;
    goto loc_0027E6C3;

loc_0027E509: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027E517u); RECOMP_ABI_CALL(0x00269890u, sub_00269890); /* call 0x00269890 */

loc_0027E517: ;
    esp = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0027E524u); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_0027E524: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0027E546; /* je: equal / zero */

loc_0027E52E: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_0027E546; /* jne: not equal / not zero */

loc_0027E541: ;
    PUSH32(esp, 0x0027E546u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027E546: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027E555u); RECOMP_ABI_CALL(0x00269890u, sub_00269890); /* call 0x00269890 */

loc_0027E555: ;
    esp = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x0027E562u); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_0027E562: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0027E584; /* je: equal / zero */

loc_0027E56C: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = edi;
    if (TEST_NZ(_fa, _fb)) goto loc_0027E584; /* jne: not equal / not zero */

loc_0027E57F: ;
    PUSH32(esp, 0x0027E584u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027E584: ;
    edi = MEM32(esp + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027E628; /* je: equal / zero */

loc_0027E590: ;
    eax = MEM32(esp + 0x1C);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = MEM32(0x46A3C8);
    ecx = edx;
    if (TEST_Z(_fa, _fb)) goto loc_0027E5A5; /* je: equal / zero */

loc_0027E5A3: ;
    ecx = eax;

loc_0027E5A5: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027E5AE; /* jne: not equal / not zero */

loc_0027E5AC: ;
    eax = edx;

loc_0027E5AE: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027E5B5u); RECOMP_ABI_CALL(0x001EB7F0u, sub_001EB7F0); /* call 0x001EB7F0 */

loc_0027E5B5: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027E5C6; /* jne: not equal / not zero */

loc_0027E5BC: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x0027E5C4u); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_0027E5C4: ;
    goto loc_0027E5EE;

loc_0027E5C6: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0027E5D7u); RECOMP_ABI_CALL(0x00279090u, sub_00279090); /* call 0x00279090 */

loc_0027E5D7: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0027E5DFu); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_0027E5DF: ;
    ecx = esp + 0x30;
    PUSH32(esp, 0x0027E5E8u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0027E5E8: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027E628; /* je: equal / zero */

loc_0027E5EE: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(ebp);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027E5FDu); RECOMP_ABI_CALL(0x0022CF20u, sub_0022CF20); /* call 0x0022CF20 */

loc_0027E5FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 0x28) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0027E658; /* jne: not equal / not zero */

loc_0027E605: ;
    ecx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027E621; /* je: equal / zero */

loc_0027E60C: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027E621; /* jne: not equal / not zero */

loc_0027E61C: ;
    PUSH32(esp, 0x0027E621u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027E621: ;
    MEM32(ebp) = 0;

loc_0027E628: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0027E631u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0027E631: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x0027E63Au); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0027E63A: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x0027E643u); RECOMP_ABI_CALL(0x00123E30u, sub_00123E30); /* call 0x00123E30 */

loc_0027E643: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0027E64Cu); RECOMP_ABI_CALL(0x00123E30u, sub_00123E30); /* call 0x00123E30 */

loc_0027E64C: ;
    esi = MEM32(esp + 0x38);
    MEM32(esi) = 0;
    goto loc_0027E6C3;

loc_0027E658: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi + 0x24;
    PUSH32(esp, 0x0027E665u); RECOMP_ABI_CALL(0x001A5A10u, sub_001A5A10); /* call 0x001A5A10 */

loc_0027E665: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0027E66Eu); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0027E66E: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x0027E677u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0027E677: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x0027E680u); RECOMP_ABI_CALL(0x00123E30u, sub_00123E30); /* call 0x00123E30 */

loc_0027E680: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0027E689u); RECOMP_ABI_CALL(0x00123E30u, sub_00123E30); /* call 0x00123E30 */

loc_0027E689: ;
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C806C);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027E6A6u); RECOMP_ABI_CALL(0x00230C80u, sub_00230C80); /* call 0x00230C80 */

loc_0027E6A6: ;
    esi = MEM32(esp + 0x38);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = MEM32(esp + 0x24);
    if (TEST_NZ(_fa, _fb)) goto loc_0027E6BA; /* jne: not equal / not zero */

loc_0027E6B2: ;
    MEM32(esi) = 0;
    goto loc_0027E6C7;

loc_0027E6BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0027E6C7; /* je: equal / zero */

loc_0027E6C0: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027E6C3: ;
    eax = MEM32(esp + 0x24);

loc_0027E6C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0027E6E5; /* je: equal / zero */

loc_0027E6CD: ;
    edi = MEM32(eax + 4);
    eax = eax + 4;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = edi;
    edx = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027E6E5; /* jne: not equal / not zero */

loc_0027E6E0: ;
    PUSH32(esp, 0x0027E6E5u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027E6E5: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027E700
 * Original: 0x0027E700 - 0x0027F07D (2429 bytes, 802 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027E700(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027E700: ;
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x0027E70Eu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027E70E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027E714u); RECOMP_ABI_CALL(0x0022A440u, sub_0022A440); /* call 0x0022A440 */

loc_0027E714: ;
    edi = eax;
    eax = MEM32(esp + 0x4C);
    esp = esp + 4;
    esi = 0; /* xor self */
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x24) = esi;
    PUSH32(esp, 0x0027E733u); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_0027E733: ;
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, 0xA);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4056C4);
    ecx = edi;
    PUSH32(esp, 0x0027E745u); RECOMP_ABI_CALL(0x001F8580u, sub_001F8580); /* call 0x001F8580 */

loc_0027E745: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027E751; /* jne: not equal / not zero */

loc_0027E74C: ;
    eax = MEM32(0x46A3C8);

loc_0027E751: ;
    ecx = MEM32(ebx + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3C806C);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027E76Au); RECOMP_ABI_CALL(0x00230DA0u, sub_00230DA0); /* call 0x00230DA0 */

loc_0027E76A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027E890; /* je: equal / zero */

loc_0027E772: ;
    ecx = MEM32(esp + 0x54);
    eax = MEM32(esp + 0x10);
    MEM8(ecx) = 1;
    edx = MEM32(ebx + 0x30);
    ecx = MEM32(edx + 0x1C);
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = 1;
    PUSH32(esp, 0x0027E791u); RECOMP_ABI_CALL(0x0020A1A0u, sub_0020A1A0); /* call 0x0020A1A0 */

loc_0027E791: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x54) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0027E7DC; /* jne: not equal / not zero */

loc_0027E799: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027E7B5; /* je: equal / zero */

loc_0027E7A1: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_0027E7B5; /* jne: not equal / not zero */

loc_0027E7AD: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027E7B5u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_0027E7B5: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi + 4) = ecx;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027F024; /* jne: not equal / not zero */

loc_0027E7C9: ;
    ecx = edi;
    PUSH32(esp, 0x0027E7D0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027E7D0: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 24; return; /* ret 20 */

loc_0027E7DC: ;
    ecx = ebx;
    PUSH32(esp, 0x0027E7E3u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027E7E3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027E7E9u); RECOMP_ABI_CALL(0x0022A440u, sub_0022A440); /* call 0x0022A440 */

loc_0027E7E9: ;
    ecx = MEM32(esp + 0x14);
    esp = esp + 4;
    esi = eax;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0027E7FAu); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_0027E7FA: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, 9);
    PUSH32(esp, edx);
    PUSH32(esp, 0x4056B8);
    ecx = esi;
    PUSH32(esp, 0x0027E80Cu); RECOMP_ABI_CALL(0x001F8580u, sub_001F8580); /* call 0x001F8580 */

loc_0027E80C: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027E818; /* jne: not equal / not zero */

loc_0027E813: ;
    eax = MEM32(0x46A3C8);

loc_0027E818: ;
    ecx = MEM32(ebx + 0x30);
    ecx = MEM32(ecx + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027E824u); RECOMP_ABI_CALL(0x0020A1A0u, sub_0020A1A0); /* call 0x0020A1A0 */

loc_0027E824: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027E83E; /* je: equal / zero */

loc_0027E82A: ;
    edx = MEM32(0x5BA960);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0027E838u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0027E838: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027E83E; /* jne: not equal / not zero */

loc_0027E83C: ;
    ebp = 0; /* xor self */

loc_0027E83E: ;
    eax = MEM32(esp + 0x54);
    ecx = MEM32(esp + 0x50);
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0027E855u); RECOMP_ABI_CALL(0x00269510u, sub_00269510); /* call 0x00269510 */

loc_0027E855: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027E879; /* jne: not equal / not zero */

loc_0027E859: ;
    edx = MEM32(esi + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027E799; /* jne: not equal / not zero */

loc_0027E86D: ;
    ecx = esi;
    PUSH32(esp, 0x0027E874u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027E874: ;
    goto loc_0027E799;

loc_0027E879: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027E890; /* jne: not equal / not zero */

loc_0027E889: ;
    ecx = esi;
    PUSH32(esp, 0x0027E890u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027E890: ;
    eax = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0027E89Cu); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_0027E89C: ;
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, 6);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4056B0);
    ecx = edi;
    PUSH32(esp, 0x0027E8AEu); RECOMP_ABI_CALL(0x001F8580u, sub_001F8580); /* call 0x001F8580 */

loc_0027E8AE: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027E8BA; /* jne: not equal / not zero */

loc_0027E8B5: ;
    eax = MEM32(0x46A3C8);

loc_0027E8BA: ;
    ecx = MEM32(ebx + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C806C);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027E8D4u); RECOMP_ABI_CALL(0x00230DA0u, sub_00230DA0); /* call 0x00230DA0 */

loc_0027E8D4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027EE12; /* je: equal / zero */

loc_0027E8DC: ;
    ecx = MEM32(0x5BC214);
    esi = MEM32(esp + 0x20);
    ebp = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ebp;
    MEM32(esp + 0x24) = esi;
    PUSH32(esp, 0x0027E8F7u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0027E8F7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027EDAA; /* je: equal / zero */

loc_0027E8FF: ;
    edx = MEM32(0x5BC248);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0027E90Du); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0027E90D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027ED72; /* je: equal / zero */

loc_0027E915: ;
    eax = MEM32(0x5BC3C8);
    ecx = MEM32(ebp + 0x38);
    PUSH32(esp, eax);
    MEM32(esp + 0x58) = ecx;
    PUSH32(esp, 0x0027E927u); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_0027E927: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027ED1D; /* je: equal / zero */

loc_0027E92F: ;
    ecx = ebx;
    PUSH32(esp, 0x0027E936u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027E936: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027E93Cu); RECOMP_ABI_CALL(0x002209B0u, sub_002209B0); /* call 0x002209B0 */

loc_0027E93C: ;
    esi = eax;
    esp = esp + 4;
    ecx = ebx;
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0x0027E94Cu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027E94C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027E952u); RECOMP_ABI_CALL(0x002209B0u, sub_002209B0); /* call 0x002209B0 */

loc_0027E952: ;
    edi = MEM32(edi + 8);
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x2C) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_0027E966; /* jne: not equal / not zero */

loc_0027E960: ;
    edi = MEM32(0x46A3C8);

loc_0027E966: ;
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 0x1C);
    PUSH32(esp, 0x0027E977u); RECOMP_ABI_CALL(0x00230E70u, sub_00230E70); /* call 0x00230E70 */

loc_0027E977: ;
    edx = MEM32(esi + 8);
    eax = MEM32(ebp + 8);
    edi = MEM32(esp + 0x4C);
    esi = MEM32(edi + eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esp + 0x18) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027E9B8; /* jne: not equal / not zero */

loc_0027E98C: ;
    ecx = MEM32(ebx + 0x2C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x58);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0027E99Eu); RECOMP_ABI_CALL(0x00216E80u, sub_00216E80); /* call 0x00216E80 */

loc_0027E99E: ;
    eax = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0027E9ABu); RECOMP_ABI_CALL(0x00209EC0u, sub_00209EC0); /* call 0x00209EC0 */

loc_0027E9AB: ;
    esi = MEM32(esp + 0x54);
    ecx = esp + 0x54;
    PUSH32(esp, 0x0027E9B8u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0027E9B8: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E226C);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0027E9C4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027E9C4: ;
    ecx = eax;
    PUSH32(esp, 0x0027E9CBu); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_0027E9CB: ;
    edi = eax;
    ebp = MEM32(edi + 0x3C);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E7404);
    ecx = esi;
    MEM32(esp + 0x34) = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0027E9E0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027E9E0: ;
    ecx = eax;
    PUSH32(esp, 0x0027E9E7u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_0027E9E7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F88A4);
    ecx = esi;
    MEM32(esp + 0x2C) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0027E9F7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027E9F7: ;
    ecx = eax;
    PUSH32(esp, 0x0027E9FEu); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_0027E9FE: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(esp + 0x18);
    MEM32(esi + edx) = ecx;
    eax = MEM32(eax + 8);
    MEM32(esi + eax) = ecx;
    edx = MEM32(ebx + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0027EA24u); RECOMP_ABI_CALL(0x001F7560u, sub_001F7560); /* call 0x001F7560 */

loc_0027EA24: ;
    ecx = MEM32(0x5BC448);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0027EA32u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0027EA32: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027EB64; /* je: equal / zero */

loc_0027EA3A: ;
    edx = MEM32(edi + 8);
    eax = MEM32(esi + edx);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x24) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0027ECDB; /* jle: less or equal (signed <=) */

loc_0027EA58: ;
    goto loc_0027EA60;

    /* nop */

loc_0027EA60: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(esp + 0x24);
    esi = MEM32(edx + eax * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027EA8C; /* je: equal / zero */

loc_0027EA72: ;
    edx = MEM32(esi + -4);
    eax = esi + -8;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = edx;
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_0027EA8C; /* jne: not equal / not zero */

loc_0027EA84: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027EA8Cu); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_0027EA8C: ;
    ecx = MEM32(ebx + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027EA97u); RECOMP_ABI_CALL(0x0022CF20u, sub_0022CF20); /* call 0x0022CF20 */

loc_0027EA97: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x38) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0027EBF0; /* je: equal / zero */

loc_0027EAA4: ;
    ecx = MEM32(esp + 0x30);
    eax = MEM32(ecx + 0x34);
    ebp = MEM32(esp + 0x28);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(eax + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x3C) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0027EB38; /* jle: less or equal (signed <=) */

loc_0027EAC0: ;
    edx = MEM32(esp + 0x34);
    eax = MEM32(edx + 0x10);
    esi = MEM32(eax + edi * 4);
    eax = MEM32(esi + 0xC);
    ecx = MEM32(ebx + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C806C);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    MEM32(esp + 0x68) = 0;
    PUSH32(esp, 0x0027EAEFu); RECOMP_ABI_CALL(0x00230DA0u, sub_00230DA0); /* call 0x00230DA0 */

loc_0027EAEF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = MEM32(esp + 0x54);
    if (TEST_Z(_fa, _fb)) goto loc_0027EB09; /* je: equal / zero */

loc_0027EAF7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x0027EB05u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027EB05: ;
    eax = MEM32(esp + 0x54);

loc_0027EB09: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027EB21; /* je: equal / zero */

loc_0027EB0D: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_0027EB21; /* jne: not equal / not zero */

loc_0027EB19: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027EB21u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_0027EB21: ;
    ecx = ZX16(MEM16(esi + 0x14));
    ecx = ecx + ebp;
    PUSH32(esp, ecx);
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0027EB30u); RECOMP_ABI_CALL(0x001E9ED0u, sub_001E9ED0); /* call 0x001E9ED0 */

loc_0027EB30: ;
    ebp = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x3C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027EAC0; /* jl: less (signed <) */

loc_0027EB38: ;
    edx = MEM32(esp + 0x30);
    ecx = ZX16(MEM16(edx + 0x14));
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x24);
    edx = edx + ecx;
    ecx = MEM32(esp + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0027EA60; /* jl: less (signed <) */

loc_0027EB5F: ;
    goto loc_0027ECDB;

loc_0027EB64: ;
    edx = MEM32(0x5BC248);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0027EB72u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0027EB72: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027EC20; /* je: equal / zero */

loc_0027EB7A: ;
    eax = MEM32(edi + 8);
    esi = MEM32(esi + eax);
    eax = MEM32(esp + 0x18);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0027ECDB; /* jle: less or equal (signed <=) */

loc_0027EB8E: ;
    edi = edi;

loc_0027EB90: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 0x10);
    edi = MEM32(edx + ebp * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x3C) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0027EBA5; /* je: equal / zero */

loc_0027EBA2: ;
    MEM32(edi + -4) = MEM32(edi + -4) + 1;
    _fa = (uint32_t)(MEM32(edi + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027EBA5: ;
    ecx = esp + 0x3C;
    PUSH32(esp, 0x0027EBAEu); RECOMP_ABI_CALL(0x00123E30u, sub_00123E30); /* call 0x00123E30 */

loc_0027EBAE: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0027EBBDu); RECOMP_ABI_CALL(0x0027F080u, sub_0027F080); /* call 0x0027F080 */

loc_0027EBBD: ;
    eax = MEM32(esp + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = esp + 0x54;
    if (TEST_Z(_fa, _fb)) goto loc_0027EBEB; /* je: equal / zero */

loc_0027EBC9: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0027EBD1u); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_0027EBD1: ;
    ecx = esp + 0x54;
    PUSH32(esp, 0x0027EBDAu); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0027EBDA: ;
    eax = MEM32(esp + 0x18);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027EB90; /* jl: less (signed <) */

loc_0027EBE6: ;
    goto loc_0027ECDB;

loc_0027EBEB: ;
    PUSH32(esp, 0x0027EBF0u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0027EBF0: ;
    ecx = esp + 0x2C;
    PUSH32(esp, 0x0027EBF9u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0027EBF9: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0027EC02u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0027EC02: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0027EC0Bu); RECOMP_ABI_CALL(0x00123E30u, sub_00123E30); /* call 0x00123E30 */

loc_0027EC0B: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0027EC14u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0027EC14: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 24; return; /* ret 20 */

loc_0027EC20: ;
    ecx = MEM32(0x5BC374);
    edx = MEM32(edi + 8);
    eax = MEM32(esi + edx);
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x0027EC38u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0027EC38: ;
    MEM8(esp + 0x54) = LO8(eax);
    eax = MEM32(esp + 0x18);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0027ECDB; /* jle: less or equal (signed <=) */

loc_0027EC4A: ;
    /* nop */

loc_0027EC50: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(edx + 0x10);
    edi = MEM32(eax + esi * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esp + 0x3C) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0027EC65; /* je: equal / zero */

loc_0027EC62: ;
    MEM32(edi + -4) = MEM32(edi + -4) + 1;
    _fa = (uint32_t)(MEM32(edi + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027EC65: ;
    ecx = esp + 0x3C;
    PUSH32(esp, 0x0027EC6Eu); RECOMP_ABI_CALL(0x00123E30u, sub_00123E30); /* call 0x00123E30 */

loc_0027EC6E: ;
    SET_LO8(eax, MEM8(esp + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027ECAD; /* je: equal / zero */

loc_0027EC76: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(ebp + 0x34); PUSH32(esp, 0x0027EC79u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027EC79: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027ECAD; /* je: equal / zero */

loc_0027EC7D: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(esp + 0x3C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0027EC97u); RECOMP_ABI_CALL(0x00216780u, sub_00216780); /* call 0x00216780 */

loc_0027EC97: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BC5D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x5BC5D8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027ECAD; /* jne: not equal / not zero */

loc_0027ECA1: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x24);
    MEM32(edx) = ecx;
    goto loc_0027ECC0;

loc_0027ECAD: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0xD8); PUSH32(esp, 0x0027ECC0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027ECC0: ;
    edx = ZX16(MEM16(ebp + 0x14));
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x18);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x24) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0027EC50; /* jl: less (signed <) */

loc_0027ECDB: ;
    ecx = MEM32(esp + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027ECF8; /* je: equal / zero */

loc_0027ECE3: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027ECF8; /* jne: not equal / not zero */

loc_0027ECF3: ;
    PUSH32(esp, 0x0027ECF8u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027ECF8: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(eax + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x7FFFFF (32-bit) */
    MEM32(eax + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027EE12; /* jne: not equal / not zero */

loc_0027ED11: ;
    ecx = eax;
    PUSH32(esp, 0x0027ED18u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027ED18: ;
    goto loc_0027EE12;

loc_0027ED1D: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0027ED30u); RECOMP_ABI_CALL(0x0027F080u, sub_0027F080); /* call 0x0027F080 */

loc_0027ED30: ;
    ecx = MEM32(esp + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027ED45; /* je: equal / zero */

loc_0027ED38: ;
    eax = MEM32(ebp + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027ED41u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0027ED41: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027ED53; /* jne: not equal / not zero */

loc_0027ED45: ;
    ecx = esp + 0x54;
    PUSH32(esp, 0x0027ED4Eu); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0027ED4E: ;
    goto loc_0027EC02;

loc_0027ED53: ;
    edx = MEM32(esp + 0x54);
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0027ED64u); RECOMP_ABI_CALL(0x00209EC0u, sub_00209EC0); /* call 0x00209EC0 */

loc_0027ED64: ;
    ecx = esp + 0x54;
    PUSH32(esp, 0x0027ED6Du); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0027ED6D: ;
    goto loc_0027EE12;

loc_0027ED72: ;
    ecx = MEM32(0x5BC1D4);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0027ED80u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0027ED80: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027EC02; /* je: equal / zero */

loc_0027ED88: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = edx;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027ED9C; /* je: equal / zero */

loc_0027ED99: ;
    MEM32(eax + -4) = MEM32(eax + -4) + 1;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027ED9C: ;
    eax = MEM32(esp + 0x50);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0027EDA8u); RECOMP_ABI_CALL(0x00212740u, sub_00212740); /* call 0x00212740 */

loc_0027EDA8: ;
    goto loc_0027EE12;

loc_0027EDAA: ;
    ecx = MEM32(0x5BC374);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0027EDB8u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0027EDB8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027EDFB; /* je: equal / zero */

loc_0027EDBC: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(ebp + 0x34); PUSH32(esp, 0x0027EDBFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027EDBF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027EDFB; /* je: equal / zero */

loc_0027EDC3: ;
    ecx = MEM32(esp + 0x10);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    ecx = eax;
    MEM32(esp + 0x60) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0027EDE1u); RECOMP_ABI_CALL(0x00216780u, sub_00216780); /* call 0x00216780 */

loc_0027EDE1: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x5BC5D8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x5BC5D8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027EDFB; /* jne: not equal / not zero */

loc_0027EDEB: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(esp + 0x54);
    eax = MEM32(esp + 0x4C);
    MEM32(eax + ecx) = edx;
    goto loc_0027EE12;

loc_0027EDFB: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x4C);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0xD0); PUSH32(esp, 0x0027EE12u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027EE12: ;
    edx = MEM32(esp + 0x48);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0027EE22u); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_0027EE22: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4056A8);
    ecx = esi;
    PUSH32(esp, 0x0027EE34u); RECOMP_ABI_CALL(0x001F8580u, sub_001F8580); /* call 0x001F8580 */

loc_0027EE34: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027EE40; /* jne: not equal / not zero */

loc_0027EE3B: ;
    eax = MEM32(0x46A3C8);

loc_0027EE40: ;
    ecx = MEM32(ebx + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C806C);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027EE5Au); RECOMP_ABI_CALL(0x00230DA0u, sub_00230DA0); /* call 0x00230DA0 */

loc_0027EE5A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027EED8; /* je: equal / zero */

loc_0027EE5E: ;
    ecx = MEM32(0x5BC1D4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x54);
    PUSH32(esp, 0x0027EE6Eu); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0027EE6E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027EFF1; /* je: equal / zero */

loc_0027EE76: ;
    edx = MEM32(esp + 0x10);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    eax = esp + 0x58;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x28) = ebp;
    PUSH32(esp, 0x0027EE90u); RECOMP_ABI_CALL(0x00279330u, sub_00279330); /* call 0x00279330 */

loc_0027EE90: ;
    edi = MEM32(esp + 0x54);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027EFF1; /* je: equal / zero */

loc_0027EE9C: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027EEA8; /* jne: not equal / not zero */

loc_0027EEA3: ;
    eax = MEM32(0x46A3C8);

loc_0027EEA8: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027EEB1u); RECOMP_ABI_CALL(0x001A42F0u, sub_001A42F0); /* call 0x001A42F0 */

loc_0027EEB1: ;
    ebp = MEM32(esp + 0x50);
    ecx = MEM32(esp + 0x54);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0027EEBFu); RECOMP_ABI_CALL(0x00212740u, sub_00212740); /* call 0x00212740 */

loc_0027EEBF: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027EEDC; /* jne: not equal / not zero */

loc_0027EECF: ;
    ecx = edi;
    PUSH32(esp, 0x0027EED6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027EED6: ;
    goto loc_0027EEDC;

loc_0027EED8: ;
    ebp = MEM32(esp + 0x4C);

loc_0027EEDC: ;
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0027EEE8u); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_0027EEE8: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, 9);
    PUSH32(esp, edx);
    PUSH32(esp, 0x40569C);
    ecx = esi;
    PUSH32(esp, 0x0027EEFAu); RECOMP_ABI_CALL(0x001F8580u, sub_001F8580); /* call 0x001F8580 */

loc_0027EEFA: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027EF06; /* jne: not equal / not zero */

loc_0027EF01: ;
    eax = MEM32(0x46A3C8);

loc_0027EF06: ;
    ecx = MEM32(ebx + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C806C);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027EF20u); RECOMP_ABI_CALL(0x00230DA0u, sub_00230DA0); /* call 0x00230DA0 */

loc_0027EF20: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    edi = MEM32(esp + 0x20);
    if (TEST_Z(_fa, _fb)) goto loc_0027EFE8; /* je: equal / zero */

loc_0027EF2C: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    ecx = ebx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0027EF40u); RECOMP_ABI_CALL(0x0027F080u, sub_0027F080); /* call 0x0027F080 */

loc_0027EF40: ;
    ecx = MEM32(esp + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027EFF1; /* je: equal / zero */

loc_0027EF4C: ;
    eax = MEM32(0x5BD934);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027EF57u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0027EF57: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027EF9D; /* jne: not equal / not zero */

loc_0027EF5B: ;
    ecx = esp + 0x4C;
    PUSH32(esp, 0x0027EF64u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0027EF64: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027EC0B; /* je: equal / zero */

loc_0027EF70: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_0027EC0B; /* jne: not equal / not zero */

loc_0027EF80: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027EF88u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_0027EF88: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0027EF91u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0027EF91: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 24; return; /* ret 20 */

loc_0027EF9D: ;
    ecx = MEM32(esp + 0x4C);
    edx = MEM32(ecx);
    eax = esp + 0x44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0027EFABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027EFAB: ;
    ecx = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x50);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0027EFBFu); RECOMP_ABI_CALL(0x00269510u, sub_00269510); /* call 0x00269510 */

loc_0027EFBF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ecx = esp + 0x44;
    if (TEST_NZ(_fa, _fb)) goto loc_0027EFDA; /* jne: not equal / not zero */

loc_0027EFC7: ;
    PUSH32(esp, 0x0027EFCCu); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0027EFCC: ;
    ecx = esp + 0x4C;
    PUSH32(esp, 0x0027EFD5u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0027EFD5: ;
    goto loc_0027EC02;

loc_0027EFDA: ;
    PUSH32(esp, 0x0027EFDFu); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0027EFDF: ;
    ecx = esp + 0x4C;
    PUSH32(esp, 0x0027EFE8u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0027EFE8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027EFF1; /* je: equal / zero */

loc_0027EFEC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0027F030; /* jle: less or equal (signed <=) */

loc_0027EFF1: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027F00D; /* je: equal / zero */

loc_0027EFF9: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_0027F00D; /* jne: not equal / not zero */

loc_0027F005: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027F00Du); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_0027F00D: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ecx;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027F024; /* jne: not equal / not zero */

loc_0027F01D: ;
    ecx = esi;
    PUSH32(esp, 0x0027F024u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027F024: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 24; return; /* ret 20 */

loc_0027F030: ;
    eax = MEM32(esp + 0x50);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027F03Bu); RECOMP_ABI_CALL(0x0024DCC0u, sub_0024DCC0); /* call 0x0024DCC0 */

loc_0027F03B: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027F05A; /* je: equal / zero */

loc_0027F046: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_0027F05A; /* jne: not equal / not zero */

loc_0027F052: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027F05Au); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_0027F05A: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027F071; /* jne: not equal / not zero */

loc_0027F06A: ;
    ecx = esi;
    PUSH32(esp, 0x0027F071u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027F071: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0027F080
 * Original: 0x0027F080 - 0x0027F2F2 (626 bytes, 227 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027F080(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027F080: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    ebx = ecx;
    ecx = MEM32(ebx + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027F097u); RECOMP_ABI_CALL(0x0022CF20u, sub_0022CF20); /* call 0x0022CF20 */

loc_0027F097: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027F0B1; /* jne: not equal / not zero */

loc_0027F09E: ;
    eax = MEM32(esp + 0x2C);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(eax) = 0;
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 16; return; /* ret 12 */

loc_0027F0B1: ;
    ecx = MEM32(ebx + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C806C);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3CC9F4);
    PUSH32(esp, ebp);
    MEM32(esp + 0x2C) = 0;
    PUSH32(esp, 0x0027F0D4u); RECOMP_ABI_CALL(0x00230DA0u, sub_00230DA0); /* call 0x00230DA0 */

loc_0027F0D4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027F10A; /* jne: not equal / not zero */

loc_0027F0D8: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    esi = MEM32(esp + 0x30);
    MEM32(esi) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_0027F0FE; /* je: equal / zero */

loc_0027F0EA: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_0027F0FE; /* jne: not equal / not zero */

loc_0027F0F6: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027F0FEu); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_0027F0FE: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 16; return; /* ret 12 */

loc_0027F10A: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027F114u); RECOMP_ABI_CALL(0x001F7AB0u, sub_001F7AB0); /* call 0x001F7AB0 */

loc_0027F114: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0027F0D8; /* je: equal / zero */

loc_0027F11F: ;
    edx = MEM32(ebx + 0x2C);
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0027F12Fu); RECOMP_ABI_CALL(0x00216E80u, sub_00216E80); /* call 0x00216E80 */

loc_0027F12F: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027F0D8; /* je: equal / zero */

loc_0027F137: ;
    ecx = ebx;
    PUSH32(esp, 0x0027F13Eu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027F13E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027F144u); RECOMP_ABI_CALL(0x002209B0u, sub_002209B0); /* call 0x002209B0 */

loc_0027F144: ;
    ecx = MEM32(ebx + 0x1C);
    esp = esp + 4;
    PUSH32(esp, 0);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4056D8);
    PUSH32(esp, ebp);
    MEM32(esp + 0x30) = esi;
    PUSH32(esp, 0x0027F15Eu); RECOMP_ABI_CALL(0x00230E70u, sub_00230E70); /* call 0x00230E70 */

loc_0027F15E: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x1C) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0027F1DC; /* jle: less or equal (signed <=) */

loc_0027F171: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esp + 0x1C);
    edi = MEM32(edx + eax * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027F199; /* je: equal / zero */

loc_0027F17F: ;
    edx = MEM32(edi + -4);
    eax = edi + -8;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edx;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = edx;
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_0027F199; /* jne: not equal / not zero */

loc_0027F191: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027F199u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_0027F199: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027F1A3u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_0027F1A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027F258; /* je: equal / zero */

loc_0027F1AB: ;
    edx = MEM32(esp + 0x14);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0027F1BFu); RECOMP_ABI_CALL(0x0027E700u, sub_0027E700); /* call 0x0027E700 */

loc_0027F1BF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027F258; /* je: equal / zero */

loc_0027F1C7: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0027F171; /* jl: less (signed <) */

loc_0027F1D8: ;
    edi = MEM32(esp + 0x34);

loc_0027F1DC: ;
    SET_LO8(edx, MEM8(esp + 0x38));
    ecx = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), LO8(edx) (8-bit) */
    SET_LO8(eax, (TEST_Z(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 0);
    MEM8(esp + 0x17) = LO8(eax);
    PUSH32(esp, eax);
    eax = esp + 0x1B;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4056D0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0027F1FFu); RECOMP_ABI_CALL(0x002311C0u, sub_002311C0); /* call 0x002311C0 */

loc_0027F1FF: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027F280; /* je: equal / zero */

loc_0027F207: ;
    ebx = MEM32(ebx + 0x34);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0027F212u); RECOMP_ABI_CALL(0x0020A1A0u, sub_0020A1A0); /* call 0x0020A1A0 */

loc_0027F212: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027F273; /* je: equal / zero */

loc_0027F218: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0027F224u); RECOMP_ABI_CALL(0x001EA9C0u, sub_001EA9C0); /* call 0x001EA9C0 */

loc_0027F224: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    esi = MEM32(esp + 0x30);
    if (TEST_Z(_fa, _fb)) goto loc_0027F264; /* je: equal / zero */

loc_0027F22C: ;
    MEM32(esi) = ebp;
    MEM32(ebp + 4) = MEM32(ebp + 4) + 1;
    _fa = (uint32_t)(MEM32(ebp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027F231: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x0027F23Au); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0027F23A: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0027F243u); RECOMP_ABI_CALL(0x001A59F0u, sub_001A59F0); /* call 0x001A59F0 */

loc_0027F243: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x0027F24Cu); RECOMP_ABI_CALL(0x00123E30u, sub_00123E30); /* call 0x00123E30 */

loc_0027F24C: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 16; return; /* ret 12 */

loc_0027F258: ;
    edi = MEM32(esp + 0x30);
    MEM32(edi) = 0;
    goto loc_0027F291;

loc_0027F264: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0027F231; /* je: equal / zero */

loc_0027F26E: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0027F231;

loc_0027F273: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0027F280u); RECOMP_ABI_CALL(0x0021B0A0u, sub_0021B0A0); /* call 0x0021B0A0 */

loc_0027F280: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edi = MEM32(esp + 0x30);
    MEM32(edi) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0027F291; /* je: equal / zero */

loc_0027F28E: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027F291: ;
    edx = MEM32(esi + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = edx;
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027F2A8; /* jne: not equal / not zero */

loc_0027F2A1: ;
    ecx = esi;
    PUSH32(esp, 0x0027F2A8u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027F2A8: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0027F2CA; /* je: equal / zero */

loc_0027F2B2: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax) = esi;
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027F2CA; /* jne: not equal / not zero */

loc_0027F2C5: ;
    PUSH32(esp, 0x0027F2CAu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027F2CA: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027F2E6; /* je: equal / zero */

loc_0027F2D2: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_0027F2E6; /* jne: not equal / not zero */

loc_0027F2DE: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027F2E6u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_0027F2E6: ;
    POP32(esp, esi);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0027F300
 * Original: 0x0027F300 - 0x0027F3CE (206 bytes, 75 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027F300(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027F300: ;
    esp = esp - 8;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ebp = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0027F3B9; /* je: equal / zero */

loc_0027F313: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0xC) = esi;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0027F3B8; /* jle: less or equal (signed <=) */

loc_0027F325: ;
    PUSH32(esp, ebx);

loc_0027F326: ;
    eax = MEM32(edi + 0x10);
    eax = MEM32(eax + esi * 4);
    ecx = MEM32(eax + 4);
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_0027F3C1; /* je: equal / zero */

loc_0027F338: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0027F3A7; /* jne: not equal / not zero */

loc_0027F33B: ;
    ebx = MEM32(eax + 8);
    eax = MEM32(ebx + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0027F3A3; /* jle: less or equal (signed <=) */

loc_0027F347: ;
    ecx = MEM32(ebx + 0x10);
    esi = MEM32(ecx + edi * 4);
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x4056A8);
    PUSH32(esp, 0x0027F35Au); RECOMP_ABI_CALL(0x001EB780u, sub_001EB780); /* call 0x001EB780 */

loc_0027F35A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027F397; /* je: equal / zero */

loc_0027F35E: ;
    esi = MEM32(esi + 8);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027F36D; /* jne: not equal / not zero */

loc_0027F368: ;
    eax = MEM32(0x46A3C8);

loc_0027F36D: ;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x0027F37Au); RECOMP_ABI_CALL(0x00279330u, sub_00279330); /* call 0x00279330 */

loc_0027F37A: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027F397; /* je: equal / zero */

loc_0027F382: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027F397; /* jne: not equal / not zero */

loc_0027F392: ;
    PUSH32(esp, 0x0027F397u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027F397: ;
    eax = MEM32(ebx + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0027F347; /* jl: less (signed <) */

loc_0027F39F: ;
    esi = MEM32(esp + 0x10);

loc_0027F3A3: ;
    edi = MEM32(esp + 0x1C);

loc_0027F3A7: ;
    eax = MEM32(edi + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_0027F326; /* jl: less (signed <) */

loc_0027F3B7: ;
    POP32(esp, ebx);

loc_0027F3B8: ;
    POP32(esp, esi);

loc_0027F3B9: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

loc_0027F3C1: ;
    eax = MEM32(eax + 0x10);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0027F3CCu); RECOMP_ABI_CALL(0x0027F300u, sub_0027F300); /* call 0x0027F300 */

loc_0027F3CC: ;
    goto loc_0027F3A7;

}

/**
 * sub_0027F3D0
 * Original: 0x0027F3D0 - 0x0027F494 (196 bytes, 77 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027F3D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027F3D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    edi = ecx;
    esi = 0; /* xor self */
    PUSH32(esp, 0x0027F3E7u); RECOMP_ABI_CALL(0x00279330u, sub_00279330); /* call 0x00279330 */

loc_0027F3E7: ;
    ebx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027F448; /* je: equal / zero */

loc_0027F3EF: ;
    ecx = edi;
    PUSH32(esp, 0x0027F3F6u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027F3F6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027F3FCu); RECOMP_ABI_CALL(0x00235C20u, sub_00235C20); /* call 0x00235C20 */

loc_0027F3FC: ;
    ecx = MEM32(0x5BC508);
    edx = MEM32(ecx + 0x3C);
    esp = esp + 4;
    esi = eax;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0027F412u); RECOMP_ABI_CALL(0x001EA870u, sub_001EA870); /* call 0x001EA870 */

loc_0027F412: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027F41E; /* jne: not equal / not zero */

loc_0027F419: ;
    eax = MEM32(0x46A3C8);

loc_0027F41E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0027F427u); RECOMP_ABI_CALL(0x002071E0u, sub_002071E0); /* call 0x002071E0 */

loc_0027F427: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027F448; /* jne: not equal / not zero */

loc_0027F42B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027F446; /* je: equal / zero */

loc_0027F42F: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027F446; /* jne: not equal / not zero */

loc_0027F43F: ;
    ecx = esi;
    PUSH32(esp, 0x0027F446u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027F446: ;
    esi = 0; /* xor self */

loc_0027F448: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    edi = MEM32(esp + 0x14);
    MEM32(edi) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0027F455; /* je: equal / zero */

loc_0027F452: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027F455: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027F470; /* je: equal / zero */

loc_0027F459: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027F470; /* jne: not equal / not zero */

loc_0027F469: ;
    ecx = ebx;
    PUSH32(esp, 0x0027F470u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027F470: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027F48B; /* je: equal / zero */

loc_0027F474: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027F48B; /* jne: not equal / not zero */

loc_0027F484: ;
    ecx = esi;
    PUSH32(esp, 0x0027F48Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027F48B: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0027F4A0
 * Original: 0x0027F4A0 - 0x0027F532 (146 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027F4A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0027F4A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x74);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_0027F529; /* jne: not equal / not zero */

loc_0027F4AE: ;
    eax = MEM32(edi + 0x6C);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x70);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0027F500; /* je: equal / zero */

loc_0027F4B9: ;
    /* nop */

loc_0027F4C0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0027F500; /* je: equal / zero */

loc_0027F4C4: ;
    ecx = MEM32(edi + 0x74);
    MEM32(esp + 8) = esi;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0027F4DCu); RECOMP_ABI_CALL(0x00200E60u, sub_00200E60); /* call 0x00200E60 */

loc_0027F4DC: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0027F4E5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027F4E5: ;
    ecx = MEM32(0x5BDA40);
    esi = eax;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0027F4F5u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0027F4F5: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    esi = esi & eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x6C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x6C) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0027F4C0; /* jne: not equal / not zero */

loc_0027F500: ;
    eax = MEM32(edi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    ecx = MEM32(edi + 0x74);
    MEM32(esp + 8) = eax;
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0027F512; /* je: equal / zero */

loc_0027F50F: ;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027F512: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0027F520u); RECOMP_ABI_CALL(0x00200E60u, sub_00200E60); /* call 0x00200E60 */

loc_0027F520: ;
    eax = MEM32(edi + 0x74);
    eax = MEM32(eax + 8);
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0027F529: ;
    ecx = MEM32(edi + 0x74);
    eax = MEM32(ecx + 8);
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0027F540
 * Original: 0x0027F540 - 0x0027F89E (862 bytes, 217 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027F540(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027F540: ;
    esp = esp - 0x264;
    eax = MEM32(ecx + 0x1C);
    edx = MEM32(eax + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 8) = edx;
    MEM32(esp + 4) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0027F897; /* jle: less or equal (signed <=) */

loc_0027F562: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0027F566: ;
    esi = MEM32(ecx + 0x1C);
    esi = MEM32(esi + 0x10);
    ebp = MEM32(esi + eax * 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027F886; /* je: equal / zero */

loc_0027F577: ;
    ecx = ebp;
    PUSH32(esp, 0x0027F57Eu); RECOMP_ABI_CALL(0x0027F4A0u, sub_0027F4A0); /* call 0x0027F4A0 */

loc_0027F57E: ;
    ecx = MEM32(ebp + 0x74);
    ecx = MEM32(ecx + 0x10);
    edx = MEM32(ecx + eax * 4 + -4);
    eax = MEM32(0x5BD2A4);
    esi = MEM32(ecx);
    ebx = MEM32(ecx + 4);
    edi = MEM32(eax + 8);
    ecx = esp + 0x1F4;
    MEM32(esp + 0x10) = edx;
    edi = edi + esi;
    PUSH32(esp, 0x0027F5A7u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0027F5A7: ;
    eax = esi + 0x20;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x1FC;
    PUSH32(esp, 0x0027F5B8u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0027F5B8: ;
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    ecx = esp + 0x1F8;
    PUSH32(esp, 0x0027F5C9u); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_0027F5C9: ;
    edx = MEM32(esp + 0x74);
    eax = MEM32(esp + 0x78);
    ecx = MEM32(esp + 0x7C);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(0x5BD2A4);
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x3C) = eax;
    edi = MEM32(edx + 8);
    ecx = esp + 0x174;
    edi = edi + ebx;
    PUSH32(esp, 0x0027F5F8u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0027F5F8: ;
    PUSH32(esp, edi);
    eax = ebx + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x17C;
    PUSH32(esp, 0x0027F609u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0027F609: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    ecx = esp + 0x178;
    PUSH32(esp, 0x0027F61Au); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_0027F61A: ;
    edx = MEM32(esp + 0x50);
    eax = MEM32(esp + 0x54);
    ecx = MEM32(esp + 0x58);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(0x5BD2A4);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x2C) = eax;
    edi = MEM32(edx + 8);
    edi = edi + ecx;
    ecx = esp + 0x1B4;
    PUSH32(esp, 0x0027F64Du); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0027F64D: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    eax = eax + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x1BC;
    PUSH32(esp, 0x0027F662u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0027F662: ;
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = esp + 0x1B8;
    PUSH32(esp, 0x0027F673u); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_0027F673: ;
    eax = MEM32(esp + 0x48);
    edx = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x4C);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x5BD438);
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(eax + 8);
    edx = esp + 0x80;
    PUSH32(esp, edx);
    ecx = ecx + ebp;
    PUSH32(esp, 0x0027F6A2u); RECOMP_ABI_CALL(0x0023E480u, sub_0023E480); /* call 0x0023E480 */

loc_0027F6A2: ;
    ecx = esp + 0xF4;
    PUSH32(esp, 0x0027F6AEu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0027F6AE: ;
    ecx = MEM32(0x5BD2A4);
    edx = MEM32(ecx + 8);
    edx = edx + esi;
    PUSH32(esp, edx);
    eax = esp + 0x94;
    PUSH32(esp, eax);
    ecx = esp + 0xFC;
    PUSH32(esp, 0x0027F6CEu); RECOMP_ABI_CALL(0x00242F50u, sub_00242F50); /* call 0x00242F50 */

loc_0027F6CE: ;
    ecx = esp + 0xF4;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    ecx = esp + 0x40;
    PUSH32(esp, 0x0027F6E4u); RECOMP_ABI_CALL(0x0023FCF0u, sub_0023FCF0); /* call 0x0023FCF0 */

loc_0027F6E4: ;
    eax = esp + 0xF4;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = esp + 0x30;
    PUSH32(esp, 0x0027F6FAu); RECOMP_ABI_CALL(0x0023FCF0u, sub_0023FCF0); /* call 0x0023FCF0 */

loc_0027F6FA: ;
    edx = esp + 0xF4;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x0027F710u); RECOMP_ABI_CALL(0x0023FCF0u, sub_0023FCF0); /* call 0x0023FCF0 */

loc_0027F710: ;
    ecx = esp + 0xF4;
    PUSH32(esp, ecx);
    edx = esp + 0x84;
    PUSH32(esp, edx);
    ecx = esp + 0x88;
    PUSH32(esp, 0x0027F72Cu); RECOMP_ABI_CALL(0x0023FCF0u, sub_0023FCF0); /* call 0x0023FCF0 */

loc_0027F72C: ;
    eax = esp + 0xE4;
    PUSH32(esp, eax);
    ecx = esp + 0x98;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    edx = esp + 0x74;
    PUSH32(esp, edx);
    eax = esp + 0x90;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    MEM32(esp + 0x88) = 0;
    MEM32(esp + 0x8C) = 0;
    MEM32(esp + 0x90) = 0x3F800000;
    PUSH32(esp, 0x0027F780u); RECOMP_ABI_CALL(0x00269A00u, sub_00269A00); /* call 0x00269A00 */

loc_0027F780: ;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x158;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027F791u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0027F791: ;
    esp = esp + 0x28;
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    ecx = esp + 0x138;
    MEM32(esp + 0x60) = 0;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0;
    PUSH32(esp, 0x0027F7BDu); RECOMP_ABI_CALL(0x0023E460u, sub_0023E460); /* call 0x0023E460 */

loc_0027F7BD: ;
    ecx = esp + 0x234;
    PUSH32(esp, 0x0027F7C9u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0027F7C9: ;
    eax = esp + 0x134;
    PUSH32(esp, eax);
    ecx = esp + 0x90;
    PUSH32(esp, ecx);
    ecx = esp + 0x23C;
    PUSH32(esp, 0x0027F7E5u); RECOMP_ABI_CALL(0x00244690u, sub_00244690); /* call 0x00244690 */

loc_0027F7E5: ;
    edx = MEM32(0x5BCFA0);
    edi = MEM32(edx + 8);
    ecx = esp + 0xA4;
    edi = edi + esi;
    PUSH32(esp, 0x0027F7FCu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_0027F7FC: ;
    eax = esp + 0xA4;
    PUSH32(esp, eax);
    ecx = esp + 0x98;
    PUSH32(esp, 0x0027F810u); RECOMP_ABI_CALL(0x0023F4A0u, sub_0023F4A0); /* call 0x0023F4A0 */

loc_0027F810: ;
    ecx = esp + 0xA4;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = edi;
    PUSH32(esp, 0x0027F820u); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0027F820: ;
    edx = MEM32(0x5BCFA0);
    esi = MEM32(edx + 8);
    eax = esp + 0xA4;
    PUSH32(esp, eax);
    ecx = esp + 0xE8;
    esi = esi + ebx;
    PUSH32(esp, 0x0027F83Fu); RECOMP_ABI_CALL(0x0023F4A0u, sub_0023F4A0); /* call 0x0023F4A0 */

loc_0027F83F: ;
    ecx = esp + 0x134;
    PUSH32(esp, ecx);
    ecx = esp + 0xA8;
    PUSH32(esp, 0x0027F853u); RECOMP_ABI_CALL(0x00242660u, sub_00242660); /* call 0x00242660 */

loc_0027F853: ;
    edx = esp + 0x234;
    eax = esp + 0xA4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, 0x0027F86Au); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0027F86A: ;
    ecx = esp + 0xA4;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = esi;
    PUSH32(esp, 0x0027F87Au); RECOMP_ABI_CALL(0x00242470u, sub_00242470); /* call 0x00242470 */

loc_0027F87A: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x18);

loc_0027F886: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0027F566; /* jl: less (signed <) */

loc_0027F893: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0027F897: ;
    esp = esp + 0x264;
    esp += 4; return; /* ret */

}

/**
 * sub_0027F8A0
 * Original: 0x0027F8A0 - 0x0027F92C (140 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027F8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027F8A0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027F8B3; /* je: equal / zero */

loc_0027F8AC: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027F8B7; /* jne: not equal / not zero */

loc_0027F8B3: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0027F8B7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027F8C6u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027F8C6: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0027F8CEu); RECOMP_ABI_CALL(0x00279680u, sub_00279680); /* call 0x00279680 */

loc_0027F8CE: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027F8E0; /* jne: not equal / not zero */

loc_0027F8D4: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027F8DBu); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0027F8DB: ;
    esp = esp + 8;
    ebx = eax;

loc_0027F8E0: ;
    esi = MEM32(esi + 0x24);
    edi = MEM32(esi + 8);
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + edi * 4 + -4);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027F907; /* je: equal / zero */

loc_0027F8F2: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027F907; /* jne: not equal / not zero */

loc_0027F902: ;
    PUSH32(esp, 0x0027F907u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027F907: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0027F90Fu); RECOMP_ABI_CALL(0x001E7BB0u, sub_001E7BB0); /* call 0x001E7BB0 */

loc_0027F90F: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(edx + ecx * 4) = 0;
    POP32(esp, edi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 2;
    esp += 4; return; /* ret */

}

/**
 * sub_0027F930
 * Original: 0x0027F930 - 0x0027FA40 (272 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027F930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0027F930: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x4C);
    SET_LO8(eax, MEM8(esi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x54);
    if (TEST_Z(_fa, _fb)) goto loc_0027F992; /* je: equal / zero */

loc_0027F945: ;
    eax = MEM32(esi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0027F94Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027F94C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027F95D; /* jne: not equal / not zero */

loc_0027F954: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

loc_0027F95D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027F992; /* jne: not equal / not zero */

loc_0027F962: ;
    eax = MEM32(edi);
    ebx = MEM32(0x5BD9C8);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0027F96Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027F96F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027F992; /* je: equal / zero */

loc_0027F973: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027F97Au); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0027F97A: ;
    esp = esp + 8;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 2;
    eax = ecx;
    esp = esp + 0x40;
    esp += 4; return; /* ret */

loc_0027F992: ;
    edx = MEM32(esi);
    ebx = MEM32(edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0027F99Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027F99B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x94); PUSH32(esp, 0x0027F9A5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027F9A5: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027F9AEu); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027F9AE: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0027F9B6u); RECOMP_ABI_CALL(0x00279680u, sub_00279680); /* call 0x00279680 */

loc_0027F9B6: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027F9F1; /* jne: not equal / not zero */

loc_0027F9BC: ;
    ecx = MEM32(esi + 0x20);
    eax = edi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027F9C8u); RECOMP_ABI_CALL(0x001A62B0u, sub_001A62B0); /* call 0x001A62B0 */

loc_0027F9C8: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0027F9CFu); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0027F9CF: ;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(ecx + 0x10);
    ebx = eax;
    eax = MEM32(ecx + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 8) = eax;
    eax = eax << 6;
    eax = eax + edx;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0027F9EEu); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_0027F9EE: ;
    esp = esp + 0x10;

loc_0027F9F1: ;
    esi = MEM32(esi + 0x24);
    edi = MEM32(esi + 8);
    edx = MEM32(esi + 0x10);
    ecx = MEM32(edx + edi * 4 + -4);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027FA18; /* je: equal / zero */

loc_0027FA03: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027FA18; /* jne: not equal / not zero */

loc_0027FA13: ;
    PUSH32(esp, 0x0027FA18u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027FA18: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0027FA20u); RECOMP_ABI_CALL(0x001E7BB0u, sub_001E7BB0); /* call 0x001E7BB0 */

loc_0027FA20: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0x10);
    MEM32(ecx + eax * 4) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 2;
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_0027FA40
 * Original: 0x0027FA40 - 0x0027FD56 (790 bytes, 266 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027FA40(void)
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

loc_0027FA40: ;
    esp = esp - 0x38;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x44);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x48);
    SET_LO8(eax, MEM8(edi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027FAA3; /* je: equal / zero */

loc_0027FA55: ;
    eax = MEM32(edi + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0027FA5Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027FA5C: ;
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027FA6D; /* jne: not equal / not zero */

loc_0027FA64: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

loc_0027FA6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0027FAA3; /* jne: not equal / not zero */

loc_0027FA72: ;
    eax = MEM32(ebp);
    esi = MEM32(0x5BD9C8);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0027FA80u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027FA80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027FAA3; /* je: equal / zero */

loc_0027FA84: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0027FA8Bu); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_0027FA8B: ;
    esp = esp + 8;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 2;
    eax = ecx;
    esp = esp + 0x38;
    esp += 4; return; /* ret */

loc_0027FAA3: ;
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_0027FCEE; /* jne: not equal / not zero */

loc_0027FAAF: ;
    edx = MEM32(ebp + 0x20);
    ecx = MEM32(edx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x20) = 0x60AD78EC;
    MEM32(esp + 0x1C) = 0x60AD78EC;
    MEM32(esp + 0x18) = 0x60AD78EC;
    MEM32(esp + 0x2C) = 0xE0AD78ECu;
    MEM32(esp + 0x28) = 0xE0AD78ECu;
    MEM32(esp + 0x24) = 0xE0AD78ECu;
    MEM8(esp + 0x50) = 0;
    MEM32(esp + 0x10) = eax;
    if (CMP_BE(_fa & _fb, 0)) goto loc_0027FCEA; /* jbe: below or equal (unsigned <=) */

loc_0027FAFC: ;
    /* nop */

loc_0027FB00: ;
    ecx = MEM32(ebp + 0x20);
    edx = MEM32(ecx + 0x10);
    edi = MEM32(edx + eax * 4);
    eax = MEM32(0x5BE600);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0027FB16u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0027FB16: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027FB54; /* je: equal / zero */

loc_0027FB1A: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0027FB22u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027FB22: ;
    eax = MEM32(eax);
    ecx = eax;
    ecx = ecx >> 8;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027FC46; /* jne: not equal / not zero */

loc_0027FB32: ;
    eax = eax >> 4;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027FC46; /* jne: not equal / not zero */

loc_0027FB3D: ;
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM8(esp + 0x5C) = 1;
    PUSH32(esp, 0x0027FB52u); RECOMP_ABI_CALL(0x00263670u, sub_00263670); /* call 0x00263670 */

loc_0027FB52: ;
    goto loc_0027FBB9;

loc_0027FB54: ;
    ecx = MEM32(0x5BE5F8);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0027FB62u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_0027FB62: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027FC46; /* je: equal / zero */

loc_0027FB6A: ;
    esi = MEM32(edi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027FB74; /* je: equal / zero */

loc_0027FB71: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027FB74: ;
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0x0027FB7Fu); RECOMP_ABI_CALL(0x001BB3D0u, sub_001BB3D0); /* call 0x001BB3D0 */

loc_0027FB7F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    ebx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0027FB9C; /* je: equal / zero */

loc_0027FB85: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027FB9C; /* jne: not equal / not zero */

loc_0027FB95: ;
    ecx = esi;
    PUSH32(esp, 0x0027FB9Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027FB9C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027FC46; /* je: equal / zero */

loc_0027FBA4: ;
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM8(esp + 0x5C) = 1;
    PUSH32(esp, 0x0027FBB9u); RECOMP_ABI_CALL(0x00263850u, sub_00263850); /* call 0x00263850 */

loc_0027FBB9: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    esp = esp + 0xC;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0027FBD3; /* jp: parity */

loc_0027FBCB: ;
    ecx = MEM32(esp + 0x30);
    MEM32(esp + 0x18) = ecx;

loc_0027FBD3: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027FBEA; /* jne: not equal / not zero */

loc_0027FBE2: ;
    edx = MEM32(esp + 0x3C);
    MEM32(esp + 0x24) = edx;

loc_0027FBEA: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0027FC01; /* jp: parity */

loc_0027FBF9: ;
    eax = MEM32(esp + 0x34);
    MEM32(esp + 0x1C) = eax;

loc_0027FC01: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027FC18; /* jne: not equal / not zero */

loc_0027FC10: ;
    ecx = MEM32(esp + 0x40);
    MEM32(esp + 0x28) = ecx;

loc_0027FC18: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0027FC2F; /* jp: parity */

loc_0027FC27: ;
    edx = MEM32(esp + 0x38);
    MEM32(esp + 0x20) = edx;

loc_0027FC2F: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x2c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0027FC46; /* jne: not equal / not zero */

loc_0027FC3E: ;
    eax = MEM32(esp + 0x44);
    MEM32(esp + 0x2C) = eax;

loc_0027FC46: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0027FB00; /* jb: below (unsigned <) */

loc_0027FC5B: ;
    SET_LO8(eax, MEM8(esp + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027FD4C; /* je: equal / zero */

loc_0027FC67: ;
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, 0x0027FC70u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027FC70: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027FC76u); RECOMP_ABI_CALL(0x00246D40u, sub_00246D40); /* call 0x00246D40 */

loc_0027FC76: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    esi = eax;
    eax = MEM32(esp + 0x24);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(esi + 0xC) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(esp + 0x30);
    esp = esp + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(esi + 0x14) = ecx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0x1C) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0027FCAC; /* je: equal / zero */

loc_0027FCA9: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027FCAC: ;
    ecx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027FCC8; /* je: equal / zero */

loc_0027FCB3: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027FCC8; /* jne: not equal / not zero */

loc_0027FCC3: ;
    PUSH32(esp, 0x0027FCC8u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027FCC8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(ebp + 0xC) = esi;
    if (TEST_Z(_fa, _fb)) goto loc_0027FD4C; /* je: equal / zero */

loc_0027FCCF: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027FCE6; /* jne: not equal / not zero */

loc_0027FCDF: ;
    ecx = esi;
    PUSH32(esp, 0x0027FCE6u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027FCE6: ;
    edi = MEM32(esp + 0x4C);

loc_0027FCEA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027FD4C; /* je: equal / zero */

loc_0027FCEE: ;
    ecx = MEM32(edi + 0x24);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0027FCF7u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0027FCF7: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0027FCFFu); RECOMP_ABI_CALL(0x00279680u, sub_00279680); /* call 0x00279680 */

loc_0027FCFF: ;
    esi = MEM32(edi + 0x24);
    edi = MEM32(esi + 8);
    ecx = MEM32(esi + 0x10);
    ecx = MEM32(ecx + edi * 4 + -4);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    ebx = eax;
    if (TEST_Z(_fa, _fb)) goto loc_0027FD28; /* je: equal / zero */

loc_0027FD13: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027FD28; /* jne: not equal / not zero */

loc_0027FD23: ;
    PUSH32(esp, 0x0027FD28u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027FD28: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0027FD30u); RECOMP_ABI_CALL(0x001E7BB0u, sub_001E7BB0); /* call 0x001E7BB0 */

loc_0027FD30: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    edx = MEM32(esi + 8);
    eax = MEM32(esi + 0x10);
    MEM32(eax + edx * 4) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0027FD4C; /* jne: not equal / not zero */

loc_0027FD42: ;
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

loc_0027FD4C: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0027FD60
 * Original: 0x0027FD60 - 0x002802BB (1371 bytes, 522 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0027FD60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0027FD60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0027FD71; /* je: equal / zero */

loc_0027FD6E: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027FD71: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027FD8D; /* je: equal / zero */

loc_0027FD78: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027FD8D; /* jne: not equal / not zero */

loc_0027FD88: ;
    PUSH32(esp, 0x0027FD8Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027FD8D: ;
    eax = edi;
    MEM32(esi + 0x2C) = edi;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027FEA7; /* je: equal / zero */

loc_0027FD9D: ;
    ecx = esi;
    PUSH32(esp, 0x0027FDA4u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027FDA4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027FDAAu); RECOMP_ABI_CALL(0x001DECD0u, sub_001DECD0); /* call 0x001DECD0 */

loc_0027FDAA: ;
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027FDB6; /* je: equal / zero */

loc_0027FDB3: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027FDB6: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027FDD2; /* je: equal / zero */

loc_0027FDBD: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027FDD2; /* jne: not equal / not zero */

loc_0027FDCD: ;
    PUSH32(esp, 0x0027FDD2u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027FDD2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esi + 0x40) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_0027FDF0; /* je: equal / zero */

loc_0027FDD9: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027FDF0; /* jne: not equal / not zero */

loc_0027FDE9: ;
    ecx = edi;
    PUSH32(esp, 0x0027FDF0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027FDF0: ;
    edx = MEM32(esi + 0x2C);
    edx = MEM32(edx + 8);
    eax = MEM32(edx + 0x14);
    ecx = MEM32(esi + 0x2C);
    ecx = MEM32(ecx + 8);
    edx = MEM32(edx + 0xC);
    edi = MEM32(esi + 0x40);
    ebx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = eax | 4;
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x0027FE13u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027FE13: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x54); PUSH32(esp, 0x0027FE19u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027FE19: ;
    ecx = MEM32(esi + 0x2C);
    edi = MEM32(ecx + 8);
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0027FE26u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027FE26: ;
    eax = MEM32(eax);
    ecx = esi;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0027FE33u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027FE33: ;
    PUSH32(esp, 0x251A40);
    ebx = eax;
    PUSH32(esp, 0x0027FE3Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0027FE3F: ;
    ecx = MEM32(0x5BD884);
    esp = esp + 4;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027FE4Eu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0027FE4E: ;
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(ecx + 8);
    ebx = eax;
    eax = MEM32(edx + 0xC);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_0027FE81; /* jbe: below or equal (unsigned <=) */

loc_0027FE5F: ;
    /* nop */

loc_0027FE60: ;
    edx = MEM32(esi + 0x40);
    eax = MEM32(ebx);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x0027FE73u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027FE73: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 0xC);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0027FE60; /* jb: below (unsigned <) */

loc_0027FE81: ;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x0027FE8Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0027FE8C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0027FEA7; /* je: equal / zero */

loc_0027FE90: ;
    ecx = MEM32(ebx + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebx + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027FEA7; /* jne: not equal / not zero */

loc_0027FEA0: ;
    ecx = ebx;
    PUSH32(esp, 0x0027FEA7u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027FEA7: ;
    eax = MEM32(esi + 0x2C);
    ebx = MEM32(eax + 0x14);
    ecx = esi;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x0027FEB8u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027FEB8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027FEBEu); RECOMP_ABI_CALL(0x0022E3A0u, sub_0022E3A0); /* call 0x0022E3A0 */

loc_0027FEBE: ;
    edi = eax;
    ebp = 0; /* xor self */
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027FECC; /* je: equal / zero */

loc_0027FEC9: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027FECC: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027FEE8; /* je: equal / zero */

loc_0027FED3: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027FEE8; /* jne: not equal / not zero */

loc_0027FEE3: ;
    PUSH32(esp, 0x0027FEE8u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027FEE8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(esi + 0x30) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0027FF06; /* je: equal / zero */

loc_0027FEEF: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027FF06; /* jne: not equal / not zero */

loc_0027FEFF: ;
    ecx = edi;
    PUSH32(esp, 0x0027FF06u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027FF06: ;
    ecx = esi;
    PUSH32(esp, 0x0027FF0Du); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027FF0D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027FF13u); RECOMP_ABI_CALL(0x0022E3A0u, sub_0022E3A0); /* call 0x0022E3A0 */

loc_0027FF13: ;
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027FF1F; /* je: equal / zero */

loc_0027FF1C: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027FF1F: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027FF3B; /* je: equal / zero */

loc_0027FF26: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027FF3B; /* jne: not equal / not zero */

loc_0027FF36: ;
    PUSH32(esp, 0x0027FF3Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027FF3B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(esi + 0x34) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0027FF59; /* je: equal / zero */

loc_0027FF42: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027FF59; /* jne: not equal / not zero */

loc_0027FF52: ;
    ecx = edi;
    PUSH32(esp, 0x0027FF59u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027FF59: ;
    ecx = esi;
    PUSH32(esp, 0x0027FF60u); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_0027FF60: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0027FF66u); RECOMP_ABI_CALL(0x0022AA30u, sub_0022AA30); /* call 0x0022AA30 */

loc_0027FF66: ;
    edi = eax;
    esp = esp + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027FF72; /* je: equal / zero */

loc_0027FF6F: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0027FF72: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0027FF8E; /* je: equal / zero */

loc_0027FF79: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027FF8E; /* jne: not equal / not zero */

loc_0027FF89: ;
    PUSH32(esp, 0x0027FF8Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027FF8E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(esi + 0x38) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0027FFAC; /* je: equal / zero */

loc_0027FF95: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0027FFAC; /* jne: not equal / not zero */

loc_0027FFA5: ;
    ecx = edi;
    PUSH32(esp, 0x0027FFACu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0027FFAC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    ecx = MEM32(esi + 0x30);
    if (CMP_L(_fas, _fbs)) goto loc_0027FFC5; /* jl: less (signed <) */

loc_0027FFB3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0027FFBD; /* jg: greater (signed >) */

loc_0027FFB8: ;
    MEM32(ecx + 8) = ebx;
    goto loc_0027FFC5;

loc_0027FFBD: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027FFC5u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0027FFC5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    ecx = MEM32(esi + 0x34);
    if (CMP_L(_fas, _fbs)) goto loc_0027FFDE; /* jl: less (signed <) */

loc_0027FFCC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0027FFD6; /* jg: greater (signed >) */

loc_0027FFD1: ;
    MEM32(ecx + 8) = ebx;
    goto loc_0027FFDE;

loc_0027FFD6: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027FFDEu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0027FFDE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    ecx = MEM32(esi + 0x38);
    if (CMP_L(_fas, _fbs)) goto loc_0027FFF7; /* jl: less (signed <) */

loc_0027FFE5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0027FFEF; /* jg: greater (signed >) */

loc_0027FFEA: ;
    MEM32(ecx + 8) = ebx;
    goto loc_0027FFF7;

loc_0027FFEF: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0027FFF7u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0027FFF7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028015B; /* jl: less (signed <) */

loc_00280002: ;
    ebx = 2;

loc_00280007: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028001F; /* je: equal / zero */

loc_00280011: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028001F; /* jl: less (signed <) */

loc_00280015: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0028001F; /* jge: greater or equal (signed >=) */

loc_00280019: ;
    ecx = MEM32(ecx + 0x10);
    MEM32(ecx + eax * 4) = ebp;

loc_0028001F: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280037; /* je: equal / zero */

loc_00280029: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280037; /* jl: less (signed <) */

loc_0028002D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280037; /* jge: greater or equal (signed >=) */

loc_00280031: ;
    edx = MEM32(ecx + 0x10);
    MEM32(edx + eax * 4) = ebp;

loc_00280037: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280050; /* je: equal / zero */

loc_00280041: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280050; /* jl: less (signed <) */

loc_00280045: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280050; /* jge: greater or equal (signed >=) */

loc_00280049: ;
    ecx = MEM32(ecx + 0x10);
    MEM8(eax + ecx) = 0;

loc_00280050: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028006C; /* je: equal / zero */

loc_0028005A: ;
    edi = ebx + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028006C; /* jl: less (signed <) */

loc_00280061: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0028006C; /* jge: greater or equal (signed >=) */

loc_00280065: ;
    edx = MEM32(ecx + 0x10);
    MEM32(edx + eax * 4 + 4) = ebp;

loc_0028006C: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280088; /* je: equal / zero */

loc_00280076: ;
    edi = ebx + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280088; /* jl: less (signed <) */

loc_0028007D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280088; /* jge: greater or equal (signed >=) */

loc_00280081: ;
    ecx = MEM32(ecx + 0x10);
    MEM32(ecx + eax * 4 + 4) = ebp;

loc_00280088: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800A5; /* je: equal / zero */

loc_00280092: ;
    edi = ebx + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002800A5; /* jl: less (signed <) */

loc_00280099: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002800A5; /* jge: greater or equal (signed >=) */

loc_0028009D: ;
    edx = MEM32(ecx + 0x10);
    MEM8(edx + eax + 1) = 0;

loc_002800A5: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800BE; /* je: equal / zero */

loc_002800AF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002800BE; /* jl: less (signed <) */

loc_002800B3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002800BE; /* jge: greater or equal (signed >=) */

loc_002800B7: ;
    ecx = MEM32(ecx + 0x10);
    MEM32(ecx + eax * 4 + 8) = ebp;

loc_002800BE: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800D7; /* je: equal / zero */

loc_002800C8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002800D7; /* jl: less (signed <) */

loc_002800CC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002800D7; /* jge: greater or equal (signed >=) */

loc_002800D0: ;
    edx = MEM32(ecx + 0x10);
    MEM32(edx + eax * 4 + 8) = ebp;

loc_002800D7: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800F1; /* je: equal / zero */

loc_002800E1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002800F1; /* jl: less (signed <) */

loc_002800E5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002800F1; /* jge: greater or equal (signed >=) */

loc_002800E9: ;
    ecx = MEM32(ecx + 0x10);
    MEM8(ecx + eax + 2) = 0;

loc_002800F1: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028010D; /* je: equal / zero */

loc_002800FB: ;
    edi = ebx + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028010D; /* jl: less (signed <) */

loc_00280102: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0028010D; /* jge: greater or equal (signed >=) */

loc_00280106: ;
    edx = MEM32(ecx + 0x10);
    MEM32(edx + eax * 4 + 0xC) = ebp;

loc_0028010D: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280129; /* je: equal / zero */

loc_00280117: ;
    edi = ebx + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280129; /* jl: less (signed <) */

loc_0028011E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280129; /* jge: greater or equal (signed >=) */

loc_00280122: ;
    ecx = MEM32(ecx + 0x10);
    MEM32(ecx + eax * 4 + 0xC) = ebp;

loc_00280129: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280146; /* je: equal / zero */

loc_00280133: ;
    edi = ebx + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280146; /* jl: less (signed <) */

loc_0028013A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280146; /* jge: greater or equal (signed >=) */

loc_0028013E: ;
    edx = MEM32(ecx + 0x10);
    MEM8(edx + eax + 3) = 0;

loc_00280146: ;
    ecx = MEM32(esp + 0x14);
    eax = eax + 4;
    ecx = ecx + 0xFFFFFFFDu;
    ebx = ebx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280007; /* jl: less (signed <) */

loc_0028015B: ;
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002801B1; /* jge: greater or equal (signed >=) */

loc_00280163: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028017B; /* je: equal / zero */

loc_0028016D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028017B; /* jl: less (signed <) */

loc_00280171: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0028017B; /* jge: greater or equal (signed >=) */

loc_00280175: ;
    ecx = MEM32(ecx + 0x10);
    MEM32(ecx + eax * 4) = ebp;

loc_0028017B: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280193; /* je: equal / zero */

loc_00280185: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280193; /* jl: less (signed <) */

loc_00280189: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280193; /* jge: greater or equal (signed >=) */

loc_0028018D: ;
    edx = MEM32(ecx + 0x10);
    MEM32(edx + eax * 4) = ebp;

loc_00280193: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002801AC; /* je: equal / zero */

loc_0028019D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002801AC; /* jl: less (signed <) */

loc_002801A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002801AC; /* jge: greater or equal (signed >=) */

loc_002801A5: ;
    ecx = MEM32(ecx + 0x10);
    MEM8(eax + ecx) = 0;

loc_002801AC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280163; /* jl: less (signed <) */

loc_002801B1: ;
    edi = MEM32(esi + 0x20);
    eax = MEM32(edi + 8);
    ebx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002801F7; /* jl: less (signed <) */

loc_002801C0: ;
    edx = MEM32(edi + 0x10);
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002801DE; /* je: equal / zero */

loc_002801C9: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002801DE; /* jne: not equal / not zero */

loc_002801D9: ;
    PUSH32(esp, 0x002801DEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002801DE: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x002801E6u); RECOMP_ABI_CALL(0x001E7BB0u, sub_001E7BB0); /* call 0x001E7BB0 */

loc_002801E6: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x10);
    MEM32(ecx + eax * 4) = ebp;
    edi = MEM32(esi + 0x20);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002801C0; /* jge: greater or equal (signed >=) */

loc_002801F7: ;
    ecx = esi;
    PUSH32(esp, 0x002801FEu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_002801FE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00280204u); RECOMP_ABI_CALL(0x002A0680u, sub_002A0680); /* call 0x002A0680 */

loc_00280204: ;
    ebx = MEM32(esi + 0x40);
    esp = esp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00280213; /* je: equal / zero */

loc_00280210: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00280213: ;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028022F; /* je: equal / zero */

loc_0028021A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028022F; /* jne: not equal / not zero */

loc_0028022A: ;
    PUSH32(esp, 0x0028022Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028022F: ;
    MEM32(edi + 0xC) = ebx;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(edx + 0xC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00280240u); RECOMP_ABI_CALL(0x0029C1C0u, sub_0029C1C0); /* call 0x0029C1C0 */

loc_00280240: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(eax + 0x30);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x2C);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00280259u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00280259: ;
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028026E; /* je: equal / zero */

loc_00280264: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028026E; /* je: equal / zero */

loc_00280269: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00280294; /* jne: not equal / not zero */

loc_0028026E: ;
    eax = MEM32(ecx + 0x2C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00280294; /* jbe: below or equal (unsigned <=) */

loc_00280277: ;
    edx = MEM32(ecx);
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0028027Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028027F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x98); PUSH32(esp, 0x00280289u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00280289: ;
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(ecx + 0x2C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00280277; /* jb: below (unsigned <) */

loc_00280294: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028029Du); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0028029D: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002802B4; /* jne: not equal / not zero */

loc_002802AD: ;
    ecx = edi;
    PUSH32(esp, 0x002802B4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002802B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00280007
 * Original: 0x00280007 - 0x002802BB (692 bytes, 270 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00280007(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00280007: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028001F; /* je: equal / zero */

loc_00280011: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028001F; /* jl: less (signed <) */

loc_00280015: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0028001F; /* jge: greater or equal (signed >=) */

loc_00280019: ;
    ecx = MEM32(ecx + 0x10);
    MEM32(ecx + eax * 4) = ebp;

loc_0028001F: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280037; /* je: equal / zero */

loc_00280029: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280037; /* jl: less (signed <) */

loc_0028002D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280037; /* jge: greater or equal (signed >=) */

loc_00280031: ;
    edx = MEM32(ecx + 0x10);
    MEM32(edx + eax * 4) = ebp;

loc_00280037: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280050; /* je: equal / zero */

loc_00280041: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280050; /* jl: less (signed <) */

loc_00280045: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280050; /* jge: greater or equal (signed >=) */

loc_00280049: ;
    ecx = MEM32(ecx + 0x10);
    MEM8(eax + ecx) = 0;

loc_00280050: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028006C; /* je: equal / zero */

loc_0028005A: ;
    edi = ebx + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028006C; /* jl: less (signed <) */

loc_00280061: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0028006C; /* jge: greater or equal (signed >=) */

loc_00280065: ;
    edx = MEM32(ecx + 0x10);
    MEM32(edx + eax * 4 + 4) = ebp;

loc_0028006C: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280088; /* je: equal / zero */

loc_00280076: ;
    edi = ebx + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280088; /* jl: less (signed <) */

loc_0028007D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280088; /* jge: greater or equal (signed >=) */

loc_00280081: ;
    ecx = MEM32(ecx + 0x10);
    MEM32(ecx + eax * 4 + 4) = ebp;

loc_00280088: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800A5; /* je: equal / zero */

loc_00280092: ;
    edi = ebx + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002800A5; /* jl: less (signed <) */

loc_00280099: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002800A5; /* jge: greater or equal (signed >=) */

loc_0028009D: ;
    edx = MEM32(ecx + 0x10);
    MEM8(edx + eax + 1) = 0;

loc_002800A5: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800BE; /* je: equal / zero */

loc_002800AF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002800BE; /* jl: less (signed <) */

loc_002800B3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002800BE; /* jge: greater or equal (signed >=) */

loc_002800B7: ;
    ecx = MEM32(ecx + 0x10);
    MEM32(ecx + eax * 4 + 8) = ebp;

loc_002800BE: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800D7; /* je: equal / zero */

loc_002800C8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002800D7; /* jl: less (signed <) */

loc_002800CC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002800D7; /* jge: greater or equal (signed >=) */

loc_002800D0: ;
    edx = MEM32(ecx + 0x10);
    MEM32(edx + eax * 4 + 8) = ebp;

loc_002800D7: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800F1; /* je: equal / zero */

loc_002800E1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002800F1; /* jl: less (signed <) */

loc_002800E5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002800F1; /* jge: greater or equal (signed >=) */

loc_002800E9: ;
    ecx = MEM32(ecx + 0x10);
    MEM8(ecx + eax + 2) = 0;

loc_002800F1: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028010D; /* je: equal / zero */

loc_002800FB: ;
    edi = ebx + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028010D; /* jl: less (signed <) */

loc_00280102: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0028010D; /* jge: greater or equal (signed >=) */

loc_00280106: ;
    edx = MEM32(ecx + 0x10);
    MEM32(edx + eax * 4 + 0xC) = ebp;

loc_0028010D: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280129; /* je: equal / zero */

loc_00280117: ;
    edi = ebx + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280129; /* jl: less (signed <) */

loc_0028011E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280129; /* jge: greater or equal (signed >=) */

loc_00280122: ;
    ecx = MEM32(ecx + 0x10);
    MEM32(ecx + eax * 4 + 0xC) = ebp;

loc_00280129: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280146; /* je: equal / zero */

loc_00280133: ;
    edi = ebx + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280146; /* jl: less (signed <) */

loc_0028013A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280146; /* jge: greater or equal (signed >=) */

loc_0028013E: ;
    edx = MEM32(ecx + 0x10);
    MEM8(edx + eax + 3) = 0;

loc_00280146: ;
    ecx = MEM32(esp + 0x14);
    eax = eax + 4;
    ecx = ecx + 0xFFFFFFFDu;
    ebx = ebx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280007; /* jl: less (signed <) */

loc_0028015B: ;
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002801B1; /* jge: greater or equal (signed >=) */

loc_00280163: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028017B; /* je: equal / zero */

loc_0028016D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028017B; /* jl: less (signed <) */

loc_00280171: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0028017B; /* jge: greater or equal (signed >=) */

loc_00280175: ;
    ecx = MEM32(ecx + 0x10);
    MEM32(ecx + eax * 4) = ebp;

loc_0028017B: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280193; /* je: equal / zero */

loc_00280185: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280193; /* jl: less (signed <) */

loc_00280189: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280193; /* jge: greater or equal (signed >=) */

loc_0028018D: ;
    edx = MEM32(ecx + 0x10);
    MEM32(edx + eax * 4) = ebp;

loc_00280193: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002801AC; /* je: equal / zero */

loc_0028019D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002801AC; /* jl: less (signed <) */

loc_002801A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002801AC; /* jge: greater or equal (signed >=) */

loc_002801A5: ;
    ecx = MEM32(ecx + 0x10);
    MEM8(eax + ecx) = 0;

loc_002801AC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280163; /* jl: less (signed <) */

loc_002801B1: ;
    edi = MEM32(esi + 0x20);
    eax = MEM32(edi + 8);
    ebx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002801F7; /* jl: less (signed <) */

loc_002801C0: ;
    edx = MEM32(edi + 0x10);
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002801DE; /* je: equal / zero */

loc_002801C9: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002801DE; /* jne: not equal / not zero */

loc_002801D9: ;
    PUSH32(esp, 0x002801DEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002801DE: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x002801E6u); RECOMP_ABI_CALL(0x001E7BB0u, sub_001E7BB0); /* call 0x001E7BB0 */

loc_002801E6: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x10);
    MEM32(ecx + eax * 4) = ebp;
    edi = MEM32(esi + 0x20);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002801C0; /* jge: greater or equal (signed >=) */

loc_002801F7: ;
    ecx = esi;
    PUSH32(esp, 0x002801FEu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_002801FE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00280204u); RECOMP_ABI_CALL(0x002A0680u, sub_002A0680); /* call 0x002A0680 */

loc_00280204: ;
    ebx = MEM32(esi + 0x40);
    esp = esp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00280213; /* je: equal / zero */

loc_00280210: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00280213: ;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028022F; /* je: equal / zero */

loc_0028021A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028022F; /* jne: not equal / not zero */

loc_0028022A: ;
    PUSH32(esp, 0x0028022Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028022F: ;
    MEM32(edi + 0xC) = ebx;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(edx + 0xC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00280240u); RECOMP_ABI_CALL(0x0029C1C0u, sub_0029C1C0); /* call 0x0029C1C0 */

loc_00280240: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(eax + 0x30);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x2C);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00280259u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00280259: ;
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028026E; /* je: equal / zero */

loc_00280264: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028026E; /* je: equal / zero */

loc_00280269: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00280294; /* jne: not equal / not zero */

loc_0028026E: ;
    eax = MEM32(ecx + 0x2C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00280294; /* jbe: below or equal (unsigned <=) */

loc_00280277: ;
    edx = MEM32(ecx);
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0028027Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028027F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x98); PUSH32(esp, 0x00280289u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00280289: ;
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(ecx + 0x2C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00280277; /* jb: below (unsigned <) */

loc_00280294: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028029Du); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0028029D: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002802B4; /* jne: not equal / not zero */

loc_002802AD: ;
    ecx = edi;
    PUSH32(esp, 0x002802B4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002802B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0028002B
 * Original: 0x0028002B - 0x002802BB (656 bytes, 255 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028002B(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028002B: ;
    if (_flags /* jl: less (signed <) */) goto loc_00280037;

loc_0028002D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280037; /* jge: greater or equal (signed >=) */

loc_00280031: ;
    edx = MEM32(ecx + 0x10);
    MEM32(edx + eax * 4) = ebp;

loc_00280037: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280050; /* je: equal / zero */

loc_00280041: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280050; /* jl: less (signed <) */

loc_00280045: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280050; /* jge: greater or equal (signed >=) */

loc_00280049: ;
    ecx = MEM32(ecx + 0x10);
    MEM8(eax + ecx) = 0;

loc_00280050: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028006C; /* je: equal / zero */

loc_0028005A: ;
    edi = ebx + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028006C; /* jl: less (signed <) */

loc_00280061: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0028006C; /* jge: greater or equal (signed >=) */

loc_00280065: ;
    edx = MEM32(ecx + 0x10);
    MEM32(edx + eax * 4 + 4) = ebp;

loc_0028006C: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280088; /* je: equal / zero */

loc_00280076: ;
    edi = ebx + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280088; /* jl: less (signed <) */

loc_0028007D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280088; /* jge: greater or equal (signed >=) */

loc_00280081: ;
    ecx = MEM32(ecx + 0x10);
    MEM32(ecx + eax * 4 + 4) = ebp;

loc_00280088: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800A5; /* je: equal / zero */

loc_00280092: ;
    edi = ebx + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002800A5; /* jl: less (signed <) */

loc_00280099: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002800A5; /* jge: greater or equal (signed >=) */

loc_0028009D: ;
    edx = MEM32(ecx + 0x10);
    MEM8(edx + eax + 1) = 0;

loc_002800A5: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800BE; /* je: equal / zero */

loc_002800AF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002800BE; /* jl: less (signed <) */

loc_002800B3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002800BE; /* jge: greater or equal (signed >=) */

loc_002800B7: ;
    ecx = MEM32(ecx + 0x10);
    MEM32(ecx + eax * 4 + 8) = ebp;

loc_002800BE: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800D7; /* je: equal / zero */

loc_002800C8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002800D7; /* jl: less (signed <) */

loc_002800CC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002800D7; /* jge: greater or equal (signed >=) */

loc_002800D0: ;
    edx = MEM32(ecx + 0x10);
    MEM32(edx + eax * 4 + 8) = ebp;

loc_002800D7: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800F1; /* je: equal / zero */

loc_002800E1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002800F1; /* jl: less (signed <) */

loc_002800E5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002800F1; /* jge: greater or equal (signed >=) */

loc_002800E9: ;
    ecx = MEM32(ecx + 0x10);
    MEM8(ecx + eax + 2) = 0;

loc_002800F1: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028010D; /* je: equal / zero */

loc_002800FB: ;
    edi = ebx + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028010D; /* jl: less (signed <) */

loc_00280102: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0028010D; /* jge: greater or equal (signed >=) */

loc_00280106: ;
    edx = MEM32(ecx + 0x10);
    MEM32(edx + eax * 4 + 0xC) = ebp;

loc_0028010D: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280129; /* je: equal / zero */

loc_00280117: ;
    edi = ebx + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280129; /* jl: less (signed <) */

loc_0028011E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280129; /* jge: greater or equal (signed >=) */

loc_00280122: ;
    ecx = MEM32(ecx + 0x10);
    MEM32(ecx + eax * 4 + 0xC) = ebp;

loc_00280129: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280146; /* je: equal / zero */

loc_00280133: ;
    edi = ebx + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280146; /* jl: less (signed <) */

loc_0028013A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280146; /* jge: greater or equal (signed >=) */

loc_0028013E: ;
    edx = MEM32(ecx + 0x10);
    MEM8(edx + eax + 3) = 0;

loc_00280146: ;
    ecx = MEM32(esp + 0x14);
    eax = eax + 4;
    ecx = ecx + 0xFFFFFFFDu;
    ebx = ebx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00280007(); return; } /* jl: less (signed <) */

loc_0028015B: ;
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002801B1; /* jge: greater or equal (signed >=) */

loc_00280163: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028017B; /* je: equal / zero */

loc_0028016D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028017B; /* jl: less (signed <) */

loc_00280171: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0028017B; /* jge: greater or equal (signed >=) */

loc_00280175: ;
    ecx = MEM32(ecx + 0x10);
    MEM32(ecx + eax * 4) = ebp;

loc_0028017B: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280193; /* je: equal / zero */

loc_00280185: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280193; /* jl: less (signed <) */

loc_00280189: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280193; /* jge: greater or equal (signed >=) */

loc_0028018D: ;
    edx = MEM32(ecx + 0x10);
    MEM32(edx + eax * 4) = ebp;

loc_00280193: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002801AC; /* je: equal / zero */

loc_0028019D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002801AC; /* jl: less (signed <) */

loc_002801A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002801AC; /* jge: greater or equal (signed >=) */

loc_002801A5: ;
    ecx = MEM32(ecx + 0x10);
    MEM8(eax + ecx) = 0;

loc_002801AC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280163; /* jl: less (signed <) */

loc_002801B1: ;
    edi = MEM32(esi + 0x20);
    eax = MEM32(edi + 8);
    ebx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002801F7; /* jl: less (signed <) */

loc_002801C0: ;
    edx = MEM32(edi + 0x10);
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002801DE; /* je: equal / zero */

loc_002801C9: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002801DE; /* jne: not equal / not zero */

loc_002801D9: ;
    PUSH32(esp, 0x002801DEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002801DE: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x002801E6u); RECOMP_ABI_CALL(0x001E7BB0u, sub_001E7BB0); /* call 0x001E7BB0 */

loc_002801E6: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x10);
    MEM32(ecx + eax * 4) = ebp;
    edi = MEM32(esi + 0x20);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002801C0; /* jge: greater or equal (signed >=) */

loc_002801F7: ;
    ecx = esi;
    PUSH32(esp, 0x002801FEu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_002801FE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00280204u); RECOMP_ABI_CALL(0x002A0680u, sub_002A0680); /* call 0x002A0680 */

loc_00280204: ;
    ebx = MEM32(esi + 0x40);
    esp = esp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00280213; /* je: equal / zero */

loc_00280210: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00280213: ;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028022F; /* je: equal / zero */

loc_0028021A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028022F; /* jne: not equal / not zero */

loc_0028022A: ;
    PUSH32(esp, 0x0028022Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028022F: ;
    MEM32(edi + 0xC) = ebx;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(edx + 0xC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00280240u); RECOMP_ABI_CALL(0x0029C1C0u, sub_0029C1C0); /* call 0x0029C1C0 */

loc_00280240: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(eax + 0x30);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x2C);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00280259u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00280259: ;
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028026E; /* je: equal / zero */

loc_00280264: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028026E; /* je: equal / zero */

loc_00280269: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00280294; /* jne: not equal / not zero */

loc_0028026E: ;
    eax = MEM32(ecx + 0x2C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00280294; /* jbe: below or equal (unsigned <=) */

loc_00280277: ;
    edx = MEM32(ecx);
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0028027Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028027F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x98); PUSH32(esp, 0x00280289u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00280289: ;
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(ecx + 0x2C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00280277; /* jb: below (unsigned <) */

loc_00280294: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028029Du); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0028029D: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002802B4; /* jne: not equal / not zero */

loc_002802AD: ;
    ecx = edi;
    PUSH32(esp, 0x002802B4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002802B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0028002D
 * Original: 0x0028002D - 0x002802BB (654 bytes, 254 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0028002D(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0028002D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280037; /* jge: greater or equal (signed >=) */

loc_00280031: ;
    edx = MEM32(ecx + 0x10);
    MEM32(edx + eax * 4) = ebp;

loc_00280037: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280050; /* je: equal / zero */

loc_00280041: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280050; /* jl: less (signed <) */

loc_00280045: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280050; /* jge: greater or equal (signed >=) */

loc_00280049: ;
    ecx = MEM32(ecx + 0x10);
    MEM8(eax + ecx) = 0;

loc_00280050: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028006C; /* je: equal / zero */

loc_0028005A: ;
    edi = ebx + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028006C; /* jl: less (signed <) */

loc_00280061: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0028006C; /* jge: greater or equal (signed >=) */

loc_00280065: ;
    edx = MEM32(ecx + 0x10);
    MEM32(edx + eax * 4 + 4) = ebp;

loc_0028006C: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280088; /* je: equal / zero */

loc_00280076: ;
    edi = ebx + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280088; /* jl: less (signed <) */

loc_0028007D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280088; /* jge: greater or equal (signed >=) */

loc_00280081: ;
    ecx = MEM32(ecx + 0x10);
    MEM32(ecx + eax * 4 + 4) = ebp;

loc_00280088: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800A5; /* je: equal / zero */

loc_00280092: ;
    edi = ebx + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002800A5; /* jl: less (signed <) */

loc_00280099: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002800A5; /* jge: greater or equal (signed >=) */

loc_0028009D: ;
    edx = MEM32(ecx + 0x10);
    MEM8(edx + eax + 1) = 0;

loc_002800A5: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800BE; /* je: equal / zero */

loc_002800AF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002800BE; /* jl: less (signed <) */

loc_002800B3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002800BE; /* jge: greater or equal (signed >=) */

loc_002800B7: ;
    ecx = MEM32(ecx + 0x10);
    MEM32(ecx + eax * 4 + 8) = ebp;

loc_002800BE: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800D7; /* je: equal / zero */

loc_002800C8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002800D7; /* jl: less (signed <) */

loc_002800CC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002800D7; /* jge: greater or equal (signed >=) */

loc_002800D0: ;
    edx = MEM32(ecx + 0x10);
    MEM32(edx + eax * 4 + 8) = ebp;

loc_002800D7: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800F1; /* je: equal / zero */

loc_002800E1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002800F1; /* jl: less (signed <) */

loc_002800E5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002800F1; /* jge: greater or equal (signed >=) */

loc_002800E9: ;
    ecx = MEM32(ecx + 0x10);
    MEM8(ecx + eax + 2) = 0;

loc_002800F1: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028010D; /* je: equal / zero */

loc_002800FB: ;
    edi = ebx + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028010D; /* jl: less (signed <) */

loc_00280102: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0028010D; /* jge: greater or equal (signed >=) */

loc_00280106: ;
    edx = MEM32(ecx + 0x10);
    MEM32(edx + eax * 4 + 0xC) = ebp;

loc_0028010D: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280129; /* je: equal / zero */

loc_00280117: ;
    edi = ebx + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280129; /* jl: less (signed <) */

loc_0028011E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280129; /* jge: greater or equal (signed >=) */

loc_00280122: ;
    ecx = MEM32(ecx + 0x10);
    MEM32(ecx + eax * 4 + 0xC) = ebp;

loc_00280129: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280146; /* je: equal / zero */

loc_00280133: ;
    edi = ebx + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280146; /* jl: less (signed <) */

loc_0028013A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280146; /* jge: greater or equal (signed >=) */

loc_0028013E: ;
    edx = MEM32(ecx + 0x10);
    MEM8(edx + eax + 3) = 0;

loc_00280146: ;
    ecx = MEM32(esp + 0x14);
    eax = eax + 4;
    ecx = ecx + 0xFFFFFFFDu;
    ebx = ebx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00280007(); return; } /* jl: less (signed <) */

loc_0028015B: ;
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002801B1; /* jge: greater or equal (signed >=) */

loc_00280163: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028017B; /* je: equal / zero */

loc_0028016D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028017B; /* jl: less (signed <) */

loc_00280171: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0028017B; /* jge: greater or equal (signed >=) */

loc_00280175: ;
    ecx = MEM32(ecx + 0x10);
    MEM32(ecx + eax * 4) = ebp;

loc_0028017B: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280193; /* je: equal / zero */

loc_00280185: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280193; /* jl: less (signed <) */

loc_00280189: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280193; /* jge: greater or equal (signed >=) */

loc_0028018D: ;
    edx = MEM32(ecx + 0x10);
    MEM32(edx + eax * 4) = ebp;

loc_00280193: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002801AC; /* je: equal / zero */

loc_0028019D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002801AC; /* jl: less (signed <) */

loc_002801A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002801AC; /* jge: greater or equal (signed >=) */

loc_002801A5: ;
    ecx = MEM32(ecx + 0x10);
    MEM8(eax + ecx) = 0;

loc_002801AC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280163; /* jl: less (signed <) */

loc_002801B1: ;
    edi = MEM32(esi + 0x20);
    eax = MEM32(edi + 8);
    ebx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002801F7; /* jl: less (signed <) */

loc_002801C0: ;
    edx = MEM32(edi + 0x10);
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002801DE; /* je: equal / zero */

loc_002801C9: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002801DE; /* jne: not equal / not zero */

loc_002801D9: ;
    PUSH32(esp, 0x002801DEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002801DE: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x002801E6u); RECOMP_ABI_CALL(0x001E7BB0u, sub_001E7BB0); /* call 0x001E7BB0 */

loc_002801E6: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x10);
    MEM32(ecx + eax * 4) = ebp;
    edi = MEM32(esi + 0x20);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002801C0; /* jge: greater or equal (signed >=) */

loc_002801F7: ;
    ecx = esi;
    PUSH32(esp, 0x002801FEu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_002801FE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00280204u); RECOMP_ABI_CALL(0x002A0680u, sub_002A0680); /* call 0x002A0680 */

loc_00280204: ;
    ebx = MEM32(esi + 0x40);
    esp = esp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00280213; /* je: equal / zero */

loc_00280210: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00280213: ;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028022F; /* je: equal / zero */

loc_0028021A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028022F; /* jne: not equal / not zero */

loc_0028022A: ;
    PUSH32(esp, 0x0028022Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028022F: ;
    MEM32(edi + 0xC) = ebx;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(edx + 0xC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00280240u); RECOMP_ABI_CALL(0x0029C1C0u, sub_0029C1C0); /* call 0x0029C1C0 */

loc_00280240: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(eax + 0x30);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x2C);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00280259u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00280259: ;
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028026E; /* je: equal / zero */

loc_00280264: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028026E; /* je: equal / zero */

loc_00280269: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00280294; /* jne: not equal / not zero */

loc_0028026E: ;
    eax = MEM32(ecx + 0x2C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00280294; /* jbe: below or equal (unsigned <=) */

loc_00280277: ;
    edx = MEM32(ecx);
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0028027Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028027F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x98); PUSH32(esp, 0x00280289u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00280289: ;
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(ecx + 0x2C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00280277; /* jb: below (unsigned <) */

loc_00280294: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028029Du); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0028029D: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002802B4; /* jne: not equal / not zero */

loc_002802AD: ;
    ecx = edi;
    PUSH32(esp, 0x002802B4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002802B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00280068
 * Original: 0x00280068 - 0x002802BB (595 bytes, 230 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00280068(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00280068: ;
    MEM32(edx + eax * 4 + 4) = ebp;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280088; /* je: equal / zero */

loc_00280076: ;
    edi = ebx + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280088; /* jl: less (signed <) */

loc_0028007D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280088; /* jge: greater or equal (signed >=) */

loc_00280081: ;
    ecx = MEM32(ecx + 0x10);
    MEM32(ecx + eax * 4 + 4) = ebp;

loc_00280088: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800A5; /* je: equal / zero */

loc_00280092: ;
    edi = ebx + -1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002800A5; /* jl: less (signed <) */

loc_00280099: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002800A5; /* jge: greater or equal (signed >=) */

loc_0028009D: ;
    edx = MEM32(ecx + 0x10);
    MEM8(edx + eax + 1) = 0;

loc_002800A5: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800BE; /* je: equal / zero */

loc_002800AF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002800BE; /* jl: less (signed <) */

loc_002800B3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002800BE; /* jge: greater or equal (signed >=) */

loc_002800B7: ;
    ecx = MEM32(ecx + 0x10);
    MEM32(ecx + eax * 4 + 8) = ebp;

loc_002800BE: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800D7; /* je: equal / zero */

loc_002800C8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002800D7; /* jl: less (signed <) */

loc_002800CC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002800D7; /* jge: greater or equal (signed >=) */

loc_002800D0: ;
    edx = MEM32(ecx + 0x10);
    MEM32(edx + eax * 4 + 8) = ebp;

loc_002800D7: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002800F1; /* je: equal / zero */

loc_002800E1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002800F1; /* jl: less (signed <) */

loc_002800E5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002800F1; /* jge: greater or equal (signed >=) */

loc_002800E9: ;
    ecx = MEM32(ecx + 0x10);
    MEM8(ecx + eax + 2) = 0;

loc_002800F1: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028010D; /* je: equal / zero */

loc_002800FB: ;
    edi = ebx + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028010D; /* jl: less (signed <) */

loc_00280102: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0028010D; /* jge: greater or equal (signed >=) */

loc_00280106: ;
    edx = MEM32(ecx + 0x10);
    MEM32(edx + eax * 4 + 0xC) = ebp;

loc_0028010D: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280129; /* je: equal / zero */

loc_00280117: ;
    edi = ebx + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280129; /* jl: less (signed <) */

loc_0028011E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280129; /* jge: greater or equal (signed >=) */

loc_00280122: ;
    ecx = MEM32(ecx + 0x10);
    MEM32(ecx + eax * 4 + 0xC) = ebp;

loc_00280129: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280146; /* je: equal / zero */

loc_00280133: ;
    edi = ebx + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280146; /* jl: less (signed <) */

loc_0028013A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280146; /* jge: greater or equal (signed >=) */

loc_0028013E: ;
    edx = MEM32(ecx + 0x10);
    MEM8(edx + eax + 3) = 0;

loc_00280146: ;
    ecx = MEM32(esp + 0x14);
    eax = eax + 4;
    ecx = ecx + 0xFFFFFFFDu;
    ebx = ebx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00280007(); return; } /* jl: less (signed <) */

loc_0028015B: ;
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002801B1; /* jge: greater or equal (signed >=) */

loc_00280163: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028017B; /* je: equal / zero */

loc_0028016D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028017B; /* jl: less (signed <) */

loc_00280171: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0028017B; /* jge: greater or equal (signed >=) */

loc_00280175: ;
    ecx = MEM32(ecx + 0x10);
    MEM32(ecx + eax * 4) = ebp;

loc_0028017B: ;
    ecx = MEM32(esi + 0x34);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00280193; /* je: equal / zero */

loc_00280185: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280193; /* jl: less (signed <) */

loc_00280189: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280193; /* jge: greater or equal (signed >=) */

loc_0028018D: ;
    edx = MEM32(ecx + 0x10);
    MEM32(edx + eax * 4) = ebp;

loc_00280193: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002801AC; /* je: equal / zero */

loc_0028019D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002801AC; /* jl: less (signed <) */

loc_002801A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002801AC; /* jge: greater or equal (signed >=) */

loc_002801A5: ;
    ecx = MEM32(ecx + 0x10);
    MEM8(eax + ecx) = 0;

loc_002801AC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280163; /* jl: less (signed <) */

loc_002801B1: ;
    edi = MEM32(esi + 0x20);
    eax = MEM32(edi + 8);
    ebx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002801F7; /* jl: less (signed <) */

loc_002801C0: ;
    edx = MEM32(edi + 0x10);
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002801DE; /* je: equal / zero */

loc_002801C9: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002801DE; /* jne: not equal / not zero */

loc_002801D9: ;
    PUSH32(esp, 0x002801DEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002801DE: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x002801E6u); RECOMP_ABI_CALL(0x001E7BB0u, sub_001E7BB0); /* call 0x001E7BB0 */

loc_002801E6: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 0x10);
    MEM32(ecx + eax * 4) = ebp;
    edi = MEM32(esi + 0x20);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002801C0; /* jge: greater or equal (signed >=) */

loc_002801F7: ;
    ecx = esi;
    PUSH32(esp, 0x002801FEu); RECOMP_ABI_CALL(0x001EABE0u, sub_001EABE0); /* call 0x001EABE0 */

loc_002801FE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00280204u); RECOMP_ABI_CALL(0x002A0680u, sub_002A0680); /* call 0x002A0680 */

loc_00280204: ;
    ebx = MEM32(esi + 0x40);
    esp = esp + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00280213; /* je: equal / zero */

loc_00280210: ;
    MEM32(ebx + 4) = MEM32(ebx + 4) + 1;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00280213: ;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028022F; /* je: equal / zero */

loc_0028021A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0028022F; /* jne: not equal / not zero */

loc_0028022A: ;
    PUSH32(esp, 0x0028022Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0028022F: ;
    MEM32(edi + 0xC) = ebx;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(edx + 0xC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00280240u); RECOMP_ABI_CALL(0x0029C1C0u, sub_0029C1C0); /* call 0x0029C1C0 */

loc_00280240: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(eax + 0x30);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x2C);
    eax = MEM32(eax + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00280259u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00280259: ;
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028026E; /* je: equal / zero */

loc_00280264: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0028026E; /* je: equal / zero */

loc_00280269: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00280294; /* jne: not equal / not zero */

loc_0028026E: ;
    eax = MEM32(ecx + 0x2C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00280294; /* jbe: below or equal (unsigned <=) */

loc_00280277: ;
    edx = MEM32(ecx);
    ebp = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0028027Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028027F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebp + 0x98); PUSH32(esp, 0x00280289u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00280289: ;
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(ecx + 0x2C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00280277; /* jb: below (unsigned <) */

loc_00280294: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028029Du); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_0028029D: ;
    ecx = MEM32(edi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(edi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002802B4; /* jne: not equal / not zero */

loc_002802AD: ;
    ecx = edi;
    PUSH32(esp, 0x002802B4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002802B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002802C0
 * Original: 0x002802C0 - 0x002802F3 (51 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002802C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002802C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x3C);
    ebx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002802ED; /* jle: less or equal (signed <=) */

loc_002802D1: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);

loc_002802D6: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + esi * 4);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x002802E7u); RECOMP_ABI_CALL(0x0027A460u, sub_0027A460); /* call 0x0027A460 */

loc_002802E7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002802D6; /* jl: less (signed <) */

loc_002802EC: ;
    POP32(esp, ebp);

loc_002802ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00280300
 * Original: 0x00280300 - 0x0028033D (61 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00280300(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00280300: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00280311; /* je: equal / zero */

loc_0028030C: ;
    edi = MEM32(eax + 8);
    goto loc_00280313;

loc_00280311: ;
    edi = 0; /* xor self */

loc_00280313: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00280337; /* jle: less or equal (signed <=) */

loc_00280319: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    edi = edi;

loc_00280320: ;
    eax = MEM32(ebx + 0x1C);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + esi * 4);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x00280331u); RECOMP_ABI_CALL(0x0027A460u, sub_0027A460); /* call 0x0027A460 */

loc_00280331: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280320; /* jl: less (signed <) */

loc_00280336: ;
    POP32(esp, ebp);

loc_00280337: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00280340
 * Original: 0x00280340 - 0x00280373 (51 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00280340(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00280340: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x54);
    ebx = MEM32(eax + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0028036D; /* jle: less or equal (signed <=) */

loc_00280351: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);

loc_00280356: ;
    ecx = MEM32(edi + 0x54);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(edx + esi * 4);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00280367u); RECOMP_ABI_CALL(0x0027A460u, sub_0027A460); /* call 0x0027A460 */

loc_00280367: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280356; /* jl: less (signed <) */

loc_0028036C: ;
    POP32(esp, ebp);

loc_0028036D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00280380
 * Original: 0x00280380 - 0x002805AB (555 bytes, 176 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00280380(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00280380: ;
    esp = esp - 0x30;
    eax = MEM32(0x5BDC9C);
    ecx = MEM32(0x5BDDFC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028039Au); RECOMP_ABI_CALL(0x001EAB70u, sub_001EAB70); /* call 0x001EAB70 */

loc_0028039A: ;
    ecx = MEM32(0x5BDC9C);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BDE00);
    PUSH32(esp, 0x002803AEu); RECOMP_ABI_CALL(0x001EAB70u, sub_001EAB70); /* call 0x001EAB70 */

loc_002803AE: ;
    edx = MEM32(0x5BDA28);
    eax = MEM32(0x5BDAA0);
    ecx = MEM32(0x5BD9CC);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(0x5BDAFC);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(0x5BDB0C);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(0x5BD950);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(0x5BD948);
    edi = 0; /* xor self */
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x10) = edi;
    goto loc_00280400;

    /* nop */

loc_00280400: ;
    esi = MEM32(esp + edi * 4 + 0x20);
    ecx = esi;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0x0028040Fu); RECOMP_ABI_CALL(0x001EA500u, sub_001EA500); /* call 0x001EA500 */

loc_0028040F: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00280494; /* jle: less or equal (signed <=) */

loc_00280419: ;
    goto loc_00280420;

loc_0028041B: ;
    esi = MEM32(esp + 0x14);
    /* nop */

loc_00280420: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00280428u); RECOMP_ABI_CALL(0x001F7A50u, sub_001F7A50); /* call 0x001F7A50 */

loc_00280428: ;
    edi = MEM32(0x5BDDFC);
    ebx = eax;
    eax = MEM32(0x5BD9C8);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0028043Du); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_0028043D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00280487; /* je: equal / zero */

loc_00280441: ;
    esi = MEM32(ebx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0028044E; /* jge: greater or equal (signed >=) */

loc_00280448: ;
    esi = MEM32(edi + 8);
    MEM32(ebx + 8) = esi;

loc_0028044E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028046E; /* jl: less (signed <) */

loc_00280453: ;
    eax = esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0028046E; /* jl: less (signed <) */

loc_0028045A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00280464; /* jg: greater (signed >) */

loc_0028045F: ;
    MEM32(edi + 8) = eax;
    goto loc_0028046E;

loc_00280464: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0028046Eu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0028046E: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00280487; /* je: equal / zero */

loc_00280475: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00280487; /* jl: less (signed <) */

loc_00280479: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280487; /* jge: greater or equal (signed >=) */

loc_0028047D: ;
    ecx = MEM32(edi + 0x10);
    MEM32(ecx + esi * 4) = 0x27A530;

loc_00280487: ;
    eax = MEM32(esp + 0x18);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028041B; /* jl: less (signed <) */

loc_00280490: ;
    edi = MEM32(esp + 0x10);

loc_00280494: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 7 (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00280400; /* jl: less (signed <) */

loc_002804A2: ;
    edx = MEM32(0x5BD9CC);
    ecx = MEM32(0x5BDAFC);
    eax = 0x27A530;
    MEM32(esp + 0x20) = edx;
    edx = MEM32(0x5BDB0C);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x34) = eax;
    eax = MEM32(0x5BDAA0);
    edi = 0; /* xor self */
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = 0x24BC20;
    MEM32(esp + 0x10) = edi;
    goto loc_002804F0;

    /* nop */

loc_002804F0: ;
    esi = MEM32(esp + edi * 8 + 0x20);
    ecx = esi;
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0x002804FFu); RECOMP_ABI_CALL(0x001EA500u, sub_001EA500); /* call 0x001EA500 */

loc_002804FF: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00280595; /* jle: less or equal (signed <=) */

loc_0028050D: ;
    ecx = MEM32(esp + edi * 8 + 0x24);
    MEM32(esp + 0x14) = ecx;
    goto loc_00280520;

loc_00280517: ;
    esi = MEM32(esp + 0x18);
    goto loc_00280520;

    /* nop */

loc_00280520: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00280528u); RECOMP_ABI_CALL(0x001F7A50u, sub_001F7A50); /* call 0x001F7A50 */

loc_00280528: ;
    edx = MEM32(0x5BD9C8);
    edi = MEM32(0x5BDE00);
    ebx = eax;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0028053Eu); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_0028053E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00280588; /* je: equal / zero */

loc_00280542: ;
    esi = MEM32(ebx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0028054F; /* jge: greater or equal (signed >=) */

loc_00280549: ;
    esi = MEM32(edi + 8);
    MEM32(ebx + 8) = esi;

loc_0028054F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0028056F; /* jl: less (signed <) */

loc_00280554: ;
    eax = esi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0028056F; /* jl: less (signed <) */

loc_0028055B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00280565; /* jg: greater (signed >) */

loc_00280560: ;
    MEM32(edi + 8) = eax;
    goto loc_0028056F;

loc_00280565: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0028056Fu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0028056F: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00280588; /* je: equal / zero */

loc_00280576: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00280588; /* jl: less (signed <) */

loc_0028057A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280588; /* jge: greater or equal (signed >=) */

loc_0028057E: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(esp + 0x14);
    MEM32(eax + esi * 4) = ecx;

loc_00280588: ;
    eax = MEM32(esp + 0x1C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280517; /* jl: less (signed <) */

loc_00280591: ;
    edi = MEM32(esp + 0x10);

loc_00280595: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_002804F0; /* jl: less (signed <) */

loc_002805A3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_002805B0
 * Original: 0x002805B0 - 0x002807BE (526 bytes, 184 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002805B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002805B0: ;
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x24));
    esp = esp - 0x24;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(esp + 0x2C);
    eax = MEM32(eax + 0x2C);
    PUSH32(esp, ebp);
    ebp = MEM32(edx + 0x34);
    edx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(edx + 8);
    MEM32(esp + 0x24) = eax;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x28) = esi;
    MEM8(esp + 0xB) = LO8(eax);
    MEM32(esp + 0xC) = edx;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002807AF; /* jle: less or equal (signed <=) */

loc_002805EC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    goto loc_002805F4;

loc_002805F0: ;
    ecx = MEM32(esp + 0x1C);

loc_002805F4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_002807AD; /* jne: not equal / not zero */

loc_002805FC: ;
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax + edx * 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x18) = 0;
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00280695; /* jle: less or equal (signed <=) */

loc_0028061C: ;
    goto loc_00280622;

loc_0028061E: ;
    eax = MEM32(esp + 0x20);

loc_00280622: ;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(esp + 0x18);
    ebx = MEM32(ecx + edx * 4);
    eax = (uint32_t)(int32_t)SMEM16(ebx + 8);
    ecx = MEM32(ebp + 0x44);
    edx = MEM32(ecx + eax * 4);
    edi = (uint32_t)(int32_t)SMEM16(ebx + 0xA);
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(edx)) >> 32) & 1);
    edi = edi + edx;
    edx = MEM32(ebp + 0x10);
    eax = MEM32(edx + 0x10);
    esi = MEM32(eax + edi * 4);
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00280652; /* jge: greater or equal (signed >=) */

loc_0028064C: ;
    ecx = MEM32(esi + 8);
    MEM32(esi + 0x18) = ecx;

loc_00280652: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x24) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00280666; /* jge: greater or equal (signed >=) */

loc_0028065E: ;
    edx = eax + 1;
    MEM32(esi + 8) = edx;
    goto loc_00280675;

loc_00280666: ;
    PUSH32(esp, 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00280671u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00280671: ;
    eax = MEM32(esp + 0x24);

loc_00280675: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    MEM32(ecx + eax * 4) = ebx;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x00280684u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_00280684: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x28);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0028061E; /* jl: less (signed <) */

loc_00280695: ;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x14);
    esi = MEM32(ecx + 0x10);
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    edi = 1;
    edx = eax;
    if (LO8(ecx)) _cf = (int)(((edi) >> (32 - (LO8(ecx)))) & 1);
    edi = edi << LO8(ecx);
    if (5) _cf = (int)(((edx) >> ((5) - 1)) & 1);
    edx = edx >> 5;
    _fa = (uint32_t)(MEM32(esi + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + edx * 4), edi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_002806E3; /* je: equal / zero */

loc_002806B6: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(edx + 0x14);
    edx = MEM32(ecx + 0x10);
    esi = MEM32(edx + eax * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00280704; /* jne: not equal / not zero */

loc_002806C7: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002806D6u); RECOMP_ABI_CALL(0x0027A530u, sub_0027A530); /* call 0x0027A530 */

loc_002806D6: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002806E3; /* jne: not equal / not zero */

loc_002806DE: ;
    MEM8(esp + 0x13) = 1;

loc_002806E3: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x10);
    eax = MEM32(esp + 0x14);
    eax = MEM32(edx + eax * 4);
    ebx = MEM32(eax + 8);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = eax;
    if ((_fas < 0)) goto loc_00280794; /* js: sign (negative) */

loc_00280702: ;
    goto loc_00280733;

loc_00280704: ;
    eax = MEM32(esi + 8);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002806E3; /* jle: less or equal (signed <=) */

loc_0028070D: ;
    /* nop */

loc_00280710: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(edx + edi * 4);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00280720u); RECOMP_ABI_CALL(0x0027A460u, sub_0027A460); /* call 0x0027A460 */

loc_00280720: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002806DE; /* je: equal / zero */

loc_00280725: ;
    eax = MEM32(esi + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00280710; /* jl: less (signed <) */

loc_0028072D: ;
    goto loc_002806E3;

loc_0028072F: ;
    eax = MEM32(esp + 0x20);

loc_00280733: ;
    ecx = MEM32(eax + 0x10);
    eax = MEM32(ecx + ebx * 4);
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    ecx = MEM32(ebp + 0x44);
    esi = MEM32(ecx + edx * 4);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = MEM32(ebp + 0x10);
    ecx = MEM32(edx + 0x10);
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(esi)) >> 32) & 1);
    edi = edi + esi;
    esi = MEM32(ecx + edi * 4);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi + 8);
    edx = MEM32(ecx + edx * 4 + -4);
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00280771; /* je: equal / zero */

loc_00280763: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00280771; /* jne: not equal / not zero */

loc_00280767: ;
    eax = MEM32(ebp + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0028076Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028076E: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;

loc_00280771: ;
    edx = MEM32(esi + 8);
    ecx = MEM32(esi + 0x18);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00280788; /* jne: not equal / not zero */

loc_00280781: ;
    MEM32(esi + 0x18) = 0xFFFFFFFFu;

loc_00280788: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x00280791u); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_00280791: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0028072F; /* jns: not sign (positive) */

loc_00280794: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x30);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, MEM8(esp + 0x13));
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_002805F0; /* jl: less (signed <) */

loc_002807AD: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_002807AF: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _cf = 0; /* logical op clears CF */
    eax = eax & 2;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002807C0
 * Original: 0x002807C0 - 0x00280E07 (1607 bytes, 582 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002807C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002807C0: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x80));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    eax = MEM32(esi + 8);
    if (TEST_NZ(_fa, _fb)) goto loc_00280E00; /* jne: not equal / not zero */

loc_002807D7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM8(esi + 0x80) = 1;
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0x002807EEu); RECOMP_ABI_CALL(0x00263110u, sub_00263110); /* call 0x00263110 */

loc_002807EE: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(0x70) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 0x70 (8-bit) */
    edx = MEM32(esi + 0x1C);
    edi = MEM32(edx + 8);
    if (TEST_NZ(_fa, _fb)) goto loc_00280802; /* jne: not equal / not zero */

loc_002807FA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002808DE; /* je: equal / zero */

loc_00280802: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), edi (32-bit) */
    SET_LO8(ebx, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_0028084D; /* je: equal / zero */

loc_0028080C: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00280824; /* jl: less (signed <) */

loc_00280812: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0028081C; /* jg: greater (signed >) */

loc_00280817: ;
    MEM32(ecx + 8) = edi;
    goto loc_00280824;

loc_0028081C: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00280824u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00280824: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0028084D; /* jle: less or equal (signed <=) */

loc_0028082A: ;
    /* nop */

loc_00280830: ;
    edx = MEM32(esi + 0x3C);
    ecx = MEM32(edx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00280848; /* je: equal / zero */

loc_0028083A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00280848; /* jl: less (signed <) */

loc_0028083E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280848; /* jge: greater or equal (signed >=) */

loc_00280842: ;
    ecx = MEM32(edx + 0x10);
    MEM32(ecx + eax * 4) = eax;

loc_00280848: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280830; /* jl: less (signed <) */

loc_0028084D: ;
    edx = MEM32(esi + 0x1C);
    MEM32(0x5BDECC) = edx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00280871; /* je: equal / zero */

loc_0028085D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    ecx = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_0028086A; /* jne: not equal / not zero */

loc_00280863: ;
    PUSH32(esp, 0x00280868u); RECOMP_ABI_CALL(0x0026E6C0u, sub_0026E6C0); /* call 0x0026E6C0 */

loc_00280868: ;
    goto loc_0028089A;

loc_0028086A: ;
    PUSH32(esp, 0x0028086Fu); RECOMP_ABI_CALL(0x0026E720u, sub_0026E720); /* call 0x0026E720 */

loc_0028086F: ;
    goto loc_0028089A;

loc_00280871: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028087C; /* je: equal / zero */

loc_00280875: ;
    PUSH32(esp, 0x26DF80);
    goto loc_00280885;

loc_0028087C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028089A; /* je: equal / zero */

loc_00280880: ;
    PUSH32(esp, 0x26E000);

loc_00280885: ;
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00280897u); RECOMP_ABI_CALL(0x00342FD0u, sub_00342FD0); /* call 0x00342FD0 */

loc_00280897: ;
    esp = esp + 0x10;

loc_0028089A: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esi + 0x30);
    edx = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002808B2u); RECOMP_ABI_CALL(0x0026E090u, sub_0026E090); /* call 0x0026E090 */

loc_002808B2: ;
    ecx = MEM32(esi + 8);
    edi = MEM32(ecx + 0xC);
    ebx = MEM32(edi + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0xC) (32-bit) */
    ebp = MEM32(esi + 0x30);
    if (CMP_GE(_fas, _fbs)) goto loc_002808CB; /* jge: greater or equal (signed >=) */

loc_002808C3: ;
    edx = ebx + 1;
    MEM32(edi + 8) = edx;
    goto loc_002808D8;

loc_002808CB: ;
    PUSH32(esp, 4);
    eax = ebx + 1;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x002808D8u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_002808D8: ;
    ecx = MEM32(edi + 0x10);
    MEM32(ecx + ebx * 4) = ebp;

loc_002808DE: ;
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 5 (8-bit) */
    edx = MEM32(esi + 0x18);
    edi = MEM32(edx + 8);
    if (TEST_NZ(_fa, _fb)) goto loc_002808F2; /* jne: not equal / not zero */

loc_002808EA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00280CC0; /* je: equal / zero */

loc_002808F2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ecx = MEM32(esi + 0x38);
    if (TEST_S(_fas, _fbs)) goto loc_0028090B; /* jl: less (signed <) */

loc_002808F9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00280903; /* jg: greater (signed >) */

loc_002808FE: ;
    MEM32(ecx + 8) = edi;
    goto loc_0028090B;

loc_00280903: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028090Bu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_0028090B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0028092E; /* jle: less or equal (signed <=) */

loc_00280911: ;
    edx = MEM32(esi + 0x38);
    ecx = MEM32(edx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00280929; /* je: equal / zero */

loc_0028091B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00280929; /* jl: less (signed <) */

loc_0028091F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280929; /* jge: greater or equal (signed >=) */

loc_00280923: ;
    ecx = MEM32(edx + 0x10);
    MEM32(ecx + eax * 4) = eax;

loc_00280929: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280911; /* jl: less (signed <) */

loc_0028092E: ;
    edx = MEM32(esi + 0x18);
    MEM32(0x5BDECC) = edx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00280945; /* je: equal / zero */

loc_0028093E: ;
    PUSH32(esp, 0x26DF80);
    goto loc_0028094E;

loc_00280945: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00280963; /* je: equal / zero */

loc_00280949: ;
    PUSH32(esp, 0x26DFC0);

loc_0028094E: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0x10);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00280960u); RECOMP_ABI_CALL(0x00342FD0u, sub_00342FD0); /* call 0x00342FD0 */

loc_00280960: ;
    esp = esp + 0x10;

loc_00280963: ;
    eax = MEM32(esi + 0x4C);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00280C94; /* ja: above (unsigned >) */

loc_00280971: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x280E08); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00280978u) goto loc_00280978;
    if (_jt == 0x00280995u) goto loc_00280995;
    if (_jt == 0x002809E2u) goto loc_002809E2;
    if (_jt == 0x002809F0u) goto loc_002809F0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00280978: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00280990u); RECOMP_ABI_CALL(0x0026E090u, sub_0026E090); /* call 0x0026E090 */

loc_00280990: ;
    goto loc_00280C94;

loc_00280995: ;
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, 0x002809A1u); RECOMP_ABI_CALL(0x0025E4D0u, sub_0025E4D0); /* call 0x0025E4D0 */

loc_002809A1: ;
    edi = MEM32(esp + 0x24);
    edx = MEM32(esi + 0x2C);
    eax = MEM32(esi + 0x38);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002809B9u); RECOMP_ABI_CALL(0x0026E090u, sub_0026E090); /* call 0x0026E090 */

loc_002809B9: ;
    edx = MEM32(0x5BE62C);
    eax = MEM32(edx + 8);
    ecx = MEM32(edi + 0x44);
    edx = MEM32(ecx + eax * 4);
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + edx * 4);
    eax = MEM32(edx + 0x14);
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002809DDu); RECOMP_ABI_CALL(0x0025E4D0u, sub_0025E4D0); /* call 0x0025E4D0 */

loc_002809DD: ;
    goto loc_00280C94;

loc_002809E2: ;
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x2C);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x002809F0u); RECOMP_ABI_CALL(0x0025E4D0u, sub_0025E4D0); /* call 0x0025E4D0 */

loc_002809F0: ;
    edi = MEM32(esp + 0x24);
    edx = MEM32(esi + 0x2C);
    eax = MEM32(esi + 0x38);
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00280A08u); RECOMP_ABI_CALL(0x0026E090u, sub_0026E090); /* call 0x0026E090 */

loc_00280A08: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00280A30; /* je: equal / zero */

loc_00280A0C: ;
    edx = MEM32(0x5BE62C);
    eax = MEM32(edx + 8);
    ecx = MEM32(edi + 0x44);
    edx = MEM32(ecx + eax * 4);
    eax = MEM32(edi + 0x10);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + edx * 4);
    eax = MEM32(edx + 0x14);
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00280A30u); RECOMP_ABI_CALL(0x0025E4D0u, sub_0025E4D0); /* call 0x0025E4D0 */

loc_00280A30: ;
    PUSH32(esp, 0x00280A35u); RECOMP_ABI_CALL(0x00297350u, sub_00297350); /* call 0x00297350 */

loc_00280A35: ;
    ecx = MEM32(esi + 0x14);
    MEM32(esp + 0x18) = eax;
    eax = 0; /* xor self */
    MEM32(ecx + 8) = eax;
    edx = MEM32(esi + 0x2C);
    ecx = MEM32(edx + 0xC);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), eax (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00280C37; /* jle: less or equal (signed <=) */

loc_00280A58: ;
    goto loc_00280A60;

    /* nop */

loc_00280A60: ;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(edx + 0xC);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(esp + 0x14);
    ebp = MEM32(ecx + edx * 4);
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00280A78u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00280A78: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00280AB6; /* jne: not equal / not zero */

loc_00280A7E: ;
    edi = MEM32(esi + 0x14);
    ebx = MEM32(edi + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0xC) (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_GE(_fas, _fbs)) goto loc_00280A9E; /* jge: greater or equal (signed >=) */

loc_00280A8D: ;
    ecx = ebx + 1;
    MEM32(edi + 8) = ecx;
    eax = MEM32(edi + 0x10);
    MEM32(eax + ebx * 4) = ebp;
    goto loc_00280C1D;

loc_00280A9E: ;
    PUSH32(esp, 4);
    edx = ebx + 1;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00280AABu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00280AAB: ;
    eax = MEM32(edi + 0x10);
    MEM32(eax + ebx * 4) = ebp;
    goto loc_00280C1D;

loc_00280AB6: ;
    PUSH32(esp, 0x00280ABBu); RECOMP_ABI_CALL(0x00296D00u, sub_00296D00); /* call 0x00296D00 */

loc_00280ABB: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00280AC3u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00280AC3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00280AF4; /* jne: not equal / not zero */

loc_00280AC7: ;
    PUSH32(esp, 0x00280ACCu); RECOMP_ABI_CALL(0x00291E30u, sub_00291E30); /* call 0x00291E30 */

loc_00280ACC: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00280AD4u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00280AD4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00280AF4; /* jne: not equal / not zero */

loc_00280AD8: ;
    edi = MEM32(esi + 0x14);
    ebx = MEM32(edi + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280A9E; /* jge: greater or equal (signed >=) */

loc_00280AE3: ;
    ecx = ebx + 1;
    MEM32(edi + 8) = ecx;
    eax = MEM32(edi + 0x10);
    MEM32(eax + ebx * 4) = ebp;
    goto loc_00280C1D;

loc_00280AF4: ;
    edi = MEM32(esi + 0x14);
    ebx = MEM32(edi + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0xC) (32-bit) */
    ecx = MEM32(esi + 0x44);
    MEM32(esp + 0x1C) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_00280B0E; /* jge: greater or equal (signed >=) */

loc_00280B06: ;
    edx = ebx + 1;
    MEM32(edi + 8) = edx;
    goto loc_00280B1B;

loc_00280B0E: ;
    PUSH32(esp, 4);
    eax = ebx + 1;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00280B1Bu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00280B1B: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + ebx * 4) = edx;
    edi = MEM32(esi + 0x14);
    ebx = MEM32(edi + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280B38; /* jge: greater or equal (signed >=) */

loc_00280B30: ;
    eax = ebx + 1;
    MEM32(edi + 8) = eax;
    goto loc_00280B45;

loc_00280B38: ;
    PUSH32(esp, 4);
    ecx = ebx + 1;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00280B45u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00280B45: ;
    edx = MEM32(edi + 0x10);
    MEM32(edx + ebx * 4) = ebp;
    eax = MEM32(esi + 0x48);
    edi = MEM32(esi + 0x14);
    ebx = MEM32(edi + 8);
    MEM32(esp + 0x1C) = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280B65; /* jge: greater or equal (signed >=) */

loc_00280B5D: ;
    ecx = ebx + 1;
    MEM32(edi + 8) = ecx;
    goto loc_00280B72;

loc_00280B65: ;
    PUSH32(esp, 4);
    edx = ebx + 1;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00280B72u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00280B72: ;
    eax = MEM32(edi + 0x10);
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + ebx * 4) = ecx;
    edi = MEM32(esi + 0x14);
    ebx = MEM32(edi + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280B8F; /* jge: greater or equal (signed >=) */

loc_00280B87: ;
    edx = ebx + 1;
    MEM32(edi + 8) = edx;
    goto loc_00280B9C;

loc_00280B8F: ;
    PUSH32(esp, 4);
    eax = ebx + 1;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00280B9Cu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00280B9C: ;
    ecx = MEM32(edi + 0x10);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(ecx + ebx * 4) = ebp;
    edi = MEM32(esi + 0x14);
    ebx = MEM32(edi + 8);
    if (TEST_Z(_fa, _fb)) goto loc_00280BE0; /* je: equal / zero */

loc_00280BB0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280BC7; /* jge: greater or equal (signed >=) */

loc_00280BB5: ;
    ecx = MEM32(edi + 0x10);
    edx = ebx + 1;
    MEM32(edi + 8) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + ebx * 4) = edx;
    goto loc_00280C1D;

loc_00280BC7: ;
    PUSH32(esp, 4);
    eax = ebx + 1;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00280BD4u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00280BD4: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(esp + 0x10);
    MEM32(ecx + ebx * 4) = edx;
    goto loc_00280C1D;

loc_00280BE0: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(eax + 8);
    eax = MEM32(esp + 0x24);
    edx = MEM32(eax + 0x44);
    ecx = MEM32(edx + ecx * 4);
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + ecx * 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0xC) (32-bit) */
    ebp = MEM32(ecx + 0x14);
    if (CMP_GE(_fas, _fbs)) goto loc_00280C0A; /* jge: greater or equal (signed >=) */

loc_00280C02: ;
    edx = ebx + 1;
    MEM32(edi + 8) = edx;
    goto loc_00280C17;

loc_00280C0A: ;
    PUSH32(esp, 4);
    eax = ebx + 1;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00280C17u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00280C17: ;
    ecx = MEM32(edi + 0x10);
    MEM32(ecx + ebx * 4) = ebp;

loc_00280C1D: ;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(edx + 0xC);
    edx = MEM32(ecx + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00280A60; /* jl: less (signed <) */

loc_00280C37: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ecx = MEM32(esi + 0x2C);
    ecx = MEM32(ecx + 0xC);
    if (TEST_S(_fas, _fbs)) goto loc_00280C59; /* jl: less (signed <) */

loc_00280C47: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00280C51; /* jg: greater (signed >) */

loc_00280C4C: ;
    MEM32(ecx + 8) = eax;
    goto loc_00280C59;

loc_00280C51: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00280C59u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00280C59: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00280C94; /* jle: less or equal (signed <=) */

loc_00280C65: ;
    ecx = MEM32(esi + 0x2C);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00280C89; /* je: equal / zero */

loc_00280C72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00280C89; /* jl: less (signed <) */

loc_00280C76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280C89; /* jge: greater or equal (signed >=) */

loc_00280C7A: ;
    edx = MEM32(esi + 0x14);
    edx = MEM32(edx + 0x10);
    ecx = MEM32(ecx + 0x10);
    edx = MEM32(edx + eax * 4);
    MEM32(ecx + eax * 4) = edx;

loc_00280C89: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280C65; /* jl: less (signed <) */

loc_00280C94: ;
    edx = MEM32(esi + 8);
    edi = MEM32(edx + 0xC);
    ebx = MEM32(edi + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0xC) (32-bit) */
    ebp = MEM32(esi + 0x2C);
    if (CMP_GE(_fas, _fbs)) goto loc_00280CAD; /* jge: greater or equal (signed >=) */

loc_00280CA5: ;
    eax = ebx + 1;
    MEM32(edi + 8) = eax;
    goto loc_00280CBA;

loc_00280CAD: ;
    PUSH32(esp, 4);
    ecx = ebx + 1;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00280CBAu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00280CBA: ;
    edx = MEM32(edi + 0x10);
    MEM32(edx + ebx * 4) = ebp;

loc_00280CC0: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esi + 0x5C);
    edx = MEM32(esi + 0x58);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x54);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00280CD8u); RECOMP_ABI_CALL(0x0026E090u, sub_0026E090); /* call 0x0026E090 */

loc_00280CD8: ;
    ecx = MEM32(esi + 8);
    edi = MEM32(ecx + 0xC);
    ebx = MEM32(edi + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0xC) (32-bit) */
    ebp = MEM32(esi + 0x5C);
    if (CMP_GE(_fas, _fbs)) goto loc_00280CF1; /* jge: greater or equal (signed >=) */

loc_00280CE9: ;
    edx = ebx + 1;
    MEM32(edi + 8) = edx;
    goto loc_00280CFE;

loc_00280CF1: ;
    PUSH32(esp, 4);
    eax = ebx + 1;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00280CFEu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00280CFE: ;
    ecx = MEM32(edi + 0x10);
    MEM32(ecx + ebx * 4) = ebp;
    eax = MEM32(0x5BE65C);
    ecx = MEM32(eax + 8);
    edx = MEM32(esi + 8);
    edi = MEM32(edx + 0xC);
    eax = MEM32(esp + 0x24);
    edx = MEM32(eax + 0x44);
    ecx = MEM32(edx + ecx * 4);
    edx = MEM32(eax + 0x10);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(eax + ecx * 4);
    ebx = MEM32(edi + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0xC) (32-bit) */
    ebp = MEM32(ecx + 0x14);
    if (CMP_GE(_fas, _fbs)) goto loc_00280D38; /* jge: greater or equal (signed >=) */

loc_00280D30: ;
    edx = ebx + 1;
    MEM32(edi + 8) = edx;
    goto loc_00280D45;

loc_00280D38: ;
    PUSH32(esp, 4);
    eax = ebx + 1;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00280D45u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00280D45: ;
    ecx = MEM32(edi + 0x10);
    MEM32(ecx + ebx * 4) = ebp;
    edx = MEM32(esi + 0x20);
    edi = MEM32(edx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    ecx = MEM32(esi + 0x34);
    if (TEST_S(_fas, _fbs)) goto loc_00280D6A; /* jl: less (signed <) */

loc_00280D58: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00280D62; /* jg: greater (signed >) */

loc_00280D5D: ;
    MEM32(ecx + 8) = edi;
    goto loc_00280D6A;

loc_00280D62: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00280D6Au); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00280D6A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00280D8D; /* jle: less or equal (signed <=) */

loc_00280D70: ;
    edx = MEM32(esi + 0x34);
    ecx = MEM32(edx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00280D88; /* je: equal / zero */

loc_00280D7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00280D88; /* jl: less (signed <) */

loc_00280D7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00280D88; /* jge: greater or equal (signed >=) */

loc_00280D82: ;
    ecx = MEM32(edx + 0x10);
    MEM32(ecx + eax * 4) = eax;

loc_00280D88: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00280D70; /* jl: less (signed <) */

loc_00280D8D: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esi + 0x28);
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00280DA5u); RECOMP_ABI_CALL(0x0026E090u, sub_0026E090); /* call 0x0026E090 */

loc_00280DA5: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esi + 0x60);
    edx = MEM32(esi + 0x58);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x54);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00280DBDu); RECOMP_ABI_CALL(0x0026E090u, sub_0026E090); /* call 0x0026E090 */

loc_00280DBD: ;
    ecx = MEM32(esi + 0x28);
    edi = MEM32(ecx + 0xC);
    ebx = MEM32(edi + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0xC) (32-bit) */
    ebp = MEM32(esi + 0x60);
    if (CMP_GE(_fas, _fbs)) goto loc_00280DE7; /* jge: greater or equal (signed >=) */

loc_00280DCE: ;
    ecx = MEM32(edi + 0x10);
    edx = ebx + 1;
    MEM32(edi + 8) = edx;
    POP32(esp, edi);
    MEM32(ecx + ebx * 4) = ebp;
    eax = MEM32(esi + 8);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

loc_00280DE7: ;
    PUSH32(esp, 4);
    eax = ebx + 1;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00280DF4u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00280DF4: ;
    ecx = MEM32(edi + 0x10);
    MEM32(ecx + ebx * 4) = ebp;
    eax = MEM32(esi + 8);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00280E00: ;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00280E20
 * Original: 0x00280E20 - 0x00280EA0 (128 bytes, 63 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00280E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00280E20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00280E63; /* je: equal / zero */

loc_00280E2D: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00280E35u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00280E35: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00280E63; /* je: equal / zero */

loc_00280E39: ;
    ecx = MEM32(edi + 0x1C);
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x14) = esi;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00280E54u); RECOMP_ABI_CALL(0x00200E60u, sub_00200E60); /* call 0x00200E60 */

loc_00280E54: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00280E5Fu); RECOMP_ABI_CALL(0x0024E250u, sub_0024E250); /* call 0x0024E250 */

loc_00280E5F: ;
    SET_LO8(ebx, 1);
    goto loc_00280E65;

loc_00280E63: ;
    SET_LO8(ebx, 0); /* xor self */

loc_00280E65: ;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00280E80; /* je: equal / zero */

loc_00280E6C: ;
    eax = MEM32(eax + 8);
    ecx = MEM32(edi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00280E78u); RECOMP_ABI_CALL(0x002635A0u, sub_002635A0); /* call 0x002635A0 */

loc_00280E78: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00280E80: ;
    ecx = MEM32(edi + 0x20);
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00280E8Bu); RECOMP_ABI_CALL(0x002635A0u, sub_002635A0); /* call 0x002635A0 */

loc_00280E8B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00280EA0
 * Original: 0x00280EA0 - 0x00280F33 (147 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00280EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00280EA0: ;
    eax = MEM32(0x5BD9C8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00280EB4; /* je: equal / zero */

loc_00280EA9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00280EC6; /* jne: not equal / not zero */

loc_00280EB4: ;
    PUSH32(esp, 0x281490);
    PUSH32(esp, 0x00280EBEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00280EBE: ;
    eax = MEM32(0x5BD9C8);
    esp = esp + 4;

loc_00280EC6: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00280ED3u); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_00280ED3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00280F31; /* je: equal / zero */

loc_00280ED7: ;
    eax = MEM32(0x5BDA80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00280EEB; /* je: equal / zero */

loc_00280EE0: ;
    edx = MEM32(eax + 0x24);
    edx = edx >> 2;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00280EFD; /* jne: not equal / not zero */

loc_00280EEB: ;
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x00280EF5u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00280EF5: ;
    eax = MEM32(0x5BDA80);
    esp = esp + 4;

loc_00280EFD: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00280F05u); RECOMP_ABI_CALL(0x001EA4C0u, sub_001EA4C0); /* call 0x001EA4C0 */

loc_00280F05: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00280F1E; /* je: equal / zero */

loc_00280F09: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x27A530);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00280F19u); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_00280F19: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00280F1E: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x2123A0);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00280F2Eu); RECOMP_ABI_CALL(0x00270170u, sub_00270170); /* call 0x00270170 */

loc_00280F2E: ;
    esp = esp + 0xC;

loc_00280F31: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00280F40
 * Original: 0x00280F40 - 0x00280FDF (159 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00280F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00280F40: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x00280F4Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00280F4B: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(esi + 0x3C) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_00280FDB; /* je: equal / zero */

loc_00280F5A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00280F6Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00280F6A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC4); PUSH32(esp, 0x00280F75u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00280F75: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00280FC2; /* je: equal / zero */

loc_00280F7C: ;
    ecx = MEM32(0x5BC508);
    eax = MEM32(ecx + 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4056E0);
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    MEM8(esp + 0x24) = 0;
    PUSH32(esp, 0x00280FA0u); RECOMP_ABI_CALL(0x001A59B0u, sub_001A59B0); /* call 0x001A59B0 */

loc_00280FA0: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    esp = esp + 0x18;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ecx = esi;
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00280FB8; /* je: equal / zero */

loc_00280FAE: ;
    PUSH32(esp, 0x00280FB3u); RECOMP_ABI_CALL(0x0025DD80u, sub_0025DD80); /* call 0x0025DD80 */

loc_00280FB3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00280FB8: ;
    PUSH32(esp, 0x00280FBDu); RECOMP_ABI_CALL(0x0027A8F0u, sub_0027A8F0); /* call 0x0027A8F0 */

loc_00280FBD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00280FC2: ;
    _fa = (uint32_t)(MEM8(esi + 0x7C)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x7C), 0xFF (8-bit) */
    ecx = esi;
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00280FD5; /* je: equal / zero */

loc_00280FCB: ;
    PUSH32(esp, 0x00280FD0u); RECOMP_ABI_CALL(0x0025DA90u, sub_0025DA90); /* call 0x0025DA90 */

loc_00280FD0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00280FD5: ;
    PUSH32(esp, 0x00280FDAu); RECOMP_ABI_CALL(0x0025D840u, sub_0025D840); /* call 0x0025D840 */

loc_00280FDA: ;
    POP32(esp, edi);

loc_00280FDB: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00280FE0
 * Original: 0x00280FE0 - 0x00281027 (71 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00280FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00280FE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00280FFF; /* je: equal / zero */

loc_00280FEA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00280FFF; /* jne: not equal / not zero */

loc_00280FFA: ;
    PUSH32(esp, 0x00280FFFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00280FFF: ;
    eax = MEM32(esp + 0xC);
    edi = MEM32(eax);
    PUSH32(esp, 0x2606B0);
    PUSH32(esp, 0x0028100Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028100F: ;
    ecx = MEM32(0x5BDAA8);
    esp = esp + 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0028101Eu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0028101E: ;
    MEM32(esi) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00281030
 * Original: 0x00281030 - 0x00281083 (83 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281030: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    edx = MEM32(ebx + 0x44);
    PUSH32(esp, esi);
    esi = MEM32(edx + ecx * 4);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    eax = MEM32(ebx + 0x10);
    ecx = MEM32(eax + 0x10);
    edi = edi + esi;
    esi = MEM32(ecx + edi * 4);
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0028106D; /* je: equal / zero */

loc_00281059: ;
    edx = MEM32(ebx + 0x30);
    ecx = MEM32(esi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x10);
    ecx = MEM32(edx + ecx * 4 + -4);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0028106Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0028106A: ;
    esp = esp + 8;

loc_0028106D: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, edi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi + 8) = edx;
    PUSH32(esp, 0x0028107Du); RECOMP_ABI_CALL(0x00263520u, sub_00263520); /* call 0x00263520 */

loc_0028107D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00281090
 * Original: 0x00281090 - 0x00281112 (130 bytes, 37 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281090: ;
    esp = esp - 0xA0;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 8;
    PUSH32(esp, 0x002810A1u); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_002810A1: ;
    esi = 0; /* xor self */
    ecx = esp + 0x28;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 8) = 0x404CD8;
    PUSH32(esp, 0x002810C4u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_002810C4: ;
    ecx = esp + 0x68;
    PUSH32(esp, 0x002810CDu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_002810CD: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = MEM32(esp + ecx + 8);
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002810FE; /* je: equal / zero */

loc_002810E6: ;
    esi = MEM32(eax + 4);
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_002810FE; /* jne: not equal / not zero */

loc_002810F9: ;
    PUSH32(esp, 0x002810FEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002810FE: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00281107u); RECOMP_ABI_CALL(0x0019C0A0u, sub_0019C0A0); /* call 0x0019C0A0 */

loc_00281107: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xA0;
    esp += 4; return; /* ret */

}

/**
 * sub_00281120
 * Original: 0x00281120 - 0x00281144 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281120(void)
{

loc_00281120: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0028112Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0028112B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x404D70;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00281150
 * Original: 0x00281150 - 0x00281196 (70 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281150(void)
{

loc_00281150: ;
    esp = esp - 0x40;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0028115Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0028115D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x404DD0;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0028118Fu); RECOMP_ABI_CALL(0x0019C0A0u, sub_0019C0A0); /* call 0x0019C0A0 */

loc_0028118F: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_002811A0
 * Original: 0x002811A0 - 0x002811E4 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002811A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002811A0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002811B0; /* jne: not equal / not zero */

loc_002811A9: ;
    MEM8(0x5BDF6C) = 1;

loc_002811B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x249360);
    PUSH32(esp, 0x281150);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x4056F4);
    PUSH32(esp, 0x287D20);
    PUSH32(esp, 0x2491B0);
    PUSH32(esp, 0x289200);
    PUSH32(esp, 0x5BD8CC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002811E0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002811E0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002811F0
 * Original: 0x002811F0 - 0x002811FC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002811F0(void)
{

loc_002811F0: ;
    PUSH32(esp, 0x27B000);
    PUSH32(esp, 0x002811FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002811FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00281200
 * Original: 0x00281200 - 0x00281247 (71 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281200: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00281210; /* jne: not equal / not zero */

loc_00281209: ;
    MEM8(0x5BDF6C) = 1;

loc_00281210: ;
    PUSH32(esp, 0x471208);
    PUSH32(esp, 0);
    PUSH32(esp, 0x249590);
    PUSH32(esp, 0x25F2A0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x405708);
    PUSH32(esp, 0x250210);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BD908);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00281243u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00281243: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00281250
 * Original: 0x00281250 - 0x0028125C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281250(void)
{

loc_00281250: ;
    PUSH32(esp, 0x27B050);
    PUSH32(esp, 0x0028125Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028125A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00281260
 * Original: 0x00281260 - 0x0028126C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281260(void)
{

loc_00281260: ;
    PUSH32(esp, 0x27B0A0);
    PUSH32(esp, 0x0028126Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028126A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00281270
 * Original: 0x00281270 - 0x002812BA (74 bytes, 20 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281270(void)
{

loc_00281270: ;
    esp = esp - 0x24;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0028127Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0028127D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x404EA8;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x002812B3u); RECOMP_ABI_CALL(0x0019C0A0u, sub_0019C0A0); /* call 0x0019C0A0 */

loc_002812B3: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_002812C0
 * Original: 0x002812C0 - 0x00281316 (86 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002812C0(void)
{

loc_002812C0: ;
    esp = esp - 0x34;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x002812CDu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_002812CD: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x404F40;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0028130Fu); RECOMP_ABI_CALL(0x0027B130u, sub_0027B130); /* call 0x0027B130 */

loc_0028130F: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_00281320
 * Original: 0x00281320 - 0x0028132C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281320(void)
{

loc_00281320: ;
    PUSH32(esp, 0x27B1D0);
    PUSH32(esp, 0x0028132Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028132A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00281330
 * Original: 0x00281330 - 0x0028133C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281330(void)
{

loc_00281330: ;
    PUSH32(esp, 0x27B3C0);
    PUSH32(esp, 0x0028133Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028133A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00281340
 * Original: 0x00281340 - 0x0028134C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281340(void)
{

loc_00281340: ;
    PUSH32(esp, 0x27B4A0);
    PUSH32(esp, 0x0028134Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028134A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00281350
 * Original: 0x00281350 - 0x002813BE (110 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281350(void)
{

loc_00281350: ;
    esp = esp - 0x70;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0028135Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0028135D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x64) = eax;
    MEM32(esp + 0x68) = eax;
    MEM32(esp + 0x6C) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x405050;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x002813B7u); RECOMP_ABI_CALL(0x0027B600u, sub_0027B600); /* call 0x0027B600 */

loc_002813B7: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x70;
    esp += 4; return; /* ret */

}

/**
 * sub_002813C0
 * Original: 0x002813C0 - 0x00281404 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002813C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002813C0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002813D0; /* jne: not equal / not zero */

loc_002813C9: ;
    MEM8(0x5BDF6C) = 1;

loc_002813D0: ;
    PUSH32(esp, 0x471214);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2756D0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x405718);
    PUSH32(esp, 0x24F9E0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BD9B4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00281400u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00281400: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00281410
 * Original: 0x00281410 - 0x0028141C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281410(void)
{

loc_00281410: ;
    PUSH32(esp, 0x27B7C0);
    PUSH32(esp, 0x0028141Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028141A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00281420
 * Original: 0x00281420 - 0x00281464 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281420: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00281430; /* jne: not equal / not zero */

loc_00281429: ;
    MEM8(0x5BDF6C) = 1;

loc_00281430: ;
    PUSH32(esp, 0x47121C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x25F960);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x40572C);
    PUSH32(esp, 0x24F980);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BD9BC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00281460u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00281460: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00281470
 * Original: 0x00281470 - 0x0028148E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281470(void)
{

loc_00281470: ;
    PUSH32(esp, 0x275740);
    PUSH32(esp, 0x0028147Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028147A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BD9C0);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028148Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0028148D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00281490
 * Original: 0x00281490 - 0x002814D7 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281490: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002814A0; /* jne: not equal / not zero */

loc_00281499: ;
    MEM8(0x5BDF6C) = 1;

loc_002814A0: ;
    PUSH32(esp, 0x471224);
    PUSH32(esp, 0);
    PUSH32(esp, 0x249980);
    PUSH32(esp, 0x25F9A0);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x3F5F48);
    PUSH32(esp, 0x25E2F0);
    PUSH32(esp, 0x1A4460);
    PUSH32(esp, 0x226510);
    PUSH32(esp, 0x5BD9C8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002814D3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002814D3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002814E0
 * Original: 0x002814E0 - 0x002814EC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002814E0(void)
{

loc_002814E0: ;
    PUSH32(esp, 0x27B880);
    PUSH32(esp, 0x002814EAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002814EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002814F0
 * Original: 0x002814F0 - 0x002814FC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002814F0(void)
{

loc_002814F0: ;
    PUSH32(esp, 0x27B8D0);
    PUSH32(esp, 0x002814FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002814FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00281500
 * Original: 0x00281500 - 0x0028155E (94 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281500(void)
{

loc_00281500: ;
    esp = esp - 0x60;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x0028150Du); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0028150D: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x405118;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x00281557u); RECOMP_ABI_CALL(0x0027B930u, sub_0027B930); /* call 0x0027B930 */

loc_00281557: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x60;
    esp += 4; return; /* ret */

}

/**
 * sub_00281560
 * Original: 0x00281560 - 0x0028156C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281560(void)
{

loc_00281560: ;
    PUSH32(esp, 0x27B9B0);
    PUSH32(esp, 0x0028156Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028156A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00281570
 * Original: 0x00281570 - 0x002815B7 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281570: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00281580; /* jne: not equal / not zero */

loc_00281579: ;
    MEM8(0x5BDF6C) = 1;

loc_00281580: ;
    PUSH32(esp, 0x471230);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24A0D0);
    PUSH32(esp, 0x275AC0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x40573C);
    PUSH32(esp, 0x250030);
    PUSH32(esp, 0x19C050);
    PUSH32(esp, 0x281490);
    PUSH32(esp, 0x5BDA2C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002815B3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002815B3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002815C0
 * Original: 0x002815C0 - 0x00281616 (86 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002815C0(void)
{

loc_002815C0: ;
    esp = esp - 0x34;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x002815CDu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_002815CD: ;
    eax = 0; /* xor self */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x4051C8;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x0028160Fu); RECOMP_ABI_CALL(0x0027B130u, sub_0027B130); /* call 0x0027B130 */

loc_0028160F: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_00281620
 * Original: 0x00281620 - 0x00281667 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281620: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00281630; /* jne: not equal / not zero */

loc_00281629: ;
    MEM8(0x5BDF6C) = 1;

loc_00281630: ;
    PUSH32(esp, 0x471238);
    PUSH32(esp, 0);
    PUSH32(esp, 0x254F10);
    PUSH32(esp, 0x260400);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x405748);
    PUSH32(esp, 0x2509F0);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BDA70);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00281663u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00281663: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00281670
 * Original: 0x00281670 - 0x002816B7 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281670: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00281680; /* jne: not equal / not zero */

loc_00281679: ;
    MEM8(0x5BDF6C) = 1;

loc_00281680: ;
    PUSH32(esp, 0x471240);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24A650);
    PUSH32(esp, 0x275EB0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x405750);
    PUSH32(esp, 0x25E320);
    PUSH32(esp, 0x19C050);
    PUSH32(esp, 0x281490);
    PUSH32(esp, 0x5BDA80);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002816B3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002816B3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002816C0
 * Original: 0x002816C0 - 0x002816CC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002816C0(void)
{

loc_002816C0: ;
    PUSH32(esp, 0x27BDC0);
    PUSH32(esp, 0x002816CAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002816CA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002816D0
 * Original: 0x002816D0 - 0x002816F4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002816D0(void)
{

loc_002816D0: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x002816DBu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_002816DB: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x405288;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00281700
 * Original: 0x00281700 - 0x00281747 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281700: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00281710; /* jne: not equal / not zero */

loc_00281709: ;
    MEM8(0x5BDF6C) = 1;

loc_00281710: ;
    PUSH32(esp, 0x471248);
    PUSH32(esp, 0);
    PUSH32(esp, 0x255600);
    PUSH32(esp, 0x260630);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x405758);
    PUSH32(esp, 0x251320);
    PUSH32(esp, 0x249170);
    PUSH32(esp, 0x251D80);
    PUSH32(esp, 0x5BDAA4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00281743u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00281743: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00281750
 * Original: 0x00281750 - 0x00281797 (71 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281750: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00281760; /* jne: not equal / not zero */

loc_00281759: ;
    MEM8(0x5BDF6C) = 1;

loc_00281760: ;
    PUSH32(esp, 0x471250);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24A890);
    PUSH32(esp, 0x27BE30);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x405770);
    PUSH32(esp, 0x251500);
    PUSH32(esp, 0x19C140);
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x5BDAC0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00281793u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00281793: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002817A0
 * Original: 0x002817A0 - 0x002817AC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002817A0(void)
{

loc_002817A0: ;
    PUSH32(esp, 0x27BF50);
    PUSH32(esp, 0x002817AAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002817AA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002817B0
 * Original: 0x002817B0 - 0x002817BC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002817B0(void)
{

loc_002817B0: ;
    PUSH32(esp, 0x27BFA0);
    PUSH32(esp, 0x002817BAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002817BA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002817C0
 * Original: 0x002817C0 - 0x00281804 (68 bytes, 18 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002817C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002817C0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002817D0; /* jne: not equal / not zero */

loc_002817C9: ;
    MEM8(0x5BDF6C) = 1;

loc_002817D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x255F40);
    PUSH32(esp, 0x2614E0);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x40577C);
    PUSH32(esp, 0x251680);
    PUSH32(esp, 0x19C050);
    PUSH32(esp, 0x281490);
    PUSH32(esp, 0x5BDB04);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00281800u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00281800: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00281810
 * Original: 0x00281810 - 0x00281857 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281810: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00281820; /* jne: not equal / not zero */

loc_00281819: ;
    MEM8(0x5BDF6C) = 1;

loc_00281820: ;
    PUSH32(esp, 0x471258);
    PUSH32(esp, 0);
    PUSH32(esp, 0x256420);
    PUSH32(esp, 0x27C160);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x405788);
    PUSH32(esp, 0x251740);
    PUSH32(esp, 0x19C140);
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x5BDB28);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00281853u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00281853: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00281860
 * Original: 0x00281860 - 0x002818A7 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281860: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00281870; /* jne: not equal / not zero */

loc_00281869: ;
    MEM8(0x5BDF6C) = 1;

loc_00281870: ;
    PUSH32(esp, 0x471260);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24B0F0);
    PUSH32(esp, 0x276A50);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x405794);
    PUSH32(esp, 0x250150);
    PUSH32(esp, 0x19C140);
    PUSH32(esp, 0x281670);
    PUSH32(esp, 0x5BDB40);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002818A3u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002818A3: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002818B0
 * Original: 0x002818B0 - 0x002818BC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002818B0(void)
{

loc_002818B0: ;
    PUSH32(esp, 0x27C270);
    PUSH32(esp, 0x002818BAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002818BA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002818C0
 * Original: 0x002818C0 - 0x002818CC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002818C0(void)
{

loc_002818C0: ;
    PUSH32(esp, 0x27C2E0);
    PUSH32(esp, 0x002818CAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002818CA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002818D0
 * Original: 0x002818D0 - 0x00281914 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002818D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002818D0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002818E0; /* jne: not equal / not zero */

loc_002818D9: ;
    MEM8(0x5BDF6C) = 1;

loc_002818E0: ;
    PUSH32(esp, 0x471268);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x276C30);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x4057A0);
    PUSH32(esp, 0x251410);
    PUSH32(esp, 0x19C350);
    PUSH32(esp, 0x25F0F0);
    PUSH32(esp, 0x5BDB98);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00281910u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00281910: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00281920
 * Original: 0x00281920 - 0x00281964 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00281920: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00281930; /* jne: not equal / not zero */

loc_00281929: ;
    MEM8(0x5BDF6C) = 1;

loc_00281930: ;
    PUSH32(esp, 0x471270);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x276C90);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x4057C0);
    PUSH32(esp, 0x2513B0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BDBA0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00281960u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00281960: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00281970
 * Original: 0x00281970 - 0x0028198E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281970(void)
{

loc_00281970: ;
    PUSH32(esp, 0x276CC0);
    PUSH32(esp, 0x0028197Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0028197A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BDBA4);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0028198Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0028198D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00281990
 * Original: 0x00281990 - 0x002819B4 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281990(void)
{

loc_00281990: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x0028199Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_0028199B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x405388;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_002819C0
 * Original: 0x002819C0 - 0x002819CC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002819C0(void)
{

loc_002819C0: ;
    PUSH32(esp, 0x27C4F0);
    PUSH32(esp, 0x002819CAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002819CA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002819D0
 * Original: 0x002819D0 - 0x00281A14 (68 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002819D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002819D0: ;
    SET_LO8(eax, MEM8(0x5BDF6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002819E0; /* jne: not equal / not zero */

loc_002819D9: ;
    MEM8(0x5BDF6C) = 1;

loc_002819E0: ;
    PUSH32(esp, 0x471278);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x276E50);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x4057E0);
    PUSH32(esp, 0x250EA0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BDBCC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00281A10u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00281A10: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00281A20
 * Original: 0x00281A20 - 0x00281A2C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281A20(void)
{

loc_00281A20: ;
    PUSH32(esp, 0x27C560);
    PUSH32(esp, 0x00281A2Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00281A2A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00281A30
 * Original: 0x00281A30 - 0x00281A54 (36 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281A30(void)
{

loc_00281A30: ;
    esp = esp - 0x14;
    ecx = esp;
    PUSH32(esp, 0x00281A3Bu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00281A3B: ;
    eax = MEM32(0x5BC508);
    MEM32(esp) = 0x405540;
    ecx = MEM32(eax + 0x394);
    eax = MEM32(esp + ecx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00281A60
 * Original: 0x00281A60 - 0x00281A92 (50 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00281A60(void)
{

loc_00281A60: ;
    esp = esp - 0x90;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x00281A70u); RECOMP_ABI_CALL(0x0027C640u, sub_0027C640); /* call 0x0027C640 */

loc_00281A70: ;
    eax = MEM32(0x5BC508);
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x00281A88u); RECOMP_ABI_CALL(0x0027C6C0u, sub_0027C6C0); /* call 0x0027C6C0 */

loc_00281A88: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x90;
    esp += 4; return; /* ret */

}
