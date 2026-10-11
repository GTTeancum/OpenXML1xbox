/**
 * X-Men Legends - Recompiled code chunk 65
 * Functions: 250 (0x002934D0 - 0x002966D0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_002934D0
 * Original: 0x002934D0 - 0x002934ED (29 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002934D0(void)
{

loc_002934D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3BC); PUSH32(esp, 0x002934E2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002934E2: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x78); PUSH32(esp, 0x002934E8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002934E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002934F0
 * Original: 0x002934F0 - 0x00293502 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002934F0(void)
{

loc_002934F0: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 0xC));
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002934FFu); RECOMP_ABI_CALL(0x001B3BA0u, sub_001B3BA0); /* call 0x001B3BA0 */

loc_002934FF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293510
 * Original: 0x00293510 - 0x00293524 (20 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293510(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00293510: ;
    edx = MEM32(esp + 4);
    edx = ZX8(MEM8(edx + 0x138));
    eax = MEM32(ecx);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x78)); return; /* indirect tail jmp */

}

/**
 * sub_00293530
 * Original: 0x00293530 - 0x0029353D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293530(void)
{

loc_00293530: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(eax + 0x10));
    MEM16(eax + 0xA) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00293540
 * Original: 0x00293540 - 0x00293548 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293540(void)
{

loc_00293540: ;
    eax = 0x80;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293550
 * Original: 0x00293550 - 0x00293594 (68 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293550(void)
{

loc_00293550: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00293563u); RECOMP_ABI_CALL(0x001AFD90u, sub_001AFD90); /* call 0x001AFD90 */

loc_00293563: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0029356Eu); RECOMP_ABI_CALL(0x001AFD50u, sub_001AFD50); /* call 0x001AFD50 */

loc_0029356E: ;
    edx = esi + 0x1C;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00293579u); RECOMP_ABI_CALL(0x001AFE00u, sub_001AFE00); /* call 0x001AFE00 */

loc_00293579: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00293584u); RECOMP_ABI_CALL(0x001AFEB0u, sub_001AFEB0); /* call 0x001AFEB0 */

loc_00293584: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0029358Fu); RECOMP_ABI_CALL(0x001AFEF0u, sub_001AFEF0); /* call 0x001AFEF0 */

loc_0029358F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002935A0
 * Original: 0x002935A0 - 0x0029361A (122 bytes, 40 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002935A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002935A0: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3DC); PUSH32(esp, 0x002935B5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002935B5: ;
    MEM32(edi + 0xC) = eax;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3D4); PUSH32(esp, 0x002935C2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002935C2: ;
    MEMF(edi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x3E4); PUSH32(esp, 0x002935D4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002935D4: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    MEM32(edi + 0x1C) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(edi + 0x24) = ecx;
    MEM32(edi + 0x20) = eax;
    MEM32(edi + 0x28) = edx;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3F4); PUSH32(esp, 0x002935FAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002935FA: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3EC); PUSH32(esp, 0x00293608u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293608: ;
    MEMF(edi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x1C);
    MEM32(edi + 0x14) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00293620
 * Original: 0x00293620 - 0x00293632 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293620(void)
{

loc_00293620: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 0xC));
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029362Fu); RECOMP_ABI_CALL(0x001AFCE0u, sub_001AFCE0); /* call 0x001AFCE0 */

loc_0029362F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293640
 * Original: 0x00293640 - 0x0029365D (29 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293640(void)
{

loc_00293640: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3CC); PUSH32(esp, 0x00293652u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293652: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x78); PUSH32(esp, 0x00293658u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293658: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293660
 * Original: 0x00293660 - 0x0029369C (60 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293660(void)
{

loc_00293660: ;
    esp = esp - 8;
    edx = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = esp + 8;
    PUSH32(esp, edx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00293696u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293696: ;
    esp = esp + 8;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002936A0
 * Original: 0x002936A0 - 0x002936FE (94 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002936A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002936A0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (TEST_Z(_fa, _fb)) goto loc_002936AF; /* je: equal / zero */

loc_002936A9: ;
    eax = eax - MEM32(esp + 0xC);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002936AF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002936DE; /* je: equal / zero */

loc_002936B4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002936DE; /* je: equal / zero */

loc_002936B9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002936DE; /* je: equal / zero */

loc_002936BE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002936C6; /* jne: not equal / not zero */

loc_002936C2: ;
    eax = edi;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002936C6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002936D0; /* jne: not equal / not zero */

loc_002936CB: ;
    eax = edi + edi;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002936D0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002936DA; /* jne: not equal / not zero */

loc_002936D5: ;
    eax = edi + edi * 2;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002936DA: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002936DE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    esi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, edi (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_002936F8; /* jbe: below or equal (unsigned <=) */

loc_002936E8: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x64); PUSH32(esp, 0x002936F1u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002936F1: ;
    ebx = ebx + eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002936E8; /* jb: below (unsigned <) */

loc_002936F8: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00293700
 * Original: 0x00293700 - 0x0029370D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293700(void)
{

loc_00293700: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(eax + 0x24));
    MEM16(eax + 0xA) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00293710
 * Original: 0x00293710 - 0x00293722 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293710(void)
{

loc_00293710: ;
    SET_LO16(eax, MEM16(esp + 4));
    edx = SX16(LO16(eax));
    MEM32(ecx + 0x24) = edx;
    MEM16(ecx + 0xA) = LO16(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293730
 * Original: 0x00293730 - 0x00293757 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293730(void)
{

loc_00293730: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00293738u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00293738: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM16(esi + 0xA) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00293745u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293745: ;
    SET_LO16(ecx, MEM16(eax + 8));
    SET_LO16(edx, MEM16(esi + 0x24));
    MEM16(esi + 8) = LO16(ecx);
    MEM16(esi + 0xA) = LO16(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00293760
 * Original: 0x00293760 - 0x00293771 (17 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293760(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00293760: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    MEM32(esp + 4) = 0x17;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x54)); return; /* indirect tail jmp */

}

/**
 * sub_00293780
 * Original: 0x00293780 - 0x0029379A (26 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293780(void)
{

loc_00293780: ;
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = 0;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x00293797u); RECOMP_ABI_CALL(0x0015FDF0u, sub_0015FDF0); /* call 0x0015FDF0 */

loc_00293797: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002937A0
 * Original: 0x002937A0 - 0x002937BF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002937A0(void)
{

loc_002937A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x118); PUSH32(esp, 0x002937B4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002937B4: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002937C0
 * Original: 0x002937C0 - 0x002937D0 (16 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002937C0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002937C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x68); PUSH32(esp, 0x002937C8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002937C8: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

}

/**
 * sub_002937D0
 * Original: 0x002937D0 - 0x002937F0 (32 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002937D0(void)
{

loc_002937D0: ;
    SET_LO8(eax, 1);
    MEM32(ecx + 0x10) = 0xFFFFFFFFu;
    MEM8(ecx + 0x90) = LO8(eax);
    MEM8(ecx + 0x91) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002937F0
 * Original: 0x002937F0 - 0x00293815 (37 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002937F0(void)
{

loc_002937F0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x30) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x34) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x38) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0x3C) = eax;
    MEM8(ecx + 0x90) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293820
 * Original: 0x00293820 - 0x00293845 (37 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293820(void)
{

loc_00293820: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x24) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x28) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0x2C) = eax;
    MEM8(ecx + 0x90) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293850
 * Original: 0x00293850 - 0x00293875 (37 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293850(void)
{

loc_00293850: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x40) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x44) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x48) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0x4C) = eax;
    MEM8(ecx + 0x90) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293880
 * Original: 0x00293880 - 0x0029389F (31 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293880(void)
{

loc_00293880: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x18) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x1C) = eax;
    MEM8(ecx + 0x90) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002938A0
 * Original: 0x002938A0 - 0x002938BF (31 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002938A0(void)
{

loc_002938A0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x50) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x54) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x58) = eax;
    MEM8(ecx + 0x90) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002938C0
 * Original: 0x002938C0 - 0x002938D1 (17 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002938C0(void)
{

loc_002938C0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x60) = eax;
    MEM8(ecx + 0x90) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002938E0
 * Original: 0x002938E0 - 0x002938F1 (17 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002938E0(void)
{

loc_002938E0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x5C) = eax;
    MEM8(ecx + 0x90) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293900
 * Original: 0x00293900 - 0x0029391F (31 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293900(void)
{

loc_00293900: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x64) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x68) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x6C) = eax;
    MEM8(ecx + 0x90) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293920
 * Original: 0x00293920 - 0x0029392C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293920(void)
{

loc_00293920: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x90) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00293930
 * Original: 0x00293930 - 0x00293942 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293930(void)
{

loc_00293930: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 0xC));
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029393Fu); RECOMP_ABI_CALL(0x001B29E0u, sub_001B29E0); /* call 0x001B29E0 */

loc_0029393F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293950
 * Original: 0x00293950 - 0x0029396D (29 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293950(void)
{

loc_00293950: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x130); PUSH32(esp, 0x00293962u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293962: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x78); PUSH32(esp, 0x00293968u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293968: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293970
 * Original: 0x00293970 - 0x0029397C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293970(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00293970: ;
    eax = MEM32(ecx + 0xC);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0035DE20(); return; /* tail jmp 0x0035DE20 */

}

/**
 * sub_00293980
 * Original: 0x00293980 - 0x0029398A (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293980(void)
{

loc_00293980: ;
    MEM32(ecx + 0xC) = 0x3F800000;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293990
 * Original: 0x00293990 - 0x0029399A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293990(void)
{

loc_00293990: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002939A0
 * Original: 0x002939A0 - 0x00293A82 (226 bytes, 66 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002939A0(void)
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

loc_002939A0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x18) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0x1C) = eax;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x5BCA00)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x5bca00] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002939D4; /* jp: parity */

loc_002939CB: ;
    edx = MEM32(0x5BCA00);
    MEM32(ecx + 0x10) = edx;

loc_002939D4: ;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x5BCA04)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x5bca04] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002939EC; /* jp: parity */

loc_002939E4: ;
    eax = MEM32(0x5BCA04);
    MEM32(ecx + 0x14) = eax;

loc_002939EC: ;
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x5BCA08)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x5bca08] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00293A05; /* jp: parity */

loc_002939FC: ;
    edx = MEM32(0x5BCA08);
    MEM32(ecx + 0x18) = edx;

loc_00293A05: ;
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x5BCA0C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x5bca0c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00293A1D; /* jp: parity */

loc_00293A15: ;
    eax = MEM32(0x5BCA0C);
    MEM32(ecx + 0x1C) = eax;

loc_00293A1D: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x46D240)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x46d240] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00293A36; /* jne: not equal / not zero */

loc_00293A2D: ;
    edx = MEM32(0x46D240);
    MEM32(ecx + 0x10) = edx;

loc_00293A36: ;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x46D244)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x46d244] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00293A4E; /* jne: not equal / not zero */

loc_00293A46: ;
    eax = MEM32(0x46D244);
    MEM32(ecx + 0x14) = eax;

loc_00293A4E: ;
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x46D248)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x46d248] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00293A67; /* jne: not equal / not zero */

loc_00293A5E: ;
    edx = MEM32(0x46D248);
    MEM32(ecx + 0x18) = edx;

loc_00293A67: ;
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x46D24C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x46d24c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00293A7F; /* jne: not equal / not zero */

loc_00293A77: ;
    eax = MEM32(0x46D24C);
    MEM32(ecx + 0x1C) = eax;

loc_00293A7F: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00293A90
 * Original: 0x00293A90 - 0x00293B72 (226 bytes, 66 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293A90(void)
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

loc_00293A90: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x40) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x44) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x48) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0x4C) = eax;
    fp_push(MEMF(ecx + 0x40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x5BCA00)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x5bca00] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00293AC4; /* jp: parity */

loc_00293ABB: ;
    edx = MEM32(0x5BCA00);
    MEM32(ecx + 0x40) = edx;

loc_00293AC4: ;
    fp_push(MEMF(ecx + 0x44)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x5BCA04)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x5bca04] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00293ADC; /* jp: parity */

loc_00293AD4: ;
    eax = MEM32(0x5BCA04);
    MEM32(ecx + 0x44) = eax;

loc_00293ADC: ;
    fp_push(MEMF(ecx + 0x48)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x5BCA08)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x5bca08] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00293AF5; /* jp: parity */

loc_00293AEC: ;
    edx = MEM32(0x5BCA08);
    MEM32(ecx + 0x48) = edx;

loc_00293AF5: ;
    fp_push(MEMF(ecx + 0x4C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x5BCA0C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x5bca0c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00293B0D; /* jp: parity */

loc_00293B05: ;
    eax = MEM32(0x5BCA0C);
    MEM32(ecx + 0x4C) = eax;

loc_00293B0D: ;
    fp_push(MEMF(ecx + 0x40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x46D240)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x46d240] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00293B26; /* jne: not equal / not zero */

loc_00293B1D: ;
    edx = MEM32(0x46D240);
    MEM32(ecx + 0x40) = edx;

loc_00293B26: ;
    fp_push(MEMF(ecx + 0x44)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x46D244)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x46d244] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00293B3E; /* jne: not equal / not zero */

loc_00293B36: ;
    eax = MEM32(0x46D244);
    MEM32(ecx + 0x44) = eax;

loc_00293B3E: ;
    fp_push(MEMF(ecx + 0x48)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x46D248)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x46d248] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00293B57; /* jne: not equal / not zero */

loc_00293B4E: ;
    edx = MEM32(0x46D248);
    MEM32(ecx + 0x48) = edx;

