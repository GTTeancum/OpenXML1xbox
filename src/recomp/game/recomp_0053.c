/**
 * X-Men Legends - Recompiled code chunk 53
 * Functions: 250 (0x00223840 - 0x0022AEE0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00223840
 * Original: 0x00223840 - 0x00223874 (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223840(void)
{

loc_00223840: ;
    PUSH32(esp, 0x46B3F0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2196D0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x3F9870);
    PUSH32(esp, 0x1A46A0);
    PUSH32(esp, 0x1A4350);
    PUSH32(esp, 0x221CF0);
    PUSH32(esp, 0x5BC15C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00223870u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00223870: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00223880
 * Original: 0x00223880 - 0x002238B4 (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223880(void)
{

loc_00223880: ;
    PUSH32(esp, 0x46B3F8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x219730);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x3F9888);
    PUSH32(esp, 0x1A4BA0);
    PUSH32(esp, 0x1A4350);
    PUSH32(esp, 0x221CF0);
    PUSH32(esp, 0x5BC16C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002238B0u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002238B0: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002238C0
 * Original: 0x002238C0 - 0x0022390B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002238C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002238C0: ;
    eax = MEM32(0x5BC18C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022390A; /* jne: not equal / not zero */

loc_002238C9: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002238E2; /* jle: less or equal (signed <=) */

loc_002238D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002238E0; /* jge: greater or equal (signed >=) */

loc_002238D7: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_002238F0;

loc_002238E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_002238E2: ;
    if (TEST_NZ(_fa, _fb)) goto loc_002238EE; /* jne: not equal / not zero */

loc_002238E4: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002238F0; /* jne: not equal / not zero */

loc_002238EE: ;
    ecx = 0; /* xor self */

loc_002238F0: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x002238FCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002238FC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00223902u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00223902: ;
    esp = esp + 4;
    MEM32(0x5BC18C) = eax;

loc_0022390A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00223910
 * Original: 0x00223910 - 0x0022395B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00223910: ;
    eax = MEM32(0x5BC1A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022395A; /* jne: not equal / not zero */

loc_00223919: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00223932; /* jle: less or equal (signed <=) */

loc_00223922: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00223930; /* jge: greater or equal (signed >=) */

loc_00223927: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00223940;

loc_00223930: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00223932: ;
    if (TEST_NZ(_fa, _fb)) goto loc_0022393E; /* jne: not equal / not zero */

loc_00223934: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223940; /* jne: not equal / not zero */

loc_0022393E: ;
    ecx = 0; /* xor self */

loc_00223940: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0022394Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022394C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00223952u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00223952: ;
    esp = esp + 4;
    MEM32(0x5BC1A8) = eax;

loc_0022395A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00223960
 * Original: 0x00223960 - 0x002239AB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00223960: ;
    eax = MEM32(0x5BC1AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002239AA; /* jne: not equal / not zero */

loc_00223969: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00223982; /* jle: less or equal (signed <=) */

loc_00223972: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00223980; /* jge: greater or equal (signed >=) */

loc_00223977: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00223990;

loc_00223980: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00223982: ;
    if (TEST_NZ(_fa, _fb)) goto loc_0022398E; /* jne: not equal / not zero */

loc_00223984: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223990; /* jne: not equal / not zero */

loc_0022398E: ;
    ecx = 0; /* xor self */

loc_00223990: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x0022399Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022399C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002239A2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002239A2: ;
    esp = esp + 4;
    MEM32(0x5BC1AC) = eax;

loc_002239AA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002239B0
 * Original: 0x002239B0 - 0x002239FB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002239B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002239B0: ;
    eax = MEM32(0x5BC1B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002239FA; /* jne: not equal / not zero */

loc_002239B9: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002239D2; /* jle: less or equal (signed <=) */

loc_002239C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002239D0; /* jge: greater or equal (signed >=) */

loc_002239C7: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_002239E0;

loc_002239D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_002239D2: ;
    if (TEST_NZ(_fa, _fb)) goto loc_002239DE; /* jne: not equal / not zero */

loc_002239D4: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002239E0; /* jne: not equal / not zero */

loc_002239DE: ;
    ecx = 0; /* xor self */

loc_002239E0: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x002239ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002239EC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002239F2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002239F2: ;
    esp = esp + 4;
    MEM32(0x5BC1B0) = eax;

loc_002239FA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00223A00
 * Original: 0x00223A00 - 0x00223A3C (60 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223A00(void)
{

loc_00223A00: ;
    PUSH32(esp, 0x00223A05u); RECOMP_ABI_CALL(0x00227F90u, sub_00227F90); /* call 0x00227F90 */

loc_00223A05: ;
    PUSH32(esp, 0x46B400);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21FEB0);
    PUSH32(esp, 0x21B850);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x3F98A0);
    PUSH32(esp, 0x1F2210);
    PUSH32(esp, 0x1A4350);
    PUSH32(esp, 0x221CF0);
    PUSH32(esp, 0x5BC1B8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00223A38u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00223A38: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00223A40
 * Original: 0x00223A40 - 0x00223A8B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00223A40: ;
    eax = MEM32(0x5BC1C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223A8A; /* jne: not equal / not zero */

loc_00223A49: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00223A62; /* jle: less or equal (signed <=) */

loc_00223A52: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00223A60; /* jge: greater or equal (signed >=) */

loc_00223A57: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00223A70;

loc_00223A60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00223A62: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00223A6E; /* jne: not equal / not zero */

loc_00223A64: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223A70; /* jne: not equal / not zero */

loc_00223A6E: ;
    ecx = 0; /* xor self */

loc_00223A70: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00223A7Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00223A7C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00223A82u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00223A82: ;
    esp = esp + 4;
    MEM32(0x5BC1C0) = eax;

loc_00223A8A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00223A90
 * Original: 0x00223A90 - 0x00223AF0 (96 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223A90(void)
{

loc_00223A90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC1C0);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 4);
    PUSH32(esp, 0x46B438);
    ecx = esi;
    PUSH32(esp, 0x00223AADu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00223AAD: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebx = MEM32(edx + edi * 4 + 8);
    PUSH32(esp, 0x00223ABCu); RECOMP_ABI_CALL(0x00223180u, sub_00223180); /* call 0x00223180 */

loc_00223ABC: ;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebx = MEM32(ecx + edi * 4 + 0xC);
    PUSH32(esp, 0x00223AD2u); RECOMP_ABI_CALL(0x00223130u, sub_00223130); /* call 0x00223130 */

loc_00223AD2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46B428);
    PUSH32(esp, 0x46B418);
    PUSH32(esp, 0x46B408);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00223AECu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00223AEC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00223AF0
 * Original: 0x00223AF0 - 0x00223B3B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00223AF0: ;
    eax = MEM32(0x5BC1CC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223B3A; /* jne: not equal / not zero */

loc_00223AF9: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00223B12; /* jle: less or equal (signed <=) */

loc_00223B02: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00223B10; /* jge: greater or equal (signed >=) */

loc_00223B07: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00223B20;

loc_00223B10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00223B12: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00223B1E; /* jne: not equal / not zero */

loc_00223B14: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223B20; /* jne: not equal / not zero */

loc_00223B1E: ;
    ecx = 0; /* xor self */

loc_00223B20: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00223B2Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00223B2C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00223B32u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00223B32: ;
    esp = esp + 4;
    MEM32(0x5BC1CC) = eax;

loc_00223B3A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00223B40
 * Original: 0x00223B40 - 0x00223B8B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00223B40: ;
    eax = MEM32(0x5BC1D0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223B8A; /* jne: not equal / not zero */

loc_00223B49: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00223B62; /* jle: less or equal (signed <=) */

loc_00223B52: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00223B60; /* jge: greater or equal (signed >=) */

loc_00223B57: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00223B70;

loc_00223B60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00223B62: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00223B6E; /* jne: not equal / not zero */

loc_00223B64: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223B70; /* jne: not equal / not zero */

loc_00223B6E: ;
    ecx = 0; /* xor self */

loc_00223B70: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00223B7Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00223B7C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00223B82u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00223B82: ;
    esp = esp + 4;
    MEM32(0x5BC1D0) = eax;

loc_00223B8A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00223B90
 * Original: 0x00223B90 - 0x00223BDB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00223B90: ;
    eax = MEM32(0x5BC1F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223BDA; /* jne: not equal / not zero */

loc_00223B99: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00223BB2; /* jle: less or equal (signed <=) */

loc_00223BA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00223BB0; /* jge: greater or equal (signed >=) */

loc_00223BA7: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00223BC0;

loc_00223BB0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00223BB2: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00223BBE; /* jne: not equal / not zero */

loc_00223BB4: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223BC0; /* jne: not equal / not zero */

loc_00223BBE: ;
    ecx = 0; /* xor self */

loc_00223BC0: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00223BCCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00223BCC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00223BD2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00223BD2: ;
    esp = esp + 4;
    MEM32(0x5BC1F8) = eax;

loc_00223BDA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00223BE0
 * Original: 0x00223BE0 - 0x00223C2B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00223BE0: ;
    eax = MEM32(0x5BC204);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223C2A; /* jne: not equal / not zero */

loc_00223BE9: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00223C02; /* jle: less or equal (signed <=) */

loc_00223BF2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00223C00; /* jge: greater or equal (signed >=) */

loc_00223BF7: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00223C10;

loc_00223C00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00223C02: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00223C0E; /* jne: not equal / not zero */

loc_00223C04: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223C10; /* jne: not equal / not zero */

loc_00223C0E: ;
    ecx = 0; /* xor self */

loc_00223C10: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00223C1Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00223C1C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00223C22u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00223C22: ;
    esp = esp + 4;
    MEM32(0x5BC204) = eax;

loc_00223C2A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00223C30
 * Original: 0x00223C30 - 0x00223C7B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00223C30: ;
    eax = MEM32(0x5BC208);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223C7A; /* jne: not equal / not zero */

loc_00223C39: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00223C52; /* jle: less or equal (signed <=) */

loc_00223C42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00223C50; /* jge: greater or equal (signed >=) */

loc_00223C47: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00223C60;

loc_00223C50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00223C52: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00223C5E; /* jne: not equal / not zero */

loc_00223C54: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223C60; /* jne: not equal / not zero */

loc_00223C5E: ;
    ecx = 0; /* xor self */

loc_00223C60: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00223C6Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00223C6C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00223C72u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00223C72: ;
    esp = esp + 4;
    MEM32(0x5BC208) = eax;

loc_00223C7A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00223C80
 * Original: 0x00223C80 - 0x00223CCB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00223C80: ;
    eax = MEM32(0x5BC20C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223CCA; /* jne: not equal / not zero */

loc_00223C89: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00223CA2; /* jle: less or equal (signed <=) */

loc_00223C92: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00223CA0; /* jge: greater or equal (signed >=) */

loc_00223C97: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00223CB0;

loc_00223CA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00223CA2: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00223CAE; /* jne: not equal / not zero */

loc_00223CA4: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223CB0; /* jne: not equal / not zero */

loc_00223CAE: ;
    ecx = 0; /* xor self */

loc_00223CB0: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00223CBCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00223CBC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00223CC2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00223CC2: ;
    esp = esp + 4;
    MEM32(0x5BC20C) = eax;

loc_00223CCA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00223CD0
 * Original: 0x00223CD0 - 0x00223D54 (132 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223CD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00223CD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC210);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 3);
    PUSH32(esp, 0x46B46C);
    ecx = esi;
    PUSH32(esp, 0x00223CEEu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00223CEE: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4);
    eax = MEM32(ecx);
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00223D0Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00223D0C: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebp = MEM32(ecx + edi * 4 + 4);
    PUSH32(esp, 0x00223D1Bu); RECOMP_ABI_CALL(0x00223B40u, sub_00223B40); /* call 0x00223B40 */

loc_00223D1B: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebp = MEM32(eax + edi * 4 + 8);
    PUSH32(esp, 0x00223D31u); RECOMP_ABI_CALL(0x00223B40u, sub_00223B40); /* call 0x00223B40 */

loc_00223D31: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46B460);
    PUSH32(esp, 0x46B454);
    PUSH32(esp, 0x46B448);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    PUSH32(esp, 0x00223D4Fu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00223D4F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00223D60
 * Original: 0x00223D60 - 0x00223DAB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00223D60: ;
    eax = MEM32(0x5BC22C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223DAA; /* jne: not equal / not zero */

loc_00223D69: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00223D82; /* jle: less or equal (signed <=) */

loc_00223D72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00223D80; /* jge: greater or equal (signed >=) */

loc_00223D77: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00223D90;

loc_00223D80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00223D82: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00223D8E; /* jne: not equal / not zero */

loc_00223D84: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223D90; /* jne: not equal / not zero */

loc_00223D8E: ;
    ecx = 0; /* xor self */

loc_00223D90: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00223D9Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00223D9C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00223DA2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00223DA2: ;
    esp = esp + 4;
    MEM32(0x5BC22C) = eax;

loc_00223DAA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00223DB0
 * Original: 0x00223DB0 - 0x00223DFB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00223DB0: ;
    eax = MEM32(0x5BC234);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223DFA; /* jne: not equal / not zero */

loc_00223DB9: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00223DD2; /* jle: less or equal (signed <=) */

loc_00223DC2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00223DD0; /* jge: greater or equal (signed >=) */

loc_00223DC7: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00223DE0;

loc_00223DD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00223DD2: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00223DDE; /* jne: not equal / not zero */

loc_00223DD4: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223DE0; /* jne: not equal / not zero */

loc_00223DDE: ;
    ecx = 0; /* xor self */

loc_00223DE0: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00223DECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00223DEC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00223DF2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00223DF2: ;
    esp = esp + 4;
    MEM32(0x5BC234) = eax;

loc_00223DFA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00223E00
 * Original: 0x00223E00 - 0x00223E4B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00223E00: ;
    eax = MEM32(0x5BC244);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223E4A; /* jne: not equal / not zero */

loc_00223E09: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00223E22; /* jle: less or equal (signed <=) */

loc_00223E12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00223E20; /* jge: greater or equal (signed >=) */

loc_00223E17: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00223E30;

loc_00223E20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00223E22: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00223E2E; /* jne: not equal / not zero */

loc_00223E24: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223E30; /* jne: not equal / not zero */

loc_00223E2E: ;
    ecx = 0; /* xor self */

loc_00223E30: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00223E3Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00223E3C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00223E42u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00223E42: ;
    esp = esp + 4;
    MEM32(0x5BC244) = eax;

loc_00223E4A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00223E50
 * Original: 0x00223E50 - 0x00223E9B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00223E50: ;
    eax = MEM32(0x5BC248);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223E9A; /* jne: not equal / not zero */

loc_00223E59: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00223E72; /* jle: less or equal (signed <=) */

loc_00223E62: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00223E70; /* jge: greater or equal (signed >=) */

loc_00223E67: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00223E80;

loc_00223E70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00223E72: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00223E7E; /* jne: not equal / not zero */

loc_00223E74: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223E80; /* jne: not equal / not zero */

loc_00223E7E: ;
    ecx = 0; /* xor self */

loc_00223E80: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00223E8Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00223E8C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00223E92u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00223E92: ;
    esp = esp + 4;
    MEM32(0x5BC248) = eax;

loc_00223E9A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00223EA0
 * Original: 0x00223EA0 - 0x00223EEB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00223EA0: ;
    eax = MEM32(0x5BC258);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223EEA; /* jne: not equal / not zero */

loc_00223EA9: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00223EC2; /* jle: less or equal (signed <=) */

loc_00223EB2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00223EC0; /* jge: greater or equal (signed >=) */

loc_00223EB7: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00223ED0;

loc_00223EC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00223EC2: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00223ECE; /* jne: not equal / not zero */

loc_00223EC4: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223ED0; /* jne: not equal / not zero */

loc_00223ECE: ;
    ecx = 0; /* xor self */

loc_00223ED0: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00223EDCu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00223EDC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00223EE2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00223EE2: ;
    esp = esp + 4;
    MEM32(0x5BC258) = eax;

loc_00223EEA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00223EF0
 * Original: 0x00223EF0 - 0x00223F29 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223EF0(void)
{

loc_00223EF0: ;
    PUSH32(esp, 0x00223EF5u); RECOMP_ABI_CALL(0x00227F90u, sub_00227F90); /* call 0x00227F90 */

loc_00223EF5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x222310);
    PUSH32(esp, 0x200210);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3F98D8);
    PUSH32(esp, 0x219450);
    PUSH32(esp, 0x1A4380);
    PUSH32(esp, 0x21EE90);
    PUSH32(esp, 0x5BC258);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00223F25u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00223F25: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00223F30
 * Original: 0x00223F30 - 0x00223F69 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223F30(void)
{

loc_00223F30: ;
    PUSH32(esp, 0x00223F35u); RECOMP_ABI_CALL(0x00227F90u, sub_00227F90); /* call 0x00227F90 */

loc_00223F35: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2223B0);
    PUSH32(esp, 0x206960);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3F98E8);
    PUSH32(esp, 0x219530);
    PUSH32(esp, 0x1A4380);
    PUSH32(esp, 0x21EE90);
    PUSH32(esp, 0x5BC260);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00223F65u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00223F65: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00223F70
 * Original: 0x00223F70 - 0x00223FBB (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00223F70: ;
    eax = MEM32(0x5BC268);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223FBA; /* jne: not equal / not zero */

loc_00223F79: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00223F92; /* jle: less or equal (signed <=) */

loc_00223F82: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00223F90; /* jge: greater or equal (signed >=) */

loc_00223F87: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00223FA0;

loc_00223F90: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00223F92: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00223F9E; /* jne: not equal / not zero */

loc_00223F94: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00223FA0; /* jne: not equal / not zero */

loc_00223F9E: ;
    ecx = 0; /* xor self */

loc_00223FA0: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00223FACu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00223FAC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00223FB2u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00223FB2: ;
    esp = esp + 4;
    MEM32(0x5BC268) = eax;

loc_00223FBA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00223FC0
 * Original: 0x00223FC0 - 0x0022401C (92 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00223FC0(void)
{

loc_00223FC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC2C8);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 4);
    PUSH32(esp, 0x46B4A8);
    ecx = esi;
    PUSH32(esp, 0x00223FDDu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00223FDD: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebx = MEM32(edx + edi * 4 + 8);
    PUSH32(esp, 0x00223FECu); RECOMP_ABI_CALL(0x00223040u, sub_00223040); /* call 0x00223040 */

loc_00223FEC: ;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx + edi * 4 + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x46B498);
    PUSH32(esp, 0x46B488);
    PUSH32(esp, 0x46B478);
    ecx = esi;
    MEM8(edx + 0x26) = 0;
    PUSH32(esp, 0x00224018u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00224018: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00224020
 * Original: 0x00224020 - 0x00224092 (114 bytes, 36 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00224020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00224020: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC2CC);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 9);
    PUSH32(esp, 0x46B524);
    ecx = esi;
    PUSH32(esp, 0x0022403Du); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0022403D: ;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(0x5BC180);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = MEM32(ecx + 8);
    ebx = MEM32(edx + edi * 4 + 0x1C);
    if (TEST_NZ(_fa, _fb)) goto loc_0022405D; /* jne: not equal / not zero */

loc_00224050: ;
    PUSH32(esp, 0x21B7D0);
    PUSH32(esp, 0x0022405Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022405A: ;
    esp = esp + 4;

loc_0022405D: ;
    eax = MEM32(0x5BC180);
    MEM32(ebx + 0x3C) = eax;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebx = MEM32(edx + edi * 4 + 0x20);
    PUSH32(esp, 0x00224074u); RECOMP_ABI_CALL(0x00222960u, sub_00222960); /* call 0x00222960 */

loc_00224074: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46B500);
    PUSH32(esp, 0x46B4DC);
    PUSH32(esp, 0x46B4B8);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0022408Eu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0022408E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002240A0
 * Original: 0x002240A0 - 0x00224130 (144 bytes, 47 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002240A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002240A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC2EC);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 6);
    PUSH32(esp, 0x46B590);
    ecx = esi;
    PUSH32(esp, 0x002240BEu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002240BE: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 8);
    PUSH32(esp, 0x002240CDu); RECOMP_ABI_CALL(0x00223040u, sub_00223040); /* call 0x00223040 */

loc_002240CD: ;
    MEM32(ebp + 0x38) = eax;
    SET_LO8(ebx, 1);
    MEM8(ebp + 0x34) = LO8(ebx);
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebp = MEM32(ecx + edi * 4 + 0xC);
    PUSH32(esp, 0x002240E4u); RECOMP_ABI_CALL(0x00223130u, sub_00223130); /* call 0x00223130 */

loc_002240E4: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebp = MEM32(eax + edi * 4 + 0x10);
    PUSH32(esp, 0x002240F9u); RECOMP_ABI_CALL(0x00223A40u, sub_00223A40); /* call 0x00223A40 */

loc_002240F9: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 0x14);
    PUSH32(esp, 0x0022410Eu); RECOMP_ABI_CALL(0x00223A40u, sub_00223A40); /* call 0x00223A40 */

loc_0022410E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46B578);
    PUSH32(esp, 0x46B560);
    PUSH32(esp, 0x46B548);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x0022412Bu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0022412B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00224130
 * Original: 0x00224130 - 0x0022419F (111 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00224130(void)
{

loc_00224130: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC318);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 2);
    PUSH32(esp, 0x46B5C0);
    ecx = esi;
    PUSH32(esp, 0x0022414Eu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0022414E: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebx = MEM32(edx + edi * 4);
    PUSH32(esp, 0x0022415Cu); RECOMP_ABI_CALL(0x00222BE0u, sub_00222BE0); /* call 0x00222BE0 */

loc_0022415C: ;
    MEM32(ebx + 0x38) = eax;
    SET_LO8(eax, 0); /* xor self */
    MEM8(ebx + 0x3C) = LO8(eax);
    MEM8(ebx + 0x26) = LO8(eax);
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + edi * 4 + 4);
    edx = MEM32(ecx);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM8(esp + 0x10) = 1;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00224183u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00224183: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46B5B8);
    PUSH32(esp, 0x46B5B0);
    PUSH32(esp, 0x46B5A8);
    ecx = esi;
    PUSH32(esp, 0x0022419Au); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0022419A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002241A0
 * Original: 0x002241A0 - 0x0022471F (1407 bytes, 403 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002241A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002241A0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC31C);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 0x42);
    PUSH32(esp, 0x46B8E0);
    ecx = esi;
    PUSH32(esp, 0x002241C1u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002241C1: ;
    ecx = MEM32(0x5BB930);
    ebx = MEM32(esi + 0x28);
    PUSH32(esp, 0x3E226C);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x002241D7u); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_002241D7: ;
    edx = MEM32(ebx + 0xC);
    ebp = MEM32(ebx + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002241F2; /* jle: less or equal (signed <=) */

loc_002241E3: ;
    _fa = (uint32_t)(MEM32(ebp + ecx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + ecx * 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022470A; /* je: equal / zero */

loc_002241ED: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002241E3; /* jl: less (signed <) */

loc_002241F2: ;
    ebx = ebx | 0xFFFFFFFFu;

loc_002241F5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x002241FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002241FE: ;
    ebp = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esi;
    MEM8(ebp + 0x26) = 0;
    MEM32(ebp + 0x1C) = 0x5BB69C;
    PUSH32(esp, 0x00224214u); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_00224214: ;
    edx = MEM32(ebp + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebp + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0022422B; /* jne: not equal / not zero */

loc_00224224: ;
    ecx = ebp;
    PUSH32(esp, 0x0022422Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0022422B: ;
    eax = MEM32(0x5BB930);
    ebp = MEM32(esi + 0x28);
    PUSH32(esp, 0x3E7404);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00224240u); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_00224240: ;
    edx = MEM32(ebp + 8);
    ebp = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0022425E; /* jle: less or equal (signed <=) */

loc_0022424C: ;
    /* nop */

loc_00224250: ;
    _fa = (uint32_t)(MEM32(edx + ecx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + ecx * 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00224711; /* je: equal / zero */

loc_00224259: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00224250; /* jl: less (signed <) */

loc_0022425E: ;
    ebx = ebx | 0xFFFFFFFFu;

loc_00224261: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0022426Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022426A: ;
    ebp = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esi;
    MEM8(ebp + 0x26) = 0;
    MEM32(ebp + 0x1C) = 0x5BB674;
    PUSH32(esp, 0x00224280u); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_00224280: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00224297; /* jne: not equal / not zero */

loc_00224290: ;
    ecx = ebp;
    PUSH32(esp, 0x00224297u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00224297: ;
    eax = MEM32(0x5BB930);
    ebp = MEM32(esi + 0x28);
    PUSH32(esp, 0x3F88A4);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x002242ACu); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_002242AC: ;
    edx = MEM32(ebp + 8);
    ebp = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002242CE; /* jle: less or equal (signed <=) */

loc_002242B8: ;
    goto loc_002242C0;

    /* nop */

loc_002242C0: ;
    _fa = (uint32_t)(MEM32(edx + ecx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + ecx * 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00224718; /* je: equal / zero */

loc_002242C9: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002242C0; /* jl: less (signed <) */

loc_002242CE: ;
    ebx = ebx | 0xFFFFFFFFu;

loc_002242D1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x002242DAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002242DA: ;
    ebp = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esi;
    MEM8(ebp + 0x26) = 0;
    MEM32(ebp + 0x1C) = 0x5BB9C0;
    PUSH32(esp, 0x002242F0u); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_002242F0: ;
    ecx = MEM32(ebp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ebp + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00224307; /* jne: not equal / not zero */

loc_00224300: ;
    ecx = ebp;
    PUSH32(esp, 0x00224307u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00224307: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + edi * 4);
    edx = MEM32(ecx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 0xFADA;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00224325u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00224325: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4 + 4);
    eax = MEM32(ecx);
    edx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = 6;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00224344u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00224344: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebp = MEM32(ecx + edi * 4 + 8);
    PUSH32(esp, 0x00224353u); RECOMP_ABI_CALL(0x00222AF0u, sub_00222AF0); /* call 0x00222AF0 */

loc_00224353: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = 0;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebp = MEM32(eax + edi * 4 + 0x20);
    eax = MEM32(0x5BC454);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022437A; /* jne: not equal / not zero */

loc_0022436D: ;
    PUSH32(esp, 0x21C070);
    PUSH32(esp, 0x00224377u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00224377: ;
    esp = esp + 4;

loc_0022437A: ;
    ecx = MEM32(0x5BC454);
    MEM32(ebp + 0x3C) = ecx;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + edi * 4 + 0x48);
    MEM8(ecx + 0x26) = 0;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + edi * 4 + 0x4C);
    edx = MEM32(ecx);
    eax = esp + 0x14;
    ebx = ebx | 0xFFFFFFFFu;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x002243AFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002243AF: ;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(0x5BC454);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 0x54);
    if (TEST_NZ(_fa, _fb)) goto loc_002243CF; /* jne: not equal / not zero */

loc_002243C2: ;
    PUSH32(esp, 0x21C070);
    PUSH32(esp, 0x002243CCu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002243CC: ;
    esp = esp + 4;

loc_002243CF: ;
    eax = MEM32(0x5BC454);
    MEM32(ebp + 0x3C) = eax;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(0x5BC454);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 0x58);
    if (TEST_NZ(_fa, _fb)) goto loc_002243F7; /* jne: not equal / not zero */

loc_002243EA: ;
    PUSH32(esp, 0x21C070);
    PUSH32(esp, 0x002243F4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002243F4: ;
    esp = esp + 4;

loc_002243F7: ;
    eax = MEM32(0x5BC454);
    MEM32(ebp + 0x3C) = eax;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(0x5BC454);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 0x5C);
    if (TEST_NZ(_fa, _fb)) goto loc_0022441F; /* jne: not equal / not zero */

loc_00224412: ;
    PUSH32(esp, 0x21C070);
    PUSH32(esp, 0x0022441Cu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022441C: ;
    esp = esp + 4;

loc_0022441F: ;
    eax = MEM32(0x5BC454);
    MEM32(ebp + 0x3C) = eax;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(0x5BC454);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 0x60);
    if (TEST_NZ(_fa, _fb)) goto loc_00224447; /* jne: not equal / not zero */

loc_0022443A: ;
    PUSH32(esp, 0x21C070);
    PUSH32(esp, 0x00224444u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00224444: ;
    esp = esp + 4;

loc_00224447: ;
    eax = MEM32(0x5BC454);
    MEM32(ebp + 0x3C) = eax;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 0x64);
    PUSH32(esp, 0x0022445Eu); RECOMP_ABI_CALL(0x00222D70u, sub_00222D70); /* call 0x00222D70 */

loc_0022445E: ;
    MEM32(ebp + 0x38) = eax;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebp = MEM32(ecx + edi * 4 + 0x68);
    PUSH32(esp, 0x00224470u); RECOMP_ABI_CALL(0x001F31B0u, sub_001F31B0); /* call 0x001F31B0 */

loc_00224470: ;
    MEM32(ebp + 0x38) = eax;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebp = MEM32(eax + edi * 4 + 0x6C);
    PUSH32(esp, 0x00224482u); RECOMP_ABI_CALL(0x00222DC0u, sub_00222DC0); /* call 0x00222DC0 */

loc_00224482: ;
    MEM32(ebp + 0x38) = eax;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(0x5BC454);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 0x74);
    if (TEST_NZ(_fa, _fb)) goto loc_002244A5; /* jne: not equal / not zero */

loc_00224498: ;
    PUSH32(esp, 0x21C070);
    PUSH32(esp, 0x002244A2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002244A2: ;
    esp = esp + 4;

loc_002244A5: ;
    eax = MEM32(0x5BC454);
    MEM32(ebp + 0x3C) = eax;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 0x78);
    PUSH32(esp, 0x002244BCu); RECOMP_ABI_CALL(0x001F3260u, sub_001F3260); /* call 0x001F3260 */

loc_002244BC: ;
    MEM32(ebp + 0x38) = eax;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebp = MEM32(ecx + edi * 4 + 0x7C);
    PUSH32(esp, 0x002244CEu); RECOMP_ABI_CALL(0x001F3260u, sub_001F3260); /* call 0x001F3260 */

loc_002244CE: ;
    MEM32(ebp + 0x38) = eax;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + edi * 4 + 0x94);
    edx = MEM32(ecx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x002244EFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002244EF: ;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(0x5BC454);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 0x98);
    if (TEST_NZ(_fa, _fb)) goto loc_00224512; /* jne: not equal / not zero */

loc_00224505: ;
    PUSH32(esp, 0x21C070);
    PUSH32(esp, 0x0022450Fu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022450F: ;
    esp = esp + 4;

loc_00224512: ;
    eax = MEM32(0x5BC454);
    MEM32(ebp + 0x3C) = eax;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4 + 0xA0);
    ebp = MEM32(eax + 0x20);
    PUSH32(esp, 0x0022452Fu); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0022452F: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022453E; /* je: equal / zero */

loc_00224536: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0022453Eu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0022453E: ;
    MEM32(ebp) = 0;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(0x5BC454);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 0xA4);
    if (TEST_NZ(_fa, _fb)) goto loc_00224568; /* jne: not equal / not zero */

loc_0022455B: ;
    PUSH32(esp, 0x21C070);
    PUSH32(esp, 0x00224565u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00224565: ;
    esp = esp + 4;

loc_00224568: ;
    eax = MEM32(0x5BC454);
    MEM32(ebp + 0x3C) = eax;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 0xAC);
    PUSH32(esp, 0x00224582u); RECOMP_ABI_CALL(0x001F33C0u, sub_001F33C0); /* call 0x001F33C0 */

loc_00224582: ;
    MEM32(ebp + 0x38) = eax;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    eax = MEM32(0x5BC454);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebp = MEM32(ecx + edi * 4 + 0xB4);
    if (TEST_NZ(_fa, _fb)) goto loc_002245A8; /* jne: not equal / not zero */

loc_0022459B: ;
    PUSH32(esp, 0x21C070);
    PUSH32(esp, 0x002245A5u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002245A5: ;
    esp = esp + 4;

loc_002245A8: ;
    edx = MEM32(0x5BC454);
    MEM32(ebp + 0x3C) = edx;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + edi * 4 + 0xBC);
    edx = MEM32(ecx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x002245CFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002245CF: ;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(0x5BC454);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 0xC0);
    if (TEST_NZ(_fa, _fb)) goto loc_002245F2; /* jne: not equal / not zero */

loc_002245E5: ;
    PUSH32(esp, 0x21C070);
    PUSH32(esp, 0x002245EFu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002245EF: ;
    esp = esp + 4;

loc_002245F2: ;
    eax = MEM32(0x5BC454);
    MEM32(ebp + 0x3C) = eax;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4 + 0xCC);
    eax = MEM32(ecx);
    edx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00224618u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00224618: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + edi * 4 + 0xDC);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM8(esp + 0x14) = 1;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00224637u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00224637: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4 + 0xE0);
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM8(esp + 0x14) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00224656u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00224656: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebp = MEM32(ecx + edi * 4 + 0xE8);
    PUSH32(esp, 0x00224668u); RECOMP_ABI_CALL(0x00222910u, sub_00222910); /* call 0x00222910 */

loc_00224668: ;
    MEM32(ebp + 0x38) = eax;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebp = MEM32(eax + edi * 4 + 0xEC);
    PUSH32(esp, 0x0022467Du); RECOMP_ABI_CALL(0x00222910u, sub_00222910); /* call 0x00222910 */

loc_0022467D: ;
    MEM32(ebp + 0x38) = eax;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 0xF0);
    PUSH32(esp, 0x00224692u); RECOMP_ABI_CALL(0x00222910u, sub_00222910); /* call 0x00222910 */

loc_00224692: ;
    MEM32(ebp + 0x38) = eax;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebp = MEM32(ecx + edi * 4 + 0xF4);
    PUSH32(esp, 0x002246A7u); RECOMP_ABI_CALL(0x00223EA0u, sub_00223EA0); /* call 0x00223EA0 */

loc_002246A7: ;
    MEM32(ebp + 0x38) = eax;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebp = MEM32(eax + edi * 4 + 0x100);
    eax = MEM32(0x5BC454);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002246CD; /* jne: not equal / not zero */

loc_002246C0: ;
    PUSH32(esp, 0x21C070);
    PUSH32(esp, 0x002246CAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002246CA: ;
    esp = esp + 4;

loc_002246CD: ;
    ecx = MEM32(0x5BC454);
    MEM32(ebp + 0x3C) = ecx;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebx = MEM32(eax + edi * 4 + 0x104);
    PUSH32(esp, 0x002246E8u); RECOMP_ABI_CALL(0x001F33C0u, sub_001F33C0); /* call 0x001F33C0 */

loc_002246E8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46B7D8);
    PUSH32(esp, 0x46B6D0);
    PUSH32(esp, 0x46B5C8);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00224702u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00224702: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0022470A: ;
    ebx = ecx;
    goto loc_002241F5;

loc_00224711: ;
    ebx = ecx;
    goto loc_00224261;

loc_00224718: ;
    ebx = ecx;
    goto loc_002242D1;

}

/**
 * sub_00224720
 * Original: 0x00224720 - 0x0022488A (362 bytes, 108 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00224720(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00224720: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC38C);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x46BA78);
    ecx = esi;
    PUSH32(esp, 0x0022473Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0022473F: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebx = MEM32(edx + edi * 4);
    PUSH32(esp, 0x0022474Du); RECOMP_ABI_CALL(0x00223AF0u, sub_00223AF0); /* call 0x00223AF0 */

loc_0022474D: ;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebx = MEM32(ecx + edi * 4 + 4);
    PUSH32(esp, 0x00224763u); RECOMP_ABI_CALL(0x00222CD0u, sub_00222CD0); /* call 0x00222CD0 */

loc_00224763: ;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebx = MEM32(eax + edi * 4 + 8);
    PUSH32(esp, 0x00224779u); RECOMP_ABI_CALL(0x00222CD0u, sub_00222CD0); /* call 0x00222CD0 */

loc_00224779: ;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebx = MEM32(edx + edi * 4 + 0xC);
    PUSH32(esp, 0x0022478Fu); RECOMP_ABI_CALL(0x00223C30u, sub_00223C30); /* call 0x00223C30 */

loc_0022478F: ;
    MEM32(ebx + 0x38) = eax;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + edi * 4 + 0x10);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x002247B1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002247B1: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebx = MEM32(edx + edi * 4 + 0x14);
    eax = MEM32(ebx);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x14) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x002247D2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002247D2: ;
    MEM32(ebx + 0x34) = 0x221320;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebp = MEM32(eax + edi * 4 + 0x18);
    PUSH32(esp, 0x002247E8u); RECOMP_ABI_CALL(0x00222AF0u, sub_00222AF0); /* call 0x00222AF0 */

loc_002247E8: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = 0;
    SET_LO8(ebx, 3);
    MEM8(ebp + 0x28) = LO8(ebx);
    MEM8(ebp + 0x27) = LO8(ebx);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 0x1C);
    PUSH32(esp, 0x00224806u); RECOMP_ABI_CALL(0x00223B40u, sub_00223B40); /* call 0x00223B40 */

loc_00224806: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = 0;
    MEM8(ebp + 0x28) = LO8(ebx);
    MEM8(ebp + 0x27) = LO8(ebx);
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebp = MEM32(ecx + edi * 4 + 0x20);
    PUSH32(esp, 0x00224826u); RECOMP_ABI_CALL(0x00223B40u, sub_00223B40); /* call 0x00223B40 */

loc_00224826: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    MEM8(ebp + 0x26) = 0;
    MEM8(ebp + 0x28) = LO8(ebx);
    MEM8(ebp + 0x27) = LO8(ebx);
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + edi * 4 + 0x24);
    MEM8(eax + 0x26) = 0;
    MEM8(eax + 0x28) = LO8(ebx);
    MEM8(eax + 0x27) = LO8(ebx);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4 + 0x28);
    MEM8(eax + 0x26) = 0;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4 + 0x2C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x46BA48);
    PUSH32(esp, 0x46BA18);
    PUSH32(esp, 0x46B9E8);
    ecx = esi;
    MEM8(eax + 0x26) = 0;
    MEM8(eax + 0x28) = LO8(ebx);
    MEM8(eax + 0x27) = LO8(ebx);
    PUSH32(esp, 0x00224884u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00224884: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00224890
 * Original: 0x00224890 - 0x002249EE (350 bytes, 108 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00224890(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00224890: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC3A8);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x46BB80);
    ecx = esi;
    PUSH32(esp, 0x002248AFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002248AF: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4);
    ebx = MEM32(ebp + 0x20);
    PUSH32(esp, 0x002248C0u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_002248C0: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002248CE; /* je: equal / zero */

loc_002248C6: ;
    ecx = eax + -8;
    PUSH32(esp, 0x002248CEu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_002248CE: ;
    MEM32(ebx) = 0;
    SET_LO8(ebx, 1);
    MEM8(ebp + 0x35) = LO8(ebx);
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebp = MEM32(ecx + edi * 4 + 4);
    PUSH32(esp, 0x002248E8u); RECOMP_ABI_CALL(0x00222B90u, sub_00222B90); /* call 0x00222B90 */

loc_002248E8: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebp = MEM32(eax + edi * 4 + 8);
    PUSH32(esp, 0x002248FDu); RECOMP_ABI_CALL(0x00222AA0u, sub_00222AA0); /* call 0x00222AA0 */

loc_002248FD: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 0xC);
    PUSH32(esp, 0x00224912u); RECOMP_ABI_CALL(0x00223BE0u, sub_00223BE0); /* call 0x00223BE0 */

loc_00224912: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x3C) = 0;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + edi * 4 + 0x14);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM8(esp + 0x14) = LO8(ebx);
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00224934u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00224934: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 0x20);
    PUSH32(esp, 0x00224943u); RECOMP_ABI_CALL(0x00222FA0u, sub_00222FA0); /* call 0x00222FA0 */

loc_00224943: ;
    MEM32(ebp + 0x38) = eax;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + edi * 4 + 0x28);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM8(esp + 0x14) = LO8(ebx);
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00224961u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00224961: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 0x30);
    PUSH32(esp, 0x00224970u); RECOMP_ABI_CALL(0x00222BE0u, sub_00222BE0); /* call 0x00222BE0 */

loc_00224970: ;
    MEM32(ebp + 0x38) = eax;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebp = MEM32(ecx + edi * 4 + 0x34);
    PUSH32(esp, 0x00224982u); RECOMP_ABI_CALL(0x00222E60u, sub_00222E60); /* call 0x00222E60 */

loc_00224982: ;
    MEM32(ebp + 0x38) = eax;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + edi * 4 + 0x38);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM8(esp + 0x14) = LO8(ebx);
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x002249A0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002249A0: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4 + 0x3C);
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM8(esp + 0x14) = LO8(ebx);
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x002249BBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002249BB: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebx = MEM32(ecx + edi * 4 + 0x44);
    PUSH32(esp, 0x002249CAu); RECOMP_ABI_CALL(0x00223B90u, sub_00223B90); /* call 0x00223B90 */

loc_002249CA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46BB38);
    PUSH32(esp, 0x46BAF0);
    PUSH32(esp, 0x46BAA8);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x26) = 0;
    PUSH32(esp, 0x002249E8u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002249E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002249F0
 * Original: 0x002249F0 - 0x00224A7F (143 bytes, 47 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002249F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002249F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC3B8);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 5);
    PUSH32(esp, 0x46BC04);
    ecx = esi;
    PUSH32(esp, 0x00224A0Eu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00224A0E: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4);
    PUSH32(esp, 0x00224A1Cu); RECOMP_ABI_CALL(0x00223EA0u, sub_00223EA0); /* call 0x00223EA0 */

loc_00224A1C: ;
    MEM32(ebp + 0x38) = eax;
    SET_LO8(ebx, 1);
    MEM8(ebp + 0x34) = LO8(ebx);
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebp = MEM32(ecx + edi * 4 + 4);
    PUSH32(esp, 0x00224A33u); RECOMP_ABI_CALL(0x00222C30u, sub_00222C30); /* call 0x00222C30 */

loc_00224A33: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebp = MEM32(eax + edi * 4 + 8);
    PUSH32(esp, 0x00224A48u); RECOMP_ABI_CALL(0x00222E60u, sub_00222E60); /* call 0x00222E60 */

loc_00224A48: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 0xC);
    PUSH32(esp, 0x00224A5Du); RECOMP_ABI_CALL(0x001F31B0u, sub_001F31B0); /* call 0x001F31B0 */

loc_00224A5D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46BBF0);
    PUSH32(esp, 0x46BBDC);
    PUSH32(esp, 0x46BBC8);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00224A7Au); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00224A7A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00224A80
 * Original: 0x00224A80 - 0x00224AB9 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00224A80(void)
{

loc_00224A80: ;
    PUSH32(esp, 0x00224A85u); RECOMP_ABI_CALL(0x00227F90u, sub_00227F90); /* call 0x00227F90 */

loc_00224A85: ;
    PUSH32(esp, 0x46BC18);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20BD20);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FA0BC);
    PUSH32(esp, 0x1F2EE0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BC430);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00224AB5u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00224AB5: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00224AC0
 * Original: 0x00224AC0 - 0x00224B1D (93 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00224AC0(void)
{

loc_00224AC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC4D0);
    eax = MEM32(esi + 0x28);
    ebx = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x46BC38);
    ecx = esi;
    PUSH32(esp, 0x00224ADDu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00224ADD: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    edi = MEM32(edx + ebx * 4);
    PUSH32(esp, 0x00224AEBu); RECOMP_ABI_CALL(0x00223910u, sub_00223910); /* call 0x00223910 */

loc_00224AEB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x46BC30);
    PUSH32(esp, 0x46BC28);
    PUSH32(esp, 0x46BC20);
    ecx = esi;
    MEM32(edi + 0x38) = eax;
    MEM8(edi + 0x24) = 3;
    MEM8(edi + 0x34) = 1;
    PUSH32(esp, 0x00224B0Du); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00224B0D: ;
    eax = MEM32(0x5BC4D0);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 0x40) = 0x1F2FD0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00224B20
 * Original: 0x00224B20 - 0x00224B59 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00224B20(void)
{

loc_00224B20: ;
    PUSH32(esp, 0x00224B25u); RECOMP_ABI_CALL(0x00227F90u, sub_00227F90); /* call 0x00227F90 */

loc_00224B25: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1F34B0);
    PUSH32(esp, 0x206D10);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x3FA0E0);
    PUSH32(esp, 0x2263C0);
    PUSH32(esp, 0x1E6810);
    PUSH32(esp, 0x227F50);
    PUSH32(esp, 0x5BC4DC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00224B55u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00224B55: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00224B60
 * Original: 0x00224B60 - 0x00224B7C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00224B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00224B60: ;
    eax = MEM32(0x5BC160);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00224B7B; /* jne: not equal / not zero */

loc_00224B69: ;
    PUSH32(esp, 0x223840);
    PUSH32(esp, 0x00224B73u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00224B73: ;
    eax = MEM32(0x5BC160);
    esp = esp + 4;

loc_00224B7B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00224B80
 * Original: 0x00224B80 - 0x00224B9C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00224B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00224B80: ;
    eax = MEM32(0x5BC170);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00224B9B; /* jne: not equal / not zero */

loc_00224B89: ;
    PUSH32(esp, 0x223880);
    PUSH32(esp, 0x00224B93u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00224B93: ;
    eax = MEM32(0x5BC170);
    esp = esp + 4;

loc_00224B9B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00224BA0
 * Original: 0x00224BA0 - 0x00224BBC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00224BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00224BA0: ;
    eax = MEM32(0x5BC1BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00224BBB; /* jne: not equal / not zero */

loc_00224BA9: ;
    PUSH32(esp, 0x223A00);
    PUSH32(esp, 0x00224BB3u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00224BB3: ;
    eax = MEM32(0x5BC1BC);
    esp = esp + 4;

loc_00224BBB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00224BC0
 * Original: 0x00224BC0 - 0x00224D8D (461 bytes, 136 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00224BC0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00224BC0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC204);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x46BD18);
    ecx = esi;
    PUSH32(esp, 0x00224BE1u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00224BE1: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebx = MEM32(edx + edi * 4);
    PUSH32(esp, 0x00224BEFu); RECOMP_ABI_CALL(0x00222BE0u, sub_00222BE0); /* call 0x00222BE0 */

loc_00224BEF: ;
    MEM32(ebx + 0x38) = eax;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebp = MEM32(ecx + edi * 4 + 4);
    PUSH32(esp, 0x00224C01u); RECOMP_ABI_CALL(0x00222B90u, sub_00222B90); /* call 0x00222B90 */

loc_00224C01: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = 0;
    SET_LO8(ebx, 1);
    MEM8(ebp + 0x34) = LO8(ebx);
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + edi * 4 + 8);
    ebp = MEM32(ecx + 0x20);
    PUSH32(esp, 0x00224C1Fu); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00224C1F: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00224C2E; /* je: equal / zero */

loc_00224C26: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00224C2Eu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00224C2E: ;
    MEM32(ebp) = 0;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + edi * 4 + 0xC);
    ebp = MEM32(ecx + 0x20);
    PUSH32(esp, 0x00224C47u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00224C47: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00224C56; /* je: equal / zero */

loc_00224C4E: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00224C56u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00224C56: ;
    MEM32(ebp) = 0;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebp = MEM32(eax + edi * 4 + 0x14);
    PUSH32(esp, 0x00224C6Cu); RECOMP_ABI_CALL(0x00223D60u, sub_00223D60); /* call 0x00223D60 */

loc_00224C6C: ;
    MEM32(ebp + 0x38) = eax;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 0x18);
    PUSH32(esp, 0x00224C7Eu); RECOMP_ABI_CALL(0x00223910u, sub_00223910); /* call 0x00223910 */

loc_00224C7E: ;
    MEM32(ebp + 0x38) = eax;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + edi * 4 + 0x1C);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM8(esp + 0x14) = LO8(ebx);
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00224C9Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00224C9C: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 0x20);
    PUSH32(esp, 0x00224CABu); RECOMP_ABI_CALL(0x00223AF0u, sub_00223AF0); /* call 0x00223AF0 */

loc_00224CAB: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = 0;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebp = MEM32(ecx + edi * 4 + 0x24);
    PUSH32(esp, 0x00224CC1u); RECOMP_ABI_CALL(0x001F33C0u, sub_001F33C0); /* call 0x001F33C0 */

loc_00224CC1: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = 0;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + edi * 4 + 0x28);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM8(esp + 0x14) = LO8(ebx);
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00224CE3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00224CE3: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 0x2C);
    PUSH32(esp, 0x00224CF2u); RECOMP_ABI_CALL(0x00222910u, sub_00222910); /* call 0x00222910 */

loc_00224CF2: ;
    MEM32(ebp + 0x38) = eax;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebp = MEM32(ecx + edi * 4 + 0x30);
    PUSH32(esp, 0x00224D04u); RECOMP_ABI_CALL(0x00222910u, sub_00222910); /* call 0x00222910 */

loc_00224D04: ;
    MEM32(ebp + 0x38) = eax;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebp = MEM32(eax + edi * 4 + 0x34);
    PUSH32(esp, 0x00224D16u); RECOMP_ABI_CALL(0x00222910u, sub_00222910); /* call 0x00222910 */

loc_00224D16: ;
    MEM32(ebp + 0x38) = eax;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4 + 0x38);
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM8(esp + 0x14) = LO8(ebx);
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00224D34u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00224D34: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + edi * 4 + 0x3C);
    edx = MEM32(ecx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 0x20000;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00224D53u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00224D53: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4 + 0x40);
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM8(esp + 0x14) = LO8(ebx);
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00224D6Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00224D6E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46BCD0);
    PUSH32(esp, 0x46BC88);
    PUSH32(esp, 0x46BC40);
    ecx = esi;
    PUSH32(esp, 0x00224D85u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00224D85: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00224D90
 * Original: 0x00224D90 - 0x00224E27 (151 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00224D90(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00224D90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC208);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 5);
    PUSH32(esp, 0x46BD98);
    ecx = esi;
    PUSH32(esp, 0x00224DAFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00224DAF: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4);
    PUSH32(esp, 0x00224DBDu); RECOMP_ABI_CALL(0x00223C80u, sub_00223C80); /* call 0x00223C80 */

loc_00224DBD: ;
    MEM32(ebp + 0x38) = eax;
    SET_LO8(ebx, 1);
    MEM8(ebp + 0x34) = LO8(ebx);
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebp = MEM32(ecx + edi * 4 + 4);
    PUSH32(esp, 0x00224DD4u); RECOMP_ABI_CALL(0x00222AF0u, sub_00222AF0); /* call 0x00222AF0 */

loc_00224DD4: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebp = MEM32(eax + edi * 4 + 8);
    PUSH32(esp, 0x00224DE9u); RECOMP_ABI_CALL(0x00223AF0u, sub_00223AF0); /* call 0x00223AF0 */

loc_00224DE9: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4 + 0x10);
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM8(esp + 0x14) = LO8(ebx);
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00224E0Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00224E0A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46BD84);
    PUSH32(esp, 0x46BD70);
    PUSH32(esp, 0x46BD5C);
    ecx = esi;
    PUSH32(esp, 0x00224E21u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00224E21: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00224E30
 * Original: 0x00224E30 - 0x00224EDA (170 bytes, 56 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00224E30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00224E30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC230);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 4);
    PUSH32(esp, 0x46BDDC);
    ecx = esi;
    PUSH32(esp, 0x00224E4Eu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00224E4E: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4);
    ebx = MEM32(eax + 0x20);
    PUSH32(esp, 0x3FA28C);
    PUSH32(esp, 0x00224E64u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00224E64: ;
    ecx = eax;
    PUSH32(esp, 0x00224E6Bu); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00224E6B: ;
    ebp = eax;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00224E7B; /* je: equal / zero */

loc_00224E73: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00224E7Bu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00224E7B: ;
    MEM32(ebx) = ebp;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 4);
    PUSH32(esp, 0x00224E8Cu); RECOMP_ABI_CALL(0x00223DB0u, sub_00223DB0); /* call 0x00223DB0 */

loc_00224E8C: ;
    MEM32(ebp + 0x38) = eax;
    SET_LO8(ebx, 1);
    MEM8(ebp + 0x34) = LO8(ebx);
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebp = MEM32(ecx + edi * 4 + 8);
    PUSH32(esp, 0x00224EA3u); RECOMP_ABI_CALL(0x00222A00u, sub_00222A00); /* call 0x00222A00 */

loc_00224EA3: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebp = MEM32(eax + edi * 4 + 0xC);
    PUSH32(esp, 0x00224EB8u); RECOMP_ABI_CALL(0x00222A50u, sub_00222A50); /* call 0x00222A50 */

loc_00224EB8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46BDCC);
    PUSH32(esp, 0x46BDBC);
    PUSH32(esp, 0x46BDAC);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00224ED5u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00224ED5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00224EE0
 * Original: 0x00224EE0 - 0x00224F2D (77 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00224EE0(void)
{

loc_00224EE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC240);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x46BDF8);
    ecx = esi;
    PUSH32(esp, 0x00224EFDu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00224EFD: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebx = MEM32(edx + edi * 4);
    PUSH32(esp, 0x00224F0Bu); RECOMP_ABI_CALL(0x00223E00u, sub_00223E00); /* call 0x00223E00 */

loc_00224F0B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46BDF4);
    PUSH32(esp, 0x46BDF0);
    PUSH32(esp, 0x46BDEC);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x00224F29u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00224F29: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00224F30
 * Original: 0x00224F30 - 0x00224F93 (99 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00224F30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */

loc_00224F30: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC244);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 2);
    PUSH32(esp, 0x46BE14);
    ecx = esi;
    PUSH32(esp, 0x00224F4Du); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00224F4D: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4);
    PUSH32(esp, 0x00224F5Bu); RECOMP_ABI_CALL(0x00223F70u, sub_00223F70); /* call 0x00223F70 */

loc_00224F5B: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebp = MEM32(ecx + edi * 4 + 4);
    PUSH32(esp, 0x00224F71u); RECOMP_ABI_CALL(0x00223EA0u, sub_00223EA0); /* call 0x00223EA0 */

loc_00224F71: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46BE0C);
    PUSH32(esp, 0x46BE04);
    PUSH32(esp, 0x46BDFC);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    PUSH32(esp, 0x00224F8Fu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00224F8F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00224FA0
 * Original: 0x00224FA0 - 0x00224FED (77 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00224FA0(void)
{

loc_00224FA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC264);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x46BE28);
    ecx = esi;
    PUSH32(esp, 0x00224FBDu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00224FBD: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebx = MEM32(edx + edi * 4);
    PUSH32(esp, 0x00224FCBu); RECOMP_ABI_CALL(0x00223F70u, sub_00223F70); /* call 0x00223F70 */

loc_00224FCB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46BE24);
    PUSH32(esp, 0x46BE20);
    PUSH32(esp, 0x46BE1C);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x00224FE9u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00224FE9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00224FF0
 * Original: 0x00224FF0 - 0x0022508E (158 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00224FF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00224FF0: ;
    eax = MEM32(0x5BB930);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BC410);
    esi = MEM32(edi + 0x28);
    PUSH32(esp, 0x3E226C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0022500Eu); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_0022500E: ;
    ecx = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0022502A; /* jle: less or equal (signed <=) */

loc_0022501A: ;
    /* nop */

loc_00225020: ;
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00225087; /* je: equal / zero */

loc_00225025: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00225020; /* jl: less (signed <) */

loc_0022502A: ;
    ebx = ebx | 0xFFFFFFFFu;

loc_0022502D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00225036u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225036: ;
    esi = eax;
    eax = MEM32(0x5BC170);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022504E; /* jne: not equal / not zero */

loc_00225041: ;
    PUSH32(esp, 0x223880);
    PUSH32(esp, 0x0022504Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022504B: ;
    esp = esp + 4;

loc_0022504E: ;
    eax = MEM32(0x5BC170);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x38) = 0;
    MEM32(esi + 0x1C) = 0x5BB6D0;
    PUSH32(esp, 0x0022506Du); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_0022506D: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0022508B; /* jne: not equal / not zero */

loc_0022507E: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00225087: ;
    ebx = edx;
    goto loc_0022502D;

loc_0022508B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00225090
 * Original: 0x00225090 - 0x0022512E (158 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225090(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00225090: ;
    eax = MEM32(0x5BB930);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BC418);
    esi = MEM32(edi + 0x28);
    PUSH32(esp, 0x3E226C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002250AEu); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_002250AE: ;
    ecx = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_002250CA; /* jle: less or equal (signed <=) */

loc_002250BA: ;
    /* nop */

loc_002250C0: ;
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00225127; /* je: equal / zero */

loc_002250C5: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002250C0; /* jl: less (signed <) */

loc_002250CA: ;
    ebx = ebx | 0xFFFFFFFFu;

loc_002250CD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x002250D6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002250D6: ;
    esi = eax;
    eax = MEM32(0x5BC160);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002250EE; /* jne: not equal / not zero */

loc_002250E1: ;
    PUSH32(esp, 0x223840);
    PUSH32(esp, 0x002250EBu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002250EB: ;
    esp = esp + 4;

loc_002250EE: ;
    eax = MEM32(0x5BC160);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x38) = 0;
    MEM32(esi + 0x1C) = 0x5BBFAC;
    PUSH32(esp, 0x0022510Du); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_0022510D: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0022512B; /* jne: not equal / not zero */

loc_0022511E: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00225127: ;
    ebx = edx;
    goto loc_002250CD;

loc_0022512B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00225130
 * Original: 0x00225130 - 0x0022513C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225130(void)
{

loc_00225130: ;
    PUSH32(esp, 0x224A80);
    PUSH32(esp, 0x0022513Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022513A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00225140
 * Original: 0x00225140 - 0x00225175 (53 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225140(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00225140: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x5BC170);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00225160; /* jne: not equal / not zero */

loc_0022514D: ;
    PUSH32(esp, 0x223880);
    PUSH32(esp, 0x00225157u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00225157: ;
    ecx = MEM32(0x5BC170);
    esp = esp + 4;

loc_00225160: ;
    edx = MEM32(esi + 0x34);
    eax = MEM32(ecx);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0xC));
    POP32(esp, esi);
    MEM32(esp + 8) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC8)); return; /* indirect tail jmp */

}

/**
 * sub_00225180
 * Original: 0x00225180 - 0x002251B5 (53 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225180(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00225180: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x5BC160);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002251A0; /* jne: not equal / not zero */

loc_0022518D: ;
    PUSH32(esp, 0x223840);
    PUSH32(esp, 0x00225197u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00225197: ;
    ecx = MEM32(0x5BC160);
    esp = esp + 4;

loc_002251A0: ;
    edx = MEM32(esi + 0x34);
    eax = MEM32(ecx);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0xC));
    POP32(esp, esi);
    MEM32(esp + 8) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC8)); return; /* indirect tail jmp */

}