loc_00293B57: ;
    fp_push(MEMF(ecx + 0x4C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x46D24C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x46d24c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00293B6F; /* jne: not equal / not zero */

loc_00293B67: ;
    eax = MEM32(0x46D24C);
    MEM32(ecx + 0x4C) = eax;

loc_00293B6F: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00293B80
 * Original: 0x00293B80 - 0x00293C62 (226 bytes, 66 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293B80(void)
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

loc_00293B80: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x24) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x28) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0x2C) = eax;
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x5BCA00)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x5bca00] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00293BB4; /* jp: parity */

loc_00293BAB: ;
    edx = MEM32(0x5BCA00);
    MEM32(ecx + 0x20) = edx;

loc_00293BB4: ;
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x5BCA04)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x5bca04] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00293BCC; /* jp: parity */

loc_00293BC4: ;
    eax = MEM32(0x5BCA04);
    MEM32(ecx + 0x24) = eax;

loc_00293BCC: ;
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x5BCA08)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x5bca08] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00293BE5; /* jp: parity */

loc_00293BDC: ;
    edx = MEM32(0x5BCA08);
    MEM32(ecx + 0x28) = edx;

loc_00293BE5: ;
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x5BCA0C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x5bca0c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00293BFD; /* jp: parity */

loc_00293BF5: ;
    eax = MEM32(0x5BCA0C);
    MEM32(ecx + 0x2C) = eax;

loc_00293BFD: ;
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x46D240)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x46d240] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00293C16; /* jne: not equal / not zero */

loc_00293C0D: ;
    edx = MEM32(0x46D240);
    MEM32(ecx + 0x20) = edx;

loc_00293C16: ;
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x46D244)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x46d244] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00293C2E; /* jne: not equal / not zero */

loc_00293C26: ;
    eax = MEM32(0x46D244);
    MEM32(ecx + 0x24) = eax;

loc_00293C2E: ;
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x46D248)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x46d248] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00293C47; /* jne: not equal / not zero */

loc_00293C3E: ;
    edx = MEM32(0x46D248);
    MEM32(ecx + 0x28) = edx;

loc_00293C47: ;
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x46D24C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x46d24c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00293C5F; /* jne: not equal / not zero */

loc_00293C57: ;
    eax = MEM32(0x46D24C);
    MEM32(ecx + 0x2C) = eax;

loc_00293C5F: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00293C70
 * Original: 0x00293C70 - 0x00293D52 (226 bytes, 66 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293C70(void)
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

loc_00293C70: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x30) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x34) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x38) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0x3C) = eax;
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x5BCA00)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x5bca00] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00293CA4; /* jp: parity */

loc_00293C9B: ;
    edx = MEM32(0x5BCA00);
    MEM32(ecx + 0x30) = edx;

loc_00293CA4: ;
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x5BCA04)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x5bca04] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00293CBC; /* jp: parity */

loc_00293CB4: ;
    eax = MEM32(0x5BCA04);
    MEM32(ecx + 0x34) = eax;

loc_00293CBC: ;
    fp_push(MEMF(ecx + 0x38)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x5BCA08)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x5bca08] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00293CD5; /* jp: parity */

loc_00293CCC: ;
    edx = MEM32(0x5BCA08);
    MEM32(ecx + 0x38) = edx;

loc_00293CD5: ;
    fp_push(MEMF(ecx + 0x3C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x5BCA0C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x5bca0c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00293CED; /* jp: parity */

loc_00293CE5: ;
    eax = MEM32(0x5BCA0C);
    MEM32(ecx + 0x3C) = eax;

loc_00293CED: ;
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x46D240)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x46d240] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00293D06; /* jne: not equal / not zero */

loc_00293CFD: ;
    edx = MEM32(0x46D240);
    MEM32(ecx + 0x30) = edx;

loc_00293D06: ;
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x46D244)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x46d244] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00293D1E; /* jne: not equal / not zero */

loc_00293D16: ;
    eax = MEM32(0x46D244);
    MEM32(ecx + 0x34) = eax;

loc_00293D1E: ;
    fp_push(MEMF(ecx + 0x38)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x46D248)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x46d248] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00293D37; /* jne: not equal / not zero */

loc_00293D2E: ;
    edx = MEM32(0x46D248);
    MEM32(ecx + 0x38) = edx;