/**
 * sub_002251C0
 * Original: 0x002251C0 - 0x00225259 (153 bytes, 53 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002251C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002251C0: ;
    eax = MEM32(0x5BC508);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002251E8; /* je: equal / zero */

loc_002251CA: ;
    PUSH32(esp, 0x223840);
    PUSH32(esp, 0x002251D4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002251D4: ;
    ecx = MEM32(esp + 8);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BC15C);
    PUSH32(esp, 0x002251E7u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002251E7: ;
    esp += 4; return; /* ret */

loc_002251E8: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x002251F7u); RECOMP_ABI_CALL(0x001F7E00u, sub_001F7E00); /* call 0x001F7E00 */

loc_002251F7: ;
    esi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00225244; /* je: equal / zero */

loc_00225200: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00225209u); RECOMP_ABI_CALL(0x001F7CD0u, sub_001F7CD0); /* call 0x001F7CD0 */

loc_00225209: ;
    MEM32(esi) = 0x3F5C90;
    ecx = esi;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x0022521Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0022521D: ;
    ecx = esi;
    MEM32(esi) = 0x3F6228;
    PUSH32(esp, 0x0022522Au); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0022522A: ;
    MEM32(esi) = 0x3F6228;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00225237u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225237: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00225240u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225240: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00225244: ;
    esi = 0; /* xor self */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0022524Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022524D: ;
    edx = MEM32(esi);
    PUSH32(esp, esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00225255u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225255: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00225260
 * Original: 0x00225260 - 0x002252B9 (89 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00225260: ;
    eax = MEM32(0x5BC508);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022528A; /* je: equal / zero */

loc_0022526D: ;
    PUSH32(esp, 0x223840);
    PUSH32(esp, 0x00225277u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00225277: ;
    ecx = MEM32(esp + 0xC);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00225286u); RECOMP_ABI_CALL(0x0020E610u, sub_0020E610); /* call 0x0020E610 */

loc_00225286: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0022528A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x00225294u); RECOMP_ABI_CALL(0x001F7E70u, sub_001F7E70); /* call 0x001F7E70 */

loc_00225294: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002252B2; /* je: equal / zero */

loc_0022529D: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002252A5u); RECOMP_ABI_CALL(0x00216980u, sub_00216980); /* call 0x00216980 */

loc_002252A5: ;
    MEM32(esi) = 0x3F6228;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_002252B2: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002252C0
 * Original: 0x002252C0 - 0x00225359 (153 bytes, 53 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002252C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002252C0: ;
    eax = MEM32(0x5BC508);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002252E8; /* je: equal / zero */

loc_002252CA: ;
    PUSH32(esp, 0x223880);
    PUSH32(esp, 0x002252D4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002252D4: ;
    ecx = MEM32(esp + 8);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BC16C);
    PUSH32(esp, 0x002252E7u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002252E7: ;
    esp += 4; return; /* ret */

loc_002252E8: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x002252F7u); RECOMP_ABI_CALL(0x001F7E00u, sub_001F7E00); /* call 0x001F7E00 */

loc_002252F7: ;
    esi = eax;
    esp = esp + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00225344; /* je: equal / zero */

loc_00225300: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00225309u); RECOMP_ABI_CALL(0x001F7CD0u, sub_001F7CD0); /* call 0x001F7CD0 */

loc_00225309: ;
    MEM32(esi) = 0x3F5C90;
    ecx = esi;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x0022531Du); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0022531D: ;
    ecx = esi;
    MEM32(esi) = 0x3F6138;
    PUSH32(esp, 0x0022532Au); RECOMP_ABI_CALL(0x002168F0u, sub_002168F0); /* call 0x002168F0 */

loc_0022532A: ;
    MEM32(esi) = 0x3F6138;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00225337u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225337: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00225340u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225340: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00225344: ;
    esi = 0; /* xor self */
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0022534Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022534D: ;
    edx = MEM32(esi);
    PUSH32(esp, esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00225355u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225355: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00225360
 * Original: 0x00225360 - 0x002253B9 (89 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00225360: ;
    eax = MEM32(0x5BC508);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022538A; /* je: equal / zero */

loc_0022536D: ;
    PUSH32(esp, 0x223880);
    PUSH32(esp, 0x00225377u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00225377: ;
    ecx = MEM32(esp + 0xC);
    esp = esp + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00225386u); RECOMP_ABI_CALL(0x0020E610u, sub_0020E610); /* call 0x0020E610 */

loc_00225386: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_0022538A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x00225394u); RECOMP_ABI_CALL(0x001F7E70u, sub_001F7E70); /* call 0x001F7E70 */

loc_00225394: ;
    esi = eax;
    esp = esp + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002253B2; /* je: equal / zero */

loc_0022539D: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002253A5u); RECOMP_ABI_CALL(0x00216980u, sub_00216980); /* call 0x00216980 */

loc_002253A5: ;
    MEM32(esi) = 0x3F6138;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_002253B2: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002253C0
 * Original: 0x002253C0 - 0x0022548F (207 bytes, 65 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002253C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002253C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC1B4);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 9);
    PUSH32(esp, 0x46BE98);
    ecx = esi;
    PUSH32(esp, 0x002253DFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002253DF: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4 + 0xC);
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x002253FEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002253FE: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + edi * 4 + 0x10);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    ebx = 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0022541Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022541E: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 0x14);
    PUSH32(esp, 0x0022542Du); RECOMP_ABI_CALL(0x00223040u, sub_00223040); /* call 0x00223040 */

loc_0022542D: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebp = MEM32(ecx + edi * 4 + 0x18);
    PUSH32(esp, 0x00225442u); RECOMP_ABI_CALL(0x00223130u, sub_00223130); /* call 0x00223130 */

loc_00225442: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebp = MEM32(eax + edi * 4 + 0x1C);
    PUSH32(esp, 0x00225457u); RECOMP_ABI_CALL(0x00223A40u, sub_00223A40); /* call 0x00223A40 */

loc_00225457: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 0x20);
    PUSH32(esp, 0x0022546Cu); RECOMP_ABI_CALL(0x00223A40u, sub_00223A40); /* call 0x00223A40 */

loc_0022546C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46BE74);
    PUSH32(esp, 0x46BE50);
    PUSH32(esp, 0x46BE2C);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x00225489u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00225489: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00225490
 * Original: 0x00225490 - 0x002254AE (30 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225490(void)
{

loc_00225490: ;
    PUSH32(esp, 0x223A00);
    PUSH32(esp, 0x0022549Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022549A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BC1B8);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002254ADu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002254AD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002254B0
 * Original: 0x002254B0 - 0x00225533 (131 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002254B0(void)
{

loc_002254B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC1C8);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 3);
    PUSH32(esp, 0x46BEE0);
    ecx = esi;
    PUSH32(esp, 0x002254CDu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002254CD: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4);
    MEM8(eax + 0x26) = 0;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4 + 4);
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x4000;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x002254F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002254F9: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + edi * 4 + 8);
    edx = MEM32(ecx);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0x400;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00225518u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225518: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46BED4);
    PUSH32(esp, 0x46BEC8);
    PUSH32(esp, 0x46BEBC);
    ecx = esi;
    PUSH32(esp, 0x0022552Fu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0022552F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00225540
 * Original: 0x00225540 - 0x002255AA (106 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00225540: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BC1D0);
    eax = MEM32(edi + 0x28);
    ebx = MEM32(eax + 0xC);
    PUSH32(esp, 2);
    PUSH32(esp, 0x46BF04);
    ecx = edi;
    PUSH32(esp, 0x0022555Du); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0022555D: ;
    ecx = MEM32(edi + 0x28);
    eax = MEM32(0x5BC454);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = MEM32(ecx + 8);
    esi = MEM32(edx + ebx * 4);
    if (TEST_NZ(_fa, _fb)) goto loc_0022557C; /* jne: not equal / not zero */

loc_0022556F: ;
    PUSH32(esp, 0x21C070);
    PUSH32(esp, 0x00225579u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00225579: ;
    esp = esp + 4;

loc_0022557C: ;
    eax = MEM32(0x5BC454);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x46BEFC);
    MEM32(esi + 0x3C) = eax;
    SET_LO8(eax, 1);
    PUSH32(esp, 0x46BEF4);
    PUSH32(esp, 0x46BEEC);
    ecx = edi;
    MEM8(esi + 0x35) = LO8(eax);
    MEM8(esi + 0x40) = LO8(eax);
    MEM8(esi + 0x41) = LO8(eax);
    PUSH32(esp, 0x002255A6u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002255A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002255B0
 * Original: 0x002255B0 - 0x00225686 (214 bytes, 68 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002255B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002255B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC200);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 7);
    PUSH32(esp, 0x46BF60);
    ecx = esi;
    PUSH32(esp, 0x002255CFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002255CF: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4);
    eax = MEM32(ebp);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x14) = 0x3E8;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x002255F0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002255F0: ;
    ebx = 0; /* xor self */
    MEM8(ebp + 0x26) = LO8(ebx);
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + edi * 4 + 4);
    MEM8(ecx + 0x26) = LO8(ebx);
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebp = MEM32(eax + edi * 4 + 8);
    _fa = (uint32_t)(MEM32(0x5BC170)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5BC170), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00225621; /* jne: not equal / not zero */

loc_00225614: ;
    PUSH32(esp, 0x223880);
    PUSH32(esp, 0x0022561Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022561E: ;
    esp = esp + 4;

loc_00225621: ;
    ecx = MEM32(0x5BC170);
    MEM32(ebp + 0x3C) = ecx;
    MEM8(ebp + 0x26) = LO8(ebx);
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + edi * 4 + 0xC);
    MEM8(ecx + 0x26) = LO8(ebx);
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + edi * 4 + 0x10);
    MEM8(ecx + 0x26) = LO8(ebx);
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebp = MEM32(eax + edi * 4 + 0x14);
    PUSH32(esp, 0x00225656u); RECOMP_ABI_CALL(0x00223B40u, sub_00223B40); /* call 0x00223B40 */

loc_00225656: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4 + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0x46BF44);
    PUSH32(esp, 0x46BF28);
    PUSH32(esp, 0x46BF0C);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00225680u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00225680: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00225690
 * Original: 0x00225690 - 0x002256C6 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225690(void)
{

loc_00225690: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BC2C0);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 2);
    PUSH32(esp, 0x46BF94);
    ecx = esi;
    PUSH32(esp, 0x002256ACu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002256AC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46BF8C);
    PUSH32(esp, 0x46BF84);
    PUSH32(esp, 0x46BF7C);
    ecx = esi;
    PUSH32(esp, 0x002256C3u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002256C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002256D0
 * Original: 0x002256D0 - 0x002257B3 (227 bytes, 68 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002256D0(void)
{

loc_002256D0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC478);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x46C044);
    ecx = esi;
    PUSH32(esp, 0x002256F0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002256F0: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4);
    eax = MEM32(ecx);
    edx = esp + 0xC;
    ebx = ebx | 0xFFFFFFFFu;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0022570Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022570D: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + edi * 4 + 0x10);
    edx = MEM32(ecx);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0022572Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022572C: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebx = MEM32(edx + edi * 4 + 0x14);
    PUSH32(esp, 0x0022573Bu); RECOMP_ABI_CALL(0x00222B40u, sub_00222B40); /* call 0x00222B40 */

loc_0022573B: ;
    MEM32(ebx + 0x38) = eax;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebx = MEM32(ecx + edi * 4 + 0x28);
    PUSH32(esp, 0x0022574Du); RECOMP_ABI_CALL(0x00223B90u, sub_00223B90); /* call 0x00223B90 */

loc_0022574D: ;
    MEM32(ebx + 0x38) = eax;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + edi * 4 + 0x30);
    edx = MEM32(ecx);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = 8;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x0022576Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022576F: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebx = MEM32(edx + edi * 4 + 0x34);
    PUSH32(esp, 0x0022577Eu); RECOMP_ABI_CALL(0x00222910u, sub_00222910); /* call 0x00222910 */

loc_0022577E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46C00C);
    MEM32(ebx + 0x38) = eax;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0x46BFD4);
    PUSH32(esp, 0x46BF9C);
    ecx = esi;
    MEM8(ebx + 0x34) = LO8(eax);
    MEM8(ebx + 0x35) = LO8(eax);
    PUSH32(esp, 0x002257A0u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002257A0: ;
    eax = MEM32(0x5BC478);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 0x40) = 0x1F1F40;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002257C0
 * Original: 0x002257C0 - 0x002258BE (254 bytes, 71 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002257C0(void)
{

loc_002257C0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC488);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 7);
    PUSH32(esp, 0x46C0D0);
    ecx = esi;
    PUSH32(esp, 0x002257E0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002257E0: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4);
    eax = MEM32(ecx);
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00225806u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225806: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebx = MEM32(ecx + edi * 4 + 4);
    PUSH32(esp, 0x00225815u); RECOMP_ABI_CALL(0x00222B40u, sub_00222B40); /* call 0x00222B40 */

loc_00225815: ;
    MEM32(ebx + 0x38) = eax;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebx = MEM32(eax + edi * 4 + 0xC);
    PUSH32(esp, 0x00225827u); RECOMP_ABI_CALL(0x00223B90u, sub_00223B90); /* call 0x00223B90 */

loc_00225827: ;
    MEM32(ebx + 0x38) = eax;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4 + 0x10);
    eax = MEM32(ecx);
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00225849u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225849: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebx = MEM32(ecx + edi * 4 + 0x14);
    edx = MEM32(0x46A660);
    eax = MEM32(ebx);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x10) = edx;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0022586Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022586C: ;
    MEM32(ebx + 0x34) = 0x221470;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    edx = MEM32(0x46A664);
    ecx = MEM32(eax + edi * 4 + 0x18);
    eax = MEM32(ecx);
    MEM32(esp + 0xC) = edx;
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00225894u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225894: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46C0B4);
    PUSH32(esp, 0x46C098);
    PUSH32(esp, 0x46C07C);
    ecx = esi;
    PUSH32(esp, 0x002258ABu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002258AB: ;
    eax = MEM32(0x5BC488);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 0x40) = 0x1F1F40;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002258C0
 * Original: 0x002258C0 - 0x00225A37 (375 bytes, 103 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002258C0(void)
{

loc_002258C0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC498);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 0x13);
    PUSH32(esp, 0x46C1E0);
    ecx = esi;
    PUSH32(esp, 0x002258E0u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002258E0: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4);
    MEM8(eax + 0x24) = 3;
    MEM8(eax + 0x26) = 0;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + edi * 4 + 0x18);
    edx = MEM32(ecx);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00225918u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225918: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4 + 0x24);
    eax = MEM32(ecx);
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = 8;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00225937u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225937: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebx = MEM32(ecx + edi * 4 + 0x28);
    PUSH32(esp, 0x00225946u); RECOMP_ABI_CALL(0x00222B40u, sub_00222B40); /* call 0x00222B40 */

loc_00225946: ;
    MEM32(ebx + 0x38) = eax;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebx = MEM32(eax + edi * 4 + 0x30);
    PUSH32(esp, 0x00225958u); RECOMP_ABI_CALL(0x00223B90u, sub_00223B90); /* call 0x00223B90 */

loc_00225958: ;
    MEM32(ebx + 0x38) = eax;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4 + 0x34);
    eax = MEM32(ecx);
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0022597Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022597A: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebx = MEM32(ecx + edi * 4 + 0x38);
    edx = MEM32(0x5BC57C);
    eax = MEM32(ebx);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x10) = edx;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0022599Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022599D: ;
    MEM32(ebx + 0x34) = 0x2214D0;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebx = MEM32(eax + edi * 4 + 0x3C);
    ecx = MEM32(0x46A3EC);
    edx = MEM32(ebx);
    eax = esp + 0xC;
    MEM32(esp + 0xC) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x002259C7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002259C7: ;
    MEM32(ebx + 0x34) = 0x2214A0;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(0x46A3F0);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4 + 0x40);
    edx = MEM32(ecx);
    MEM32(esp + 0xC) = eax;
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x002259EEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002259EE: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4 + 0x48);
    eax = MEM32(ecx);
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = 0x10;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00225A0Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225A0D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46C190);
    PUSH32(esp, 0x46C140);
    PUSH32(esp, 0x46C0F0);
    ecx = esi;
    PUSH32(esp, 0x00225A24u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00225A24: ;
    eax = MEM32(0x5BC498);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 0x40) = 0x1F1F40;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00225A40
 * Original: 0x00225A40 - 0x00225AC9 (137 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225A40(void)
{

loc_00225A40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC49C);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x46C2A4);
    ecx = esi;
    PUSH32(esp, 0x00225A5Eu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00225A5E: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4);
    eax = MEM32(ecx);
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00225A7Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225A7C: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + edi * 4 + 4);
    edx = MEM32(ecx);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = 4;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00225A9Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225A9B: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebx = MEM32(edx + edi * 4 + 0x24);
    PUSH32(esp, 0x00225AAAu); RECOMP_ABI_CALL(0x00222B40u, sub_00222B40); /* call 0x00222B40 */

loc_00225AAA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46C27C);
    PUSH32(esp, 0x46C254);
    PUSH32(esp, 0x46C22C);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00225AC4u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00225AC4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00225AD0
 * Original: 0x00225AD0 - 0x00225B59 (137 bytes, 43 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225AD0(void)
{

loc_00225AD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC4A0);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 9);
    PUSH32(esp, 0x46C338);
    ecx = esi;
    PUSH32(esp, 0x00225AEEu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00225AEE: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4);
    eax = MEM32(ecx);
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00225B0Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225B0C: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + edi * 4 + 4);
    edx = MEM32(ecx);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = 4;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00225B2Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225B2B: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebx = MEM32(edx + edi * 4 + 0x20);
    PUSH32(esp, 0x00225B3Au); RECOMP_ABI_CALL(0x00222B40u, sub_00222B40); /* call 0x00222B40 */

loc_00225B3A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46C314);
    PUSH32(esp, 0x46C2F0);
    PUSH32(esp, 0x46C2CC);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00225B54u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00225B54: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00225B60
 * Original: 0x00225B60 - 0x00225C11 (177 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00225B60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC4A4);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x46C3EC);
    ecx = esi;
    PUSH32(esp, 0x00225B7Eu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00225B7E: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4);
    eax = MEM32(ecx);
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00225B9Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225B9C: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + edi * 4 + 4);
    edx = MEM32(ecx);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = 4;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00225BBBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225BBB: ;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(0x5BC180);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    edx = MEM32(ecx + 8);
    ebx = MEM32(edx + edi * 4 + 0x1C);
    if (TEST_NZ(_fa, _fb)) goto loc_00225BDB; /* jne: not equal / not zero */

loc_00225BCE: ;
    PUSH32(esp, 0x21B7D0);
    PUSH32(esp, 0x00225BD8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00225BD8: ;
    esp = esp + 4;

loc_00225BDB: ;
    eax = MEM32(0x5BC180);
    MEM32(ebx + 0x3C) = eax;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebx = MEM32(edx + edi * 4 + 0x2C);
    PUSH32(esp, 0x00225BF2u); RECOMP_ABI_CALL(0x00222B40u, sub_00222B40); /* call 0x00222B40 */

loc_00225BF2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46C3BC);
    PUSH32(esp, 0x46C38C);
    PUSH32(esp, 0x46C35C);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00225C0Cu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00225C0C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00225C20
 * Original: 0x00225C20 - 0x00225D33 (275 bytes, 80 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225C20(void)
{

loc_00225C20: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC4B0);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x46C494);
    ecx = esi;
    PUSH32(esp, 0x00225C40u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00225C40: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4);
    eax = MEM32(ecx);
    edx = esp + 0xC;
    ebx = ebx | 0xFFFFFFFFu;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00225C5Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225C5D: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + edi * 4 + 8);
    edx = MEM32(ecx);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00225C7Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225C7C: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4 + 0x10);
    eax = MEM32(ecx);
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = 4;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00225C9Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225C9B: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebx = MEM32(ecx + edi * 4 + 0x14);
    PUSH32(esp, 0x00225CAAu); RECOMP_ABI_CALL(0x00222B40u, sub_00222B40); /* call 0x00222B40 */

loc_00225CAA: ;
    MEM32(ebx + 0x38) = eax;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebx = MEM32(eax + edi * 4 + 0x1C);
    PUSH32(esp, 0x00225CBCu); RECOMP_ABI_CALL(0x00223B90u, sub_00223B90); /* call 0x00223B90 */

loc_00225CBC: ;
    MEM32(ebx + 0x38) = eax;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(0x46A658);
    ebx = MEM32(edx + edi * 4 + 0x20);
    edx = MEM32(ebx);
    MEM32(esp + 0xC) = eax;
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00225CE1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225CE1: ;
    MEM32(ebx + 0x34) = 0x221500;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(0x46A65C);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4 + 0x24);
    edx = MEM32(ecx);
    MEM32(esp + 0xC) = eax;
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00225D08u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225D08: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46C46C);
    PUSH32(esp, 0x46C444);
    PUSH32(esp, 0x46C41C);
    ecx = esi;
    PUSH32(esp, 0x00225D1Fu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00225D1F: ;
    ecx = MEM32(0x5BC4B0);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x40) = 0x1F1F40;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00225D40
 * Original: 0x00225D40 - 0x00225DFB (187 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225D40(void)
{

loc_00225D40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC4B4);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 9);
    PUSH32(esp, 0x46C528);
    ecx = esi;
    PUSH32(esp, 0x00225D5Eu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00225D5E: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4);
    eax = MEM32(ecx);
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00225D7Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225D7C: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebx = MEM32(ecx + edi * 4 + 0xC);
    PUSH32(esp, 0x00225D8Bu); RECOMP_ABI_CALL(0x00223470u, sub_00223470); /* call 0x00223470 */

loc_00225D8B: ;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + edi * 4 + 0x10);
    edx = MEM32(ecx);
    eax = esp + 0xC;
    ebx = 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00225DB2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225DB2: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4 + 0x1C);
    eax = MEM32(ecx);
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00225DCDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225DCD: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebx = MEM32(ecx + edi * 4 + 0x20);
    PUSH32(esp, 0x00225DDCu); RECOMP_ABI_CALL(0x00222B40u, sub_00222B40); /* call 0x00222B40 */

loc_00225DDC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46C504);
    PUSH32(esp, 0x46C4E0);
    PUSH32(esp, 0x46C4BC);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00225DF6u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00225DF6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00225E00
 * Original: 0x00225E00 - 0x00225F0D (269 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225E00(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00225E00: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00225E19; /* jle: less or equal (signed <=) */

loc_00225E09: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00225E17; /* jge: greater or equal (signed >=) */

loc_00225E0E: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00225E27;

loc_00225E17: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00225E19: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00225E25; /* jne: not equal / not zero */

loc_00225E1B: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00225E27; /* jne: not equal / not zero */

loc_00225E25: ;
    ecx = 0; /* xor self */

loc_00225E27: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00225E35u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225E35: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00225E3Bu); RECOMP_ABI_CALL(0x002252C0u, sub_002252C0); /* call 0x002252C0 */

loc_00225E3B: ;
    esp = esp + 4;
    PUSH32(esp, 0x3FA55C);
    esi = eax;
    PUSH32(esp, 0x00225E4Au); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00225E4A: ;
    ecx = eax;
    PUSH32(esp, 0x00225E51u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_00225E51: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00225E5A; /* je: equal / zero */

loc_00225E57: ;
    MEM32(edi + -4) = MEM32(edi + -4) + 1;
    _fa = (uint32_t)(MEM32(edi + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00225E5A: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00225E69; /* je: equal / zero */

loc_00225E61: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00225E69u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00225E69: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esi + 0xC) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_00225E78; /* je: equal / zero */

loc_00225E70: ;
    ecx = edi + -8;
    PUSH32(esp, 0x00225E78u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00225E78: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM32(esi + 8) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00225E86u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225E86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00225E94; /* je: equal / zero */

loc_00225E8A: ;
    SET_LO16(ecx, MEM16(eax + 0x12));
    MEM16(esi + 0x10) = LO16(ecx);
    goto loc_00225E9A;

loc_00225E94: ;
    MEM16(esi + 0x10) = 0xFFFF;

loc_00225E9A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00225EA1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225EA1: ;
    MEM16(esi + 0x14) = LO16(eax);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00225EB1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00225EB1: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00225EBA; /* je: equal / zero */

loc_00225EB8: ;
    MEM32(eax) = esi;

loc_00225EBA: ;
    ecx = MEM32(esi + 4);
    edi = MEM32(esp + 0xC);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ecx;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00225EDE; /* jge: greater or equal (signed >=) */

loc_00225ED0: ;
    edx = MEM32(edi + 0x10);
    ecx = ebx + 1;
    MEM32(edi + 8) = ecx;
    MEM32(edx + ebx * 4) = esi;
    goto loc_00225EF1;

loc_00225EDE: ;
    PUSH32(esp, 4);
    eax = ebx + 1;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00225EEBu); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00225EEB: ;
    ecx = MEM32(edi + 0x10);
    MEM32(ecx + ebx * 4) = esi;

loc_00225EF1: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    POP32(esp, ebx);
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_00225F0B; /* jne: not equal / not zero */

loc_00225F03: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00225F0B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00225F10
 * Original: 0x00225F10 - 0x00225FE1 (209 bytes, 65 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225F10(void)
{

loc_00225F10: ;
    eax = MEM32(0x5BC4C8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO8(ebx, 0); /* xor self */
    MEM8(eax + 0x19) = LO8(ebx);
    esi = MEM32(0x5BC4C8);
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xC);
    PUSH32(esp, 9);
    PUSH32(esp, 0x46C5B8);
    ecx = esi;
    PUSH32(esp, 0x00225F37u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00225F37: ;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + edi * 4);
    MEM16(eax + 0x14) = 0x34;
    MEM8(eax + 0x26) = LO8(ebx);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4 + 4);
    MEM8(eax + 0x26) = LO8(ebx);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4 + 8);
    MEM8(eax + 0x26) = LO8(ebx);
    ecx = 4;
    MEM16(eax + 0x14) = LO16(ecx);
    eax = MEM32(esi + 0x28);
    edx = MEM32(eax + 8);
    eax = MEM32(edx + edi * 4 + 0xC);
    MEM8(eax + 0x26) = LO8(ebx);
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + edi * 4 + 0x10);
    MEM16(eax + 0x14) = LO16(ecx);
    MEM8(eax + 0x26) = LO8(ebx);
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    edx = MEM32(eax + edi * 4 + 0x14);
    MEM8(edx + 0x26) = LO8(ebx);
    eax = MEM32(esi + 0x28);
    edx = MEM32(eax + 8);
    eax = MEM32(edx + edi * 4 + 0x18);
    MEM16(eax + 0x14) = LO16(ecx);
    MEM8(eax + 0x26) = LO8(ebx);
    eax = MEM32(esi + 0x28);
    edx = MEM32(eax + 8);
    eax = MEM32(edx + edi * 4 + 0x1C);
    MEM8(eax + 0x26) = LO8(ebx);
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + edi * 4 + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, 0x46C594);
    PUSH32(esp, 0x46C570);
    MEM16(eax + 0x14) = LO16(ecx);
    PUSH32(esp, 0x46C54C);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00225FDDu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00225FDD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00225FF0
 * Original: 0x00225FF0 - 0x002260E9 (249 bytes, 75 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00225FF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00225FF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC4CC);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 8);
    PUSH32(esp, 0x46C63C);
    ecx = esi;
    PUSH32(esp, 0x0022600Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0022600F: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4);
    PUSH32(esp, 0x0022601Du); RECOMP_ABI_CALL(0x00223B90u, sub_00223B90); /* call 0x00223B90 */

loc_0022601D: ;
    MEM32(ebp + 0x38) = eax;
    SET_LO8(ebx, 1);
    MEM8(ebp + 0x34) = LO8(ebx);
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebp = MEM32(ecx + edi * 4 + 4);
    PUSH32(esp, 0x00226034u); RECOMP_ABI_CALL(0x00223B90u, sub_00223B90); /* call 0x00223B90 */

loc_00226034: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebp = MEM32(eax + edi * 4 + 8);
    PUSH32(esp, 0x00226049u); RECOMP_ABI_CALL(0x00223B90u, sub_00223B90); /* call 0x00223B90 */

loc_00226049: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4 + 0xC);
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = 4;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0022606Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022606E: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    eax = MEM32(0x5BC220);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebp = MEM32(ecx + edi * 4 + 0x18);
    if (TEST_NZ(_fa, _fb)) goto loc_0022608E; /* jne: not equal / not zero */

loc_00226081: ;
    PUSH32(esp, 0x21EFB0);
    PUSH32(esp, 0x0022608Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022608B: ;
    esp = esp + 4;

loc_0022608E: ;
    edx = MEM32(0x5BC220);
    MEM32(ebp + 0x3C) = edx;
    MEM8(ebp + 0x35) = LO8(ebx);
    MEM8(ebp + 0x40) = LO8(ebx);
    MEM8(ebp + 0x41) = LO8(ebx);
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + edi * 4 + 0x1C);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = 0x2000;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x002260BFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002260BF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46C61C);
    PUSH32(esp, 0x46C5FC);
    PUSH32(esp, 0x46C5DC);
    ecx = esi;
    PUSH32(esp, 0x002260D6u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002260D6: ;
    ecx = MEM32(0x5BC4CC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx + 0x40) = 0x1F25A0;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002260F0
 * Original: 0x002260F0 - 0x00226170 (128 bytes, 38 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002260F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */

loc_002260F0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC4E0);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 5);
    PUSH32(esp, 0x46C698);
    ecx = esi;
    PUSH32(esp, 0x0022610Du); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0022610D: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4);
    PUSH32(esp, 0x0022611Bu); RECOMP_ABI_CALL(0x00223B90u, sub_00223B90); /* call 0x00223B90 */

loc_0022611B: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ebp = MEM32(ecx + edi * 4 + 4);
    PUSH32(esp, 0x00226131u); RECOMP_ABI_CALL(0x00223B90u, sub_00223B90); /* call 0x00223B90 */