loc_00293D37: ;
    fp_push(MEMF(ecx + 0x3C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x46D24C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x46d24c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00293D4F; /* jne: not equal / not zero */

loc_00293D47: ;
    eax = MEM32(0x46D24C);
    MEM32(ecx + 0x3C) = eax;

loc_00293D4F: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00293D60
 * Original: 0x00293D60 - 0x00293D80 (32 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293D60(void)
{

loc_00293D60: ;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, eax);
    edx = ecx + 0x30;
    PUSH32(esp, edx);
    eax = ecx + 0x40;
    edx = ecx + 0x10;
    PUSH32(esp, eax);
    ecx = ecx + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x00293D7Du); RECOMP_ABI_CALL(0x001B2DD0u, sub_001B2DD0); /* call 0x001B2DD0 */

loc_00293D7D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293D80
 * Original: 0x00293D80 - 0x00293E1F (159 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293D80(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00293D80: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = MEM32(edi);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x1AC); PUSH32(esp, 0x00293D9Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293D9B: ;
    edx = MEM32(esi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00293DAAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293DAA: ;
    edx = MEM32(edi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x19C); PUSH32(esp, 0x00293DB9u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293DB9: ;
    edx = MEM32(esi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x00293DC5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293DC5: ;
    edx = MEM32(edi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x1B4); PUSH32(esp, 0x00293DD4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293DD4: ;
    edx = MEM32(esi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00293DE3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293DE3: ;
    edx = MEM32(edi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x1A4); PUSH32(esp, 0x00293DF2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293DF2: ;
    edx = MEM32(esi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x80); PUSH32(esp, 0x00293E01u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293E01: ;
    edx = MEM32(edi);
    ebx = MEM32(esi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18C); PUSH32(esp, 0x00293E0Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293E0D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(ebx + 0x78); PUSH32(esp, 0x00293E16u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293E16: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00293E20
 * Original: 0x00293E20 - 0x00293E30 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293E20(void)
{

loc_00293E20: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00293E2Du); RECOMP_ABI_CALL(0x001B2EC0u, sub_001B2EC0); /* call 0x001B2EC0 */

loc_00293E2D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293E30
 * Original: 0x00293E30 - 0x00293E46 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293E30(void)
{

loc_00293E30: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x194); PUSH32(esp, 0x00293E3Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293E3F: ;
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293E50
 * Original: 0x00293E50 - 0x00293E5D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293E50(void)
{

loc_00293E50: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(eax + 0x4C));
    MEM16(eax + 0xA) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00293E60
 * Original: 0x00293E60 - 0x00293E68 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293E60(void)
{

loc_00293E60: ;
    eax = 0x20;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293E70
 * Original: 0x00293E70 - 0x00293E82 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293E70(void)
{

loc_00293E70: ;
    ecx = ecx + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00293E7Fu); RECOMP_ABI_CALL(0x001D6120u, sub_001D6120); /* call 0x001D6120 */

loc_00293E7F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293E90
 * Original: 0x00293E90 - 0x00293EC5 (53 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293E90(void)
{

loc_00293E90: ;
    esp = esp - 0x40;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 4;
    PUSH32(esp, 0x00293E9Fu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00293E9F: ;
    ecx = MEM32(esp + 0x48);
    eax = MEM32(ecx);
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x344); PUSH32(esp, 0x00293EB2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293EB2: ;
    eax = MEM32(esi);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00293EBEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293EBE: ;
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293ED0
 * Original: 0x00293ED0 - 0x00293F26 (86 bytes, 27 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00293ED0: ;
    ecx = MEM32(0x5BC50C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x406AE0);
    PUSH32(esp, 0x00293EE3u); RECOMP_ABI_CALL(0x002304D0u, sub_002304D0); /* call 0x002304D0 */

loc_00293EE3: ;
    ecx = MEM32(0x5BE5A8);
    PUSH32(esp, 0x3E226C);
    PUSH32(esp, 0x00293EF3u); RECOMP_ABI_CALL(0x001EA4A0u, sub_001EA4A0); /* call 0x001EA4A0 */

loc_00293EF3: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00293F18; /* je: equal / zero */

loc_00293EF9: ;
    eax = MEM32(0x5BC294);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00293F06u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00293F06: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00293F18; /* je: equal / zero */

loc_00293F0A: ;
    ecx = esi;
    PUSH32(esp, 0x406AE0);
    PUSH32(esp, 0x00293F16u); RECOMP_ABI_CALL(0x0020E460u, sub_0020E460); /* call 0x0020E460 */

loc_00293F16: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00293F18: ;
    ecx = 0; /* xor self */
    PUSH32(esp, 0x406AE0);
    PUSH32(esp, 0x00293F24u); RECOMP_ABI_CALL(0x0020E460u, sub_0020E460); /* call 0x0020E460 */

loc_00293F24: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00293F30
 * Original: 0x00293F30 - 0x00293F35 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293F30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00293F30: ;
    g_seh_ebp = ebp; sub_0015FDF0(); return; /* tail jmp 0x0015FDF0 */

}

/**
 * sub_00293F40
 * Original: 0x00293F40 - 0x00293F52 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293F40(void)
{

loc_00293F40: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 0xC));
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00293F4Fu); RECOMP_ABI_CALL(0x001B35D0u, sub_001B35D0); /* call 0x001B35D0 */

loc_00293F4F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293F60
 * Original: 0x00293F60 - 0x00293F76 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293F60(void)
{

loc_00293F60: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C8); PUSH32(esp, 0x00293F6Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293F6F: ;
    MEM8(esi + 0xC) = LO8(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293F80
 * Original: 0x00293F80 - 0x00293F90 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293F80(void)
{

loc_00293F80: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00293F8Du); RECOMP_ABI_CALL(0x001CF400u, sub_001CF400); /* call 0x001CF400 */

loc_00293F8D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293F90
 * Original: 0x00293F90 - 0x00293FA6 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293F90(void)
{

loc_00293F90: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x250); PUSH32(esp, 0x00293F9Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293F9F: ;
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00293FB0
 * Original: 0x00293FB0 - 0x00293FCF (31 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00293FB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00293FC6; /* jl: less (signed <) */

loc_00293FBA: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x4D4); PUSH32(esp, 0x00293FC6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00293FC6: ;
    MEM32(esi + 0xC) = 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00293FD0
 * Original: 0x00293FD0 - 0x00294022 (82 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00293FD0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00293FD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx + 0x10);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00293FEA; /* je: equal / zero */

loc_00293FDE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00293FE4u); RECOMP_ABI_CALL(0x001F7FC0u, sub_001F7FC0); /* call 0x001F7FC0 */

loc_00293FE4: ;
    MEM32(ebx + 0x10) = edi;
    MEM32(ebx + 0x14) = edi;

loc_00293FEA: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029401C; /* je: equal / zero */

loc_00293FF2: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029401B; /* je: equal / zero */

loc_00293FFB: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    MEM32(ebx + 0x14) = ebp;
    PUSH32(esp, 0x00294006u); RECOMP_ABI_CALL(0x001F7ED0u, sub_001F7ED0); /* call 0x001F7ED0 */

loc_00294006: ;
    MEM32(ebx + 0x10) = eax;
    ecx = ebp;
    edi = eax;
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

loc_0029401B: ;
    POP32(esp, ebp);

loc_0029401C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00294030
 * Original: 0x00294030 - 0x00294089 (89 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00294030: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00294046; /* jl: less (signed <) */

loc_0029403A: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x4D4); PUSH32(esp, 0x00294046u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294046: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0xC) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_0029406A; /* je: equal / zero */

loc_00294054: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0029405Cu); RECOMP_ABI_CALL(0x001F7FC0u, sub_001F7FC0); /* call 0x001F7FC0 */

loc_0029405C: ;
    MEM32(esi + 0x10) = 0;
    MEM32(esi + 0x14) = 0;

loc_0029406A: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00294076u); RECOMP_ABI_CALL(0x0015FDF0u, sub_0015FDF0); /* call 0x0015FDF0 */

loc_00294076: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x0029407Du); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029407D: ;
    SET_LO16(eax, MEM16(eax + 8));
    MEM16(esi + 8) = LO16(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294090
 * Original: 0x00294090 - 0x002940D2 (66 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294090(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00294090: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_002940A6; /* jl: less (signed <) */

loc_0029409A: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x4D4); PUSH32(esp, 0x002940A6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002940A6: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    MEM32(esi + 0xC) = 0xFFFFFFFFu;
    if (TEST_Z(_fa, _fb)) goto loc_002940CA; /* je: equal / zero */

loc_002940B4: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002940BCu); RECOMP_ABI_CALL(0x001F7FC0u, sub_001F7FC0); /* call 0x001F7FC0 */

loc_002940BC: ;
    MEM32(esi + 0x10) = 0;
    MEM32(esi + 0x14) = 0;

loc_002940CA: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

}

/**
 * sub_002940E0
 * Original: 0x002940E0 - 0x00294102 (34 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002940E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002940E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x002940EAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002940EA: ;
    ecx = eax;
    PUSH32(esp, 0x002940F1u); RECOMP_ABI_CALL(0x001EA440u, sub_001EA440); /* call 0x001EA440 */

loc_002940F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002940FA; /* jne: not equal / not zero */

loc_002940F5: ;
    MEM32(0x5BE6E0) = eax;

loc_002940FA: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

}

/**
 * sub_00294110
 * Original: 0x00294110 - 0x0029412A (26 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294110(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00294110: ;
    eax = MEM32(0x5BE6E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00294127; /* je: equal / zero */

loc_00294119: ;
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(eax);
    MEM32(esp + 4) = ecx;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x7C)); return; /* indirect tail jmp */

loc_00294127: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294130
 * Original: 0x00294130 - 0x0029414F (31 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00294130: ;
    eax = MEM32(0x5BE6E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029414C; /* jne: not equal / not zero */

loc_00294139: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3EA0B4);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00294147u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294147: ;
    MEM32(0x5BE6E0) = eax;

loc_0029414C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294150
 * Original: 0x00294150 - 0x00294160 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294150(void)
{

loc_00294150: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029415Du); RECOMP_ABI_CALL(0x001B3910u, sub_001B3910); /* call 0x001B3910 */

loc_0029415D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294160
 * Original: 0x00294160 - 0x0029417D (29 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294160(void)
{

loc_00294160: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C4); PUSH32(esp, 0x00294172u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294172: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x78); PUSH32(esp, 0x00294178u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294178: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294180
 * Original: 0x00294180 - 0x00294192 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294180(void)
{

loc_00294180: ;
    ecx = ecx + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0029418Fu); RECOMP_ABI_CALL(0x001D6120u, sub_001D6120); /* call 0x001D6120 */

loc_0029418F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002941A0
 * Original: 0x002941A0 - 0x002941D5 (53 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002941A0(void)
{

loc_002941A0: ;
    esp = esp - 0x40;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 4;
    PUSH32(esp, 0x002941AFu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_002941AF: ;
    ecx = MEM32(esp + 0x48);
    eax = MEM32(ecx);
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x344); PUSH32(esp, 0x002941C2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002941C2: ;
    eax = MEM32(esi);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x002941CEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002941CE: ;
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002941E0
 * Original: 0x002941E0 - 0x002941F0 (16 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002941E0(void)
{

loc_002941E0: ;
    SET_LO16(eax, MEM16(esp + 4));
    MEM16(ecx + 0x10) = LO16(eax);
    MEM16(ecx + 0xA) = LO16(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002941F0
 * Original: 0x002941F0 - 0x00294279 (137 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002941F0(void)
{

loc_002941F0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC0); PUSH32(esp, 0x00294206u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294206: ;
    edx = MEM32(esi);
    ecx = esi;
    ebx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x00294212u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294212: ;
    MEM32(edi + 0x14) = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xD0); PUSH32(esp, 0x00294220u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294220: ;
    MEM32(edi + 0x30) = eax;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xD4); PUSH32(esp, 0x0029422Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029422E: ;
    MEM32(edi + 0x34) = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xD8); PUSH32(esp, 0x0029423Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029423C: ;
    MEM32(edi + 0x38) = eax;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x0029424Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029424A: ;
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(edi + 0x3C) = eax;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xCC); PUSH32(esp, 0x00294262u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294262: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    MEM32(edi + 0x28) = eax;
    MEM32(edi + 0x2C) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294280
 * Original: 0x00294280 - 0x00294294 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00294280: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_00294291; /* jl: less (signed <) */

loc_00294287: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00294291u); RECOMP_ABI_CALL(0x001C9570u, sub_001C9570); /* call 0x001C9570 */

loc_00294291: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002942A0
 * Original: 0x002942A0 - 0x002942B0 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002942A0(void)
{

loc_002942A0: ;
    ecx = ecx + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x002942ADu); RECOMP_ABI_CALL(0x001B2A30u, sub_001B2A30); /* call 0x001B2A30 */

loc_002942AD: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002942B0
 * Original: 0x002942B0 - 0x002942D0 (32 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002942B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002942B0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    eax = eax + 0xC;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x1D0)); return; /* indirect tail jmp */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_002942D0
 * Original: 0x002942D0 - 0x002942F3 (35 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002942D0(void)
{

loc_002942D0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    eax = ecx;
    esi = MEM32(eax + 0x1C);
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x2F4); PUSH32(esp, 0x002942EFu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002942EF: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294300
 * Original: 0x00294300 - 0x00294323 (35 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294300(void)
{

loc_00294300: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    eax = ecx;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    esi = eax + 0x1C;
    PUSH32(esp, esi);
    esi = eax + 0x18;
    PUSH32(esp, esi);
    esi = eax + 0x14;
    PUSH32(esp, esi);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x2F8); PUSH32(esp, 0x0029431Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029431F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294330
 * Original: 0x00294330 - 0x00294345 (21 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294330(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00294330: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x2FC)); return; /* indirect tail jmp */

}

/**
 * sub_00294350
 * Original: 0x00294350 - 0x00294366 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294350(void)
{

loc_00294350: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x300); PUSH32(esp, 0x0029435Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029435F: ;
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294370
 * Original: 0x00294370 - 0x00294380 (16 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294370(void)
{

loc_00294370: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029437Du); RECOMP_ABI_CALL(0x001B37B0u, sub_001B37B0); /* call 0x001B37B0 */

loc_0029437D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294380
 * Original: 0x00294380 - 0x0029439D (29 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294380(void)
{

loc_00294380: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x394); PUSH32(esp, 0x00294392u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294392: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x78); PUSH32(esp, 0x00294398u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294398: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002943A0
 * Original: 0x002943A0 - 0x002943C2 (34 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002943A0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002943A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x002943AAu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002943AA: ;
    ecx = eax;
    PUSH32(esp, 0x002943B1u); RECOMP_ABI_CALL(0x001EA440u, sub_001EA440); /* call 0x001EA440 */

loc_002943B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002943BA; /* jne: not equal / not zero */

loc_002943B5: ;
    MEM32(0x5BE6E4) = eax;

loc_002943BA: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

}

/**
 * sub_002943D0
 * Original: 0x002943D0 - 0x002943EF (31 bytes, 9 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002943D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002943D0: ;
    eax = MEM32(0x5BE6E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002943EC; /* jne: not equal / not zero */

loc_002943D9: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3EA0B4);
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x002943E7u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002943E7: ;
    MEM32(0x5BE6E4) = eax;

loc_002943EC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002943F0
 * Original: 0x002943F0 - 0x00294408 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002943F0(void)
{

loc_002943F0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x14) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00294410
 * Original: 0x00294410 - 0x0029445C (76 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294410(void)
{

loc_00294410: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x20);
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0029442Bu); RECOMP_ABI_CALL(0x001B3AB0u, sub_001B3AB0); /* call 0x001B3AB0 */

loc_0029442B: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00294436u); RECOMP_ABI_CALL(0x001B3A50u, sub_001B3A50); /* call 0x001B3A50 */

loc_00294436: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00294441u); RECOMP_ABI_CALL(0x001B3A80u, sub_001B3A80); /* call 0x001B3A80 */

loc_00294441: ;
    edx = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0029444Cu); RECOMP_ABI_CALL(0x001B3B40u, sub_001B3B40); /* call 0x001B3B40 */

loc_0029444C: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00294457u); RECOMP_ABI_CALL(0x001B3B70u, sub_001B3B70); /* call 0x001B3B70 */

loc_00294457: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294460
 * Original: 0x00294460 - 0x00294496 (54 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294460(void)
{

loc_00294460: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi);
    esi = ecx;
    ebx = MEM32(esi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28C); PUSH32(esp, 0x00294475u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294475: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x78); PUSH32(esp, 0x0029447Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029447B: ;
    edx = MEM32(edi);
    ebx = MEM32(esi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x294); PUSH32(esp, 0x00294487u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294487: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x80); PUSH32(esp, 0x00294490u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294490: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002944A0
 * Original: 0x002944A0 - 0x002944B2 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002944A0(void)
{

loc_002944A0: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 0xC));
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002944AFu); RECOMP_ABI_CALL(0x001B3A20u, sub_001B3A20); /* call 0x001B3A20 */

loc_002944AF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002944C0
 * Original: 0x002944C0 - 0x002944DD (29 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002944C0(void)
{

loc_002944C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x284); PUSH32(esp, 0x002944D2u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002944D2: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x78); PUSH32(esp, 0x002944D8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002944D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002944E0
 * Original: 0x002944E0 - 0x002944F2 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002944E0(void)
{

loc_002944E0: ;
    SET_LO16(eax, MEM16(esp + 4));
    edx = SX16(LO16(eax));
    MEM32(ecx + 0x4C) = edx;
    MEM16(ecx + 0xA) = LO16(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294500
 * Original: 0x00294500 - 0x00294534 (52 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00294500: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029450B; /* jne: not equal / not zero */

loc_00294508: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0029450B: ;
    eax = edx;
    PUSH32(esp, esi);
    esi = eax + 1;

loc_00294511: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00294511; /* jne: not equal / not zero */

loc_00294518: ;
    eax = eax - esi;
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    POP32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_00294533; /* jbe: below or equal (unsigned <=) */

loc_00294521: ;
    SET_LO8(ecx, MEM8(eax + -1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00294533; /* je: equal / zero */

loc_00294529: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2F (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00294533; /* je: equal / zero */

loc_0029452E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00294521; /* ja: above (unsigned >) */

loc_00294533: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00294540
 * Original: 0x00294540 - 0x00294567 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294540(void)
{

loc_00294540: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00294548u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00294548: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM16(esi + 0xA) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00294555u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294555: ;
    SET_LO16(ecx, MEM16(eax + 8));
    SET_LO16(edx, MEM16(esi + 0x10));
    MEM16(esi + 8) = LO16(ecx);
    MEM16(esi + 0xA) = LO16(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00294570
 * Original: 0x00294570 - 0x00294588 (24 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294570(void)
{

loc_00294570: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x14);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00294585u); RECOMP_ABI_CALL(0x001D3A50u, sub_001D3A50); /* call 0x001D3A50 */

loc_00294585: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294590
 * Original: 0x00294590 - 0x0029459D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294590(void)
{

loc_00294590: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(eax + 0x14));
    MEM16(eax + 0xA) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002945A0
 * Original: 0x002945A0 - 0x002945C7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002945A0(void)
{

loc_002945A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002945A8u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_002945A8: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM16(esi + 0xA) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x002945B5u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002945B5: ;
    SET_LO16(ecx, MEM16(eax + 8));
    SET_LO16(edx, MEM16(esi + 0x14));
    MEM16(esi + 8) = LO16(ecx);
    MEM16(esi + 0xA) = LO16(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002945D0
 * Original: 0x002945D0 - 0x002945E2 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002945D0(void)
{

loc_002945D0: ;
    SET_LO16(eax, MEM16(esp + 4));
    edx = SX16(LO16(eax));
    MEM32(ecx + 0x14) = edx;
    MEM16(ecx + 0xA) = LO16(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002945F0
 * Original: 0x002945F0 - 0x00294628 (56 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002945F0(void)
{

loc_002945F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    MEM32(esp + 4) = eax;
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x260); PUSH32(esp, 0x00294615u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294615: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 0xC);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edx;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294630
 * Original: 0x00294630 - 0x00294653 (35 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294630(void)
{

loc_00294630: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00294638u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00294638: ;
    eax = 2;
    MEM32(esi + 0x14) = 3;
    MEM32(esi + 0x18) = 0;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x24) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00294660
 * Original: 0x00294660 - 0x00294682 (34 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294660(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00294660: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0029466Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029466A: ;
    ecx = eax;
    PUSH32(esp, 0x00294671u); RECOMP_ABI_CALL(0x001EA440u, sub_001EA440); /* call 0x001EA440 */

loc_00294671: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029467A; /* jne: not equal / not zero */

loc_00294675: ;
    MEM32(0x5BE6EC) = eax;

loc_0029467A: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

}

/**
 * sub_00294690
 * Original: 0x00294690 - 0x002946C8 (56 bytes, 21 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00294690: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x258); PUSH32(esp, 0x002946A6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002946A6: ;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(0x5BE6EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002946C3; /* jne: not equal / not zero */

loc_002946B2: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3ECACC);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x002946BEu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002946BE: ;
    MEM32(0x5BE6EC) = eax;

loc_002946C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002946D0
 * Original: 0x002946D0 - 0x002946F6 (38 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002946D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002946D0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002946E1; /* jne: not equal / not zero */

loc_002946D8: ;
    eax = MEM32(esp + 8);
    MEM32(ecx + 0x14) = eax;
    goto loc_002946E8;

loc_002946E1: ;
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x18) = edx;

loc_002946E8: ;
    SET_LO8(eax, MEM8(ecx + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002946F3; /* je: equal / zero */

loc_002946EF: ;
    MEM8(ecx + 0x20) = 1;

loc_002946F3: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00294700
 * Original: 0x00294700 - 0x0029470E (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294700(void)
{

loc_00294700: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x1C) = eax;
    MEM8(ecx + 0x20) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294710
 * Original: 0x00294710 - 0x002947FD (237 bytes, 100 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00294710: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x16 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_002947B6; /* je: equal / zero */

loc_00294720: ;
    ecx = MEM32(0x5BE6EC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002947A3; /* je: equal / zero */

loc_0029472A: ;
    eax = ZX8(MEM8(esi + 0x20));
    eax = eax - 0;
    edi = MEM32(esi + 0x24);
    if ((eax == 0)) goto loc_0029474C; /* je: equal / zero */

loc_00294736: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00294760; /* je: equal / zero */

loc_00294739: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x00294747u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294747: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0029474C: ;
    edx = MEM32(esi + 0x1C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x70); PUSH32(esp, 0x0029475Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029475A: ;
    ecx = MEM32(0x5BE6EC);

loc_00294760: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00294772u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294772: ;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(0x5BE6EC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x0029478Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029478A: ;
    edx = MEM32(esi + 0xC);
    ecx = MEM32(0x5BE6EC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x0029479Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029479E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_002947A3: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002947B1u); RECOMP_ABI_CALL(0x001B51D0u, sub_001B51D0); /* call 0x001B51D0 */

loc_002947B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_002947B6: ;
    edi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x10);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x494); PUSH32(esp, 0x002947D0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002947D0: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x494); PUSH32(esp, 0x002947E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002947E6: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x16);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x48C); PUSH32(esp, 0x002947F8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002947F8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294800
 * Original: 0x00294800 - 0x00294838 (56 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294800(void)
{

loc_00294800: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x50);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x52));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x4C);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x4A8); PUSH32(esp, 0x00294821u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294821: ;
    eax = MEM32(esi + 0x4C);
    edx = esi + 0xC;
    PUSH32(esp, edx);
    eax = eax + 2;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00294833u); RECOMP_ABI_CALL(0x001D6120u, sub_001D6120); /* call 0x001D6120 */

loc_00294833: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294840
 * Original: 0x00294840 - 0x002948A1 (97 bytes, 36 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294840(void)
{

loc_00294840: ;
    esp = esp - 0x40;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esp + 8;
    PUSH32(esp, 0x00294850u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00294850: ;
    edx = MEM32(esi + 0x4C);
    edi = MEM32(esp + 0x4C);
    eax = MEM32(edi);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = edx + 2;
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x344); PUSH32(esp, 0x0029486Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029486A: ;
    eax = MEM32(esi);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00294876u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294876: ;
    eax = MEM32(esi + 0x4C);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x4B0); PUSH32(esp, 0x00294884u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294884: ;
    MEM8(esi + 0x52) = LO8(eax);
    eax = MEM32(esi + 0x4C);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x4AC); PUSH32(esp, 0x00294895u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294895: ;
    POP32(esp, edi);
    MEM16(esi + 0x50) = LO16(eax);
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294843
 * Original: 0x00294843 - 0x002948A1 (94 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294843(void)
{

loc_00294843: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esp + 8;
    PUSH32(esp, 0x00294850u); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00294850: ;
    edx = MEM32(esi + 0x4C);
    edi = MEM32(esp + 0x4C);
    eax = MEM32(edi);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = edx + 2;
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x344); PUSH32(esp, 0x0029486Au); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029486A: ;
    eax = MEM32(esi);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00294876u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294876: ;
    eax = MEM32(esi + 0x4C);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x4B0); PUSH32(esp, 0x00294884u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294884: ;
    MEM8(esi + 0x52) = LO8(eax);
    eax = MEM32(esi + 0x4C);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x4AC); PUSH32(esp, 0x00294895u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294895: ;
    POP32(esp, edi);
    MEM16(esi + 0x50) = LO16(eax);
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002948B0
 * Original: 0x002948B0 - 0x002948C6 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002948B0(void)
{

loc_002948B0: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 0xC));
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x002948C3u); RECOMP_ABI_CALL(0x001D2D70u, sub_001D2D70); /* call 0x001D2D70 */

loc_002948C3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002948D0
 * Original: 0x002948D0 - 0x002948F1 (33 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002948D0(void)
{

loc_002948D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    edx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x34C); PUSH32(esp, 0x002948E6u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002948E6: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x78); PUSH32(esp, 0x002948ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002948EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294900
 * Original: 0x00294900 - 0x00294911 (17 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294900(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00294900: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    MEM32(esp + 4) = 8;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x54)); return; /* indirect tail jmp */

}

/**
 * sub_00294920
 * Original: 0x00294920 - 0x00294936 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294920(void)
{

loc_00294920: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 0xC));
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x00294933u); RECOMP_ABI_CALL(0x001C19A0u, sub_001C19A0); /* call 0x001C19A0 */

loc_00294933: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294940
 * Original: 0x00294940 - 0x00294961 (33 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294940(void)
{

loc_00294940: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    edx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1D8); PUSH32(esp, 0x00294956u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294956: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x78); PUSH32(esp, 0x0029495Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029495C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294970
 * Original: 0x00294970 - 0x0029498C (28 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00294970: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00294989; /* je: equal / zero */

loc_00294977: ;
    eax = MEM32(eax + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00294989; /* je: equal / zero */

loc_0029497F: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00294989u); RECOMP_ABI_CALL(0x001C1480u, sub_001C1480); /* call 0x001C1480 */

loc_00294989: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294990
 * Original: 0x00294990 - 0x002949A2 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294990(void)
{

loc_00294990: ;
    SET_LO16(eax, MEM16(esp + 4));
    edx = SX16(LO16(eax));
    MEM32(ecx + 0x10) = edx;
    MEM16(ecx + 0xA) = LO16(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002949B0
 * Original: 0x002949B0 - 0x002949C3 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002949B0(void)
{

loc_002949B0: ;
    edx = MEM32(ecx + 0x10);
    eax = MEM32(esp + 4);
    MEM32(eax + 0x60) = edx;
    ecx = MEM32(ecx + 0x14);
    MEM32(eax + 0x64) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002949D0
 * Original: 0x002949D0 - 0x002949E3 (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002949D0(void)
{

loc_002949D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x60);
    MEM32(ecx + 0x10) = edx;
    eax = MEM32(eax + 0x64);
    MEM32(ecx + 0x14) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002949F0
 * Original: 0x002949F0 - 0x002949FD (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002949F0(void)
{

loc_002949F0: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(eax + 0x1C));
    MEM16(eax + 0xA) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00294A00
 * Original: 0x00294A00 - 0x00294A12 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294A00(void)
{

loc_00294A00: ;
    SET_LO16(eax, MEM16(esp + 4));
    edx = SX16(LO16(eax));
    MEM32(ecx + 0x1C) = edx;
    MEM16(ecx + 0xA) = LO16(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294A20
 * Original: 0x00294A20 - 0x00294A47 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294A20(void)
{

loc_00294A20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00294A28u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00294A28: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM16(esi + 0xA) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00294A35u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294A35: ;
    SET_LO16(ecx, MEM16(eax + 8));
    SET_LO16(edx, MEM16(esi + 0x1C));
    MEM16(esi + 8) = LO16(ecx);
    MEM16(esi + 0xA) = LO16(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00294A50
 * Original: 0x00294A50 - 0x00294A68 (24 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294A50(void)
{

loc_00294A50: ;
    eax = ecx + 0xC;
    ecx = ZX16(MEM16(ecx + 0x4C));
    ecx = ecx + 0xA;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x00294A65u); RECOMP_ABI_CALL(0x001D6120u, sub_001D6120); /* call 0x001D6120 */

loc_00294A65: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294A70
 * Original: 0x00294A70 - 0x00294A80 (16 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294A70(void)
{

loc_00294A70: ;
    SET_LO16(eax, MEM16(esp + 4));
    MEM16(ecx + 0x4C) = LO16(eax);
    MEM16(ecx + 0xA) = LO16(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294A80
 * Original: 0x00294A80 - 0x00294AA7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294A80(void)
{

loc_00294A80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00294A88u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00294A88: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM16(esi + 0xA) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00294A95u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294A95: ;
    SET_LO16(ecx, MEM16(eax + 8));
    SET_LO16(edx, MEM16(esi + 0x4C));
    MEM16(esi + 8) = LO16(ecx);
    MEM16(esi + 0xA) = LO16(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00294AB0
 * Original: 0x00294AB0 - 0x00294AEB (59 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294AB0(void)
{

loc_00294AB0: ;
    esp = esp - 0x40;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 4;
    PUSH32(esp, 0x00294ABFu); RECOMP_ABI_CALL(0x0023DC50u, sub_0023DC50); /* call 0x0023DC50 */

loc_00294ABF: ;
    ecx = MEM32(esp + 0x48);
    eax = MEM32(ecx);
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = ZX16(MEM16(esi + 0x4C));
    edx = edx + 0xA;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x344); PUSH32(esp, 0x00294AD8u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294AD8: ;
    eax = MEM32(esi);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00294AE4u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294AE4: ;
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294AF0
 * Original: 0x00294AF0 - 0x00294B01 (17 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294AF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00294AF0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    MEM32(esp + 4) = 0xD;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x54)); return; /* indirect tail jmp */

}

/**
 * sub_00294B10
 * Original: 0x00294B10 - 0x00294D10 (512 bytes, 154 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294B10(void)
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

loc_00294B10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    fp_push(MEMF(esi)); /* fld float */
    PUSH32(esp, edi);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3FCA38)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3fca38] */
    edi = ecx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00294CE6; /* jne: not equal / not zero */

loc_00294B2B: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3FCA34)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3fca34] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00294CE8; /* jp: parity */

loc_00294B3C: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3FCA30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3fca30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00294CE6; /* jne: not equal / not zero */

loc_00294B50: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C89C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c89c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00294CE8; /* jp: parity */

loc_00294B61: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3FCA30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3fca30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00294CE6; /* jne: not equal / not zero */

loc_00294B75: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C89C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c89c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00294CE8; /* jp: parity */

loc_00294B86: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3FCA30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x3fca30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00294CE6; /* jne: not equal / not zero */

loc_00294B9A: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x3C89C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x3c89c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00294CE8; /* jp: parity */

loc_00294BAB: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, 0x358637BD);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00294BBBu); RECOMP_ABI_CALL(0x001AA510u, sub_001AA510); /* call 0x001AA510 */

loc_00294BBB: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00294CE8; /* je: equal / zero */

loc_00294BC6: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x358637BD);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00294BD9u); RECOMP_ABI_CALL(0x001AA510u, sub_001AA510); /* call 0x001AA510 */

loc_00294BD9: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00294CE8; /* je: equal / zero */

loc_00294BE4: ;
    edx = MEM32(esi + 0x18);
    PUSH32(esp, 0x358637BD);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00294BF4u); RECOMP_ABI_CALL(0x001AA510u, sub_001AA510); /* call 0x001AA510 */

loc_00294BF4: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00294CE8; /* je: equal / zero */

loc_00294BFF: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, 0x358637BD);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00294C0Fu); RECOMP_ABI_CALL(0x001AA510u, sub_001AA510); /* call 0x001AA510 */

loc_00294C0F: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00294CE8; /* je: equal / zero */

loc_00294C1A: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x358637BD);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00294C2Au); RECOMP_ABI_CALL(0x001AA510u, sub_001AA510); /* call 0x001AA510 */

loc_00294C2A: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00294CE8; /* je: equal / zero */

loc_00294C35: ;
    edx = MEM32(esi + 0x24);
    PUSH32(esp, 0x358637BD);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00294C45u); RECOMP_ABI_CALL(0x001AA510u, sub_001AA510); /* call 0x001AA510 */

loc_00294C45: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00294CE8; /* je: equal / zero */

loc_00294C50: ;
    eax = MEM32(esi + 0x28);
    PUSH32(esp, 0x358637BD);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00294C63u); RECOMP_ABI_CALL(0x001AA510u, sub_001AA510); /* call 0x001AA510 */

loc_00294C63: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00294CE8; /* je: equal / zero */

loc_00294C6A: ;
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, 0x358637BD);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00294C7Au); RECOMP_ABI_CALL(0x001AA510u, sub_001AA510); /* call 0x001AA510 */

loc_00294C7A: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00294CE8; /* je: equal / zero */

loc_00294C81: ;
    edx = MEM32(esi + 0x30);
    PUSH32(esp, 0x358637BD);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00294C91u); RECOMP_ABI_CALL(0x001AA510u, sub_001AA510); /* call 0x001AA510 */

loc_00294C91: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00294CE8; /* je: equal / zero */

loc_00294C98: ;
    eax = MEM32(esi + 0x34);
    PUSH32(esp, 0x358637BD);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00294CA8u); RECOMP_ABI_CALL(0x001AA510u, sub_001AA510); /* call 0x001AA510 */

loc_00294CA8: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00294CE8; /* je: equal / zero */

loc_00294CAF: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, 0x358637BD);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00294CBFu); RECOMP_ABI_CALL(0x001AA510u, sub_001AA510); /* call 0x001AA510 */

loc_00294CBF: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00294CE8; /* je: equal / zero */

loc_00294CC6: ;
    edx = MEM32(esi + 0x3C);
    PUSH32(esp, 0x358637BD);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00294CD9u); RECOMP_ABI_CALL(0x001AA510u, sub_001AA510); /* call 0x001AA510 */

loc_00294CD9: ;
    esp = esp + 0xC;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00294CE8; /* je: equal / zero */

loc_00294CE0: ;
    MEM8(edi + 0xC) = 1;
    goto loc_00294CEC;

loc_00294CE6: ;
    fp_pop(); /* fstp st(0) */

loc_00294CE8: ;
    MEM8(edi + 0xC) = 0;

loc_00294CEC: ;
    eax = edi + 0x1C;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00294CF6u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_00294CF6: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    edx = edi + 0x5C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00294D04u); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_00294D04: ;
    esp = esp + 0x10;
    MEM8(edi + 0xD) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00294D10
 * Original: 0x00294D10 - 0x00294D24 (20 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294D10(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00294D10: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00294D1Cu); RECOMP_ABI_CALL(0x001F7FC0u, sub_001F7FC0); /* call 0x001F7FC0 */

loc_00294D1C: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

}

/**
 * sub_00294D30
 * Original: 0x00294D30 - 0x00294D42 (18 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294D30(void)
{

loc_00294D30: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 0xC));
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00294D3Fu); RECOMP_ABI_CALL(0x001B3370u, sub_001B3370); /* call 0x001B3370 */

loc_00294D3F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294D50
 * Original: 0x00294D50 - 0x00294D6D (29 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294D50(void)
{

loc_00294D50: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x354); PUSH32(esp, 0x00294D62u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294D62: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0x78); PUSH32(esp, 0x00294D68u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294D68: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294D70
 * Original: 0x00294D70 - 0x00294D85 (21 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294D70(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00294D70: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x240)); return; /* indirect tail jmp */

}

/**
 * sub_00294D90
 * Original: 0x00294D90 - 0x00294DA6 (22 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294D90(void)
{

loc_00294D90: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x244); PUSH32(esp, 0x00294D9Fu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294D9F: ;
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294DB0
 * Original: 0x00294DB0 - 0x00294DDB (43 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00294DB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00294DD9; /* je: equal / zero */

loc_00294DBB: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00294DD2; /* je: equal / zero */

loc_00294DC2: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x50C); PUSH32(esp, 0x00294DCBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294DCB: ;
    MEM32(esi + 0x38) = 0;

loc_00294DD2: ;
    MEM32(esi + 0x20) = 0xFFFFFFFFu;

loc_00294DD9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00294DE0
 * Original: 0x00294DE0 - 0x00294E28 (72 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00294DE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00294E09; /* je: equal / zero */

loc_00294DEB: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00294E02; /* je: equal / zero */

loc_00294DF2: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x50C); PUSH32(esp, 0x00294DFBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294DFB: ;
    MEM32(esi + 0x38) = 0;

loc_00294E02: ;
    MEM32(esi + 0x20) = 0xFFFFFFFFu;

loc_00294E09: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00294E15u); RECOMP_ABI_CALL(0x0015FDF0u, sub_0015FDF0); /* call 0x0015FDF0 */

loc_00294E15: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00294E1Cu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294E1C: ;
    SET_LO16(eax, MEM16(eax + 8));
    MEM16(esi + 8) = LO16(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294E30
 * Original: 0x00294E30 - 0x00294E61 (49 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294E30(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00294E30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00294E59; /* je: equal / zero */

loc_00294E3B: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00294E52; /* je: equal / zero */

loc_00294E42: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x50C); PUSH32(esp, 0x00294E4Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294E4B: ;
    MEM32(esi + 0x38) = 0;

loc_00294E52: ;
    MEM32(esi + 0x20) = 0xFFFFFFFFu;

loc_00294E59: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0013D370(); return; /* tail jmp 0x0013D370 */

}

/**
 * sub_00294E70
 * Original: 0x00294E70 - 0x00294E94 (36 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294E70(void)
{

loc_00294E70: ;
    eax = MEM32(ecx + 0x24);
    edx = MEM32(ecx + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x10);
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x00294E91u); RECOMP_ABI_CALL(0x001BDA40u, sub_001BDA40); /* call 0x001BDA40 */

loc_00294E91: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294EA0
 * Original: 0x00294EA0 - 0x00294F01 (97 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294EA0(void)
{

loc_00294EA0: ;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    edx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    esi = ecx;
    ecx = MEM32(esp + 0x30);
    eax = MEM32(ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x2EC); PUSH32(esp, 0x00294ED0u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294ED0: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x10) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x14) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x20) = ecx;
    MEM32(esi + 0x24) = edx;
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294F10
 * Original: 0x00294F10 - 0x00294F47 (55 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00294F10: ;
    eax = MEM32(0x5BB2BC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00294F25u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00294F25: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00294F42; /* je: equal / zero */

loc_00294F29: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00294F42; /* je: equal / zero */

loc_00294F31: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    esi = esi + 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x4E8); PUSH32(esp, 0x00294F42u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294F42: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294F50
 * Original: 0x00294F50 - 0x00294F7E (46 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00294F50: ;
    eax = MEM32(0x5BB2BC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00294F65u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00294F65: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00294F79; /* je: equal / zero */

loc_00294F69: ;
    edx = MEM32(esi);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + 0xC));
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x4D8); PUSH32(esp, 0x00294F79u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294F79: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294F80
 * Original: 0x00294F80 - 0x00294FB1 (49 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00294F80: ;
    eax = MEM32(0x5BB2BC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00294F95u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00294F95: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00294FAC; /* je: equal / zero */

loc_00294F99: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x250); PUSH32(esp, 0x00294FA3u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294FA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(edi + 0xC) = LO8(eax);

loc_00294FAC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294FC0
 * Original: 0x00294FC0 - 0x00294FF2 (50 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00294FC0: ;
    eax = MEM32(0x5BB2BC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00294FD5u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00294FD5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00294FED; /* je: equal / zero */

loc_00294FD9: ;
    ecx = MEM32(esi + 0x4C);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x520); PUSH32(esp, 0x00294FEDu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00294FED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00295000
 * Original: 0x00295000 - 0x00295037 (55 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00295000: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00295008u); RECOMP_ABI_CALL(0x0013D370u, sub_0013D370); /* call 0x0013D370 */

loc_00295008: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM16(esi + 0xA) = 0;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00295015u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00295015: ;
    SET_LO16(ecx, MEM16(eax + 8));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x4C));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    MEM16(esi + 8) = LO16(ecx);
    if (CMP_GE(_fas & _fbs, 0)) goto loc_0029502D; /* jge: greater or equal (signed >=) */

loc_00295028: ;
    eax = eax + 0xC0;

loc_0029502D: ;
    SET_LO16(eax, (uint32_t)(((int32_t)(int16_t)(LO16(eax))) >> ((2) & 31u)));
    MEM16(esi + 0xA) = LO16(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00295040
 * Original: 0x00295040 - 0x0029505F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00295040: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ecx + 0x4C));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), LO16(eax) (16-bit) */
    if (CMP_GE(_fas & _fbs, 0)) goto loc_00295054; /* jge: greater or equal (signed >=) */

loc_0029504F: ;
    eax = eax + 0xC0;

loc_00295054: ;
    edx = MEM32(ecx);
    SET_LO16(eax, (uint32_t)(((int32_t)(int16_t)(LO16(eax))) >> ((2) & 31u)));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0029505Eu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029505E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00295060
 * Original: 0x00295060 - 0x00295082 (34 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00295060: ;
    SET_LO16(edx, MEM16(esp + 4));
    eax = SX16(LO16(edx));
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5F (32-bit) */
    MEM32(ecx + 0x4C) = eax;
    MEM16(ecx + 0xA) = LO16(edx);
    if (CMP_LE(_fas, _fbs)) goto loc_0029507F; /* jle: less or equal (signed <=) */

loc_00295077: ;
    eax = eax + 0xFFFFFF40u;
    MEM32(ecx + 0x4C) = eax;

loc_0029507F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00295090
 * Original: 0x00295090 - 0x002950B3 (35 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00295090: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x0029509Bu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_0029509B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002950A7; /* jle: less or equal (signed <=) */

loc_002950A2: ;
    eax = 0x200;

loc_002950A7: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    eax = eax + edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002950C0
 * Original: 0x002950C0 - 0x00295100 (64 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002950C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002950C0: ;
    eax = MEM32(0x5BB2BC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002950D5u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_002950D5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002950FB; /* je: equal / zero */

loc_002950D9: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    ecx = esi;
    if (TEST_Z(_fa, _fb)) goto loc_002950F1; /* je: equal / zero */

loc_002950E2: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 0x240); PUSH32(esp, 0x002950ECu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002950EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_002950F1: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 0x240); PUSH32(esp, 0x002950FBu); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_002950FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00295100
 * Original: 0x00295100 - 0x00295140 (64 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00295100: ;
    eax = MEM32(0x5BB2BC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00295115u); RECOMP_ABI_CALL(0x001EABB0u, sub_001EABB0); /* call 0x001EABB0 */

loc_00295115: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(eax) (8-bit) */
    _cf = 0; /* test/cmp-logical clears CF */
    if (TEST_Z(_fa, _fb)) goto loc_0029512D; /* je: equal / zero */

loc_00295119: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x244); PUSH32(esp, 0x00295123u); RECOMP_ICALL_SAFE(_icall_target, _icall_esp); } /* indirect call */
    }

loc_00295123: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi + 0xC) = LO8(eax);

loc_0029512D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00295140
 * Original: 0x00295140 - 0x0029516F (47 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295140(void)
{

loc_00295140: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = ZX8(MEM8(esi + 0xC));
    ecx = 0x40338;
    PUSH32(esp, 0x00295151u); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_00295151: ;
    edx = MEM32(esi + 0x14);
    ecx = 0x40384;
    PUSH32(esp, 0x0029515Eu); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_0029515E: ;
    edx = MEM32(esi + 0x10);
    ecx = 0x40388;
    PUSH32(esp, 0x0029516Bu); RECOMP_ABI_CALL(0x0035D900u, sub_0035D900); /* call 0x0035D900 */

loc_0029516B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00295170
 * Original: 0x00295170 - 0x0029517E (14 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295170(void)
{

loc_00295170: ;
    eax = 0; /* xor self */
    MEM8(ecx + 0xC) = LO8(eax);
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00295180
 * Original: 0x00295180 - 0x00295193 (19 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295180(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00295180: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(eax * 4 + 0x406AEC);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_0035DC40(); return; /* tail jmp 0x0035DC40 */

}

/**
 * sub_002951A0
 * Original: 0x002951A0 - 0x002951AA (10 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002951A0(void)
{

loc_002951A0: ;
    MEM32(ecx + 0xC) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002951B0
 * Original: 0x002951B0 - 0x002951D7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002951B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002951B0: ;
    eax = MEM32(0x5BE69C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002951C4; /* je: equal / zero */

loc_002951B9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002951D6; /* jne: not equal / not zero */

loc_002951C4: ;
    PUSH32(esp, 0x29E0F0);
    PUSH32(esp, 0x002951CEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002951CE: ;
    eax = MEM32(0x5BE69C);
    esp = esp + 4;

loc_002951D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002951E0
 * Original: 0x002951E0 - 0x00295207 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002951E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002951E0: ;
    eax = MEM32(0x5BE694);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002951F4; /* je: equal / zero */

loc_002951E9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00295206; /* jne: not equal / not zero */

loc_002951F4: ;
    PUSH32(esp, 0x29FF10);
    PUSH32(esp, 0x002951FEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002951FE: ;
    eax = MEM32(0x5BE694);
    esp = esp + 4;

loc_00295206: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00295210
 * Original: 0x00295210 - 0x00295237 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00295210: ;
    eax = MEM32(0x5BE534);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00295224; /* je: equal / zero */

loc_00295219: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00295236; /* jne: not equal / not zero */

loc_00295224: ;
    PUSH32(esp, 0x29FC20);
    PUSH32(esp, 0x0029522Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029522E: ;
    eax = MEM32(0x5BE534);
    esp = esp + 4;

loc_00295236: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00295240
 * Original: 0x00295240 - 0x00295267 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00295240: ;
    eax = MEM32(0x5BE530);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00295254; /* je: equal / zero */

loc_00295249: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00295266; /* jne: not equal / not zero */

loc_00295254: ;
    PUSH32(esp, 0x2A0360);
    PUSH32(esp, 0x0029525Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029525E: ;
    eax = MEM32(0x5BE530);
    esp = esp + 4;

loc_00295266: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00295270
 * Original: 0x00295270 - 0x00295297 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00295270: ;
    eax = MEM32(0x5BE4FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00295284; /* je: equal / zero */

loc_00295279: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00295296; /* jne: not equal / not zero */

loc_00295284: ;
    PUSH32(esp, 0x29E4D0);
    PUSH32(esp, 0x0029528Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029528E: ;
    eax = MEM32(0x5BE4FC);
    esp = esp + 4;

loc_00295296: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002952A0
 * Original: 0x002952A0 - 0x002952C7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002952A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002952A0: ;
    eax = MEM32(0x5BE570);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002952B4; /* je: equal / zero */

loc_002952A9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002952C6; /* jne: not equal / not zero */

loc_002952B4: ;
    PUSH32(esp, 0x2A0540);
    PUSH32(esp, 0x002952BEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002952BE: ;
    eax = MEM32(0x5BE570);
    esp = esp + 4;

loc_002952C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002952D0
 * Original: 0x002952D0 - 0x002952F7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002952D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002952D0: ;
    eax = MEM32(0x5BE68C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002952E4; /* je: equal / zero */

loc_002952D9: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002952F6; /* jne: not equal / not zero */

loc_002952E4: ;
    PUSH32(esp, 0x2A0420);
    PUSH32(esp, 0x002952EEu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002952EE: ;
    eax = MEM32(0x5BE68C);
    esp = esp + 4;

loc_002952F6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00295300
 * Original: 0x00295300 - 0x0029531E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295300(void)
{

loc_00295300: ;
    PUSH32(esp, 0x29D710);
    PUSH32(esp, 0x0029530Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029530A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE4CC);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029531Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0029531D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00295320
 * Original: 0x00295320 - 0x00295326 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295320(void)
{

loc_00295320: ;
    eax = MEM32(0x5BE4CC);
    esp += 4; return; /* ret */

}

/**
 * sub_00295330
 * Original: 0x00295330 - 0x0029534E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295330(void)
{

loc_00295330: ;
    PUSH32(esp, 0x29E220);
    PUSH32(esp, 0x0029533Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029533A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE4D8);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029534Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0029534D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00295350
 * Original: 0x00295350 - 0x00295356 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295350(void)
{

loc_00295350: ;
    eax = MEM32(0x5BE4D8);
    esp += 4; return; /* ret */

}

/**
 * sub_00295360
 * Original: 0x00295360 - 0x002953CA (106 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00295360: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE4D8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00295370u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00295370: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x472580);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00295380u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00295380: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00295388u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00295388: ;
    ebx = eax;
    eax = MEM32(0x5BE4DC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002953AC; /* jne: not equal / not zero */

loc_00295393: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029539Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0029539E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002953A4u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002953A4: ;
    esp = esp + 8;
    MEM32(0x5BE4DC) = eax;

loc_002953AC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x47257C);
    PUSH32(esp, 0x472578);
    PUSH32(esp, 0x472574);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x002953C6u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002953C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002953D0
 * Original: 0x002953D0 - 0x002953EE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002953D0(void)
{

loc_002953D0: ;
    PUSH32(esp, 0x29E270);
    PUSH32(esp, 0x002953DAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002953DA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE4DC);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002953EDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002953ED: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002953F0
 * Original: 0x002953F0 - 0x002953F6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002953F0(void)
{

loc_002953F0: ;
    eax = MEM32(0x5BE4DC);
    esp += 4; return; /* ret */

}

/**
 * sub_00295400
 * Original: 0x00295400 - 0x002954FE (254 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295400(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00295400: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029541F; /* je: equal / zero */

loc_0029540A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029541F; /* jne: not equal / not zero */

loc_0029541A: ;
    PUSH32(esp, 0x0029541Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029541F: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029543B; /* je: equal / zero */

loc_00295426: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029543B; /* jne: not equal / not zero */

loc_00295436: ;
    PUSH32(esp, 0x0029543Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029543B: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00295457; /* je: equal / zero */

loc_00295442: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00295457; /* jne: not equal / not zero */

loc_00295452: ;
    PUSH32(esp, 0x00295457u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00295457: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00295473; /* je: equal / zero */

loc_0029545E: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00295473; /* jne: not equal / not zero */

loc_0029546E: ;
    PUSH32(esp, 0x00295473u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00295473: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029548F; /* je: equal / zero */

loc_0029547A: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_0029548F; /* jne: not equal / not zero */

loc_0029548A: ;
    PUSH32(esp, 0x0029548Fu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_0029548F: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002954AA; /* je: equal / zero */

loc_00295496: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_002954AA; /* jne: not equal / not zero */

loc_002954A2: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002954AAu); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_002954AA: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002954C5; /* je: equal / zero */

loc_002954B1: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_002954C5; /* jne: not equal / not zero */

loc_002954BD: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002954C5u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_002954C5: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002954E0; /* je: equal / zero */

loc_002954CC: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_002954E0; /* jne: not equal / not zero */

loc_002954D8: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002954E0u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_002954E0: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_002954FD; /* je: equal / zero */

loc_002954E8: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002954FD; /* jne: not equal / not zero */

loc_002954F8: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_002954FD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00295500
 * Original: 0x00295500 - 0x0029551E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295500(void)
{

loc_00295500: ;
    PUSH32(esp, 0x29E2C0);
    PUSH32(esp, 0x0029550Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029550A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE4E0);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029551Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0029551D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00295520
 * Original: 0x00295520 - 0x00295526 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295520(void)
{

loc_00295520: ;
    eax = MEM32(0x5BE4E0);
    esp += 4; return; /* ret */

}

/**
 * sub_00295530
 * Original: 0x00295530 - 0x00295536 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295530(void)
{

loc_00295530: ;
    eax = MEM32(0x5BE4E4);
    esp += 4; return; /* ret */

}

/**
 * sub_00295540
 * Original: 0x00295540 - 0x0029555E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295540(void)
{

loc_00295540: ;
    PUSH32(esp, 0x29E360);
    PUSH32(esp, 0x0029554Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029554A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE4E8);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029555Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0029555D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00295560
 * Original: 0x00295560 - 0x00295587 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00295560: ;
    eax = MEM32(0x5BE4E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00295574; /* je: equal / zero */

loc_00295569: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00295586; /* jne: not equal / not zero */

loc_00295574: ;
    PUSH32(esp, 0x29E360);
    PUSH32(esp, 0x0029557Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029557E: ;
    eax = MEM32(0x5BE4E8);
    esp = esp + 4;

loc_00295586: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00295590
 * Original: 0x00295590 - 0x00295596 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295590(void)
{

loc_00295590: ;
    eax = MEM32(0x5BE4E8);
    esp += 4; return; /* ret */

}

/**
 * sub_002955A0
 * Original: 0x002955A0 - 0x002955BE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002955A0(void)
{

loc_002955A0: ;
    PUSH32(esp, 0x29E430);
    PUSH32(esp, 0x002955AAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002955AA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE4F0);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002955BDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002955BD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002955C0
 * Original: 0x002955C0 - 0x002955DE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002955C0(void)
{

loc_002955C0: ;
    PUSH32(esp, 0x29FB90);
    PUSH32(esp, 0x002955CAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002955CA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE4F4);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002955DDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002955DD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002955E0
 * Original: 0x002955E0 - 0x0029562B (75 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002955E0(void)
{

loc_002955E0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE4F4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002955EFu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002955EF: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x47259C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x002955FFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002955FF: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0029560Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029560A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x472594);
    PUSH32(esp, 0x47258C);
    PUSH32(esp, 0x472584);
    ecx = esi;
    MEM32(eax + 0x30) = 0x2949F0;
    PUSH32(esp, 0x00295628u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00295628: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00295630
 * Original: 0x00295630 - 0x0029564E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295630(void)
{

loc_00295630: ;
    PUSH32(esp, 0x29E480);
    PUSH32(esp, 0x0029563Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029563A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE4F8);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029564Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0029564D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00295650
 * Original: 0x00295650 - 0x00295656 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295650(void)
{

loc_00295650: ;
    eax = MEM32(0x5BE4F8);
    esp += 4; return; /* ret */

}

/**
 * sub_00295660
 * Original: 0x00295660 - 0x00295666 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295660(void)
{

loc_00295660: ;
    eax = MEM32(0x5BE4FC);
    esp += 4; return; /* ret */

}

/**
 * sub_00295670
 * Original: 0x00295670 - 0x002956F0 (128 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00295670: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE4FC);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00295680u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00295680: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x4725BC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00295690u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00295690: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00295698u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00295698: ;
    ebx = eax;
    eax = MEM32(0x5BE530);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002956BC; /* jne: not equal / not zero */

loc_002956A3: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002956AEu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_002956AE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002956B4u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_002956B4: ;
    esp = esp + 8;
    MEM32(0x5BE530) = eax;

loc_002956BC: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x3C) = 0;
    PUSH32(esp, 0x002956CEu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002956CE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4725B4);
    PUSH32(esp, 0x4725AC);
    PUSH32(esp, 0x4725A4);
    ecx = esi;
    MEM32(eax + 0x30) = 0x293530;
    PUSH32(esp, 0x002956ECu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002956EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002956F0
 * Original: 0x002956F0 - 0x0029570E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002956F0(void)
{

loc_002956F0: ;
    PUSH32(esp, 0x29E520);
    PUSH32(esp, 0x002956FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002956FA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE500);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029570Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0029570D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00295710
 * Original: 0x00295710 - 0x00295716 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295710(void)
{

loc_00295710: ;
    eax = MEM32(0x5BE500);
    esp += 4; return; /* ret */

}

/**
 * sub_00295720
 * Original: 0x00295720 - 0x0029576B (75 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295720(void)
{

loc_00295720: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE500);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029572Fu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_0029572F: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x4725DC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0029573Fu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_0029573F: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0029574Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029574A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4725D4);
    PUSH32(esp, 0x4725CC);
    PUSH32(esp, 0x4725C4);
    ecx = esi;
    MEM32(eax + 0x30) = 0x293530;
    PUSH32(esp, 0x00295768u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00295768: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00295770
 * Original: 0x00295770 - 0x0029578E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295770(void)
{

loc_00295770: ;
    PUSH32(esp, 0x29E570);
    PUSH32(esp, 0x0029577Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029577A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE504);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029578Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0029578D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00295790
 * Original: 0x00295790 - 0x00295796 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295790(void)
{

loc_00295790: ;
    eax = MEM32(0x5BE504);
    esp += 4; return; /* ret */

}

/**
 * sub_002957A0
 * Original: 0x002957A0 - 0x002957EB (75 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002957A0(void)
{

loc_002957A0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE504);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002957AFu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002957AF: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x4725FC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x002957BFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002957BF: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002957CAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002957CA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4725F4);
    PUSH32(esp, 0x4725EC);
    PUSH32(esp, 0x4725E4);
    ecx = esi;
    MEM32(eax + 0x30) = 0x293530;
    PUSH32(esp, 0x002957E8u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002957E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002957F0
 * Original: 0x002957F0 - 0x0029580E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002957F0(void)
{

loc_002957F0: ;
    PUSH32(esp, 0x29E5C0);
    PUSH32(esp, 0x002957FAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002957FA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE50C);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029580Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0029580D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00295810
 * Original: 0x00295810 - 0x0029582E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295810(void)
{

loc_00295810: ;
    PUSH32(esp, 0x29DC80);
    PUSH32(esp, 0x0029581Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029581A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE510);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029582Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0029582D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00295830
 * Original: 0x00295830 - 0x0029589E (110 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00295830: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE510);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00295840u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00295840: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x472610);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00295850u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00295850: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00295858u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00295858: ;
    ebx = eax;
    eax = MEM32(0x5BE684);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029587C; /* jne: not equal / not zero */

loc_00295863: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029586Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0029586E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00295874u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00295874: ;
    esp = esp + 8;
    MEM32(0x5BE684) = eax;

loc_0029587C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x47260C);
    PUSH32(esp, 0x472608);
    PUSH32(esp, 0x472604);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x0029589Au); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0029589A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00295838
 * Original: 0x00295838 - 0x0029589E (102 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295838(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00295838: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00295840u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00295840: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x472610);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00295850u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00295850: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00295858u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00295858: ;
    ebx = eax;
    eax = MEM32(0x5BE684);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029587C; /* jne: not equal / not zero */

loc_00295863: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029586Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0029586E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00295874u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00295874: ;
    esp = esp + 8;
    MEM32(0x5BE684) = eax;

loc_0029587C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x47260C);
    PUSH32(esp, 0x472608);
    PUSH32(esp, 0x472604);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x0029589Au); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0029589A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002958A0
 * Original: 0x002958A0 - 0x002958BE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002958A0(void)
{

loc_002958A0: ;
    PUSH32(esp, 0x29E610);
    PUSH32(esp, 0x002958AAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002958AA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE518);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002958BDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002958BD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002958C0
 * Original: 0x002958C0 - 0x002958C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002958C0(void)
{

loc_002958C0: ;
    eax = MEM32(0x5BE518);
    esp += 4; return; /* ret */

}

/**
 * sub_002958D0
 * Original: 0x002958D0 - 0x002958D4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002958D0(void)
{

loc_002958D0: ;
    eax = MEM32(ecx + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_002958E0
 * Original: 0x002958E0 - 0x002959C3 (227 bytes, 72 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002958E0(void)
{

loc_002958E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE518);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002958F1u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002958F1: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x472668);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00295901u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00295901: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00295909u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00295909: ;
    ebx = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x10) = 1;
    PUSH32(esp, 0x0029591Fu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_0029591F: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x221530;
    PUSH32(esp, 0x00295931u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00295931: ;
    edx = edi + 2;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(eax + 0x30) = 0x293530;
    PUSH32(esp, 0x00295943u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00295943: ;
    ebx = 0x1AAFC0;
    MEM32(eax + 0x34) = ebx;
    eax = edi + 3;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00295956u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00295956: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(eax + 0x34) = ebx;
    PUSH32(esp, 0x00295964u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00295964: ;
    edx = edi + 5;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(eax + 0x34) = 0x1AAFF0;
    PUSH32(esp, 0x00295976u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00295976: ;
    PUSH32(esp, 2);
    ecx = eax;
    PUSH32(esp, 0x0029597Fu); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_0029597F: ;
    eax = edi + 6;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0029598Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029598A: ;
    ecx = esp + 0xC;
    ebx = eax;
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x002959A0u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_002959A0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x47264C);
    PUSH32(esp, 0x472630);
    PUSH32(esp, 0x472614);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x1AB020;
    PUSH32(esp, 0x002959BEu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_002959BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002959D0
 * Original: 0x002959D0 - 0x002959DD (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002959D0(void)
{

loc_002959D0: ;
    eax = MEM32(0x5BE42C);
    MEM32(eax + 0x34) = 0x1ABA40;
    esp += 4; return; /* ret */

}

/**
 * sub_002959E0
 * Original: 0x002959E0 - 0x00295A55 (117 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002959E0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002959E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002959FF; /* je: equal / zero */

loc_002959EA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002959FF; /* jne: not equal / not zero */

loc_002959FA: ;
    PUSH32(esp, 0x002959FFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002959FF: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00295A1B; /* je: equal / zero */

loc_00295A06: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00295A1B; /* jne: not equal / not zero */

loc_00295A16: ;
    PUSH32(esp, 0x00295A1Bu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00295A1B: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00295A37; /* je: equal / zero */

loc_00295A22: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00295A37; /* jne: not equal / not zero */

loc_00295A32: ;
    PUSH32(esp, 0x00295A37u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00295A37: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00295A54; /* je: equal / zero */

loc_00295A3F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00295A54; /* jne: not equal / not zero */

loc_00295A4F: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00295A54: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00295A60
 * Original: 0x00295A60 - 0x00295A7E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295A60(void)
{

loc_00295A60: ;
    PUSH32(esp, 0x29E660);
    PUSH32(esp, 0x00295A6Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00295A6A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE528);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00295A7Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00295A7D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00295A80
 * Original: 0x00295A80 - 0x00295A86 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295A80(void)
{

loc_00295A80: ;
    eax = MEM32(0x5BE528);
    esp += 4; return; /* ret */

}

/**
 * sub_00295A90
 * Original: 0x00295A90 - 0x00295B04 (116 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295A90(void)
{

loc_00295A90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE528);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00295AA1u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00295AA1: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x4726A8);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00295AB1u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00295AB1: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00295AB9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00295AB9: ;
    ebx = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00295ACFu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00295ACF: ;
    ecx = edi + 2;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x34) = 0x1AA200;
    PUSH32(esp, 0x00295AE1u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00295AE1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x47269C);
    PUSH32(esp, 0x472690);
    PUSH32(esp, 0x472684);
    ecx = esi;
    MEM32(eax + 0x30) = 0x294590;
    PUSH32(esp, 0x00295AFFu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00295AFF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00295B10
 * Original: 0x00295B10 - 0x00295B16 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295B10(void)
{

loc_00295B10: ;
    eax = MEM32(0x5BE52C);
    esp += 4; return; /* ret */

}

/**
 * sub_00295B20
 * Original: 0x00295B20 - 0x00295B9C (124 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00295B20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE52C);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00295B30u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00295B30: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x4726CC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00295B40u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00295B40: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00295B48u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00295B48: ;
    ebx = eax;
    eax = MEM32(0x5BE530);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00295B6C; /* jne: not equal / not zero */

loc_00295B53: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00295B5Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00295B5E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00295B64u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00295B64: ;
    esp = esp + 8;
    MEM32(0x5BE530) = eax;

loc_00295B6C: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00295B7Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00295B7A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4726C4);
    PUSH32(esp, 0x4726BC);
    PUSH32(esp, 0x4726B4);
    ecx = esi;
    MEM32(eax + 0x30) = 0x293530;
    PUSH32(esp, 0x00295B98u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00295B98: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00295BA0
 * Original: 0x00295BA0 - 0x00295BE6 (70 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295BA0(void)
{

loc_00295BA0: ;
    esp = esp - 0x48;
    PUSH32(esp, esi);
    ecx = esp + 4;
    PUSH32(esp, 0x00295BADu); RECOMP_ABI_CALL(0x001EA550u, sub_001EA550); /* call 0x001EA550 */

loc_00295BAD: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x44) = eax;
    eax = MEM32(0x5BC508);
    MEM32(esp + 4) = 0x4071B0;
    ecx = MEM32(eax + 0x394);
    esi = MEM32(esp + ecx + 4);
    ecx = esp + 4;
    PUSH32(esp, 0x00295BDFu); RECOMP_ABI_CALL(0x002959E0u, sub_002959E0); /* call 0x002959E0 */

loc_00295BDF: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

}

/**
 * sub_00295BF0
 * Original: 0x00295BF0 - 0x00295DF9 (521 bytes, 168 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295BF0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00295BF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE530);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00295C02u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00295C02: ;
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x472788);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00295C12u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00295C12: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00295C1Du); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00295C1D: ;
    ecx = esp + 0x10;
    ebp = eax;
    PUSH32(esp, ecx);
    ebx = 0; /* xor self */
    ecx = ebp;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x00295C31u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00295C31: ;
    edx = edi + 2;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x34) = 0x1AA350;
    PUSH32(esp, 0x00295C43u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00295C43: ;
    ebp = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x00295C55u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00295C55: ;
    ecx = edi + 3;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x34) = 0x1AA350;
    PUSH32(esp, 0x00295C67u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00295C67: ;
    ebp = eax;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = ebp;
    MEM32(esp + 0x14) = 1;
    PUSH32(esp, 0x00295C7Du); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00295C7D: ;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(ebp + 0x34) = 0x1AA320;
    PUSH32(esp, 0x00295C8Fu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00295C8F: ;
    ecx = esp + 0x10;
    ebp = eax;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x14) = 1;
    PUSH32(esp, 0x00295CA5u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00295CA5: ;
    edx = edi + 5;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x34) = 0x1AA320;
    PUSH32(esp, 0x00295CB7u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00295CB7: ;
    ebp = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ebp;
    PUSH32(esp, 0x00295CC2u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00295CC2: ;
    SET_LO8(eax, 4);
    MEM8(ebp + 0x28) = LO8(eax);
    MEM8(ebp + 0x27) = LO8(eax);
    eax = edi + 6;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x26) = LO8(ebx);
    MEM8(ebp + 0x2C) = 3;
    PUSH32(esp, 0x00295CDCu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00295CDC: ;
    ecx = esp + 0x10;
    ebp = eax;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x00295CEEu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00295CEE: ;
    MEM32(ebp + 0x34) = 0x1AA2C0;
    edx = edi + 7;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00295D00u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00295D00: ;
    ebp = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x00295D12u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00295D12: ;
    ecx = edi + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x34) = 0x1AA2F0;
    PUSH32(esp, 0x00295D24u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00295D24: ;
    ebp = eax;
    PUSH32(esp, 0x00295D2Bu); RECOMP_ABI_CALL(0x001AB0E0u, sub_001AB0E0); /* call 0x001AB0E0 */

loc_00295D2B: ;
    edx = edi + 0xA;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    PUSH32(esp, 0x00295D39u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00295D39: ;
    ebp = eax;
    eax = MEM32(0x5BE4FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00295D5D; /* jne: not equal / not zero */

loc_00295D44: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00295D4Fu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00295D4F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00295D55u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00295D55: ;
    esp = esp + 8;
    MEM32(0x5BE4FC) = eax;

loc_00295D5D: ;
    ecx = edi + 0xB;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    PUSH32(esp, 0x00295D6Bu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00295D6B: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x00295D74u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00295D74: ;
    edx = edi + 0xC;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00295D7Fu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00295D7F: ;
    ebp = eax;
    eax = MEM32(0x5BE534);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00295DA3; /* jne: not equal / not zero */

loc_00295D8A: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00295D95u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00295D95: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00295D9Bu); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00295D9B: ;
    esp = esp + 8;
    MEM32(0x5BE534) = eax;

loc_00295DA3: ;
    ecx = edi + 0xD;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = 1;
    PUSH32(esp, 0x00295DB5u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00295DB5: ;
    ebp = eax;
    PUSH32(esp, 0x00295DBCu); RECOMP_ABI_CALL(0x001AA8A0u, sub_001AA8A0); /* call 0x001AA8A0 */

loc_00295DBC: ;
    edx = edi + 0xE;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x26) = LO8(ebx);
    MEM8(ebp + 0x28) = 1;
    MEM8(ebp + 0x27) = 1;
    MEM8(ebp + 0x2C) = 3;
    PUSH32(esp, 0x00295DD9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00295DD9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x47274C);
    PUSH32(esp, 0x472710);
    PUSH32(esp, 0x4726D4);
    ecx = esi;
    MEM8(eax + 0x26) = LO8(ebx);
    PUSH32(esp, 0x00295DF3u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00295DF3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00295E00
 * Original: 0x00295E00 - 0x00295E06 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295E00(void)
{

loc_00295E00: ;
    eax = MEM32(0x5BE538);
    esp += 4; return; /* ret */

}

/**
 * sub_00295E10
 * Original: 0x00295E10 - 0x00295E16 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295E10(void)
{

loc_00295E10: ;
    eax = MEM32(0x5BE53C);
    esp += 4; return; /* ret */

}

/**
 * sub_00295E20
 * Original: 0x00295E20 - 0x00295E26 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295E20(void)
{

loc_00295E20: ;
    eax = MEM32(0x5BE540);
    esp += 4; return; /* ret */

}

/**
 * sub_00295E30
 * Original: 0x00295E30 - 0x00295E4E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295E30(void)
{

loc_00295E30: ;
    PUSH32(esp, 0x29E760);
    PUSH32(esp, 0x00295E3Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00295E3A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE544);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00295E4Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00295E4D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00295E50
 * Original: 0x00295E50 - 0x00295E56 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295E50(void)
{

loc_00295E50: ;
    eax = MEM32(0x5BE544);
    esp += 4; return; /* ret */

}

/**
 * sub_00295E60
 * Original: 0x00295E60 - 0x00295E7E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295E60(void)
{

loc_00295E60: ;
    PUSH32(esp, 0x29E7B0);
    PUSH32(esp, 0x00295E6Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00295E6A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE548);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00295E7Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00295E7D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00295E80
 * Original: 0x00295E80 - 0x00295E86 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295E80(void)
{

loc_00295E80: ;
    eax = MEM32(0x5BE548);
    esp += 4; return; /* ret */

}

/**
 * sub_00295E90
 * Original: 0x00295E90 - 0x00295EA8 (24 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295E90(void)
{

loc_00295E90: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x1C) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00295EB0
 * Original: 0x00295EB0 - 0x00295ECE (30 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295EB0(void)
{

loc_00295EB0: ;
    eax = MEM32(ecx + 0x1C);
    edx = MEM32(esp + 4);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 0x20);
    edx = MEM32(esp + 8);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 0x24);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00295ED0
 * Original: 0x00295ED0 - 0x00295ED6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295ED0(void)
{

loc_00295ED0: ;
    eax = MEM32(0x5BE54C);
    esp += 4; return; /* ret */

}

/**
 * sub_00295EE0
 * Original: 0x00295EE0 - 0x00295F03 (35 bytes, 10 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295EE0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00295EE0: ;
    eax = MEM32(0x5BE6E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00295EF3; /* je: equal / zero */

loc_00295EE9: ;
    MEM32(0x5BE6E4) = 0;

loc_00295EF3: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00295F02; /* je: equal / zero */

loc_00295EFA: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xE4)); return; /* indirect tail jmp */

loc_00295F02: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00295F10
 * Original: 0x00295F10 - 0x00295F16 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295F10(void)
{

loc_00295F10: ;
    eax = MEM32(0x5BE550);
    esp += 4; return; /* ret */

}

/**
 * sub_00295F20
 * Original: 0x00295F20 - 0x00295F3E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295F20(void)
{

loc_00295F20: ;
    PUSH32(esp, 0x2A0820);
    PUSH32(esp, 0x00295F2Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_00295F2A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE554);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00295F3Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_00295F3D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00295F40
 * Original: 0x00295F40 - 0x00295F46 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295F40(void)
{

loc_00295F40: ;
    eax = MEM32(0x5BE554);
    esp += 4; return; /* ret */

}

/**
 * sub_00295F50
 * Original: 0x00295F50 - 0x00295FBA (106 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295F50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00295F50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE554);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00295F60u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00295F60: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x4727D0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00295F70u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00295F70: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00295F78u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00295F78: ;
    ebx = eax;
    eax = MEM32(0x5BE570);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00295F9C; /* jne: not equal / not zero */

loc_00295F83: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00295F8Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00295F8E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00295F94u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00295F94: ;
    esp = esp + 8;
    MEM32(0x5BE570) = eax;

loc_00295F9C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4727CC);
    PUSH32(esp, 0x4727C8);
    PUSH32(esp, 0x4727C4);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00295FB6u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00295FB6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00295FC0
 * Original: 0x00295FC0 - 0x00295FC6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295FC0(void)
{

loc_00295FC0: ;
    eax = MEM32(0x5BE558);
    esp += 4; return; /* ret */

}

/**
 * sub_00295FD0
 * Original: 0x00295FD0 - 0x00295FD6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295FD0(void)
{

loc_00295FD0: ;
    eax = MEM32(0x5BE55C);
    esp += 4; return; /* ret */

}

/**
 * sub_00295FE0
 * Original: 0x00295FE0 - 0x00295FFF (31 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295FE0(void)
{

loc_00295FE0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x10) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = edx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00296000
 * Original: 0x00296000 - 0x00296006 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296000(void)
{

loc_00296000: ;
    eax = MEM32(0x5BE560);
    esp += 4; return; /* ret */

}

/**
 * sub_00296010
 * Original: 0x00296010 - 0x0029602E (30 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296010(void)
{

loc_00296010: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x14) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0x18) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00296030
 * Original: 0x00296030 - 0x002960A3 (115 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296030(void)
{

loc_00296030: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE560);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00296042u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00296042: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x4727E0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00296052u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00296052: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029605Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029605A: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x00296086u); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_00296086: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4727DC);
    PUSH32(esp, 0x4727D8);
    PUSH32(esp, 0x4727D4);
    ecx = esi;
    PUSH32(esp, 0x0029609Du); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0029609D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_002960B0
 * Original: 0x002960B0 - 0x002960B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002960B0(void)
{

loc_002960B0: ;
    eax = MEM32(0x5BE564);
    esp += 4; return; /* ret */

}

/**
 * sub_002960C0
 * Original: 0x002960C0 - 0x002960C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002960C0(void)
{

loc_002960C0: ;
    eax = MEM32(0x5BE570);
    esp += 4; return; /* ret */

}

/**
 * sub_002960D0
 * Original: 0x002960D0 - 0x002960D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002960D0(void)
{

loc_002960D0: ;
    eax = MEM32(0x5BE574);
    esp += 4; return; /* ret */

}

/**
 * sub_002960E0
 * Original: 0x002960E0 - 0x0029613F (95 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002960E0(void)
{

loc_002960E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE574);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002960F0u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002960F0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x4727FC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00296100u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00296100: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00296108u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296108: ;
    ebx = eax;
    PUSH32(esp, 0x0029610Fu); RECOMP_ABI_CALL(0x001A4D90u, sub_001A4D90); /* call 0x001A4D90 */

loc_0029610F: ;
    MEM32(ebx + 0x38) = eax;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0029611Du); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029611D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4727F4);
    PUSH32(esp, 0x4727EC);
    PUSH32(esp, 0x4727E4);
    ecx = esi;
    MEM32(eax + 0x30) = 0x293530;
    PUSH32(esp, 0x0029613Bu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0029613B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00296140
 * Original: 0x00296140 - 0x0029615E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296140(void)
{

loc_00296140: ;
    PUSH32(esp, 0x29EA30);
    PUSH32(esp, 0x0029614Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029614A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE578);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029615Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0029615D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00296160
 * Original: 0x00296160 - 0x00296187 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00296160: ;
    eax = MEM32(0x5BE578);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00296174; /* je: equal / zero */

loc_00296169: ;
    ecx = MEM32(eax + 0x24);
    ecx = ecx >> 2;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00296186; /* jne: not equal / not zero */

loc_00296174: ;
    PUSH32(esp, 0x29EA30);
    PUSH32(esp, 0x0029617Eu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029617E: ;
    eax = MEM32(0x5BE578);
    esp = esp + 4;

loc_00296186: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00296190
 * Original: 0x00296190 - 0x00296196 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296190(void)
{

loc_00296190: ;
    eax = MEM32(0x5BE578);
    esp += 4; return; /* ret */

}

/**
 * sub_002961A0
 * Original: 0x002961A0 - 0x002961B4 (20 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002961A0(void)
{

loc_002961A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    ecx = ecx + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002961AEu); RECOMP_ABI_CALL(0x0023E3A0u, sub_0023E3A0); /* call 0x0023E3A0 */

loc_002961AE: ;
    esp = esp + 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002961C0
 * Original: 0x002961C0 - 0x002961C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002961C0(void)
{

loc_002961C0: ;
    eax = MEM32(0x5BE57C);
    esp += 4; return; /* ret */

}

/**
 * sub_002961D0
 * Original: 0x002961D0 - 0x002961D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002961D0(void)
{

loc_002961D0: ;
    eax = MEM32(0x5BE580);
    esp += 4; return; /* ret */

}

/**
 * sub_002961E0
 * Original: 0x002961E0 - 0x002961FE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002961E0(void)
{

loc_002961E0: ;
    PUSH32(esp, 0x29EB20);
    PUSH32(esp, 0x002961EAu); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_002961EA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE584);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002961FDu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002961FD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00296200
 * Original: 0x00296200 - 0x00296206 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296200(void)
{

loc_00296200: ;
    eax = MEM32(0x5BE584);
    esp += 4; return; /* ret */

}

/**
 * sub_00296210
 * Original: 0x00296210 - 0x0029627A (106 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00296210: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE584);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00296220u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00296220: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x472810);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00296230u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00296230: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00296238u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296238: ;
    ebx = eax;
    eax = MEM32(0x5BE588);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029625C; /* jne: not equal / not zero */

loc_00296243: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029624Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0029624E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00296254u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00296254: ;
    esp = esp + 8;
    MEM32(0x5BE588) = eax;

loc_0029625C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x47280C);
    PUSH32(esp, 0x472808);
    PUSH32(esp, 0x472804);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00296276u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00296276: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0029626E
 * Original: 0x0029626E - 0x0029627A (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029626E(void)
{

loc_0029626E: ;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x00296276u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00296276: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00296280
 * Original: 0x00296280 - 0x0029629E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296280(void)
{

loc_00296280: ;
    PUSH32(esp, 0x29EB70);
    PUSH32(esp, 0x0029628Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029628A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE588);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029629Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0029629D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002962A0
 * Original: 0x002962A0 - 0x002962A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002962A0(void)
{

loc_002962A0: ;
    eax = MEM32(0x5BE588);
    esp += 4; return; /* ret */

}

/**
 * sub_002962B0
 * Original: 0x002962B0 - 0x0029635A (170 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002962B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002962B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002962CF; /* je: equal / zero */

loc_002962BA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002962CF; /* jne: not equal / not zero */

loc_002962CA: ;
    PUSH32(esp, 0x002962CFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002962CF: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002962EB; /* je: equal / zero */

loc_002962D6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002962EB; /* jne: not equal / not zero */

loc_002962E6: ;
    PUSH32(esp, 0x002962EBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002962EB: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00296307; /* je: equal / zero */

loc_002962F2: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00296307; /* jne: not equal / not zero */

loc_00296302: ;
    PUSH32(esp, 0x00296307u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00296307: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00296322; /* je: equal / zero */

loc_0029630E: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00296322; /* jne: not equal / not zero */

loc_0029631A: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00296322u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00296322: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029633D; /* je: equal / zero */

loc_00296329: ;
    ecx = MEM32(eax + -4);
    eax = eax + 0xFFFFFFF8u;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_0029633D; /* jne: not equal / not zero */

loc_00296335: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029633Du); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_0029633D: ;
    esi = MEM32(esi + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, esi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00296358; /* je: equal / zero */

loc_00296344: ;
    ecx = MEM32(esi + -4);
    eax = esi + -8;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 4) = ecx;
    if ((_fa != 0)) goto loc_00296358; /* jne: not equal / not zero */

loc_00296350: ;
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00296358u); RECOMP_ABI_CALL(0x0020EF90u, sub_0020EF90); /* call 0x0020EF90 */

loc_00296358: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00296360
 * Original: 0x00296360 - 0x0029637E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296360(void)
{

loc_00296360: ;
    PUSH32(esp, 0x29EBC0);
    PUSH32(esp, 0x0029636Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029636A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE58C);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029637Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0029637D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00296365
 * Original: 0x00296365 - 0x0029637E (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296365(void)
{

loc_00296365: ;
    PUSH32(esp, 0x0029636Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029636A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE58C);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029637Du); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_0029637D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00296380
 * Original: 0x00296380 - 0x00296386 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296380(void)
{

loc_00296380: ;
    eax = MEM32(0x5BE58C);
    esp += 4; return; /* ret */

}

/**
 * sub_00296390
 * Original: 0x00296390 - 0x002963AE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296390(void)
{

loc_00296390: ;
    PUSH32(esp, 0x29EC20);
    PUSH32(esp, 0x0029639Au); RECOMP_ABI_CALL(0x00209650u, sub_00209650); /* call 0x00209650 */

loc_0029639A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x5BE594);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002963ADu); RECOMP_ABI_CALL(0x0020E520u, sub_0020E520); /* call 0x0020E520 */

loc_002963AD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002963B0
 * Original: 0x002963B0 - 0x002963C0 (16 bytes, 6 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002963B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002963B0: ;
    ecx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002963BF; /* je: equal / zero */

loc_002963B7: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x90)); return; /* indirect tail jmp */

loc_002963BF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002963C0
 * Original: 0x002963C0 - 0x002963D0 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002963C0(void)
{

loc_002963C0: ;
    eax = MEM32(0x5BE598);
    esp += 4; return; /* ret */

}

/**
 * sub_002963D0
 * Original: 0x002963D0 - 0x002963D6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002963D0(void)
{

loc_002963D0: ;
    eax = MEM32(0x5BE59C);
    esp += 4; return; /* ret */

}

/**
 * sub_002963E0
 * Original: 0x002963E0 - 0x002963E6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002963E0(void)
{

loc_002963E0: ;
    eax = MEM32(0x5BE5A0);
    esp += 4; return; /* ret */

}

/**
 * sub_002963F0
 * Original: 0x002963F0 - 0x00296491 (161 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002963F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002963F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE5A0);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00296400u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00296400: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x47282C);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00296410u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00296410: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00296418u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296418: ;
    ebx = eax;
    eax = MEM32(0x5BE600);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029643C; /* jne: not equal / not zero */

loc_00296423: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029642Eu); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_0029642E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00296434u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00296434: ;
    esp = esp + 8;
    MEM32(0x5BE600) = eax;

loc_0029643C: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0029644Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029644A: ;
    ebx = eax;
    eax = MEM32(0x5BE5AC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029646F; /* jne: not equal / not zero */

loc_00296455: ;
    edx = MEM32(0x46A684);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00296461u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00296461: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00296467u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00296467: ;
    esp = esp + 8;
    MEM32(0x5BE5AC) = eax;

loc_0029646F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x472824);
    PUSH32(esp, 0x47281C);
    PUSH32(esp, 0x472814);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    MEM8(ebx + 0x34) = 1;
    PUSH32(esp, 0x0029648Du); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0029648D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002964A0
 * Original: 0x002964A0 - 0x002964A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002964A0(void)
{

loc_002964A0: ;
    eax = MEM32(0x5BE5A4);
    esp += 4; return; /* ret */

}

/**
 * sub_002964B0
 * Original: 0x002964B0 - 0x00296525 (117 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002964B0(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002964B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002964CF; /* je: equal / zero */

loc_002964BA: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002964CF; /* jne: not equal / not zero */

loc_002964CA: ;
    PUSH32(esp, 0x002964CFu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002964CF: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002964EB; /* je: equal / zero */

loc_002964D6: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_002964EB; /* jne: not equal / not zero */

loc_002964E6: ;
    PUSH32(esp, 0x002964EBu); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_002964EB: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00296507; /* je: equal / zero */

loc_002964F2: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00296507; /* jne: not equal / not zero */

loc_00296502: ;
    PUSH32(esp, 0x00296507u); RECOMP_ABI_CALL(0x002041D0u, sub_002041D0); /* call 0x002041D0 */

loc_00296507: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ecx (32-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_00296524; /* je: equal / zero */

loc_0029650F: ;
    edx = MEM32(ecx + 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFF (32-bit) */
    MEM32(ecx + 4) = edx;
    if (TEST_NZ(_fa, _fb)) goto loc_00296524; /* jne: not equal / not zero */

loc_0029651F: ;
    g_seh_ebp = ebp; sub_002041D0(); return; /* tail jmp 0x002041D0 */

loc_00296524: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00296530
 * Original: 0x00296530 - 0x00296635 (261 bytes, 88 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296530(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296530: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x5BE5A4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00296542u); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_00296542: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x4728A0);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00296552u); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_00296552: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0029655Au); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029655A: ;
    ebx = eax;
    eax = MEM32(0x5BE5A8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0029657E; /* jne: not equal / not zero */

loc_00296565: ;
    eax = MEM32(0x46A684);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00296570u); RECOMP_ABI_CALL(0x001E9B40u, sub_001E9B40); /* call 0x001E9B40 */

loc_00296570: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00296576u); RECOMP_ABI_CALL(0x002226E0u, sub_002226E0); /* call 0x002226E0 */

loc_00296576: ;
    esp = esp + 8;
    MEM32(0x5BE5A8) = eax;

loc_0029657E: ;
    ecx = edi + 1;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0029658Cu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_0029658C: ;
    ebp = eax;
    PUSH32(esp, 0x00296593u); RECOMP_ABI_CALL(0x0023B750u, sub_0023B750); /* call 0x0023B750 */

loc_00296593: ;
    edx = edi + 4;
    ebx = 1;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x002965A9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002965A9: ;
    ebp = eax;
    PUSH32(esp, 0x002965B0u); RECOMP_ABI_CALL(0x00222E60u, sub_00222E60); /* call 0x00222E60 */

loc_002965B0: ;
    MEM32(ebp + 0x38) = eax;
    eax = edi + 5;
    PUSH32(esp, eax);
    ecx = esi;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x002965C1u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002965C1: ;
    ebp = eax;
    PUSH32(esp, 0x002965C8u); RECOMP_ABI_CALL(0x00222F00u, sub_00222F00); /* call 0x00222F00 */

loc_002965C8: ;
    ecx = edi + 6;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x38) = eax;
    MEM8(ebp + 0x34) = LO8(ebx);
    PUSH32(esp, 0x002965D9u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002965D9: ;
    edx = edi + 7;
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(eax + 0x26) = 0;
    PUSH32(esp, 0x002965E8u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002965E8: ;
    ebp = eax;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebp;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x002965FEu); RECOMP_ABI_CALL(0x0023CD20u, sub_0023CD20); /* call 0x0023CD20 */

loc_002965FE: ;
    ecx = edi + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(ebp + 0x34) = 0x1A9FF0;
    PUSH32(esp, 0x00296610u); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_00296610: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x00296618u); RECOMP_ABI_CALL(0x001E73F0u, sub_001E73F0); /* call 0x001E73F0 */

loc_00296618: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x47287C);
    PUSH32(esp, 0x472858);
    PUSH32(esp, 0x472834);
    ecx = esi;
    PUSH32(esp, 0x0029662Fu); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_0029662F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00296640
 * Original: 0x00296640 - 0x00296645 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296640(void)
{
    uint32_t ebp;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296640: ;
    g_seh_ebp = ebp; sub_00293ED0(); return; /* tail jmp 0x00293ED0 */

}

/**
 * sub_00296650
 * Original: 0x00296650 - 0x00296656 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296650(void)
{

loc_00296650: ;
    eax = MEM32(0x5BE5BC);
    esp += 4; return; /* ret */

}

/**
 * sub_00296660
 * Original: 0x00296660 - 0x00296666 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296660(void)
{

loc_00296660: ;
    eax = MEM32(0x5BE5C0);
    esp += 4; return; /* ret */

}

/**
 * sub_00296670
 * Original: 0x00296670 - 0x00296676 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296670(void)
{

loc_00296670: ;
    eax = MEM32(0x5BE5C4);
    esp += 4; return; /* ret */

}

/**
 * sub_00296680
 * Original: 0x00296680 - 0x00296686 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296680(void)
{

loc_00296680: ;
    eax = 0x4082B4;
    esp += 4; return; /* ret */

}

/**
 * sub_00296690
 * Original: 0x00296690 - 0x00296696 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296690(void)
{

loc_00296690: ;
    eax = MEM32(0x471A30);
    esp += 4; return; /* ret */

}

/**
 * sub_002966A0
 * Original: 0x002966A0 - 0x002966AC (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002966A0(void)
{

loc_002966A0: ;
    eax = MEM32(esp + 4);
    MEM32(0x471A30) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002966B0
 * Original: 0x002966B0 - 0x002966B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002966B0(void)
{

loc_002966B0: ;
    eax = MEM32(0x5BE6D8);
    esp += 4; return; /* ret */

}

/**
 * sub_002966C0
 * Original: 0x002966C0 - 0x002966CC (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002966C0(void)
{

loc_002966C0: ;
    eax = MEM32(esp + 4);
    MEM32(0x5BE6D8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002966D0
 * Original: 0x002966D0 - 0x0029671B (75 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002966D0(void)
{

loc_002966D0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5BE5C4);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002966DFu); RECOMP_ABI_CALL(0x001EA540u, sub_001EA540); /* call 0x001EA540 */

loc_002966DF: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x4728DC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x002966EFu); RECOMP_ABI_CALL(0x00209470u, sub_00209470); /* call 0x00209470 */

loc_002966EF: ;
    eax = edi + 1;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002966FAu); RECOMP_ABI_CALL(0x001EA490u, sub_001EA490); /* call 0x001EA490 */

loc_002966FA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4728D4);
    PUSH32(esp, 0x4728CC);
    PUSH32(esp, 0x4728C4);
    ecx = esi;
    MEM32(eax + 0x30) = 0x293E50;
    PUSH32(esp, 0x00296718u); RECOMP_ABI_CALL(0x0021ACD0u, sub_0021ACD0); /* call 0x0021ACD0 */

loc_00296718: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