loc_00226131: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + edi * 4 + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x46C684);
    PUSH32(esp, 0x46C670);
    MEM16(ecx + 0x14) = 4;
    PUSH32(esp, 0x46C65C);
    ecx = esi;
    PUSH32(esp, 0x0022615Fu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0022615F: ;
    edx = MEM32(0x5BC4E0);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx + 0x40) = 0x1F21B0;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00226170
 * Original: 0x00226170 - 0x002261F2 (130 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226170(void)
{

loc_00226170: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC4E4);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 4);
    PUSH32(esp, 0x46C6DC);
    ecx = esi;
    PUSH32(esp, 0x0022618Du); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0022618D: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4);
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 1;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x002261ABu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002261AB: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax + 8);
    ecx = MEM32(ecx + edi * 4 + 4);
    edx = MEM32(ecx);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 1;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x002261CAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002261CA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46C6CC);
    PUSH32(esp, 0x46C6BC);
    PUSH32(esp, 0x46C6AC);
    ecx = esi;
    PUSH32(esp, 0x002261E1u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002261E1: ;
    ecx = MEM32(0x5BC4E4);
    POP32(esp, edi);
    MEM32(ecx + 0x40) = 0x1F2390;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00226200
 * Original: 0x00226200 - 0x00226245 (69 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226200(void)
{

loc_00226200: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BC4FC);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x46C6F8);
    ecx = esi;
    PUSH32(esp, 0x0022621Cu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0022621C: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x46C6F4);
    PUSH32(esp, 0x46C6F0);
    PUSH32(esp, 0x46C6EC);
    ecx = esi;
    MEM16(eax + 0x14) = 4;
    PUSH32(esp, 0x00226242u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00226242: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00226250
 * Original: 0x00226250 - 0x002263B4 (356 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226250(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00226250: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00226269; /* jle: less or equal (signed <=) */

loc_00226259: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00226267; /* jge: greater or equal (signed >=) */

loc_0022625E: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00226277;

loc_00226267: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00226269: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00226275; /* jne: not equal / not zero */

loc_0022626B: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00226277; /* jne: not equal / not zero */

loc_00226275: ;
    ecx = 0; /* xor self */

loc_00226277: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00226285u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00226285: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022628Bu); RECOMP_ABI_CALL(0x002252C0u, sub_002252C0); /* call 0x002252C0 */

loc_0022628B: ;
    esi = eax;
    esp = esp + 4;
    PUSH32(esp, 0x3FA6D0);
    MEM32(esi + 8) = 4;
    MEM32(esi + 0x1C) = 0x5BC050;
    PUSH32(esp, 0x002262A8u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_002262A8: ;
    ecx = eax;
    PUSH32(esp, 0x002262AFu); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_002262AF: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002262B8; /* je: equal / zero */

loc_002262B5: ;
    MEM32(edi + -4) = MEM32(edi + -4) + 1;
    _fa = (uint32_t)(MEM32(edi + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002262B8: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002262C7; /* je: equal / zero */

loc_002262BF: ;
    ecx = eax + -8;
    PUSH32(esp, 0x002262C7u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_002262C7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esi + 0xC) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_002262D6; /* je: equal / zero */

loc_002262CE: ;
    ecx = edi + -8;
    PUSH32(esp, 0x002262D6u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_002262D6: ;
    MEM8(esi + 0x26) = 0;
    MEM8(esi + 0x24) = 3;
    ecx = MEM32(0x5BC554);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002262EAu); RECOMP_ABI_CALL(0x00209390u, sub_00209390); /* call 0x00209390 */

loc_002262EA: ;
    edx = MEM32(esi + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00226301; /* jne: not equal / not zero */

loc_002262FA: ;
    ecx = esi;
    PUSH32(esp, 0x00226301u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00226301: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0022631A; /* jle: less or equal (signed <=) */

loc_0022630A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00226318; /* jge: greater or equal (signed >=) */

loc_0022630F: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00226328;

loc_00226318: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_0022631A: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00226326; /* jne: not equal / not zero */

loc_0022631C: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00226328; /* jne: not equal / not zero */

loc_00226326: ;
    ecx = 0; /* xor self */

loc_00226328: ;
    edx = MEM32(0x46A684);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00226334u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00226334: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022633Au); RECOMP_ABI_CALL(0x002252C0u, sub_002252C0); /* call 0x002252C0 */

loc_0022633A: ;
    esi = eax;
    esp = esp + 4;
    PUSH32(esp, 0x3FA6C0);
    MEM32(esi + 8) = 4;
    MEM32(esi + 0x1C) = 0x5BB864;
    PUSH32(esp, 0x00226357u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_00226357: ;
    ecx = eax;
    PUSH32(esp, 0x0022635Eu); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_0022635E: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00226367; /* je: equal / zero */

loc_00226364: ;
    MEM32(edi + -4) = MEM32(edi + -4) + 1;
    _fa = (uint32_t)(MEM32(edi + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00226367: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00226376; /* je: equal / zero */

loc_0022636E: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00226376u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00226376: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    MEM32(esi + 0xC) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_00226385; /* je: equal / zero */

loc_0022637D: ;
    ecx = edi + -8;
    PUSH32(esp, 0x00226385u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00226385: ;
    MEM8(esi + 0x26) = 0;
    MEM8(esi + 0x24) = 3;
    ecx = MEM32(0x5BC554);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00226399u); RECOMP_ABI_CALL(0x00209390u, sub_00209390); /* call 0x00209390 */

loc_00226399: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_002263B2; /* jne: not equal / not zero */

loc_002263AA: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_002263B2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002263C0
 * Original: 0x002263C0 - 0x002263E7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002263C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002263C0: ;
    eax = MEM32(0x5BC4DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002263D4; /* je: equal / zero */

loc_002263C9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002263E6; /* jne: not equal / not zero */

loc_002263D4: ;
    PUSH32(esp, 0x224B20);
    PUSH32(esp, 0x002263DEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002263DE: ;
    eax = MEM32(0x5BC4DC);
    esp = esp + 4;

loc_002263E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002263F0
 * Original: 0x002263F0 - 0x0022647B (139 bytes, 40 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002263F0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002263F0: ;
    eax = MEM32(0x5BC190);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM8(eax + 0x18) = 1;
    esi = MEM32(0x5BC190);
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xC);
    PUSH32(esp, 2);
    PUSH32(esp, 0x46C714);
    ecx = esi;
    PUSH32(esp, 0x00226416u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00226416: ;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebp = MEM32(eax + edi * 4);
    PUSH32(esp, 0x00226424u); RECOMP_ABI_CALL(0x00223960u, sub_00223960); /* call 0x00223960 */

loc_00226424: ;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebp = MEM32(edx + edi * 4 + 4);
    PUSH32(esp, 0x0022643Au); RECOMP_ABI_CALL(0x00223B90u, sub_00223B90); /* call 0x00223B90 */

loc_0022643A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46C70C);
    PUSH32(esp, 0x46C704);
    PUSH32(esp, 0x46C6FC);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    PUSH32(esp, 0x00226458u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00226458: ;
    eax = MEM32(0x5BC190);
    MEM32(eax + 0x3C) = 0x2263C0;
    ecx = MEM32(0x5BC508);
    ecx = MEM32(ecx + 0x28);
    PUSH32(esp, 0x20B4D0);
    PUSH32(esp, 0x00226477u); RECOMP_ABI_CALL(0x001F3680u, sub_001F3680); /* call 0x001F3680 */

loc_00226477: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00226480
 * Original: 0x00226480 - 0x0022648B (11 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226480(void)
{

loc_00226480: ;
    eax = MEM32(ecx + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00226489u); RECOMP_ABI_CALL(0x00225E00u, sub_00225E00); /* call 0x00225E00 */

loc_00226489: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00226490
 * Original: 0x00226490 - 0x002264C9 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226490(void)
{

loc_00226490: ;
    PUSH32(esp, 0x00226495u); RECOMP_ABI_CALL(0x00227F90u, sub_00227F90); /* call 0x00227F90 */

loc_00226495: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x226170);
    PUSH32(esp, 0x21C240);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x3FA6F0);
    PUSH32(esp, 0x2265E0);
    PUSH32(esp, 0x1E6890);
    PUSH32(esp, 0x226660);
    PUSH32(esp, 0x5BC4E4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002264C5u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002264C5: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002264D0
 * Original: 0x002264D0 - 0x00226504 (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002264D0(void)
{

loc_002264D0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x226250);
    PUSH32(esp, 0x1EA570);
    PUSH32(esp, 8);
    PUSH32(esp, 0x3FA704);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2123A0);
    PUSH32(esp, 0x1F7DA0);
    PUSH32(esp, 0x5BC554);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00226500u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00226500: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00226510
 * Original: 0x00226510 - 0x00226549 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226510(void)
{

loc_00226510: ;
    PUSH32(esp, 0x00226515u); RECOMP_ABI_CALL(0x00227F90u, sub_00227F90); /* call 0x00227F90 */

loc_00226515: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2203B0);
    PUSH32(esp, 0x213B90);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x3FA710);
    PUSH32(esp, 0x219560);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BC26C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00226545u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00226545: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00226550
 * Original: 0x00226550 - 0x0022658C (60 bytes, 15 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226550(void)
{

loc_00226550: ;
    PUSH32(esp, 0x00226555u); RECOMP_ABI_CALL(0x00227F90u, sub_00227F90); /* call 0x00227F90 */

loc_00226555: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x21BE40);
    PUSH32(esp, 0x214680);
    PUSH32(esp, 0x200310);
    PUSH32(esp, 8);
    PUSH32(esp, 0x3FA720);
    PUSH32(esp, 0x1F2C10);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BC370);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00226588u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00226588: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00226590
 * Original: 0x00226590 - 0x002265CC (60 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226590(void)
{

loc_00226590: ;
    PUSH32(esp, 0x00226595u); RECOMP_ABI_CALL(0x00227F90u, sub_00227F90); /* call 0x00227F90 */

loc_00226595: ;
    PUSH32(esp, 0x46C71C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x221A70);
    PUSH32(esp, 0x21A010);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FA730);
    PUSH32(esp, 0x1F2E80);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BC438);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002265C8u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002265C8: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002265D0
 * Original: 0x002265D0 - 0x002265DC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002265D0(void)
{

loc_002265D0: ;
    PUSH32(esp, 0x226590);
    PUSH32(esp, 0x002265DAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002265DA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002265E0
 * Original: 0x002265E0 - 0x00226607 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002265E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002265E0: ;
    eax = MEM32(0x5BC4E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002265F4; /* je: equal / zero */

loc_002265E9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00226606; /* jne: not equal / not zero */

loc_002265F4: ;
    PUSH32(esp, 0x226490);
    PUSH32(esp, 0x002265FEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002265FE: ;
    eax = MEM32(0x5BC4E4);
    esp = esp + 4;

loc_00226606: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00226610
 * Original: 0x00226610 - 0x0022661D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226610(void)
{

loc_00226610: ;
    eax = MEM32(0x5BC1F8);
    MEM32(eax + 0x3C) = 0x2265E0;
    esp += 4; return; /* ret */

}

/**
 * sub_00226620
 * Original: 0x00226620 - 0x00226659 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226620(void)
{

loc_00226620: ;
    PUSH32(esp, 0x00226625u); RECOMP_ABI_CALL(0x00227F90u, sub_00227F90); /* call 0x00227F90 */

loc_00226625: ;
    PUSH32(esp, 0x46C724);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20BD50);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FA744);
    PUSH32(esp, 0x1F2EB0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BC434);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00226655u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00226655: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00226660
 * Original: 0x00226660 - 0x00226696 (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226660(void)
{

loc_00226660: ;
    PUSH32(esp, 0x00226665u); RECOMP_ABI_CALL(0x00227F90u, sub_00227F90); /* call 0x00227F90 */

loc_00226665: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x226610);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x3FA75C);
    PUSH32(esp, 0x1F2390);
    PUSH32(esp, 0x1A4460);
    PUSH32(esp, 0x226510);
    PUSH32(esp, 0x5BC1F8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00226692u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00226692: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002266A0
 * Original: 0x002266A0 - 0x002266AC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002266A0(void)
{

loc_002266A0: ;
    PUSH32(esp, 0x226620);
    PUSH32(esp, 0x002266AAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002266AA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002266B0
 * Original: 0x002266B0 - 0x002266E9 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002266B0(void)
{

loc_002266B0: ;
    PUSH32(esp, 0x002266B5u); RECOMP_ABI_CALL(0x00227F90u, sub_00227F90); /* call 0x00227F90 */

loc_002266B5: ;
    PUSH32(esp, 0x46C72C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2232C0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FA768);
    PUSH32(esp, 0x2195F0);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BC444);
    PUSH32(esp, 1);
    PUSH32(esp, 0x002266E5u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002266E5: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002266F0
 * Original: 0x002266F0 - 0x002266FC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002266F0(void)
{

loc_002266F0: ;
    PUSH32(esp, 0x226660);
    PUSH32(esp, 0x002266FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002266FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00226700
 * Original: 0x00226700 - 0x00226733 (51 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226700(void)
{

loc_00226700: ;
    PUSH32(esp, 0x00226705u); RECOMP_ABI_CALL(0x00227F90u, sub_00227F90); /* call 0x00227F90 */

loc_00226705: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FA774);
    PUSH32(esp, 0x1F2E50);
    PUSH32(esp, 0x1AA550);
    PUSH32(esp, 0x2266B0);
    PUSH32(esp, 0x5BC43C);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0022672Fu); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0022672F: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00226740
 * Original: 0x00226740 - 0x0022677C (60 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226740(void)
{

loc_00226740: ;
    PUSH32(esp, 0x00226745u); RECOMP_ABI_CALL(0x00227F90u, sub_00227F90); /* call 0x00227F90 */

loc_00226745: ;
    PUSH32(esp, 0x46C738);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2260F0);
    PUSH32(esp, 0x21C200);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x3FA784);
    PUSH32(esp, 0x227420);
    PUSH32(esp, 0x20B4E0);
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x5BC4E0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00226778u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00226778: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00226780
 * Original: 0x00226780 - 0x002269BC (572 bytes, 195 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226780(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00226780: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 8);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002269B6; /* jne: not equal / not zero */

loc_00226794: ;
    eax = ZX8(MEM8(ebx + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = MEM32(0x5BC53C);
    PUSH32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_002267A9; /* jne: not equal / not zero */

loc_002267A3: ;
    ecx = MEM32(0x5BC538);

loc_002267A9: ;
    edx = MEM32(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    esi = MEM32(edx + eax * 4);
    PUSH32(esp, 0x226620);
    PUSH32(esp, 0x002267BAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002267BA: ;
    ecx = MEM32(0x5BC434);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002267C9u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002267C9: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002267D2; /* je: equal / zero */

loc_002267CF: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002267D2: ;
    ecx = MEM32(ebx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002267EE; /* je: equal / zero */

loc_002267D9: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002267EE; /* jne: not equal / not zero */

loc_002267E9: ;
    PUSH32(esp, 0x002267EEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002267EE: ;
    ecx = esi;
    MEM32(ebx + 8) = esi;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00226808; /* jne: not equal / not zero */

loc_00226803: ;
    PUSH32(esp, 0x00226808u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00226808: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0022680Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022680F: ;
    eax = MEM32(0x5BC508);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022681F; /* jne: not equal / not zero */

loc_00226819: ;
    MEM32(esp + 0x10) = ebp;
    goto loc_00226837;

loc_0022681F: ;
    ecx = MEM32(0x5BB878);
    PUSH32(esp, 0x3FA774);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x18);
    PUSH32(esp, 0x00226833u); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_00226833: ;
    MEM32(esp + 0x10) = eax;

loc_00226837: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x00226840u); RECOMP_ABI_CALL(0x001EA500u, sub_001EA500); /* call 0x001EA500 */

loc_00226840: ;
    ecx = MEM32(ebx + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx + 0xC) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00226854; /* jl: less (signed <) */

loc_0022684C: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00226854u); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_00226854: ;
    edx = MEM32(ebx + 0xC);
    ecx = MEM32(ebx + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00226860u); RECOMP_ABI_CALL(0x002098D0u, sub_002098D0); /* call 0x002098D0 */

loc_00226860: ;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC), ebp (32-bit) */
    MEM32(esp + 0xC) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_002269B5; /* jle: less or equal (signed <=) */

loc_0022686D: ;
    PUSH32(esp, edi);
    goto loc_00226874;

loc_00226870: ;
    ebp = MEM32(esp + 0x10);

loc_00226874: ;
    ecx = MEM32(esp + 0x14);
    eax = ebp + 1;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x00226885u); RECOMP_ABI_CALL(0x001F7A50u, sub_001F7A50); /* call 0x001F7A50 */

loc_00226885: ;
    ecx = MEM32(0x5BC53C);
    edi = eax;
    eax = ZX8(MEM8(ebx + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022689B; /* jne: not equal / not zero */

loc_00226895: ;
    ecx = MEM32(0x5BC538);

loc_0022689B: ;
    edx = MEM32(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    esi = MEM32(edx + eax * 4);
    PUSH32(esp, 0x226590);
    PUSH32(esp, 0x002268ACu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002268AC: ;
    ecx = MEM32(0x5BC438);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002268BBu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002268BB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    esi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_002268C4; /* je: equal / zero */

loc_002268C1: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002268C4: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002268E0; /* je: equal / zero */

loc_002268CB: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002268E0; /* jne: not equal / not zero */

loc_002268DB: ;
    PUSH32(esp, 0x002268E0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002268E0: ;
    MEM32(esi + 8) = edi;
    edi = MEM32(edi + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002268ECu); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_002268EC: ;
    ecx = eax;
    PUSH32(esp, 0x002268F3u); RECOMP_ABI_CALL(0x0020DA80u, sub_0020DA80); /* call 0x0020DA80 */

loc_002268F3: ;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00226940; /* je: equal / zero */

loc_002268FE: ;
    edi = eax + -8;
    MEM32(edi + 4) = MEM32(edi + 4) - 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00226940; /* jne: not equal / not zero */

loc_00226906: ;
    ebp = MEM32(edi);
    ecx = MEM32(ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00226911u); RECOMP_ABI_CALL(0x001F87A0u, sub_001F87A0); /* call 0x001F87A0 */

loc_00226911: ;
    eax = edi + 8;
    edx = eax + 1;

loc_00226917: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00226917; /* jne: not equal / not zero */

loc_0022691E: ;
    eax = eax - edx;
    eax = eax + 9;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0022692Cu); RECOMP_ABI_CALL(0x001EBA30u, sub_001EBA30); /* call 0x001EBA30 */

loc_0022692C: ;
    SET_LO8(eax, MEM8(ebp + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022693C; /* je: equal / zero */

loc_00226933: ;
    ecx = MEM32(ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0022693Cu); RECOMP_ABI_CALL(0x0020EEE0u, sub_0020EEE0); /* call 0x0020EEE0 */

loc_0022693C: ;
    ebp = MEM32(esp + 0x10);

loc_00226940: ;
    eax = MEM32(esp + 0x18);
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = 0;
    ecx = MEM32(esi + 4);
    edi = MEM32(ebx + 8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ecx;
    ecx = MEM32(edi + 0x10);
    ecx = MEM32(ecx + ebp * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00226977; /* je: equal / zero */

loc_00226962: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00226977; /* jne: not equal / not zero */

loc_00226972: ;
    PUSH32(esp, 0x00226977u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00226977: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022698C; /* je: equal / zero */

loc_0022697E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_0022698C; /* jl: less (signed <) */

loc_00226982: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0022698C; /* jge: greater or equal (signed >=) */

loc_00226986: ;
    edx = MEM32(edi + 0x10);
    MEM32(edx + ebp * 4) = esi;

loc_0022698C: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002269A3; /* jne: not equal / not zero */

loc_0022699C: ;
    ecx = esi;
    PUSH32(esp, 0x002269A3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002269A3: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0xC) (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00226870; /* jl: less (signed <) */

loc_002269B4: ;
    POP32(esp, edi);

loc_002269B5: ;
    POP32(esp, esi);

loc_002269B6: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_002269C0
 * Original: 0x002269C0 - 0x002269DE (30 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002269C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002269C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002269CF; /* jne: not equal / not zero */

loc_002269CA: ;
    PUSH32(esp, 0x002269CFu); RECOMP_ABI_CALL(0x00226780u, sub_00226780); /* call 0x00226780 */

loc_002269CF: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002269D9; /* jge: greater or equal (signed >=) */

loc_002269D5: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002269D9: ;
    eax = MEM32(esi + 8);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002269E0
 * Original: 0x002269E0 - 0x00226A7D (157 bytes, 73 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002269E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002269E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 8);
    PUSH32(esp, ebp);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_002269F3; /* jne: not equal / not zero */

loc_002269EE: ;
    PUSH32(esp, 0x002269F3u); RECOMP_ABI_CALL(0x00226780u, sub_00226780); /* call 0x00226780 */

loc_002269F3: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00226A03; /* jge: greater or equal (signed >=) */

loc_002269FB: ;
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00226A03: ;
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    SET_LO8(ecx, 1);
    MEM8(esp + 0xF) = LO8(ecx);
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00226A6A; /* jle: less or equal (signed <=) */

loc_00226A10: ;
    PUSH32(esp, esi);

loc_00226A11: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00226A64; /* je: equal / zero */

loc_00226A15: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(eax + 0x10);
    ebp = MEM32(ecx + edi * 4);
    esi = MEM32(esp + 0x18);
    eax = MEM32(ebp + 0xC);

loc_00226A25: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00226A49; /* jne: not equal / not zero */

loc_00226A2D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00226A45; /* je: equal / zero */

loc_00226A31: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00226A49; /* jne: not equal / not zero */

loc_00226A3B: ;
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00226A25; /* jne: not equal / not zero */

loc_00226A45: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    goto loc_00226A4E;

loc_00226A49: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */

loc_00226A4E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_NZ(_fa, _fb)) goto loc_00226A5A; /* jne: not equal / not zero */

loc_00226A52: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(ecx, 0); /* xor self */
    MEM8(esp + 0x13) = LO8(ecx);
    goto loc_00226A5F;

loc_00226A5A: ;
    SET_LO8(ecx, MEM8(esp + 0x13));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00226A5F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00226A11; /* jl: less (signed <) */

loc_00226A64: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00226A73; /* jne: not equal / not zero */

loc_00226A6A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00226A73: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00226A80
 * Original: 0x00226A80 - 0x00226B2E (174 bytes, 73 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00226A80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edi = ecx;
    PUSH32(esp, 0x00226A8Eu); RECOMP_ABI_CALL(0x002269E0u, sub_002269E0); /* call 0x002269E0 */

loc_00226A8E: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, ebx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00226A99; /* jne: not equal / not zero */

loc_00226A94: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00226A99: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00226AA2u); RECOMP_ABI_CALL(0x001F4010u, sub_001F4010); /* call 0x001F4010 */

loc_00226AA2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00226B26; /* jne: not equal / not zero */

loc_00226AA8: ;
    eax = ZX8(MEM8(edi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_00226ABC; /* jne: not equal / not zero */

loc_00226AB6: ;
    ecx = MEM32(0x5BC538);

loc_00226ABC: ;
    edx = MEM32(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(edx + eax * 4);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00226ACBu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00226ACB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00226B26; /* je: equal / zero */

loc_00226AD1: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x00226AD9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00226AD9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00226AFE; /* jne: not equal / not zero */

loc_00226ADD: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00226AF4; /* jne: not equal / not zero */

loc_00226AED: ;
    ecx = esi;
    PUSH32(esp, 0x00226AF4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00226AF4: ;
    esi = 0; /* xor self */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00226AFE: ;
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00226B07u); RECOMP_ABI_CALL(0x002068B0u, sub_002068B0); /* call 0x002068B0 */

loc_00226B07: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00226B1E; /* jne: not equal / not zero */

loc_00226B17: ;
    ecx = esi;
    PUSH32(esp, 0x00226B1Eu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00226B1E: ;
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x00226B26u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00226B26: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00226B30
 * Original: 0x00226B30 - 0x00226B3C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226B30(void)
{

loc_00226B30: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00226B3Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00226B3A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00226B40
 * Original: 0x00226B40 - 0x00226C40 (256 bytes, 92 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00226B40: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00226B9F; /* jne: not equal / not zero */

loc_00226B4E: ;
    esi = MEM32(edi + 0x74);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00226B58; /* je: equal / zero */

loc_00226B55: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00226B58: ;
    ecx = MEM32(edi + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00226B74; /* je: equal / zero */

loc_00226B5F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00226B74; /* jne: not equal / not zero */

loc_00226B6F: ;
    PUSH32(esp, 0x00226B74u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00226B74: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi + 0x74) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00226C2D; /* je: equal / zero */

loc_00226B83: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00226B91u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00226B91: ;
    edx = MEM32(esi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00226B9Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00226B9D: ;
    goto loc_00226C16;

loc_00226B9F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00226C2D; /* jne: not equal / not zero */

loc_00226BA7: ;
    eax = MEM32(edi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = edi + 0x74;
    if (TEST_Z(_fa, _fb)) goto loc_00226BC4; /* je: equal / zero */

loc_00226BB1: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_00226BC4: ;
    eax = ZX8(MEM8(edi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_00226BD8; /* jne: not equal / not zero */

loc_00226BD2: ;
    edx = MEM32(0x5BC538);

loc_00226BD8: ;
    ecx = MEM32(edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    esi = MEM32(ecx + eax * 4);
    PUSH32(esp, 0x226660);
    PUSH32(esp, 0x00226BE9u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00226BE9: ;
    ecx = MEM32(0x5BC1F8);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00226BF8u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00226BF8: ;
    esi = eax;
    edx = MEM32(esi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x1C) = esi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00226C0Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00226C0A: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00226C16u); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_00226C16: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ecx;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00226C2D; /* jne: not equal / not zero */

loc_00226C26: ;
    ecx = esi;
    PUSH32(esp, 0x00226C2Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00226C2D: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00226C40
 * Original: 0x00226C40 - 0x00226D12 (210 bytes, 73 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00226C40: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00226CBD; /* je: equal / zero */

loc_00226C4C: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00226D0D; /* jne: not equal / not zero */

loc_00226C57: ;
    eax = ZX8(MEM8(edi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_00226C6B; /* jne: not equal / not zero */

loc_00226C65: ;
    ecx = MEM32(0x5BC538);

loc_00226C6B: ;
    edx = MEM32(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    esi = MEM32(edx + eax * 4);
    PUSH32(esp, 0x226660);
    PUSH32(esp, 0x00226C7Cu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00226C7C: ;
    ecx = MEM32(0x5BC1F8);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00226C8Bu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00226C8B: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00226C99u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00226C99: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00226CB8; /* je: equal / zero */

loc_00226CA3: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00226CB8; /* jne: not equal / not zero */

loc_00226CB3: ;
    PUSH32(esp, 0x00226CB8u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00226CB8: ;
    MEM32(edi + 8) = esi;
    goto loc_00226CF6;

loc_00226CBD: ;
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00226D0D; /* je: equal / zero */

loc_00226CC4: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00226CE3; /* je: equal / zero */

loc_00226CCE: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00226CE3; /* jne: not equal / not zero */

loc_00226CDE: ;
    PUSH32(esp, 0x00226CE3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00226CE3: ;
    eax = esp + 0xC;
    MEM32(edi + 8) = 0;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00226CF6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00226CF6: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ecx;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00226D0D; /* jne: not equal / not zero */

loc_00226D06: ;
    ecx = esi;
    PUSH32(esp, 0x00226D0Du); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00226D0D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00226D20
 * Original: 0x00226D20 - 0x00226EC5 (421 bytes, 140 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00226D20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x34);
    MEM32(eax + 8) = 0x100;
    ecx = MEM32(esi + 0x34);
    MEM32(ecx + 0xC) = 0x20;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x34);
    ecx = MEM32(edi + 0x10);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00226D4E; /* jl: less (signed <) */

loc_00226D46: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00226D4Eu); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_00226D4E: ;
    eax = MEM32(edi + 0xC);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00226D59u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00226D59: ;
    ecx = MEM32(esi + 0x38);
    MEM32(ecx + 8) = 0x1000;
    edx = MEM32(esi + 0x38);
    MEM32(edx + 0xC) = 0x100;
    edi = MEM32(esi + 0x38);
    ecx = MEM32(edi + 0x10);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00226D83; /* jl: less (signed <) */

loc_00226D7B: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00226D83u); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_00226D83: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00226D8Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00226D8E: ;
    edx = MEM32(esi + 0x44);
    MEM32(edx + 8) = 0x200;
    eax = MEM32(esi + 0x44);
    MEM32(eax + 0xC) = 0x20;
    edi = MEM32(esi + 0x44);
    ecx = MEM32(edi + 0x10);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00226DB8; /* jl: less (signed <) */

loc_00226DB0: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00226DB8u); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_00226DB8: ;
    eax = MEM32(edi + 0xC);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00226DC3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00226DC3: ;
    ecx = MEM32(esi + 0x40);
    MEM32(ecx + 8) = 0x10000;
    edx = MEM32(esi + 0x40);
    MEM32(edx + 0xC) = 0x1000;
    edi = MEM32(esi + 0x40);
    ecx = MEM32(edi + 0x10);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00226DED; /* jl: less (signed <) */

loc_00226DE5: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00226DEDu); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_00226DED: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00226DF8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00226DF8: ;
    edx = MEM32(esi + 0x44);
    MEM32(edx + 8) = 0x2000;
    eax = MEM32(esi + 0x44);
    MEM32(eax + 0xC) = 0x100;
    edi = MEM32(esi + 0x44);
    ecx = MEM32(edi + 0x10);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00226E22; /* jl: less (signed <) */

loc_00226E1A: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00226E22u); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_00226E22: ;
    eax = MEM32(edi + 0xC);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00226E2Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00226E2D: ;
    ecx = MEM32(esi + 0x48);
    MEM32(ecx + 8) = 0x10000;
    edx = MEM32(esi + 0x48);
    MEM32(edx + 0xC) = 0x1000;
    edi = MEM32(esi + 0x48);
    ecx = MEM32(edi + 0x10);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00226E57; /* jl: less (signed <) */

loc_00226E4F: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00226E57u); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_00226E57: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x00226E62u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00226E62: ;
    ecx = MEM32(esi + 0x5C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00226E6Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00226E6A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00226E87; /* je: equal / zero */

loc_00226E6E: ;
    ecx = MEM32(esi + 0x4C);
    eax = 0x4000;
    MEM32(ecx + 8) = eax;
    edx = MEM32(esi + 0x4C);
    MEM32(edx + 0xC) = eax;
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, 0x00226E87u); RECOMP_ABI_CALL(0x0020DB10u, sub_0020DB10); /* call 0x0020DB10 */

loc_00226E87: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x50);
    edx = MEM32(ecx + 8);
    eax = eax + eax * 4;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00226EA2; /* jl: less (signed <) */

loc_00226E9A: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00226EA2u); RECOMP_ABI_CALL(0x00200AD0u, sub_00200AD0); /* call 0x00200AD0 */

loc_00226EA2: ;
    ecx = MEM32(esi + 0x24);
    eax = MEM32(esi);
    ecx = ecx << 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x00226EB2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00226EB2: ;
    PUSH32(esp, 1);
    ecx = esi;
    MEM32(esi + 0x58) = 0x13D370;
    PUSH32(esp, 0x00226EC2u); RECOMP_ABI_CALL(0x00226C40u, sub_00226C40); /* call 0x00226C40 */

loc_00226EC2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00226ED0
 * Original: 0x00226ED0 - 0x00226FDE (270 bytes, 97 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00226ED0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xC);
    ecx = eax;
    ecx = ecx >> 1;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00226FDB; /* jne: not equal / not zero */

loc_00226EE4: ;
    ecx = MEM32(edi + 0x34);
    eax = eax | 2;
    MEM32(edi + 0xC) = eax;
    PUSH32(esp, 0x00226EF2u); RECOMP_ABI_CALL(0x0020A3E0u, sub_0020A3E0); /* call 0x0020A3E0 */

loc_00226EF2: ;
    ecx = MEM32(edi + 0x38);
    PUSH32(esp, 0x00226EFAu); RECOMP_ABI_CALL(0x0020A3E0u, sub_0020A3E0); /* call 0x0020A3E0 */

loc_00226EFA: ;
    ecx = MEM32(edi + 0x44);
    PUSH32(esp, 0x00226F02u); RECOMP_ABI_CALL(0x0020A3E0u, sub_0020A3E0); /* call 0x0020A3E0 */

loc_00226F02: ;
    ecx = MEM32(edi + 0x40);
    PUSH32(esp, 0x00226F0Au); RECOMP_ABI_CALL(0x0020A3E0u, sub_0020A3E0); /* call 0x0020A3E0 */

loc_00226F0A: ;
    ecx = MEM32(edi + 0x44);
    PUSH32(esp, 0x00226F12u); RECOMP_ABI_CALL(0x0020A3E0u, sub_0020A3E0); /* call 0x0020A3E0 */

loc_00226F12: ;
    ecx = MEM32(edi + 0x48);
    PUSH32(esp, 0x00226F1Au); RECOMP_ABI_CALL(0x00206DC0u, sub_00206DC0); /* call 0x00206DC0 */

loc_00226F1A: ;
    ecx = MEM32(edi + 0x5C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00226F22u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00226F22: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00226F2E; /* je: equal / zero */

loc_00226F26: ;
    ecx = MEM32(edi + 0x4C);
    PUSH32(esp, 0x00226F2Eu); RECOMP_ABI_CALL(0x0020DBB0u, sub_0020DBB0); /* call 0x0020DBB0 */

loc_00226F2E: ;
    ecx = MEM32(edi + 0x50);
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_00226F41; /* jl: less (signed <) */

loc_00226F3C: ;
    MEM32(ecx + 8) = ebx;
    goto loc_00226F49;

loc_00226F41: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00226F49u); RECOMP_ABI_CALL(0x00200BE0u, sub_00200BE0); /* call 0x00200BE0 */

loc_00226F49: ;
    esi = MEM32(edi + 0x50);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00226F84; /* jg: greater (signed >) */

loc_00226F51: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00226F7E; /* je: equal / zero */

loc_00226F58: ;
    eax = ZX8(MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_00226F6C; /* jne: not equal / not zero */

loc_00226F66: ;
    edx = MEM32(0x5BC538);

loc_00226F6C: ;
    edx = MEM32(edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    eax = MEM32(edx + eax * 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00226F7Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00226F7E: ;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0xC) = ebx;

loc_00226F84: ;
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00226FD0; /* je: equal / zero */

loc_00226F8B: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00226FAA; /* je: equal / zero */

loc_00226F95: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00226FAA; /* jne: not equal / not zero */

loc_00226FA5: ;
    PUSH32(esp, 0x00226FAAu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00226FAA: ;
    ecx = esp + 0xC;
    MEM32(edi + 8) = ebx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00226FB9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00226FB9: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00226FD0; /* jne: not equal / not zero */

loc_00226FC9: ;
    ecx = esi;
    PUSH32(esp, 0x00226FD0u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00226FD0: ;
    eax = MEM32(edi + 0xC);
    eax = eax & 0xFFFFFFFDu;
    POP32(esp, esi);
    MEM32(edi + 0xC) = eax;
    POP32(esp, ebx);

loc_00226FDB: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00226FE0
 * Original: 0x00226FE0 - 0x002270AB (203 bytes, 64 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00226FE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00226FE0: ;
    esp = esp - 0x94;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00226FF0u); RECOMP_ABI_CALL(0x00226ED0u, sub_00226ED0); /* call 0x00226ED0 */

loc_00226FF0: ;
    MEM8(esi + 0x2548) = 0;
    eax = MEM32(0x5BC508);
    ebx = 0; /* xor self */
    MEM32(eax + 0x6C) = ebx;
    _fa = (uint32_t)(MEM32(esi + 0x2530)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2530), ebx (32-bit) */
    eax = MEM32(esi + 0x2538);
    if (CMP_BE(_fa, _fb)) goto loc_00227075; /* jbe: below or equal (unsigned <=) */

loc_0022700F: ;
    PUSH32(esp, ebp);
    ebp = eax + 4;

loc_00227013: ;
    eax = 0; /* xor self */
    ecx = 0x25;
    edi = esp + 0x10;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    eax = ebp + -4;
    if (TEST_NZ(_fa, _fb)) goto loc_00227030; /* jne: not equal / not zero */

loc_0022702A: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00227074; /* je: equal / zero */

loc_00227030: ;
    ecx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    MEM32(esp + 0x10) = 0xD;
    MEM32(esp + 0x24) = 0xF;
    if (CMP_A(_fa, _fb)) goto loc_0022704C; /* ja: above (unsigned >) */

loc_00227048: ;
    MEM32(esp + 0x24) = ecx;

loc_0022704C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00227058u); RECOMP_ABI_CALL(0x001E84E0u, sub_001E84E0); /* call 0x001E84E0 */

loc_00227058: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00227066u); RECOMP_ABI_CALL(0x0020C540u, sub_0020C540); /* call 0x0020C540 */

loc_00227066: ;
    eax = MEM32(esi + 0x2530);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00227013; /* jb: below (unsigned <) */

loc_00227074: ;
    POP32(esp, ebp);

loc_00227075: ;
    edi = MEM32(esi + 0x2538);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002270A1; /* je: equal / zero */

loc_0022707F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00227085u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_00227085: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00227097; /* je: equal / zero */

loc_0022708C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00227097u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00227097: ;
    MEM32(esi + 0x2538) = 0;

loc_002270A1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x94;
    esp += 4; return; /* ret */

}

/**
 * sub_002270B0
 * Original: 0x002270B0 - 0x002271CB (283 bytes, 101 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002270B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002270B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xC0);
    if (TEST_Z(_fa, _fb)) goto loc_002270C9; /* je: equal / zero */

loc_002270C4: ;
    eax = eax | 8;
    goto loc_002270CC;

loc_002270C9: ;
    eax = eax & 0xFFFFFFF7u;

loc_002270CC: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x002270D4u); RECOMP_ABI_CALL(0x001FBAF0u, sub_001FBAF0); /* call 0x001FBAF0 */

loc_002270D4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ebx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00227129; /* jne: not equal / not zero */

loc_002270D8: ;
    esi = MEM32(edi + 0x78);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002270E2; /* je: equal / zero */

loc_002270DF: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002270E2: ;
    ecx = MEM32(edi + 0x78);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002270FE; /* je: equal / zero */

loc_002270E9: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002270FE; /* jne: not equal / not zero */

loc_002270F9: ;
    PUSH32(esp, 0x002270FEu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002270FE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi + 0x78) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_002271B8; /* je: equal / zero */

loc_0022710D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0022711Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022711B: ;
    edx = MEM32(esi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00227127u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00227127: ;
    goto loc_002271A1;

loc_00227129: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002271B8; /* jne: not equal / not zero */

loc_00227132: ;
    eax = MEM32(edi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = edi + 0x78;
    if (TEST_Z(_fa, _fb)) goto loc_0022714F; /* je: equal / zero */

loc_0022713C: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0022714F: ;
    eax = ZX8(MEM8(edi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_00227163; /* jne: not equal / not zero */

loc_0022715D: ;
    edx = MEM32(0x5BC538);

loc_00227163: ;
    ecx = MEM32(edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    esi = MEM32(ecx + eax * 4);
    PUSH32(esp, 0x226660);
    PUSH32(esp, 0x00227174u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00227174: ;
    ecx = MEM32(0x5BC1F8);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00227183u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00227183: ;
    esi = eax;
    edx = MEM32(esi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x1C) = esi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00227195u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00227195: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x002271A1u); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_002271A1: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ecx;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002271B8; /* jne: not equal / not zero */

loc_002271B1: ;
    ecx = esi;
    PUSH32(esp, 0x002271B8u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002271B8: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002271D0
 * Original: 0x002271D0 - 0x002272F7 (295 bytes, 105 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002271D0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002271D0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00227256; /* jne: not equal / not zero */

loc_002271DE: ;
    esi = MEM32(edi + 0x74);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002271E8; /* je: equal / zero */

loc_002271E5: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002271E8: ;
    ecx = MEM32(edi + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00227204; /* je: equal / zero */

loc_002271EF: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00227204; /* jne: not equal / not zero */

loc_002271FF: ;
    PUSH32(esp, 0x00227204u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00227204: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi + 0x74) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00227229; /* je: equal / zero */

loc_0022720F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0022721Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022721D: ;
    edx = MEM32(esi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00227229u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00227229: ;
    ecx = MEM32(edi + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00227245; /* je: equal / zero */

loc_00227230: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00227245; /* jne: not equal / not zero */

loc_00227240: ;
    PUSH32(esp, 0x00227245u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00227245: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi + 0x74) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_002272E4; /* je: equal / zero */

loc_00227254: ;
    goto loc_002272CD;

loc_00227256: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002272E4; /* jne: not equal / not zero */

loc_0022725E: ;
    eax = MEM32(edi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebp = edi + 0x74;
    if (TEST_Z(_fa, _fb)) goto loc_0022727B; /* je: equal / zero */

loc_00227268: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0022727B: ;
    eax = ZX8(MEM8(edi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_0022728F; /* jne: not equal / not zero */

loc_00227289: ;
    edx = MEM32(0x5BC538);

loc_0022728F: ;
    ecx = MEM32(edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    esi = MEM32(ecx + eax * 4);
    PUSH32(esp, 0x226660);
    PUSH32(esp, 0x002272A0u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002272A0: ;
    ecx = MEM32(0x5BC1F8);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002272AFu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002272AF: ;
    esi = eax;
    edx = MEM32(esi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x1C) = esi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x002272C1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002272C1: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x002272CDu); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_002272CD: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ecx;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002272E4; /* jne: not equal / not zero */

loc_002272DD: ;
    ecx = esi;
    PUSH32(esp, 0x002272E4u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002272E4: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00227300
 * Original: 0x00227300 - 0x00227419 (281 bytes, 99 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00227300: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(ecx, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    eax = MEM32(edi + 0x8C);
    if (TEST_Z(_fa, _fb)) goto loc_00227319; /* je: equal / zero */

loc_00227314: ;
    eax = eax | 4;
    goto loc_0022731C;

loc_00227319: ;
    eax = eax & 0xFFFFFFFBu;

loc_0022731C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    MEM32(edi + 0x8C) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00227377; /* jne: not equal / not zero */

loc_00227326: ;
    esi = MEM32(edi + 0x74);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00227330; /* je: equal / zero */

loc_0022732D: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00227330: ;
    ecx = MEM32(edi + 0x74);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022734C; /* je: equal / zero */

loc_00227337: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0022734C; /* jne: not equal / not zero */

loc_00227347: ;
    PUSH32(esp, 0x0022734Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0022734C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    MEM32(edi + 0x74) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00227406; /* je: equal / zero */

loc_0022735B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x00227369u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00227369: ;
    edx = MEM32(esi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00227375u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00227375: ;
    goto loc_002273EF;

loc_00227377: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00227406; /* jne: not equal / not zero */

loc_00227380: ;
    eax = MEM32(edi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    ebx = edi + 0x74;
    if (TEST_Z(_fa, _fb)) goto loc_0022739D; /* je: equal / zero */

loc_0022738A: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0022739D: ;
    eax = ZX8(MEM8(edi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    edx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_002273B1; /* jne: not equal / not zero */

loc_002273AB: ;
    edx = MEM32(0x5BC538);

loc_002273B1: ;
    ecx = MEM32(edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    esi = MEM32(ecx + eax * 4);
    PUSH32(esp, 0x226660);
    PUSH32(esp, 0x002273C2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002273C2: ;
    ecx = MEM32(0x5BC1F8);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002273D1u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002273D1: ;
    esi = eax;
    edx = MEM32(esi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x1C) = esi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x002273E3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002273E3: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x002273EFu); RECOMP_ABI_CALL(0x001C2950u, sub_001C2950); /* call 0x001C2950 */

loc_002273EF: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ecx;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00227406; /* jne: not equal / not zero */

loc_002273FF: ;
    ecx = esi;
    PUSH32(esp, 0x00227406u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00227406: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(0x5BC5D8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00227420
 * Original: 0x00227420 - 0x00227447 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00227420: ;
    eax = MEM32(0x5BC4E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00227434; /* je: equal / zero */

loc_00227429: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00227446; /* jne: not equal / not zero */

loc_00227434: ;
    PUSH32(esp, 0x226740);
    PUSH32(esp, 0x0022743Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022743E: ;
    eax = MEM32(0x5BC4E0);
    esp = esp + 4;

loc_00227446: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00227450
 * Original: 0x00227450 - 0x00227554 (260 bytes, 72 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227450(void)
{

loc_00227450: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC1A8);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x46C7B8);
    ecx = esi;
    PUSH32(esp, 0x0022746Eu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0022746E: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebx = MEM32(edx + edi * 4);
    eax = MEM32(ebx);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x10) = 0x80;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0022748Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022748E: ;
    MEM32(ebx + 0x34) = 0x220F00;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebx = MEM32(eax + edi * 4 + 4);
    edx = MEM32(ebx);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x10) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x002274B6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002274B6: ;
    MEM32(ebx + 0x34) = 0x220F90;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebx = MEM32(edx + edi * 4 + 8);
    eax = MEM32(ebx);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x10) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x002274DEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002274DE: ;
    MEM32(ebx + 0x34) = 0x220F60;
    edx = MEM32(esi + 0x28);
    eax = MEM32(edx + 8);
    ebx = MEM32(eax + edi * 4 + 0xC);
    edx = MEM32(ebx);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x10) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00227506u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00227506: ;
    MEM32(ebx + 0x34) = 0x220F30;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ecx = MEM32(edx + edi * 4 + 0x18);
    eax = MEM32(ecx);
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = 0x1000;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x0022752Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022752C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x46C790);
    PUSH32(esp, 0x46C768);
    PUSH32(esp, 0x46C740);
    ecx = esi;
    PUSH32(esp, 0x00227543u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00227543: ;
    eax = MEM32(0x5BC1A8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 0x3C) = 0x227420;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00227560
 * Original: 0x00227560 - 0x00227C5A (1786 bytes, 615 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227560(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00227560: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x40);
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0x00227575u); RECOMP_ABI_CALL(0x0020A2D0u, sub_0020A2D0); /* call 0x0020A2D0 */

loc_00227575: ;
    ecx = MEM32(edi + 0x40);
    SET_LO8(eax, MEM8(ecx + 0x1C));
    ebp = 0; /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00227586; /* je: equal / zero */

loc_00227581: ;
    PUSH32(esp, 0x00227586u); RECOMP_ABI_CALL(0x0020EDE0u, sub_0020EDE0); /* call 0x0020EDE0 */

loc_00227586: ;
    esi = MEM32(edi + 0x40);
    ecx = MEM32(esi + 0x38);
    esi = esi + 0x38;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    ebx = 0x7FFFFF;
    if (CMP_EQ(_fa, _fb)) goto loc_002275AA; /* je: equal / zero */

loc_00227598: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002275AA; /* jne: not equal / not zero */

loc_002275A5: ;
    PUSH32(esp, 0x002275AAu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002275AA: ;
    MEM32(esi) = ebp;
    esi = MEM32(edi + 0x40);
    ecx = MEM32(esi + 0x40);
    esi = esi + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002275CB; /* je: equal / zero */

loc_002275B9: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002275CB; /* jne: not equal / not zero */

loc_002275C6: ;
    PUSH32(esp, 0x002275CBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002275CB: ;
    MEM32(esi) = ebp;
    esi = MEM32(edi + 0x40);
    ecx = MEM32(esi + 0x3C);
    esi = esi + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002275EC; /* je: equal / zero */

loc_002275DA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002275EC; /* jne: not equal / not zero */

loc_002275E7: ;
    PUSH32(esp, 0x002275ECu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002275EC: ;
    MEM32(esi) = ebp;
    ecx = MEM32(0x5BB7E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00227610; /* je: equal / zero */

loc_002275F8: ;
    MEM32(0x5BB7E4) = ebp;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebx, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00227610; /* jne: not equal / not zero */

loc_0022760B: ;
    PUSH32(esp, 0x00227610u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00227610: ;
    eax = MEM32(0x5BC53C);
    eax = MEM32(eax + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_002276B5; /* jle: less or equal (signed <=) */

loc_00227626: ;
    goto loc_00227630;

    /* nop */
    /* nop */

loc_00227630: ;
    ecx = MEM32(0x5BC53C);
    edx = MEM32(ecx);
    esi = MEM32(edx + ebx * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002276A8; /* je: equal / zero */

loc_0022763F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x0022764Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022764C: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x158); PUSH32(esp, 0x00227656u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00227656: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002276A8; /* je: equal / zero */

loc_0022765C: ;
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002276A8; /* je: equal / zero */

loc_00227663: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00227682; /* je: equal / zero */

loc_0022766D: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00227682; /* jne: not equal / not zero */

loc_0022767D: ;
    PUSH32(esp, 0x00227682u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00227682: ;
    ecx = esp + 0x1C;
    MEM32(edi + 8) = ebp;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00227691u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00227691: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_002276A8; /* jne: not equal / not zero */

loc_002276A1: ;
    ecx = esi;
    PUSH32(esp, 0x002276A8u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002276A8: ;
    eax = MEM32(esp + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00227630; /* jl: less (signed <) */

loc_002276B5: ;
    edx = MEM32(0x5BC538);
    ebp = MEM32(edx + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00227755; /* jle: less or equal (signed <=) */

loc_002276C8: ;
    goto loc_002276D0;

    /* nop */

loc_002276D0: ;
    eax = MEM32(0x5BC538);
    ecx = MEM32(eax);
    esi = MEM32(ecx + ebx * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022774C; /* je: equal / zero */

loc_002276DE: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x002276ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002276EC: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x158); PUSH32(esp, 0x002276F6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002276F6: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022774C; /* je: equal / zero */

loc_002276FC: ;
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022774C; /* je: equal / zero */

loc_00227703: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00227722; /* je: equal / zero */

loc_0022770D: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00227722; /* jne: not equal / not zero */

loc_0022771D: ;
    PUSH32(esp, 0x00227722u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00227722: ;
    ecx = esp + 0x18;
    MEM32(edi + 8) = 0;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00227735u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00227735: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_0022774C; /* jne: not equal / not zero */

loc_00227745: ;
    ecx = esi;
    PUSH32(esp, 0x0022774Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0022774C: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002276D0; /* jl: less (signed <) */

loc_00227755: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022776D; /* je: equal / zero */

loc_0022775F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00227767u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00227767: ;
    ecx = MEM32(0x5BBAB4);

loc_0022776D: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022779D; /* je: equal / zero */

loc_00227778: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x00227782u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00227782: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x54);
    PUSH32(esp, 0x3F5BE0);
    PUSH32(esp, 0x00227793u); RECOMP_ABI_CALL(0x0020C3C0u, sub_0020C3C0); /* call 0x0020C3C0 */

loc_00227793: ;
    ecx = MEM32(0x5BBAB4);
    edx = MEM32(esp + 0x10);

loc_0022779D: ;
    SET_LO8(eax, MEM8(edx + 0x75));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002277B4; /* je: equal / zero */

loc_002277A4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002277B4; /* je: equal / zero */

loc_002277A8: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x002277B0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002277B0: ;
    edx = MEM32(esp + 0x10);

loc_002277B4: ;
    eax = MEM32(edx + 0x28);
    MEM8(edx + 0x16) = 1;
    esi = MEM32(eax + 4);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_002277D0; /* js: sign (negative) */

loc_002277C1: ;
    edi = MEM32(esp + 0x10);

loc_002277C5: ;
    ecx = MEM32(edi + 0x28);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + esi * 4); PUSH32(esp, 0x002277CDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002277CD: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_002277C5; /* jns: not sign (positive) */

loc_002277D0: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(eax + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00227811; /* je: equal / zero */

loc_002277DB: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002277F9; /* je: equal / zero */

loc_002277E1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002277E7u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_002277E7: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002277F9; /* je: equal / zero */

loc_002277EE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x002277F9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002277F9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002277FFu); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_002277FF: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00227811; /* je: equal / zero */

loc_00227806: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x00227811u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00227811: ;
    eax = MEM32(esp + 0x10);
    ebx = MEM32(eax + 0x40);
    edi = 0; /* xor self */
    MEM32(eax + 0x28) = edi;
    esi = MEM32(ebx + 0x10);
    ebp = MEM32(esi + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0022784B; /* jle: less or equal (signed <=) */

loc_00227827: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00227846; /* je: equal / zero */

loc_00227831: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00227846; /* jne: not equal / not zero */

loc_00227841: ;
    PUSH32(esp, 0x00227846u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00227846: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00227827; /* jl: less (signed <) */

loc_0022784B: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00227863; /* jle: less or equal (signed <=) */

loc_00227854: ;
    edx = MEM32(esi + 0x10);
    MEM32(edx + eax * 4) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00227854; /* jl: less (signed <) */

loc_00227863: ;
    MEM32(esi + 8) = 0;
    ecx = MEM32(ebx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00227886; /* je: equal / zero */

loc_00227871: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00227886; /* jne: not equal / not zero */

loc_00227881: ;
    PUSH32(esp, 0x00227886u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00227886: ;
    eax = MEM32(esp + 0x10);
    MEM32(ebx + 0xC) = 0;
    ecx = MEM32(eax + 0x3C);
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002278A9; /* jne: not equal / not zero */

loc_002278A4: ;
    PUSH32(esp, 0x002278A9u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002278A9: ;
    eax = MEM32(0x5BC568);
    esi = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFF (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_002278C8; /* jne: not equal / not zero */

loc_002278C3: ;
    PUSH32(esp, 0x002278C8u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002278C8: ;
    ebx = MEM32(esp + 0x10);
    ecx = MEM32(ebx + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(0x5BC54C);
    PUSH32(esp, 0x002278DBu); RECOMP_ABI_CALL(0x00208660u, sub_00208660); /* call 0x00208660 */

loc_002278DB: ;
    edx = MEM32(ebx + 0x18);
    esi = MEM32(edx + 0xC);
    eax = MEM32(ebx + 0xC);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00227952; /* jl: less (signed <) */

loc_002278E9: ;
    /* nop */

loc_002278F0: ;
    edi = MEM32(ebx + 0x18);
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00227912; /* je: equal / zero */

loc_002278FD: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00227912; /* jne: not equal / not zero */

loc_0022790D: ;
    PUSH32(esp, 0x00227912u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00227912: ;
    ebp = MEM32(edi + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ebp, ebp (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022791D; /* jne: not equal / not zero */

loc_00227919: ;
    eax = 0; /* xor self */
    goto loc_00227934;

loc_0022791D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00227923u); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_00227923: ;
    edx = MEM32(eax);
    esp = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x144); PUSH32(esp, 0x00227931u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00227931: ;
    eax = eax >> 2;

loc_00227934: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00227940; /* jl: less (signed <) */

loc_00227938: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00227940u); RECOMP_ABI_CALL(0x00202B60u, sub_00202B60); /* call 0x00202B60 */

loc_00227940: ;
    eax = MEM32(edi + 8);
    MEM32(eax + esi * 4) = 0;
    eax = MEM32(ebx + 0xC);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002278F0; /* jge: greater or equal (signed >=) */

loc_00227952: ;
    ecx = MEM32(ebx + 0x4C);
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = 0x7FFFFF;
    eax = edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0022796C; /* jne: not equal / not zero */

loc_00227967: ;
    PUSH32(esp, 0x0022796Cu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0022796C: ;
    ecx = MEM32(ebx + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    MEM32(ebx + 0x4C) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_002279FF; /* je: equal / zero */

loc_0022797E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x00227983u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00227983: ;
    ecx = MEM32(ebx + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x0022798Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022798B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002279BE; /* je: equal / zero */

loc_00227991: ;
    ecx = MEM32(ebx + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x002279A6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002279A6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002279ACu); RECOMP_ABI_CALL(0x001E8E20u, sub_001E8E20); /* call 0x001E8E20 */

loc_002279AC: ;
    esp = esp + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002279BE; /* je: equal / zero */

loc_002279B3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xFC); PUSH32(esp, 0x002279BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002279BE: ;
    esi = MEM32(ebx + 0x40);
    ecx = MEM32(esi + 0x38);
    esi = esi + 0x38;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002279DD; /* je: equal / zero */

loc_002279CB: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002279DD; /* jne: not equal / not zero */

loc_002279D8: ;
    PUSH32(esp, 0x002279DDu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002279DD: ;
    MEM32(esi) = 0;
    ecx = MEM32(ebx + 0x44);
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002279F8; /* jne: not equal / not zero */

loc_002279F3: ;
    PUSH32(esp, 0x002279F8u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002279F8: ;
    MEM32(ebx + 0x44) = 0;

loc_002279FF: ;
    ecx = MEM32(ebx + 0x68);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00227A1F; /* je: equal / zero */

loc_00227A06: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00227A18; /* jne: not equal / not zero */

loc_00227A13: ;
    PUSH32(esp, 0x00227A18u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00227A18: ;
    MEM32(ebx + 0x68) = 0;

loc_00227A1F: ;
    ecx = MEM32(ebx + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00227A3F; /* je: equal / zero */

loc_00227A26: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00227A38; /* jne: not equal / not zero */

loc_00227A33: ;
    PUSH32(esp, 0x00227A38u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00227A38: ;
    MEM32(ebx + 0x50) = 0;

loc_00227A3F: ;
    ecx = MEM32(ebx + 0x38);
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00227A54; /* jne: not equal / not zero */

loc_00227A4F: ;
    PUSH32(esp, 0x00227A54u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00227A54: ;
    ecx = MEM32(ebx + 0x40);
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00227A69; /* jne: not equal / not zero */

loc_00227A64: ;
    PUSH32(esp, 0x00227A69u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00227A69: ;
    eax = MEM32(0x5BC558);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM8(0x5BC562) = 0;
    MEM32(0x46A3BC) = 0x1F83D0;
    MEM32(0x46A3B8) = 5;
    if (TEST_Z(_fa, _fb)) goto loc_00227AA3; /* je: equal / zero */

loc_00227A8D: ;
    esi = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edx (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00227AA3; /* jne: not equal / not zero */

loc_00227A9E: ;
    PUSH32(esp, 0x00227AA3u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00227AA3: ;
    eax = MEM32(0x5BC55C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(0x5BC558) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_00227ACC; /* je: equal / zero */

loc_00227AB6: ;
    esi = MEM32(eax + 4);
    ecx = eax;
    eax = eax + 4;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edx (32-bit) */
    MEM32(eax) = esi;
    if (TEST_NZ(_fa, _fb)) goto loc_00227ACC; /* jne: not equal / not zero */

loc_00227AC7: ;
    PUSH32(esp, 0x00227ACCu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00227ACC: ;
    eax = MEM32(0x5BC528);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(0x5BC55C) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_00227B3A; /* jne: not equal / not zero */

loc_00227ADF: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00227AF8; /* jle: less or equal (signed <=) */

loc_00227AE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00227AF6; /* jge: greater or equal (signed >=) */

loc_00227AED: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00227B06;

loc_00227AF6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00227AF8: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00227B04; /* jne: not equal / not zero */

loc_00227AFA: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00227B06; /* jne: not equal / not zero */

loc_00227B04: ;
    ecx = 0; /* xor self */

loc_00227B06: ;
    edx = MEM32(0x46A688);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00227B12u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00227B12: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x00227B1Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00227B1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00227B30; /* je: equal / zero */

loc_00227B22: ;
    ecx = eax;
    PUSH32(esp, 0x00227B29u); RECOMP_ABI_CALL(0x00202CC0u, sub_00202CC0); /* call 0x00202CC0 */

loc_00227B29: ;
    MEM32(0x5BC528) = eax;
    goto loc_00227B3A;

loc_00227B30: ;
    MEM32(0x5BC528) = 0;

loc_00227B3A: ;
    eax = MEM32(ebx + 0x398);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00227B84; /* je: equal / zero */

loc_00227B44: ;
    esi = eax + -8;
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00227B84; /* jne: not equal / not zero */

loc_00227B4C: ;
    edi = MEM32(esi);
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00227B56u); RECOMP_ABI_CALL(0x001F87A0u, sub_001F87A0); /* call 0x001F87A0 */

loc_00227B56: ;
    eax = esi + 8;
    edx = eax + 1;
    /* nop */

loc_00227B60: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00227B60; /* jne: not equal / not zero */

loc_00227B67: ;
    eax = eax - edx;
    eax = eax + 9;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00227B75u); RECOMP_ABI_CALL(0x001EBA30u, sub_001EBA30); /* call 0x001EBA30 */

loc_00227B75: ;
    SET_LO8(eax, MEM8(edi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00227B84; /* je: equal / zero */

loc_00227B7C: ;
    ecx = MEM32(edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00227B84u); RECOMP_ABI_CALL(0x0020EEE0u, sub_0020EEE0); /* call 0x0020EEE0 */

loc_00227B84: ;
    MEM32(ebx + 0x398) = 0;
    eax = MEM32(0x5BC528);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00227BF2; /* jne: not equal / not zero */

loc_00227B97: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00227BB0; /* jle: less or equal (signed <=) */

loc_00227BA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00227BAE; /* jge: greater or equal (signed >=) */

loc_00227BA5: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00227BBE;

loc_00227BAE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00227BB0: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00227BBC; /* jne: not equal / not zero */

loc_00227BB2: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00227BBE; /* jne: not equal / not zero */

loc_00227BBC: ;
    ecx = 0; /* xor self */

loc_00227BBE: ;
    edx = MEM32(0x46A688);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00227BCAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00227BCA: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x00227BD6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00227BD6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00227BE8; /* je: equal / zero */

loc_00227BDA: ;
    ecx = eax;
    PUSH32(esp, 0x00227BE1u); RECOMP_ABI_CALL(0x00202CC0u, sub_00202CC0); /* call 0x00202CC0 */

loc_00227BE1: ;
    MEM32(0x5BC528) = eax;
    goto loc_00227BF2;

loc_00227BE8: ;
    MEM32(0x5BC528) = 0;

loc_00227BF2: ;
    eax = MEM32(ebx + 0x39C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00227C4C; /* je: equal / zero */

loc_00227BFE: ;
    edi = eax + -8;
    MEM32(edi + 4) = MEM32(edi + 4) - 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00227C4C; /* jne: not equal / not zero */

loc_00227C06: ;
    esi = MEM32(edi);
    ecx = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00227C10u); RECOMP_ABI_CALL(0x001F87A0u, sub_001F87A0); /* call 0x001F87A0 */

loc_00227C10: ;
    eax = edi + 8;
    edx = eax + 1;

loc_00227C16: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00227C16; /* jne: not equal / not zero */

loc_00227C1D: ;
    eax = eax - edx;
    eax = eax + 9;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00227C2Bu); RECOMP_ABI_CALL(0x001EBA30u, sub_001EBA30); /* call 0x001EBA30 */

loc_00227C2B: ;
    SET_LO8(eax, MEM8(esi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00227C3A; /* je: equal / zero */

loc_00227C32: ;
    ecx = MEM32(esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00227C3Au); RECOMP_ABI_CALL(0x0020EEE0u, sub_0020EEE0); /* call 0x0020EEE0 */

loc_00227C3A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0x39C) = 0;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_00227C4C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0x39C) = ecx;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00227C60
 * Original: 0x00227C60 - 0x00227CB2 (82 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00227C60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00227CAF; /* jne: not equal / not zero */

loc_00227C6B: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00227C86; /* je: equal / zero */

loc_00227C71: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00227C86; /* jne: not equal / not zero */

loc_00227C81: ;
    PUSH32(esp, 0x00227C86u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00227C86: ;
    PUSH32(esp, 0x226660);
    PUSH32(esp, 0x00227C90u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00227C90: ;
    ecx = MEM32(0x5BC1F8);
    esp = esp + 4;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00227CA0u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00227CA0: ;
    ecx = eax;
    edx = esp + 4;
    MEM32(esi + 0x44) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00227CAFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00227CAF: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00227CC0
 * Original: 0x00227CC0 - 0x00227CF6 (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227CC0(void)
{

loc_00227CC0: ;
    PUSH32(esp, 0x00227CC5u); RECOMP_ABI_CALL(0x00227F90u, sub_00227F90); /* call 0x00227F90 */

loc_00227CC5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x227450);
    PUSH32(esp, 0);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x3FA7F0);
    PUSH32(esp, 0x1F21B0);
    PUSH32(esp, 0x1A4460);
    PUSH32(esp, 0x226510);
    PUSH32(esp, 0x5BC1A8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00227CF2u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00227CF2: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00227D00
 * Original: 0x00227D00 - 0x00227DAA (170 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00227D00: ;
    ecx = MEM32(0x5BC508);
    SET_LO8(eax, MEM8(ecx + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    PUSH32(esp, esi);
    if (TEST_NZ(_fa, _fb)) goto loc_00227D36; /* jne: not equal / not zero */

loc_00227D0E: ;
    esi = ecx;
    MEM8(ecx + 0x15) = 1;
    ecx = MEM32(esi + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00227D30; /* je: equal / zero */

loc_00227D1B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xB0); PUSH32(esp, 0x00227D23u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00227D23: ;
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, 0x3F5BD8);
    PUSH32(esp, 0x00227D30u); RECOMP_ABI_CALL(0x0020C3C0u, sub_0020C3C0); /* call 0x0020C3C0 */

loc_00227D30: ;
    ecx = MEM32(0x5BC508);

loc_00227D36: ;
    eax = MEM32(0x5BC510);
    edx = MEM32(0x5BC514);
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFFu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFFu;
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0xFFFFFFFFu) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    MEM32(0x5BC510) = eax;
    _cf = 0; /* logical op clears CF */
    eax = eax | edx;
    MEM32(0x5BC514) = edx;
    if ((eax != 0)) goto loc_00227DA8; /* jne: not equal / not zero */

loc_00227D56: ;
    PUSH32(esp, 0x00227D5Bu); RECOMP_ABI_CALL(0x00227560u, sub_00227560); /* call 0x00227560 */

loc_00227D5B: ;
    ecx = MEM32(0x5BC508);
    PUSH32(esp, 0x00227D66u); RECOMP_ABI_CALL(0x0021CAB0u, sub_0021CAB0); /* call 0x0021CAB0 */

loc_00227D66: ;
    eax = MEM32(0x5BC508);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    esi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00227D9E; /* je: equal / zero */

loc_00227D71: ;
    eax = MEM32(eax + 0x39C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00227D83; /* je: equal / zero */

loc_00227D7B: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00227D83u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00227D83: ;
    eax = MEM32(esi + 0x398);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_00227D95; /* je: equal / zero */

loc_00227D8D: ;
    ecx = eax + -8;
    PUSH32(esp, 0x00227D95u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_00227D95: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00227D9Bu); RECOMP_ABI_CALL(0x00343748u, sub_00343748); /* call 0x00343748 */

loc_00227D9B: ;
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;

loc_00227D9E: ;
    MEM32(0x5BC508) = 0;

loc_00227DA8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00227DB0
 * Original: 0x00227DB0 - 0x00227DBC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227DB0(void)
{

loc_00227DB0: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x00227DBAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00227DBA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00227DC0
 * Original: 0x00227DC0 - 0x00227DF9 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227DC0(void)
{

loc_00227DC0: ;
    PUSH32(esp, 0x00227DC5u); RECOMP_ABI_CALL(0x00227F90u, sub_00227F90); /* call 0x00227F90 */

loc_00227DC5: ;
    PUSH32(esp, 0x46C7E0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2197D0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FA7FC);
    PUSH32(esp, 0x1F2180);
    PUSH32(esp, 0x1A43F0);
    PUSH32(esp, 0x223F30);
    PUSH32(esp, 0x5BC1AC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00227DF5u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00227DF5: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00227E00
 * Original: 0x00227E00 - 0x00227E39 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227E00(void)
{

loc_00227E00: ;
    PUSH32(esp, 0x00227E05u); RECOMP_ABI_CALL(0x00227F90u, sub_00227F90); /* call 0x00227F90 */

loc_00227E05: ;
    PUSH32(esp, 0x46C7E8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x213000);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FA818);
    PUSH32(esp, 0x1F2150);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BC1B0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00227E35u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00227E35: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00227E40
 * Original: 0x00227E40 - 0x00227E4C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227E40(void)
{

loc_00227E40: ;
    PUSH32(esp, 0x227DC0);
    PUSH32(esp, 0x00227E4Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00227E4A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00227E50
 * Original: 0x00227E50 - 0x00227E5C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227E50(void)
{

loc_00227E50: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00227E5Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00227E5A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00227E60
 * Original: 0x00227E60 - 0x00227F38 (216 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227E60(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00227E60: ;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00227E79; /* jle: less or equal (signed <=) */

loc_00227E69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00227E77; /* jge: greater or equal (signed >=) */

loc_00227E6E: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00227E87;

loc_00227E77: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00227E79: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00227E85; /* jne: not equal / not zero */

loc_00227E7B: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00227E87; /* jne: not equal / not zero */

loc_00227E85: ;
    ecx = 0; /* xor self */

loc_00227E87: ;
    edx = MEM32(0x46A67C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00227E94u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00227E94: ;
    PUSH32(esp, 0x227F50);
    esi = eax;
    PUSH32(esp, 0x00227EA0u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00227EA0: ;
    ecx = MEM32(0x5BC190);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00227EAFu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00227EAF: ;
    MEM32(0x5BC564) = eax;
    eax = MEM32(0x5BC544);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00227ECD; /* jle: less or equal (signed <=) */

loc_00227EBD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00227ECB; /* jge: greater or equal (signed >=) */

loc_00227EC2: ;
    ecx = MEM32(eax * 4 + 0x5BB700);
    goto loc_00227EDB;

loc_00227ECB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */

loc_00227ECD: ;
    if (TEST_NZ(_fa, _fb)) goto loc_00227ED9; /* jne: not equal / not zero */

loc_00227ECF: ;
    ecx = MEM32(0x5BBAB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00227EDB; /* jne: not equal / not zero */

loc_00227ED9: ;
    ecx = 0; /* xor self */

loc_00227EDB: ;
    edx = MEM32(0x46A67C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00227EE7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00227EE7: ;
    PUSH32(esp, 0x227CC0);
    esi = eax;
    PUSH32(esp, 0x00227EF3u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00227EF3: ;
    ecx = MEM32(0x5BC1A8);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00227F02u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00227F02: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    MEM8(esi + 0x2C) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xD4); PUSH32(esp, 0x00227F12u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00227F12: ;
    ecx = MEM32(0x5BC564);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00227F1Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00227F1E: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00227F36; /* jne: not equal / not zero */

loc_00227F2E: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00227F36: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00227F40
 * Original: 0x00227F40 - 0x00227F45 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227F40(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00227F40: ;
    g_seh_ebp = ebp; sub_00227E60(); return; /* tail jmp 0x00227E60 */

}

/**
 * sub_00227F50
 * Original: 0x00227F50 - 0x00227F8C (60 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227F50(void)
{

loc_00227F50: ;
    PUSH32(esp, 0x00227F55u); RECOMP_ABI_CALL(0x00227F90u, sub_00227F90); /* call 0x00227F90 */

loc_00227F55: ;
    PUSH32(esp, 0x46C7F0);
    PUSH32(esp, 0x227F40);
    PUSH32(esp, 0x2263F0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x3FA828);
    PUSH32(esp, 0x1F20F0);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BC190);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00227F88u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00227F88: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00227F90
 * Original: 0x00227F90 - 0x00227FD6 (70 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00227F90: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00227FD5; /* jne: not equal / not zero */

loc_00227F99: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x00227FAAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00227FAA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00227FB4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00227FB4: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x00227FBEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00227FBE: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00227FC8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00227FC8: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00227FD2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00227FD2: ;
    esp = esp + 0x14;

loc_00227FD5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00227FE0
 * Original: 0x00227FE0 - 0x00228059 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00227FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00227FE0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00228025; /* jne: not equal / not zero */

loc_00227FE9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x00227FFAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00227FFA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228004u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228004: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022800Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022800E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228018u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228018: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00228022u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228022: ;
    esp = esp + 0x14;

loc_00228025: ;
    PUSH32(esp, 0x46C7FC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21B690);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x3FA838);
    PUSH32(esp, 0x1F1FD0);
    PUSH32(esp, 0x1A4350);
    PUSH32(esp, 0x221CF0);
    PUSH32(esp, 0x5BC144);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00228055u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00228055: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00228060
 * Original: 0x00228060 - 0x002280DC (124 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228060: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002280A5; /* jne: not equal / not zero */

loc_00228069: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022807Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022807A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228084u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228084: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022808Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022808E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228098u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228098: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x002280A2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002280A2: ;
    esp = esp + 0x14;

loc_002280A5: ;
    PUSH32(esp, 0x46C804);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21E7F0);
    PUSH32(esp, 0x21B6D0);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x3FA850);
    PUSH32(esp, 0x1F2000);
    PUSH32(esp, 0x2182C0);
    PUSH32(esp, 0x221D30);
    PUSH32(esp, 0x5BC154);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002280D8u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002280D8: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002280E0
 * Original: 0x002280E0 - 0x0022815C (124 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002280E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002280E0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00228125; /* jne: not equal / not zero */

loc_002280E9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x002280FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002280FA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228104u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228104: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022810Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022810E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228118u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228118: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00228122u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228122: ;
    esp = esp + 0x14;

loc_00228125: ;
    PUSH32(esp, 0x46C80C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21E850);
    PUSH32(esp, 0x21B710);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x3FA870);
    PUSH32(esp, 0x1F2030);
    PUSH32(esp, 0x218250);
    PUSH32(esp, 0x223840);
    PUSH32(esp, 0x5BC164);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00228158u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00228158: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00228160
 * Original: 0x00228160 - 0x002281DC (124 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228160: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002281A5; /* jne: not equal / not zero */

loc_00228169: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022817Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022817A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228184u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228184: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022818Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022818E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228198u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228198: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x002281A2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002281A2: ;
    esp = esp + 0x14;

loc_002281A5: ;
    PUSH32(esp, 0x46C814);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21E8B0);
    PUSH32(esp, 0x21B750);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x3FA890);
    PUSH32(esp, 0x1F2060);
    PUSH32(esp, 0x2181E0);
    PUSH32(esp, 0x223880);
    PUSH32(esp, 0x5BC174);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002281D8u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002281D8: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002281E0
 * Original: 0x002281E0 - 0x0022825C (124 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002281E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002281E0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00228225; /* jne: not equal / not zero */

loc_002281E9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x002281FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002281FA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228204u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228204: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022820Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022820E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228218u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228218: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00228222u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228222: ;
    esp = esp + 0x14;

loc_00228225: ;
    PUSH32(esp, 0x46C81C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21E910);
    PUSH32(esp, 0x21B810);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x3FA8AC);
    PUSH32(esp, 0x1F2090);
    PUSH32(esp, 0x219790);
    PUSH32(esp, 0x21B7D0);
    PUSH32(esp, 0x5BC184);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00228258u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00228258: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00228260
 * Original: 0x00228260 - 0x002282D9 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228260: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002282A5; /* jne: not equal / not zero */

loc_00228269: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022827Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022827A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228284u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228284: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022828Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022828E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228298u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228298: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x002282A2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002282A2: ;
    esp = esp + 0x14;

loc_002282A5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2254B0);
    PUSH32(esp, 0x2001A0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FA8CC);
    PUSH32(esp, 0x1F2270);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BC1C8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002282D5u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002282D5: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002282E0
 * Original: 0x002282E0 - 0x00228359 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002282E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002282E0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00228325; /* jne: not equal / not zero */

loc_002282E9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x002282FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002282FA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228304u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228304: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022830Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022830E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228318u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228318: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00228322u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228322: ;
    esp = esp + 0x14;

loc_00228325: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x225540);
    PUSH32(esp, 0x2001E0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x3FA8DC);
    PUSH32(esp, 0x1F22A0);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BC1D0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00228355u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00228355: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00228360
 * Original: 0x00228360 - 0x002283DC (124 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228360: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002283A5; /* jne: not equal / not zero */

loc_00228369: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022837Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022837A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228384u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228384: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022838Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022838E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228398u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228398: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x002283A2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002283A2: ;
    esp = esp + 0x14;

loc_002283A5: ;
    PUSH32(esp, 0x46C824);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21EAD0);
    PUSH32(esp, 0x21B8E0);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x3FA8E8);
    PUSH32(esp, 0x1F2300);
    PUSH32(esp, 0x2180A0);
    PUSH32(esp, 0x21F000);
    PUSH32(esp, 0x5BC1DC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002283D8u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002283D8: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002283E0
 * Original: 0x002283E0 - 0x0022845C (124 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002283E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002283E0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00228425; /* jne: not equal / not zero */

loc_002283E9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x002283FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002283FA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228404u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228404: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022840Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022840E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228418u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228418: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00228422u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228422: ;
    esp = esp + 0x14;

loc_00228425: ;
    PUSH32(esp, 0x46C82C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21EB30);
    PUSH32(esp, 0x21B930);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x3FA900);
    PUSH32(esp, 0x1F2360);
    PUSH32(esp, 0x217E30);
    PUSH32(esp, 0x219880);
    PUSH32(esp, 0x5BC1F0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00228458u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00228458: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00228460
 * Original: 0x00228460 - 0x002284DC (124 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228460: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002284A5; /* jne: not equal / not zero */

loc_00228469: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022847Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022847A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228484u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228484: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022848Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022848E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228498u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228498: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x002284A2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002284A2: ;
    esp = esp + 0x14;

loc_002284A5: ;
    PUSH32(esp, 0x46C834);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21EBD0);
    PUSH32(esp, 0x21C630);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x3FA918);
    PUSH32(esp, 0x1F2570);
    PUSH32(esp, 0x21B190);
    PUSH32(esp, 0x21EFB0);
    PUSH32(esp, 0x5BC224);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002284D8u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002284D8: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002284E0
 * Original: 0x002284E0 - 0x00228559 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002284E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002284E0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00228525; /* jne: not equal / not zero */

loc_002284E9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x002284FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002284FA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228504u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228504: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022850Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022850E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228518u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228518: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00228522u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228522: ;
    esp = esp + 0x14;

loc_00228525: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x220FF0);
    PUSH32(esp, 0x21BA60);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FA930);
    PUSH32(esp, 0x1F2600);
    PUSH32(esp, 0x1A4460);
    PUSH32(esp, 0x226510);
    PUSH32(esp, 0x5BC23C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00228555u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00228555: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00228560
 * Original: 0x00228560 - 0x002285DC (124 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228560: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002285A5; /* jne: not equal / not zero */

loc_00228569: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022857Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022857A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228584u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228584: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022858Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022858E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228598u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228598: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x002285A2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002285A2: ;
    esp = esp + 0x14;

loc_002285A5: ;
    PUSH32(esp, 0x46C83C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21EC30);
    PUSH32(esp, 0x21C700);
    PUSH32(esp, 0x48);
    PUSH32(esp, 0x3FA944);
    PUSH32(esp, 0x1F2790);
    PUSH32(esp, 0x1A4890);
    PUSH32(esp, 0x222230);
    PUSH32(esp, 0x5BC250);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002285D8u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002285D8: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002285E0
 * Original: 0x002285E0 - 0x00228659 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002285E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002285E0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00228625; /* jne: not equal / not zero */

loc_002285E9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x002285FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002285FA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228604u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228604: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022860Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022860E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228618u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228618: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00228622u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228622: ;
    esp = esp + 0x14;

loc_00228625: ;
    PUSH32(esp, 0x46C844);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20B670);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FA960);
    PUSH32(esp, 0x1F2120);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BC268);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00228655u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00228655: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00228660
 * Original: 0x00228660 - 0x002286DC (124 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228660: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002286A5; /* jne: not equal / not zero */

loc_00228669: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022867Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022867A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228684u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228684: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022868Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022868E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228698u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228698: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x002286A2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002286A2: ;
    esp = esp + 0x14;

loc_002286A5: ;
    PUSH32(esp, 0x46C84C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21EC90);
    PUSH32(esp, 0x21C760);
    PUSH32(esp, 0x54);
    PUSH32(esp, 0x3FA974);
    PUSH32(esp, 0x1F2880);
    PUSH32(esp, 0x21AB50);
    PUSH32(esp, 0x221900);
    PUSH32(esp, 0x5BC29C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002286D8u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002286D8: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002286E0
 * Original: 0x002286E0 - 0x00228759 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002286E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002286E0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00228725; /* jne: not equal / not zero */

loc_002286E9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x002286FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002286FA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228704u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228704: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022870Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022870E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228718u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228718: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00228722u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228722: ;
    esp = esp + 0x14;

loc_00228725: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x225690);
    PUSH32(esp, 0x219B80);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FA990);
    PUSH32(esp, 0x1F2970);
    PUSH32(esp, 0x1A4460);
    PUSH32(esp, 0x226510);
    PUSH32(esp, 0x5BC2C0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00228755u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00228755: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00228760
 * Original: 0x00228760 - 0x002287D9 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228760: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002287A5; /* jne: not equal / not zero */

loc_00228769: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022877Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022877A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228784u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228784: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022878Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022878E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228798u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228798: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x002287A2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002287A2: ;
    esp = esp + 0x14;

loc_002287A5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x200250);
    PUSH32(esp, 0x219C20);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x3FA9A4);
    PUSH32(esp, 0x1F2A90);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BC2D4);
    PUSH32(esp, 1);
    PUSH32(esp, 0x002287D5u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002287D5: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002287E0
 * Original: 0x002287E0 - 0x00228859 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002287E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002287E0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00228825; /* jne: not equal / not zero */

loc_002287E9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x002287FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002287FA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228804u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228804: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022880Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022880E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228818u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228818: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00228822u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228822: ;
    esp = esp + 0x14;

loc_00228825: ;
    PUSH32(esp, 0x46C854);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21BC60);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x3FA9AC);
    PUSH32(esp, 0x1A45E0);
    PUSH32(esp, 0x1A4350);
    PUSH32(esp, 0x221CF0);
    PUSH32(esp, 0x5BC2DC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00228855u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00228855: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00228860
 * Original: 0x00228860 - 0x002288DC (124 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228860: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002288A5; /* jne: not equal / not zero */

loc_00228869: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022887Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022887A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228884u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228884: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022888Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022888E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228898u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228898: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x002288A2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002288A2: ;
    esp = esp + 0x14;

loc_002288A5: ;
    PUSH32(esp, 0x46C85C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21EE30);
    PUSH32(esp, 0x21BCA0);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x3FA9BC);
    PUSH32(esp, 0x1F2AF0);
    PUSH32(esp, 0x219C40);
    PUSH32(esp, 0x2287E0);
    PUSH32(esp, 0x5BC2E4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002288D8u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002288D8: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002288E0
 * Original: 0x002288E0 - 0x0022895C (124 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002288E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002288E0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00228925; /* jne: not equal / not zero */

loc_002288E9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x002288FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002288FA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228904u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228904: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022890Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022890E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228918u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228918: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00228922u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228922: ;
    esp = esp + 0x14;

loc_00228925: ;
    PUSH32(esp, 0x46C864);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21DC50);
    PUSH32(esp, 0x21C800);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x3FA9D4);
    PUSH32(esp, 0x1F2B80);
    PUSH32(esp, 0x21A3B0);
    PUSH32(esp, 0x21BD20);
    PUSH32(esp, 0x5BC30C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00228958u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00228958: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00228960
 * Original: 0x00228960 - 0x002289D9 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228960: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002289A5; /* jne: not equal / not zero */

loc_00228969: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022897Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022897A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228984u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228984: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022898Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022898E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228998u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228998: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x002289A2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002289A2: ;
    esp = esp + 0x14;

loc_002289A5: ;
    PUSH32(esp, 0x46C86C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20B8E0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FA9E8);
    PUSH32(esp, 0x1F2690);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BC314);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002289D5u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002289D5: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002289E0
 * Original: 0x002289E0 - 0x00228A59 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002289E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002289E0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00228A25; /* jne: not equal / not zero */

loc_002289E9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x002289FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002289FA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228A04u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228A04: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x00228A0Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228A0E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228A18u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228A18: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00228A22u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228A22: ;
    esp = esp + 0x14;

loc_00228A25: ;
    PUSH32(esp, 0x46C874);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21BDC0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x3FA9F4);
    PUSH32(esp, 0x1A4C00);
    PUSH32(esp, 0x1A4350);
    PUSH32(esp, 0x221CF0);
    PUSH32(esp, 0x5BC324);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00228A55u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00228A55: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00228A60
 * Original: 0x00228A60 - 0x00228ADC (124 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228A60: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00228AA5; /* jne: not equal / not zero */

loc_00228A69: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x00228A7Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228A7A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228A84u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228A84: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x00228A8Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228A8E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228A98u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228A98: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00228AA2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228AA2: ;
    esp = esp + 0x14;

loc_00228AA5: ;
    PUSH32(esp, 0x46C87C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21DCB0);
    PUSH32(esp, 0x21BE00);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x3FAA08);
    PUSH32(esp, 0x1F2BE0);
    PUSH32(esp, 0x219ED0);
    PUSH32(esp, 0x2289E0);
    PUSH32(esp, 0x5BC32C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00228AD8u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00228AD8: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00228AE0
 * Original: 0x00228AE0 - 0x00228B5C (124 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228AE0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00228B25; /* jne: not equal / not zero */

loc_00228AE9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x00228AFAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228AFA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228B04u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228B04: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x00228B0Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228B0E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228B18u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228B18: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00228B22u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228B22: ;
    esp = esp + 0x14;

loc_00228B25: ;
    PUSH32(esp, 0x46C884);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21DDC0);
    PUSH32(esp, 0x21C840);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x3FAA20);
    PUSH32(esp, 0x1F2C70);
    PUSH32(esp, 0x1A51D0);
    PUSH32(esp, 0x220710);
    PUSH32(esp, 0x5BC37C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00228B58u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00228B58: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00228B60
 * Original: 0x00228B60 - 0x00228BD9 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228B60: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00228BA5; /* jne: not equal / not zero */

loc_00228B69: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x00228B7Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228B7A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228B84u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228B84: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x00228B8Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228B8E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228B98u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228B98: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00228BA2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228BA2: ;
    esp = esp + 0x14;

loc_00228BA5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2221A0);
    PUSH32(esp, 0x200340);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x3FAA38);
    PUSH32(esp, 0x1F2CD0);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BC390);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00228BD5u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00228BD5: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00228BE0
 * Original: 0x00228BE0 - 0x00228C59 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228BE0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00228C25; /* jne: not equal / not zero */

loc_00228BE9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x00228BFAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228BFA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228C04u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228C04: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x00228C0Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228C0E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228C18u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228C18: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00228C22u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228C22: ;
    esp = esp + 0x14;

loc_00228C25: ;
    PUSH32(esp, 0x46C88C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21BEF0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x3FAA48);
    PUSH32(esp, 0x1F2D30);
    PUSH32(esp, 0x1A4350);
    PUSH32(esp, 0x221CF0);
    PUSH32(esp, 0x5BC394);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00228C55u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00228C55: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00228C60
 * Original: 0x00228C60 - 0x00228CDC (124 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228C60: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00228CA5; /* jne: not equal / not zero */

loc_00228C69: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x00228C7Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228C7A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228C84u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228C84: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x00228C8Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228C8E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228C98u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228C98: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00228CA2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228CA2: ;
    esp = esp + 0x14;

loc_00228CA5: ;
    PUSH32(esp, 0x46C894);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21DE20);
    PUSH32(esp, 0x21BF30);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x3FAA5C);
    PUSH32(esp, 0x1F2D60);
    PUSH32(esp, 0x219FD0);
    PUSH32(esp, 0x228BE0);
    PUSH32(esp, 0x5BC39C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00228CD8u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00228CD8: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00228CE0
 * Original: 0x00228CE0 - 0x00228D59 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228CE0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00228D25; /* jne: not equal / not zero */

loc_00228CE9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x00228CFAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228CFA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228D04u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228D04: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x00228D0Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228D0E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228D18u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228D18: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00228D22u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228D22: ;
    esp = esp + 0x14;

loc_00228D25: ;
    PUSH32(esp, 0x46C89C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20BA40);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FAA74);
    PUSH32(esp, 0x1F2480);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BC3A4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00228D55u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00228D55: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00228D60
 * Original: 0x00228D60 - 0x00228DD9 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228D60: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00228DA5; /* jne: not equal / not zero */

loc_00228D69: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x00228D7Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228D7A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228D84u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228D84: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x00228D8Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228D8E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228D98u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228D98: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00228DA2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228DA2: ;
    esp = esp + 0x14;

loc_00228DA5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2213B0);
    PUSH32(esp, 0x214A10);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x3FAA84);
    PUSH32(esp, 0x1F2420);
    PUSH32(esp, 0x1A4460);
    PUSH32(esp, 0x226510);
    PUSH32(esp, 0x5BC3B4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00228DD5u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00228DD5: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00228DE0
 * Original: 0x00228DE0 - 0x00228E59 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228DE0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00228E25; /* jne: not equal / not zero */

loc_00228DE9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x00228DFAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228DFA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228E04u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228E04: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x00228E0Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228E0E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228E18u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228E18: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00228E22u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228E22: ;
    esp = esp + 0x14;

loc_00228E25: ;
    PUSH32(esp, 0x46C8A4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20BA90);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FAA90);
    PUSH32(esp, 0x1F1F10);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BC3CC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00228E55u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00228E55: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00228E60
 * Original: 0x00228E60 - 0x00228ED9 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228E60: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00228EA5; /* jne: not equal / not zero */

loc_00228E69: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x00228E7Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228E7A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228E84u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228E84: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x00228E8Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228E8E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228E98u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228E98: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00228EA2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228EA2: ;
    esp = esp + 0x14;

loc_00228EA5: ;
    PUSH32(esp, 0x46C8AC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20BAC0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FAAA4);
    PUSH32(esp, 0x1F1EE0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BC3D0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00228ED5u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00228ED5: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00228EE0
 * Original: 0x00228EE0 - 0x00228F59 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228EE0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00228F25; /* jne: not equal / not zero */

loc_00228EE9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x00228EFAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228EFA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228F04u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228F04: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x00228F0Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228F0E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228F18u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228F18: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00228F22u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228F22: ;
    esp = esp + 0x14;

loc_00228F25: ;
    PUSH32(esp, 0x46C8B4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20BAF0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FAAB8);
    PUSH32(esp, 0x1F1EB0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BC3D4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00228F55u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00228F55: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00228F60
 * Original: 0x00228F60 - 0x00228FD9 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228F60: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00228FA5; /* jne: not equal / not zero */

loc_00228F69: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x00228F7Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228F7A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00228F84u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228F84: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x00228F8Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228F8E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00228F98u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228F98: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00228FA2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228FA2: ;
    esp = esp + 0x14;

loc_00228FA5: ;
    PUSH32(esp, 0x46C8BC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20BB20);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FAAC8);
    PUSH32(esp, 0x1F1E80);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BC3D8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00228FD5u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00228FD5: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00228FE0
 * Original: 0x00228FE0 - 0x00229059 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00228FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00228FE0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00229025; /* jne: not equal / not zero */

loc_00228FE9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x00228FFAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00228FFA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00229004u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229004: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022900Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022900E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00229018u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229018: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00229022u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229022: ;
    esp = esp + 0x14;

loc_00229025: ;
    PUSH32(esp, 0x46C8C4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20BB80);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FAAD8);
    PUSH32(esp, 0x1F1E20);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BC3E0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00229055u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00229055: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00229060
 * Original: 0x00229060 - 0x002290D9 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229060: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002290A5; /* jne: not equal / not zero */

loc_00229069: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022907Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022907A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00229084u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229084: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022908Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022908E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00229098u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229098: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x002290A2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002290A2: ;
    esp = esp + 0x14;

loc_002290A5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21F040);
    PUSH32(esp, 0x206AA0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FAAEC);
    PUSH32(esp, 0x1F1DC0);
    PUSH32(esp, 0x1A4380);
    PUSH32(esp, 0x21EE90);
    PUSH32(esp, 0x5BC3E8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002290D5u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002290D5: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002290E0
 * Original: 0x002290E0 - 0x00229159 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002290E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002290E0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00229125; /* jne: not equal / not zero */

loc_002290E9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x002290FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002290FA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00229104u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229104: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022910Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022910E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00229118u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229118: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00229122u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229122: ;
    esp = esp + 0x14;

loc_00229125: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21C8D0);
    PUSH32(esp, 0x206B40);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FAAFC);
    PUSH32(esp, 0x1F1D00);
    PUSH32(esp, 0x1A4380);
    PUSH32(esp, 0x21EE90);
    PUSH32(esp, 0x5BC3F8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00229155u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00229155: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00229160
 * Original: 0x00229160 - 0x002291D9 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229160: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002291A5; /* jne: not equal / not zero */

loc_00229169: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022917Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022917A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00229184u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229184: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022918Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022918E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00229198u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229198: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x002291A2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002291A2: ;
    esp = esp + 0x14;

loc_002291A5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21BF90);
    PUSH32(esp, 0x206B80);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FAB10);
    PUSH32(esp, 0x1F1CA0);
    PUSH32(esp, 0x1A4380);
    PUSH32(esp, 0x21EE90);
    PUSH32(esp, 0x5BC400);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002291D5u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002291D5: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002291E0
 * Original: 0x002291E0 - 0x00229259 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002291E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002291E0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00229225; /* jne: not equal / not zero */

loc_002291E9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x002291FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002291FA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00229204u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229204: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022920Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022920E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00229218u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229218: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00229222u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229222: ;
    esp = esp + 0x14;

loc_00229225: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x221D70);
    PUSH32(esp, 0x206BC0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FAB1C);
    PUSH32(esp, 0x1F1C40);
    PUSH32(esp, 0x1A4380);
    PUSH32(esp, 0x21EE90);
    PUSH32(esp, 0x5BC408);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00229255u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00229255: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00229260
 * Original: 0x00229260 - 0x002292D9 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229260: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002292A5; /* jne: not equal / not zero */

loc_00229269: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022927Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022927A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00229284u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229284: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022928Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022928E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00229298u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229298: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x002292A2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002292A2: ;
    esp = esp + 0x14;

loc_002292A5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x224FF0);
    PUSH32(esp, 0x2003E0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FAB30);
    PUSH32(esp, 0x219500);
    PUSH32(esp, 0x1A4380);
    PUSH32(esp, 0x21EE90);
    PUSH32(esp, 0x5BC410);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002292D5u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002292D5: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002292E0
 * Original: 0x002292E0 - 0x00229359 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002292E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002292E0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00229325; /* jne: not equal / not zero */

loc_002292E9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x002292FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002292FA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00229304u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229304: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022930Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022930E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00229318u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229318: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00229322u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229322: ;
    esp = esp + 0x14;

loc_00229325: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x225090);
    PUSH32(esp, 0x206C30);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FAB44);
    PUSH32(esp, 0x1F1BB0);
    PUSH32(esp, 0x1A4380);
    PUSH32(esp, 0x21EE90);
    PUSH32(esp, 0x5BC418);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00229355u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00229355: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00229360
 * Original: 0x00229360 - 0x002293D6 (118 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229360: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002293A5; /* jne: not equal / not zero */

loc_00229369: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022937Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022937A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00229384u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229384: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022938Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022938E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00229398u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229398: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x002293A2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002293A2: ;
    esp = esp + 0x14;

loc_002293A5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20BCB0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FAB58);
    PUSH32(esp, 0x1F1B80);
    PUSH32(esp, 0x1A43B0);
    PUSH32(esp, 0x21EED0);
    PUSH32(esp, 0x5BC41C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002293D2u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002293D2: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002293E0
 * Original: 0x002293E0 - 0x00229459 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002293E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002293E0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00229425; /* jne: not equal / not zero */

loc_002293E9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x002293FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002293FA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00229404u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229404: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022940Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022940E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00229418u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229418: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00229422u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229422: ;
    esp = esp + 0x14;

loc_00229425: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21DEF0);
    PUSH32(esp, 0x200460);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FAB6C);
    PUSH32(esp, 0x2194D0);
    PUSH32(esp, 0x1A4380);
    PUSH32(esp, 0x21EE90);
    PUSH32(esp, 0x5BC428);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00229455u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00229455: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00229460
 * Original: 0x00229460 - 0x002294D9 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229460: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002294A5; /* jne: not equal / not zero */

loc_00229469: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022947Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022947A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00229484u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229484: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022948Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022948E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00229498u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229498: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x002294A2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002294A2: ;
    esp = esp + 0x14;

loc_002294A5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21DF90);
    PUSH32(esp, 0x206C80);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FAB78);
    PUSH32(esp, 0x1F1AF0);
    PUSH32(esp, 0x1A4380);
    PUSH32(esp, 0x21EE90);
    PUSH32(esp, 0x5BC42C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002294D5u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002294D5: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002294E0
 * Original: 0x002294E0 - 0x00229559 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002294E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002294E0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00229525; /* jne: not equal / not zero */

loc_002294E9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x002294FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002294FA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00229504u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229504: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022950Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022950E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00229518u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229518: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00229522u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229522: ;
    esp = esp + 0x14;

loc_00229525: ;
    PUSH32(esp, 0x46C8CC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x214BB0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FAB84);
    PUSH32(esp, 0x1F2CA0);
    PUSH32(esp, 0x1A43F0);
    PUSH32(esp, 0x223F30);
    PUSH32(esp, 0x5BC440);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00229555u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00229555: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00229560
 * Original: 0x00229560 - 0x002295DC (124 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229560: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002295A5; /* jne: not equal / not zero */

loc_00229569: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022957Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022957A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00229584u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229584: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022958Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022958E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00229598u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229598: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x002295A2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002295A2: ;
    esp = esp + 0x14;

loc_002295A5: ;
    PUSH32(esp, 0x46C8D4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21E130);
    PUSH32(esp, 0x21CA30);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x3FAB94);
    PUSH32(esp, 0x1F2F10);
    PUSH32(esp, 0x1A58D0);
    PUSH32(esp, 0x21C070);
    PUSH32(esp, 0x5BC458);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002295D8u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002295D8: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002295E0
 * Original: 0x002295E0 - 0x0022965C (124 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002295E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002295E0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00229625; /* jne: not equal / not zero */

loc_002295E9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x002295FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002295FA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00229604u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229604: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022960Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022960E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00229618u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229618: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00229622u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229622: ;
    esp = esp + 0x14;

loc_00229625: ;
    PUSH32(esp, 0x46C8DC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21E290);
    PUSH32(esp, 0x21CA70);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x3FABAC);
    PUSH32(esp, 0x1F2FA0);
    PUSH32(esp, 0x21A210);
    PUSH32(esp, 0x21C110);
    PUSH32(esp, 0x5BC470);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00229658u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00229658: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00229660
 * Original: 0x00229660 - 0x002296DC (124 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229660: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002296A5; /* jne: not equal / not zero */

loc_00229669: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022967Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022967A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00229684u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229684: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022968Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022968E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00229698u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229698: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x002296A2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002296A2: ;
    esp = esp + 0x14;

loc_002296A5: ;
    PUSH32(esp, 0x46C8E4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x225FF0);
    PUSH32(esp, 0x21A0C0);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x3FABC4);
    PUSH32(esp, 0x22B730);
    PUSH32(esp, 0x1E68A0);
    PUSH32(esp, 0x22DEA0);
    PUSH32(esp, 0x5BC4CC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002296D8u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002296D8: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002296E0
 * Original: 0x002296E0 - 0x0022975C (124 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002296E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002296E0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00229725; /* jne: not equal / not zero */

loc_002296E9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x002296FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002296FA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00229704u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229704: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022970Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022970E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00229718u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229718: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00229722u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229722: ;
    esp = esp + 0x14;

loc_00229725: ;
    PUSH32(esp, 0x46C8EC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x224AC0);
    PUSH32(esp, 0x215290);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x3FABD4);
    PUSH32(esp, 0x22B760);
    PUSH32(esp, 0x1E68C0);
    PUSH32(esp, 0x22E440);
    PUSH32(esp, 0x5BC4D0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00229758u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00229758: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00229760
 * Original: 0x00229760 - 0x002297D9 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229760: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002297A5; /* jne: not equal / not zero */

loc_00229769: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022977Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022977A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00229784u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229784: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022978Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022978E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00229798u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229798: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x002297A2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002297A2: ;
    esp = esp + 0x14;

loc_002297A5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1F34A0);
    PUSH32(esp, 0x2152D0);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x3FABE4);
    PUSH32(esp, 0x219620);
    PUSH32(esp, 0x19B880);
    PUSH32(esp, 0x22F4F0);
    PUSH32(esp, 0x5BC4D8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002297D5u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002297D5: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002297E0
 * Original: 0x002297E0 - 0x0022985C (124 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002297E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002297E0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00229825; /* jne: not equal / not zero */

loc_002297E9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x002297FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002297FA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00229804u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229804: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022980Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022980E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00229818u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229818: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00229822u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229822: ;
    esp = esp + 0x14;

loc_00229825: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1F34C0);
    PUSH32(esp, 0x1E6AE0);
    PUSH32(esp, 0x20BF70);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x3FABF4);
    PUSH32(esp, 0x22B790);
    PUSH32(esp, 0x1E68B0);
    PUSH32(esp, 0x22DF40);
    PUSH32(esp, 0x5BC4F4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00229858u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00229858: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00229860
 * Original: 0x00229860 - 0x002298D9 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229860: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002298A5; /* jne: not equal / not zero */

loc_00229869: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022987Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022987A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00229884u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229884: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022988Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022988E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00229898u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229898: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x002298A2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002298A2: ;
    esp = esp + 0x14;

loc_002298A5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x226200);
    PUSH32(esp, 0x206D50);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x3FAC08);
    PUSH32(esp, 0x22B7C0);
    PUSH32(esp, 0x2002A0);
    PUSH32(esp, 0x22E040);
    PUSH32(esp, 0x5BC4FC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002298D5u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002298D5: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002298E0
 * Original: 0x002298E0 - 0x00229956 (118 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002298E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002298E0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00229925; /* jne: not equal / not zero */

loc_002298E9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x002298FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002298FA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00229904u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229904: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022990Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022990E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00229918u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229918: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00229922u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229922: ;
    esp = esp + 0x14;

loc_00229925: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21A1E0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x3FAC18);
    PUSH32(esp, 0x22B7F0);
    PUSH32(esp, 0x214460);
    PUSH32(esp, 0x22E0C0);
    PUSH32(esp, 0x5BC500);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00229952u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00229952: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00229960
 * Original: 0x00229960 - 0x002299D9 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229960: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002299A5; /* jne: not equal / not zero */

loc_00229969: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022997Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022997A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00229984u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229984: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022998Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022998E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00229998u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229998: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x002299A2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002299A2: ;
    esp = esp + 0x14;

loc_002299A5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1F34D0);
    PUSH32(esp, 0x20BFB0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FAC28);
    PUSH32(esp, 0x22B820);
    PUSH32(esp, 0x206CD0);
    PUSH32(esp, 0x22E3C0);
    PUSH32(esp, 0x5BC504);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002299D5u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_002299D5: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002299E0
 * Original: 0x002299E0 - 0x002299EC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002299E0(void)
{

loc_002299E0: ;
    PUSH32(esp, 0x2282E0);
    PUSH32(esp, 0x002299EAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002299EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002299F0
 * Original: 0x002299F0 - 0x00229A6C (124 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002299F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002299F0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00229A35; /* jne: not equal / not zero */

loc_002299F9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x00229A0Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229A0A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00229A14u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229A14: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x00229A1Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229A1E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00229A28u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229A28: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00229A32u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229A32: ;
    esp = esp + 0x14;

loc_00229A35: ;
    PUSH32(esp, 0x46C8F4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x223CD0);
    PUSH32(esp, 0x213710);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FAC40);
    PUSH32(esp, 0x1F24B0);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BC210);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00229A68u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00229A68: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00229A70
 * Original: 0x00229A70 - 0x00229A7C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229A70(void)
{

loc_00229A70: ;
    PUSH32(esp, 0x2284E0);
    PUSH32(esp, 0x00229A7Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229A7A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00229A80
 * Original: 0x00229A80 - 0x00229AFC (124 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229A80: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00229AC5; /* jne: not equal / not zero */

loc_00229A89: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x00229A9Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229A9A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00229AA4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229AA4: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x00229AAEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229AAE: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00229AB8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229AB8: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00229AC2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229AC2: ;
    esp = esp + 0x14;

loc_00229AC5: ;
    PUSH32(esp, 0x46C8FC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2201C0);
    PUSH32(esp, 0x21BB40);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x3FAC50);
    PUSH32(esp, 0x22DD60);
    PUSH32(esp, 0x1B9380);
    PUSH32(esp, 0x228D60);
    PUSH32(esp, 0x5BC25C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00229AF8u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00229AF8: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00229B00
 * Original: 0x00229B00 - 0x00229B0C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229B00(void)
{

loc_00229B00: ;
    PUSH32(esp, 0x2285E0);
    PUSH32(esp, 0x00229B0Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229B0A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00229B10
 * Original: 0x00229B10 - 0x00229B1C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229B10(void)
{

loc_00229B10: ;
    PUSH32(esp, 0x2286E0);
    PUSH32(esp, 0x00229B1Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229B1A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00229B20
 * Original: 0x00229B20 - 0x00229B9C (124 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229B20: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00229B65; /* jne: not equal / not zero */

loc_00229B29: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x00229B3Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229B3A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00229B44u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229B44: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x00229B4Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229B4E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00229B58u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229B58: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00229B62u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229B62: ;
    esp = esp + 0x14;

loc_00229B65: ;
    PUSH32(esp, 0x46C908);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21ECF0);
    PUSH32(esp, 0x219BB0);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x3FAC64);
    PUSH32(esp, 0x22DD90);
    PUSH32(esp, 0x1B9380);
    PUSH32(esp, 0x228D60);
    PUSH32(esp, 0x5BC2C4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00229B98u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00229B98: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00229BA0
 * Original: 0x00229BA0 - 0x00229BAC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229BA0(void)
{

loc_00229BA0: ;
    PUSH32(esp, 0x228760);
    PUSH32(esp, 0x00229BAAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229BAA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00229BB0
 * Original: 0x00229BB0 - 0x00229BCC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229BB0: ;
    eax = MEM32(0x5BC2E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00229BCB; /* jne: not equal / not zero */

loc_00229BB9: ;
    PUSH32(esp, 0x2287E0);
    PUSH32(esp, 0x00229BC3u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229BC3: ;
    eax = MEM32(0x5BC2E0);
    esp = esp + 4;

loc_00229BCB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00229BD0
 * Original: 0x00229BD0 - 0x00229BDC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229BD0(void)
{

loc_00229BD0: ;
    PUSH32(esp, 0x228960);
    PUSH32(esp, 0x00229BDAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229BDA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00229BE0
 * Original: 0x00229BE0 - 0x00229BFC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229BE0: ;
    eax = MEM32(0x5BC328);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00229BFB; /* jne: not equal / not zero */

loc_00229BE9: ;
    PUSH32(esp, 0x2289E0);
    PUSH32(esp, 0x00229BF3u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229BF3: ;
    eax = MEM32(0x5BC328);
    esp = esp + 4;

loc_00229BFB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00229C00
 * Original: 0x00229C00 - 0x00229C79 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229C00: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00229C45; /* jne: not equal / not zero */

loc_00229C09: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x00229C1Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229C1A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00229C24u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229C24: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x00229C2Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229C2E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00229C38u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229C38: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00229C42u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229C42: ;
    esp = esp + 0x14;

loc_00229C45: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2204B0);
    PUSH32(esp, 0x219F10);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x3FAC78);
    PUSH32(esp, 0x22DDF0);
    PUSH32(esp, 0x1B9380);
    PUSH32(esp, 0x228D60);
    PUSH32(esp, 0x5BC340);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00229C75u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00229C75: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00229C80
 * Original: 0x00229C80 - 0x00229CFC (124 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229C80: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00229CC5; /* jne: not equal / not zero */

loc_00229C89: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x00229C9Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229C9A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00229CA4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229CA4: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x00229CAEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229CAE: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00229CB8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229CB8: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00229CC2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229CC2: ;
    esp = esp + 0x14;

loc_00229CC5: ;
    PUSH32(esp, 0x46C910);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21DD10);
    PUSH32(esp, 0x219F50);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x3FAC8C);
    PUSH32(esp, 0x22DE20);
    PUSH32(esp, 0x1B9380);
    PUSH32(esp, 0x228D60);
    PUSH32(esp, 0x5BC344);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00229CF8u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00229CF8: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00229D00
 * Original: 0x00229D00 - 0x00229D7C (124 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229D00: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00229D45; /* jne: not equal / not zero */

loc_00229D09: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x00229D1Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229D1A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00229D24u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229D24: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x00229D2Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229D2E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00229D38u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229D38: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00229D42u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229D42: ;
    esp = esp + 0x14;

loc_00229D45: ;
    PUSH32(esp, 0x46C918);
    PUSH32(esp, 0);
    PUSH32(esp, 0x220560);
    PUSH32(esp, 0x219F90);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x3FACA4);
    PUSH32(esp, 0x22DDC0);
    PUSH32(esp, 0x1B9380);
    PUSH32(esp, 0x228D60);
    PUSH32(esp, 0x5BC348);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00229D78u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00229D78: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00229D80
 * Original: 0x00229D80 - 0x00229D9C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229D80: ;
    eax = MEM32(0x5BC398);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00229D9B; /* jne: not equal / not zero */

loc_00229D89: ;
    PUSH32(esp, 0x228BE0);
    PUSH32(esp, 0x00229D93u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229D93: ;
    eax = MEM32(0x5BC398);
    esp = esp + 4;

loc_00229D9B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00229DA0
 * Original: 0x00229DA0 - 0x00229DAC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229DA0(void)
{

loc_00229DA0: ;
    PUSH32(esp, 0x228CE0);
    PUSH32(esp, 0x00229DAAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229DAA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00229DB0
 * Original: 0x00229DB0 - 0x00229DBC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229DB0(void)
{

loc_00229DB0: ;
    PUSH32(esp, 0x228D60);
    PUSH32(esp, 0x00229DBAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229DBA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00229DC0
 * Original: 0x00229DC0 - 0x00229DCC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229DC0(void)
{

loc_00229DC0: ;
    PUSH32(esp, 0x228DE0);
    PUSH32(esp, 0x00229DCAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229DCA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00229DD0
 * Original: 0x00229DD0 - 0x00229DDC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229DD0(void)
{

loc_00229DD0: ;
    PUSH32(esp, 0x228EE0);
    PUSH32(esp, 0x00229DDAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229DDA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00229DE0
 * Original: 0x00229DE0 - 0x00229DEC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229DE0(void)
{

loc_00229DE0: ;
    PUSH32(esp, 0x228F60);
    PUSH32(esp, 0x00229DEAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229DEA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00229DF0
 * Original: 0x00229DF0 - 0x00229DFC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229DF0(void)
{

loc_00229DF0: ;
    PUSH32(esp, 0x228FE0);
    PUSH32(esp, 0x00229DFAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229DFA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00229E00
 * Original: 0x00229E00 - 0x00229E0C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229E00(void)
{

loc_00229E00: ;
    PUSH32(esp, 0x229060);
    PUSH32(esp, 0x00229E0Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229E0A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00229E10
 * Original: 0x00229E10 - 0x00229EAE (158 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229E10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229E10: ;
    eax = MEM32(0x5BB930);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BC3EC);
    esi = MEM32(edi + 0x28);
    PUSH32(esp, 0x3E226C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00229E2Eu); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_00229E2E: ;
    ecx = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00229E4A; /* jle: less or equal (signed <=) */

loc_00229E3A: ;
    /* nop */

loc_00229E40: ;
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00229EA7; /* je: equal / zero */

loc_00229E45: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00229E40; /* jl: less (signed <) */

loc_00229E4A: ;
    ebx = ebx | 0xFFFFFFFFu;

loc_00229E4D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00229E56u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00229E56: ;
    esi = eax;
    eax = MEM32(0x5BC398);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00229E6E; /* jne: not equal / not zero */

loc_00229E61: ;
    PUSH32(esp, 0x228BE0);
    PUSH32(esp, 0x00229E6Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229E6B: ;
    esp = esp + 4;

loc_00229E6E: ;
    eax = MEM32(0x5BC398);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x38) = 0;
    MEM32(esi + 0x1C) = 0x5BB7A4;
    PUSH32(esp, 0x00229E8Du); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_00229E8D: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_00229EAB; /* jne: not equal / not zero */

loc_00229E9E: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00229EA7: ;
    ebx = edx;
    goto loc_00229E4D;

loc_00229EAB: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00229EB0
 * Original: 0x00229EB0 - 0x00229F4E (158 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229EB0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00229EB0: ;
    eax = MEM32(0x5BB930);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BC3F4);
    esi = MEM32(edi + 0x28);
    PUSH32(esp, 0x3E226C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00229ECEu); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_00229ECE: ;
    ecx = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_00229EEA; /* jle: less or equal (signed <=) */

loc_00229EDA: ;
    /* nop */

loc_00229EE0: ;
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00229F47; /* je: equal / zero */

loc_00229EE5: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00229EE0; /* jl: less (signed <) */

loc_00229EEA: ;
    ebx = ebx | 0xFFFFFFFFu;

loc_00229EED: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00229EF6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00229EF6: ;
    esi = eax;
    eax = MEM32(0x5BC328);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00229F0E; /* jne: not equal / not zero */

loc_00229F01: ;
    PUSH32(esp, 0x2289E0);
    PUSH32(esp, 0x00229F0Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229F0B: ;
    esp = esp + 4;

loc_00229F0E: ;
    eax = MEM32(0x5BC328);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x38) = 0;
    MEM32(esi + 0x1C) = 0x5BC098;
    PUSH32(esp, 0x00229F2Du); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_00229F2D: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_00229F4B; /* jne: not equal / not zero */

loc_00229F3E: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00229F47: ;
    ebx = edx;
    goto loc_00229EED;

loc_00229F4B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00229F50
 * Original: 0x00229F50 - 0x00229F5C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229F50(void)
{

loc_00229F50: ;
    PUSH32(esp, 0x2290E0);
    PUSH32(esp, 0x00229F5Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229F5A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00229F60
 * Original: 0x00229F60 - 0x00229F6C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229F60(void)
{

loc_00229F60: ;
    PUSH32(esp, 0x229160);
    PUSH32(esp, 0x00229F6Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229F6A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00229F70
 * Original: 0x00229F70 - 0x00229F7C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229F70(void)
{

loc_00229F70: ;
    PUSH32(esp, 0x2291E0);
    PUSH32(esp, 0x00229F7Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229F7A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00229F80
 * Original: 0x00229F80 - 0x00229FF6 (118 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00229F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00229F80: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00229FC5; /* jne: not equal / not zero */

loc_00229F89: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x00229F9Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229F9A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x00229FA4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229FA4: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x00229FAEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229FAE: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x00229FB8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229FB8: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x00229FC2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00229FC2: ;
    esp = esp + 0x14;

loc_00229FC5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20BC70);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FACB8);
    PUSH32(esp, 0x1F1C10);
    PUSH32(esp, 0x1A43C0);
    PUSH32(esp, 0x229260);
    PUSH32(esp, 0x5BC40C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00229FF2u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_00229FF2: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A000
 * Original: 0x0022A000 - 0x0022A09E (158 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A000(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A000: ;
    eax = MEM32(0x5BB930);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x5BC414);
    esi = MEM32(edi + 0x28);
    PUSH32(esp, 0x3E226C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0022A01Eu); RECOMP_ABI_CALL(0x001E8800u, sub_001E8800); /* call 0x001E8800 */

loc_0022A01E: ;
    ecx = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (CMP_LE(_fas & _fbs, 0)) goto loc_0022A03A; /* jle: less or equal (signed <=) */

loc_0022A02A: ;
    /* nop */

loc_0022A030: ;
    _fa = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0022A097; /* je: equal / zero */

loc_0022A035: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0022A030; /* jl: less (signed <) */

loc_0022A03A: ;
    ebx = ebx | 0xFFFFFFFFu;

loc_0022A03D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0022A046u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0022A046: ;
    esi = eax;
    eax = MEM32(0x5BC2E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022A05E; /* jne: not equal / not zero */

loc_0022A051: ;
    PUSH32(esp, 0x2287E0);
    PUSH32(esp, 0x0022A05Bu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A05B: ;
    esp = esp + 4;

loc_0022A05E: ;
    eax = MEM32(0x5BC2E0);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x38) = 0;
    MEM32(esi + 0x1C) = 0x5BC138;
    PUSH32(esp, 0x0022A07Du); RECOMP_ABI_CALL(0x002093F0u, sub_002093F0); /* call 0x002093F0 */

loc_0022A07D: ;
    ecx = MEM32(esi + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(esi + 4) = ecx;
    POP32(esp, edi);
    if (TEST_NZ(_fa, _fb)) goto loc_0022A09B; /* jne: not equal / not zero */

loc_0022A08E: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_0022A097: ;
    ebx = edx;
    goto loc_0022A03D;

loc_0022A09B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022A0A0
 * Original: 0x0022A0A0 - 0x0022A0AC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A0A0(void)
{

loc_0022A0A0: ;
    PUSH32(esp, 0x229360);
    PUSH32(esp, 0x0022A0AAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A0AA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022A0B0
 * Original: 0x0022A0B0 - 0x0022A126 (118 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022A0B0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022A0F5; /* jne: not equal / not zero */

loc_0022A0B9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022A0CAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A0CA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x0022A0D4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A0D4: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022A0DEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A0DE: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x0022A0E8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A0E8: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x0022A0F2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A0F2: ;
    esp = esp + 0x14;

loc_0022A0F5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20BCE0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FACD4);
    PUSH32(esp, 0x1F1B20);
    PUSH32(esp, 0x1A43A0);
    PUSH32(esp, 0x2293E0);
    PUSH32(esp, 0x5BC424);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0022A122u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0022A122: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A130
 * Original: 0x0022A130 - 0x0022A1A9 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022A130: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022A175; /* jne: not equal / not zero */

loc_0022A139: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022A14Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A14A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x0022A154u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A154: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022A15Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A15E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x0022A168u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A168: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x0022A172u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A172: ;
    esp = esp + 0x14;

loc_0022A175: ;
    PUSH32(esp, 0x46C920);
    PUSH32(esp, 0);
    PUSH32(esp, 0x223320);
    PUSH32(esp, 0);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x3FACE8);
    PUSH32(esp, 0x1F2D90);
    PUSH32(esp, 0x1A4350);
    PUSH32(esp, 0x221CF0);
    PUSH32(esp, 0x5BC448);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0022A1A5u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0022A1A5: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A1B0
 * Original: 0x0022A1B0 - 0x0022A229 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022A1B0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022A1F5; /* jne: not equal / not zero */

loc_0022A1B9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022A1CAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A1CA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x0022A1D4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A1D4: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022A1DEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A1DE: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x0022A1E8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A1E8: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x0022A1F2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A1F2: ;
    esp = esp + 0x14;

loc_0022A1F5: ;
    PUSH32(esp, 0x46C92C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21C170);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x3FACFC);
    PUSH32(esp, 0x1F3090);
    PUSH32(esp, 0x1AA560);
    PUSH32(esp, 0x22A130);
    PUSH32(esp, 0x5BC4BC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0022A225u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0022A225: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A230
 * Original: 0x0022A230 - 0x0022A2A9 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022A230: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022A275; /* jne: not equal / not zero */

loc_0022A239: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022A24Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A24A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x0022A254u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A254: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022A25Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A25E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x0022A268u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A268: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x0022A272u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A272: ;
    esp = esp + 0x14;

loc_0022A275: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x220760);
    PUSH32(esp, 0x21C1C0);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0x3FAD18);
    PUSH32(esp, 0x22DE50);
    PUSH32(esp, 0x2152C0);
    PUSH32(esp, 0x229760);
    PUSH32(esp, 0x5BC4D4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0022A2A5u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0022A2A5: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A2B0
 * Original: 0x0022A2B0 - 0x0022A2BC (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A2B0(void)
{

loc_0022A2B0: ;
    PUSH32(esp, 0x229960);
    PUSH32(esp, 0x0022A2BAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A2BA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022A2C0
 * Original: 0x0022A2C0 - 0x0022A2F5 (53 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A2C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A2C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x5BC398);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022A2E0; /* jne: not equal / not zero */

loc_0022A2CD: ;
    PUSH32(esp, 0x228BE0);
    PUSH32(esp, 0x0022A2D7u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A2D7: ;
    ecx = MEM32(0x5BC398);
    esp = esp + 4;

loc_0022A2E0: ;
    edx = MEM32(esi + 0x34);
    eax = MEM32(ecx);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0xC));
    POP32(esp, esi);
    MEM32(esp + 8) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC8)); return; /* indirect tail jmp */

}

/**
 * sub_0022A300
 * Original: 0x0022A300 - 0x0022A335 (53 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A300(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A300: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x5BC328);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022A320; /* jne: not equal / not zero */

loc_0022A30D: ;
    PUSH32(esp, 0x2289E0);
    PUSH32(esp, 0x0022A317u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A317: ;
    ecx = MEM32(0x5BC328);
    esp = esp + 4;

loc_0022A320: ;
    edx = MEM32(esi + 0x34);
    eax = MEM32(ecx);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0xC));
    POP32(esp, esi);
    MEM32(esp + 8) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC8)); return; /* indirect tail jmp */

}

/**
 * sub_0022A340
 * Original: 0x0022A340 - 0x0022A375 (53 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A340(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0022A340: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x5BC2E0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022A360; /* jne: not equal / not zero */

loc_0022A34D: ;
    PUSH32(esp, 0x2287E0);
    PUSH32(esp, 0x0022A357u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A357: ;
    ecx = MEM32(0x5BC2E0);
    esp = esp + 4;

loc_0022A360: ;
    edx = MEM32(esi + 0x34);
    eax = MEM32(ecx);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 0xC));
    POP32(esp, esi);
    MEM32(esp + 8) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC8)); return; /* indirect tail jmp */

}

/**
 * sub_0022A380
 * Original: 0x0022A380 - 0x0022A39E (30 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A380(void)
{

loc_0022A380: ;
    PUSH32(esp, 0x228160);
    PUSH32(esp, 0x0022A38Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A38A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BC174);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022A39Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0022A39D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A3A0
 * Original: 0x0022A3A0 - 0x0022A3BE (30 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A3A0(void)
{

loc_0022A3A0: ;
    PUSH32(esp, 0x2281E0);
    PUSH32(esp, 0x0022A3AAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A3AA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BC184);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022A3BDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0022A3BD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A3C0
 * Original: 0x0022A3C0 - 0x0022A439 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022A3C0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022A405; /* jne: not equal / not zero */

loc_0022A3C9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022A3DAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A3DA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x0022A3E4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A3E4: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022A3EEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A3EE: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x0022A3F8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A3F8: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x0022A402u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A402: ;
    esp = esp + 0x14;

loc_0022A405: ;
    PUSH32(esp, 0x46C934);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20B5A0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FAD24);
    PUSH32(esp, 0x1F22D0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BC1CC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0022A435u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0022A435: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A440
 * Original: 0x0022A440 - 0x0022A45E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A440(void)
{

loc_0022A440: ;
    PUSH32(esp, 0x2282E0);
    PUSH32(esp, 0x0022A44Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A44A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BC1D0);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022A45Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0022A45D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A460
 * Original: 0x0022A460 - 0x0022A46C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A460(void)
{

loc_0022A460: ;
    PUSH32(esp, 0x2299F0);
    PUSH32(esp, 0x0022A46Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A46A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022A470
 * Original: 0x0022A470 - 0x0022A4E9 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022A470: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022A4B5; /* jne: not equal / not zero */

loc_0022A479: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022A48Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A48A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x0022A494u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A494: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022A49Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A49E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x0022A4A8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A4A8: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x0022A4B2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A4B2: ;
    esp = esp + 0x14;

loc_0022A4B5: ;
    PUSH32(esp, 0x46C93C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20B620);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FAD34);
    PUSH32(esp, 0x1F2630);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BC234);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0022A4E5u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0022A4E5: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A4F0
 * Original: 0x0022A4F0 - 0x0022A56C (124 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A4F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022A4F0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022A535; /* jne: not equal / not zero */

loc_0022A4F9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022A50Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A50A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x0022A514u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A514: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022A51Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A51E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x0022A528u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A528: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x0022A532u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A532: ;
    esp = esp + 0x14;

loc_0022A535: ;
    PUSH32(esp, 0x46C944);
    PUSH32(esp, 0);
    PUSH32(esp, 0x224F30);
    PUSH32(esp, 0x2139D0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x3FAD4C);
    PUSH32(esp, 0x1F26F0);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BC244);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0022A568u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0022A568: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A570
 * Original: 0x0022A570 - 0x0022A58E (30 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A570(void)
{

loc_0022A570: ;
    PUSH32(esp, 0x228560);
    PUSH32(esp, 0x0022A57Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A57A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BC250);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022A58Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0022A58D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A590
 * Original: 0x0022A590 - 0x0022A609 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022A590: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022A5D5; /* jne: not equal / not zero */

loc_0022A599: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022A5AAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A5AA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x0022A5B4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A5B4: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022A5BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A5BE: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x0022A5C8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A5C8: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x0022A5D2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A5D2: ;
    esp = esp + 0x14;

loc_0022A5D5: ;
    PUSH32(esp, 0x46C950);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20B720);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FAD60);
    PUSH32(esp, 0x1F29A0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BC2BC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0022A605u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0022A605: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A610
 * Original: 0x0022A610 - 0x0022A689 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022A610: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022A655; /* jne: not equal / not zero */

loc_0022A619: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022A62Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A62A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x0022A634u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A634: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022A63Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A63E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x0022A648u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A648: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x0022A652u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A652: ;
    esp = esp + 0x14;

loc_0022A655: ;
    PUSH32(esp, 0x46C958);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20B760);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FAD78);
    PUSH32(esp, 0x1F2AC0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BC2D0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0022A685u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0022A685: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A690
 * Original: 0x0022A690 - 0x0022A6AE (30 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A690(void)
{

loc_0022A690: ;
    PUSH32(esp, 0x2287E0);
    PUSH32(esp, 0x0022A69Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A69A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BC2DC);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022A6ADu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0022A6AD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A6B0
 * Original: 0x0022A6B0 - 0x0022A6CE (30 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A6B0(void)
{

loc_0022A6B0: ;
    PUSH32(esp, 0x2288E0);
    PUSH32(esp, 0x0022A6BAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A6BA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BC30C);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022A6CDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0022A6CD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A6D0
 * Original: 0x0022A6D0 - 0x0022A6EE (30 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A6D0(void)
{

loc_0022A6D0: ;
    PUSH32(esp, 0x2289E0);
    PUSH32(esp, 0x0022A6DAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A6DA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BC324);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022A6EDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0022A6ED: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A6F0
 * Original: 0x0022A6F0 - 0x0022A70E (30 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A6F0(void)
{

loc_0022A6F0: ;
    PUSH32(esp, 0x228A60);
    PUSH32(esp, 0x0022A6FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A6FA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BC32C);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022A70Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0022A70D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A710
 * Original: 0x0022A710 - 0x0022A72E (30 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A710(void)
{

loc_0022A710: ;
    PUSH32(esp, 0x228AE0);
    PUSH32(esp, 0x0022A71Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A71A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BC37C);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022A72Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0022A72D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A730
 * Original: 0x0022A730 - 0x0022A74E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A730(void)
{

loc_0022A730: ;
    PUSH32(esp, 0x228B60);
    PUSH32(esp, 0x0022A73Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A73A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BC390);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022A74Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0022A74D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A750
 * Original: 0x0022A750 - 0x0022A76E (30 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A750(void)
{

loc_0022A750: ;
    PUSH32(esp, 0x228BE0);
    PUSH32(esp, 0x0022A75Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A75A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BC394);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022A76Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0022A76D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A770
 * Original: 0x0022A770 - 0x0022A7E9 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022A770: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022A7B5; /* jne: not equal / not zero */

loc_0022A779: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022A78Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A78A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x0022A794u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A794: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022A79Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A79E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x0022A7A8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A7A8: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x0022A7B2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A7B2: ;
    esp = esp + 0x14;

loc_0022A7B5: ;
    PUSH32(esp, 0x46C960);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x21C880);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0x3FAD84);
    PUSH32(esp, 0x1F2DC0);
    PUSH32(esp, 0x1AA560);
    PUSH32(esp, 0x22A130);
    PUSH32(esp, 0x5BC3C0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0022A7E5u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0022A7E5: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A7F0
 * Original: 0x0022A7F0 - 0x0022A869 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A7F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022A7F0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022A835; /* jne: not equal / not zero */

loc_0022A7F9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022A80Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A80A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x0022A814u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A814: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022A81Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A81E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x0022A828u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A828: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x0022A832u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A832: ;
    esp = esp + 0x14;

loc_0022A835: ;
    PUSH32(esp, 0x46C968);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20BB50);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FAD9C);
    PUSH32(esp, 0x1F1E50);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BC3DC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0022A865u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0022A865: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A870
 * Original: 0x0022A870 - 0x0022A88E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A870(void)
{

loc_0022A870: ;
    PUSH32(esp, 0x228FE0);
    PUSH32(esp, 0x0022A87Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A87A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BC3E0);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022A88Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0022A88D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A890
 * Original: 0x0022A890 - 0x0022A909 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022A890: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022A8D5; /* jne: not equal / not zero */

loc_0022A899: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022A8AAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A8AA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x0022A8B4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A8B4: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022A8BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A8BE: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x0022A8C8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A8C8: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x0022A8D2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A8D2: ;
    esp = esp + 0x14;

loc_0022A8D5: ;
    PUSH32(esp, 0x46C970);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20BBB0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FADB4);
    PUSH32(esp, 0x1F1DF0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BC3E4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0022A905u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0022A905: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A910
 * Original: 0x0022A910 - 0x0022A92E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A910(void)
{

loc_0022A910: ;
    PUSH32(esp, 0x229060);
    PUSH32(esp, 0x0022A91Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A91A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BC3E8);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022A92Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0022A92D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A930
 * Original: 0x0022A930 - 0x0022A9A9 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022A930: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022A975; /* jne: not equal / not zero */

loc_0022A939: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022A94Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A94A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x0022A954u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A954: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022A95Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A95E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x0022A968u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A968: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x0022A972u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A972: ;
    esp = esp + 0x14;

loc_0022A975: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x229E10);
    PUSH32(esp, 0x206AD0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FADC8);
    PUSH32(esp, 0x1F1D90);
    PUSH32(esp, 0x1A4380);
    PUSH32(esp, 0x21EE90);
    PUSH32(esp, 0x5BC3EC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0022A9A5u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0022A9A5: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0022A9B0
 * Original: 0x0022A9B0 - 0x0022AA29 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022A9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022A9B0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022A9F5; /* jne: not equal / not zero */

loc_0022A9B9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022A9CAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A9CA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x0022A9D4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A9D4: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022A9DEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A9DE: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x0022A9E8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A9E8: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x0022A9F2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022A9F2: ;
    esp = esp + 0x14;

loc_0022A9F5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x229EB0);
    PUSH32(esp, 0x206B10);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FADD8);
    PUSH32(esp, 0x1F1D30);
    PUSH32(esp, 0x1A4380);
    PUSH32(esp, 0x21EE90);
    PUSH32(esp, 0x5BC3F4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0022AA25u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0022AA25: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0022AA30
 * Original: 0x0022AA30 - 0x0022AA4E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AA30(void)
{

loc_0022AA30: ;
    PUSH32(esp, 0x2290E0);
    PUSH32(esp, 0x0022AA3Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022AA3A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BC3F8);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022AA4Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0022AA4D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022AA50
 * Original: 0x0022AA50 - 0x0022AAC9 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022AA50: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022AA95; /* jne: not equal / not zero */

loc_0022AA59: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022AA6Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022AA6A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x0022AA74u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022AA74: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022AA7Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022AA7E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x0022AA88u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022AA88: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x0022AA92u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022AA92: ;
    esp = esp + 0x14;

loc_0022AA95: ;
    PUSH32(esp, 0x46C978);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20BC10);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FADE4);
    PUSH32(esp, 0x1F1CD0);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BC3FC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0022AAC5u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0022AAC5: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0022AAD0
 * Original: 0x0022AAD0 - 0x0022AAEE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AAD0(void)
{

loc_0022AAD0: ;
    PUSH32(esp, 0x229160);
    PUSH32(esp, 0x0022AADAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022AADA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BC400);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022AAEDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0022AAED: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022AAF0
 * Original: 0x0022AAF0 - 0x0022AB69 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AAF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022AAF0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022AB35; /* jne: not equal / not zero */

loc_0022AAF9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022AB0Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022AB0A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x0022AB14u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022AB14: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022AB1Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022AB1E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x0022AB28u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022AB28: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x0022AB32u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022AB32: ;
    esp = esp + 0x14;

loc_0022AB35: ;
    PUSH32(esp, 0x46C980);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20BC40);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FADF4);
    PUSH32(esp, 0x1F1C70);
    PUSH32(esp, 0x1A4390);
    PUSH32(esp, 0x223EF0);
    PUSH32(esp, 0x5BC404);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0022AB65u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0022AB65: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0022AB70
 * Original: 0x0022AB70 - 0x0022AB8E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AB70(void)
{

loc_0022AB70: ;
    PUSH32(esp, 0x2291E0);
    PUSH32(esp, 0x0022AB7Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022AB7A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BC408);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022AB8Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0022AB8D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022AB90
 * Original: 0x0022AB90 - 0x0022AB9C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AB90(void)
{

loc_0022AB90: ;
    PUSH32(esp, 0x229F80);
    PUSH32(esp, 0x0022AB9Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022AB9A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022ABA0
 * Original: 0x0022ABA0 - 0x0022AC19 (121 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022ABA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022ABA0: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022ABE5; /* jne: not equal / not zero */

loc_0022ABA9: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022ABBAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022ABBA: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x0022ABC4u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022ABC4: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022ABCEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022ABCE: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x0022ABD8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022ABD8: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x0022ABE2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022ABE2: ;
    esp = esp + 0x14;

loc_0022ABE5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x22A000);
    PUSH32(esp, 0x206C00);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x3FAE0C);
    PUSH32(esp, 0x1F1BE0);
    PUSH32(esp, 0x1A4380);
    PUSH32(esp, 0x21EE90);
    PUSH32(esp, 0x5BC414);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0022AC15u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0022AC15: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0022AC20
 * Original: 0x0022AC20 - 0x0022AC2C (12 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AC20(void)
{

loc_0022AC20: ;
    PUSH32(esp, 0x22A0B0);
    PUSH32(esp, 0x0022AC2Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022AC2A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022AC30
 * Original: 0x0022AC30 - 0x0022AC4E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AC30(void)
{

loc_0022AC30: ;
    PUSH32(esp, 0x2294E0);
    PUSH32(esp, 0x0022AC3Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022AC3A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BC440);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022AC4Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0022AC4D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022AC50
 * Original: 0x0022AC50 - 0x0022AC6E (30 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AC50(void)
{

loc_0022AC50: ;
    PUSH32(esp, 0x229560);
    PUSH32(esp, 0x0022AC5Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022AC5A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BC458);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022AC6Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0022AC6D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022AC70
 * Original: 0x0022AC70 - 0x0022ACEC (124 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AC70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022AC70: ;
    SET_LO8(eax, MEM8(0x5BC690));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022ACB5; /* jne: not equal / not zero */

loc_0022AC79: ;
    PUSH32(esp, 0x227F50);
    MEM8(0x5BC690) = 1;
    PUSH32(esp, 0x0022AC8Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022AC8A: ;
    PUSH32(esp, 0x227E00);
    PUSH32(esp, 0x0022AC94u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022AC94: ;
    PUSH32(esp, 0x227CC0);
    PUSH32(esp, 0x0022AC9Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022AC9E: ;
    PUSH32(esp, 0x226550);
    PUSH32(esp, 0x0022ACA8u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022ACA8: ;
    PUSH32(esp, 0x226700);
    PUSH32(esp, 0x0022ACB2u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022ACB2: ;
    esp = esp + 0x14;

loc_0022ACB5: ;
    PUSH32(esp, 0x46C988);
    PUSH32(esp, 0);
    PUSH32(esp, 0x223410);
    PUSH32(esp, 0x214DF0);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x3FAE18);
    PUSH32(esp, 0x1F2F70);
    PUSH32(esp, 0x1A4340);
    PUSH32(esp, 0x2264D0);
    PUSH32(esp, 0x5BC464);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0022ACE8u); RECOMP_ABI_CALL(0x002235D0u, sub_002235D0); /* call 0x002235D0 */

loc_0022ACE8: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0022ACF0
 * Original: 0x0022ACF0 - 0x0022AD0E (30 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022ACF0(void)
{

loc_0022ACF0: ;
    PUSH32(esp, 0x2295E0);
    PUSH32(esp, 0x0022ACFAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022ACFA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BC470);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0022AD0Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0022AD0D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0022AD10
 * Original: 0x0022AD10 - 0x0022AD82 (114 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AD10(void)
{

loc_0022AD10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC4E8);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 2);
    PUSH32(esp, 0x46C9AC);
    ecx = esi;
    PUSH32(esp, 0x0022AD2Du); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0022AD2D: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    ebx = MEM32(edx + edi * 4);
    PUSH32(esp, 0x0022AD3Bu); RECOMP_ABI_CALL(0x00223580u, sub_00223580); /* call 0x00223580 */

loc_0022AD3B: ;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    SET_LO8(ecx, 0); /* xor self */
    MEM8(ebx + 0x26) = LO8(ecx);
    eax = MEM32(esi + 0x28);
    edx = MEM32(eax + 8);
    eax = MEM32(edx + edi * 4 + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x46C9A4);
    PUSH32(esp, 0x46C99C);
    MEM8(eax + 0x26) = LO8(ecx);
    PUSH32(esp, 0x46C994);
    ecx = esi;
    MEM32(eax + 0x34) = 0x7D0;
    PUSH32(esp, 0x0022AD72u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0022AD72: ;
    eax = MEM32(0x5BC4E8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 0x40) = 0x1F2330;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022AD90
 * Original: 0x0022AD90 - 0x0022AE25 (149 bytes, 46 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AD90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022AD90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BC4F0);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, 7);
    PUSH32(esp, 0x46CA08);
    ecx = esi;
    PUSH32(esp, 0x0022ADADu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0022ADAD: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4 + 4);
    ebx = MEM32(eax + 0x20);
    PUSH32(esp, 0x0022ADBFu); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0022ADBF: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022ADCD; /* je: equal / zero */

loc_0022ADC5: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0022ADCDu); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0022ADCD: ;
    MEM32(ebx) = 0;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4 + 8);
    ebx = MEM32(eax + 0x20);
    PUSH32(esp, 0x0022ADE5u); RECOMP_ABI_CALL(0x00123590u, sub_00123590); /* call 0x00123590 */

loc_0022ADE5: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0022ADF3; /* je: equal / zero */

loc_0022ADEB: ;
    ecx = eax + -8;
    PUSH32(esp, 0x0022ADF3u); RECOMP_ABI_CALL(0x00123600u, sub_00123600); /* call 0x00123600 */

loc_0022ADF3: ;
    MEM32(ebx) = 0;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + edi * 4 + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0x46C9EC);
    PUSH32(esp, 0x46C9D0);
    PUSH32(esp, 0x46C9B4);
    ecx = esi;
    MEM32(eax + 0x34) = 0x200;
    PUSH32(esp, 0x0022AE21u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0022AE21: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0022AE30
 * Original: 0x0022AE30 - 0x0022AEDB (171 bytes, 56 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AE30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022AE30: ;
    eax = 0x1000;
    PUSH32(esp, 0x0022AE3Au); RECOMP_ABI_CALL(0x00341D40u, sub_00341D40); /* call 0x00341D40 */

loc_0022AE3A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, 0x0022AE45u); RECOMP_ABI_CALL(0x001E7E90u, sub_001E7E90); /* call 0x001E7E90 */

loc_0022AE45: ;
    ecx = MEM32(esi + 0x34);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3FAE80);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0022AE58u); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_0022AE58: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022AECE; /* jne: not equal / not zero */

loc_0022AE60: ;
    eax = esp + 8;
    edx = eax + 1;

loc_0022AE67: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022AE67; /* jne: not equal / not zero */

loc_0022AE6E: ;
    eax = eax - edx;
    edx = MEM32(esi + 0x34);
    edx = edx + eax;
    eax = ZX8(MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    MEM32(esi + 0x34) = edx;
    edx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_0022AE8C; /* jne: not equal / not zero */

loc_0022AE86: ;
    edx = MEM32(0x5BC538);

loc_0022AE8C: ;
    ecx = MEM32(edx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    esi = MEM32(ecx + eax * 4);
    PUSH32(esp, 0x2282E0);
    PUSH32(esp, 0x0022AE9Du); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022AE9D: ;
    ecx = MEM32(0x5BC1D0);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0022AEACu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0022AEAC: ;
    edx = MEM32(esp + 0x100C);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(edx) = eax;
    PUSH32(esp, 0x0022AEC1u); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_0022AEC1: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x1000;
    esp += 8; return; /* ret 4 */

loc_0022AECE: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = esp + 0x1000;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0022AEE0
 * Original: 0x0022AEE0 - 0x0022AF97 (183 bytes, 60 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0022AEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0022AEE0: ;
    eax = 0x1000;
    PUSH32(esp, 0x0022AEEAu); RECOMP_ABI_CALL(0x00341D40u, sub_00341D40); /* call 0x00341D40 */

loc_0022AEEA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, 0x0022AEF5u); RECOMP_ABI_CALL(0x001E7E90u, sub_001E7E90); /* call 0x001E7E90 */

loc_0022AEF5: ;
    ecx = MEM32(esi + 0x34);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3FAEC8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0022AF08u); RECOMP_ABI_CALL(0x003415CFu, sub_003415CF); /* call 0x003415CF */

loc_0022AF08: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0022AF8A; /* jne: not equal / not zero */

loc_0022AF10: ;
    eax = esp + 8;
    edx = eax + 1;

loc_0022AF17: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0022AF17; /* jne: not equal / not zero */

loc_0022AF1E: ;
    ecx = MEM32(esi + 0x34);
    eax = eax - edx;
    ecx = ecx + eax;
    edx = esp + 8;
    MEM32(esi + 0x34) = ecx;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0022AF34u); RECOMP_ABI_CALL(0x001E7ED0u, sub_001E7ED0); /* call 0x001E7ED0 */

loc_0022AF34: ;
    eax = ZX8(MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = MEM32(0x5BC53C);
    if (TEST_NZ(_fa, _fb)) goto loc_0022AF48; /* jne: not equal / not zero */

loc_0022AF42: ;
    ecx = MEM32(0x5BC538);

loc_0022AF48: ;
    edx = MEM32(ecx);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    esi = MEM32(edx + eax * 4);
    PUSH32(esp, 0x2282E0);
    PUSH32(esp, 0x0022AF59u); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0022AF59: ;
    ecx = MEM32(0x5BC1D0);
    esp = esp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0022AF68u); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0022AF68: ;
    ecx = MEM32(esp + 0x100C);
    edx = esp + 8;
    MEM32(ecx) = eax;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0022AF7Du); RECOMP_ABI_CALL(0x00204610u, sub_00204610); /* call 0x00204610 */

loc_0022AF7D: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x1000;
    esp += 8; return; /* ret 4 */

loc_0022AF8A: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = esp + 0x1000;
    esp += 8; return; /* ret 4 */

}
